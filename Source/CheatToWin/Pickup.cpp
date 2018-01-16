// Fill out your copyright notice in the Description page of Project Settings.

#include "CheatToWin.h"
#include "Pickup.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pickupRoot = CreateDefaultSubobject<USceneComponent>(TEXT("pickupRoot"));
	RootComponent = pickupRoot;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachToComponent(pickupRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	PickupBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PickupBox"));
	PickupBox->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	PickupBox->bGenerateOverlapEvents = true;
	PickupBox->OnComponentBeginOverlap.AddDynamic(this, &APickup::onPlayerEnterPickupBox);
	PickupBox->AttachToComponent(pickupRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void APickup::onPlayerEnterPickupBox(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	Destroy();
	UE_LOG(LogTemp, Warning, TEXT("Your message"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));



}