// Fill out your copyright notice in the Description page of Project Settings.


#include "Behaviors/RgsTileColorBehaviour.h"
#include "RgsTile/Tile.h"

void URgsTileColorBehaviour::Init(ATile* InTile)
{
	Super::Init(InTile);

	MeshComponent = Tile->FindComponentByClass<UStaticMeshComponent>();
	if (!MeshComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("URgsTileColorBehaviour::Init - MeshComponent not valid"));
	}
}

void URgsTileColorBehaviour::StepOnEffect()
{
	if (!MeshComponent) return;

	MeshComponent->SetVectorParameterValueOnMaterials(FName("TileBaseColor"), FVector(TileColor));
	MeshComponent->SetScalarParameterValueOnMaterials(FName("TileEmission"), 1.0f);
}

void URgsTileColorBehaviour::StepOffEffect()
{
	if (!bTurnOfOnStepOff) return;

	RemoveEffect();
}

void URgsTileColorBehaviour::RemoveEffect()
{
	if (!MeshComponent) return;

	MeshComponent->SetVectorParameterValueOnMaterials(FName("TileBaseColor"), FVector(FColor::Silver));
	MeshComponent->SetScalarParameterValueOnMaterials(FName("TileEmission"), 0.0f);
}