
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Enum /Script/TacticalSprintRuntime.ESprintLoggingVerbosityLevel
/// Size: 0x07
enum class ESprintLoggingVerbosityLevel : uint8_t
{
	ESprintLoggingVerbosityLevel__Error                                              = 0,
	ESprintLoggingVerbosityLevel__Warning                                            = 1,
	ESprintLoggingVerbosityLevel__Display                                            = 2,
	ESprintLoggingVerbosityLevel__Log                                                = 3,
	ESprintLoggingVerbosityLevel__Verbose                                            = 4,
	ESprintLoggingVerbosityLevel__VeryVerbose                                        = 5,
	ESprintLoggingVerbosityLevel__ESprintLoggingVerbosityLevel_MAX                   = 6
};

/// Class /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint
/// Size: 0x02A8 (0x000120 - 0x0003C8)
class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0120   (0x0008)  MISSED
	FGameplayTagContainer                              TacticalSprintFail;                                         // 0x0128   (0x0020)  
	FGameplayTagContainer                              TacticalSprintFailLowEnergy;                                // 0x0148   (0x0020)  
	float                                              MinEnergyToActivate;                                        // 0x0168   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	FScalableFloat                                     MinEnergyToActivateRow;                                     // 0x0170   (0x0028)  
	FGameplayTag                                       GCEnergyDrain;                                              // 0x0198   (0x0004)  
	FGameplayTag                                       GCSpeedLines;                                               // 0x019C   (0x0004)  
	FGameplayTag                                       GCCameraShake;                                              // 0x01A0   (0x0004)  
	FGameplayTag                                       GCSprintEnd;                                                // 0x01A4   (0x0004)  
	FScalableFloat                                     MaxSpeedMultiplier;                                         // 0x01A8   (0x0028)  
	FScalableFloat                                     AccelerationMultiplier;                                     // 0x01D0   (0x0028)  
	FScalableFloat                                     RampUpSpeed;                                                // 0x01F8   (0x0028)  
	FScalableFloat                                     RampDownSpeed;                                              // 0x0220   (0x0028)  
	FScalableFloat                                     JumpHeightMultiplier;                                       // 0x0248   (0x0028)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0270   (0x0004)  MISSED
	FGameplayTag                                       TutorialGameplayTag;                                        // 0x0274   (0x0004)  
	FGameplayTagContainer                              TutorialAdditionalSourceTag;                                // 0x0278   (0x0020)  
	FGameplayTagContainer                              TutorialTargetTag;                                          // 0x0298   (0x0020)  
	FGameplayTag                                       TagPreventWeaponHolster;                                    // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x02BC   (0x0004)  MISSED
	class USoundBase*                                  OnEnergyFullyDrainedSound;                                  // 0x02C0   (0x0008)  
	FGameplayTag                                       TacticalBehaviorTag;                                        // 0x02C8   (0x0004)  
	float                                              MinSpeedForHolster;                                         // 0x02CC   (0x0004)  
	float                                              HolsterTimeAttemptDelay;                                    // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData04_5[0xC];                                       // 0x02D4   (0x000C)  MISSED
	unsigned char                                      UnknownBit05 : 1;                                           // 0x02E0:0 (0x0001)  MISSED
	bool                                               bIsCancelledBySliding : 1;                                  // 0x02E0:1 (0x0001)  
	bool                                               bShouldHolsterWeapon : 1;                                   // 0x02E0:2 (0x0001)  
	unsigned char                                      UnknownData06_4[0x7];                                       // 0x02E1   (0x0007)  MISSED
	FScalableFloat                                     HF_EnergyCostOnStart;                                       // 0x02E8   (0x0028)  
	FScalableFloat                                     HF_EnergyCostPerSecond;                                     // 0x0310   (0x0028)  
	FScalableFloat                                     HF_EnergyCostOnJump;                                        // 0x0338   (0x0028)  
	FGameplayTag                                       IgnoreJumpCostTag;                                          // 0x0360   (0x0004)  
	FGameplayTag                                       TacticalSprintTag;                                          // 0x0364   (0x0004)  
	FGameplayTag                                       EnergyUseIdentifier;                                        // 0x0368   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x036C   (0x0004)  MISSED
	class USoundMix*                                   SprintStartedSoundMix;                                      // 0x0370   (0x0008)  
	class USoundBase*                                  SprintStartedSound2D;                                       // 0x0378   (0x0008)  
	unsigned char                                      UnknownData08_5[0x8];                                       // 0x0380   (0x0008)  MISSED
	FScalableFloat                                     HF_TacSprintEnabled;                                        // 0x0388   (0x0028)  
	unsigned char                                      UnknownData09_5[0x8];                                       // 0x03B0   (0x0008)  MISSED
	class UClass*                                      CameraMode;                                                 // 0x03B8   (0x0008)  
	FGameplayTag                                       CameraModeTag;                                              // 0x03C0   (0x0004)  
	char                                               MaxTryHolsterAttempt;                                       // 0x03C4   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x03C5   (0x0003)  MISSED


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
	// void HandleOnReloadCanceling();                                                                                       // [0xa32395c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPlayerWeaponChanged
	// void HandleOnPlayerWeaponChanged(class AFortPawn* InPawn, class AFortWeapon* InNewWeapon, class AFortWeapon* InPlayerWeapon); // [0xa323874] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
	// void HandleOnPawnJump();                                                                                              // [0xa32385c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
	// void HandleOnEnteredEditMode();                                                                                       // [0xa323844] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
	// void HandleOnEnterAircraft();                                                                                         // [0xa32382c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
	// void HandleOnEnergyDrained(class UFortComponent_Energy* EnergyComp);                                                  // [0xa3237b0] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
	// void HandleMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xa3236cc] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
	// void HandleFailedToSprint();                                                                                          // [0xa3236b8] Final|Native|Public  
};

