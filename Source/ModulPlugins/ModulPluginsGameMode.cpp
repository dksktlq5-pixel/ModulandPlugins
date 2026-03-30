// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModulPluginsGameMode.h"
#include "ModulPluginsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AModulPluginsGameMode::AModulPluginsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
