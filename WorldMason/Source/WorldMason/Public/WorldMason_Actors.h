// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WorldMason_Components.h"
#include "Components/DynamicMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "Helpers/PCGBlueprintHelpers.h"
#include "WorldMason_Actors.generated.h"

UCLASS(Blueprintable,BlueprintType,Const,EditInlineNew,Abstract)
class WORLDMASON_API UWorldMason_SplineActorScript : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent,Category="SplineActor")
	void OnUpdate(AWorldMason_SplineActor* Actor) const;
};

UCLASS()
class WORLDMASON_API AWorldMason_SplineActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWorldMason_SplineActor();

protected:
	// Called when the game starts or when spawned
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void BeginPlay() override;

public:

	//~ Begin AActor Interface
#if WITH_EDITOR
	virtual bool GetReferencedContentObjects(TArray<UObject*>& Objects) const override;
#endif // WITH_EDITOR
	//~ End AActor Interface

	
	UPROPERTY(EditDefaultsOnly,Category="Spline") USceneComponent* ActorRoot;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Spline") UDynamicMeshComponent* DynamicMeshComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Spline") UWorldMason_MultiMeshInstance* MultiMeshComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Spline") UPCGComponent* PCGComponent;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Spline",AdvancedDisplay) USplineComponent* SplineComponent;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category="Spline|PCG")
	bool bAutoGeneratePCG=true;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Instanced,Category="Spline")
	UWorldMason_SplineActorScript* SplineActorScript;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(MakeEditWidget),Category="Spline")
	FVector MainDriver;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spline")
	bool bClosedLoop;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spline")
	float ClampSplineRange=1;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spline")
	bool bBuildMeshblockFromSpline;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spline")
	float MeshblockHeight=100;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Spline")
	bool bMeshblockOffsetFromHeight;
	UPROPERTY(EditAnywhere,Category="Spline")
	UMaterialInterface* MeshblockMaterial;

	UFUNCTION(BlueprintCallable,Category="Spline")
	void AddMeshes_AlongSpline(UStaticMesh* Mesh, bool bAverageDistance, bool bAimToNext, float Distance, const FTransform Offset);
	
	UFUNCTION(BlueprintCallable,Category="Spline")
	void AddMeshes_AtSplinePoints(UStaticMesh* Mesh, float Distance, const FTransform Offset);
};


UCLASS()
class WORLDMASON_API AWorldMason_ModularActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWorldMason_ModularActor();

protected:
	// Called when the game starts or when spawned
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void BeginPlay() override;

public:

	UPROPERTY(BlueprintReadOnly,EditInstanceOnly,Category="Components")
	USceneComponent* Root;
	
	UFUNCTION(BlueprintCallable,Category="Modular Actor")
	void Rebuild();

	UFUNCTION(BlueprintNativeEvent,Category="Modular Actor")
	TArray<UChildActorComponent*> GetModuleComponents();

	UPROPERTY(EditAnywhere,Category="Modular Actor")
	TArray<int32> ModuleStyles;

	UPROPERTY(EditAnywhere,Category="Modular Actor")
	TArray<TSubclassOf<AActor>> ModuleActorClasses;
};
