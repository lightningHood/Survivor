// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "SurvivorButtonWidget.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVOR_API USurvivorButtonWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
		UButton* Button;

	UPROPERTY(meta = (BindWidget))
		UTextBlock* ButtonText;

	int num;
	void SetText(int value);

	void OnButtonClick();

	
};
