#include "ChapterManager.h"
#include "Kismet/GameplayStatics.h"

AChapterManager::AChapterManager()
{
	PrimaryActorTick.bCanEverTick = false;
	ActiveChapter = 0;

	// Chapter 1 is unlocked by default
	FChapterInfo Chapter1;
	Chapter1.ChapterNumber = 1;
	Chapter1.ChapterTitle = TEXT("Chapter 1: The Awakening");
	Chapter1.Description = TEXT("You wake up in an abandoned facility. Something is very wrong.");
	Chapter1.bIsUnlocked = true;
	Chapters.Add(Chapter1);
}

void AChapterManager::StartChapter(int32 ChapterNumber)
{
	if (!IsChapterUnlocked(ChapterNumber))
	{
		return;
	}

	for (const FChapterInfo& Chapter : Chapters)
	{
		if (Chapter.ChapterNumber == ChapterNumber && !Chapter.ChapterMap.IsNull())
		{
			ActiveChapter = ChapterNumber;
			UGameplayStatics::OpenLevelBySoftObjectPtr(this, Chapter.ChapterMap);
			return;
		}
	}
}

bool AChapterManager::IsChapterUnlocked(int32 ChapterNumber) const
{
	for (const FChapterInfo& Chapter : Chapters)
	{
		if (Chapter.ChapterNumber == ChapterNumber)
		{
			return Chapter.bIsUnlocked;
		}
	}
	return false;
}

void AChapterManager::UnlockNextChapter()
{
	int32 NextChapter = ActiveChapter + 1;
	for (FChapterInfo& Chapter : Chapters)
	{
		if (Chapter.ChapterNumber == NextChapter)
		{
			Chapter.bIsUnlocked = true;
			return;
		}
	}
}

FChapterInfo AChapterManager::GetChapterInfo(int32 ChapterNumber) const
{
	for (const FChapterInfo& Chapter : Chapters)
	{
		if (Chapter.ChapterNumber == ChapterNumber)
		{
			return Chapter;
		}
	}
	return FChapterInfo();
}
