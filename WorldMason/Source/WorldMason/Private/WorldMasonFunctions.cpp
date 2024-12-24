// Copyright Studio SyndiCat 2023. All Rights Reserved.


#include "WorldMasonFunctions.h"

#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SplineComponent.h"

#include "GeometryScript/MeshPrimitiveFunctions.h"
#include "GeometryScript/MeshNormalsFunctions.h"

#include "Kismet/KismetMathLibrary.h"
//#include "Materials/MaterialExpressionStrata.h"

void UWorldMasonFunctions::StretchInstanceMeshAlongSpline(UInstancedStaticMeshComponent* MeshComp,
                                                          USplineComponent* Spline, FVector Offset)
{
	if(MeshComp && Spline && MeshComp->GetStaticMesh())
	{
		for (int i = 0; i < Spline->GetNumberOfSplineSegments(); ++i)
		{
			FVector Local_Start = Spline->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local) + Offset;
			FVector Local_End = Spline->GetLocationAtSplinePoint(i+1, ESplineCoordinateSpace::Local) + Offset;

			FRotator Local_Rot = UKismetMathLibrary::FindLookAtRotation(Local_Start, Local_End);
			const float Local_ScaleX = UKismetMathLibrary::Vector_Distance(Local_Start, Local_End)/MeshComp->GetStaticMesh()->GetBoundingBox().Max.X;

			FTransform FinalTrans;
			FinalTrans.SetLocation(Local_Start);
			FinalTrans.SetRotation(Local_Rot.Quaternion());
			FinalTrans.SetScale3D(FVector(Local_ScaleX,1,1));
			
			MeshComp->AddInstance(FinalTrans);
		}
	}
	
}

TArray<FVector2D> UWorldMasonFunctions::Get2DVectorPointsFromSpline(USplineComponent* Spline)
{
	TArray<FVector2D> OutVecs;
	if(Spline)
	{
		for (int i = 0; i < Spline->GetNumberOfSplineSegments(); ++i)
		{
			OutVecs.Add(FVector2D(Spline->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local)));
		}
	}
	return OutVecs;
}

void UWorldMasonFunctions::ClampSplineTangents(USplineComponent* Spline, float Min, float Max)
{
	if(Spline)
	{
		TArray<FVector2D> OutVecs;
		for (int i = 0; i < Spline->GetNumberOfSplineSegments(); ++i)
		{
			FVector InVec = Spline->GetTangentAtSplinePoint(i, ESplineCoordinateSpace::Local);
			InVec = UKismetMathLibrary::ClampVectorSize(InVec, Min, Max);
			Spline->SetTangentAtSplinePoint(i, InVec, ESplineCoordinateSpace::Local);
		}
	}
}

void UWorldMasonFunctions::AddMeshInstancesAtSplinePoints(UInstancedStaticMeshComponent* MeshComp, USplineComponent* Spline, float OffsetSplineDistance, FVector OffsetLocation, FRotator OffsetRotation, FVector Scale)
{
	if(MeshComp && Spline )
	{
		for (int i = 0; i <= Spline->GetNumberOfSplineSegments(); ++i)
		{
			const float LocalDistance = OffsetSplineDistance+Spline->GetDistanceAlongSplineAtSplinePoint(i);
			FTransform LocalTrans;
			
			LocalTrans.SetLocation(Spline->GetLocationAtDistanceAlongSpline(LocalDistance, ESplineCoordinateSpace::Local)+OffsetLocation);
			LocalTrans.SetRotation(FQuat(Spline->GetRotationAtDistanceAlongSpline(LocalDistance, ESplineCoordinateSpace::Local)+OffsetRotation));
			LocalTrans.SetScale3D(Scale);
			
			MeshComp->AddInstance(LocalTrans);
		}
	}
}

