
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FlyingCodeRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/SunRoseFlyingRuntime.AFortGameplayCueNotifyLoop_SunroseFlying
/// Size: 0x0040 (0x0009B0 - 0x0009F0)
class AAFortGameplayCueNotifyLoop_SunroseFlying : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2544;

public:
	SMember(FName)                                     IsAscendingParamName                                        OFFSET(getStruct<T>, {0x9B0, 4, 0, 0})
	SMember(FName)                                     IsFlappingParamName                                         OFFSET(getStruct<T>, {0x9B4, 4, 0, 0})
	SMember(FName)                                     FlappingAlphaParamName                                      OFFSET(getStruct<T>, {0x9B8, 4, 0, 0})
	SMember(FName)                                     IsRollingParamName                                          OFFSET(getStruct<T>, {0x9BC, 4, 0, 0})
	SMember(FName)                                     IsBoostingParamName                                         OFFSET(getStruct<T>, {0x9C0, 4, 0, 0})
	SMember(FName)                                     IsDivingParamName                                           OFFSET(getStruct<T>, {0x9C4, 4, 0, 0})
	SMember(FName)                                     PitchParamName                                              OFFSET(getStruct<T>, {0x9C8, 4, 0, 0})
	SMember(FName)                                     RollParamName                                               OFFSET(getStruct<T>, {0x9CC, 4, 0, 0})
	SMember(FName)                                     SpeedParamName                                              OFFSET(getStruct<T>, {0x9D0, 4, 0, 0})
	SMember(FName)                                     IsSkimmingParamName                                         OFFSET(getStruct<T>, {0x9D4, 4, 0, 0})
	SMember(FName)                                     AltitudeInterpParamName                                     OFFSET(getStruct<T>, {0x9D8, 4, 0, 0})
	SMember(FFloatRange)                               HeightRange                                                 OFFSET(getStruct<T>, {0x9DC, 16, 0, 0})


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.AFortGameplayCueNotifyLoop_SunroseFlying.SetFlappingParameters
	// void SetFlappingParameters(class UFXSystemComponent* FlyingTrailFX, TArray<UAudioComponent*>& AudioComponents, class AFortPlayerPawn* PlayerPawn, float FlappingAlpha, float RollCombined, float RollingAlpha, float PitchAlpha, bool bIsBoosting, bool bIsAscending, bool bAllowWingFlap, bool bIsSkimming, float Speed, bool bIsDiving, float CurrentHeight); // [0x2b82104] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/SunRoseFlyingRuntime.FortGameplayCueNotifyLoop_WingsSkimming
/// Size: 0x0028 (0x0009B0 - 0x0009D8)
class AFortGameplayCueNotifyLoop_WingsSkimming : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2520;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   WingsSkeletalMesh                                           OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFXSystemComponent*>)       SkimFX                                                      OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          SkimAudioComponent                                          OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               SkimLoopSound                                               OFFSET(get<T>, {0x9C8, 8, 0, 0})


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortGameplayCueNotifyLoop_WingsSkimming.ShowWingFX
	// void ShowWingFX(FVector SkimLocationLeft, FVector SkimNormalLeft, float SkimDistanceLeft, FVector SkimLocationRight, FVector SkimNormalRight, float SkimDistanceRight); // [0x1f8a1ac] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SunRoseFlyingRuntime.FortCameraModifier_SunroseWingsFlying
