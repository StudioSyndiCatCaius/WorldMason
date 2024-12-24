// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMason/Public/WorldMasonFunctions.h"
#include "GeometryScriptingCore/Public/GeometryScript/MeshPrimitiveFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMasonFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions();
UPackage* Z_Construct_UPackage__Script_WorldMason();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMasonFunctions();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMasonFunctions_NoRegister();
WORLDMASON_API UEnum* Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector();
// End Cross Module References

// Begin Enum EWorldMasonMeshLengthSelector
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldMasonMeshLengthSelector;
static UEnum* EWorldMasonMeshLengthSelector_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorldMasonMeshLengthSelector.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorldMasonMeshLengthSelector.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector, (UObject*)Z_Construct_UPackage__Script_WorldMason(), TEXT("EWorldMasonMeshLengthSelector"));
	}
	return Z_Registration_Info_UEnum_EWorldMasonMeshLengthSelector.OuterSingleton;
}
template<> WORLDMASON_API UEnum* StaticEnum<EWorldMasonMeshLengthSelector>()
{
	return EWorldMasonMeshLengthSelector_StaticEnum();
}
struct Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MeshLengthSelect_Custom.DisplayName", "Custom" },
		{ "MeshLengthSelect_Custom.Name", "EWorldMasonMeshLengthSelector::MeshLengthSelect_Custom" },
		{ "MeshLengthSelect_X.DisplayName", "X" },
		{ "MeshLengthSelect_X.Name", "EWorldMasonMeshLengthSelector::MeshLengthSelect_X" },
		{ "MeshLengthSelect_Y.DisplayName", "Y" },
		{ "MeshLengthSelect_Y.Name", "EWorldMasonMeshLengthSelector::MeshLengthSelect_Y" },
		{ "MeshLengthSelect_Z.DisplayName", "Z" },
		{ "MeshLengthSelect_Z.Name", "EWorldMasonMeshLengthSelector::MeshLengthSelect_Z" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorldMasonMeshLengthSelector::MeshLengthSelect_Custom", (int64)EWorldMasonMeshLengthSelector::MeshLengthSelect_Custom },
		{ "EWorldMasonMeshLengthSelector::MeshLengthSelect_X", (int64)EWorldMasonMeshLengthSelector::MeshLengthSelect_X },
		{ "EWorldMasonMeshLengthSelector::MeshLengthSelect_Y", (int64)EWorldMasonMeshLengthSelector::MeshLengthSelect_Y },
		{ "EWorldMasonMeshLengthSelector::MeshLengthSelect_Z", (int64)EWorldMasonMeshLengthSelector::MeshLengthSelect_Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WorldMason,
	nullptr,
	"EWorldMasonMeshLengthSelector",
	"EWorldMasonMeshLengthSelector",
	Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector()
{
	if (!Z_Registration_Info_UEnum_EWorldMasonMeshLengthSelector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldMasonMeshLengthSelector.InnerSingleton, Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorldMasonMeshLengthSelector.InnerSingleton;
}
// End Enum EWorldMasonMeshLengthSelector

// Begin Class UWorldMasonFunctions Function AddMeshInstancesAlongDriver
struct Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics
{
	struct WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		FVector Driver;
		FVector DriverPull;
		FVector OffsetPull;
		FRotator Direction;
		float Distance;
		float OffsetDistance;
		FVector OffsetLocation;
		FRotator OffsetRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OffsetDistance,OffsetLocation,OffsetRotation" },
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverPull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetPull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, Driver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_DriverPull = { "DriverPull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, DriverPull), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_OffsetPull = { "OffsetPull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, OffsetPull), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, Direction), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, OffsetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_Driver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_DriverPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_OffsetPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_OffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_OffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::NewProp_OffsetRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "AddMeshInstancesAlongDriver", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execAddMeshInstancesAlongDriver)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_STRUCT(FVector,Z_Param_Driver);
	P_GET_STRUCT(FVector,Z_Param_DriverPull);
	P_GET_STRUCT(FVector,Z_Param_OffsetPull);
	P_GET_STRUCT(FRotator,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetDistance);
	P_GET_STRUCT(FVector,Z_Param_OffsetLocation);
	P_GET_STRUCT(FRotator,Z_Param_OffsetRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::AddMeshInstancesAlongDriver(Z_Param_MeshComp,Z_Param_Driver,Z_Param_DriverPull,Z_Param_OffsetPull,Z_Param_Direction,Z_Param_Distance,Z_Param_OffsetDistance,Z_Param_OffsetLocation,Z_Param_OffsetRotation);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function AddMeshInstancesAlongDriver

// Begin Class UWorldMasonFunctions Function AddMeshInstancesAlongDriver_Multi
struct Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics
{
	struct WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms
	{
		TArray<UInstancedStaticMeshComponent*> MeshComps;
		bool RandomOrder;
		int32 RandomSeed;
		FVector Driver;
		FVector DriverPull;
		FVector OffsetPull;
		FRotator Direction;
		float Distance;
		float OffsetDistance;
		FVector OffsetLocation;
		FRotator OffsetRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OffsetDistance,OffsetLocation,OffsetRotation" },
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "DisplayName", "Add Mesh Instances Along Driver (Multi)" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComps_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComps;
	static void NewProp_RandomOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverPull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetPull;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_MeshComps_Inner = { "MeshComps", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_MeshComps = { "MeshComps", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, MeshComps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComps_MetaData), NewProp_MeshComps_MetaData) };
void Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_RandomOrder_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms*)Obj)->RandomOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_RandomOrder = { "RandomOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_RandomOrder_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, RandomSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, Driver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_DriverPull = { "DriverPull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, DriverPull), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_OffsetPull = { "OffsetPull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, OffsetPull), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, Direction), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, OffsetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_MeshComps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_MeshComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_RandomOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_Driver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_DriverPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_OffsetPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_OffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_OffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::NewProp_OffsetRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "AddMeshInstancesAlongDriver_Multi", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::WorldMasonFunctions_eventAddMeshInstancesAlongDriver_Multi_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execAddMeshInstancesAlongDriver_Multi)
{
	P_GET_TARRAY(UInstancedStaticMeshComponent*,Z_Param_MeshComps);
	P_GET_UBOOL(Z_Param_RandomOrder);
	P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
	P_GET_STRUCT(FVector,Z_Param_Driver);
	P_GET_STRUCT(FVector,Z_Param_DriverPull);
	P_GET_STRUCT(FVector,Z_Param_OffsetPull);
	P_GET_STRUCT(FRotator,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetDistance);
	P_GET_STRUCT(FVector,Z_Param_OffsetLocation);
	P_GET_STRUCT(FRotator,Z_Param_OffsetRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::AddMeshInstancesAlongDriver_Multi(Z_Param_MeshComps,Z_Param_RandomOrder,Z_Param_RandomSeed,Z_Param_Driver,Z_Param_DriverPull,Z_Param_OffsetPull,Z_Param_Direction,Z_Param_Distance,Z_Param_OffsetDistance,Z_Param_OffsetLocation,Z_Param_OffsetRotation);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function AddMeshInstancesAlongDriver_Multi

// Begin Class UWorldMasonFunctions Function AddMeshInstancesAlongSpline
struct Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics
{
	struct WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		USplineComponent* Spline;
		EWorldMasonMeshLengthSelector Type;
		float Distance;
		bool bAtAverageDistance;
		bool bAimAtNextPoint;
		float OffsetDistance;
		FVector OffsetLocation;
		FRotator OffsetRotation;
		FVector Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OffsetDistance, OffsetLocation, OffsetRotation, Scale, bAimAtNextPoint" },
		{ "Category", "World Mason" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bAtAverageDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAtAverageDistance;
	static void NewProp_bAimAtNextPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimAtNextPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms, Type), Z_Construct_UEnum_WorldMason_EWorldMasonMeshLengthSelector, METADATA_PARAMS(0, nullptr) }; // 143791915
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms, Distance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_bAtAverageDistance_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms*)Obj)->bAtAverageDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_bAtAverageDistance = { "bAtAverageDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_bAtAverageDistance_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_bAimAtNextPoint_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms*)Obj)->bAimAtNextPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_bAimAtNextPoint = { "bAimAtNextPoint", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_bAimAtNextPoint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms, OffsetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_bAtAverageDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_bAimAtNextPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_OffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_OffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_OffsetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "AddMeshInstancesAlongSpline", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::WorldMasonFunctions_eventAddMeshInstancesAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execAddMeshInstancesAlongSpline)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_ENUM(EWorldMasonMeshLengthSelector,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_UBOOL(Z_Param_bAtAverageDistance);
	P_GET_UBOOL(Z_Param_bAimAtNextPoint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetDistance);
	P_GET_STRUCT(FVector,Z_Param_OffsetLocation);
	P_GET_STRUCT(FRotator,Z_Param_OffsetRotation);
	P_GET_STRUCT(FVector,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::AddMeshInstancesAlongSpline(Z_Param_MeshComp,Z_Param_Spline,EWorldMasonMeshLengthSelector(Z_Param_Type),Z_Param_Distance,Z_Param_bAtAverageDistance,Z_Param_bAimAtNextPoint,Z_Param_OffsetDistance,Z_Param_OffsetLocation,Z_Param_OffsetRotation,Z_Param_Scale);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function AddMeshInstancesAlongSpline

// Begin Class UWorldMasonFunctions Function AddMeshInstancesAtSplinePoints
struct Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics
{
	struct WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		USplineComponent* Spline;
		float OffsetSplineDistance;
		FVector OffsetLocation;
		FRotator OffsetRotation;
		FVector Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OffsetSplineDistance, OffsetLocation, OffsetRotation, Scale" },
		{ "Category", "World Mason" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetSplineDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_OffsetSplineDistance = { "OffsetSplineDistance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms, OffsetSplineDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_OffsetSplineDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_OffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_OffsetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "AddMeshInstancesAtSplinePoints", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::WorldMasonFunctions_eventAddMeshInstancesAtSplinePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execAddMeshInstancesAtSplinePoints)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetSplineDistance);
	P_GET_STRUCT(FVector,Z_Param_OffsetLocation);
	P_GET_STRUCT(FRotator,Z_Param_OffsetRotation);
	P_GET_STRUCT(FVector,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::AddMeshInstancesAtSplinePoints(Z_Param_MeshComp,Z_Param_Spline,Z_Param_OffsetSplineDistance,Z_Param_OffsetLocation,Z_Param_OffsetRotation,Z_Param_Scale);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function AddMeshInstancesAtSplinePoints

// Begin Class UWorldMasonFunctions Function AddNoiseToMeshInstances
struct Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics
{
	struct WorldMasonFunctions_eventAddNoiseToMeshInstances_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		FTransform Min;
		FTransform Max;
		int32 NoiseSeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoiseSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddNoiseToMeshInstances_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddNoiseToMeshInstances_Parms, Min), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddNoiseToMeshInstances_Parms, Max), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::NewProp_NoiseSeed = { "NoiseSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAddNoiseToMeshInstances_Parms, NoiseSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::NewProp_NoiseSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "AddNoiseToMeshInstances", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::WorldMasonFunctions_eventAddNoiseToMeshInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::WorldMasonFunctions_eventAddNoiseToMeshInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execAddNoiseToMeshInstances)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_STRUCT(FTransform,Z_Param_Min);
	P_GET_STRUCT(FTransform,Z_Param_Max);
	P_GET_PROPERTY(FIntProperty,Z_Param_NoiseSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::AddNoiseToMeshInstances(Z_Param_MeshComp,Z_Param_Min,Z_Param_Max,Z_Param_NoiseSeed);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function AddNoiseToMeshInstances

// Begin Class UWorldMasonFunctions Function AppendMeshInstancesAtLocation
struct Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics
{
	struct WorldMasonFunctions_eventAppendMeshInstancesAtLocation_Parms
	{
		UInstancedStaticMeshComponent* OldMesh;
		UInstancedStaticMeshComponent* AppendedMesh;
		TArray<FVector> Vectors;
		float VectorRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppendedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AppendedMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VectorRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_OldMesh = { "OldMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAppendMeshInstancesAtLocation_Parms, OldMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMesh_MetaData), NewProp_OldMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_AppendedMesh = { "AppendedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAppendMeshInstancesAtLocation_Parms, AppendedMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppendedMesh_MetaData), NewProp_AppendedMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAppendMeshInstancesAtLocation_Parms, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_VectorRadius = { "VectorRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventAppendMeshInstancesAtLocation_Parms, VectorRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_OldMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_AppendedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_Vectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_Vectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::NewProp_VectorRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "AppendMeshInstancesAtLocation", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::WorldMasonFunctions_eventAppendMeshInstancesAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::WorldMasonFunctions_eventAppendMeshInstancesAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execAppendMeshInstancesAtLocation)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_OldMesh);
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_AppendedMesh);
	P_GET_TARRAY(FVector,Z_Param_Vectors);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VectorRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::AppendMeshInstancesAtLocation(Z_Param_OldMesh,Z_Param_AppendedMesh,Z_Param_Vectors,Z_Param_VectorRadius);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function AppendMeshInstancesAtLocation

// Begin Class UWorldMasonFunctions Function BuildDynamicMeshAlongSpline
struct Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics
{
	struct WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms
	{
		UDynamicMesh* DynamicMesh;
		USplineComponent* Spline;
		FTransform Transform;
		float Height;
		FGeometryScriptPrimitiveOptions PrimitiveOption;
		UDynamicMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Dynamic Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#####################################################################################//\n// Dynamic Mesh //\n//#####################################################################################//\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#####################################################################################\n Dynamic Mesh\n#####################################################################################" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms, DynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_PrimitiveOption = { "PrimitiveOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms, PrimitiveOption), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(0, nullptr) }; // 4038280839
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_DynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_PrimitiveOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "BuildDynamicMeshAlongSpline", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::WorldMasonFunctions_eventBuildDynamicMeshAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execBuildDynamicMeshAlongSpline)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_DynamicMesh);
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicMesh**)Z_Param__Result=UWorldMasonFunctions::BuildDynamicMeshAlongSpline(Z_Param_DynamicMesh,Z_Param_Spline,Z_Param_Transform,Z_Param_Height,Z_Param_PrimitiveOption);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function BuildDynamicMeshAlongSpline

// Begin Class UWorldMasonFunctions Function BuildDynamicMeshAsRamp
struct Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics
{
	struct WorldMasonFunctions_eventBuildDynamicMeshAsRamp_Parms
	{
		UDynamicMesh* DynamicMesh;
		FVector Driver;
		FGeometryScriptPrimitiveOptions PrimitiveOptions;
		UDynamicMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Dynamic Mesh" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAsRamp_Parms, DynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAsRamp_Parms, Driver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAsRamp_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(0, nullptr) }; // 4038280839
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildDynamicMeshAsRamp_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::NewProp_DynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::NewProp_Driver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::NewProp_PrimitiveOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "BuildDynamicMeshAsRamp", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::WorldMasonFunctions_eventBuildDynamicMeshAsRamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::WorldMasonFunctions_eventBuildDynamicMeshAsRamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execBuildDynamicMeshAsRamp)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_DynamicMesh);
	P_GET_STRUCT(FVector,Z_Param_Driver);
	P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicMesh**)Z_Param__Result=UWorldMasonFunctions::BuildDynamicMeshAsRamp(Z_Param_DynamicMesh,Z_Param_Driver,Z_Param_PrimitiveOptions);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function BuildDynamicMeshAsRamp

// Begin Class UWorldMasonFunctions Function BuildMeshBoxFromDriver
struct Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics
{
	struct WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		FVector Driver;
		float Distance;
		float OffsetDistance;
		float Height;
		bool ApplyFlippedOffset;
		bool ApplyOffsetPull;
		int32 MaxHeightSteps;
		bool Wall1;
		bool Wall2;
		bool Wall3;
		bool Wall4;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ApplyFlippedOffset, ApplyFlippedOffset, MaxHeightSteps, Wall1,Wall2,Wall3,Wall4" },
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "CPP_Default_MaxHeightSteps", "10" },
		{ "CPP_Default_Wall1", "true" },
		{ "CPP_Default_Wall2", "true" },
		{ "CPP_Default_Wall3", "true" },
		{ "CPP_Default_Wall4", "true" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_ApplyFlippedOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyFlippedOffset;
	static void NewProp_ApplyOffsetPull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyOffsetPull;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeightSteps;
	static void NewProp_Wall1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wall1;
	static void NewProp_Wall2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wall2;
	static void NewProp_Wall3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wall3;
	static void NewProp_Wall4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wall4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms, Driver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms, OffsetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_ApplyFlippedOffset_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms*)Obj)->ApplyFlippedOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_ApplyFlippedOffset = { "ApplyFlippedOffset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_ApplyFlippedOffset_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_ApplyOffsetPull_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms*)Obj)->ApplyOffsetPull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_ApplyOffsetPull = { "ApplyOffsetPull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_ApplyOffsetPull_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_MaxHeightSteps = { "MaxHeightSteps", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms, MaxHeightSteps), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall1_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms*)Obj)->Wall1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall1 = { "Wall1", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall1_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall2_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms*)Obj)->Wall2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall2 = { "Wall2", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall2_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall3_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms*)Obj)->Wall3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall3 = { "Wall3", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall3_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall4_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms*)Obj)->Wall4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall4 = { "Wall4", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall4_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Driver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_OffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_ApplyFlippedOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_ApplyOffsetPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_MaxHeightSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::NewProp_Wall4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "BuildMeshBoxFromDriver", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::WorldMasonFunctions_eventBuildMeshBoxFromDriver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execBuildMeshBoxFromDriver)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_STRUCT(FVector,Z_Param_Driver);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_UBOOL(Z_Param_ApplyFlippedOffset);
	P_GET_UBOOL(Z_Param_ApplyOffsetPull);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxHeightSteps);
	P_GET_UBOOL(Z_Param_Wall1);
	P_GET_UBOOL(Z_Param_Wall2);
	P_GET_UBOOL(Z_Param_Wall3);
	P_GET_UBOOL(Z_Param_Wall4);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::BuildMeshBoxFromDriver(Z_Param_MeshComp,Z_Param_Driver,Z_Param_Distance,Z_Param_OffsetDistance,Z_Param_Height,Z_Param_ApplyFlippedOffset,Z_Param_ApplyOffsetPull,Z_Param_MaxHeightSteps,Z_Param_Wall1,Z_Param_Wall2,Z_Param_Wall3,Z_Param_Wall4);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function BuildMeshBoxFromDriver

// Begin Class UWorldMasonFunctions Function BuildMeshBoxFromDriver_Multi
struct Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics
{
	struct WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms
	{
		TArray<UInstancedStaticMeshComponent*> MeshComps;
		bool RandomOrder;
		int32 RandomSeed;
		FVector Driver;
		float Distance;
		float OffsetDistance;
		float Height;
		bool ApplyFlippedOffset;
		bool ApplyOffsetPull;
		int32 MaxHeightSteps;
		bool Wall1;
		bool Wall2;
		bool Wall3;
		bool Wall4;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ApplyFlippedOffset, ApplyFlippedOffset, MaxHeightSteps, Wall1,Wall2,Wall3,Wall4" },
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "CPP_Default_MaxHeightSteps", "10" },
		{ "CPP_Default_Wall1", "true" },
		{ "CPP_Default_Wall2", "true" },
		{ "CPP_Default_Wall3", "true" },
		{ "CPP_Default_Wall4", "true" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComps_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComps;
	static void NewProp_RandomOrder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static void NewProp_ApplyFlippedOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyFlippedOffset;
	static void NewProp_ApplyOffsetPull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyOffsetPull;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeightSteps;
	static void NewProp_Wall1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wall1;
	static void NewProp_Wall2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wall2;
	static void NewProp_Wall3_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wall3;
	static void NewProp_Wall4_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wall4;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_MeshComps_Inner = { "MeshComps", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_MeshComps = { "MeshComps", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms, MeshComps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComps_MetaData), NewProp_MeshComps_MetaData) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_RandomOrder_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms*)Obj)->RandomOrder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_RandomOrder = { "RandomOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_RandomOrder_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms, RandomSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms, Driver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms, OffsetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms, Height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_ApplyFlippedOffset_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms*)Obj)->ApplyFlippedOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_ApplyFlippedOffset = { "ApplyFlippedOffset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_ApplyFlippedOffset_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_ApplyOffsetPull_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms*)Obj)->ApplyOffsetPull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_ApplyOffsetPull = { "ApplyOffsetPull", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_ApplyOffsetPull_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_MaxHeightSteps = { "MaxHeightSteps", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms, MaxHeightSteps), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall1_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms*)Obj)->Wall1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall1 = { "Wall1", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall1_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall2_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms*)Obj)->Wall2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall2 = { "Wall2", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall2_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall3_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms*)Obj)->Wall3 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall3 = { "Wall3", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall3_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall4_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms*)Obj)->Wall4 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall4 = { "Wall4", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall4_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_MeshComps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_MeshComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_RandomOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Driver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_OffsetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_ApplyFlippedOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_ApplyOffsetPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_MaxHeightSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::NewProp_Wall4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "BuildMeshBoxFromDriver_Multi", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::WorldMasonFunctions_eventBuildMeshBoxFromDriver_Multi_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execBuildMeshBoxFromDriver_Multi)
{
	P_GET_TARRAY(UInstancedStaticMeshComponent*,Z_Param_MeshComps);
	P_GET_UBOOL(Z_Param_RandomOrder);
	P_GET_PROPERTY(FIntProperty,Z_Param_RandomSeed);
	P_GET_STRUCT(FVector,Z_Param_Driver);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OffsetDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Height);
	P_GET_UBOOL(Z_Param_ApplyFlippedOffset);
	P_GET_UBOOL(Z_Param_ApplyOffsetPull);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxHeightSteps);
	P_GET_UBOOL(Z_Param_Wall1);
	P_GET_UBOOL(Z_Param_Wall2);
	P_GET_UBOOL(Z_Param_Wall3);
	P_GET_UBOOL(Z_Param_Wall4);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::BuildMeshBoxFromDriver_Multi(Z_Param_MeshComps,Z_Param_RandomOrder,Z_Param_RandomSeed,Z_Param_Driver,Z_Param_Distance,Z_Param_OffsetDistance,Z_Param_Height,Z_Param_ApplyFlippedOffset,Z_Param_ApplyOffsetPull,Z_Param_MaxHeightSteps,Z_Param_Wall1,Z_Param_Wall2,Z_Param_Wall3,Z_Param_Wall4);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function BuildMeshBoxFromDriver_Multi

