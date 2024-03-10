// Copyright(c) Forge Reply. All Rights Reserved.

#include "Tile.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstance.h"
#include "Components/BoxComponent.h"
#include "Behaviors/RgsTileBehaviour.h"

ATile::ATile()
{
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName("Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Game/Geometry/Meshes/ChamferBox"));
	MeshComponent->SetStaticMesh(CubeMesh.Object);
	MeshComponent->SetRelativeScale3D(FVector(2.0f, 2.0f, 1.0f));
	static ConstructorHelpers::FObjectFinder<UMaterialInstance> TimeMaterialInstance(TEXT("/Game/Materials/TileMaterialInstance"));
	MeshComponent->SetMaterial(0, TimeMaterialInstance.Object);

	BoxCollisionComponent = CreateDefaultSubobject<UBoxComponent>(FName("Collision Component"));
	BoxCollisionComponent->SetCollisionProfileName(FName("Tile"));
	RootComponent = BoxCollisionComponent;
	MeshComponent->SetupAttachment(RootComponent);

}

void ATile::BeginPlay()
{
	Super::BeginPlay();
	if (IsValid(BoxCollisionComponent))
	{
		BoxCollisionComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &ATile::OnBeginOverlap);
		BoxCollisionComponent->OnComponentEndOverlap.AddUniqueDynamic(this, &ATile::OnEndOverlap);
	} 
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ATile::BeginPlay - BoxCollisionComponent not found!"));
	}

	if (IsValid(MeshComponent)) 
	{
		MeshComponent->SetVectorParameterValueOnMaterials(FName("TileBaseColor"), FVector(FColor::Silver));
		MeshComponent->SetScalarParameterValueOnMaterials(FName("TileEmission"), 0.0f);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ATile::BeginPlay - MeshComponent not found!"));
	}

	CreateTileBehaviours();
}

void ATile::SetType(ETileType Type)
{
	TileType = Type;
}

ETileType ATile::GetType() const
{
	return TileType;
}

float ATile::GetTileSize() const
{
	if (MeshComponent)
	{
		return MeshComponent->GetStaticMesh()->GetBoundingBox().GetSize().X * MeshComponent->GetComponentScale().X;
	}

	UE_LOG(LogTemp, Warning, TEXT("ATile::GetTileSize - MeshComponent not valid"));
	return 0.0f;
}

void ATile::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATile::OnBeginOverlap - Invalid other actor encountered"));
		return;
	}

	for (URgsTileBehaviour* Behaviour : Behaviours)
	{
		Behaviour->StepOnEffect();
	}
}

void ATile::CreateTileBehaviours()
{
	for (TSubclassOf<URgsTileBehaviour>& TileBehaviourClass : TileBehaviours)
	{
		if (TileBehaviourClass)
		{
			URgsTileBehaviour* NewBehaviour = NewObject<URgsTileBehaviour>(this, *TileBehaviourClass);
			if (NewBehaviour)
			{
				NewBehaviour->Init(this);
				Behaviours.Add(NewBehaviour);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("ATile::CreateTileBehaviours - Failed to instantiate behaviour class %s"), *TileBehaviourClass->GetName());
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("ATile::CreateTileBehaviours - Invalid behaviour class encountered"));
		}
	}

}

void ATile::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!OtherActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATile::OnEndOverlap - Invalid other actor encountered"));
		return;
	}

	for (URgsTileBehaviour* Behaviour : Behaviours)
	{
		Behaviour->StepOffEffect();
	}
}

URgsTileBehaviour* ATile::FindBehaviourByClass(TSubclassOf<URgsTileBehaviour> BehaviourClass) const
{
	for (URgsTileBehaviour* Behaviour : Behaviours)
	{
		if (Behaviour && (Behaviour->GetClass() == BehaviourClass) || Behaviour->GetClass()->IsChildOf(BehaviourClass))
		{
			return Behaviour;
		}
	}

	return nullptr;
}
