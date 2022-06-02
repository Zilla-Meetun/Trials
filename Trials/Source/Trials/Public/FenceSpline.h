// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "GameFramework/Actor.h"
#include "FenceSpline.generated.h"

UCLASS()
class TRIALS_API AFenceSpline : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFenceSpline();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;
	UPROPERTY(EditAnywhere)
	USplineComponent* FenceSplineComp = nullptr;

	UPROPERTY(EditAnywhere)
	UStaticMesh* FenceMesh = nullptr;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ESplineMeshAxis::Type> SplineAxis;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
