// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Behaviors/RgsTileBehaviour.h"
#include "RgsTileColorBehaviour.generated.h"

class ATile;
/**
 * 
 */
UCLASS(Blueprintable)
class RGSTILE_API URgsTileColorBehaviour : public URgsTileBehaviour
{
	GENERATED_BODY()
	
public:
	void Init(ATile* InTile) override;
	void StepOnEffect() override;
	void StepOffEffect() override;
	void RemoveEffect() override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = Configuration)
	FColor TileColor = FColor::Silver;

	UPROPERTY(EditDefaultsOnly, Category = Configuration)
	bool bTurnOfOnStepOff = false;

	UPROPERTY()
	UStaticMeshComponent* MeshComponent;
};
