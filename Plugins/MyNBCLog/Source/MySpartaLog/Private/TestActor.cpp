#include "TestActor.h"
#include "Engine/Engine.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("MySpartaLog TestActor BeginPlay"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("MySpartaLog works!"));
	}
}