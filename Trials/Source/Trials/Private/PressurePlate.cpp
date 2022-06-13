// Fill out your copyright notice in the Description page of Project Settings.


#include "PressurePlate.h"

#include "PuzzleTrigger.h"

// Sets default values
APressurePlate::APressurePlate()
{
	PlateMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlateMesh"));
	PlateMesh->SetupAttachment(RootComponent);

	PlateCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PlateCollision"));
	PlateCollision->SetupAttachment(PlateMesh);
}

// Called when the game starts or when spawned
void APressurePlate::BeginPlay()
{
	Super::BeginPlay();
	PlateCollision->OnComponentBeginOverlap.AddDynamic(this, &APressurePlate::OnPlateOverlap);
	PlateCollision->OnComponentEndOverlap.AddDynamic(this, &APressurePlate::OnPlateEndOverlap);
}

// Called every frame
void APressurePlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void APressurePlate::CalculateMass()
{
	TotalMass = 0;
	for (const AActor* Actor : OverlappingActors)
	{
		TInlineComponentArray<UPrimitiveComponent*> PrimComps(Actor);
		for (const UPrimitiveComponent* P : PrimComps)
		{
			if(P->IsSimulatingPhysics())
			{
				TotalMass += P->GetMass();
			}
		}
	}
	if (TotalMass  >= ActivatedWeight)
	{
		TotalMass = ActivatedWeight;
		if(!bIsActive)
		{
			if(TriggerActor&&TriggerActor->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()))
				IPuzzleTrigger::Execute_Activate(TriggerActor);	
			bIsActive = true;
			ActivatePlate();
		}
	}
	else
	{
		if(bIsActive)
		{
			if(TriggerActor&&TriggerActor->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()))
				IPuzzleTrigger::Execute_Deactivate(TriggerActor);
			DeactivatePlate();
			bIsActive= false;
		}
		
	}
	NewOffset = (TotalMass/ActivatedWeight);
	
}


void APressurePlate::OnPlateOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	OverlappingActors.Add(OtherActor);
	CalculateMass();
	LowerPlate();

	
}

void APressurePlate::OnPlateEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	OverlappingActors.Remove(OtherActor);
	CalculateMass();
	RaisePlate();
}

void APressurePlate::PlateUpdate(float Value)
{
	
}

void APressurePlate::PlateFinish(float Value)
{
}





