// Copyright(c) Forge Reply. All Rights Reserved.

#include "RgsTileGameMode.h"
#include "RgsTileCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Tile.h"
#include "Kismet/GameplayStatics.h"
#include "TileHUD.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Behaviors/RgsTileColorBehaviour.h"
#include "Behaviors/RgsTileBehaviour.h"

const float ARgsTileGameMode::DeathHeight = -100;

ARgsTileGameMode::ARgsTileGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void ARgsTileGameMode::ResetGame()
{
	UGameplayStatics::OpenLevel(this, FName("/Game/Levels/LoadingLevel"));
}

void ARgsTileGameMode::GameOver()
{
	if (PlayerPawn)
	{
		PlayerPawn->GetMovementComponent()->SetActive(false);
	}

	AHUD* CurrentHUD = GetWorld()->GetFirstPlayerController()->GetHUD();
	if (!CurrentHUD)
	{
		UE_LOG(LogTemp, Error, TEXT("ARgsTileGameMode::GameOver - CurrentHUD not found!"));
		return;
	}

	ATileHUD* TileHUD = Cast<ATileHUD>(CurrentHUD);
	if (!TileHUD) return;

	TileHUD->ShowEndScreen();
}

int32 ARgsTileGameMode::GetTilesPerTypeFound(ETileType type)
{
	return TilesPerTypeFound.FindRef(type);
}

int32 ARgsTileGameMode::GetTotalTilesOfType(ETileType TileType)
{
	if (TileType == ETileType::Normal)
	{
		return -1;
	}

	return NumberOfTilesPerType.FindRef(TileType);
}

int32 ARgsTileGameMode::GetClosestTileDistancePerType(ETileType TileType)
{
	if (!PlayerPawn) return -1;
	FVector PlayerLocation = PlayerPawn->GetActorLocation();

	int32 ClosestDistance = MAX_int32;
	for (auto GridElement : GridTilesMap)
	{
		if (TilesFound.Contains(GridElement.Key)) continue;

		if (GridElement.Value == TileType)
		{
			int32 DistanceX = FMath::Abs(FMath::RoundToInt((GridElement.Key->GetActorLocation().X - PlayerLocation.X) / TileSize));
			int32 DistanceY = FMath::Abs(FMath::RoundToInt((GridElement.Key->GetActorLocation().Y - PlayerLocation.Y) / TileSize));
			int32 TotalDistance = DistanceX + DistanceY; 
			ClosestDistance = FMath::Min(ClosestDistance, TotalDistance);
		}
	}

	if (ClosestDistance != MAX_int32)
	{
		return ClosestDistance;
	}
	
	return -1;
}

void ARgsTileGameMode::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = GetPlayerPawn();
	if (!PlayerPawn) return;

	OnTileFound.AddDynamic(this, &ARgsTileGameMode::TileFoundTriggered);
	OnTypeVisibilityToggle.AddDynamic(this, &ARgsTileGameMode::ToggleVisibilityByType);

	GenerateTileGrid();

	TilesPerTypeFound.Add(ETileType::Green, 0);
	TilesPerTypeFound.Add(ETileType::Red, 0);
	TilesPerTypeFound.Add(ETileType::Blue, 0);
}

void ARgsTileGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	OnTileFound.Clear();
	OnTypeVisibilityToggle.Clear();
}

