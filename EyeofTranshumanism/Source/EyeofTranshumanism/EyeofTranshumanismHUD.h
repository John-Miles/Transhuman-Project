// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EyeofTranshumanismHUD.generated.h"

UCLASS()
class AEyeofTranshumanismHUD : public AHUD
{
	GENERATED_BODY()

public:
	AEyeofTranshumanismHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

