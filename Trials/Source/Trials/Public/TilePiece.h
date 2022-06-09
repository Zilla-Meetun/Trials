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


public:	
	virtual void PostInitializeComponents() override;
	
	UFUNCTION(meta = (AllowPrivateAccess = "true"))
	void OnTileOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void FlipTile();
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* TileMesh = nullptr;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* TileCollision = nullptr;

	UPROPERTY(BlueprintReadOnly, Category="TileMaterial", meta = (AllowPrivateAccess = "true"))
	UMaterialInstance* MatInst = nullptr;
	
	UPROPERTY(BlueprintReadOnly, Category="TileMaterial", meta = (AllowPrivateAccess = "true"))
	UMaterialInstanceDynamic* DynamicMatInst = nullptr;

	UPROPERTY(EditAnywhere)
	FLinearColor OnColour = FLinearColor(0, 0.6923f, 0.7718f, 1);

	UPROPERTY(EditAnywhere)
	FLinearColor OffColour = FLinearColor(1, 0.205f, 0.102f, 1);
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	bool bIsOn = false;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bFinished = false;
	
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TArray<ATilePiece*> AdjacentTiles;

private:
	UPROPERTY()
	bool DoneOnce = false;

	UFUNCTION()
	void ResetDo();
};
