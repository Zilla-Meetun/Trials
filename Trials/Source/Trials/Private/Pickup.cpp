// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"

#include "Zilly.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(SceneComponent);
	
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->SetupAttachment(RootComponent);

	ItemCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ItemCollision"));
	ItemCollision->SetupAttachment(ItemMesh);
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	ItemCollision->OnComponentBeginOverlap.AddDynamic(this, &APickup::OnBeginItemOverlap);
	ItemCollision->OnComponentEndOverlap.AddDynamic(this, &APickup::APickup::OnEndItemOverlap);
}

void APickup::Pickup()
{
	IInteract::Pickup();
	SetActorLocation(FVector(2870,-307,1881));
	ItemMesh->SetWorldLocation(FVector(2870,-307,1881));
	
}

void APickup::Use(FVector NewLocation)
{
	IInteract::Use(NewLocation);
}
void APickup::OnBeginItemOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(!OtherActor || OtherActor ==this)
		return;
	if(AZilly* Player = Cast<AZilly>(OtherActor))
	{
		Player->SetNearestItem(this);
	}
}

void APickup::OnEndItemOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	if(!OtherActor || OtherActor == this)
		return;
	
	if(AZilly* Player = Cast<AZilly>(OtherActor))
	{
		Player->SetNearestItem(this);
	}
}


