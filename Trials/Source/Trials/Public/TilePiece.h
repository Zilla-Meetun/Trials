// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TilePiece.generated.h"

UCLASS()
class TRIALS_API UTilePiece : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UTilePiece();

protected:


public:	
	
	UFUNCTION()
	void OnTileOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* TileMesh = nullptr;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* TileCollision = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="TileMaterial", meta = (AllowPrivateAccess = "true"))
	UMaterialInstanceDynamic* DynamicMatInst = nullptr;

	UPROPERTY(EditAnywhere)
	bool bIsOn = false;

	UPROPERTY(EditAnywhere)
	TArray<int> AdjacentIndex;
};
