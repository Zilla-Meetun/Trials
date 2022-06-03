// Fill out your copyright notice in the Description page of Project Settings.


#include "TilePuzzle.h"

#include "TilePiece.h"

#include "Zilly.h"
#include "../../../Plugins/Developer/RiderLink/Source/RD/thirdparty/clsocket/src/ActiveSocket.h"

// Sets default values
ATilePuzzle::ATilePuzzle()
{
	NewRoot = CreateDefaultSubobject<USceneComponent>(TEXT("NewRoot"));
	RootComponent = NewRoot;
}

// Called when the game starts or when spawned
void ATilePuzzle::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATilePuzzle::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	
	RegisterAllComponents();

	//Tile =  ConstructorHelpers::FObjectFinder<ATilePiece>(TEXT("")).Object;
	//ATilePiece* Piece = NewObject<UTilePiece>(this, TEXT("NewTile"));
	//Piece->RegisterComponent();
	
	//Grid.Add(Piece);
}

void ATilePuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

