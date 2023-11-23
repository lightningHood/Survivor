// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "SurvivorGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVOR_API ASurvivorGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void StartPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG UI")
		TSubclassOf<UUserWidget> StartingWidgetClass;

	UPROPERTY()
		UUserWidget* CurrentWidget;

	UFUNCTION(BlueprintCallable, Category = "UMG UI")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
};
