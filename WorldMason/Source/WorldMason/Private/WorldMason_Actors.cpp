// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldMason_Actors.h"
#include "WorldMason_Actors.h"
#include "PCGGraph.h"
#include "PCGComponent.h"
#include "WorldMasonFunctions.h"
#include "Kismet/KismetMathLibrary.h"

AWorldMason_SplineActor::AWorldMason_SplineActor()
{
	ActorRoot= CreateDefaultSubobject<USceneComponent>("Root");

	SplineComponent= CreateOptionalDefaultSubobject<USplineComponent>("Spline");
	if(SplineComponent) { SplineComponent->SetupAttachment(ActorRoot); }

	DynamicMeshComponent= CreateOptionalDefaultSubobject<UDynamicMeshComponent>("DynamicMesh");
	if(DynamicMeshComponent)
	{
		DynamicMeshComponent->SetupAttachment(ActorRoot);
		DynamicMeshComponent->SetComplexAsSimpleCollisionEnabled(true);
		DynamicMeshComponent->SetCollisionResponseToAllChannels(ECR_Block);
		DynamicMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	PCGComponent=CreateOptionalDefaultSubobject<UPCGComponent>("PCG");
	MultiMeshComponent= CreateOptionalDefaultSubobject<UWorldMason_MultiMeshInstance>("MultiMeshInstance");

}

void AWorldMason_SplineActor::OnConstruction(const FTransform& Transform)
{
	//MultiMeshComponent->ClearAllInstances();
	if(SplineActorScript)
	{
		SplineActorScript->OnUpdate(this);
	}
	DynamicMeshComponent->GetDynamicMesh()->Reset();
	DynamicMeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	if(bBuildMeshblockFromSpline)
	{
		FGeometryScriptPrimitiveOptions GeoOptions;
		//GeoOptions.bFlipOrientation=true;
		FTransform tempTransform;
		if(bMeshblockOffsetFromHeight)
		{
			tempTransform.SetLocation(FVector(0,0,MeshblockHeight));
		}
		UWorldMasonFunctions::BuildDynamicMeshAlongSpline(DynamicMeshComponent->GetDynamicMesh(),SplineComponent,tempTransform,MeshblockHeight,GeoOptions);
		if(MeshblockMaterial)
		{
			DynamicMeshComponent->SetMaterial(0,MeshblockMaterial);
		}
	}
	if(SplineComponent)
	{
		SplineComponent->SetClosedLoop(bClosedLoop);
		UWorldMasonFunctions::ClampSplineTangents(SplineComponent,ClampSplineRange*-1,ClampSplineRange);
	}
	if(PCGComponent && bAutoGeneratePCG)
	{
		//PCGComponent->Cleanup();
		PCGComponent->Generate();
	}
	
	Super::OnConstruction(Transform);
}

void AWorldMason_SplineActor::BeginPlay()
{
	DynamicMeshComponent->UpdateCollision();
	Super::BeginPlay();
}

void AWorldMason_SplineActor::AddMeshes_AlongSpline(UStaticMesh* Mesh, bool bAverageDistance, bool bAimToNext, float Distance,
	const FTransform Offset)
{
	if(Mesh)
	{
		UWorldMasonFunctions::AddMeshInstancesAlongSpline(MultiMeshComponent->GetInstancedMeshComponent(Mesh),
			SplineComponent,
			EWorldMasonMeshLengthSelector::MeshLengthSelect_Custom,
			Distance,
			bAverageDistance,
			bAimToNext,
			0,
			Offset.GetLocation(),
			Offset.GetRotation().Rotator(),
			Offset.GetScale3D());
	}
}

void AWorldMason_SplineActor::AddMeshes_AtSplinePoints(UStaticMesh* Mesh, float Distance, const FTransform Offset)
{
	if(Mesh)
	{
		UWorldMasonFunctions::AddMeshInstancesAtSplinePoints(MultiMeshComponent->GetInstancedMeshComponent(Mesh),
			SplineComponent,
			Distance,
			Offset.GetLocation(),
			Offset.GetRotation().Rotator(),
			Offset.GetScale3D());
	}
}

#if WITH_EDITOR
bool AWorldMason_SplineActor::GetReferencedContentObjects(TArray<UObject*>& Objects) const
{
	Super::GetReferencedContentObjects(Objects);
	
	if (PCGComponent)
	{
		if (UPCGGraph* PCGGraph = PCGComponent->GetGraph())
		{
			Objects.Add(PCGGraph);
		}
	}
	return true;
}
#endif // WITH_EDITOR

AWorldMason_ModularActor::AWorldMason_ModularActor()
{
	Root=CreateDefaultSubobject<USceneComponent>("Root");
	Root->SetMobility(EComponentMobility::Static);
}

void AWorldMason_ModularActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	Rebuild();
}

void AWorldMason_ModularActor::BeginPlay()
{
	Rebuild();
	Super::BeginPlay();
}

void AWorldMason_ModularActor::Rebuild()
{
	ModuleStyles.SetNum(GetModuleComponents().Num());

	for (auto* temp_comp : GetModuleComponents())
	{
		int32 module_index=GetModuleComponents().Find(temp_comp);
		if(temp_comp && ModuleStyles.IsValidIndex(module_index))
		{
			TSubclassOf<AActor> in_class=nullptr;
			if(ModuleActorClasses.IsValidIndex(ModuleStyles[module_index]))
			{
				in_class=ModuleActorClasses[ModuleStyles[module_index]];
			}
			temp_comp->SetChildActorClass(in_class);
		}
	}
}

TArray<UChildActorComponent*> AWorldMason_ModularActor::GetModuleComponents_Implementation()
{
	TArray<UChildActorComponent*> out; return out;
}

