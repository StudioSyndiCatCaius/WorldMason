// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Components/ActorComponent.h"
#include "Engine/StaticMesh.h"
#include "WorldMason_Components.generated.h"



UCLASS(ClassGroup=("World Mason"), meta=(BlueprintSpawnableComponent))
class WORLDMASON_API UWorldMason_MultiMeshInstance : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<UStaticMesh*, UInstancedStaticMeshComponent*> MeshComps;

	UFUNCTION()
	TArray<UInstancedStaticMeshComponent*> GetMeshInstanceComponents();
public:
	UFUNCTION(BlueprintCallable,Category="Multi-Mesh")
	UInstancedStaticMeshComponent* GetInstancedMeshComponent(UStaticMesh* Mesh);

	UFUNCTION(BlueprintCallable,Category="Multi-Mesh")
	void ClearAllInstances();

	UFUNCTION(BlueprintCallable,Category="Multi-Mesh")
	void ClearAllInstancesOfMesh(UStaticMesh* Mesh);
};



// ==================================================================
// Mesh Harvester
// ==================================================================

//Converts all static mesh components from this actor and any child actors into instanced static meshes on BeginPlay.
UCLASS(ClassGroup=("World Mason"), meta=(BlueprintSpawnableComponent))
class WORLDMASON_API UWorldMason_MeshHarvester : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<UStaticMesh*, UInstancedStaticMeshComponent*> MeshComps;

public:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="MeshHarvester")
	bool bAutoHarvestSelf;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="MeshHarvester")
	bool bDestoryChildActorsAfterHarvest;

	UFUNCTION(BlueprintCallable,Category="MeshHarvester")
	UInstancedStaticMeshComponent* GetInstancedMeshComponent(UStaticMesh* Mesh);

	UFUNCTION(BlueprintCallable,Category="MeshHarvester")
	bool Harvest_Mesh(UStaticMeshComponent* Mesh);

	UFUNCTION(BlueprintCallable,Category="MeshHarvester")
	bool Harvest_ChildActor(UChildActorComponent* Actor);

	UFUNCTION(BlueprintCallable,Category="MeshHarvester")
	bool Harvest_Actor(AActor* Actor);
};

// ==================================================================
// Mesh Harvester
// ==================================================================
