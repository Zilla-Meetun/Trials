// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TilePiece.h"
#include "GameFramework/Actor.h"
#include "TilePuzzle.generated.h"

UENUM()
enum EPuzzleSetUp
{
	NoSetup UMETA(DisplayName = "Tiles have no links"),
	Adjacent UMETA(DisplayName = "Tiles linked to adjacent tiles not diagonly"),
	AllAdjacent UMETA(DIsplayName = "Tiles linked to adjacent and diagonal tiles")
};

UCLASS(Blueprintable, BlueprintType)
class TRIALS_API ATilePuzzle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATilePuzzle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;
	
	virtual void Destroyed() override;

	
public:	

	UFUNCTION()
	void CheckPuzzleState();
	
	UPROPERTY(BlueprintReadWrite, Category="Root")
	class USceneComponent* RootComp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="State")
	FIntVector Dimensions = FIntVector(2,2,0);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="State")
	float TileSize = 100;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="State")
	float Spacing = 20;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Grid", meta = (AllowPrivateAccess = "true"))
	TArray<class ATilePiece*> Grid;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="State")
	TEnumAsByte<EPuzzleSetUp> TileLinks;
	
	UPROPERTY(BlueprintReadOnly, Category="State")
	bool bIsComplete = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="State")
	bool bIsUndoable = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="State")
	FLinearColor DefaultOnColour = FLinearColor(0, 0.6923f, 0.7718f, 1);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="State")
	FLinearColor DefaultOffColour = FLinearColor(1, 0.672f, 0.292f, 1);
	
	UPROPERTY(BlueprintReadOnly, EditInstanceOnly ,Category="State | Activation")
	TArray<class AActor*> ActivationActors;
	
};

