// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Behaviors/RgsTileBehaviour.h"
#include "RgsTileFoundableBehaviour.generated.h"

class ARgsTileGameMode;

/**
 * 
 */
UCLASS(Blueprintable)
class RGSTILE_API URgsTileFoundableBehaviour : public URgsTileBehaviour
{
	GENERATED_BODY()
	
public:
	void Init(ATile* InTile) override;
	void StepOnEffect() override;

protected:
	UPROPERTY()
	ARgsTileGameMode* GameMode;

	bool Found = false;
};