void UWorldMasonFunctions::AddMeshInstancesAlongSpline(UInstancedStaticMeshComponent* MeshComp,
	USplineComponent* Spline,  EWorldMasonMeshLengthSelector Type, float Distance, bool bAtAverageDistance, bool bAimAtNextPoint, float OffsetDistance, FVector OffsetLocation, FRotator OffsetRotation, FVector Scale)
{
	if(MeshComp && Spline )
	{
		float LocalDistance = Distance;
		
		switch (Type)
		{
		case EWorldMasonMeshLengthSelector::MeshLengthSelect_Custom:
			LocalDistance = Distance;
			break;
		case EWorldMasonMeshLengthSelector::MeshLengthSelect_X:
			LocalDistance = MeshComp->GetStaticMesh()->GetBoundingBox().Max.X;
			break;
		case EWorldMasonMeshLengthSelector::MeshLengthSelect_Y:
			LocalDistance = MeshComp->GetStaticMesh()->GetBoundingBox().Max.Y;
			break;
		case EWorldMasonMeshLengthSelector::MeshLengthSelect_Z:
			LocalDistance = MeshComp->GetStaticMesh()->GetBoundingBox().Max.Z;
			break;
		default: ;
		}
		
		int32 NumOfPoints;

		if(bAtAverageDistance)
		{
			for (int i = 0; i <= Spline->GetNumberOfSplineSegments(); ++i)
			{
				
				
				float floatpoints=UKismetMathLibrary::Vector_Distance(
					Spline->GetLocationAtSplinePoint(i,ESplineCoordinateSpace::Local),
					Spline->GetLocationAtSplinePoint(i+1,ESplineCoordinateSpace::Local))/Distance;
				
				NumOfPoints=UKismetMathLibrary::FTrunc(floatpoints);

				for (int lerpval = 0; lerpval < NumOfPoints; ++lerpval)
				{
					if(lerpval!=0)
					{
						float newdistance=UKismetMathLibrary::Lerp(
						Spline->GetDistanceAlongSplineAtSplinePoint(i),
						Spline->GetDistanceAlongSplineAtSplinePoint(i+1),
						UKismetMathLibrary::Conv_IntToDouble(lerpval)/NumOfPoints);

						FTransform new_inst_trans=Spline->GetTransformAtDistanceAlongSpline(newdistance,ESplineCoordinateSpace::Local);
					
						new_inst_trans.SetScale3D(Scale);
						new_inst_trans.SetRotation(FQuat(Spline->GetRotationAtDistanceAlongSpline(newdistance, ESplineCoordinateSpace::Local)+OffsetRotation));
						MeshComp->AddInstance(new_inst_trans);
					}
				}
			}
		}
		else
		{
			NumOfPoints = UKismetMathLibrary::FTrunc(Spline->GetSplineLength()/LocalDistance);
			for (int i = 0; i <= NumOfPoints; ++i)
			{
				FVector VecPoint_This = Spline->GetLocationAtDistanceAlongSpline(i*LocalDistance+OffsetDistance, ESplineCoordinateSpace::Local)+OffsetLocation;
				FVector VecPoint_Next = Spline->GetLocationAtDistanceAlongSpline((i+1)*LocalDistance+OffsetDistance, ESplineCoordinateSpace::Local)+OffsetLocation;
			
				FTransform LocalTrans;
				LocalTrans.SetLocation(VecPoint_This);
				if(bAimAtNextPoint)
				{
					LocalTrans.SetRotation(FQuat(UKismetMathLibrary::FindLookAtRotation(VecPoint_This, VecPoint_Next)+OffsetRotation));
				}
				else
				{
					LocalTrans.SetRotation(FQuat(Spline->GetRotationAtDistanceAlongSpline(i*LocalDistance+OffsetDistance, ESplineCoordinateSpace::Local)+OffsetRotation));
				}
				LocalTrans.SetScale3D(Scale);
			
				MeshComp->AddInstance(LocalTrans);
			}
		}
	}
}

TArray<int32> UWorldMasonFunctions::GetSplinePointsInRangeOfVectors(USplineComponent* Spline, TArray<FVector> Vectors,
	float GetDistance)
{
	TArray<int32> OutIndices;

	for (const FVector TempVec : Vectors)
	{
		if(Spline)
		{
			for (int i = 0; i < Spline->GetNumberOfSplinePoints()-1; ++i)
			{
				if(UKismetMathLibrary::Vector_Distance(Spline->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local), TempVec)<=GetDistance)
				{
					OutIndices.AddUnique(i);
					break;
				}
			}
		}
	}
	return OutIndices;
}

