// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TilePiece.h"
#include "GameFramework/Actor.h"
#include "PuzzleTrigger.h"
#include "TilePuzzle.generated.h"

UENUM()
enum EPuzzleSetUp
{
	NoSetup UMETA(DisplayName = "Tiles have no links"),
	Adjacent UMETA(DisplayName = "Tiles linked to adjacent tiles not diagonly"),
	AllAdjacent UMETA(DIsplayName = "Tiles linked to adjacent and diagonaly tiles")
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
	virtual void PostEditUndo() override;

public:	

	UFUNCTION()
	void CheckPuzzleState();
	
	UPROPERTY(BlueprintReadWrite, Category="Root")
	class USceneComponent* RootMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="State")
	int XLength = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="State")
	int YLength = 1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="State")
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

	UPROPERTY(BlueprintReadOnly, EditAnywhere,Category="Activation")
	TArray<class AActor*> ActivationActors;

	
};

