// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RgsTileBehaviour.generated.h"

class ATile;

/**
 * 
 */
UCLASS()
class RGSTILE_API URgsTileBehaviour : public UObject
{
	GENERATED_BODY()

public: 
	//Method to be called to initialize a tile behaviour
	virtual void Init(ATile* InTile);

	// Method to be called to apply the step on effect of the behaviour
	virtual void StepOnEffect() {};
	
	// Method to be called to apply the step off effect of the behaviour
	virtual void StepOffEffect() {};

	//Method to be called to remove the effect if applied
	virtual void RemoveEffect() {};

protected: 
	UPROPERTY()
	ATile* Tile;
};
