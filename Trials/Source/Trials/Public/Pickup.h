// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interact.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"


UCLASS()
class TRIALS_API APickup : public AActor, public IInteract
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SceneComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* ItemMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UBoxComponent* ItemCollision = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UTexture* Icon;
	
	UPROPERTY(EditAnywhere)
	FString Name;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
	virtual void Pickup() override;

	virtual void Use(FVector NewLocation) override;


	UFUNCTION()
	void OnBeginItemOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndItemOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
