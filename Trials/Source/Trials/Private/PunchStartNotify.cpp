// Fill out your copyright notice in the Description page of Project Settings.


#include "PunchStartNotify.h"
#include "Zilly.h"


void UPunchStartNotify::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if(!MeshComp && !MeshComp->GetOwner())
		return;
	
	AZilly* Player = Cast<AZilly>(MeshComp->GetOwner());
	
	if(!Player)
		return;
	Player->AttackStart();
}

void UPunchStartNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if(!MeshComp && !MeshComp->GetOwner())
		return;
	
	AZilly* Player = Cast<AZilly>(MeshComp->GetOwner());
	
	if(!Player)
		return;
	Player->AttackEnd();
}

