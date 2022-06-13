// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "TilePiece.h"
#include "GameFramework/Actor.h"
#include "PuzzleTrigger.h"
#include "TilePuzzle.generated.h"

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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* RootMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int XLength = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int YLength = 1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float TileSize = 100;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Spacing = 20;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<ATilePiece*> Grid;

	UPROPERTY(BlueprintReadOnly)
	bool bIsComplete = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsUndoable = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	class AActor* ActivationActor = nullptr;

	
};

