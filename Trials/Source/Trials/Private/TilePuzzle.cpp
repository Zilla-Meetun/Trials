// Fill out your copyright notice in the Description page of Project Settings.


#include "TilePuzzle.h"
#include "Components/BoxComponent.h"
#include "Zilly.h"
#include "../../../Plugins/Developer/RiderLink/Source/RD/thirdparty/clsocket/src/ActiveSocket.h"

// Sets default values
ATilePuzzle::ATilePuzzle()
{
	Grid.Empty();
	
	FTile Tile = FTile();
	Tile.TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Tile.TileMesh->SetupAttachment(RootComponent);
	UBoxComponent* Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Box->SetupAttachment(Tile.TileMesh);
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Meshes/SM_Cube.SM_Cube'"));
	if(MeshAsset.Succeeded())
	{
		Tile.TileMesh->SetStaticMesh(MeshAsset.Object);
		Tile.TileMesh->SetRelativeScale3D(FVector(1.0f,1.0f,0.2f));
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInstance>FoundMat(TEXT("MaterialInstanceConstant'/Game/Materials/TileMaterial_Inst.TileMaterial_Inst'"));
	
	if(FoundMat.Succeeded())
	{
		MatInst = FoundMat.Object;
		Tile.DynamicMatInst = UMaterialInstanceDynamic::Create(FoundMat.Object, Tile.TileMesh);
		Tile.TileMesh->SetMaterial(0, Tile.DynamicMatInst);
	}
	Box->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.0f));
	Box->SetRelativeLocation(FVector(0.0f, 0.0f, 22.0f));

	Grid.Add(Tile);
	GridCollision.Add(Box);
}

// Called when the game starts or when spawned
void ATilePuzzle::BeginPlay()
{
	Super::BeginPlay();
	for(UBoxComponent* TileCollider : GridCollision)
	{
		TileCollider->OnComponentBeginOverlap.AddDynamic(this, &ATilePuzzle::OnTileOverlap);
	}
}

void ATilePuzzle::OnTileOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("AHH"))
	if(!Cast<AZilly>(OtherActor))
		return;
	UE_LOG(LogTemp, Warning, TEXT("Collising"))
	if(UBoxComponent* Box = Cast<UBoxComponent>(OverlappedComp) )
	{
		for(int Index = 0 ; Index < GridCollision.Num(); Index++)
		{
			if (GridCollision[Index] != Box)
				continue;
			
			UE_LOG(LogTemp, Warning, TEXT("ChangingMesh"))
			Grid[Index].bIsOn = !Grid[Index].bIsOn;
			if(Grid[Index].bIsOn)
				Grid[Index].DynamicMatInst->SetVectorParameterValue(FName("Colour"), FLinearColor(0,0,0,0));
			else
				Grid[Index].DynamicMatInst->SetVectorParameterValue(FName("Colour"), FLinearColor(1,1,0,0));
			/*for(const int TileIndex : Grid[Index].AdjacentIndex)
			{
				Grid[TileIndex].bIsOn = !Grid[TileIndex].bIsOn;
				if(Grid[TileIndex].bIsOn)
					Grid[TileIndex].DynamicMatInst->SetVectorParameterValue(FName("Colour"), FLinearColor(0,0,0,0));
				else
					Grid[TileIndex].DynamicMatInst->SetVectorParameterValue(FName("Colour"), FLinearColor(1,1,0,0));
			}*/
			return;
		
		}
	}
	
}


void ATilePuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

