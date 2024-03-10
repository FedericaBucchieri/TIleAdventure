// Copyright(c) Forge Reply. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Tile.h"
#include "RgsTileGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTileFoundDelegate, ATile*, founded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FToggleTileVisibilityDelegate, ETileType, Type, bool, bShow);

class ATile;
class APawn;

UCLASS(minimalapi)
class ARgsTileGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARgsTileGameMode();

	virtual void BeginPlay() override;
	void EndPlay(const EEndPlayReason::Type EndPlayReason);

	virtual void Tick(float DeltaTime) override;

	// Resets the game, by forcing the reload of the game level.
	void ResetGame();

	// Method called when the game is over
	void GameOver();

	// Returns the number of Tiles per type that the player found.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Game)
	int32 GetTilesPerTypeFound(ETileType type);

	// Returns the total number of Tiles per Type in the tile grid.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Game)
	int32 GetTotalTilesOfType(ETileType TileType);

	// Returns the distance from the player to the closest Tile of Type (that the player has not found yet).
	// Returns -1 if all Type Tiles have been found.
	// Distance is defined as the number of tiles that the player has to move (horizontally and vertically)
	// to reach the closest Green Tile.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Game)
	int32 GetClosestTileDistancePerType(ETileType TileType);

protected:
	// Returns the player pawn instance
	// Returns nullptr if the player or the player controller is not available
	APawn* GetPlayerPawn();

	// Generates the tile grid
	void GenerateTileGrid();

	// Returns an array with tiles of the grid of the specified type
	TArray<ATile*> GetGridTilesOfType(ETileType Type);

	//Shuffle an Array of Tiles
	void ShuffleTiles(TArray<ETileType>& TilesArray);

	//Method called when the OnTileFound delegate is broadcasted
	UFUNCTION()
	void TileFoundTriggered(ATile* Tile);

	//Method called when the OnTypeVisibilityToggle is broadcasted
	UFUNCTION()
	void ToggleVisibilityByType(ETileType TileType, bool bShow);

public:

	// Defines the size of the tile grid to generate.
	// Must be at least 3.
	// Can be changed in the "TileGameModeBP" blueprint.
	UPROPERTY(EditDefaultsOnly, Category = Configuration, meta = (ClampMin = 3))
	int32 TileGridSize = 10;

	// Defines the number of Tiles per type to randomly place in the tile grid.
	// Each tile number Must be at least 1.
	// Can be changed in the "TileGameModeBP" blueprint.
	UPROPERTY(EditDefaultsOnly, Category = Configuration)
	TMap<ETileType, int32> NumberOfTilesPerType;

	// A Map representing the class of tile tipe to be spawned 
	UPROPERTY(EditDefaultsOnly, Category = Configuration)
	TMap<ETileType, TSubclassOf<class ATile>> TileClassMap;

	// Value representing the ground height for spawning tiles
	UPROPERTY(EditDefaultsOnly, Category = Configuration)
	float GroundLevel = -50.f;

	// Custom Event to be triggered when a tile is found by the player
	UPROPERTY()
	FTileFoundDelegate OnTileFound;

	// Custom Event to be triggered when all the tiles of a type must be shown or hidden
	UPROPERTY()
	FToggleTileVisibilityDelegate OnTypeVisibilityToggle;

protected:
	// Player Pawn variable for convenience
	UPROPERTY()
	APawn* PlayerPawn;

	// A Map representing the tiles of the grid
	UPROPERTY()
	TMap<ATile*, ETileType> GridTilesMap;
	
	// An Array representing the tiles already found by the player
	UPROPERTY()
	TArray<ATile*> TilesFound;

	// A Map to store the number of tiles found per type
	TMap<ETileType, int32> TilesPerTypeFound;

	// Size of the tile
	float TileSize = 0.f;

	// Static variable defining the height at which the player is considered death and game over is triggered
	static const float DeathHeight;
};



