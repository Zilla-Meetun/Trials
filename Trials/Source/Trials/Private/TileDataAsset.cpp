// Fill out your copyright notice in the Description page of Project Settings.


#include "TileDataAsset.h"

void UTileDataAsset::OnConstruct(USceneComponent* RootComponent)
{
	AdjacentIndex.Empty();
	
	TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	TileMesh->SetupAttachment(RootComponent);

	TileCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	TileCollider->SetupAttachment(TileMesh);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Meshes/SM_Cube.SM_Cube'"));
	if(MeshAsset.Succeeded())
	{
		
		TileMesh->SetStaticMesh(MeshAsset.Object);
		TileMesh->SetRelativeScale3D(FVector(1.0f,1.0f,0.2f));
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInstance>FoundMat(TEXT("MaterialInstanceConstant'/Game/Materials/TIleMaterial_Inst.TIleMaterial_Inst'"));
	
	if(FoundMat.Succeeded())
	{
	
		DynamicMatInst = UMaterialInstanceDynamic::Create(FoundMat.Object, TileMesh);
		TileMesh->SetMaterial(0, DynamicMatInst);
	}

	TileCollider->SetRelativeScale3D(FVector(1.5f, 1.5f, 1.0f));
	TileCollider->SetRelativeLocation(FVector(0.0f, 0.0f, 22.0f));
}

void UTileDataAsset::OnTileOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}


