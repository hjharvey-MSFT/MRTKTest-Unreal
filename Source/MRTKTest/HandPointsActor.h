// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeadMountedDisplayTypes.h"
#include "HandPointsActor.generated.h"

UCLASS()
class MRTKTEST_API AHandPointsActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHandPointsActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

USTRUCT(BlueprintType)
struct FBoolandVectorPair
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool UseX = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float X = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool UseY = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Y = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool UseZ = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Z = 0.0;
};

USTRUCT(BlueprintType)
struct FHandPointPosition
{
	GENERATED_BODY()

	//~ The following member variable will be accessible by Blueprint Graphs:
	// This is the tooltip for our test variable.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Positions")
	bool IsInPosition = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand Positions")
		UMaterialInterface* ActiveMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location")
		FBoolandVectorPair LocationPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location")
		float LocationErrorTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
		FBoolandVectorPair RotationPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
		float RotatorErrorTolerance;



};
