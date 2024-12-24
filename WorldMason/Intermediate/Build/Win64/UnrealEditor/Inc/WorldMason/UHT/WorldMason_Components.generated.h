// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMason_Components.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UChildActorComponent;
class UInstancedStaticMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
#ifdef WORLDMASON_WorldMason_Components_generated_h
#error "WorldMason_Components.generated.h already included, missing '#pragma once' in WorldMason_Components.h"
#endif
#define WORLDMASON_WorldMason_Components_generated_h

#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAllInstancesOfMesh); \
	DECLARE_FUNCTION(execClearAllInstances); \
	DECLARE_FUNCTION(execGetInstancedMeshComponent); \
	DECLARE_FUNCTION(execGetMeshInstanceComponents);


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMason_MultiMeshInstance(); \
	friend struct Z_Construct_UClass_UWorldMason_MultiMeshInstance_Statics; \
public: \
	DECLARE_CLASS(UWorldMason_MultiMeshInstance, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldMason"), NO_API) \
	DECLARE_SERIALIZER(UWorldMason_MultiMeshInstance)


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldMason_MultiMeshInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldMason_MultiMeshInstance(UWorldMason_MultiMeshInstance&&); \
	UWorldMason_MultiMeshInstance(const UWorldMason_MultiMeshInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldMason_MultiMeshInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMason_MultiMeshInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMason_MultiMeshInstance) \
	NO_API virtual ~UWorldMason_MultiMeshInstance();


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_12_PROLOG
#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_15_INCLASS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMASON_API UClass* StaticClass<class UWorldMason_MultiMeshInstance>();

#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHarvest_Actor); \
	DECLARE_FUNCTION(execHarvest_ChildActor); \
	DECLARE_FUNCTION(execHarvest_Mesh); \
	DECLARE_FUNCTION(execGetInstancedMeshComponent);


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMason_MeshHarvester(); \
	friend struct Z_Construct_UClass_UWorldMason_MeshHarvester_Statics; \
public: \
	DECLARE_CLASS(UWorldMason_MeshHarvester, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldMason"), NO_API) \
	DECLARE_SERIALIZER(UWorldMason_MeshHarvester)


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldMason_MeshHarvester(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldMason_MeshHarvester(UWorldMason_MeshHarvester&&); \
	UWorldMason_MeshHarvester(const UWorldMason_MeshHarvester&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldMason_MeshHarvester); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMason_MeshHarvester); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMason_MeshHarvester) \
	NO_API virtual ~UWorldMason_MeshHarvester();


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_40_PROLOG
#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_43_INCLASS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMASON_API UClass* StaticClass<class UWorldMason_MeshHarvester>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Components_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
