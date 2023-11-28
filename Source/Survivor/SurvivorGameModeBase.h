// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "SurvivorUserWidget.h"
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
		TSubclassOf<USurvivorUserWidget> StartingWidgetClass;

	UPROPERTY()
		USurvivorUserWidget* CurrentWidget;

	UFUNCTION(BlueprintCallable, Category = "UMG UI")
	void ChangeMenuWidget(TSubclassOf<USurvivorUserWidget> NewWidgetClass);
};
