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
	
	TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = TileMesh;

	TileCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	TileCollision->SetupAttachment(TileMesh);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Meshes/SM_Cube.SM_Cube'"));
	if(MeshAsset.Succeeded())
	{
		TileMesh->SetStaticMesh(MeshAsset.Object);
		TileMesh->SetRelativeScale3D(FVector(1.0f,1.0f,0.1f));
		TileMesh->SetNotifyRigidBodyCollision(false);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInstance>FoundMat(TEXT("MaterialInstanceConstant'/Game/Materials/BasicMat_Inst.BasicMat_Inst'"));
	
	if(FoundMat.Succeeded())
	{
		MatInst = FoundMat.Object;
	}

	
	TileCollision->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.5f));
	TileCollision->SetRelativeLocation(FVector(0.0f, 0.0f, 23.0f));

	if(const ATilePuzzle* Puzzle = Cast<ATilePuzzle>(GetAttachParentActor()))
		bUndoable = Puzzle->bIsUndoable;
	
}

void ATilePiece::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	TileCollision->OnComponentBeginOverlap.AddDynamic(this, &ATilePiece::OnTileOverlap);
	
	DynamicMatInst = UMaterialInstanceDynamic::Create(MatInst, TileMesh);
	TileMesh->SetMaterial(0, DynamicMatInst);
	
	if(bIsOn)
		DynamicMatInst->SetVectorParameterValue(FName("Colour"), OnColour);
	else
		DynamicMatInst->SetVectorParameterValue(FName("Colour"), OffColour);

	
}



void ATilePiece::OnTileOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                               int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
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
		UnusedHandle, this, &ATilePiece::ResetDo, 0.75f, false);
	
	
	
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