/// Class /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
/// Size: 0x0158 (0x0000A0 - 0x0001F8)
class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	SDK_UNDEFINED(16,11864) /* FMulticastInlineDelegate */ __um(OnFailedToSprint);                                 // 0x00B8   (0x0010)  
	class UClass*                                      MovementModeExtension;                                      // 0x00C8   (0x0008)  
	class AFortPlayerPawn*                             CurrentBoundPlayerPawn;                                     // 0x00D0   (0x0008)  
	bool                                               bTacticalSprintEnabled : 1;                                 // 0x00D8:0 (0x0001)  
	bool                                               bWantsToTacticalSprint : 1;                                 // 0x00D8:1 (0x0001)  
	bool                                               bHandlingMoveForward : 1;                                   // 0x00D8:2 (0x0001)  
	bool                                               bIsSprinting : 1;                                           // 0x00D8:3 (0x0001)  
	bool                                               bWasInBuildMode : 1;                                        // 0x00D8:4 (0x0001)  
	bool                                               bFireAnalyticsEventOnEndPlay : 1;                           // 0x00D8:5 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FGameplayTag                                       TacticalSprintAbilityGameplayTag;                           // 0x00DC   (0x0004)  
	FGameplayTag                                       DisableTacticalSprintAbilityGameplayTag;                    // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FScalableFloat                                     TacticalSprintEnabled;                                      // 0x00E8   (0x0028)  
	FScalableFloat                                     TacticalSprintToggleGracePeriod;                            // 0x0110   (0x0028)  
	SDK_UNDEFINED(16,11865) /* FMulticastInlineDelegate */ __um(OnTacticalSprintStarted);                          // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,11866) /* FMulticastInlineDelegate */ __um(OnTacticalSprintEnded);                            // 0x0148   (0x0010)  
	bool                                               bUseMovementModeExtension;                                  // 0x0158   (0x0001)  
	unsigned char                                      UnknownData03_5[0xF];                                       // 0x0159   (0x000F)  MISSED
	FTimerHandle                                       StopWantingToSprintTimerReceipt;                            // 0x0168   (0x0008)  
	unsigned char                                      UnknownData04_5[0x68];                                      // 0x0170   (0x0068)  MISSED
	class UInputComponent*                             InputComponent;                                             // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x01E0   (0x0018)  MISSED


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
	// void SetIsSprinting(bool bNewIsSprinting);                                                                            // [0xa323fcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RemoveCustomSprintMMEClass
	// void RemoveCustomSprintMMEClass(class UClass*& SprintMMEClassToRemove);                                               // [0xa323f2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate();                                                                                // [0xa323f18] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
	// void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PreviousWeapon);                               // [0xa323e54] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                    // [0xa323d5c] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
	// void OnPawnChanged(class AFortPawn* InPawn);                                                                          // [0xa323cc8] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                              // [0xa323cb4] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xa323bb8] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
	// void OnAutoRunChanged(bool bAutoRunIsOn);                                                                             // [0xa323b38] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
	// void LogAndVisualLog(class UObject* LoggingSource, ESprintLoggingVerbosityLevel Verbosity, FString& LogString);       // [0xa323974] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.AddCustomSprintMMEClass
	// void AddCustomSprintMMEClass(class UClass*& SprintMMEClassToAdd);                                                     // [0xa3235f4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
/// Size: 0x0030 (0x000010 - 0x000040)
struct FFortMovementMode_TacSprintRuntimeData : FFortMovementMode_BaseExtRuntimeData
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0010   (0x0030)  MISSED
};

