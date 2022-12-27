// Copyright Epic Games, Inc. All Rights Reserved.

#include "mpgGameMode.h"
#include "mpgCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmpgGameMode::AmpgGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