void UWorldMasonFunctions::FormSplineAsCircle(USplineComponent* Spline, float Radius, int32 Steps)
{
	if(Spline)
	{
		Spline->ClearSplinePoints(true);
		for (int i = 0; i < Steps; ++i)
		{
			const FRotator LocalRot = UKismetMathLibrary::MakeRotator(0,0, float(i)/float(Steps)*360);
			FVector LocalDir = Radius*UKismetMathLibrary::Conv_RotatorToVector(LocalRot);
			Spline->AddSplinePoint(LocalDir, ESplineCoordinateSpace::Local);
		}
		Spline->SetClosedLoop(true);
	}
}

void UWorldMasonFunctions::FormSplineAsBox(USplineComponent* Spline, FVector Driver)
{
	if(Spline)
	{
		Spline->ClearSplinePoints();
		TArray<FVector> Pulls;
		Pulls.Add(FVector(0,0,0));
		Pulls.Add(FVector(1,0,0));
		Pulls.Add(FVector(1,1,0));
		Pulls.Add(FVector(0,1,0));

		for (FVector TempPull : Pulls)
		{
			Spline->AddSplineLocalPoint(TempPull*Driver);
		}
		Spline->UpdateSpline();
	}
}

void UWorldMasonFunctions::RemoveMeshInstancesFromBooleanPoints(UInstancedStaticMeshComponent* MeshComp, TArray<FVector> Vectors, float VectorRadius)
{
	if(MeshComp)
	{
		TArray<int32> LocalInts;
		for(FVector TempVec : Vectors)
		{
			TArray<int32> LocalInts_B = MeshComp->GetInstancesOverlappingSphere(TempVec, VectorRadius, false);
			
			for (const auto LocalInt : LocalInts_B)
			{
				if(MeshComp->IsValidInstance(LocalInt))
				{
					LocalInts.AddUnique(LocalInt);
				}
			}
		}

		for (const int32 LocalInt : LocalInts)
		{
			Local_RemoveMeshInstance(MeshComp, LocalInt);
		}
	}
}

void UWorldMasonFunctions::ReplaceMeshInstancesAtLocation(UInstancedStaticMeshComponent* OldMesh,
	UInstancedStaticMeshComponent* NewMesh, TArray<FVector> Vectors, float VectorRadius)
{
	if(NewMesh && OldMesh)
	{
		for(FVector TempVec : Vectors)
		{
			TArray<int32> LocalInts = OldMesh->GetInstancesOverlappingSphere(TempVec, VectorRadius, false);
			for (const auto LocalInt : LocalInts)
			{
				FTransform LocalTrans;
				OldMesh->GetInstanceTransform(LocalInt, LocalTrans);
				NewMesh->AddInstance(LocalTrans);
				
				Local_RemoveMeshInstance(OldMesh, LocalInt);
			}
		}
	}
	
}

void UWorldMasonFunctions::Local_RemoveMeshInstance(UInstancedStaticMeshComponent* OldMesh, int32 Inst)
{
	FTransform NewTrans;
	NewTrans.SetLocation(FVector(0,0,-1000000));
	NewTrans.SetScale3D(FVector(0.0001,0.0001,0.0001));
	if(OldMesh)
	{
		//OldMesh->GetInstanceTransform(Inst, NewTrans);
		OldMesh->UpdateInstanceTransform(Inst, NewTrans,true);
	}
	
}

void UWorldMasonFunctions::AppendMeshInstancesAtLocation(UInstancedStaticMeshComponent* OldMesh,
                                                         UInstancedStaticMeshComponent* AppendedMesh, TArray<FVector> Vectors, float VectorRadius)
{
	if(AppendedMesh && OldMesh)
	{
		for(FVector TempVec : Vectors)
		{
			TArray<int32> LocalInts = OldMesh->GetInstancesOverlappingSphere(TempVec, VectorRadius, false);
			for (const auto LocalInt : LocalInts)
			{
				FTransform LocalTrans;
				OldMesh->GetInstanceTransform(LocalInt, LocalTrans);
				AppendedMesh->AddInstance(LocalTrans);
			}
		}
	}
}