// Begin Class UWorldMasonFunctions Function BuildMeshTilesFromDriver
struct Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics
{
	struct WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		FVector Driver;
		float Distance;
		FVector OffsetLocation;
		FRotator OffsetRotation;
		bool X;
		bool Y;
		bool Z;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Wall1,Wall2,Wall3,Wall4" },
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "CPP_Default_X", "true" },
		{ "CPP_Default_Y", "true" },
		{ "CPP_Default_Z", "true" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
	static void NewProp_X_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_X;
	static void NewProp_Y_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Y;
	static void NewProp_Z_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Z;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms, Driver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_X_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms*)Obj)->X = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_X_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Y_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms*)Obj)->Y = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Y_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Z_SetBit(void* Obj)
{
	((WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms*)Obj)->Z = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms), &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Z_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Driver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_OffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_OffsetRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::NewProp_Z,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "BuildMeshTilesFromDriver", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::WorldMasonFunctions_eventBuildMeshTilesFromDriver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execBuildMeshTilesFromDriver)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_STRUCT(FVector,Z_Param_Driver);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_GET_STRUCT(FVector,Z_Param_OffsetLocation);
	P_GET_STRUCT(FRotator,Z_Param_OffsetRotation);
	P_GET_UBOOL(Z_Param_X);
	P_GET_UBOOL(Z_Param_Y);
	P_GET_UBOOL(Z_Param_Z);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::BuildMeshTilesFromDriver(Z_Param_MeshComp,Z_Param_Driver,Z_Param_Distance,Z_Param_OffsetLocation,Z_Param_OffsetRotation,Z_Param_X,Z_Param_Y,Z_Param_Z);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function BuildMeshTilesFromDriver

