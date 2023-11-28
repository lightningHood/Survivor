// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivorUserWidget.h"

 
void USurvivorUserWidget::NativeConstruct() 
{
	SetHealthBar(1.0);
	SetScore(0);

	if (ButtonWidgetRef) 
	{
		for (int i = 0; i < 4; i++) 
		{
			UUserWidget* widget = CreateWidget(this, ButtonWidgetRef);
			ButtonContainer->AddChildToVerticalBox(widget);
			USurvivorButtonWidget* button = Cast<USurvivorButtonWidget>(widget);
			button->SetText(i);
		}
	}
}



void USurvivorUserWidget::SetHealthBar(float percentage) 
{
	if (!HealthBar) return; //Same thing as if(HealBar = nullptr)

	HealthBar->SetPercent(percentage);

}


void USurvivorUserWidget::SetScore(float scoreAmount)
{
	if (!ScoreText) return;

	UIScore += scoreAmount;
	ScoreText->SetText(FText::FromString("Score: " + FString::FromInt(UIScore)));
}