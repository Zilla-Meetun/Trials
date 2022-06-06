// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/DataAsset.h"
#include "TileDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class TRIALS_API UTileDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Tile")
	UStaticMeshComponent* TileMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UBoxComponent* TileCollider;

	UPROPERTY(BlueprintReadOnly, Category="TileMaterial")
	UMaterialInstanceDynamic* DynamicMatInst = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsOn = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int> AdjacentIndex;
	
	UFUNCTION()
	void OnConstruct(USceneComponent* RootComponent);

	UFUNCTION()
	void  OnTileOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
