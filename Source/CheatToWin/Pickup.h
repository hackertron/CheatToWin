// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class CHEATTOWIN_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// root object
	UPROPERTY(EditAnyWhere)
		USceneComponent* pickupRoot;

	// The static mesh for Pickup
	UPROPERTY(EditAnyWhere)
	UStaticMeshComponent* Mesh;
	
	UPROPERTY(EditAnyWhere)
		UShapeComponent* PickupBox;

	UFUNCTION()
		void onPlayerEnterPickupBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