/// Size: 0x02E0 (0x000090 - 0x000370)
class UFortCameraModifier_SunroseWingsFlying : public UFortCameraModifier_Custom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class UClass*)                             NativeFlyingPawnClass                                       OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FScalableFloat)                            NativeFlyingSpeedBase                                       OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            NativeFlyingSpeedAddedAtMaxDistanceFromCeilingHeight        OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            NativeFlyingDownZSpeedAddedWhileFalling                     OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            NativeFlyingHeightDecayMin                                  OFFSET(getStruct<T>, {0x138, 40, 0, 0})
	SMember(FScalableFloat)                            NativePreCrashWindupDuration                                OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            NativeFlyingInputWeightHorizontal                           OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            NativeFlyingInputWeightLookDirection                        OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
	DMember(float)                                     NativeDeltaFOVForwardOffsetExponent                         OFFSET(get<float>, {0x1F4, 4, 0, 0})
	DMember(float)                                     NativeFOVModeSwapInterpRate                                 OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     NativeMaxFOVOffset                                          OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     NativeRotationRateForMaxRightOffset                         OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     NativeRightOffsetMaxCombinedStrafeTurn                      OFFSET(get<float>, {0x204, 4, 0, 0})
	DMember(float)                                     NativeRightOffsetStrafe                                     OFFSET(get<float>, {0x208, 4, 0, 0})
	DMember(float)                                     NativeRightOffsetTurn                                       OFFSET(get<float>, {0x20C, 4, 0, 0})
	DMember(float)                                     NativeRightOffsetDodge                                      OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(float)                                     NativeForwardOffsetDistanceCrashingFinal                    OFFSET(get<float>, {0x214, 4, 0, 0})
	DMember(float)                                     NativeForwardOffsetDistanceForceCrashingPhase1              OFFSET(get<float>, {0x218, 4, 0, 0})
	DMember(float)                                     NativeForwardOffsetDistanceCrashingPhase1                   OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(float)                                     NativeForwardOffsetDistanceCrashingPhase2                   OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     NativeForwardOffsetCrashingTimeAfterWindupToEnterFinalPhase OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     NativeForwardOffsetInterpSpeedCrashingPhase1                OFFSET(get<float>, {0x228, 4, 0, 0})
	DMember(float)                                     NativeForwardOffsetInterpSpeedCrashingPhase2                OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     NativeForwardOffsetInterpSpeedCrashingFinal                 OFFSET(get<float>, {0x230, 4, 0, 0})
	SMember(FGameplayTag)                              NativeTagForceCrash                                         OFFSET(getStruct<T>, {0x234, 4, 0, 0})
	DMember(float)                                     NativeFOVInterpSpeed                                        OFFSET(get<float>, {0x238, 4, 0, 0})
	DMember(float)                                     NativeMinFOVOffsetFast                                      OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(float)                                     NativeMinFOVOffsetSlow                                      OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     NativeMaxFOVOffsetSlow                                      OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     NativeLateBoostStartTime                                    OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     NativeTimeSinceLastBoostLateMin                             OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     NativeTimeSinceLastBoostLateMax                             OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(float)                                     NativeFOVOffsetLateMin                                      OFFSET(get<float>, {0x254, 4, 0, 0})
	DMember(float)                                     NativeFOVOffsetLateMax                                      OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(float)                                     NativeTimeSinceEarlyBoostLateMin                            OFFSET(get<float>, {0x25C, 4, 0, 0})
	DMember(float)                                     NativeTimeSinceLastBoostEarlyMax                            OFFSET(get<float>, {0x260, 4, 0, 0})
	DMember(float)                                     NativeFOVOffsetEarlyMin                                     OFFSET(get<float>, {0x264, 4, 0, 0})
	DMember(float)                                     NativeFOVOffsetEarlyMax                                     OFFSET(get<float>, {0x268, 4, 0, 0})
	DMember(float)                                     NativeFOVOffsetModeMin                                      OFFSET(get<float>, {0x26C, 4, 0, 0})
	DMember(float)                                     NativeCrashingFOVInterpSpeed                                OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(float)                                     NativeFOVOffsetWindup                                       OFFSET(get<float>, {0x274, 4, 0, 0})
	DMember(float)                                     NativePositiveFlyingMoveActionXFOVInterpSpeed               OFFSET(get<float>, {0x278, 4, 0, 0})
	DMember(float)                                     NativeNegativeFlyingMoveActionXFOVInterpSpeed               OFFSET(get<float>, {0x27C, 4, 0, 0})
	DMember(float)                                     NativeFlyingMoveActionPositiveMin                           OFFSET(get<float>, {0x280, 4, 0, 0})
	DMember(float)                                     NativeFlyingMoveActionPositiveMax                           OFFSET(get<float>, {0x284, 4, 0, 0})
	DMember(float)                                     NativeFlyingMoveActionPositiveFOVMin                        OFFSET(get<float>, {0x288, 4, 0, 0})
	DMember(float)                                     NativeFlyingMoveActionPositiveFOVMax                        OFFSET(get<float>, {0x28C, 4, 0, 0})
	DMember(float)                                     NativeFlyingMoveActionNegativeMin                           OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     NativeFlyingMoveActionNegativeMax                           OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(float)                                     NativeFlyingMoveActionNegativeFOVMin                        OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     NativeFlyingMoveActionNegativeFOVMax                        OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     NativeDefaultFOVInterpSpeed                                 OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     NativePositiveFOVMax                                        OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     NativeLocationOffsetForPositiveFOVMax                       OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     NativeNegativeFOVMax                                        OFFSET(get<float>, {0x2AC, 4, 0, 0})
	DMember(float)                                     NativeLocationOffsetForNegativeFOVMax                       OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     NativeClampedDeltaFOVInterpSpeed                            OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(float)                                     NativeShortTimeSinceLastBoostStart                          OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     NativeLongTimeSinceLastBoostStart                           OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(float)                                     NativeLongOrShortBoostTimeInterpSpeed                       OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     NativeMediumBoostTimeInterpSpeed                            OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     NativeForwardLocationOffsetTargetMax                        OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     NativeForwardLocationOffsetFromDownZVelocityInterpSpeed     OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     NativeDodgeStartDuration                                    OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     NativeStrafeFOVOffsetMin                                    OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     NativeStrafeFOVOffsetMax                                    OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     NativeStrafeFOVMultiplierMin                                OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     NativeStrafeFOVMultiplierMax                                OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     NativeViewLocationOffsetRightInterpSpeedCrashing            OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     NativeDodgeStartDurationForInterpSpeed                      OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     NativeViewLocationOffsetRightInterpSpeedStartingDodge       OFFSET(get<float>, {0x2EC, 4, 0, 0})
	DMember(float)                                     NativeViewLocationOffsetRightInterpSpeedMostlyStrafing      OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     NativeViewLocationOffsetRightInterpSpeedMostlyTurning       OFFSET(get<float>, {0x2F4, 4, 0, 0})


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortCameraModifier_SunroseWingsFlying.UseNativeCalculation
	// bool UseNativeCalculation();                                                                                             // [0x32cc2a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SunRoseFlyingRuntime.FortContextualTutorialDefinition_WingedFlying
/// Size: 0x0028 (0x0001A0 - 0x0001C8)
class UFortContextualTutorialDefinition_WingedFlying : public UUFortContextualTutorialDefinition_GameplayEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FScalableFloat)                            MinTimeBeforeCompletion                                     OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
};

/// Class /Script/SunRoseFlyingRuntime.FortContextualTutorial_WingedFlying
/// Size: 0x0010 (0x000168 - 0x000178)
class UFortContextualTutorial_WingedFlying : public UFortContextualTutorial_GameplayEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged
/// Size: 0x1120 (0x000120 - 0x001240)
class UFortMovementMode_ExtLogicFlyingWinged : public UFortMovementMode_ExtLogicFlying
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4672;

