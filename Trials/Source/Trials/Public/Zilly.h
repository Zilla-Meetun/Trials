// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/BoxComponent.h"
#include "Zilly.generated.h"

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
protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	void Sprint();
	
	UFUNCTION()
	void StopSprint();
	

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void TurnAtRate(float Rate);

	UFUNCTION()
	void LookUpRate(float Rate);

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
