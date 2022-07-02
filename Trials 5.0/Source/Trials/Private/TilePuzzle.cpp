// Fill out your copyright notice in the Description page of Project Settings.


#include "TilePuzzle.h"
#include "TilePiece.h"
#include "PuzzleTrigger.h"
#include "SSCSEditor.h"

#include "Zilly.h"
#include "../../../Plugins/Developer/RiderLink/Source/RD/thirdparty/clsocket/src/ActiveSocket.h"
#include "Evaluation/PreAnimatedState/MovieScenePreAnimatedCaptureSources.h"

// Sets default values
ATilePuzzle::ATilePuzzle()
{
	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("NewRoot"));
	RootComponent = RootComp;
}

// Called when the game starts or when spawned
void ATilePuzzle::BeginPlay()
{
	Super::BeginPlay();	for(int i = 0 ; i <Grid.Num(); i++)
	{
		Grid[i]->RegisterAllComponents();
		Grid[i]->PostInitializeComponents();

		switch (TileLinks)
		{
			case NoSetup:
				continue;
			case AllAdjacent:
				if(Grid.IsValidIndex(i-1-Dimensions.Y) && i%(Dimensions.Y) != 0)
					Grid[i]->AdjacentTiles.Add(Grid[i-1-(Dimensions.Y)]);
				if(Grid.IsValidIndex(i+1-Dimensions.Y) && i%(Dimensions.Y) != (Dimensions.Y)-1)
					Grid[i]->AdjacentTiles.Add(Grid[i+1-(Dimensions.Y)]);
				if(Grid.IsValidIndex(i-1+(Dimensions.Y))&& i%(Dimensions.Y) != 0)
					Grid[i]->AdjacentTiles.Add(Grid[i-1+(Dimensions.Y)]);
				if(Grid.IsValidIndex(i+1+(Dimensions.Y)) && i%(Dimensions.Y) != (Dimensions.Y)-1)
					Grid[i]->AdjacentTiles.Add(Grid[i+1+(Dimensions.Y)]);
			case Adjacent:
				if(Grid.IsValidIndex(i-1) && i%(Dimensions.Y) != 0)
					Grid[i]->AdjacentTiles.Add(Grid[i-1]);
				if(Grid.IsValidIndex(i+1) && i%(Dimensions.Y) != (Dimensions.Y)-1)
					Grid[i]->AdjacentTiles.Add(Grid[i+1]);
				if(Grid.IsValidIndex(i-(Dimensions.Y)))
					Grid[i]->AdjacentTiles.Add(Grid[i-(Dimensions.Y)]);
				if(Grid.IsValidIndex(i+(Dimensions.Y)))
					Grid[i]->AdjacentTiles.Add(Grid[i+(Dimensions.Y)]);
			default:
				UE_LOG(LogTemp, Warning, TEXT("Added Tile Links"))
		}
	}
}


void ATilePuzzle::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
	for(ATilePiece* Tile : Grid)
	{
		if(!Tile)
			continue;
		TSet<UActorComponent*> Comps = Tile->GetComponents();
		for(TSet<UActorComponent*>::TIterator It = Comps.CreateIterator(); It ; ++It)
			(*It)->DestroyComponent();
		Tile->UnregisterAllComponents();
		Tile->RemoveFromRoot();
	}
	Grid.Empty();
	RegisterAllComponents();
	
	for(int x = 0 ; x < (Dimensions.X) ; x++)
		for(int y = 0 ; y < (Dimensions.Y) ; y++)
			{
				//FString Name =  BaseName + FString::FromInt(y+(x*Dimensions.Y));
				ATilePiece* Piece =  NewObject<ATilePiece>(this,ATilePiece::StaticClass());//, *Name);
				
				Piece->RegisterAllComponents();
				Piece->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform, NAME_None);
				Piece->SetActorLocationAndRotation(this->GetActorLocation()+FVector((x * (TileSize * GetActorScale().X +
				Spacing)) ,(y * (TileSize * GetActorScale().Y +Spacing)), 0.0f), this->GetActorRotation());
				Piece->SetActorScale3D(GetActorScale());
				Piece->NewRoot->AttachToComponent(RootComp, FAttachmentTransformRules::KeepWorldTransform);
				Piece->TileMesh->SetRelativeScale3D(FVector(1.0f, 1.0f, 0.1f));
				Piece->TileMesh->AttachToComponent(Piece->NewRoot, FAttachmentTransformRules::KeepWorldTransform);
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
		TSet<UActorComponent*> Comps = Tile->GetComponents();
		for(TSet<UActorComponent*>::TIterator It = Comps.CreateIterator(); It ; ++It)
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
		for(AActor* ActivationActor: ActivationActors)
			if(ActivationActor && ActivationActor->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()))
				IPuzzleTrigger::Execute_Deactivate(ActivationActor);
		bIsComplete = false;
		return;
	}
	bIsComplete = true;
	for(const ATilePiece* Tile : Grid)
	{
		
		if(Tile->bIsOn != Tile->bDesiredState)
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
	for(AActor* ActivationActor: ActivationActors)
		if(ActivationActor && ActivationActor->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()))
			IPuzzleTrigger::Execute_Activate(ActivationActor);
	else
		UE_LOG(LogTemp, Warning, TEXT("Trigger Actor doesn't have puzzle interface"))
}

