// Fill out your copyright notice in the Description page of Project Settings.


#include "Behaviors/RgsRevealTileBehaviour.h"
#include "Kismet/GameplayStatics.h"
#include "RgsTile/RgsTileGameMode.h"
#include "RgsTile/Tile.h"

void URgsRevealTileBehaviour::Init(ATile* InTile)
{
	Super::Init(InTile);

	GameMode = Cast<ARgsTileGameMode>(UGameplayStatics::GetGameMode(this));
	if (!GameMode)
	{
		UE_LOG(LogTemp, Error, TEXT("URgsRevealTileBehaviour::Init - Game Mode not found!"));
	}
}

void URgsRevealTileBehaviour::StepOnEffect()
{
	if (!GameMode || Found) return;

	Found = true;
	GameMode->OnTypeVisibilityToggle.Broadcast(TypeToReveal, true);
}

void URgsRevealTileBehaviour::StepOffEffect()
{
	if (!GameMode || !Found) return;

	GameMode->OnTypeVisibilityToggle.Broadcast(TypeToReveal, false);

}
