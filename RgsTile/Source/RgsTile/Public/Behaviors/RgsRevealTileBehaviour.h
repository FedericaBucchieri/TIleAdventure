// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Behaviors/RgsTileBehaviour.h"
#include "RgsTile/Tile.h"
#include "RgsRevealTileBehaviour.generated.h"

class ARgsTileGameMode;

/**
 * 
 */
UCLASS(Blueprintable)
class RGSTILE_API URgsRevealTileBehaviour : public URgsTileBehaviour
{
	GENERATED_BODY()
	
public:
	void Init(ATile* InTile) override;
	void StepOnEffect() override;
	void StepOffEffect() override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = Configuration)
	ETileType TypeToReveal;

	UPROPERTY()
	ARgsTileGameMode* GameMode;

	bool Found = false;
};
