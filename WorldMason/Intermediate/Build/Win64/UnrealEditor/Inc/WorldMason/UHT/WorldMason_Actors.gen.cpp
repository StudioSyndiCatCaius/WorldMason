// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMason/Public/WorldMason_Actors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMason_Actors() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WorldMason();
WORLDMASON_API UClass* Z_Construct_UClass_AWorldMason_ModularActor();
WORLDMASON_API UClass* Z_Construct_UClass_AWorldMason_ModularActor_NoRegister();
WORLDMASON_API UClass* Z_Construct_UClass_AWorldMason_SplineActor();
WORLDMASON_API UClass* Z_Construct_UClass_AWorldMason_SplineActor_NoRegister();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMason_MultiMeshInstance_NoRegister();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMason_SplineActorScript();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMason_SplineActorScript_NoRegister();
// End Cross Module References

// Begin Class UWorldMason_SplineActorScript Function OnUpdate
struct WorldMason_SplineActorScript_eventOnUpdate_Parms
{
	AWorldMason_SplineActor* Actor;
};
static FName NAME_UWorldMason_SplineActorScript_OnUpdate = FName(TEXT("OnUpdate"));
void UWorldMason_SplineActorScript::OnUpdate(AWorldMason_SplineActor* Actor) const
{
	WorldMason_SplineActorScript_eventOnUpdate_Parms Parms;
	Parms.Actor=Actor;
	const_cast<UWorldMason_SplineActorScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UWorldMason_SplineActorScript_OnUpdate),&Parms);
}
struct Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SplineActor" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_SplineActorScript_eventOnUpdate_Parms, Actor), Z_Construct_UClass_AWorldMason_SplineActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_SplineActorScript, nullptr, "OnUpdate", nullptr, nullptr, Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::PropPointers), sizeof(WorldMason_SplineActorScript_eventOnUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(WorldMason_SplineActorScript_eventOnUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWorldMason_SplineActorScript Function OnUpdate

// Begin Class UWorldMason_SplineActorScript
void UWorldMason_SplineActorScript::StaticRegisterNativesUWorldMason_SplineActorScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMason_SplineActorScript);
UClass* Z_Construct_UClass_UWorldMason_SplineActorScript_NoRegister()
{
	return UWorldMason_SplineActorScript::StaticClass();
}
struct Z_Construct_UClass_UWorldMason_SplineActorScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldMason_Actors.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldMason_SplineActorScript_OnUpdate, "OnUpdate" }, // 4083760649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldMason_SplineActorScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldMason_SplineActorScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_SplineActorScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMason_SplineActorScript_Statics::ClassParams = {
	&UWorldMason_SplineActorScript::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001110A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_SplineActorScript_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMason_SplineActorScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMason_SplineActorScript()
{
	if (!Z_Registration_Info_UClass_UWorldMason_SplineActorScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMason_SplineActorScript.OuterSingleton, Z_Construct_UClass_UWorldMason_SplineActorScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMason_SplineActorScript.OuterSingleton;
}
template<> WORLDMASON_API UClass* StaticClass<UWorldMason_SplineActorScript>()
{
	return UWorldMason_SplineActorScript::StaticClass();
}
UWorldMason_SplineActorScript::UWorldMason_SplineActorScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMason_SplineActorScript);
UWorldMason_SplineActorScript::~UWorldMason_SplineActorScript() {}
// End Class UWorldMason_SplineActorScript

