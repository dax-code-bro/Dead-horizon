#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DeadHorizonCharacter.generated.h"

UCLASS(config=Game)
class DEADHORIZON_API ADeadHorizonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ADeadHorizonCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	virtual void Tick(float DeltaTime) override;

	// Movement
	void MoveForward(float Value);
	void MoveRight(float Value);

	// Actions
	UFUNCTION(BlueprintCallable, Category = "Actions")
	void StartSprint();

	UFUNCTION(BlueprintCallable, Category = "Actions")
	void StopSprint();

	UFUNCTION(BlueprintCallable, Category = "Actions")
	void ToggleFlashlight();

	UFUNCTION(BlueprintCallable, Category = "Actions")
	void Interact();

	// Health
	UFUNCTION(BlueprintCallable, Category = "Stats")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void TakeDamage(float DamageAmount);

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Flashlight", meta = (AllowPrivateAccess = "true"))
	class USpotLightComponent* Flashlight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (AllowPrivateAccess = "true"))
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (AllowPrivateAccess = "true"))
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float SprintSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float WalkSpeed;

	bool bIsFlashlightOn;
	bool bIsSprinting;
};
