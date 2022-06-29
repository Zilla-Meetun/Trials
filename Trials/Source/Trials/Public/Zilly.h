// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "GameFramework/Character.h"
#include "Components/BoxComponent.h"
#include "Zilly.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSetImageOne);

UENUM(BlueprintType)
enum class EAttackType : uint8
{
	MELEE_FIST	UMETA(DisplayName = "Melee - Fist")
};

UCLASS()
class TRIALS_API AZilly : public ACharacter
{
	GENERATED_BODY()

	
public:
	// Sets default values for this character's properties
	AZilly();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta=(AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta=(AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* MeleeFistAttackMontage;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* InteractionZone = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* LeftFistCollider = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* RightFistCollider = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseLookUpRate;

	UPROPERTY()
	APickup* NearestItem;
	
	UPROPERTY(BlueprintReadWrite,meta = (ClampMax = "9"))
	int ItemIndex = 0;
	
	UPROPERTY(BlueprintReadWrite, meta = (ArrayClamp = "10"))
	TMap<int, APickup*> Inventory;

	
	typedef void (AZilly::*FSetItemUI)(const UTexture* Image);
	FSetItemUI SetItemUI[10];

	UFUNCTION()
	void UseItem();

	
	UFUNCTION(BlueprintImplementableEvent)
	void SetItem1UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem2UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem3UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem4UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem5UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem6UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem7UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem8UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem9UI(const UTexture* Image);

	UFUNCTION(BlueprintImplementableEvent)
	void SetItem10UI(const UTexture* Image);
	
protected:

	virtual void BeginPlay() override;

public:

	UFUNCTION()
	void AddToInventory();
	

	UFUNCTION(BlueprintCallable)
	void ChangeItem(const float Key);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateHighlightUI();

	UFUNCTION()
	void SetNearestItem(APickup* Item, const bool bAdd);
	
	UFUNCTION()
	void Sprint();
	
	UFUNCTION()
	void StopSprint();

	UFUNCTION()
	void AttackStart();

	UFUNCTION()
	void AttackEnd();

	UFUNCTION()
	void AttackInput();
	
	UFUNCTION()
	void OnAttackHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void StartCrouch();

	UFUNCTION()
	void EndCrouch();

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void TurnAtRate(float Rate);

	UFUNCTION()
	void LookUpRate(float Rate);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};


