// Fill out your copyright notice in the Description page of Project Settings.


#include "ARPawn.h"

//#include "Runtime/AugmentedReality/Public/ARSupportInterface.h"
//#include "Runtime/Core/Public/Features/IModularFeatures.h"

//#include "AugmentedReality/Public/ARSystem.h"

#include "AugmentedReality/Public/ARBlueprintLibrary.h"

// Sets default values
AARPawn::AARPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AARPawn::BeginPlay()
{
	Super::BeginPlay();
	// Next step is to look why this isnt processing- maybe something to do with builds. Idk.... 
	//auto isIt = IModularFeatures::IsModularFeatureAvailable(FARSupportInterface::GetModularFeatureName());
	//UARSessionConfig sConfig;
	UARBlueprintLibrary::StartARSession();
	
}

// Called every frame
void AARPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AARPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AARPawn::NotifyActorOnInputTouchBegin(const ETouchIndex::Type FingerIndex)
{
	FHitResult hitResult;
	
	//GetWorld()->LineTraceSingleByObjectType(hitResult, )
}