void UWorldMasonFunctions::RemoveMultiMeshInstancesFromBooleanPoints(TArray<UInstancedStaticMeshComponent*> MeshComps, TArray<FVector> Vectors, float VectorRadius)
{
	for (const auto LocalComp : MeshComps)
	{
		if(LocalComp)
		{
			RemoveMeshInstancesFromBooleanPoints(LocalComp, Vectors, VectorRadius);
		}
	}
}

void UWorldMasonFunctions::OffsetMeshInstances(UInstancedStaticMeshComponent* MeshComp, FVector Location,
                                               FRotator Rotation, FVector Scale)
{
	if(MeshComp)
	{
		for (int i = 0; i < MeshComp->GetInstanceCount(); ++i)
		{
			FTransform Local_Trans;
			MeshComp->GetInstanceTransform(i, Local_Trans, ESplineCoordinateSpace::Local);
			Local_Trans.SetLocation(Local_Trans.GetLocation()+Location);
			//Local_Trans.SetRotation(Local_Trans.GetRotation()+FQuat(Rotation));
			Local_Trans.SetScale3D(Local_Trans.GetScale3D()*Scale);
			MeshComp->UpdateInstanceTransform(i,Local_Trans);
		}
	}
}

void UWorldMasonFunctions::AddMeshInstancesAlongDriver(UInstancedStaticMeshComponent* MeshComp, FVector Driver,
	FVector DriverPull, FVector OffsetPull, FRotator Direction, float Distance, float OffsetDistance, FVector OffsetLocation, 
	FRotator OffsetRotation)
{
	TArray<UInstancedStaticMeshComponent*> LocalMeshComps;
	LocalMeshComps.Add(MeshComp);

	AddMeshInstancesAlongDriver_Multi(LocalMeshComps, false,0, Driver, DriverPull, OffsetPull, Direction, Distance, OffsetDistance, OffsetLocation, OffsetRotation);
}

void UWorldMasonFunctions::AddMeshInstancesAlongDriver_Multi(TArray<UInstancedStaticMeshComponent*> MeshComps,
	bool RandomOrder, int32 RandomSeed, FVector Driver, FVector DriverPull, FVector OffsetPull, FRotator Direction, float Distance,float OffsetDistance, 
	FVector OffsetLocation, FRotator OffsetRotation)
{
	const FVector LocalDriver = Driver*DriverPull;
	const int32 LocalSteps = UKismetMathLibrary::FTrunc(UKismetMathLibrary::VSize(LocalDriver)/Distance);

	int32 MeshCompIndex = -1;

	for (int i = 0; i < LocalSteps; ++i)
	{
		FVector Local_FinalVec = ((i*Distance+OffsetDistance)*UKismetMathLibrary::Conv_RotatorToVector(Direction))+Driver*OffsetPull+OffsetLocation;
		FQuat Local_FinalRot = FQuat(UKismetMathLibrary::ComposeRotators(Direction, OffsetRotation));

		FTransform LocalTrans;
		LocalTrans.SetLocation(Local_FinalVec);
		LocalTrans.SetRotation(Local_FinalRot);

		UInstancedStaticMeshComponent* LocalMeshComp;

		if(RandomOrder)
		{
			LocalMeshComp = GetRandomInstanceMeshComponentFromSeed(MeshComps, RandomSeed);
		}
		else
		{
			if(MeshCompIndex+1<MeshComps.Num())
			{
				MeshCompIndex = MeshCompIndex+1;
			}
			else
			{
				MeshCompIndex = 0;
			}
			LocalMeshComp = MeshComps[MeshCompIndex];
		}
		
		LocalMeshComp->AddInstance(LocalTrans);
	}
}

