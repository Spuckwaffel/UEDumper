
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: EnergyRuntime
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint
/// Size: 0x02D0 (0x000120 - 0x0003F0)
class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FGameplayTagContainer)                     TacticalSprintFail                                          OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFailLowEnergy                                 OFFSET(getStruct<T>, {0x148, 32, 0, 0})
	SMember(FScalableFloat)                            MinEnergyToActivate                                         OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            MinEnergyToActivateCreative                                 OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FGameplayTag)                              GCEnergyDrain                                               OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	SMember(FGameplayTag)                              GCSpeedLines                                                OFFSET(getStruct<T>, {0x1BC, 4, 0, 0})
	SMember(FGameplayTag)                              GCCameraShake                                               OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
	SMember(FGameplayTag)                              GCSprintEnd                                                 OFFSET(getStruct<T>, {0x1C4, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedMultiplier                                          OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            AccelerationMultiplier                                      OFFSET(getStruct<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            RampUpSpeed                                                 OFFSET(getStruct<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            RampDownSpeed                                               OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            JumpHeightMultiplier                                        OFFSET(getStruct<T>, {0x268, 40, 0, 0})
	SMember(FGameplayTag)                              TutorialGameplayTag                                         OFFSET(getStruct<T>, {0x294, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialAdditionalSourceTag                                 OFFSET(getStruct<T>, {0x298, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialTargetTag                                           OFFSET(getStruct<T>, {0x2B8, 32, 0, 0})
	CMember(class USoundBase*)                         OnEnergyFullyDrainedSound                                   OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FGameplayTag)                              TacticalBehaviorTag                                         OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bIsCancelledBySliding                                       OFFSET(get<bool>, {0x2E4, 1, 1, 0})
	DMember(bool)                                      bShouldHolsterWeapon                                        OFFSET(get<bool>, {0x2E4, 1, 1, 1})
	SMember(FGameplayTag)                              TagPreventWeaponHolster                                     OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	DMember(float)                                     MinSpeedForHolster                                          OFFSET(get<float>, {0x2EC, 4, 0, 0})
	DMember(float)                                     HolsterTimeAttemptDelay                                     OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(char)                                      MaxTryHolsterAttempt                                        OFFSET(get<char>, {0x2F4, 1, 0, 0})
	CMember(class UClass*)                             EnergyComponentClass                                        OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnStart                                        OFFSET(getStruct<T>, {0x310, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostPerSecond                                      OFFSET(getStruct<T>, {0x338, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnJump                                         OFFSET(getStruct<T>, {0x360, 40, 0, 0})
	SMember(FGameplayTag)                              IgnoreJumpCostTag                                           OFFSET(getStruct<T>, {0x388, 4, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           OFFSET(getStruct<T>, {0x38C, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyUseIdentifier                                         OFFSET(getStruct<T>, {0x390, 4, 0, 0})
	CMember(class USoundMix*)                          SprintStartedSoundMix                                       OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class USoundBase*)                         SprintStartedSound2D                                        OFFSET(get<T>, {0x3A0, 8, 0, 0})
	SMember(FScalableFloat)                            HF_TacSprintEnabled                                         OFFSET(getStruct<T>, {0x3B0, 40, 0, 0})
	CMember(class UClass*)                             CameraMode                                                  OFFSET(get<T>, {0x3E0, 8, 0, 0})
	SMember(FGameplayTag)                              CameraModeTag                                               OFFSET(getStruct<T>, {0x3E8, 4, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
	// void HandleOnReloadCanceling();                                                                                          // [0xb5808f8] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPlayerWeaponChanged
	// void HandleOnPlayerWeaponChanged(class AFortPawn* InPawn, class AFortWeapon* InNewWeapon, class AFortWeapon* InPlayerWeapon); // [0xb580810] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
	// void HandleOnPawnJump();                                                                                                 // [0xb5807f8] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
	// void HandleOnEnteredEditMode();                                                                                          // [0xb5807e0] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
	// void HandleOnEnterAircraft();                                                                                            // [0xb5807c8] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
	// void HandleOnEnergyDrained(class UFortComponent_Energy* EnergyComp);                                                     // [0xb58074c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
	// void HandleMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xb580668] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
	// void HandleFailedToSprint();                                                                                             // [0xb580654] Final|Native|Public  
};

/// Class /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
/// Size: 0x0158 (0x0000A0 - 0x0001F8)
class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FMulticastInlineDelegate)                  OnFailedToSprint                                            OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(class UClass*)                             MovementModeExtension                                       OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    CurrentBoundPlayerPawn                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bTacticalSprintEnabled                                      OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bWantsToTacticalSprint                                      OFFSET(get<bool>, {0xD8, 1, 1, 1})
	DMember(bool)                                      bHandlingMoveForward                                        OFFSET(get<bool>, {0xD8, 1, 1, 2})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0xD8, 1, 1, 3})
	DMember(bool)                                      bWasInBuildMode                                             OFFSET(get<bool>, {0xD8, 1, 1, 4})
	DMember(bool)                                      bFireAnalyticsEventOnEndPlay                                OFFSET(get<bool>, {0xD8, 1, 1, 5})
	SMember(FGameplayTag)                              TacticalSprintAbilityGameplayTag                            OFFSET(getStruct<T>, {0xDC, 4, 0, 0})
	SMember(FGameplayTag)                              DisableTacticalSprintAbilityGameplayTag                     OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintEnabled                                       OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintToggleGracePeriod                             OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintStarted                                     OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintEnded                                       OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	DMember(bool)                                      bUseMovementModeExtension                                   OFFSET(get<bool>, {0x158, 1, 0, 0})
	SMember(FTimerHandle)                              StopWantingToSprintTimerReceipt                             OFFSET(getStruct<T>, {0x168, 8, 0, 0})
	CMember(class UInputComponent*)                    InputComponent                                              OFFSET(get<T>, {0x1D8, 8, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
	// void SetIsSprinting(bool bNewIsSprinting);                                                                               // [0xb5814e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RemoveCustomSprintMMEClass
	// void RemoveCustomSprintMMEClass(class UClass*& SprintMMEClassToRemove);                                                  // [0xb581444] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate();                                                                                   // [0xb581430] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
	// void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PreviousWeapon);                                  // [0xb58136c] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                       // [0xb581274] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
	// void OnPawnChanged(class AFortPawn* InPawn);                                                                             // [0xb5811d8] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0xb5811c4] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xb5810c8] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
	// void OnAutoRunChanged(bool bAutoRunIsOn);                                                                                // [0xb581048] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
	// void LogAndVisualLog(class UObject* LoggingSource, ESprintLoggingVerbosityLevel Verbosity, FString& LogString);          // [0xb580910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.AddCustomSprintMMEClass
	// void AddCustomSprintMMEClass(class UClass*& SprintMMEClassToAdd);                                                        // [0xb580590] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
/// Size: 0x0030 (0x000018 - 0x000048)
class FFortMovementMode_TacSprintRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Enum /Script/TacticalSprintRuntime.ESprintLoggingVerbosityLevel
/// Size: 0x06
enum class ESprintLoggingVerbosityLevel : uint8_t
{
	ESprintLoggingVerbosityLevel__Error                                              = 0,
	ESprintLoggingVerbosityLevel__Warning                                            = 1,
	ESprintLoggingVerbosityLevel__Display                                            = 2,
	ESprintLoggingVerbosityLevel__Log                                                = 3,
	ESprintLoggingVerbosityLevel__Verbose                                            = 4,
	ESprintLoggingVerbosityLevel__VeryVerbose                                        = 5
};

