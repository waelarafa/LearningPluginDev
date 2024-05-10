// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningPluginDevGameMode.h"
#include "LearningPluginDevCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearningPluginDevGameMode::ALearningPluginDevGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