void UWorldMasonFunctions::BuildMeshBoxFromDriver(UInstancedStaticMeshComponent* MeshComp, FVector Driver,
	float Distance, float OffsetDistance, float Height, bool ApplyFlippedOffset, bool ApplyOffsetPull, int32 MaxHeightSteps, bool Wall1, bool Wall2, bool Wall3, bool Wall4)
{
	if(MeshComp && MeshComp->GetStaticMesh())
	{
		TArray<UInstancedStaticMeshComponent*> LocalMeshComps;
		LocalMeshComps.Add(MeshComp);
		BuildMeshBoxFromDriver_Multi(LocalMeshComps, false, 0, Driver, Distance, OffsetDistance, Height, ApplyFlippedOffset, ApplyOffsetPull, MaxHeightSteps, Wall1, Wall2, Wall3, Wall4);
	}
	
}

void UWorldMasonFunctions::BuildMeshBoxFromDriver_Multi(TArray<UInstancedStaticMeshComponent*> MeshComps, bool RandomOrder,
	int32 RandomSeed, FVector Driver, float Distance, float OffsetDistance, float Height, bool ApplyFlippedOffset,
	bool ApplyOffsetPull, int32 MaxHeightSteps, bool Wall1, bool Wall2, bool Wall3, bool Wall4)
{
	int32 HeightSteps = Driver.Z/Height;
	HeightSteps = UKismetMathLibrary::Clamp(HeightSteps, 0, MaxHeightSteps);

	const float FlippedOffset = UKismetMathLibrary::SelectFloat(Distance,0,ApplyFlippedOffset);
		
	for (int i = 0; i < HeightSteps; ++i)
		{
			const float TempHeight = i*Height;
			if(Wall1)
			{
				AddMeshInstancesAlongDriver_Multi(MeshComps,  RandomOrder, RandomSeed, Driver, FVector(1,0,0), FVector(0,0,0), FRotator(0,0,0), Distance, OffsetDistance, FVector(FlippedOffset,0,TempHeight), FRotator(0,180,0));
			}
			if(Wall2)
			{
				AddMeshInstancesAlongDriver_Multi(MeshComps,  RandomOrder, RandomSeed, Driver, FVector(0,1,0), FVector(0,0,0), FRotator(0,90,0), Distance, OffsetDistance, FVector(0,0,TempHeight), FRotator(0,0,0));
			}
			if(Wall3)
			{
				const float ExtraOffset_3 = UKismetMathLibrary::SelectFloat(Distance,0,ApplyOffsetPull);
				AddMeshInstancesAlongDriver_Multi(MeshComps, RandomOrder, RandomSeed, Driver, FVector(1,0,0), FVector(0,1,0), FRotator(0,0,0), Distance, OffsetDistance, FVector(0,ExtraOffset_3,TempHeight), FRotator(0,0,0));
			}
			if(Wall4)
			{
				const float ExtraOffset_4 = UKismetMathLibrary::SelectFloat(Distance,0,ApplyOffsetPull);
				AddMeshInstancesAlongDriver_Multi(MeshComps,  RandomOrder, RandomSeed, Driver, FVector(0,1,0), FVector(1,0,0), FRotator(0,90,0), Distance, OffsetDistance, FVector(ExtraOffset_4,FlippedOffset,TempHeight), FRotator(0,180,0));
			}
		}
	
}

UInstancedStaticMeshComponent* UWorldMasonFunctions::GetRandomInstanceMeshComponentFromSeed(
	TArray<UInstancedStaticMeshComponent*> MeshComps, int32 Seed)
{
	FRandomStream LocalSteam;
	UKismetMathLibrary::SetRandomStreamSeed(LocalSteam, Seed);
	const int32 LocalIndex = UKismetMathLibrary::RandomIntegerFromStream(MeshComps.Num()-1, LocalSteam);
	return MeshComps[LocalIndex];
}

