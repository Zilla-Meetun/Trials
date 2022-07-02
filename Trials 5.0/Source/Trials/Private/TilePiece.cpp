// Fill out your copyright notice in the Description page of Project Settings.


#include "TilePiece.h"

#include "TilePuzzle.h"
#include "Zilly.h"
#include "Components/BoxComponent.h"

// Sets default values
ATilePiece::ATilePiece()
{
	bIsOn = false;
	bFinished=false;

	NewRoot = CreateDefaultSubobject<USceneComponent>(TEXT("NewRoot"));
	SetRootComponent(NewRoot);

	TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	TileMesh->SetupAttachment(NewRoot);
	
	TileCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	TileCollision->SetupAttachment(TileMesh);

	static ConstructorHelpers::FObjectFinder<UMaterialInstance>FoundMat(TEXT("MaterialInstanceConstant'/Game/Materials/BasicMat_Inst.BasicMat_Inst'"));
	
	if(FoundMat.Succeeded())
	{
		MatInst = FoundMat.Object;
	}
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Meshes/SM_Cube.SM_Cube'"));
	if(MeshAsset.Succeeded())
	{
		SMCube = MeshAsset.Object;
		TileMesh->SetStaticMesh(SMCube);
		TileMesh->SetRelativeScale3D(FVector(1.0f,1.0f,0.1f));
		TileMesh->SetNotifyRigidBodyCollision(false);
	}
	
	TileCollision->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	TileCollision->SetRelativeLocation(FVector(0.0f, 0.0f, 24.0f));
	
}

void ATilePiece::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//sets up collision
	TileCollision->OnComponentBeginOverlap.AddDynamic(this, &ATilePiece::OnTileOverlap);

	// makes and sets dynamic material
	this->DynamicMatInst = UMaterialInstanceDynamic::Create(MatInst, TileMesh);
	this->TileMesh->SetMaterial(0, DynamicMatInst);

	//Sets the tiles initial colour 
	if(bIsOn)
		this->DynamicMatInst->SetVectorParameterValue(FName("Colour"), OnColour);
	else
		this->DynamicMatInst->SetVectorParameterValue(FName("Colour"), OffColour);
	
	SetBaseProperties();
	
}

void ATilePiece::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATilePiece::RegisterAllComponents()
{
	Super::RegisterAllComponents();
	NewRoot->RegisterComponentWithWorld(GetWorld());
	TileMesh->RegisterComponentWithWorld(GetWorld());
	TileCollision->RegisterComponentWithWorld(GetWorld());
}


void ATilePiece::OnTileOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                               int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp,Warning,TEXT("Working"))
	if((bFinished&& !bUndoable )|| !Cast<AZilly>(OtherActor) || DoneOnce)
		return;
	DoneOnce = true;
	FlipTile();
	for(ATilePiece* Tile : AdjacentTiles)
		Tile->FlipTile();

	if(ATilePuzzle* Puzzle = Cast<ATilePuzzle>(GetAttachParentActor()))
		Puzzle->CheckPuzzleState();
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(
		UnusedHandle, this, &ATilePiece::ResetDo, 1.2f, false);
	
}

void ATilePiece::SetBaseProperties()
{
	// Sets the tile to be undoable if the puzzle can be undone
	if(const ATilePuzzle* Puzzle = Cast<ATilePuzzle>(GetAttachParentActor()))
		if(!bOverrideParent)
		{
			bUndoable = Puzzle->bIsUndoable;
			OnColour = Puzzle->DefaultOnColour;
			OffColour = Puzzle->DefaultOffColour;
		}
}

void ATilePiece::FlipTile()
{
	bIsOn = !bIsOn;
	if(bIsOn)
		DynamicMatInst->SetVectorParameterValue(FName("Colour"), OnColour);
	else
		DynamicMatInst->SetVectorParameterValue(FName("Colour"), OffColour);
}

void ATilePiece::ResetDo()
{
	DoneOnce = false;
}

