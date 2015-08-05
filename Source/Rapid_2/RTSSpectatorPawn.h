// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/SpectatorPawn.h"
#include "RTSSpectatorPawn.generated.h"

/**
 * 
 */
UCLASS()
class RAPID_2_API ARTSSpectatorPawn : public ASpectatorPawn 
{
	GENERATED_BODY()
	
public:
	// Camera Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	TSubobjectPtr<class UCameraComponent> CameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	float CameraZAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	float CameraRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	float CameraHeightAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	float CameraZoomSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	float CameraRadiusMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	float CameraRadiusMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	float CameraMovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	float CameraScrollBoundary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Cateogry = Camera)
	bool bCanMoveCamera;
private:
public:
	UFUNCTION()
	void ZoomIn();

	UFUNCTION()
	void ZoomOut();

	UFUNCTION()
	FRotator GetIso
};
