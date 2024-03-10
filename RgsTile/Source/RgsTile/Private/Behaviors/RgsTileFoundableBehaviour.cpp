// Fill out your copyright notice in the Description page of Project Settings.


#include "Behaviors/RgsTileFoundableBehaviour.h"
#include "Kismet/GameplayStatics.h"
#include "RgsTile/RgsTileGameMode.h"

void URgsTileFoundableBehaviour::Init(ATile* InTile)
{
	Super::Init(InTile);

	GameMode = Cast<ARgsTileGameMode>(UGameplayStatics::GetGameMode(this));
	if (!GameMode)
	{
		UE_LOG(LogTemp, Error, TEXT("URgsTileFoundableBehaviour::Init - Game Mode not found!"));
	}
}

void URgsTileFoundableBehaviour::StepOnEffect()
{
	if (!GameMode || Found) return;

	Found = true;
	GameMode->OnTileFound.Broadcast(Tile);
}