// Begin Class UWorldMasonFunctions Function BuildStepsAlongDriver
struct Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics
{
	struct WorldMasonFunctions_eventBuildStepsAlongDriver_Parms
	{
		UDynamicMesh* DynamicMesh;
		FVector Driver;
		FTransform Offset;
		float StepDistance;
		float StepHeight;
		UDynamicMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Dynamic Mesh" },
		{ "CPP_Default_StepDistance", "30.000000" },
		{ "CPP_Default_StepHeight", "10.000000" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_DynamicMesh = { "DynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildStepsAlongDriver_Parms, DynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildStepsAlongDriver_Parms, Driver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildStepsAlongDriver_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_StepDistance = { "StepDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildStepsAlongDriver_Parms, StepDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildStepsAlongDriver_Parms, StepHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventBuildStepsAlongDriver_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_DynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_Driver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_StepDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_StepHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "BuildStepsAlongDriver", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::WorldMasonFunctions_eventBuildStepsAlongDriver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::WorldMasonFunctions_eventBuildStepsAlongDriver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execBuildStepsAlongDriver)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_DynamicMesh);
	P_GET_STRUCT(FVector,Z_Param_Driver);
	P_GET_STRUCT(FTransform,Z_Param_Offset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StepDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StepHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicMesh**)Z_Param__Result=UWorldMasonFunctions::BuildStepsAlongDriver(Z_Param_DynamicMesh,Z_Param_Driver,Z_Param_Offset,Z_Param_StepDistance,Z_Param_StepHeight);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function BuildStepsAlongDriver

// Begin Class UWorldMasonFunctions Function ClampSplineTangents
struct Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics
{
	struct WorldMasonFunctions_eventClampSplineTangents_Parms
	{
		USplineComponent* Spline;
		float Min;
		float Max;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventClampSplineTangents_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventClampSplineTangents_Parms, Min), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventClampSplineTangents_Parms, Max), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "ClampSplineTangents", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::WorldMasonFunctions_eventClampSplineTangents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::WorldMasonFunctions_eventClampSplineTangents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execClampSplineTangents)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Min);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::ClampSplineTangents(Z_Param_Spline,Z_Param_Min,Z_Param_Max);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function ClampSplineTangents

