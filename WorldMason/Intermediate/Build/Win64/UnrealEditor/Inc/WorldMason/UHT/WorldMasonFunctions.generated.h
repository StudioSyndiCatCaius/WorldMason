// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMasonFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UInstancedStaticMeshComponent;
class USplineComponent;
class UStaticMesh;
class UStaticMeshComponent;
enum class EWorldMasonMeshLengthSelector : uint8;
struct FGeometryScriptPrimitiveOptions;
#ifdef WORLDMASON_WorldMasonFunctions_generated_h
#error "WorldMasonFunctions.generated.h already included, missing '#pragma once' in WorldMasonFunctions.h"
#endif
#define WORLDMASON_WorldMasonFunctions_generated_h

#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildStepsAlongDriver); \
	DECLARE_FUNCTION(execBuildDynamicMeshAsRamp); \
	DECLARE_FUNCTION(execBuildDynamicMeshAlongSpline); \
	DECLARE_FUNCTION(execGetVectorCornersXYZ); \
	DECLARE_FUNCTION(execGetVectorCornersXY); \
	DECLARE_FUNCTION(execGetScaledVectors); \
	DECLARE_FUNCTION(execClampVectorToStep_Copy); \
	DECLARE_FUNCTION(execClampVectorToStep_Ref); \
	DECLARE_FUNCTION(execGetScaledComponentMeshBounds); \
	DECLARE_FUNCTION(execGetScaledMeshBounds); \
	DECLARE_FUNCTION(execWorldMasonNoise_Float); \
	DECLARE_FUNCTION(execAddNoiseToMeshInstances); \
	DECLARE_FUNCTION(execBuildMeshTilesFromDriver); \
	DECLARE_FUNCTION(execGetRandomInstanceMeshComponentFromSeed); \
	DECLARE_FUNCTION(execBuildMeshBoxFromDriver_Multi); \
	DECLARE_FUNCTION(execBuildMeshBoxFromDriver); \
	DECLARE_FUNCTION(execAddMeshInstancesAlongDriver_Multi); \
	DECLARE_FUNCTION(execAddMeshInstancesAlongDriver); \
	DECLARE_FUNCTION(execOffsetMeshInstances); \
	DECLARE_FUNCTION(execRemoveMultiMeshInstancesFromBooleanPoints); \
	DECLARE_FUNCTION(execAppendMeshInstancesAtLocation); \
	DECLARE_FUNCTION(execReplaceMeshInstancesAtLocation); \
	DECLARE_FUNCTION(execRemoveMeshInstancesFromBooleanPoints); \
	DECLARE_FUNCTION(execFormSplineAsBox); \
	DECLARE_FUNCTION(execFormSplineAsCircle); \
	DECLARE_FUNCTION(execGetSplinePointsInRangeOfVectors); \
	DECLARE_FUNCTION(execAddMeshInstancesAlongSpline); \
	DECLARE_FUNCTION(execAddMeshInstancesAtSplinePoints); \
	DECLARE_FUNCTION(execClampSplineTangents); \
	DECLARE_FUNCTION(execGet2DVectorPointsFromSpline); \
	DECLARE_FUNCTION(execStretchInstanceMeshAlongSpline);


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMasonFunctions(); \
	friend struct Z_Construct_UClass_UWorldMasonFunctions_Statics; \
public: \
	DECLARE_CLASS(UWorldMasonFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldMason"), NO_API) \
	DECLARE_SERIALIZER(UWorldMasonFunctions)


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldMasonFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldMasonFunctions(UWorldMasonFunctions&&); \
	UWorldMasonFunctions(const UWorldMasonFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldMasonFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMasonFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMasonFunctions) \
	NO_API virtual ~UWorldMasonFunctions();


#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_26_PROLOG
#define FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_29_INCLASS_NO_PURE_DECLS \
	FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMASON_API UClass* StaticClass<class UWorldMasonFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PROJECTS_Work_CircleOfOrion_UE_Plugins_WorldMason_Source_WorldMason_Public_WorldMasonFunctions_h


#define FOREACH_ENUM_EWORLDMASONMESHLENGTHSELECTOR(op) \
	op(EWorldMasonMeshLengthSelector::MeshLengthSelect_Custom) \
	op(EWorldMasonMeshLengthSelector::MeshLengthSelect_X) \
	op(EWorldMasonMeshLengthSelector::MeshLengthSelect_Y) \
	op(EWorldMasonMeshLengthSelector::MeshLengthSelect_Z) 

enum class EWorldMasonMeshLengthSelector : uint8;
template<> struct TIsUEnumClass<EWorldMasonMeshLengthSelector> { enum { Value = true }; };
template<> WORLDMASON_API UEnum* StaticEnum<EWorldMasonMeshLengthSelector>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
