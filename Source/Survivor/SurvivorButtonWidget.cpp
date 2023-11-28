// Fill out your copyright notice in the Description page of Project Settings.


#include "SurvivorButtonWidget.h"

void USurvivorButtonWidget::SetText(int value) {
	if (!Button || !ButtonText) return;

	num = value;
	ButtonText->SetText(FText::FromString(FString::FromInt(num)));
	Button->OnClicked.AddDynamic(this, &USurvivorButtonWidget::OnButtonClick);
}


void USurvivorButtonWidget::OnButtonClick() {
	UE_LOG(LogTemp, Warning, TEXT("Button Clicked: %d"), num);
}