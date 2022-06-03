// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "PressurePlate.generated.h"

UCLASS()
class TRIALS_API APressurePlate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APressurePlate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* PlateMesh =nullptr;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* PlateCollision = nullptr;

	UPROPERTY()
	float Weight; 
	
	UPROPERTY(EditInstanceOnly)
	AActor* DoorTrigger = nullptr;

	UFUNCTION()
	void OnPlateOverlap();
	
	UFUNCTION(BlueprintImplementableEvent)
	void LowerPlate();

	UFUNCTION(BlueprintImplementableEvent)
	void OpenDoor();
};
