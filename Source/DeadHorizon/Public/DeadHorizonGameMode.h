#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DeadHorizonGameMode.generated.h"

UCLASS(minimalapi)
class ADeadHorizonGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADeadHorizonGameMode();

	/** Get the current chapter number */
	UFUNCTION(BlueprintCallable, Category = "Chapter")
	int32 GetCurrentChapter() const;

	/** Load a specific chapter by number */
	UFUNCTION(BlueprintCallable, Category = "Chapter")
	void LoadChapter(int32 ChapterNumber);

protected:
	/** Called when a chapter finishes loading — override for chapter-specific setup */
	UFUNCTION(BlueprintNativeEvent, Category = "Chapter")
	void OnChapterLoaded(int32 ChapterNumber);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Chapter")
	int32 CurrentChapter;
};
