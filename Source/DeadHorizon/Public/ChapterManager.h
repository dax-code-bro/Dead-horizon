#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChapterManager.generated.h"

USTRUCT(BlueprintType)
struct FChapterInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chapter")
	int32 ChapterNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chapter")
	FString ChapterTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chapter")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chapter")
	TSoftObjectPtr<UWorld> ChapterMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chapter")
	bool bIsUnlocked;
};

/**
 * Manages chapter progression and level loading for the episodic structure.
 * Place one instance in your persistent level.
 */
UCLASS()
class DEADHORIZON_API AChapterManager : public AActor
{
	GENERATED_BODY()

public:
	AChapterManager();

	/** List of all available chapters */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Chapters")
	TArray<FChapterInfo> Chapters;

	/** Start playing a chapter by number */
	UFUNCTION(BlueprintCallable, Category = "Chapters")
	void StartChapter(int32 ChapterNumber);

	/** Check if a chapter is unlocked */
	UFUNCTION(BlueprintCallable, Category = "Chapters")
	bool IsChapterUnlocked(int32 ChapterNumber) const;

	/** Unlock the next chapter (call when current chapter is completed) */
	UFUNCTION(BlueprintCallable, Category = "Chapters")
	void UnlockNextChapter();

	/** Get info about a specific chapter */
	UFUNCTION(BlueprintCallable, Category = "Chapters")
	FChapterInfo GetChapterInfo(int32 ChapterNumber) const;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Chapters")
	int32 ActiveChapter;
};
