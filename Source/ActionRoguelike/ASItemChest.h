// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SGameplayInterface.h"
#include "GameFramework/Actor.h"
#include "ASItemChest.generated.h"

UCLASS()
class ACTIONROGUELIKE_API AASItemChest : public AActor, public ISGameplayInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	float TargetYaw;

	virtual void Interact_Implementation(APawn* InstigatorPawn) override;
	
public:	
	// Sets default values for this actor's properties
	AASItemChest();

protected:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BashMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LidMesh;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
