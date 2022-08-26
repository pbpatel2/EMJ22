// Copyright Epic Games, Inc. All Rights Reserved.

#include "EMJ22GameMode.h"
#include "EMJ22Character.h"
#include "UObject/ConstructorHelpers.h"

AEMJ22GameMode::AEMJ22GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
