// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TilePiece.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "TilePuzzle.generated.h"

UCLASS()
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
	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	USceneComponent* NewRoot;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int XLength = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int YLength = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Spacing = 120;

	UPROPERTY()
	ATilePiece* Tile;
	UPROPERTY(VisibleAnywhere)
	TArray<ATilePiece*> Grid;
};
