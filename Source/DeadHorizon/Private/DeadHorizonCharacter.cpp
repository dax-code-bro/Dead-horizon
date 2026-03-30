#include "DeadHorizonCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"

ADeadHorizonCharacter::ADeadHorizonCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// Capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	// First-person camera
	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCamera->SetupAttachment(GetCapsuleComponent());
	FirstPersonCamera->SetRelativeLocation(FVector(0.f, 0.f, 64.f));
	FirstPersonCamera->bUsePawnControlRotation = true;

	// Flashlight
	Flashlight = CreateDefaultSubobject<USpotLightComponent>(TEXT("Flashlight"));
	Flashlight->SetupAttachment(FirstPersonCamera);
	Flashlight->SetIntensity(5000.f);
	Flashlight->SetAttenuationRadius(2000.f);
	Flashlight->SetOuterConeAngle(35.f);
	Flashlight->SetInnerConeAngle(25.f);
	Flashlight->SetVisibility(false);

	// Defaults
	Health = 100.f;
	MaxHealth = 100.f;
	WalkSpeed = 300.f;
	SprintSpeed = 600.f;
	bIsFlashlightOn = false;
	bIsSprinting = false;

	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void ADeadHorizonCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ADeadHorizonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADeadHorizonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &ADeadHorizonCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADeadHorizonCharacter::MoveRight);

	// Look
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	// Actions
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ADeadHorizonCharacter::StartSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ADeadHorizonCharacter::StopSprint);
	PlayerInputComponent->BindAction("Flashlight", IE_Pressed, this, &ADeadHorizonCharacter::ToggleFlashlight);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ADeadHorizonCharacter::Interact);
}

void ADeadHorizonCharacter::MoveForward(float Value)
{
	if (Value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ADeadHorizonCharacter::MoveRight(float Value)
{
	if (Value != 0.f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void ADeadHorizonCharacter::StartSprint()
{
	bIsSprinting = true;
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}

void ADeadHorizonCharacter::StopSprint()
{
	bIsSprinting = false;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void ADeadHorizonCharacter::ToggleFlashlight()
{
	bIsFlashlightOn = !bIsFlashlightOn;
	Flashlight->SetVisibility(bIsFlashlightOn);
}

void ADeadHorizonCharacter::Interact()
{
	// Trace forward from camera to detect interactable objects
	FHitResult HitResult;
	FVector Start = FirstPersonCamera->GetComponentLocation();
	FVector End = Start + (FirstPersonCamera->GetForwardVector() * 300.f);

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params))
	{
		AActor* HitActor = HitResult.GetActor();
		if (HitActor)
		{
			// Interaction handled by the hit actor's interface or Blueprint
		}
	}
}

float ADeadHorizonCharacter::GetHealth() const
{
	return Health;
}

void ADeadHorizonCharacter::TakeDamage(float DamageAmount)
{
	Health = FMath::Clamp(Health - DamageAmount, 0.f, MaxHealth);

	if (Health <= 0.f)
	{
		// Player death — handle in Blueprint
	}
}
