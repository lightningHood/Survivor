// Copyright Epic Games, Inc. All Rights Reserved.


#include "SurvivorGameModeBase.h"


void ASurvivorGameModeBase::StartPlay()
{
    Super::StartPlay();
    ChangeMenuWidget(StartingWidgetClass);
    check(GEngine != nullptr);

    // Display a debug message for five seconds. 
    // The -1 "Key" value argument prevents the message from being updated or refreshed.
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameModeBase!"));
}


void ASurvivorGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass) 
{
    //Check if there a UI On Screen
    // If there is remove it
    if (CurrentWidget != nullptr) 
    {
        CurrentWidget->RemoveFromViewport();
        CurrentWidget = nullptr;
    }

    //Create a new UI
    //Add to viewport
    if (NewWidgetClass != nullptr) 
    {
        CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
        CurrentWidget->AddToViewport();
    }
}

