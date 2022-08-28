// Fill out your copyright notice in the Description page of Project Settings.


#include "EMJ22Ring.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"


// Sets default values
AEMJ22Ring::AEMJ22Ring()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	for (int i = 0; i < SocketCount; i++) 
	{
		UArrowComponent* tempArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow" + i));
		tempArrow->SetupAttachment(StaticMesh);
	}
}

// Called when the game starts or when spawned
void AEMJ22Ring::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEMJ22Ring::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