// Begin Class AWorldMason_SplineActor Function AddMeshes_AlongSpline
struct Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics
{
	struct WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms
	{
		UStaticMesh* Mesh;
		bool bAverageDistance;
		bool bAimToNext;
		float Distance;
		FTransform Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static void NewProp_bAverageDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAverageDistance;
	static void NewProp_bAimToNext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimToNext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_bAverageDistance_SetBit(void* Obj)
{
	((WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms*)Obj)->bAverageDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_bAverageDistance = { "bAverageDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms), &Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_bAverageDistance_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_bAimToNext_SetBit(void* Obj)
{
	((WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms*)Obj)->bAimToNext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_bAimToNext = { "bAimToNext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms), &Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_bAimToNext_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_bAverageDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_bAimToNext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldMason_SplineActor, nullptr, "AddMeshes_AlongSpline", nullptr, nullptr, Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::WorldMason_SplineActor_eventAddMeshes_AlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldMason_SplineActor::execAddMeshes_AlongSpline)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_UBOOL(Z_Param_bAverageDistance);
	P_GET_UBOOL(Z_Param_bAimToNext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_STRUCT(FTransform,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMeshes_AlongSpline(Z_Param_Mesh,Z_Param_bAverageDistance,Z_Param_bAimToNext,Z_Param_Distance,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class AWorldMason_SplineActor Function AddMeshes_AlongSpline

// Begin Class AWorldMason_SplineActor Function AddMeshes_AtSplinePoints
struct Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics
{
	struct WorldMason_SplineActor_eventAddMeshes_AtSplinePoints_Parms
	{
		UStaticMesh* Mesh;
		float Distance;
		FTransform Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_SplineActor_eventAddMeshes_AtSplinePoints_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_SplineActor_eventAddMeshes_AtSplinePoints_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_SplineActor_eventAddMeshes_AtSplinePoints_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldMason_SplineActor, nullptr, "AddMeshes_AtSplinePoints", nullptr, nullptr, Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::WorldMason_SplineActor_eventAddMeshes_AtSplinePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::WorldMason_SplineActor_eventAddMeshes_AtSplinePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldMason_SplineActor::execAddMeshes_AtSplinePoints)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_STRUCT(FTransform,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMeshes_AtSplinePoints(Z_Param_Mesh,Z_Param_Distance,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class AWorldMason_SplineActor Function AddMeshes_AtSplinePoints

// Begin Class AWorldMason_SplineActor
void AWorldMason_SplineActor::StaticRegisterNativesAWorldMason_SplineActor()
{
	UClass* Class = AWorldMason_SplineActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMeshes_AlongSpline", &AWorldMason_SplineActor::execAddMeshes_AlongSpline },
		{ "AddMeshes_AtSplinePoints", &AWorldMason_SplineActor::execAddMeshes_AtSplinePoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldMason_SplineActor);
UClass* Z_Construct_UClass_AWorldMason_SplineActor_NoRegister()
{
	return AWorldMason_SplineActor::StaticClass();
}
struct Z_Construct_UClass_AWorldMason_SplineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldMason_Actors.h" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorRoot_MetaData[] = {
		{ "Category", "Spline" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End AActor Interface\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiMeshComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGeneratePCG_MetaData[] = {
		{ "Category", "Spline|PCG" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineActorScript_MetaData[] = {
		{ "Category", "Spline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainDriver_MetaData[] = {
		{ "Category", "Spline" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampSplineRange_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildMeshblockFromSpline_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshblockHeight_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshblockOffsetFromHeight_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshblockMaterial_MetaData[] = {
		{ "Category", "Spline" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PCGComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static void NewProp_bAutoGeneratePCG_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGeneratePCG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineActorScript;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MainDriver;
	static void NewProp_bClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampSplineRange;
	static void NewProp_bBuildMeshblockFromSpline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildMeshblockFromSpline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshblockHeight;
	static void NewProp_bMeshblockOffsetFromHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshblockOffsetFromHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshblockMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AlongSpline, "AddMeshes_AlongSpline" }, // 4155694479
		{ &Z_Construct_UFunction_AWorldMason_SplineActor_AddMeshes_AtSplinePoints, "AddMeshes_AtSplinePoints" }, // 2698031354
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldMason_SplineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_ActorRoot = { "ActorRoot", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, ActorRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorRoot_MetaData), NewProp_ActorRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMeshComponent_MetaData), NewProp_DynamicMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_MultiMeshComponent = { "MultiMeshComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, MultiMeshComponent), Z_Construct_UClass_UWorldMason_MultiMeshInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiMeshComponent_MetaData), NewProp_MultiMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_PCGComponent = { "PCGComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, PCGComponent), Z_Construct_UClass_UPCGComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGComponent_MetaData), NewProp_PCGComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x001004000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
void Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bAutoGeneratePCG_SetBit(void* Obj)
{
	((AWorldMason_SplineActor*)Obj)->bAutoGeneratePCG = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bAutoGeneratePCG = { "bAutoGeneratePCG", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldMason_SplineActor), &Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bAutoGeneratePCG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoGeneratePCG_MetaData), NewProp_bAutoGeneratePCG_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_SplineActorScript = { "SplineActorScript", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, SplineActorScript), Z_Construct_UClass_UWorldMason_SplineActorScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineActorScript_MetaData), NewProp_SplineActorScript_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_MainDriver = { "MainDriver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, MainDriver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainDriver_MetaData), NewProp_MainDriver_MetaData) };
void Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
{
	((AWorldMason_SplineActor*)Obj)->bClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldMason_SplineActor), &Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosedLoop_MetaData), NewProp_bClosedLoop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_ClampSplineRange = { "ClampSplineRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, ClampSplineRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampSplineRange_MetaData), NewProp_ClampSplineRange_MetaData) };
void Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bBuildMeshblockFromSpline_SetBit(void* Obj)
{
	((AWorldMason_SplineActor*)Obj)->bBuildMeshblockFromSpline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bBuildMeshblockFromSpline = { "bBuildMeshblockFromSpline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldMason_SplineActor), &Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bBuildMeshblockFromSpline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildMeshblockFromSpline_MetaData), NewProp_bBuildMeshblockFromSpline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_MeshblockHeight = { "MeshblockHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, MeshblockHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshblockHeight_MetaData), NewProp_MeshblockHeight_MetaData) };
void Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bMeshblockOffsetFromHeight_SetBit(void* Obj)
{
	((AWorldMason_SplineActor*)Obj)->bMeshblockOffsetFromHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bMeshblockOffsetFromHeight = { "bMeshblockOffsetFromHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldMason_SplineActor), &Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bMeshblockOffsetFromHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshblockOffsetFromHeight_MetaData), NewProp_bMeshblockOffsetFromHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_MeshblockMaterial = { "MeshblockMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_SplineActor, MeshblockMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshblockMaterial_MetaData), NewProp_MeshblockMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldMason_SplineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_ActorRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_DynamicMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_MultiMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_PCGComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bAutoGeneratePCG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_SplineActorScript,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_MainDriver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_ClampSplineRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bBuildMeshblockFromSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_MeshblockHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_bMeshblockOffsetFromHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_SplineActor_Statics::NewProp_MeshblockMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldMason_SplineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldMason_SplineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldMason_SplineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldMason_SplineActor_Statics::ClassParams = {
	&AWorldMason_SplineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldMason_SplineActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldMason_SplineActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldMason_SplineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldMason_SplineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldMason_SplineActor()
{
	if (!Z_Registration_Info_UClass_AWorldMason_SplineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldMason_SplineActor.OuterSingleton, Z_Construct_UClass_AWorldMason_SplineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldMason_SplineActor.OuterSingleton;
}
template<> WORLDMASON_API UClass* StaticClass<AWorldMason_SplineActor>()
{
	return AWorldMason_SplineActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldMason_SplineActor);
AWorldMason_SplineActor::~AWorldMason_SplineActor() {}
// End Class AWorldMason_SplineActor

// Begin Class AWorldMason_ModularActor Function GetModuleComponents
struct WorldMason_ModularActor_eventGetModuleComponents_Parms
{
	TArray<UChildActorComponent*> ReturnValue;
};
static FName NAME_AWorldMason_ModularActor_GetModuleComponents = FName(TEXT("GetModuleComponents"));
TArray<UChildActorComponent*> AWorldMason_ModularActor::GetModuleComponents()
{
	WorldMason_ModularActor_eventGetModuleComponents_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_AWorldMason_ModularActor_GetModuleComponents),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modular Actor" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_ModularActor_eventGetModuleComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldMason_ModularActor, nullptr, "GetModuleComponents", nullptr, nullptr, Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::PropPointers), sizeof(WorldMason_ModularActor_eventGetModuleComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(WorldMason_ModularActor_eventGetModuleComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldMason_ModularActor::execGetModuleComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UChildActorComponent*>*)Z_Param__Result=P_THIS->GetModuleComponents_Implementation();
	P_NATIVE_END;
}
// End Class AWorldMason_ModularActor Function GetModuleComponents

// Begin Class AWorldMason_ModularActor Function Rebuild
struct Z_Construct_UFunction_AWorldMason_ModularActor_Rebuild_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modular Actor" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldMason_ModularActor_Rebuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldMason_ModularActor, nullptr, "Rebuild", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldMason_ModularActor_Rebuild_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldMason_ModularActor_Rebuild_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWorldMason_ModularActor_Rebuild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldMason_ModularActor_Rebuild_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldMason_ModularActor::execRebuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Rebuild();
	P_NATIVE_END;
}
// End Class AWorldMason_ModularActor Function Rebuild

// Begin Class AWorldMason_ModularActor
void AWorldMason_ModularActor::StaticRegisterNativesAWorldMason_ModularActor()
{
	UClass* Class = AWorldMason_ModularActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetModuleComponents", &AWorldMason_ModularActor::execGetModuleComponents },
		{ "Rebuild", &AWorldMason_ModularActor::execRebuild },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldMason_ModularActor);
UClass* Z_Construct_UClass_AWorldMason_ModularActor_NoRegister()
{
	return AWorldMason_ModularActor::StaticClass();
}
struct Z_Construct_UClass_AWorldMason_ModularActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldMason_Actors.h" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleStyles_MetaData[] = {
		{ "Category", "Modular Actor" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleActorClasses_MetaData[] = {
		{ "Category", "Modular Actor" },
		{ "ModuleRelativePath", "Public/WorldMason_Actors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ModuleStyles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleStyles;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleActorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleActorClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldMason_ModularActor_GetModuleComponents, "GetModuleComponents" }, // 1364615861
		{ &Z_Construct_UFunction_AWorldMason_ModularActor_Rebuild, "Rebuild" }, // 451560843
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldMason_ModularActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_ModularActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_ModuleStyles_Inner = { "ModuleStyles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_ModuleStyles = { "ModuleStyles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_ModularActor, ModuleStyles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleStyles_MetaData), NewProp_ModuleStyles_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_ModuleActorClasses_Inner = { "ModuleActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_ModuleActorClasses = { "ModuleActorClasses", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldMason_ModularActor, ModuleActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleActorClasses_MetaData), NewProp_ModuleActorClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldMason_ModularActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_ModuleStyles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_ModuleStyles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_ModuleActorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldMason_ModularActor_Statics::NewProp_ModuleActorClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldMason_ModularActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldMason_ModularActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldMason_ModularActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldMason_ModularActor_Statics::ClassParams = {
	&AWorldMason_ModularActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldMason_ModularActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldMason_ModularActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldMason_ModularActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldMason_ModularActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldMason_ModularActor()
{
	if (!Z_Registration_Info_UClass_AWorldMason_ModularActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldMason_ModularActor.OuterSingleton, Z_Construct_UClass_AWorldMason_ModularActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldMason_ModularActor.OuterSingleton;
}
template<> WORLDMASON_API UClass* StaticClass<AWorldMason_ModularActor>()
{
	return AWorldMason_ModularActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldMason_ModularActor);
AWorldMason_ModularActor::~AWorldMason_ModularActor() {}
// End Class AWorldMason_ModularActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldMason_SplineActorScript, UWorldMason_SplineActorScript::StaticClass, TEXT("UWorldMason_SplineActorScript"), &Z_Registration_Info_UClass_UWorldMason_SplineActorScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMason_SplineActorScript), 3761071243U) },
		{ Z_Construct_UClass_AWorldMason_SplineActor, AWorldMason_SplineActor::StaticClass, TEXT("AWorldMason_SplineActor"), &Z_Registration_Info_UClass_AWorldMason_SplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldMason_SplineActor), 3208519794U) },
		{ Z_Construct_UClass_AWorldMason_ModularActor, AWorldMason_ModularActor::StaticClass, TEXT("AWorldMason_ModularActor"), &Z_Registration_Info_UClass_AWorldMason_ModularActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldMason_ModularActor), 1021905391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_2149208167(TEXT("/Script/WorldMason"),
	Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
