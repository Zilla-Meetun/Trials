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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActivatedWeight = 50;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly)
	float TotalMass = 0;

	UPROPERTY(BlueprintReadOnly)
	TArray<AActor*> OverlappingActors;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxZOffset = 5;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float CurrentOffset = 0;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float NewOffset = 0;
	
	UPROPERTY(EditInstanceOnly)
	AActor* TriggerActor = nullptr;

	UPROPERTY(BlueprintReadWrite)
	bool bIsActive = false;
	
	UFUNCTION()
	void CalculateMass();

	UFUNCTION()
	void OnPlateOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnPlateEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UFUNCTION(BlueprintImplementableEvent)
	void RaisePlate();

	UFUNCTION(BlueprintImplementableEvent)
	void LowerPlate();
	
	UFUNCTION(BlueprintImplementableEvent)
	void ActivatePlate();

	UFUNCTION(BlueprintImplementableEvent)
	void DeactivatePlate();
};
