// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "TilePuzzle.generated.h"

USTRUCT(BlueprintType)
struct FTile
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* TileMesh = nullptr;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* TileCollision = nullptr;

	UPROPERTY(VisibleAnywhere)
	TArray<int> AdjacentIndex;

	UPROPERTY(EditAnywhere)
	bool bIsOn = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="TileMaterial", meta = (AllowPrivateAccess = "true"))
    UMaterialInstanceDynamic* DynamicMatInst = nullptr;
};

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

	UFUNCTION()
	void OnTileOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int XLength = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int YLength = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Spacing = 120;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FTile> Grid;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<class UBoxComponent*> GridCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* MatInst = nullptr;
};