void UWorldMasonFunctions::BuildMeshTilesFromDriver(UInstancedStaticMeshComponent* MeshComp, FVector Driver,
	float Distance, FVector OffsetLocation, FRotator OffsetRotation, bool X, bool Y, bool Z)
{
	if(MeshComp)
	{
		const FIntVector LocalSteps = UKismetMathLibrary::FTruncVector((Driver/UKismetMathLibrary::Conv_FloatToVector(Distance))-1);
		
		int32 StepsX=0; 
		int32 StepsY=0;
		int32 StepsZ=0;
		
		if(X)
		{
			StepsX = LocalSteps.X;
		}
		if(Y)
		{
			StepsY = LocalSteps.Y;
		}
		if(Z)
		{
			StepsZ = LocalSteps.Z;
		}
		
		for (int iX = 0; iX <= StepsX; ++iX)
		{
			for (int iY = 0; iY <= StepsY; ++iY)
			{
				for (int iZ = 0; iZ <= StepsZ; ++iZ)
				{
					FVector LocalVec = UKismetMathLibrary::Conv_IntVectorToVector(FIntVector(iX,iY,iZ));
					LocalVec = LocalVec*Distance;
					FTransform LocalTrans;
					LocalTrans.SetLocation(LocalVec+OffsetLocation);
					LocalTrans.SetRotation(FQuat(OffsetRotation));
					
					MeshComp->AddInstance(LocalTrans);
				}
			}
		}
	}
	
}

void UWorldMasonFunctions::AddNoiseToMeshInstances(UInstancedStaticMeshComponent* MeshComp, FTransform Min,
	FTransform Max, int32 NoiseSeed)
{
	if(MeshComp)
	{
		for (int i = 0; i < MeshComp->GetInstanceCount(); ++i)
		{
			FTransform StartTrans;
			MeshComp->GetInstanceTransform(i, StartTrans);

			FTransform LocalTrans_Min;
			LocalTrans_Min.SetLocation(StartTrans.GetLocation()+Min.GetLocation());
			LocalTrans_Min.SetRotation(StartTrans.GetRotation()*Min.GetRotation());
			LocalTrans_Min.SetScale3D(StartTrans.GetScale3D()*Min.GetScale3D());
			
			
			FTransform LocalTrans_Max;
			LocalTrans_Max.SetLocation(StartTrans.GetLocation()+Max.GetLocation());
			LocalTrans_Max.SetRotation(StartTrans.GetRotation()*Max.GetRotation());
			LocalTrans_Max.SetScale3D(StartTrans.GetScale3D()*Max.GetScale3D());
			
			FTransform FinalTrans = UKismetMathLibrary::TLerp(LocalTrans_Min, LocalTrans_Max, WorldMasonNoise_Float(NoiseSeed+(i*4.632)), ELerpInterpolationMode::QuatInterp);

			MeshComp->UpdateInstanceTransform(i,FinalTrans);
		}
	}
}


FVector UWorldMasonFunctions::GetScaledMeshBounds(UStaticMesh* Mesh, FVector Multiplied, FVector Divided)
{
	FVector LocalVec;
	if(Mesh)
	{
		LocalVec = Mesh->GetBoundingBox().Max*Multiplied/Divided;
	}
	return LocalVec;
}

FVector UWorldMasonFunctions::GetScaledComponentMeshBounds(UStaticMeshComponent* MeshComp, FVector Multiplied,
	FVector Divided)
{
	FVector LocalVec;
	if(MeshComp)
	{
		LocalVec = GetScaledMeshBounds(MeshComp->GetStaticMesh(), Multiplied, Divided);
	}
	return LocalVec;
}

void UWorldMasonFunctions::ClampVectorToStep_Ref(FVector& Vector, float StepSize)
{
	Vector = ClampVectorToStep_Copy(Vector, StepSize);
}

FVector UWorldMasonFunctions::ClampVectorToStep_Copy(FVector Vector, float StepSize)
{
	return UKismetMathLibrary::Conv_IntVectorToVector(UKismetMathLibrary::FTruncVector(Vector/UKismetMathLibrary::Conv_FloatToVector(StepSize))*StepSize);
}

//#####################################################################################//
//  Vector //
//#####################################################################################/

