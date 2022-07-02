// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "PickupWeight.generated.h"

/**
 * 
 */
UCLASS()
class TRIALS_API APickupWeight : public APickup
{
	GENERATED_BODY()

	virtual void Use(FVector NewLocation) override;
};