// Begin Class UWorldMasonFunctions Function ClampVectorToStep_Copy
struct Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics
{
	struct WorldMasonFunctions_eventClampVectorToStep_Copy_Parms
	{
		FVector Vector;
		float StepSize;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Vector" },
		{ "DisplayName", "Clamp Vector to Step (Copy)" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventClampVectorToStep_Copy_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventClampVectorToStep_Copy_Parms, StepSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventClampVectorToStep_Copy_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "ClampVectorToStep_Copy", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::WorldMasonFunctions_eventClampVectorToStep_Copy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::WorldMasonFunctions_eventClampVectorToStep_Copy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execClampVectorToStep_Copy)
{
	P_GET_STRUCT(FVector,Z_Param_Vector);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StepSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UWorldMasonFunctions::ClampVectorToStep_Copy(Z_Param_Vector,Z_Param_StepSize);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function ClampVectorToStep_Copy

// Begin Class UWorldMasonFunctions Function ClampVectorToStep_Ref
struct Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics
{
	struct WorldMasonFunctions_eventClampVectorToStep_Ref_Parms
	{
		FVector Vector;
		float StepSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Vector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#####################################################################################//\n//  Vector //\n//#####################################################################################/\n" },
#endif
		{ "DisplayName", "Clamp Vector to Step (Ref)" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#####################################################################################\n  Vector\n#####################################################################################/" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventClampVectorToStep_Ref_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventClampVectorToStep_Ref_Parms, StepSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::NewProp_Vector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::NewProp_StepSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "ClampVectorToStep_Ref", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::WorldMasonFunctions_eventClampVectorToStep_Ref_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::WorldMasonFunctions_eventClampVectorToStep_Ref_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execClampVectorToStep_Ref)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StepSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::ClampVectorToStep_Ref(Z_Param_Out_Vector,Z_Param_StepSize);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function ClampVectorToStep_Ref

// Begin Class UWorldMasonFunctions Function FormSplineAsBox
struct Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics
{
	struct WorldMasonFunctions_eventFormSplineAsBox_Parms
	{
		USplineComponent* Spline;
		FVector Driver;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventFormSplineAsBox_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::NewProp_Driver = { "Driver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventFormSplineAsBox_Parms, Driver), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::NewProp_Driver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "FormSplineAsBox", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::WorldMasonFunctions_eventFormSplineAsBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::WorldMasonFunctions_eventFormSplineAsBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execFormSplineAsBox)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_STRUCT(FVector,Z_Param_Driver);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::FormSplineAsBox(Z_Param_Spline,Z_Param_Driver);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function FormSplineAsBox

// Begin Class UWorldMasonFunctions Function FormSplineAsCircle
struct Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics
{
	struct WorldMasonFunctions_eventFormSplineAsCircle_Parms
	{
		USplineComponent* Spline;
		float Radius;
		int32 Steps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventFormSplineAsCircle_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventFormSplineAsCircle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventFormSplineAsCircle_Parms, Steps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::NewProp_Steps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "FormSplineAsCircle", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::WorldMasonFunctions_eventFormSplineAsCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::WorldMasonFunctions_eventFormSplineAsCircle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execFormSplineAsCircle)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FIntProperty,Z_Param_Steps);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::FormSplineAsCircle(Z_Param_Spline,Z_Param_Radius,Z_Param_Steps);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function FormSplineAsCircle

// Begin Class UWorldMasonFunctions Function Get2DVectorPointsFromSpline
struct Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics
{
	struct WorldMasonFunctions_eventGet2DVectorPointsFromSpline_Parms
	{
		USplineComponent* Spline;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGet2DVectorPointsFromSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGet2DVectorPointsFromSpline_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "Get2DVectorPointsFromSpline", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::WorldMasonFunctions_eventGet2DVectorPointsFromSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::WorldMasonFunctions_eventGet2DVectorPointsFromSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execGet2DVectorPointsFromSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=UWorldMasonFunctions::Get2DVectorPointsFromSpline(Z_Param_Spline);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function Get2DVectorPointsFromSpline

// Begin Class UWorldMasonFunctions Function GetRandomInstanceMeshComponentFromSeed
struct Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics
{
	struct WorldMasonFunctions_eventGetRandomInstanceMeshComponentFromSeed_Parms
	{
		TArray<UInstancedStaticMeshComponent*> MeshComps;
		int32 Seed;
		UInstancedStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComps_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::NewProp_MeshComps_Inner = { "MeshComps", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::NewProp_MeshComps = { "MeshComps", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetRandomInstanceMeshComponentFromSeed_Parms, MeshComps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComps_MetaData), NewProp_MeshComps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetRandomInstanceMeshComponentFromSeed_Parms, Seed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetRandomInstanceMeshComponentFromSeed_Parms, ReturnValue), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::NewProp_MeshComps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::NewProp_MeshComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "GetRandomInstanceMeshComponentFromSeed", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::WorldMasonFunctions_eventGetRandomInstanceMeshComponentFromSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::WorldMasonFunctions_eventGetRandomInstanceMeshComponentFromSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execGetRandomInstanceMeshComponentFromSeed)
{
	P_GET_TARRAY(UInstancedStaticMeshComponent*,Z_Param_MeshComps);
	P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInstancedStaticMeshComponent**)Z_Param__Result=UWorldMasonFunctions::GetRandomInstanceMeshComponentFromSeed(Z_Param_MeshComps,Z_Param_Seed);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function GetRandomInstanceMeshComponentFromSeed

// Begin Class UWorldMasonFunctions Function GetScaledComponentMeshBounds
struct Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics
{
	struct WorldMasonFunctions_eventGetScaledComponentMeshBounds_Parms
	{
		UStaticMeshComponent* MeshComp;
		FVector Multiplied;
		FVector Divided;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Mesh Bounds" },
		{ "CPP_Default_Divided", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_Multiplied", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Divided;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledComponentMeshBounds_Parms, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::NewProp_Multiplied = { "Multiplied", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledComponentMeshBounds_Parms, Multiplied), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::NewProp_Divided = { "Divided", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledComponentMeshBounds_Parms, Divided), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledComponentMeshBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::NewProp_Multiplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::NewProp_Divided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "GetScaledComponentMeshBounds", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::WorldMasonFunctions_eventGetScaledComponentMeshBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::WorldMasonFunctions_eventGetScaledComponentMeshBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execGetScaledComponentMeshBounds)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComp);
	P_GET_STRUCT(FVector,Z_Param_Multiplied);
	P_GET_STRUCT(FVector,Z_Param_Divided);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UWorldMasonFunctions::GetScaledComponentMeshBounds(Z_Param_MeshComp,Z_Param_Multiplied,Z_Param_Divided);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function GetScaledComponentMeshBounds

// Begin Class UWorldMasonFunctions Function GetScaledMeshBounds
struct Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics
{
	struct WorldMasonFunctions_eventGetScaledMeshBounds_Parms
	{
		UStaticMesh* Mesh;
		FVector Multiplied;
		FVector Divided;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Mesh Bounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#####################################################################################//\n//  Mesh Bounds //\n//#####################################################################################//\n" },
#endif
		{ "CPP_Default_Divided", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_Multiplied", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#####################################################################################\n  Mesh Bounds\n#####################################################################################" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplied;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Divided;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledMeshBounds_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::NewProp_Multiplied = { "Multiplied", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledMeshBounds_Parms, Multiplied), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::NewProp_Divided = { "Divided", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledMeshBounds_Parms, Divided), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledMeshBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::NewProp_Multiplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::NewProp_Divided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "GetScaledMeshBounds", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::WorldMasonFunctions_eventGetScaledMeshBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::WorldMasonFunctions_eventGetScaledMeshBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execGetScaledMeshBounds)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_STRUCT(FVector,Z_Param_Multiplied);
	P_GET_STRUCT(FVector,Z_Param_Divided);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UWorldMasonFunctions::GetScaledMeshBounds(Z_Param_Mesh,Z_Param_Multiplied,Z_Param_Divided);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function GetScaledMeshBounds

// Begin Class UWorldMasonFunctions Function GetScaledVectors
struct Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics
{
	struct WorldMasonFunctions_eventGetScaledVectors_Parms
	{
		FVector VectorIn;
		TArray<FVector> Scalars;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Vector" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scalars_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Scalars;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_VectorIn = { "VectorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledVectors_Parms, VectorIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_Scalars_Inner = { "Scalars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_Scalars = { "Scalars", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledVectors_Parms, Scalars), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetScaledVectors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_VectorIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_Scalars_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_Scalars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "GetScaledVectors", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::WorldMasonFunctions_eventGetScaledVectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::WorldMasonFunctions_eventGetScaledVectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execGetScaledVectors)
{
	P_GET_STRUCT(FVector,Z_Param_VectorIn);
	P_GET_TARRAY(FVector,Z_Param_Scalars);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UWorldMasonFunctions::GetScaledVectors(Z_Param_VectorIn,Z_Param_Scalars);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function GetScaledVectors

// Begin Class UWorldMasonFunctions Function GetSplinePointsInRangeOfVectors
struct Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics
{
	struct WorldMasonFunctions_eventGetSplinePointsInRangeOfVectors_Parms
	{
		USplineComponent* Spline;
		TArray<FVector> Vectors;
		float GetDistance;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GetDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetSplinePointsInRangeOfVectors_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetSplinePointsInRangeOfVectors_Parms, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_GetDistance = { "GetDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetSplinePointsInRangeOfVectors_Parms, GetDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetSplinePointsInRangeOfVectors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_Vectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_Vectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_GetDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "GetSplinePointsInRangeOfVectors", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::WorldMasonFunctions_eventGetSplinePointsInRangeOfVectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::WorldMasonFunctions_eventGetSplinePointsInRangeOfVectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execGetSplinePointsInRangeOfVectors)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_TARRAY(FVector,Z_Param_Vectors);
	P_GET_PROPERTY(FFloatProperty,Z_Param_GetDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=UWorldMasonFunctions::GetSplinePointsInRangeOfVectors(Z_Param_Spline,Z_Param_Vectors,Z_Param_GetDistance);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function GetSplinePointsInRangeOfVectors

// Begin Class UWorldMasonFunctions Function GetVectorCornersXY
struct Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics
{
	struct WorldMasonFunctions_eventGetVectorCornersXY_Parms
	{
		FVector VectorIn;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Vector" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::NewProp_VectorIn = { "VectorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetVectorCornersXY_Parms, VectorIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetVectorCornersXY_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::NewProp_VectorIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "GetVectorCornersXY", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::WorldMasonFunctions_eventGetVectorCornersXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::WorldMasonFunctions_eventGetVectorCornersXY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execGetVectorCornersXY)
{
	P_GET_STRUCT(FVector,Z_Param_VectorIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UWorldMasonFunctions::GetVectorCornersXY(Z_Param_VectorIn);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function GetVectorCornersXY

// Begin Class UWorldMasonFunctions Function GetVectorCornersXYZ
struct Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics
{
	struct WorldMasonFunctions_eventGetVectorCornersXYZ_Parms
	{
		FVector VectorIn;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Vector" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::NewProp_VectorIn = { "VectorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetVectorCornersXYZ_Parms, VectorIn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventGetVectorCornersXYZ_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::NewProp_VectorIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "GetVectorCornersXYZ", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::WorldMasonFunctions_eventGetVectorCornersXYZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::WorldMasonFunctions_eventGetVectorCornersXYZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execGetVectorCornersXYZ)
{
	P_GET_STRUCT(FVector,Z_Param_VectorIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UWorldMasonFunctions::GetVectorCornersXYZ(Z_Param_VectorIn);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function GetVectorCornersXYZ

// Begin Class UWorldMasonFunctions Function OffsetMeshInstances
struct Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics
{
	struct WorldMasonFunctions_eventOffsetMeshInstances_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		FVector Location;
		FRotator Rotation;
		FVector Scale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "CPP_Default_Scale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventOffsetMeshInstances_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventOffsetMeshInstances_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventOffsetMeshInstances_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventOffsetMeshInstances_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "OffsetMeshInstances", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::WorldMasonFunctions_eventOffsetMeshInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::WorldMasonFunctions_eventOffsetMeshInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execOffsetMeshInstances)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_STRUCT(FVector,Z_Param_Scale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::OffsetMeshInstances(Z_Param_MeshComp,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function OffsetMeshInstances

// Begin Class UWorldMasonFunctions Function RemoveMeshInstancesFromBooleanPoints
struct Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics
{
	struct WorldMasonFunctions_eventRemoveMeshInstancesFromBooleanPoints_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		TArray<FVector> Vectors;
		float VectorRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Instance Static Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#####################################################################################//\n// Instance Static Mesh //\n//#####################################################################################//\n" },
#endif
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#####################################################################################\n Instance Static Mesh\n#####################################################################################" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VectorRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventRemoveMeshInstancesFromBooleanPoints_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventRemoveMeshInstancesFromBooleanPoints_Parms, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::NewProp_VectorRadius = { "VectorRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventRemoveMeshInstancesFromBooleanPoints_Parms, VectorRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::NewProp_Vectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::NewProp_Vectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::NewProp_VectorRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "RemoveMeshInstancesFromBooleanPoints", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::WorldMasonFunctions_eventRemoveMeshInstancesFromBooleanPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::WorldMasonFunctions_eventRemoveMeshInstancesFromBooleanPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execRemoveMeshInstancesFromBooleanPoints)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_TARRAY(FVector,Z_Param_Vectors);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VectorRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::RemoveMeshInstancesFromBooleanPoints(Z_Param_MeshComp,Z_Param_Vectors,Z_Param_VectorRadius);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function RemoveMeshInstancesFromBooleanPoints

// Begin Class UWorldMasonFunctions Function RemoveMultiMeshInstancesFromBooleanPoints
struct Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics
{
	struct WorldMasonFunctions_eventRemoveMultiMeshInstancesFromBooleanPoints_Parms
	{
		TArray<UInstancedStaticMeshComponent*> MeshComps;
		TArray<FVector> Vectors;
		float VectorRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComps_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VectorRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_MeshComps_Inner = { "MeshComps", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_MeshComps = { "MeshComps", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventRemoveMultiMeshInstancesFromBooleanPoints_Parms, MeshComps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComps_MetaData), NewProp_MeshComps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventRemoveMultiMeshInstancesFromBooleanPoints_Parms, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_VectorRadius = { "VectorRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventRemoveMultiMeshInstancesFromBooleanPoints_Parms, VectorRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_MeshComps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_MeshComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_Vectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_Vectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::NewProp_VectorRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "RemoveMultiMeshInstancesFromBooleanPoints", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::WorldMasonFunctions_eventRemoveMultiMeshInstancesFromBooleanPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::WorldMasonFunctions_eventRemoveMultiMeshInstancesFromBooleanPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execRemoveMultiMeshInstancesFromBooleanPoints)
{
	P_GET_TARRAY(UInstancedStaticMeshComponent*,Z_Param_MeshComps);
	P_GET_TARRAY(FVector,Z_Param_Vectors);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VectorRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::RemoveMultiMeshInstancesFromBooleanPoints(Z_Param_MeshComps,Z_Param_Vectors,Z_Param_VectorRadius);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function RemoveMultiMeshInstancesFromBooleanPoints

// Begin Class UWorldMasonFunctions Function ReplaceMeshInstancesAtLocation
struct Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics
{
	struct WorldMasonFunctions_eventReplaceMeshInstancesAtLocation_Parms
	{
		UInstancedStaticMeshComponent* OldMesh;
		UInstancedStaticMeshComponent* NewMesh;
		TArray<FVector> Vectors;
		float VectorRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VectorRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_OldMesh = { "OldMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventReplaceMeshInstancesAtLocation_Parms, OldMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMesh_MetaData), NewProp_OldMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventReplaceMeshInstancesAtLocation_Parms, NewMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMesh_MetaData), NewProp_NewMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventReplaceMeshInstancesAtLocation_Parms, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_VectorRadius = { "VectorRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventReplaceMeshInstancesAtLocation_Parms, VectorRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_OldMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_NewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_Vectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_Vectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::NewProp_VectorRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "ReplaceMeshInstancesAtLocation", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::WorldMasonFunctions_eventReplaceMeshInstancesAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::WorldMasonFunctions_eventReplaceMeshInstancesAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execReplaceMeshInstancesAtLocation)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_OldMesh);
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_NewMesh);
	P_GET_TARRAY(FVector,Z_Param_Vectors);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VectorRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::ReplaceMeshInstancesAtLocation(Z_Param_OldMesh,Z_Param_NewMesh,Z_Param_Vectors,Z_Param_VectorRadius);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function ReplaceMeshInstancesAtLocation

// Begin Class UWorldMasonFunctions Function StretchInstanceMeshAlongSpline
struct Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics
{
	struct WorldMasonFunctions_eventStretchInstanceMeshAlongSpline_Parms
	{
		UInstancedStaticMeshComponent* MeshComp;
		USplineComponent* Spline;
		FVector Offset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventStretchInstanceMeshAlongSpline_Parms, MeshComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventStretchInstanceMeshAlongSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventStretchInstanceMeshAlongSpline_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "StretchInstanceMeshAlongSpline", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::WorldMasonFunctions_eventStretchInstanceMeshAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::WorldMasonFunctions_eventStretchInstanceMeshAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execStretchInstanceMeshAlongSpline)
{
	P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_MeshComp);
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_STRUCT(FVector,Z_Param_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWorldMasonFunctions::StretchInstanceMeshAlongSpline(Z_Param_MeshComp,Z_Param_Spline,Z_Param_Offset);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function StretchInstanceMeshAlongSpline

// Begin Class UWorldMasonFunctions Function WorldMasonNoise_Float
struct Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics
{
	struct WorldMasonFunctions_eventWorldMasonNoise_Float_Parms
	{
		int32 Seed;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Mason|Instance Static Mesh" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventWorldMasonNoise_Float_Parms, Seed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMasonFunctions_eventWorldMasonNoise_Float_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMasonFunctions, nullptr, "WorldMasonNoise_Float", nullptr, nullptr, Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::WorldMasonFunctions_eventWorldMasonNoise_Float_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::WorldMasonFunctions_eventWorldMasonNoise_Float_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMasonFunctions::execWorldMasonNoise_Float)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UWorldMasonFunctions::WorldMasonNoise_Float(Z_Param_Seed);
	P_NATIVE_END;
}
// End Class UWorldMasonFunctions Function WorldMasonNoise_Float

// Begin Class UWorldMasonFunctions
void UWorldMasonFunctions::StaticRegisterNativesUWorldMasonFunctions()
{
	UClass* Class = UWorldMasonFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMeshInstancesAlongDriver", &UWorldMasonFunctions::execAddMeshInstancesAlongDriver },
		{ "AddMeshInstancesAlongDriver_Multi", &UWorldMasonFunctions::execAddMeshInstancesAlongDriver_Multi },
		{ "AddMeshInstancesAlongSpline", &UWorldMasonFunctions::execAddMeshInstancesAlongSpline },
		{ "AddMeshInstancesAtSplinePoints", &UWorldMasonFunctions::execAddMeshInstancesAtSplinePoints },
		{ "AddNoiseToMeshInstances", &UWorldMasonFunctions::execAddNoiseToMeshInstances },
		{ "AppendMeshInstancesAtLocation", &UWorldMasonFunctions::execAppendMeshInstancesAtLocation },
		{ "BuildDynamicMeshAlongSpline", &UWorldMasonFunctions::execBuildDynamicMeshAlongSpline },
		{ "BuildDynamicMeshAsRamp", &UWorldMasonFunctions::execBuildDynamicMeshAsRamp },
		{ "BuildMeshBoxFromDriver", &UWorldMasonFunctions::execBuildMeshBoxFromDriver },
		{ "BuildMeshBoxFromDriver_Multi", &UWorldMasonFunctions::execBuildMeshBoxFromDriver_Multi },
		{ "BuildMeshTilesFromDriver", &UWorldMasonFunctions::execBuildMeshTilesFromDriver },
		{ "BuildStepsAlongDriver", &UWorldMasonFunctions::execBuildStepsAlongDriver },
		{ "ClampSplineTangents", &UWorldMasonFunctions::execClampSplineTangents },
		{ "ClampVectorToStep_Copy", &UWorldMasonFunctions::execClampVectorToStep_Copy },
		{ "ClampVectorToStep_Ref", &UWorldMasonFunctions::execClampVectorToStep_Ref },
		{ "FormSplineAsBox", &UWorldMasonFunctions::execFormSplineAsBox },
		{ "FormSplineAsCircle", &UWorldMasonFunctions::execFormSplineAsCircle },
		{ "Get2DVectorPointsFromSpline", &UWorldMasonFunctions::execGet2DVectorPointsFromSpline },
		{ "GetRandomInstanceMeshComponentFromSeed", &UWorldMasonFunctions::execGetRandomInstanceMeshComponentFromSeed },
		{ "GetScaledComponentMeshBounds", &UWorldMasonFunctions::execGetScaledComponentMeshBounds },
		{ "GetScaledMeshBounds", &UWorldMasonFunctions::execGetScaledMeshBounds },
		{ "GetScaledVectors", &UWorldMasonFunctions::execGetScaledVectors },
		{ "GetSplinePointsInRangeOfVectors", &UWorldMasonFunctions::execGetSplinePointsInRangeOfVectors },
		{ "GetVectorCornersXY", &UWorldMasonFunctions::execGetVectorCornersXY },
		{ "GetVectorCornersXYZ", &UWorldMasonFunctions::execGetVectorCornersXYZ },
		{ "OffsetMeshInstances", &UWorldMasonFunctions::execOffsetMeshInstances },
		{ "RemoveMeshInstancesFromBooleanPoints", &UWorldMasonFunctions::execRemoveMeshInstancesFromBooleanPoints },
		{ "RemoveMultiMeshInstancesFromBooleanPoints", &UWorldMasonFunctions::execRemoveMultiMeshInstancesFromBooleanPoints },
		{ "ReplaceMeshInstancesAtLocation", &UWorldMasonFunctions::execReplaceMeshInstancesAtLocation },
		{ "StretchInstanceMeshAlongSpline", &UWorldMasonFunctions::execStretchInstanceMeshAlongSpline },
		{ "WorldMasonNoise_Float", &UWorldMasonFunctions::execWorldMasonNoise_Float },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMasonFunctions);
UClass* Z_Construct_UClass_UWorldMasonFunctions_NoRegister()
{
	return UWorldMasonFunctions::StaticClass();
}
struct Z_Construct_UClass_UWorldMasonFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WorldMasonFunctions.h" },
		{ "ModuleRelativePath", "Public/WorldMasonFunctions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver, "AddMeshInstancesAlongDriver" }, // 4216942936
		{ &Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongDriver_Multi, "AddMeshInstancesAlongDriver_Multi" }, // 2002926961
		{ &Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAlongSpline, "AddMeshInstancesAlongSpline" }, // 456320164
		{ &Z_Construct_UFunction_UWorldMasonFunctions_AddMeshInstancesAtSplinePoints, "AddMeshInstancesAtSplinePoints" }, // 2050954139
		{ &Z_Construct_UFunction_UWorldMasonFunctions_AddNoiseToMeshInstances, "AddNoiseToMeshInstances" }, // 1921412975
		{ &Z_Construct_UFunction_UWorldMasonFunctions_AppendMeshInstancesAtLocation, "AppendMeshInstancesAtLocation" }, // 969529378
		{ &Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAlongSpline, "BuildDynamicMeshAlongSpline" }, // 1685066638
		{ &Z_Construct_UFunction_UWorldMasonFunctions_BuildDynamicMeshAsRamp, "BuildDynamicMeshAsRamp" }, // 686816768
		{ &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver, "BuildMeshBoxFromDriver" }, // 1248191113
		{ &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshBoxFromDriver_Multi, "BuildMeshBoxFromDriver_Multi" }, // 3743631355
		{ &Z_Construct_UFunction_UWorldMasonFunctions_BuildMeshTilesFromDriver, "BuildMeshTilesFromDriver" }, // 1775513491
		{ &Z_Construct_UFunction_UWorldMasonFunctions_BuildStepsAlongDriver, "BuildStepsAlongDriver" }, // 3232478630
		{ &Z_Construct_UFunction_UWorldMasonFunctions_ClampSplineTangents, "ClampSplineTangents" }, // 1627070799
		{ &Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Copy, "ClampVectorToStep_Copy" }, // 951205572
		{ &Z_Construct_UFunction_UWorldMasonFunctions_ClampVectorToStep_Ref, "ClampVectorToStep_Ref" }, // 1580749350
		{ &Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsBox, "FormSplineAsBox" }, // 2428048768
		{ &Z_Construct_UFunction_UWorldMasonFunctions_FormSplineAsCircle, "FormSplineAsCircle" }, // 3970461073
		{ &Z_Construct_UFunction_UWorldMasonFunctions_Get2DVectorPointsFromSpline, "Get2DVectorPointsFromSpline" }, // 64970946
		{ &Z_Construct_UFunction_UWorldMasonFunctions_GetRandomInstanceMeshComponentFromSeed, "GetRandomInstanceMeshComponentFromSeed" }, // 1226923770
		{ &Z_Construct_UFunction_UWorldMasonFunctions_GetScaledComponentMeshBounds, "GetScaledComponentMeshBounds" }, // 408616831
		{ &Z_Construct_UFunction_UWorldMasonFunctions_GetScaledMeshBounds, "GetScaledMeshBounds" }, // 3572402937
		{ &Z_Construct_UFunction_UWorldMasonFunctions_GetScaledVectors, "GetScaledVectors" }, // 1653403116
		{ &Z_Construct_UFunction_UWorldMasonFunctions_GetSplinePointsInRangeOfVectors, "GetSplinePointsInRangeOfVectors" }, // 3974172069
		{ &Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXY, "GetVectorCornersXY" }, // 844146161
		{ &Z_Construct_UFunction_UWorldMasonFunctions_GetVectorCornersXYZ, "GetVectorCornersXYZ" }, // 4058884744
		{ &Z_Construct_UFunction_UWorldMasonFunctions_OffsetMeshInstances, "OffsetMeshInstances" }, // 2911299530
		{ &Z_Construct_UFunction_UWorldMasonFunctions_RemoveMeshInstancesFromBooleanPoints, "RemoveMeshInstancesFromBooleanPoints" }, // 585296271
		{ &Z_Construct_UFunction_UWorldMasonFunctions_RemoveMultiMeshInstancesFromBooleanPoints, "RemoveMultiMeshInstancesFromBooleanPoints" }, // 1897769313
		{ &Z_Construct_UFunction_UWorldMasonFunctions_ReplaceMeshInstancesAtLocation, "ReplaceMeshInstancesAtLocation" }, // 2837121817
		{ &Z_Construct_UFunction_UWorldMasonFunctions_StretchInstanceMeshAlongSpline, "StretchInstanceMeshAlongSpline" }, // 2254862677
		{ &Z_Construct_UFunction_UWorldMasonFunctions_WorldMasonNoise_Float, "WorldMasonNoise_Float" }, // 846068471
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldMasonFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWorldMasonFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMasonFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMasonFunctions_Statics::ClassParams = {
	&UWorldMasonFunctions::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMasonFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMasonFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMasonFunctions()
{
	if (!Z_Registration_Info_UClass_UWorldMasonFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMasonFunctions.OuterSingleton, Z_Construct_UClass_UWorldMasonFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMasonFunctions.OuterSingleton;
}
template<> WORLDMASON_API UClass* StaticClass<UWorldMasonFunctions>()
{
	return UWorldMasonFunctions::StaticClass();
}
UWorldMasonFunctions::UWorldMasonFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMasonFunctions);
UWorldMasonFunctions::~UWorldMasonFunctions() {}
// End Class UWorldMasonFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWorldMasonMeshLengthSelector_StaticEnum, TEXT("EWorldMasonMeshLengthSelector"), &Z_Registration_Info_UEnum_EWorldMasonMeshLengthSelector, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 143791915U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldMasonFunctions, UWorldMasonFunctions::StaticClass, TEXT("UWorldMasonFunctions"), &Z_Registration_Info_UClass_UWorldMasonFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMasonFunctions), 4208151170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_314905250(TEXT("/Script/WorldMason"),
	Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
