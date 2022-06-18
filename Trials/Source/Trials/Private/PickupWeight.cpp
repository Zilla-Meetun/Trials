// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupWeight.h"

#include "Components/BoxComponent.h"

void APickupWeight::Use(FVector NewLocation)
{
	FHitResult Hit;
	this->SetActorLocationAndRotation(NewLocation, FRotator::ZeroRotator);
	ItemMesh->SetWorldLocationAndRotation(NewLocation, FRotator::ZeroRotator);

}