void ARgsTileGameMode::GenerateTileGrid()
{
	if (!PlayerPawn) return;
	FVector PlayerStartingPlatformLocation = PlayerPawn->GetActorLocation();

	TArray<ETileType> TileTypes;
	for (auto It = NumberOfTilesPerType.CreateIterator(); It; ++It)
	{
		if (It.Key() != ETileType::Normal)
		{
			if (It.Value() == 0)
			{
				It.Value() = 1;
			}

			for (int32 i = 0; i < It.Value(); i++)
			{
				TileTypes.Emplace(It.Key());
			}
		}
	}

	int32 RemainingNormalTiles = TileGridSize * TileGridSize - TileTypes.Num() - 1;
	if(RemainingNormalTiles < 0) 
	{
		UE_LOG(LogTemp, Error, TEXT("ARgsTileGameMode::GenerateTileGrid - Please provide a correct number of tiles per type or increase the TileGridSize"));
		return;
	}

	for (int32 i = 0; i < RemainingNormalTiles; ++i)
	{
		TileTypes.Add(ETileType::Normal);
	}
	ShuffleTiles(TileTypes);
	
	int32 TileIndex = 0;
	bool bIsEven = TileGridSize % 2 == 0;
	int32 Correction = bIsEven ? 1 : 0;

	for (int32 Row = -TileGridSize/2; Row <= TileGridSize/2 - Correction; Row++)
	{
		for (int32 Column = -TileGridSize/2; Column <= TileGridSize/2 - Correction; Column++)
		{
			if (Row == 0 && Column == 0) continue;

			ETileType CurrentTileType = TileTypes[TileIndex];
			TileIndex++;

			ATile* NewTile = nullptr;
			TSubclassOf<ATile> TileClass = TileClassMap.FindRef(CurrentTileType);
			if (TileClass) 
			{
				NewTile = GetWorld()->SpawnActorDeferred<ATile>(TileClass, FTransform(FVector::ZeroVector));
			}

			if (TileSize == 0.0f && NewTile)
			{
				TileSize = NewTile->GetTileSize();
			}

			FVector InitialTileLocation = FVector(PlayerStartingPlatformLocation.X + (Row * TileSize), PlayerStartingPlatformLocation.Y + (Column * TileSize), GroundLevel);
			NewTile->SetType(CurrentTileType);
			NewTile->FinishSpawning(FTransform(InitialTileLocation));
			GridTilesMap.Emplace(NewTile, CurrentTileType);
		}
	}
}

TArray<ATile*> ARgsTileGameMode::GetGridTilesOfType(ETileType Type)
{
	TArray<ATile*> TilesOFType;
	for (const auto& Pair : GridTilesMap)
	{
		if (Pair.Value == Type)
		{
			TilesOFType.Add(Pair.Key);
		}
	}

	return TilesOFType;
}

void ARgsTileGameMode::ShuffleTiles(TArray<ETileType>& TilesArray)
{
	if (TilesArray.Num() > 0)
	{
		int32 LastIndex = TilesArray.Num() - 1;
		for (int32 i = 0; i <= LastIndex; ++i)
		{
			int32 Index = FMath::RandRange(i, LastIndex);
			if (i != Index)
			{
				TilesArray.Swap(i, Index);
			}
		}
	}
}

void ARgsTileGameMode::TileFoundTriggered(ATile* Tile)
{
	ETileType Type = Tile->GetType();
	int32 CurrentFound = TilesPerTypeFound.FindRef(Type);
	int32 TotalFound = CurrentFound + 1;
	TilesPerTypeFound.Add(Type, TotalFound);
	TilesFound.Add(Tile);

	switch (Type)
	{
	case ETileType::Green:
	case ETileType::Red:
		if (TotalFound == NumberOfTilesPerType.FindRef(Type))
		{
			GameOver();
			return;
		}
	}

}

void ARgsTileGameMode::ToggleVisibilityByType(ETileType TileType, bool bShow)
{
	TArray<ATile*> TilesOfType = GetGridTilesOfType(TileType);

	for (ATile* Tile : TilesOfType)
	{
		if (TilesFound.Contains(Tile)) continue;

		URgsTileBehaviour* Behaviour = Tile->FindBehaviourByClass(URgsTileColorBehaviour::StaticClass());
		if (!Behaviour) continue;

		bShow ? Behaviour->StepOnEffect() : Behaviour->RemoveEffect();
	}
}

APawn* ARgsTileGameMode::GetPlayerPawn()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("Player Controller not found!"));
		return nullptr;
	}

	PlayerPawn = PlayerController->GetPawn();
	if (!PlayerPawn) 
	{
		UE_LOG(LogTemp, Error, TEXT("Player Pawn not found!"));
		return nullptr;
	}

	return  PlayerPawn;
}

void ARgsTileGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!PlayerPawn) return;
	if (PlayerPawn->GetActorLocation().Z < ARgsTileGameMode::DeathHeight)
	{
		ResetGame();
	}
}