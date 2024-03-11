
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint
/// Size: 0x02A8 (0x000120 - 0x0003C8)
class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FGameplayTagContainer)                     TacticalSprintFail                                          OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFailLowEnergy                                 OFFSET(getStruct<T>, {0x148, 32, 0, 0})
	DMember(float)                                     MinEnergyToActivate                                         OFFSET(get<float>, {0x168, 4, 0, 0})
	SMember(FScalableFloat)                            MinEnergyToActivateRow                                      OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FGameplayTag)                              GCEnergyDrain                                               OFFSET(getStruct<T>, {0x198, 4, 0, 0})
	SMember(FGameplayTag)                              GCSpeedLines                                                OFFSET(getStruct<T>, {0x19C, 4, 0, 0})
	SMember(FGameplayTag)                              GCCameraShake                                               OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FGameplayTag)                              GCSprintEnd                                                 OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedMultiplier                                          OFFSET(getStruct<T>, {0x1A8, 40, 0, 0})
	SMember(FScalableFloat)                            AccelerationMultiplier                                      OFFSET(getStruct<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            RampUpSpeed                                                 OFFSET(getStruct<T>, {0x1F8, 40, 0, 0})
	SMember(FScalableFloat)                            RampDownSpeed                                               OFFSET(getStruct<T>, {0x220, 40, 0, 0})
	SMember(FScalableFloat)                            JumpHeightMultiplier                                        OFFSET(getStruct<T>, {0x248, 40, 0, 0})
	SMember(FGameplayTag)                              TutorialGameplayTag                                         OFFSET(getStruct<T>, {0x274, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialAdditionalSourceTag                                 OFFSET(getStruct<T>, {0x278, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialTargetTag                                           OFFSET(getStruct<T>, {0x298, 32, 0, 0})
	SMember(FGameplayTag)                              TagPreventWeaponHolster                                     OFFSET(getStruct<T>, {0x2B8, 4, 0, 0})
	CMember(class USoundBase*)                         OnEnergyFullyDrainedSound                                   OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(FGameplayTag)                              TacticalBehaviorTag                                         OFFSET(getStruct<T>, {0x2C8, 4, 0, 0})
	DMember(float)                                     MinSpeedForHolster                                          OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     HolsterTimeAttemptDelay                                     OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(bool)                                      bIsCancelledBySliding                                       OFFSET(get<bool>, {0x2E0, 1, 1, 1})
	DMember(bool)                                      bShouldHolsterWeapon                                        OFFSET(get<bool>, {0x2E0, 1, 1, 2})
	SMember(FScalableFloat)                            HF_EnergyCostOnStart                                        OFFSET(getStruct<T>, {0x2E8, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostPerSecond                                      OFFSET(getStruct<T>, {0x310, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnJump                                         OFFSET(getStruct<T>, {0x338, 40, 0, 0})
	SMember(FGameplayTag)                              IgnoreJumpCostTag                                           OFFSET(getStruct<T>, {0x360, 4, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           OFFSET(getStruct<T>, {0x364, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyUseIdentifier                                         OFFSET(getStruct<T>, {0x368, 4, 0, 0})
	CMember(class USoundMix*)                          SprintStartedSoundMix                                       OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class USoundBase*)                         SprintStartedSound2D                                        OFFSET(get<T>, {0x378, 8, 0, 0})
	SMember(FScalableFloat)                            HF_TacSprintEnabled                                         OFFSET(getStruct<T>, {0x388, 40, 0, 0})
	CMember(class UClass*)                             CameraMode                                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	SMember(FGameplayTag)                              CameraModeTag                                               OFFSET(getStruct<T>, {0x3C0, 4, 0, 0})
	DMember(char)                                      MaxTryHolsterAttempt                                        OFFSET(get<char>, {0x3C4, 1, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
	// void HandleOnReloadCanceling();                                                                                          // [0xa32395c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPlayerWeaponChanged
	// void HandleOnPlayerWeaponChanged(class AFortPawn* InPawn, class AFortWeapon* InNewWeapon, class AFortWeapon* InPlayerWeapon); // [0xa323874] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
	// void HandleOnPawnJump();                                                                                                 // [0xa32385c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
	// void HandleOnEnteredEditMode();                                                                                          // [0xa323844] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
	// void HandleOnEnterAircraft();                                                                                            // [0xa32382c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
	// void HandleOnEnergyDrained(class UFortComponent_Energy* EnergyComp);                                                     // [0xa3237b0] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
	// void HandleMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xa3236cc] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
	// void HandleFailedToSprint();                                                                                             // [0xa3236b8] Final|Native|Public  
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
	// void SetIsSprinting(bool bNewIsSprinting);                                                                               // [0xa323fcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RemoveCustomSprintMMEClass
	// void RemoveCustomSprintMMEClass(class UClass*& SprintMMEClassToRemove);                                                  // [0xa323f2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate();                                                                                   // [0xa323f18] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
	// void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PreviousWeapon);                                  // [0xa323e54] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                       // [0xa323d5c] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
	// void OnPawnChanged(class AFortPawn* InPawn);                                                                             // [0xa323cc8] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0xa323cb4] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xa323bb8] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
	// void OnAutoRunChanged(bool bAutoRunIsOn);                                                                                // [0xa323b38] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
	// void LogAndVisualLog(class UObject* LoggingSource, ESprintLoggingVerbosityLevel Verbosity, FString& LogString);          // [0xa323974] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.AddCustomSprintMMEClass
	// void AddCustomSprintMMEClass(class UClass*& SprintMMEClassToAdd);                                                        // [0xa3235f4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
/// Size: 0x0030 (0x000010 - 0x000040)
class FFortMovementMode_TacSprintRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

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

