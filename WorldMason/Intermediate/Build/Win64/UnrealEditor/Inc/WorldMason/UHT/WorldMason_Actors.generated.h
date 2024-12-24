// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMason_Actors.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWorldMason_SplineActor;
class UChildActorComponent;
class UStaticMesh;
#ifdef WORLDMASON_WorldMason_Actors_generated_h
#error "WorldMason_Actors.generated.h already included, missing '#pragma once' in WorldMason_Actors.h"
#endif
#define WORLDMASON_WorldMason_Actors_generated_h

#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_16_CALLBACK_WRAPPERS
#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMason_SplineActorScript(); \
	friend struct Z_Construct_UClass_UWorldMason_SplineActorScript_Statics; \
public: \
	DECLARE_CLASS(UWorldMason_SplineActorScript, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WorldMason"), NO_API) \
	DECLARE_SERIALIZER(UWorldMason_SplineActorScript)


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldMason_SplineActorScript(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldMason_SplineActorScript(UWorldMason_SplineActorScript&&); \
	UWorldMason_SplineActorScript(const UWorldMason_SplineActorScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldMason_SplineActorScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMason_SplineActorScript); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMason_SplineActorScript) \
	NO_API virtual ~UWorldMason_SplineActorScript();


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_13_PROLOG
#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_16_CALLBACK_WRAPPERS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_16_INCLASS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMASON_API UClass* StaticClass<class UWorldMason_SplineActorScript>();

#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddMeshes_AtSplinePoints); \
	DECLARE_FUNCTION(execAddMeshes_AlongSpline);


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldMason_SplineActor(); \
	friend struct Z_Construct_UClass_AWorldMason_SplineActor_Statics; \
public: \
	DECLARE_CLASS(AWorldMason_SplineActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldMason"), NO_API) \
	DECLARE_SERIALIZER(AWorldMason_SplineActor)


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldMason_SplineActor(AWorldMason_SplineActor&&); \
	AWorldMason_SplineActor(const AWorldMason_SplineActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldMason_SplineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldMason_SplineActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldMason_SplineActor) \
	NO_API virtual ~AWorldMason_SplineActor();


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_23_PROLOG
#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_26_INCLASS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMASON_API UClass* StaticClass<class AWorldMason_SplineActor>();

#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<UChildActorComponent*> GetModuleComponents_Implementation(); \
	DECLARE_FUNCTION(execGetModuleComponents); \
	DECLARE_FUNCTION(execRebuild);


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_CALLBACK_WRAPPERS
#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldMason_ModularActor(); \
	friend struct Z_Construct_UClass_AWorldMason_ModularActor_Statics; \
public: \
	DECLARE_CLASS(AWorldMason_ModularActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldMason"), NO_API) \
	DECLARE_SERIALIZER(AWorldMason_ModularActor)


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldMason_ModularActor(AWorldMason_ModularActor&&); \
	AWorldMason_ModularActor(const AWorldMason_ModularActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldMason_ModularActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldMason_ModularActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldMason_ModularActor) \
	NO_API virtual ~AWorldMason_ModularActor();


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_82_PROLOG
#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_CALLBACK_WRAPPERS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_INCLASS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMASON_API UClass* StaticClass<class AWorldMason_ModularActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMason_Actors_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