public:
	CMember(TArray<FFlyingStatusConfig>)               FlyingStatusConfigs                                         OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(class UClass*)                             FlyingThroughCeilingGE                                      OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FGameplayTag)                              FlyingThroughCeilingTag                                     OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyDrainCueTag                                           OFFSET(getStruct<T>, {0x14C, 4, 0, 0})
	SMember(FGameplayTag)                              CrashEnabledCueTag                                          OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	SMember(FGameplayTag)                              HitBonkCueTag                                               OFFSET(getStruct<T>, {0x154, 4, 0, 0})
	SMember(FGameplayTag)                              EventTagToTriggerWhenMiniBoosting                           OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FGameplayTag)                              EventTagToTriggerCrashImpact                                OFFSET(getStruct<T>, {0x15C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToPreventLowFrictionLanding                             OFFSET(getStruct<T>, {0x160, 32, 0, 0})
	CMember(class UClass*)                             LowFrictionLandingGE                                        OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FGameplayTag)                              TagToSetByCallerDuration                                    OFFSET(getStruct<T>, {0x188, 4, 0, 0})
	SMember(FScalableFloat)                            BaseFlyingCost                                              OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	DMember(int32_t)                                   FlyingStatusToStopBaseCost                                  OFFSET(get<int32_t>, {0x1B8, 4, 0, 0})
	SMember(FScalableFloat)                            ExtraLeapCrashCost                                          OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            HeightIncreasePer1Cost                                      OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeSpeedMin                                               OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeSpeedMax                                               OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeSpeedDecayInitialDelay                                 OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeSpeedRampExponent                                      OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeSpeedDecayExponent                                     OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeDuration                                               OFFSET(getStruct<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            StartedFlyingTransitionDuration                             OFFSET(getStruct<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            StartedFlyingSpeedBoundForInterpMin                         OFFSET(getStruct<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            StartedFlyingSpeedBoundForInterpMax                         OFFSET(getStruct<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            StartedFlyingVelocityInterpSpeedAtMinSpeed                  OFFSET(getStruct<T>, {0x378, 40, 0, 0})
	SMember(FScalableFloat)                            StartedFlyingVelocityInterpSpeedAtMaxSpeed                  OFFSET(getStruct<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            FlyingLookPitchClampMin                                     OFFSET(getStruct<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            FlyingLookPitchClampMax                                     OFFSET(getStruct<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultLookPitchAngleOffset                                 OFFSET(getStruct<T>, {0x418, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingLookPitchClampMin                                   OFFSET(getStruct<T>, {0x440, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingLookPitchClampMax                                   OFFSET(getStruct<T>, {0x468, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingInputWeightLookDirection                            OFFSET(getStruct<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            FlyingInputWeightLockDirection                              OFFSET(getStruct<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            FlyingInputWeightHorizontal                                 OFFSET(getStruct<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            PitchInterpSpeedWhileCrashing                               OFFSET(getStruct<T>, {0x508, 40, 0, 0})
	SMember(FScalableFloat)                            PitchInterpSpeedAtBaseSpeed                                 OFFSET(getStruct<T>, {0x530, 40, 0, 0})
	SMember(FScalableFloat)                            PitchInterpSpeedAtMaxLateralSpeed                           OFFSET(getStruct<T>, {0x558, 40, 0, 0})
	SMember(FScalableFloat)                            PitchInterpSpeedAtMaxTotalSpeed                             OFFSET(getStruct<T>, {0x580, 40, 0, 0})
	SMember(FScalableFloat)                            YawInterpSpeedWhileCrashing                                 OFFSET(getStruct<T>, {0x5A8, 40, 0, 0})
	SMember(FScalableFloat)                            YawInterpSpeedAtMinBrakeSpeed                               OFFSET(getStruct<T>, {0x5D0, 40, 0, 0})
	SMember(FScalableFloat)                            YawInterpSpeedAtBaseSpeed                                   OFFSET(getStruct<T>, {0x5F8, 40, 0, 0})
	SMember(FScalableFloat)                            YawInterpSpeedAtMaxLateralSpeed                             OFFSET(getStruct<T>, {0x620, 40, 0, 0})
	SMember(FScalableFloat)                            InputInterpSpeedHorizontal                                  OFFSET(getStruct<T>, {0x648, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingMovementInterpSpeed                                 OFFSET(getStruct<T>, {0x670, 40, 0, 0})
	SMember(FScalableFloat)                            AscendingLookPitchClampMin                                  OFFSET(getStruct<T>, {0x698, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightIncreaseSpeedWhileAscendingMin                 OFFSET(getStruct<T>, {0x6C0, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightIncreaseSpeedWhileAscendingMax                 OFFSET(getStruct<T>, {0x6E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCeilingHeightAddLimitFromAscend                          OFFSET(getStruct<T>, {0x710, 40, 0, 0})
	SMember(FScalableFloat)                            AscendingSpeedZUpAddedMin                                   OFFSET(getStruct<T>, {0x738, 40, 0, 0})
	SMember(FScalableFloat)                            AscendingSpeedZUpAddedMax                                   OFFSET(getStruct<T>, {0x760, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCeilingHeightAddLimitFromBoost                           OFFSET(getStruct<T>, {0x788, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightIncreaseSpeedWhileBoostingMin                  OFFSET(getStruct<T>, {0x7B0, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightIncreaseSpeedWhileBoostingMax                  OFFSET(getStruct<T>, {0x7D8, 40, 0, 0})
	SMember(FScalableFloat)                            PercentMaxLookPitchForMaxBoostCeilingHeightIncrease         OFFSET(getStruct<T>, {0x800, 40, 0, 0})
	SMember(FScalableFloat)                            PreCrashWindUpDuration                                      OFFSET(getStruct<T>, {0x828, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingSpeedBase                                           OFFSET(getStruct<T>, {0x850, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingSpeedAddedAtMaxDistanceFromCeilingHeight            OFFSET(getStruct<T>, {0x878, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceFromCeilingHeightForMaxCrashingSpeedAdded           OFFSET(getStruct<T>, {0x8A0, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingLookPitchClampFinalMax                              OFFSET(getStruct<T>, {0x8C8, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingLookPitchClampDelayBeforeLerpToFinalMax             OFFSET(getStruct<T>, {0x8F0, 40, 0, 0})
	SMember(FScalableFloat)                            CrashingLookPitchClampDurationToLerpToFinalMax              OFFSET(getStruct<T>, {0x918, 40, 0, 0})
	SMember(FScalableFloat)                            PreCrashingSpeedBase                                        OFFSET(getStruct<T>, {0x940, 40, 0, 0})
	SMember(FScalableFloat)                            PreCrashingInterpToSpeedMod                                 OFFSET(getStruct<T>, {0x968, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceFromCeilingHeightForCrashMode                       OFFSET(getStruct<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            MinAngleToPreventCrash                                      OFFSET(getStruct<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            CrashImpactIgnoreWaterDuration                              OFFSET(getStruct<T>, {0x9E0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAngleForLowFrictionLanding                               OFFSET(getStruct<T>, {0xA08, 40, 0, 0})
	SMember(FScalableFloat)                            LowFrictionDurationMin                                      OFFSET(getStruct<T>, {0xA30, 40, 0, 0})
	SMember(FScalableFloat)                            LowFrictionDurationMax                                      OFFSET(getStruct<T>, {0xA58, 40, 0, 0})
	SMember(FScalableFloat)                            LowFrictionDurationScalar                                   OFFSET(getStruct<T>, {0xA80, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinLowFrictionMult                                  OFFSET(getStruct<T>, {0xAA8, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxLowFrictionMult                                  OFFSET(getStruct<T>, {0xAD0, 40, 0, 0})
	SMember(FScalableFloat)                            LowFrictionMultFromSpeedMin                                 OFFSET(getStruct<T>, {0xAF8, 40, 0, 0})
	SMember(FScalableFloat)                            LowFrictionMultFromSpeedMax                                 OFFSET(getStruct<T>, {0xB20, 40, 0, 0})
	SMember(FScalableFloat)                            ImpactAngleForMaxLowFrictionDuration                        OFFSET(getStruct<T>, {0xB48, 40, 0, 0})
	SMember(FScalableFloat)                            ImpactAngleForMinLowFrictionDuration                        OFFSET(getStruct<T>, {0xB70, 40, 0, 0})
	SMember(FScalableFloat)                            LowFrictionMultFromImpactAngleMax                           OFFSET(getStruct<T>, {0xB98, 40, 0, 0})
	SMember(FScalableFloat)                            LowFrictionMultFromImpactAngleMin                           OFFSET(getStruct<T>, {0xBC0, 40, 0, 0})
	SMember(FScalableFloat)                            FlyingSpeedBase                                             OFFSET(getStruct<T>, {0xBE8, 40, 0, 0})
	SMember(FScalableFloat)                            FlyingSpeedAddedAtMaxDistanceFromCeilingHeight              OFFSET(getStruct<T>, {0xC10, 40, 0, 0})
	SMember(FScalableFloat)                            FlyingDownZSpeedAddedWhileFalling                           OFFSET(getStruct<T>, {0xC38, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceFromCeilingHeightForMaxFlyingSpeedAdded             OFFSET(getStruct<T>, {0xC60, 40, 0, 0})
	SMember(FScalableFloat)                            AirBrakingDefaultMultiMin                                   OFFSET(getStruct<T>, {0xC88, 40, 0, 0})
	SMember(FScalableFloat)                            AirBrakingDownSpeedMultiMin                                 OFFSET(getStruct<T>, {0xCB0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardInputThresholdToTriggerMiniBoost                     OFFSET(getStruct<T>, {0xCD8, 40, 0, 0})
	SMember(FScalableFloat)                            PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput   OFFSET(getStruct<T>, {0xD00, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightIncreaseSpeedWhileHoldingForwardMin            OFFSET(getStruct<T>, {0xD28, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightIncreaseSpeedWhileHoldingForwardMax            OFFSET(getStruct<T>, {0xD50, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight OFFSET(getStruct<T>, {0xD78, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightMinDecreaseSpeedWhileFlying                    OFFSET(getStruct<T>, {0xDA0, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightMinDecreaseSpeedWhileBoosting                  OFFSET(getStruct<T>, {0xDC8, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight OFFSET(getStruct<T>, {0xDF0, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightMinDecreaseSpeedWhileAscending                 OFFSET(getStruct<T>, {0xE18, 40, 0, 0})
	SMember(FScalableFloat)                            CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight OFFSET(getStruct<T>, {0xE40, 40, 0, 0})
	SMember(FScalableFloat)                            HeightAboveWorldInterpSpeedIncreasing                       OFFSET(getStruct<T>, {0xE68, 40, 0, 0})
	SMember(FScalableFloat)                            HeightAboveWorldInterpSpeedDecreasing                       OFFSET(getStruct<T>, {0xE90, 40, 0, 0})
	SMember(FScalableFloat)                            HeightForMinAddedCeilingDecay                               OFFSET(getStruct<T>, {0xEB8, 40, 0, 0})
	SMember(FScalableFloat)                            HeightForMaxAddedCeilingDecay                               OFFSET(getStruct<T>, {0xEE0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAddedCeilingDecayFromHeight                              OFFSET(getStruct<T>, {0xF08, 40, 0, 0})
	SMember(FScalableFloat)                            EnergyThresholdForAddedCeilingDecay                         OFFSET(getStruct<T>, {0xF30, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAddedCeilingDecayFromEnergy                              OFFSET(getStruct<T>, {0xF58, 40, 0, 0})
	SMember(FScalableFloat)                            GlobalCeilingHeightMax                                      OFFSET(getStruct<T>, {0xF80, 40, 0, 0})
	SMember(FScalableFloat)                            GlobalCeilingHeightDiminishingReturnsExponent               OFFSET(getStruct<T>, {0xFA8, 40, 0, 0})
	SMember(FScalableFloat)                            GlobalCeilingHeightDiminishingReturnsRange                  OFFSET(getStruct<T>, {0xFD0, 40, 0, 0})
	SMember(FScalableFloat)                            SkimmingMinRequiredAngleToSurface                           OFFSET(getStruct<T>, {0xFF8, 40, 0, 0})
	SMember(FScalableFloat)                            SkimmingMinRequiredVelocityAlongSurface                     OFFSET(getStruct<T>, {0x1020, 40, 0, 0})
	SMember(FScalableFloat)                            SkimmingMinRequiredHeightAboveWorld                         OFFSET(getStruct<T>, {0x1048, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAngleForGroundHit                                        OFFSET(getStruct<T>, {0x1070, 40, 0, 0})
	SMember(FScalableFloat)                            VelocityClampOnBonk                                         OFFSET(getStruct<T>, {0x1098, 40, 0, 0})


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.UpdateForRotation
	// void UpdateForRotation(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, float DeltaTime, FRotator& OutNewMoveOrientation); // [0x387c554] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.UpdateForMovement
	// void UpdateForMovement(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, float DeltaTime, FVector& InVelocity, FVector& InAcceleration, FVector& OutNewVelocity, FVector& OutNewAcceleration, FFortMovementMode_WingedFlyingRuntimeData& OutNewMoveStatus); // [0xb28f388] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.UpdateForHitResponse
	// void UpdateForHitResponse(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, float DeltaTime, FVector& InVelocity, FVector& OldPosition, FVector& Adjustment, FHitResult& Hit, EFortMovementModeExt_PhysUpdateResult& OutHitResult, bool& bOutWantToSlide); // [0xb28ed1c] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.IsClientReplaying
	// bool IsClientReplaying();                                                                                                // [0x3780354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.HandleFlyingStatusChanged
	// void HandleFlyingStatusChanged(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, EWingedFlyingStatus NewStatus, bool bIsActive, FGameplayTag& FailureTag); // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.HandleFlyingStatusActivationFailed
	// void HandleFlyingStatusActivationFailed(EWingedFlyingStatus FailedStatus, FGameplayTag& FailureTag);                     // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.CanStartFlyingStatus
	// void CanStartFlyingStatus(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, EWingedFlyingStatus StatusToStart, bool& bOutCanStart, FGameplayTag& OutFailureTag); // [0xb28ea6c] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.CanEndFlyingStatus
	// bool CanEndFlyingStatus(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, EWingedFlyingStatus StatusToEnd, float ElapsedDuration); // [0xb28e7e0] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.CanContinueFlyingStatus
	// void CanContinueFlyingStatus(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, EWingedFlyingStatus StatusToContinue, float ElapsedDuration, bool& bOutCanContinue, FGameplayTag& OutFailureTag); // [0xb28e450] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying
/// Size: 0x0178 (0x0000A8 - 0x000220)
class UFortPawnComponent_WingedFlying : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FVector2D)                                 FlyingMoveActionValue                                       OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(EWingedFlyingStatus)                       FlyingStatus                                                OFFSET(get<T>, {0xB8, 1, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     AddedDownZVelocity                                          OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     NativeCurrentHeightAboveWorld                               OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     CurrentFlyingEnergy                                         OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bIntendsToBoost                                             OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bIntendsToAscend                                            OFFSET(get<bool>, {0xCD, 1, 0, 0})
	DMember(bool)                                      bIntendsToCrash                                             OFFSET(get<bool>, {0xCE, 1, 0, 0})
	DMember(bool)                                      bIntendsToRollLeft                                          OFFSET(get<bool>, {0xCF, 1, 0, 0})
	DMember(bool)                                      bIntendsToRollRight                                         OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(class UClass*)                             FlyingMovementModeExtension                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToEnableSkimmingCheck                                   OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            SkimCheckTraceChannel                                       OFFSET(get<T>, {0x100, 1, 0, 0})
	SMember(FName)                                     SkimCheckLeftStartSocket                                    OFFSET(getStruct<T>, {0x104, 4, 0, 0})
	SMember(FName)                                     SkimCheckLeftEndSocket                                      OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	SMember(FName)                                     SkimCheckRightStartSocket                                   OFFSET(getStruct<T>, {0x10C, 4, 0, 0})
	SMember(FName)                                     SkimCheckRightEndSocket                                     OFFSET(getStruct<T>, {0x110, 4, 0, 0})
	SMember(FGameplayTag)                              TagToEnableHeightCheck                                      OFFSET(getStruct<T>, {0x114, 4, 0, 0})
	SMember(FScalableFloat)                            HeightCheckInterval                                         OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            HeightCheckTraceLength                                      OFFSET(getStruct<T>, {0x140, 40, 0, 0})


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.UpdateCurrentFlyingEnergy
	// void UpdateCurrentFlyingEnergy(float NewFlyingEnergy, bool bForceUpdateFX);                                              // [0x254ad48] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.StartFlying
	// void StartFlying(FFortMovementMode_WingedFlyingCreationData& CreationData);                                              // [0xb297f4c] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleRightSkimCheckComplete
	// void HandleRightSkimCheckComplete(FHitResult& HitResult);                                                                // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0x242bd4c] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleLeftSkimCheckComplete
	// void HandleLeftSkimCheckComplete(FHitResult& HitResult);                                                                 // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleForwardSpeedUpdated
	// void HandleForwardSpeedUpdated(float NewForwardSpeed);                                                                   // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleFlyingMoveStatusUpdated
	// void HandleFlyingMoveStatusUpdated(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus);                               // [0x21c3a38] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleAddedDownZVelocityUpdated
	// void HandleAddedDownZVelocityUpdated(float NewAddedDownZVelocity);                                                       // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.GetLocalFlyingMoveActionValue
	// FVector2D GetLocalFlyingMoveActionValue();                                                                               // [0xb297bdc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.EndFlying
	// void EndFlying();                                                                                                        // [0xb2973bc] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SunRoseFlyingRuntime.FortWeaponWings
/// Size: 0x0130 (0x001508 - 0x001638)
class AFortWeaponWings : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5688;

public:
	CMember(class UMaterialInstanceDynamic*)           WingsMaterialInstance                                       OFFSET(get<T>, {0x1538, 8, 0, 0})
	SMember(FGameplayTag)                              IsFlyingGameplayTag                                         OFFSET(getStruct<T>, {0x1540, 4, 0, 0})
	SMember(FName)                                     IsFallingAudioParamName                                     OFFSET(getStruct<T>, {0x1544, 4, 0, 0})
	SMember(FName)                                     FeatherDissolveName                                         OFFSET(getStruct<T>, {0x1548, 4, 0, 0})
	SMember(FName)                                     ReplenishAnimationName                                      OFFSET(getStruct<T>, {0x154C, 4, 0, 0})
	CMember(class USoundBase*)                         OutOfEnergy2DSound                                          OFFSET(get<T>, {0x1550, 8, 0, 0})
	SMember(FGameplayTagContainer)                     OwnedGameplayTags                                           OFFSET(getStruct<T>, {0x1558, 32, 0, 0})
	CMember(class UFortAbilitySystemComponent*)        AbilitySystemComponent                                      OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(class UFortHealthSet*)                     HealthSet                                                   OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             PrimarySurfaceType                                          OFFSET(get<T>, {0x1588, 1, 0, 0})
	CMember(TEnumAsByte<EFortBaseWeaponDamage>)        WeaponResponseType                                          OFFSET(get<T>, {0x1589, 1, 0, 0})
	CMember(class UClass*)                             DamageGameplayEffectClass                                   OFFSET(get<T>, {0x1590, 8, 0, 0})
	SMember(FGameplayTag)                              SetByCallerDamageTag                                        OFFSET(getStruct<T>, {0x1598, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToPreventReload                                         OFFSET(getStruct<T>, {0x15A0, 32, 0, 0})
	SMember(FScalableFloat)                            ServerMeshRelativeRotationRoll                              OFFSET(getStruct<T>, {0x15C0, 40, 0, 0})
	SMember(FScalableFloat)                            ServerMeshRelativeLocationY                                 OFFSET(getStruct<T>, {0x15E8, 40, 0, 0})
	SMember(FScalableFloat)                            ServerMeshRelativeLocationZ                                 OFFSET(getStruct<T>, {0x1610, 40, 0, 0})


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.TryResetADSInput
	// void TryResetADSInput(class AFortWeapon* Weapon);                                                                        // [0xb29800c] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.NativeUpdateEnergyFX
	// void NativeUpdateEnergyFX(bool bForceUpdate);                                                                            // [0xb297c0c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.HandleWeaponAttachmentChanged
	// void HandleWeaponAttachmentChanged(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                         // [0x303d70c] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.HandleSecondaryFirePressed
	// void HandleSecondaryFirePressed(class AFortWeapon* Weapon);                                                              // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.HandleDBNOStateChanged
	// void HandleDBNOStateChanged(class AFortPawn* FortPawn, bool bInIsDBNO);                                                  // [0x36c97e4] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.BP_ModifyIncomingDamage
	// void BP_ModifyIncomingDamage(float Damage, FGameplayTagContainer& DamageTags, FHitResult& DamageHit, class AController* EventInstigator, class AActor* DamageCauser, float& OutNewDamage); // [0x246f7d8] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortWingedFlyingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.TraceForWorldAndWater
	// void TraceForWorldAndWater(class AActor* PlayerPawn, FVector& TraceStart, FVector& TraceEnd, bool& bIsBlockingHit, FHitResult& ClosestHit); // [0x338a37c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.SetInputActionDisplayContext
	// void SetInputActionDisplayContext(class AFortPawn* PlayerPawn, class UFortInputMappingContext* InputMappingContext);     // [0xb297cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.GetFlyingStatusElapsedTime
	// float GetFlyingStatusElapsedTime(EWingedFlyingStatus FlyingStatus, FFortMovementMode_WingedFlyingRuntimeData& MoveStatus); // [0xb297aa4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.GetFlyingDuration
	// float GetFlyingDuration(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus);                                          // [0xb297a00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.GetDodgeElapsedTime
	// float GetDodgeElapsedTime(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus);                                        // [0xb297944] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.FlyingStatusRemoveFlags
	// void FlyingStatusRemoveFlags(EWingedFlyingStatus Status, int32_t FlagsToRemove, EWingedFlyingStatus& NewStatus);         // [0xb2977d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.FlyingStatusHasAnyFlags
	// bool FlyingStatusHasAnyFlags(EWingedFlyingStatus Status, int32_t Flags);                                                 // [0xb297694] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.FlyingStatusHasAllFlags
	// bool FlyingStatusHasAllFlags(EWingedFlyingStatus Status, int32_t Flags);                                                 // [0xb297554] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.FlyingStatusAddFlags
	// void FlyingStatusAddFlags(EWingedFlyingStatus Status, int32_t FlagsToAdd, EWingedFlyingStatus& NewStatus);               // [0xb2973e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.ClearInputActionDisplayContext
	// void ClearInputActionDisplayContext(class AFortPawn* PlayerPawn, class UFortInputMappingContext* InputMappingContext);   // [0xb29719c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SunRoseFlyingRuntime.SunRoseFlying_PlayerAnimInstance
/// Size: 0x0070 (0x001530 - 0x0015A0)
class USunRoseFlying_PlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5536;

public:
	SMember(FGameplayTag)                              AscenderTag                                                 OFFSET(getStruct<T>, {0x1528, 4, 0, 0})
	SMember(FGameplayTag)                              GrindRailsTag                                               OFFSET(getStruct<T>, {0x152C, 4, 0, 0})
	SMember(FGameplayTag)                              WingedFlightTag                                             OFFSET(getStruct<T>, {0x1530, 4, 0, 0})
	SMember(FGameplayTag)                              WingsForceCrashTag                                          OFFSET(getStruct<T>, {0x1534, 4, 0, 0})
	SMember(FGameplayTag)                              WingsLeapingTag                                             OFFSET(getStruct<T>, {0x1538, 4, 0, 0})
	DMember(float)                                     CurrentHeightAboveWorld                                     OFFSET(get<float>, {0x153C, 4, 0, 0})
	DMember(float)                                     Fuel                                                        OFFSET(get<float>, {0x1540, 4, 0, 0})
	DMember(float)                                     GlidePitch                                                  OFFSET(get<float>, {0x1544, 4, 0, 0})
	DMember(float)                                     GlidePitchAlpha                                             OFFSET(get<float>, {0x1548, 4, 0, 0})
	DMember(float)                                     GlidePitchInterp                                            OFFSET(get<float>, {0x154C, 4, 0, 0})
	DMember(float)                                     GlidePitchTarget                                            OFFSET(get<float>, {0x1550, 4, 0, 0})
	DMember(float)                                     GlideRoll                                                   OFFSET(get<float>, {0x1554, 4, 0, 0})
	DMember(float)                                     GlideRollCombined                                           OFFSET(get<float>, {0x1558, 4, 0, 0})
	DMember(float)                                     GlideRollCombinedTarget                                     OFFSET(get<float>, {0x155C, 4, 0, 0})
	DMember(float)                                     GlideRollInterp                                             OFFSET(get<float>, {0x1560, 4, 0, 0})
	DMember(float)                                     GroundBlendTime                                             OFFSET(get<float>, {0x1564, 4, 0, 0})
	DMember(float)                                     pelvis                                                      OFFSET(get<float>, {0x1568, 4, 0, 0})
	DMember(float)                                     PitchAlpha                                                  OFFSET(get<float>, {0x156C, 4, 0, 0})
	DMember(float)                                     RollAlpha                                                   OFFSET(get<float>, {0x1570, 4, 0, 0})
	DMember(float)                                     SlowDownOrLandAlpha                                         OFFSET(get<float>, {0x1574, 4, 0, 0})
	DMember(float)                                     SlowDownOrLandTarget                                        OFFSET(get<float>, {0x1578, 4, 0, 0})
	DMember(float)                                     SlowSpeedAlpha                                              OFFSET(get<float>, {0x157C, 4, 0, 0})
	DMember(float)                                     YawAlpha                                                    OFFSET(get<float>, {0x1580, 4, 0, 0})
	DMember(float)                                     YawBlend                                                    OFFSET(get<float>, {0x1584, 4, 0, 0})
	DMember(int32_t)                                   RandomInteger                                               OFFSET(get<int32_t>, {0x1588, 4, 0, 0})
	DMember(bool)                                      bIsAllowWingFlap                                            OFFSET(get<bool>, {0x158C, 1, 1, 0})
	DMember(bool)                                      bIsAscending                                                OFFSET(get<bool>, {0x158C, 1, 1, 1})
	DMember(bool)                                      bIsBoostStartEnd                                            OFFSET(get<bool>, {0x158C, 1, 1, 2})
	DMember(bool)                                      bIsDodgeLeft                                                OFFSET(get<bool>, {0x158C, 1, 1, 3})
	DMember(bool)                                      bIsDodgeRight                                               OFFSET(get<bool>, {0x158C, 1, 1, 4})
	DMember(bool)                                      bIsExtBoostEarly                                            OFFSET(get<bool>, {0x158C, 1, 1, 5})
	DMember(bool)                                      bIsFlyingStart                                              OFFSET(get<bool>, {0x158C, 1, 1, 6})
	DMember(bool)                                      bIsForceDive                                                OFFSET(get<bool>, {0x158C, 1, 1, 7})
	DMember(bool)                                      bIsLeapInterruptible                                        OFFSET(get<bool>, {0x158D, 1, 1, 0})
	DMember(bool)                                      bIsHighWithNoFuel                                           OFFSET(get<bool>, {0x158D, 1, 1, 1})
	DMember(bool)                                      bIsOnAscender                                               OFFSET(get<bool>, {0x158D, 1, 1, 2})
	DMember(bool)                                      bIsOnGrindRail                                              OFFSET(get<bool>, {0x158D, 1, 1, 3})
	DMember(bool)                                      bIsPlayDiveHitToIdle                                        OFFSET(get<bool>, {0x158D, 1, 1, 4})
	DMember(bool)                                      bIsPlayLandAdditive                                         OFFSET(get<bool>, {0x158D, 1, 1, 5})
	DMember(bool)                                      bIsWingLeaping                                              OFFSET(get<bool>, {0x158D, 1, 1, 6})
	DMember(bool)                                      bIsWingReplenish                                            OFFSET(get<bool>, {0x158D, 1, 1, 7})
	DMember(bool)                                      bIsWingsBoosting                                            OFFSET(get<bool>, {0x158E, 1, 1, 0})
	DMember(bool)                                      bIsWingsCrashing                                            OFFSET(get<bool>, {0x158E, 1, 1, 1})
	DMember(bool)                                      bIsWingsFlying                                              OFFSET(get<bool>, {0x158E, 1, 1, 2})
	DMember(bool)                                      bIsDiveStart                                                OFFSET(get<bool>, {0x158E, 1, 1, 3})
	DMember(bool)                                      bToBoosting                                                 OFFSET(get<bool>, {0x158E, 1, 1, 4})
};

/// Class /Script/SunRoseFlyingRuntime.SunRoseFlying_WingsAnimInstance
/// Size: 0x0060 (0x0006F0 - 0x000750)
class USunRoseFlying_WingsAnimInstance : public UFortItemLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FRotator)                                  PlayerPawnRotationRate                                      OFFSET(getStruct<T>, {0x6F0, 24, 0, 0})
	DMember(float)                                     PlayerCurrentHeightAboveWorld                               OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     PlayerFuel                                                  OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     PlayerGlidePitch                                            OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     PlayerGlidePitchAlpha                                       OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     PlayerGlideRoll                                             OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     PlayerGroundBlendTime                                       OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     PlayerGlideRollCombined                                     OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     PlayerRollAlpha                                             OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     PlayerSlowDownOrLandAlpha                                   OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     PlayerSpeed2D                                               OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     WingFlapAlpha                                               OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     WingSlowDownOrLandAlpha                                     OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     WingSlowDownOrLandAlphaTarget                               OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(int32_t)                                   PlayerRandomInteger                                         OFFSET(get<int32_t>, {0x73C, 4, 0, 0})
	DMember(bool)                                      bIsConduitToMoving                                          OFFSET(get<bool>, {0x740, 1, 1, 0})
	DMember(bool)                                      bIsCrouchIdleToCrouchMoving                                 OFFSET(get<bool>, {0x740, 1, 1, 1})
	DMember(bool)                                      bIsCrouchMovingToCrouchIdle                                 OFFSET(get<bool>, {0x740, 1, 1, 2})
	DMember(bool)                                      bIsFallLoopToJumpLand                                       OFFSET(get<bool>, {0x740, 1, 1, 3})
	DMember(bool)                                      bIsFlyingStart                                              OFFSET(get<bool>, {0x740, 1, 1, 4})
	DMember(bool)                                      bIsNotCrouchIdle                                            OFFSET(get<bool>, {0x740, 1, 1, 5})
	DMember(bool)                                      bIsNotCrouchMoving                                          OFFSET(get<bool>, {0x740, 1, 1, 6})
	DMember(bool)                                      bIsNotMoving                                                OFFSET(get<bool>, {0x740, 1, 1, 7})
	DMember(bool)                                      bIsNotOnZipline                                             OFFSET(get<bool>, {0x741, 1, 1, 0})
	DMember(bool)                                      bIsOnZipline                                                OFFSET(get<bool>, {0x741, 1, 1, 1})
	DMember(bool)                                      bIsOutOfGas                                                 OFFSET(get<bool>, {0x741, 1, 1, 2})
	DMember(bool)                                      bIsProceduralDeactivated                                    OFFSET(get<bool>, {0x741, 1, 1, 3})
	DMember(bool)                                      bIsRandomFlap                                               OFFSET(get<bool>, {0x741, 1, 1, 4})
	DMember(bool)                                      bIsTacticalJumpLoopEnd                                      OFFSET(get<bool>, {0x741, 1, 1, 5})
	DMember(bool)                                      bIsToBoostEnd                                               OFFSET(get<bool>, {0x741, 1, 1, 6})
	DMember(bool)                                      bIsToBoostStart                                             OFFSET(get<bool>, {0x741, 1, 1, 7})
	DMember(bool)                                      bIsToSliding                                                OFFSET(get<bool>, {0x742, 1, 1, 0})
	DMember(bool)                                      bLOD2Fix                                                    OFFSET(get<bool>, {0x742, 1, 1, 1})
	DMember(bool)                                      bPlayerIsAccelerating2D                                     OFFSET(get<bool>, {0x742, 1, 1, 2})
	DMember(bool)                                      bPlayerIsAllowWingFlap                                      OFFSET(get<bool>, {0x742, 1, 1, 3})
	DMember(bool)                                      bPlayerIsAscending                                          OFFSET(get<bool>, {0x742, 1, 1, 4})
	DMember(bool)                                      bPlayerIsBoostStartEnd                                      OFFSET(get<bool>, {0x742, 1, 1, 5})
	DMember(bool)                                      bPlayerIsCrouching                                          OFFSET(get<bool>, {0x742, 1, 1, 6})
	DMember(bool)                                      bPlayerIsCrouchMoving                                       OFFSET(get<bool>, {0x742, 1, 1, 7})
	DMember(bool)                                      bPlayerIsDodgeLeft                                          OFFSET(get<bool>, {0x743, 1, 1, 0})
	DMember(bool)                                      bPlayerIsDodgeRight                                         OFFSET(get<bool>, {0x743, 1, 1, 1})
	DMember(bool)                                      bPlayerIsFalling                                            OFFSET(get<bool>, {0x743, 1, 1, 2})
	DMember(bool)                                      bPlayerIsJumping                                            OFFSET(get<bool>, {0x743, 1, 1, 3})
	DMember(bool)                                      bPlayerIsForceDive                                          OFFSET(get<bool>, {0x743, 1, 1, 4})
	DMember(bool)                                      bPlayerIsOnAscender                                         OFFSET(get<bool>, {0x743, 1, 1, 5})
	DMember(bool)                                      bPlayerIsOnGrindRail                                        OFFSET(get<bool>, {0x743, 1, 1, 6})
	DMember(bool)                                      bPlayerIsLeapInterruptible                                  OFFSET(get<bool>, {0x743, 1, 1, 7})
	DMember(bool)                                      bPlayerIsPlayDiveHitToIdle                                  OFFSET(get<bool>, {0x744, 1, 1, 0})
	DMember(bool)                                      bPlayerIsPlayLandAdditive                                   OFFSET(get<bool>, {0x744, 1, 1, 1})
	DMember(bool)                                      bPlayerIsSliding                                            OFFSET(get<bool>, {0x744, 1, 1, 2})
	DMember(bool)                                      bPlayerIsSurfaceSwimming                                    OFFSET(get<bool>, {0x744, 1, 1, 3})
	DMember(bool)                                      bPlayerIsTacticalJump                                       OFFSET(get<bool>, {0x744, 1, 1, 4})
	DMember(bool)                                      bPlayerIsTacticalSprint                                     OFFSET(get<bool>, {0x744, 1, 1, 5})
	DMember(bool)                                      bPlayerIsWingReplenish                                      OFFSET(get<bool>, {0x744, 1, 1, 6})
	DMember(bool)                                      bPlayerIsWingLeaping                                        OFFSET(get<bool>, {0x744, 1, 1, 7})
	DMember(bool)                                      bPlayerIsWingsBoosting                                      OFFSET(get<bool>, {0x745, 1, 1, 0})
	DMember(bool)                                      bPlayerIsWingsCrashing                                      OFFSET(get<bool>, {0x745, 1, 1, 1})
	DMember(bool)                                      bPlayerIsWingsFlying                                        OFFSET(get<bool>, {0x745, 1, 1, 2})
	DMember(bool)                                      bPlayerIsZiplining                                          OFFSET(get<bool>, {0x745, 1, 1, 3})
	DMember(bool)                                      bTacticalJumpLoopToTacticalLand                             OFFSET(get<bool>, {0x745, 1, 1, 4})
	DMember(bool)                                      bToJumpStart                                                OFFSET(get<bool>, {0x745, 1, 1, 5})
};

/// Class /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase
/// Size: 0x0080 (0x000B48 - 0x000BC8)
class UFortGameplayAbility_SunroseWingsCrashBase : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3016;

public:
	DMember(float)                                     TelegraphUpdateIntervalSeconds                              OFFSET(get<float>, {0xB48, 4, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     TelegraphCollisionObjectTypes                               OFFSET(get<T>, {0xB50, 16, 0, 0})
	DMember(float)                                     TelegraphInterpSpeed                                        OFFSET(get<float>, {0xB60, 4, 0, 0})
	DMember(float)                                     CrashWindupDuration                                         OFFSET(get<float>, {0xB90, 4, 0, 0})
	DMember(float)                                     CrashLookPitchMin                                           OFFSET(get<float>, {0xB94, 4, 0, 0})
	DMember(float)                                     CrashLookPitchMax                                           OFFSET(get<float>, {0xB98, 4, 0, 0})
	DMember(float)                                     TelegraphTraceStartDist                                     OFFSET(get<float>, {0xB9C, 4, 0, 0})
	DMember(float)                                     TelegraphTraceEndDist                                       OFFSET(get<float>, {0xBA0, 4, 0, 0})
	CMember(class UClass*)                             TelegraphActorClass                                         OFFSET(get<T>, {0xBA8, 8, 0, 0})
	CMember(class AActor*)                             TelegraphActor                                              OFFSET(get<T>, {0xBB0, 8, 0, 0})
	CMember(class UFXSystemAsset*)                     TelegraphFXSystemAsset                                      OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(class UFXSystemComponent*)                 TelegraphNS                                                 OFFSET(get<T>, {0xBC0, 8, 0, 0})


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase.UpdateTelegraph
	// void UpdateTelegraph();                                                                                                  // [0xb2980cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase.EndTelegraph
	// void EndTelegraph();                                                                                                     // [0xb2973d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase.BeginTelegraph
	// void BeginTelegraph();                                                                                                   // [0xb297188] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SunRoseFlyingRuntime.FlyingStatusConfig
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFlyingStatusConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EWingedFlyingStatus)                       Status                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FScalableFloat)                            InitialEnergyCost                                           OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FScalableFloat)                            CooldownDuration                                            OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	SMember(FScalableFloat)                            OnGoingEnergyCost                                           OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FScalableFloat)                            EndOnEmptyEnergy                                            OFFSET(getStruct<T>, {0x88, 40, 0, 0})
};

/// Struct /Script/SunRoseFlyingRuntime.FortMovementMode_WingedFlyingRuntimeData
/// Size: 0x0088 (0x000050 - 0x0000D8)
class FFortMovementMode_WingedFlyingRuntimeData : public FFortMovementMode_FlyingRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bIsStartingFlying                                           OFFSET(get<bool>, {0x52, 1, 0, 0})
	CMember(EWingedFlyingStatus)                       FlyingStatus                                                OFFSET(get<T>, {0x53, 1, 0, 0})
	DMember(float)                                     CurrentHeightAboveWorld                                     OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     InterpolatedHeightAboveWorld                                OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     SpeedMultiplierFromForwardInput                             OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     InterpolatedYInput                                          OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FVector2D)                                 InterpolatedCrashInput                                      OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	DMember(float)                                     FlyingEnergy                                                OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Struct /Script/SunRoseFlyingRuntime.FortMovementMode_WingedFlyingCreationData
/// Size: 0x0008 (0x000028 - 0x000030)
class FFortMovementMode_WingedFlyingCreationData : public FFortMovementMode_FlyingCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     FlyingEnergy                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bConsumeExtraLeapEnergy                                     OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Enum /Script/SunRoseFlyingRuntime.EWingedFlyingStatus
/// Size: 0x07
enum class EWingedFlyingStatus : uint8_t
{
	EWingedFlyingStatus__Default                                                     = 0,
	EWingedFlyingStatus__Boosting                                                    = 1,
	EWingedFlyingStatus__Ascending                                                   = 2,
	EWingedFlyingStatus__Crashing                                                    = 4,
	EWingedFlyingStatus__DodgingLeft                                                 = 8,
	EWingedFlyingStatus__DodgingRight                                                = 16,
	EWingedFlyingStatus__EWingedFlyingStatus_MAX                                     = 17
};

