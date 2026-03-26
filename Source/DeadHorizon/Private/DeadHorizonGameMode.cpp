#include "DeadHorizonGameMode.h"
#include "DeadHorizonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeadHorizonGameMode::ADeadHorizonGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(
		TEXT("/Game/Blueprints/BP_DeadHorizonCharacter"));

	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	CurrentChapter = 1;
}

int32 ADeadHorizonGameMode::GetCurrentChapter() const
{
	return CurrentChapter;
}

void ADeadHorizonGameMode::LoadChapter(int32 ChapterNumber)
{
	if (ChapterNumber < 1)
	{
		return;
	}

	CurrentChapter = ChapterNumber;
	OnChapterLoaded(ChapterNumber);
}

void ADeadHorizonGameMode::OnChapterLoaded_Implementation(int32 ChapterNumber)
{
	// Default implementation — override in Blueprint for chapter-specific logic
}
