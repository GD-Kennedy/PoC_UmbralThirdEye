// Copyright Epic Games, Inc. All Rights Reserved.

#include "AltDimensionProtoGameMode.h"
#include "AltDimensionProtoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAltDimensionProtoGameMode::AAltDimensionProtoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
