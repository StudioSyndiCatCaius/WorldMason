// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldMason/Public/WorldMason_Components.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldMason_Components() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WorldMason();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMason_MeshHarvester();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMason_MeshHarvester_NoRegister();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMason_MultiMeshInstance();
WORLDMASON_API UClass* Z_Construct_UClass_UWorldMason_MultiMeshInstance_NoRegister();
// End Cross Module References

// Begin Class UWorldMason_MultiMeshInstance Function ClearAllInstances
struct Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstances_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Multi-Mesh" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_MultiMeshInstance, nullptr, "ClearAllInstances", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstances_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMason_MultiMeshInstance::execClearAllInstances)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllInstances();
	P_NATIVE_END;
}
// End Class UWorldMason_MultiMeshInstance Function ClearAllInstances

// Begin Class UWorldMason_MultiMeshInstance Function ClearAllInstancesOfMesh
struct Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics
{
	struct WorldMason_MultiMeshInstance_eventClearAllInstancesOfMesh_Parms
	{
		UStaticMesh* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Multi-Mesh" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MultiMeshInstance_eventClearAllInstancesOfMesh_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_MultiMeshInstance, nullptr, "ClearAllInstancesOfMesh", nullptr, nullptr, Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::WorldMason_MultiMeshInstance_eventClearAllInstancesOfMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::WorldMason_MultiMeshInstance_eventClearAllInstancesOfMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMason_MultiMeshInstance::execClearAllInstancesOfMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllInstancesOfMesh(Z_Param_Mesh);
	P_NATIVE_END;
}
// End Class UWorldMason_MultiMeshInstance Function ClearAllInstancesOfMesh

// Begin Class UWorldMason_MultiMeshInstance Function GetInstancedMeshComponent
struct Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics
{
	struct WorldMason_MultiMeshInstance_eventGetInstancedMeshComponent_Parms
	{
		UStaticMesh* Mesh;
		UInstancedStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Multi-Mesh" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MultiMeshInstance_eventGetInstancedMeshComponent_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MultiMeshInstance_eventGetInstancedMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_MultiMeshInstance, nullptr, "GetInstancedMeshComponent", nullptr, nullptr, Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::WorldMason_MultiMeshInstance_eventGetInstancedMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::WorldMason_MultiMeshInstance_eventGetInstancedMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMason_MultiMeshInstance::execGetInstancedMeshComponent)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInstancedStaticMeshComponent**)Z_Param__Result=P_THIS->GetInstancedMeshComponent(Z_Param_Mesh);
	P_NATIVE_END;
}
// End Class UWorldMason_MultiMeshInstance Function GetInstancedMeshComponent

// Begin Class UWorldMason_MultiMeshInstance Function GetMeshInstanceComponents
struct Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics
{
	struct WorldMason_MultiMeshInstance_eventGetMeshInstanceComponents_Parms
	{
		TArray<UInstancedStaticMeshComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MultiMeshInstance_eventGetMeshInstanceComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_MultiMeshInstance, nullptr, "GetMeshInstanceComponents", nullptr, nullptr, Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::WorldMason_MultiMeshInstance_eventGetMeshInstanceComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::WorldMason_MultiMeshInstance_eventGetMeshInstanceComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMason_MultiMeshInstance::execGetMeshInstanceComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UInstancedStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetMeshInstanceComponents();
	P_NATIVE_END;
}
// End Class UWorldMason_MultiMeshInstance Function GetMeshInstanceComponents

// Begin Class UWorldMason_MultiMeshInstance
void UWorldMason_MultiMeshInstance::StaticRegisterNativesUWorldMason_MultiMeshInstance()
{
	UClass* Class = UWorldMason_MultiMeshInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllInstances", &UWorldMason_MultiMeshInstance::execClearAllInstances },
		{ "ClearAllInstancesOfMesh", &UWorldMason_MultiMeshInstance::execClearAllInstancesOfMesh },
		{ "GetInstancedMeshComponent", &UWorldMason_MultiMeshInstance::execGetInstancedMeshComponent },
		{ "GetMeshInstanceComponents", &UWorldMason_MultiMeshInstance::execGetMeshInstanceComponents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMason_MultiMeshInstance);
UClass* Z_Construct_UClass_UWorldMason_MultiMeshInstance_NoRegister()
{
	return UWorldMason_MultiMeshInstance::StaticClass();
}
struct Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "World Mason" },
		{ "IncludePath", "WorldMason_Components.h" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComps_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MeshComps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstances, "ClearAllInstances" }, // 3300011440
		{ &Z_Construct_UFunction_UWorldMason_MultiMeshInstance_ClearAllInstancesOfMesh, "ClearAllInstancesOfMesh" }, // 744077355
		{ &Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetInstancedMeshComponent, "GetInstancedMeshComponent" }, // 3197808042
		{ &Z_Construct_UFunction_UWorldMason_MultiMeshInstance_GetMeshInstanceComponents, "GetMeshInstanceComponents" }, // 3569724280
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldMason_MultiMeshInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::NewProp_MeshComps_ValueProp = { "MeshComps", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::NewProp_MeshComps_Key_KeyProp = { "MeshComps_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::NewProp_MeshComps = { "MeshComps", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldMason_MultiMeshInstance, MeshComps), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComps_MetaData), NewProp_MeshComps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::NewProp_MeshComps_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::NewProp_MeshComps_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::NewProp_MeshComps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::ClassParams = {
	&UWorldMason_MultiMeshInstance::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMason_MultiMeshInstance()
{
	if (!Z_Registration_Info_UClass_UWorldMason_MultiMeshInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMason_MultiMeshInstance.OuterSingleton, Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMason_MultiMeshInstance.OuterSingleton;
}
template<> WORLDMASON_API UClass* StaticClass<UWorldMason_MultiMeshInstance>()
{
	return UWorldMason_MultiMeshInstance::StaticClass();
}
UWorldMason_MultiMeshInstance::UWorldMason_MultiMeshInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMason_MultiMeshInstance);
UWorldMason_MultiMeshInstance::~UWorldMason_MultiMeshInstance() {}
// End Class UWorldMason_MultiMeshInstance

// Begin Class UWorldMason_MeshHarvester Function GetInstancedMeshComponent
struct Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics
{
	struct WorldMason_MeshHarvester_eventGetInstancedMeshComponent_Parms
	{
		UStaticMesh* Mesh;
		UInstancedStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshHarvester" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MeshHarvester_eventGetInstancedMeshComponent_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MeshHarvester_eventGetInstancedMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_MeshHarvester, nullptr, "GetInstancedMeshComponent", nullptr, nullptr, Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::WorldMason_MeshHarvester_eventGetInstancedMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::WorldMason_MeshHarvester_eventGetInstancedMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMason_MeshHarvester::execGetInstancedMeshComponent)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInstancedStaticMeshComponent**)Z_Param__Result=P_THIS->GetInstancedMeshComponent(Z_Param_Mesh);
	P_NATIVE_END;
}
// End Class UWorldMason_MeshHarvester Function GetInstancedMeshComponent

// Begin Class UWorldMason_MeshHarvester Function Harvest_Actor
struct Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics
{
	struct WorldMason_MeshHarvester_eventHarvest_Actor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshHarvester" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MeshHarvester_eventHarvest_Actor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldMason_MeshHarvester_eventHarvest_Actor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMason_MeshHarvester_eventHarvest_Actor_Parms), &Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_MeshHarvester, nullptr, "Harvest_Actor", nullptr, nullptr, Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::WorldMason_MeshHarvester_eventHarvest_Actor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::WorldMason_MeshHarvester_eventHarvest_Actor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMason_MeshHarvester::execHarvest_Actor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Harvest_Actor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UWorldMason_MeshHarvester Function Harvest_Actor

// Begin Class UWorldMason_MeshHarvester Function Harvest_ChildActor
struct Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics
{
	struct WorldMason_MeshHarvester_eventHarvest_ChildActor_Parms
	{
		UChildActorComponent* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshHarvester" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MeshHarvester_eventHarvest_ChildActor_Parms, Actor), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
void Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldMason_MeshHarvester_eventHarvest_ChildActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMason_MeshHarvester_eventHarvest_ChildActor_Parms), &Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_MeshHarvester, nullptr, "Harvest_ChildActor", nullptr, nullptr, Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::WorldMason_MeshHarvester_eventHarvest_ChildActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::WorldMason_MeshHarvester_eventHarvest_ChildActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMason_MeshHarvester::execHarvest_ChildActor)
{
	P_GET_OBJECT(UChildActorComponent,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Harvest_ChildActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UWorldMason_MeshHarvester Function Harvest_ChildActor

// Begin Class UWorldMason_MeshHarvester Function Harvest_Mesh
struct Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics
{
	struct WorldMason_MeshHarvester_eventHarvest_Mesh_Parms
	{
		UStaticMeshComponent* Mesh;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MeshHarvester" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldMason_MeshHarvester_eventHarvest_Mesh_Parms, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
void Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WorldMason_MeshHarvester_eventHarvest_Mesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldMason_MeshHarvester_eventHarvest_Mesh_Parms), &Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldMason_MeshHarvester, nullptr, "Harvest_Mesh", nullptr, nullptr, Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::WorldMason_MeshHarvester_eventHarvest_Mesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::WorldMason_MeshHarvester_eventHarvest_Mesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWorldMason_MeshHarvester::execHarvest_Mesh)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Harvest_Mesh(Z_Param_Mesh);
	P_NATIVE_END;
}
// End Class UWorldMason_MeshHarvester Function Harvest_Mesh

// Begin Class UWorldMason_MeshHarvester
void UWorldMason_MeshHarvester::StaticRegisterNativesUWorldMason_MeshHarvester()
{
	UClass* Class = UWorldMason_MeshHarvester::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstancedMeshComponent", &UWorldMason_MeshHarvester::execGetInstancedMeshComponent },
		{ "Harvest_Actor", &UWorldMason_MeshHarvester::execHarvest_Actor },
		{ "Harvest_ChildActor", &UWorldMason_MeshHarvester::execHarvest_ChildActor },
		{ "Harvest_Mesh", &UWorldMason_MeshHarvester::execHarvest_Mesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldMason_MeshHarvester);
UClass* Z_Construct_UClass_UWorldMason_MeshHarvester_NoRegister()
{
	return UWorldMason_MeshHarvester::StaticClass();
}
struct Z_Construct_UClass_UWorldMason_MeshHarvester_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "World Mason" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Converts all static mesh components from this actor and any child actors into instanced static meshes on BeginPlay.\n" },
#endif
		{ "IncludePath", "WorldMason_Components.h" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts all static mesh components from this actor and any child actors into instanced static meshes on BeginPlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComps_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoHarvestSelf_MetaData[] = {
		{ "Category", "MeshHarvester" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestoryChildActorsAfterHarvest_MetaData[] = {
		{ "Category", "MeshHarvester" },
		{ "ModuleRelativePath", "Public/WorldMason_Components.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComps_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MeshComps;
	static void NewProp_bAutoHarvestSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoHarvestSelf;
	static void NewProp_bDestoryChildActorsAfterHarvest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestoryChildActorsAfterHarvest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldMason_MeshHarvester_GetInstancedMeshComponent, "GetInstancedMeshComponent" }, // 2554543122
		{ &Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Actor, "Harvest_Actor" }, // 1987185286
		{ &Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_ChildActor, "Harvest_ChildActor" }, // 281059636
		{ &Z_Construct_UFunction_UWorldMason_MeshHarvester_Harvest_Mesh, "Harvest_Mesh" }, // 878993508
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldMason_MeshHarvester>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_MeshComps_ValueProp = { "MeshComps", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_MeshComps_Key_KeyProp = { "MeshComps_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_MeshComps = { "MeshComps", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWorldMason_MeshHarvester, MeshComps), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComps_MetaData), NewProp_MeshComps_MetaData) };
void Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_bAutoHarvestSelf_SetBit(void* Obj)
{
	((UWorldMason_MeshHarvester*)Obj)->bAutoHarvestSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_bAutoHarvestSelf = { "bAutoHarvestSelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldMason_MeshHarvester), &Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_bAutoHarvestSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoHarvestSelf_MetaData), NewProp_bAutoHarvestSelf_MetaData) };
void Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_bDestoryChildActorsAfterHarvest_SetBit(void* Obj)
{
	((UWorldMason_MeshHarvester*)Obj)->bDestoryChildActorsAfterHarvest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_bDestoryChildActorsAfterHarvest = { "bDestoryChildActorsAfterHarvest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWorldMason_MeshHarvester), &Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_bDestoryChildActorsAfterHarvest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestoryChildActorsAfterHarvest_MetaData), NewProp_bDestoryChildActorsAfterHarvest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_MeshComps_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_MeshComps_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_MeshComps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_bAutoHarvestSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::NewProp_bDestoryChildActorsAfterHarvest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WorldMason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::ClassParams = {
	&UWorldMason_MeshHarvester::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::Class_MetaDataParams), Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWorldMason_MeshHarvester()
{
	if (!Z_Registration_Info_UClass_UWorldMason_MeshHarvester.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldMason_MeshHarvester.OuterSingleton, Z_Construct_UClass_UWorldMason_MeshHarvester_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWorldMason_MeshHarvester.OuterSingleton;
}
template<> WORLDMASON_API UClass* StaticClass<UWorldMason_MeshHarvester>()
{
	return UWorldMason_MeshHarvester::StaticClass();
}
UWorldMason_MeshHarvester::UWorldMason_MeshHarvester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldMason_MeshHarvester);
UWorldMason_MeshHarvester::~UWorldMason_MeshHarvester() {}
// End Class UWorldMason_MeshHarvester

// Begin Registration
struct Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWorldMason_MultiMeshInstance, UWorldMason_MultiMeshInstance::StaticClass, TEXT("UWorldMason_MultiMeshInstance"), &Z_Registration_Info_UClass_UWorldMason_MultiMeshInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMason_MultiMeshInstance), 926499458U) },
		{ Z_Construct_UClass_UWorldMason_MeshHarvester, UWorldMason_MeshHarvester::StaticClass, TEXT("UWorldMason_MeshHarvester"), &Z_Registration_Info_UClass_UWorldMason_MeshHarvester, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldMason_MeshHarvester), 2403672287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_2964938555(TEXT("/Script/WorldMason"),
	Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
