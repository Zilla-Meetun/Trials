// Fill out your copyright notice in the Description page of Project Settings.


#include "FenceSpline.h"
#include "Math/Vector.h"

// Sets default values
AFenceSpline::AFenceSpline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FenceSplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("Spline Component"));
	RootComponent = FenceSplineComp;
	//FenceMesh = CreateDefaultSubobject<UStaticMesh>(TEXT("Spline Mesh"));
	
	
}

// Called when the game starts or when spawned
void AFenceSpline::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFenceSpline::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if(!FenceMesh)
		return;
	
	for(int i = 0; i < static_cast<int>(FenceSplineComp->GetNumberOfSplinePoints()-1) ; i++)
	{
		USplineMeshComponent* SplineMesh = NewObject<USplineMeshComponent>(this, USplineMeshComponent::StaticClass());
		SplineMesh->SetStaticMesh(FenceMesh);
		SplineMesh->SetMobility(EComponentMobility::Movable);
		SplineMesh->SetForwardAxis(SplineAxis);
		SplineMesh->CreationMethod = EComponentCreationMethod::UserConstructionScript;
		SplineMesh->RegisterComponentWithWorld(GetWorld());
		SplineMesh->AttachToComponent(FenceSplineComp, FAttachmentTransformRules::KeepRelativeTransform);

		const FVector StartPoint = FenceSplineComp->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local);
		const FVector StartTangent = FenceSplineComp->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local);
		const FVector EndPoint = FenceSplineComp->GetLocationAtSplinePoint((i+1), ESplineCoordinateSpace::Local);
		const FVector EndTangent = FenceSplineComp->GetLocationAtSplinePoint((i+1), ESplineCoordinateSpace::Local);

		
		SplineMesh->SetStartAndEnd(StartPoint, StartTangent, EndPoint, EndTangent, true);

		SplineMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
}

// Called every frame
void AFenceSpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

