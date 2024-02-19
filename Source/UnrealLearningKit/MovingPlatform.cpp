// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartVector = GetActorLocation();
	FString Name = GetName();
	//UE_LOG(LogTemp, Display, TEXT("My Name: %s"), *Name);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	
	
	if (ShouldPlatformReturn()) {
		FVector MoveDirection = VelocityVector.GetSafeNormal();
		StartVector = StartVector + MoveDirection * BorderFloat;
		SetActorLocation(StartVector);
		VelocityVector = -VelocityVector;
	}
	else {
		FVector location = GetActorLocation();
		location = location + (VelocityVector * DeltaTime);
		SetActorLocation(location);
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

bool AMovingPlatform::ShouldPlatformReturn() const
{
	return GetDistanceMoved() > BorderFloat;
}

float AMovingPlatform::GetDistanceMoved() const
{
	return FVector::Dist(StartVector, GetActorLocation());
}

