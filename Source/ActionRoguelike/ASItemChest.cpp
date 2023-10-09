// Fill out your copyright notice in the Description page of Project Settings.


#include "ASItemChest.h"

void AASItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	ISGameplayInterface::Interact_Implementation(InstigatorPawn);
	LidMesh->SetRelativeRotation(FRotator(0,TargetYaw,0));
}

// Sets default values
AASItemChest::AASItemChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BashMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BashMesh;

	LidMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LidMesh"));
	LidMesh->SetupAttachment(BashMesh);

	TargetYaw = 90;
}

// Called when the game starts or when spawned
void AASItemChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AASItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

