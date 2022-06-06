// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TilePiece.generated.h"

UCLASS(BlueprintType, PerObjectConfig, Blueprintable)
class TRIALS_API ATilePiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATilePiece();

	virtual void BeginPlay() override;
protected:


public:	
	
	UFUNCTION()
	void OnTileOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* TileMesh = nullptr;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* TileCollision = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="TileMaterial")
	UMaterialInstanceDynamic* DynamicMatInst = nullptr;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	bool bIsOn = false;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TArray<int> AdjacentIndex;
};
