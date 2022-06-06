// Fill out your copyright notice in the Description page of Project Settings.


#include "TilePuzzle.h"

#include "SSCSEditor.h"
#include "TilePiece.h"

#include "Zilly.h"
#include "../../../Plugins/Developer/RiderLink/Source/RD/thirdparty/clsocket/src/ActiveSocket.h"
#include "Evaluation/PreAnimatedState/MovieScenePreAnimatedCaptureSources.h"

// Sets default values
ATilePuzzle::ATilePuzzle()
{
	RootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NewRoot"));
	RootComponent = RootMesh;

	
}

// Called when the game starts or when spawned
void ATilePuzzle::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATilePuzzle::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	Grid.Empty();
	
	ATilePiece* Piece =  NewObject<ATilePiece>(ATilePiece::StaticClass(),TEXT("Tile"));

	
	
	Piece->RegisterAllComponents();
	for ( UActorComponent* const Comp :Piece->GetComponents())
	{
		Comp->AddToRoot();
		
	}
	
	Grid.Add(Piece);
	
}

void ATilePuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

