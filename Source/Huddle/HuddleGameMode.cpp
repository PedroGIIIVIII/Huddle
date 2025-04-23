// Copyright Epic Games, Inc. All Rights Reserved.

#include "HuddleGameMode.h"
#include "HuddleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHuddleGameMode::AHuddleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_FirstPersonCharacter2"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
