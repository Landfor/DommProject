// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerChart.h"

// Sets default values
APlayerChart::APlayerChart()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerChart::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerChart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerChart::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


//	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerChart::MoveForward);
//	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerChart::GetActorRightVector);

	PlayerInputComponent->BindAxis("Turn", this, &APlayerChart::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerChart::AddControllerPitchInput);

}