TArray<FVector> UWorldMasonFunctions::GetScaledVectors(FVector VectorIn, TArray<FVector> Scalars)
{
	TArray<FVector> OutVecs;
	for(FVector TempScale : Scalars)
	{
		OutVecs.Add(TempScale*VectorIn);
	}
	return OutVecs;
}

TArray<FVector> UWorldMasonFunctions::GetVectorCornersXY(FVector VectorIn)
{
	TArray<FVector> LocalScalars;
	LocalScalars.Add(FVector(0,0,0));
	LocalScalars.Add(FVector(1,0,0));
	LocalScalars.Add(FVector(0,1,0));
	LocalScalars.Add(FVector(1,1,0));
	
	return GetScaledVectors(VectorIn, LocalScalars);
}

TArray<FVector> UWorldMasonFunctions::GetVectorCornersXYZ(FVector VectorIn)
{
	TArray<FVector> LocalScalars;
	LocalScalars.Add(FVector(0,0,0));
	LocalScalars.Add(FVector(1,0,0));
	LocalScalars.Add(FVector(0,1,0));
	LocalScalars.Add(FVector(1,1,0));
	LocalScalars.Add(FVector(0,0,1));
	LocalScalars.Add(FVector(1,0,1));
	LocalScalars.Add(FVector(0,1,1));
	LocalScalars.Add(FVector(1,1,1));

	return GetScaledVectors(VectorIn, LocalScalars);
}

UDynamicMesh* UWorldMasonFunctions::BuildDynamicMeshAlongSpline(UDynamicMesh* DynamicMesh, USplineComponent* Spline,
                                                                FTransform Transform, float Height, FGeometryScriptPrimitiveOptions PrimitiveOptions)
{
	if(Spline && DynamicMesh)
	{
		FGeometryScriptSplitNormalsOptions Local_NormOpt;
		FGeometryScriptCalculateNormalsOptions Local_CalcOpt;
		TArray<FVector2D> VecPoints = UWorldMasonFunctions::Get2DVectorPointsFromSpline(Spline);
		
		UDynamicMesh* Local_DynamicMesh = UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(
			DynamicMesh, PrimitiveOptions, Transform, VecPoints, Height);
		Local_DynamicMesh = UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals(Local_DynamicMesh, Local_NormOpt, Local_CalcOpt);
		
		return Local_DynamicMesh;
	}
	return nullptr;
}

UDynamicMesh* UWorldMasonFunctions::BuildDynamicMeshAsRamp(UDynamicMesh* DynamicMesh, FVector Driver, FGeometryScriptPrimitiveOptions PrimitiveOptions)
{
	TArray<FVector2d> PolyVecs;
	TArray<FVector2d> VectorPulls;

	VectorPulls.Add(FVector2d(0,0));
	VectorPulls.Add(FVector2d(1,0));
	VectorPulls.Add(FVector2d(1,1));
	
	for (auto LocalPull : VectorPulls)
	{
		FVector2d LocalDriverVec;
		LocalDriverVec.X = Driver.X;
		LocalDriverVec.Y = Driver.Z;

		PolyVecs.Add(LocalPull*LocalDriverVec);
	}
	FTransform LocalTrans;
	LocalTrans.SetLocation(FVector(0,Driver.Y,0));
	LocalTrans.SetRotation(FQuat(FRotator(0,0,-90)));
	
	FGeometryScriptSplitNormalsOptions Local_NormOpt;
	FGeometryScriptCalculateNormalsOptions Local_CalcOpt;

	UDynamicMesh* Local_DynamicMesh = UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendSimpleExtrudePolygon(
		DynamicMesh, PrimitiveOptions, LocalTrans, PolyVecs, Driver.Y*2);
	Local_DynamicMesh = UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals(Local_DynamicMesh, Local_NormOpt, Local_CalcOpt);

	return Local_DynamicMesh;
}

