// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TilePiece.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
UCLASS(BlueprintType, PerObjectConfig, Blueprintable)
class TRIALS_API ATilePiece : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATilePiece();


public:	
	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void RegisterAllComponents() override;
	UFUNCTION(meta = (AllowPrivateAccess = "true"))
	void OnTileOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void SetBaseProperties();
	
	UFUNCTION()
	void FlipTile();

	UPROPERTY()
	UStaticMesh* SMCube = nullptr;

	UPROPERTY(BlueprintReadOnly , Category="Root")
	class USceneComponent* NewRoot;
	
	UPROPERTY(VisibleAnywhere, Category="Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TileMesh = nullptr;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	UBoxComponent* TileCollision = nullptr;

	UPROPERTY(BlueprintReadOnly, Category="TileMaterial", meta = (AllowPrivateAccess = "true"))
	UMaterialInstance* MatInst = nullptr;
	
	UPROPERTY(BlueprintReadOnly, Category="TileMaterial", meta = (AllowPrivateAccess = "true"))
	UMaterialInstanceDynamic* DynamicMatInst = nullptr;
	
	UPROPERTY(EditAnywhere, Category="State", meta = (AllowPrivateAccess = "true"))
	bool bIsOn = false;

	UPROPERTY(BlueprintReadOnly, Category="Debug", meta = (AllowPrivateAccess = "true"))
	bool bFinished = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="State")
	bool bOverrideParent = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="State", meta = (EditCondition = bOverrideParent))
	bool bUndoable;

	UPROPERTY(EditAnywhere, Category="State", meta = (EditCondition = bOverrideParent))
	FLinearColor OnColour = FLinearColor(0, 0.6923f, 0.7718f, 1);

	UPROPERTY(EditAnywhere, Category="State", meta = (EditCondition = bOverrideParent))
	FLinearColor OffColour = FLinearColor(1, 0.672f, 0.292f, 1);
	
	UPROPERTY(EditAnywhere, Category="Debug", meta = (AllowPrivateAccess = "true"))
	TArray<ATilePiece*> AdjacentTiles;

private:
	UPROPERTY()
	bool DoneOnce = false;

	UFUNCTION()
	void ResetDo();
};
