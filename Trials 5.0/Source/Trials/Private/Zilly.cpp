// Fill out your copyright notice in the Description page of Project Settings.


#include "Zilly.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AZilly::AZilly()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	//Set Turn Rates
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;

	//Create default objects and set up attachments
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	InteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("Interaction"));
	InteractionZone->SetupAttachment(RootComponent);

	//Loads First Punch Montage
	static ConstructorHelpers::FObjectFinder<UAnimMontage> MeleeFirstAttackMontageObj(TEXT("AnimMontage'/Game/Animations/TUTORIAL_RESOURCES/Animations/MeleeFistAttack.MeleeFistAttack'"));
	if (MeleeFirstAttackMontageObj.Succeeded())
		MeleeFistAttackMontage = MeleeFirstAttackMontageObj.Object;

	LeftFistCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftCollision"));
	LeftFistCollider->SetupAttachment(RootComponent);
	RightFistCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("RightCollision"));
	RightFistCollider->SetupAttachment(RootComponent);
	LeftFistCollider->SetBoxExtent(FVector(12.0f,10.0f,10.0f));
	RightFistCollider->SetBoxExtent(FVector(12.0f,10.0f,10.0f));
	LeftFistCollider->SetCollisionProfileName(FName("NoCollision"));
	RightFistCollider->SetCollisionProfileName(FName("NoCollision"));
	LeftFistCollider->SetNotifyRigidBodyCollision(false);
	RightFistCollider->SetNotifyRigidBodyCollision(false);
}


void AZilly::BeginPlay()
{
	Super::BeginPlay();

	const FAttachmentTransformRules HandAttachmentRule(EAttachmentRule::SnapToTarget,EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);

	LeftFistCollider->AttachToComponent(GetMesh(), HandAttachmentRule, FName("LFist"));
	RightFistCollider->AttachToComponent(GetMesh(), HandAttachmentRule, FName("RFist"));
	
	
	LeftFistCollider->OnComponentHit.AddDynamic(this, &AZilly::OnAttackHit);
	RightFistCollider->OnComponentHit.AddDynamic(this, &AZilly::OnAttackHit);

	
	SetItemUI[0] = &AZilly::SetItem1UI;	
	SetItemUI[1] = &AZilly::SetItem2UI;
	SetItemUI[2] = &AZilly::SetItem3UI;
	SetItemUI[3] = &AZilly::SetItem4UI;
	SetItemUI[4] = &AZilly::SetItem5UI;
	SetItemUI[5] = &AZilly::SetItem6UI;
	SetItemUI[6] = &AZilly::SetItem7UI;
	SetItemUI[7] = &AZilly::SetItem8UI;
	SetItemUI[8] = &AZilly::SetItem9UI;
	SetItemUI[9] = &AZilly::SetItem10UI;
	
}
void AZilly::UseItem()
{
	if(!Inventory.Contains(ItemIndex))
		return;
	APickup* It = Inventory[ItemIndex];
	Inventory.Remove(ItemIndex);
	(this->*(SetItemUI[ItemIndex]))(nullptr);
	
	It->Use(InteractionZone->GetComponentLocation()+FVector::ForwardVector*20);
	
}

void AZilly::AddToInventory()
{
	if(!NearestItem)
		return;
	const UTexture* Tex = NearestItem->Icon;
	int I = 0;
	while(Inventory.Contains(I) && I < 10)
		I++;
	if(I>=10)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Too many Items"))
		this->UseItem();
		Inventory.Add(ItemIndex, NearestItem);
		(this->*(SetItemUI[ItemIndex]))(Tex);
	}
	else
	{
		Inventory.Add(I, NearestItem);
		NearestItem->Pickup(I);
		(this->*(SetItemUI[I]))(Tex);
	}
	NearestItem = nullptr;
}

void AZilly::SetNearestItem(APickup* Item, const bool bAdd)
{
	if((!bAdd && NearestItem != Item) ||(bAdd && NearestItem == Item))
		return;
	
	if(bAdd && NearestItem !=Item)
		NearestItem = Item;
	else
	{
		NearestItem = nullptr;
	}
	
}


void AZilly::AttackStart()
{
	LeftFistCollider->SetCollisionProfileName(FName("Weapon"));
	RightFistCollider->SetCollisionProfileName(FName("Weapon"));
	LeftFistCollider->SetNotifyRigidBodyCollision(true);
	RightFistCollider->SetNotifyRigidBodyCollision(true);
	
}

void AZilly::AttackEnd()
{
	LeftFistCollider->SetCollisionProfileName(FName("NoCollision"));
	RightFistCollider->SetCollisionProfileName(FName("NoCollision"));
	LeftFistCollider->SetNotifyRigidBodyCollision(false);
	RightFistCollider->SetNotifyRigidBodyCollision(false);
}

void AZilly::AttackInput()
{
	const FString MontageSelection = "Start_" +FString::FromInt(rand()%3+1);

	PlayAnimMontage(MeleeFistAttackMontage, 1.0f, FName(*MontageSelection));
}



void AZilly::ChangeItem(float Value)
{
	if(Value == 0)
		return;
	ItemIndex = static_cast<int>(Value)-1;
	UpdateHighlightUI();
}

void AZilly::OnAttackHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                         FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("HITTING! %s"), *Hit.GetActor()->GetName())
	if(HitComp->IsSimulatingPhysics())
		HitComp->AddImpulse(NormalImpulse);
}

void AZilly::MoveForward(float Value)
{
	if(!Controller || Value==0)
		return;
	const FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void AZilly::Sprint()
{
	this->GetCharacterMovement()->MaxWalkSpeed = 1700;
}

void AZilly::StopSprint()
{
	this->GetCharacterMovement()->MaxWalkSpeed = 1000;
}

void AZilly::StartCrouch()
{
	Crouch();
}

void AZilly::EndCrouch()
{
	UnCrouch();
}

void AZilly::MoveRight(float Value)
{
	if(!Controller || Value==0)
		return;
	const FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void AZilly::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate*BaseTurnRate* GetWorld()->GetDeltaSeconds());
}

void AZilly::LookUpRate(float Rate)
{
	AddControllerPitchInput(Rate*BaseLookUpRate*GetWorld()->GetDeltaSeconds());
}

// Called every frame
void AZilly::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AZilly::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &AZilly::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AZilly::MoveRight);
	
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	
	PlayerInputComponent->BindAxis("TurnRate", this, &AZilly::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AZilly::LookUpRate);

	PlayerInputComponent->BindAxis("ChangeItem", this, &AZilly::ChangeItem);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AZilly::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AZilly::StopSprint);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AZilly::AttackInput);
	//PlayerInputComponent->BindAction("Attack", IE_Released, this, &AZilly::AttackEnd);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AZilly::StartCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AZilly::EndCrouch);

	PlayerInputComponent->BindAction("UseItem", IE_Pressed, this, &AZilly::UseItem);
	PlayerInputComponent->BindAction("Pickup", IE_Pressed, this, &AZilly::AddToInventory);
	
}

