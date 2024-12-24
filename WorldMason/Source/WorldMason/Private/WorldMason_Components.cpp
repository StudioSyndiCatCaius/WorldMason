

#include "WorldMason_Components.h"

#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

TArray<UInstancedStaticMeshComponent*> UWorldMason_MultiMeshInstance::GetMeshInstanceComponents()
{
	TArray<UInstancedStaticMeshComponent*> out;
	TArray<UStaticMesh*> temp_meshlist;
	MeshComps.GetKeys(temp_meshlist);
	for (auto* meshref : temp_meshlist)
	{
		out.Add(MeshComps[meshref]);
	}
	return out;
}

UInstancedStaticMeshComponent* UWorldMason_MultiMeshInstance::GetInstancedMeshComponent(UStaticMesh* Mesh)
{
	if(!MeshComps.Contains(Mesh))
	{
		UInstancedStaticMeshComponent* newcomp=Cast<UInstancedStaticMeshComponent>(
			GetOwner()->AddComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass(),false,FTransform(),true));
		newcomp->SetStaticMesh(Mesh);
		GetOwner()->FinishAddComponent(newcomp,false,FTransform());
		MeshComps.Add(Mesh,newcomp);
	}
	if(MeshComps.Contains(Mesh))
	{
		return MeshComps[Mesh];
	}
	return nullptr;
}

void UWorldMason_MultiMeshInstance::ClearAllInstances()
{
	for(auto* tempInst : GetMeshInstanceComponents())
	{
		if(tempInst)
		{
			tempInst->ClearInstances();
		}
	}
}

void UWorldMason_MultiMeshInstance::ClearAllInstancesOfMesh(UStaticMesh* Mesh)
{
	if(UInstancedStaticMeshComponent* meshComp = GetInstancedMeshComponent(Mesh))
	{
		meshComp->ClearInstances();
	}
}

void UWorldMason_MeshHarvester::BeginPlay()
{
	if(bAutoHarvestSelf)
	{
		Harvest_Actor(GetOwner());
	}
	Super::BeginPlay();
}

UInstancedStaticMeshComponent* UWorldMason_MeshHarvester::GetInstancedMeshComponent(UStaticMesh* Mesh)
{
	if(!MeshComps.Contains(Mesh))
	{
		UInstancedStaticMeshComponent* newcomp=Cast<UInstancedStaticMeshComponent>(
			GetOwner()->AddComponentByClass(UHierarchicalInstancedStaticMeshComponent::StaticClass(),false,FTransform(),true));
		if(newcomp)
		{
			newcomp->SetStaticMesh(Mesh);
			GetOwner()->FinishAddComponent(newcomp,false,FTransform());
			MeshComps.Add(Mesh,newcomp);
		}
	}
	if(MeshComps.Contains(Mesh))
	{
		return MeshComps[Mesh];
	}
	return nullptr;
}

bool UWorldMason_MeshHarvester::Harvest_Mesh(UStaticMeshComponent* Mesh)
{
	if(Mesh && Mesh->GetStaticMesh())
	{
		if(UInstancedStaticMeshComponent* meshcomp = GetInstancedMeshComponent(Mesh->GetStaticMesh()))
		{
			meshcomp->AddInstance(Mesh->GetComponentTransform(),true);
			Mesh->SetStaticMesh(nullptr);
			return true;
		}
	}
	return false;
}

bool UWorldMason_MeshHarvester::Harvest_ChildActor(UChildActorComponent* Actor)
{
	if(Actor && Actor->GetChildActor())
	{
		Harvest_Actor(Actor->GetChildActor());
		if(bDestoryChildActorsAfterHarvest)
		{
			Actor->DestroyChildActor();
			Actor->SetHiddenInGame(true);
		}
		return true;
	}
	return false;
}

bool UWorldMason_MeshHarvester::Harvest_Actor(AActor* Actor)
{
	TArray<UActorComponent*> TempComps = Actor->K2_GetComponentsByClass(UStaticMeshComponent::StaticClass());
	for(UActorComponent* TempComp : TempComps)
	{
		if(TempComp)
		{
			Harvest_Mesh(Cast<UStaticMeshComponent>(TempComp));
		}
	}
	TempComps = Actor->K2_GetComponentsByClass(UChildActorComponent::StaticClass());
	for(UActorComponent* TempComp : TempComps)
	{
		Harvest_ChildActor(Cast<UChildActorComponent>(TempComp));
	}
	return false;
}