UDynamicMesh* UWorldMasonFunctions::BuildStepsAlongDriver(UDynamicMesh* DynamicMesh, FVector Driver, FTransform Offset, float StepDistance,
	float StepHeight)
{
	if(DynamicMesh)
	{
		const int32 StepCount = UKismetMathLibrary::FTrunc(Driver.X/StepDistance);
		for (int i = 0; i <= StepCount; ++i)
		{
			FVector LocalLocation = (UKismetMathLibrary::Conv_IntToFloat(i)/UKismetMathLibrary::Conv_IntToFloat(StepCount)*Driver*FVector(1,0,1));
			FTransform LocalTrans;
			LocalTrans.SetLocation(LocalLocation+Offset.GetLocation());
			LocalTrans.SetRotation(Offset.GetRotation());
			LocalTrans.SetScale3D(Offset.GetScale3D());

			const FGeometryScriptPrimitiveOptions PrimitiveOptions;
			UGeometryScriptLibrary_MeshPrimitiveFunctions::AppendBox(DynamicMesh, PrimitiveOptions, LocalTrans, StepDistance, Driver.Y*2, StepHeight);
		}
		
		return DynamicMesh;
	}
	return nullptr;
}

//#############################################
// NOISE
//#############################################

float UWorldMasonFunctions::WorldMasonNoise_Float(int32 Seed)
{
	/*
	TArray<float> LocalNoise;
	LocalNoise.Add(0.283578);
	LocalNoise.Add(0.962249);
	LocalNoise.Add(0.294443);
	LocalNoise.Add(0.338328);
	LocalNoise.Add(0.472671);
	LocalNoise.Add(0.531266);
	LocalNoise.Add(0.645405);
	LocalNoise.Add(0.641194);
	LocalNoise.Add(0.604083);
	LocalNoise.Add(0.713248);
	LocalNoise.Add(0.578967);
	LocalNoise.Add(0.487228);
	LocalNoise.Add(0.052950);
	LocalNoise.Add(0.565416);
	LocalNoise.Add(0.090396);
	LocalNoise.Add(0.061068);
	LocalNoise.Add(0.364330);
	LocalNoise.Add(0.301523);
	LocalNoise.Add(0.656514);
	LocalNoise.Add(0.199011);
	LocalNoise.Add(0.529893);
	LocalNoise.Add(0.616718);
	LocalNoise.Add(0.405255);
	LocalNoise.Add(0.066530);
	LocalNoise.Add(0.541978);
	LocalNoise.Add(0.006745);
	LocalNoise.Add(0.549638);
	LocalNoise.Add(0.486526);
	LocalNoise.Add(0.168371);
	LocalNoise.Add(0.534532);
	LocalNoise.Add(0.136113);
	LocalNoise.Add(0.541581);
	LocalNoise.Add(0.512528);
	LocalNoise.Add(0.936033);
	LocalNoise.Add(0.332011);
	LocalNoise.Add(0.656240);
	LocalNoise.Add(0.070132);
	LocalNoise.Add(0.868770);
	LocalNoise.Add(0.621937);
	LocalNoise.Add(0.368450);
	LocalNoise.Add(0.074374);
	LocalNoise.Add(0.725913);
	LocalNoise.Add(0.901914);
	LocalNoise.Add(0.991028);
	LocalNoise.Add(0.372936);
	LocalNoise.Add(0.614277);
	LocalNoise.Add(0.277200);
	LocalNoise.Add(0.077761);
	LocalNoise.Add(0.828303);
	LocalNoise.Add(0.917508);
	
	const int32 MaxSeedVal = 9999999;
	int32 LocalSeed = UKismetMathLibrary::Clamp(Seed, 0, MaxSeedVal);

	
	int32 SeedRandLerp = (LocalNoise.Num()-1)*FMath::PerlinNoise1D(UKismetMathLibrary::Conv_IntToFloat(LocalSeed)/10000.00);
	
	int32 LerpVal = (LocalNoise.Num()-1)*FMath::PerlinNoise1D(UKismetMathLibrary::Conv_IntToFloat(LocalSeed)/20000.00);
	
	return  UKismetMathLibrary::Lerp(LocalNoise[SeedRandLerp], FMath::PerlinNoise1D(Seed/1500), LocalNoise[LerpVal]);
	*/

	return UKismetMathLibrary::Abs(UKismetMathLibrary::PerlinNoise1D(Seed*0.943846));
	
}