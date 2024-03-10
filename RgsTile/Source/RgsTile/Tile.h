// Copyright(c) Forge Reply. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UENUM(Blueprintable)
enum class ETileType : uint8
{
	Normal,
	Green,
	Red,
	Blue
};

class UBoxComponent;
class URgsTileBehaviour;

// Simple implementation of the Tile class.
// It consist in a platform sized 2m x 2m x 1m.
UCLASS()
class RGSTILE_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	ATile();

	// Sets the type of this tile.
	void SetType(ETileType Type);

	// Returns the type of this tile.
	ETileType GetType() const;

	// Returns the size of this tile.
	float GetTileSize() const;

	// Returns a behavior of the desired class if found
	URgsTileBehaviour* FindBehaviourByClass(TSubclassOf<URgsTileBehaviour> BehaviourClass) const;

protected:
	virtual void BeginPlay() override;

	// Method to call to create the tile behaviours
	void CreateTileBehaviours();

	// Method to call to notify when the player steps on this tile.
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Method to call to notify when the player steps off this tile.
	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Visual, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Visual, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* BoxCollisionComponent;

protected:
	UPROPERTY(Transient)
	ETileType TileType = ETileType::Normal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Behaviour, meta = (AllowPrivateAccess = "true", Tooltip = "Set of behaviours of this tile"))
	TArray<TSubclassOf<URgsTileBehaviour>> TileBehaviours;

	UPROPERTY()
	TArray<URgsTileBehaviour*> Behaviours;
};
