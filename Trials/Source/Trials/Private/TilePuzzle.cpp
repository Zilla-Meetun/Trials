// Fill out your copyright notice in the Description page of Project Settings.


#include "TilePuzzle.h"

#include <string>

#include "PuzzleTrigger.h"
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
	for(int i = 0 ; i <Grid.Num(); i++)
	{
		Grid[i]->RegisterAllComponents();
		Grid[i]->PostInitializeComponents();
		
		
		if(Grid.IsValidIndex(i-1) && i%XLength != 0)
			Grid[i]->AdjacentTiles.Add(Grid[i-1]);
		if(Grid.IsValidIndex(i+1) && i%XLength != XLength-1)
			Grid[i]->AdjacentTiles.Add(Grid[i+1]);
		if(Grid.IsValidIndex(i-XLength))
			Grid[i]->AdjacentTiles.Add(Grid[i-XLength]);
		if(Grid.IsValidIndex(i+XLength))
			Grid[i]->AdjacentTiles.Add(Grid[i+XLength]);
	}
}

void ATilePuzzle::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	
	for(ATilePiece* Tile : Grid)
	{
		if(!Tile)
			continue;
		auto Comps = Tile->GetComponents();
		for(auto It = Comps.CreateIterator(); It ; ++It)
			(*It)->DestroyComponent();
		Tile->UnregisterAllComponents();
		Tile->RemoveFromRoot();
	}
	
	Grid.Empty();
	
	RegisterAllComponents();
	
	for(int x = 0 ; x < XLength ; x++)
		for(int y = 0 ; y < YLength ; y++)
		{
			ATilePiece* Piece =  NewObject<ATilePiece>(this,ATilePiece::StaticClass());
			Piece->RegisterAllComponents();
			Piece->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform, NAME_None);
			
			
			Piece->SetActorLocationAndRotation(this->GetActorLocation()+FVector((x * (TileSize * GetActorScale().X +
			Spacing)) ,(y * (TileSize * GetActorScale().Y +Spacing)),0.0f), this->GetActorRotation());
			Piece->SetActorScale3D(this->GetActorScale());
			
			Piece->TileMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.1f));
			
			Piece->TileMesh->AttachToComponent(RootMesh, FAttachmentTransformRules::KeepWorldTransform);
			Piece->TileCollision->AttachToComponent(Piece->TileMesh, FAttachmentTransformRules::KeepWorldTransform);
			Grid.Add(Piece);
			
		}
}

void ATilePuzzle::Destroyed()
{
	Super::Destroyed();
	for(ATilePiece* Tile : Grid)
	{
		if(!Tile)
			continue;
		auto Comps = Tile->GetComponents();
		for(auto It = Comps.CreateIterator(); It ; ++It)
			(*It)->DestroyComponent();
		Tile->UnregisterAllComponents();
		Tile->RemoveFromRoot();
	}
	
	Grid.Empty();
}

void ATilePuzzle::CheckPuzzleState()
{
	if(bIsUndoable&&bIsComplete)
	{
		for(ATilePiece* Tile : Grid)
		{
			Tile->bFinished = false;
		}
		if(ActivationActor && ActivationActor->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()))
			IPuzzleTrigger::Execute_Deactivate(ActivationActor);
		bIsComplete = false;
		return;
	}
	bIsComplete = true;
	for(const ATilePiece* Tile : Grid)
	{
		if(!Tile->bIsOn)
		{
			bIsComplete = false;
			return;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Complete"))

	for(ATilePiece* Tile : Grid)
	{
		Tile->bFinished = true;
	}
	if(ActivationActor && ActivationActor->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()))
		IPuzzleTrigger::Execute_Activate(ActivationActor);
	else
		UE_LOG(LogTemp, Warning, TEXT("Trigger Actor doesn't have puzzle interface"))

	
}

