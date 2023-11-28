// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "SurvivorButtonWidget.h"
#include "SurvivorUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVOR_API USurvivorUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;


	UPROPERTY(meta = (BingWidget))
		UVerticalBox* ButtonContainer;

	UPROPERTY(meta = (BingWidget))
		UProgressBar* HealthBar;

	UPROPERTY(meta = (BingWidget))
		UTextBlock* ScoreText;


	UPROPERTY(EditAnywhere)
		TSubclassOf<class USurvivorButtonWidget> ButtonWidgetRef;
		

	UFUNCTION()
		void SetHealthBar(float percentage);

	UFUNCTION()
		void SetScore(float scoreAmount);

private:
	int UIScore = 0;
	
};
