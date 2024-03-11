
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FlyingCodeRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

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

/// Class /Script/SunRoseFlyingRuntime.AFortGameplayCueNotifyLoop_SunroseFlying
/// Size: 0x0040 (0x0009B0 - 0x0009F0)
class AAFortGameplayCueNotifyLoop_SunroseFlying : public AFortGameplayCueNotify_Loop
{ 
public:
	FName                                              IsAscendingParamName;                                       // 0x09B0   (0x0004)  
	FName                                              IsFlappingParamName;                                        // 0x09B4   (0x0004)  
	FName                                              FlappingAlphaParamName;                                     // 0x09B8   (0x0004)  
	FName                                              IsRollingParamName;                                         // 0x09BC   (0x0004)  
	FName                                              IsBoostingParamName;                                        // 0x09C0   (0x0004)  
	FName                                              IsDivingParamName;                                          // 0x09C4   (0x0004)  
	FName                                              PitchParamName;                                             // 0x09C8   (0x0004)  
	FName                                              RollParamName;                                              // 0x09CC   (0x0004)  
	FName                                              SpeedParamName;                                             // 0x09D0   (0x0004)  
	FName                                              IsSkimmingParamName;                                        // 0x09D4   (0x0004)  
	FName                                              AltitudeInterpParamName;                                    // 0x09D8   (0x0004)  
	FFloatRange                                        HeightRange;                                                // 0x09DC   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x09EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.AFortGameplayCueNotifyLoop_SunroseFlying.SetFlappingParameters
	// void SetFlappingParameters(class UFXSystemComponent* FlyingTrailFX, TArray<UAudioComponent*>& AudioComponents, class AFortPlayerPawn* PlayerPawn, float FlappingAlpha, float RollCombined, float RollingAlpha, float PitchAlpha, bool bIsBoosting, bool bIsAscending, bool bAllowWingFlap, bool bIsSkimming, float Speed, bool bIsDiving, float CurrentHeight); // [0x2d7c370] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/SunRoseFlyingRuntime.FortGameplayCueNotifyLoop_WingsSkimming
/// Size: 0x0028 (0x0009B0 - 0x0009D8)
class AFortGameplayCueNotifyLoop_WingsSkimming : public AFortGameplayCueNotify_Loop
{ 
public:
	SDK_UNDEFINED(8,15666) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(WingsSkeletalMesh);                  // 0x09B0   (0x0008)  
	SDK_UNDEFINED(8,15667) /* TWeakObjectPtr<UFXSystemComponent*> */ __um(SkimFX);                                 // 0x09B8   (0x0008)  
	SDK_UNDEFINED(8,15668) /* TWeakObjectPtr<UAudioComponent*> */ __um(SkimAudioComponent);                        // 0x09C0   (0x0008)  
	SDK_UNDEFINED(8,15669) /* TWeakObjectPtr<USoundBase*> */ __um(SkimLoopSound);                                  // 0x09C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x09D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortGameplayCueNotifyLoop_WingsSkimming.ShowWingFX
	// void ShowWingFX(FVector SkimLocationLeft, FVector SkimNormalLeft, float SkimDistanceLeft, FVector SkimLocationRight, FVector SkimNormalRight, float SkimDistanceRight); // [0x4c34d10] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/SunRoseFlyingRuntime.FortCameraModifier_SunroseWingsFlying
/// Size: 0x02E0 (0x000090 - 0x000370)
class UFortCameraModifier_SunroseWingsFlying : public UFortCameraModifier_Custom
{ 
public:
	class UClass*                                      NativeFlyingPawnClass;                                      // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0098   (0x0010)  MISSED
	FScalableFloat                                     NativeFlyingSpeedBase;                                      // 0x00A8   (0x0028)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D0   (0x0008)  MISSED
	FScalableFloat                                     NativeFlyingSpeedAddedAtMaxDistanceFromCeilingHeight;       // 0x00D8   (0x0028)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0100   (0x0008)  MISSED
	FScalableFloat                                     NativeFlyingDownZSpeedAddedWhileFalling;                    // 0x0108   (0x0028)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0130   (0x0008)  MISSED
	FScalableFloat                                     NativeFlyingHeightDecayMin;                                 // 0x0138   (0x0028)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0160   (0x0008)  MISSED
	FScalableFloat                                     NativePreCrashWindupDuration;                               // 0x0168   (0x0028)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x0190   (0x0008)  MISSED
	FScalableFloat                                     NativeFlyingInputWeightHorizontal;                          // 0x0198   (0x0028)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x01C0   (0x0008)  MISSED
	FScalableFloat                                     NativeFlyingInputWeightLookDirection;                       // 0x01C8   (0x0028)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x01F0   (0x0004)  MISSED
	float                                              NativeDeltaFOVForwardOffsetExponent;                        // 0x01F4   (0x0004)  
	float                                              NativeFOVModeSwapInterpRate;                                // 0x01F8   (0x0004)  
	float                                              NativeMaxFOVOffset;                                         // 0x01FC   (0x0004)  
	float                                              NativeRotationRateForMaxRightOffset;                        // 0x0200   (0x0004)  
	float                                              NativeRightOffsetMaxCombinedStrafeTurn;                     // 0x0204   (0x0004)  
	float                                              NativeRightOffsetStrafe;                                    // 0x0208   (0x0004)  
	float                                              NativeRightOffsetTurn;                                      // 0x020C   (0x0004)  
	float                                              NativeRightOffsetDodge;                                     // 0x0210   (0x0004)  
	float                                              NativeForwardOffsetDistanceCrashingFinal;                   // 0x0214   (0x0004)  
	float                                              NativeForwardOffsetDistanceForceCrashingPhase1;             // 0x0218   (0x0004)  
	float                                              NativeForwardOffsetDistanceCrashingPhase1;                  // 0x021C   (0x0004)  
	float                                              NativeForwardOffsetDistanceCrashingPhase2;                  // 0x0220   (0x0004)  
	float                                              NativeForwardOffsetCrashingTimeAfterWindupToEnterFinalPhase; // 0x0224   (0x0004)  
	float                                              NativeForwardOffsetInterpSpeedCrashingPhase1;               // 0x0228   (0x0004)  
	float                                              NativeForwardOffsetInterpSpeedCrashingPhase2;               // 0x022C   (0x0004)  
	float                                              NativeForwardOffsetInterpSpeedCrashingFinal;                // 0x0230   (0x0004)  
	FGameplayTag                                       NativeTagForceCrash;                                        // 0x0234   (0x0004)  
	float                                              NativeFOVInterpSpeed;                                       // 0x0238   (0x0004)  
	float                                              NativeMinFOVOffsetFast;                                     // 0x023C   (0x0004)  
	float                                              NativeMinFOVOffsetSlow;                                     // 0x0240   (0x0004)  
	float                                              NativeMaxFOVOffsetSlow;                                     // 0x0244   (0x0004)  
	float                                              NativeLateBoostStartTime;                                   // 0x0248   (0x0004)  
	float                                              NativeTimeSinceLastBoostLateMin;                            // 0x024C   (0x0004)  
	float                                              NativeTimeSinceLastBoostLateMax;                            // 0x0250   (0x0004)  
	float                                              NativeFOVOffsetLateMin;                                     // 0x0254   (0x0004)  
	float                                              NativeFOVOffsetLateMax;                                     // 0x0258   (0x0004)  
	float                                              NativeTimeSinceEarlyBoostLateMin;                           // 0x025C   (0x0004)  
	float                                              NativeTimeSinceLastBoostEarlyMax;                           // 0x0260   (0x0004)  
	float                                              NativeFOVOffsetEarlyMin;                                    // 0x0264   (0x0004)  
	float                                              NativeFOVOffsetEarlyMax;                                    // 0x0268   (0x0004)  
	float                                              NativeFOVOffsetModeMin;                                     // 0x026C   (0x0004)  
	float                                              NativeCrashingFOVInterpSpeed;                               // 0x0270   (0x0004)  
	float                                              NativeFOVOffsetWindup;                                      // 0x0274   (0x0004)  
	float                                              NativePositiveFlyingMoveActionXFOVInterpSpeed;              // 0x0278   (0x0004)  
	float                                              NativeNegativeFlyingMoveActionXFOVInterpSpeed;              // 0x027C   (0x0004)  
	float                                              NativeFlyingMoveActionPositiveMin;                          // 0x0280   (0x0004)  
	float                                              NativeFlyingMoveActionPositiveMax;                          // 0x0284   (0x0004)  
	float                                              NativeFlyingMoveActionPositiveFOVMin;                       // 0x0288   (0x0004)  
	float                                              NativeFlyingMoveActionPositiveFOVMax;                       // 0x028C   (0x0004)  
	float                                              NativeFlyingMoveActionNegativeMin;                          // 0x0290   (0x0004)  
	float                                              NativeFlyingMoveActionNegativeMax;                          // 0x0294   (0x0004)  
	float                                              NativeFlyingMoveActionNegativeFOVMin;                       // 0x0298   (0x0004)  
	float                                              NativeFlyingMoveActionNegativeFOVMax;                       // 0x029C   (0x0004)  
	float                                              NativeDefaultFOVInterpSpeed;                                // 0x02A0   (0x0004)  
	float                                              NativePositiveFOVMax;                                       // 0x02A4   (0x0004)  
	float                                              NativeLocationOffsetForPositiveFOVMax;                      // 0x02A8   (0x0004)  
	float                                              NativeNegativeFOVMax;                                       // 0x02AC   (0x0004)  
	float                                              NativeLocationOffsetForNegativeFOVMax;                      // 0x02B0   (0x0004)  
	float                                              NativeClampedDeltaFOVInterpSpeed;                           // 0x02B4   (0x0004)  
	float                                              NativeShortTimeSinceLastBoostStart;                         // 0x02B8   (0x0004)  
	float                                              NativeLongTimeSinceLastBoostStart;                          // 0x02BC   (0x0004)  
	float                                              NativeLongOrShortBoostTimeInterpSpeed;                      // 0x02C0   (0x0004)  
	float                                              NativeMediumBoostTimeInterpSpeed;                           // 0x02C4   (0x0004)  
	float                                              NativeForwardLocationOffsetTargetMax;                       // 0x02C8   (0x0004)  
	float                                              NativeForwardLocationOffsetFromDownZVelocityInterpSpeed;    // 0x02CC   (0x0004)  
	float                                              NativeDodgeStartDuration;                                   // 0x02D0   (0x0004)  
	float                                              NativeStrafeFOVOffsetMin;                                   // 0x02D4   (0x0004)  
	float                                              NativeStrafeFOVOffsetMax;                                   // 0x02D8   (0x0004)  
	float                                              NativeStrafeFOVMultiplierMin;                               // 0x02DC   (0x0004)  
	float                                              NativeStrafeFOVMultiplierMax;                               // 0x02E0   (0x0004)  
	float                                              NativeViewLocationOffsetRightInterpSpeedCrashing;           // 0x02E4   (0x0004)  
	float                                              NativeDodgeStartDurationForInterpSpeed;                     // 0x02E8   (0x0004)  
	float                                              NativeViewLocationOffsetRightInterpSpeedStartingDodge;      // 0x02EC   (0x0004)  
	float                                              NativeViewLocationOffsetRightInterpSpeedMostlyStrafing;     // 0x02F0   (0x0004)  
	float                                              NativeViewLocationOffsetRightInterpSpeedMostlyTurning;      // 0x02F4   (0x0004)  
	unsigned char                                      UnknownData08_6[0x78];                                      // 0x02F8   (0x0078)  MISSED


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortCameraModifier_SunroseWingsFlying.UseNativeCalculation
	// bool UseNativeCalculation();                                                                                          // [0x355f34c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SunRoseFlyingRuntime.FortContextualTutorialDefinition_WingedFlying
/// Size: 0x0028 (0x0001A8 - 0x0001D0)
class UFortContextualTutorialDefinition_WingedFlying : public UUFortContextualTutorialDefinition_GameplayEvent
{ 
public:
	FScalableFloat                                     MinTimeBeforeCompletion;                                    // 0x01A8   (0x0028)  
};

/// Class /Script/SunRoseFlyingRuntime.FortContextualTutorial_WingedFlying
/// Size: 0x0010 (0x000170 - 0x000180)
class UFortContextualTutorial_WingedFlying : public UFortContextualTutorial_GameplayEvent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0170   (0x0010)  MISSED
};

/// Struct /Script/SunRoseFlyingRuntime.FlyingStatusConfig
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FFlyingStatusConfig
{ 
	EWingedFlyingStatus                                Status;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FScalableFloat                                     InitialEnergyCost;                                          // 0x0008   (0x0028)  
	FGameplayTag                                       CooldownTag;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FScalableFloat                                     CooldownDuration;                                           // 0x0038   (0x0028)  
	FScalableFloat                                     OnGoingEnergyCost;                                          // 0x0060   (0x0028)  
	FScalableFloat                                     EndOnEmptyEnergy;                                           // 0x0088   (0x0028)  
};

/// Class /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged
/// Size: 0x1120 (0x000120 - 0x001240)
class UFortMovementMode_ExtLogicFlyingWinged : public UFortMovementMode_ExtLogicFlying
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0120   (0x0010)  MISSED
	TArray<FFlyingStatusConfig>                        FlyingStatusConfigs;                                        // 0x0130   (0x0010)  
	class UClass*                                      FlyingThroughCeilingGE;                                     // 0x0140   (0x0008)  
	FGameplayTag                                       FlyingThroughCeilingTag;                                    // 0x0148   (0x0004)  
	FGameplayTag                                       EnergyDrainCueTag;                                          // 0x014C   (0x0004)  
	FGameplayTag                                       CrashEnabledCueTag;                                         // 0x0150   (0x0004)  
	FGameplayTag                                       HitBonkCueTag;                                              // 0x0154   (0x0004)  
	FGameplayTag                                       EventTagToTriggerWhenMiniBoosting;                          // 0x0158   (0x0004)  
	FGameplayTag                                       EventTagToTriggerCrashImpact;                               // 0x015C   (0x0004)  
	FGameplayTagContainer                              TagsToPreventLowFrictionLanding;                            // 0x0160   (0x0020)  
	class UClass*                                      LowFrictionLandingGE;                                       // 0x0180   (0x0008)  
	FGameplayTag                                       TagToSetByCallerDuration;                                   // 0x0188   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	FScalableFloat                                     BaseFlyingCost;                                             // 0x0190   (0x0028)  
	int32_t                                            FlyingStatusToStopBaseCost;                                 // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	FScalableFloat                                     ExtraLeapCrashCost;                                         // 0x01C0   (0x0028)  
	FScalableFloat                                     HeightIncreasePer1Cost;                                     // 0x01E8   (0x0028)  
	FScalableFloat                                     DodgeSpeedMin;                                              // 0x0210   (0x0028)  
	FScalableFloat                                     DodgeSpeedMax;                                              // 0x0238   (0x0028)  
	FScalableFloat                                     DodgeSpeedDecayInitialDelay;                                // 0x0260   (0x0028)  
	FScalableFloat                                     DodgeSpeedRampExponent;                                     // 0x0288   (0x0028)  
	FScalableFloat                                     DodgeSpeedDecayExponent;                                    // 0x02B0   (0x0028)  
	FScalableFloat                                     DodgeDuration;                                              // 0x02D8   (0x0028)  
	FScalableFloat                                     StartedFlyingTransitionDuration;                            // 0x0300   (0x0028)  
	FScalableFloat                                     StartedFlyingSpeedBoundForInterpMin;                        // 0x0328   (0x0028)  
	FScalableFloat                                     StartedFlyingSpeedBoundForInterpMax;                        // 0x0350   (0x0028)  
	FScalableFloat                                     StartedFlyingVelocityInterpSpeedAtMinSpeed;                 // 0x0378   (0x0028)  
	FScalableFloat                                     StartedFlyingVelocityInterpSpeedAtMaxSpeed;                 // 0x03A0   (0x0028)  
	FScalableFloat                                     FlyingLookPitchClampMin;                                    // 0x03C8   (0x0028)  
	FScalableFloat                                     FlyingLookPitchClampMax;                                    // 0x03F0   (0x0028)  
	FScalableFloat                                     DefaultLookPitchAngleOffset;                                // 0x0418   (0x0028)  
	FScalableFloat                                     CrashingLookPitchClampMin;                                  // 0x0440   (0x0028)  
	FScalableFloat                                     CrashingLookPitchClampMax;                                  // 0x0468   (0x0028)  
	FScalableFloat                                     CrashingInputWeightLookDirection;                           // 0x0490   (0x0028)  
	FScalableFloat                                     FlyingInputWeightLockDirection;                             // 0x04B8   (0x0028)  
	FScalableFloat                                     FlyingInputWeightHorizontal;                                // 0x04E0   (0x0028)  
	FScalableFloat                                     PitchInterpSpeedWhileCrashing;                              // 0x0508   (0x0028)  
	FScalableFloat                                     PitchInterpSpeedAtBaseSpeed;                                // 0x0530   (0x0028)  
	FScalableFloat                                     PitchInterpSpeedAtMaxLateralSpeed;                          // 0x0558   (0x0028)  
	FScalableFloat                                     PitchInterpSpeedAtMaxTotalSpeed;                            // 0x0580   (0x0028)  
	FScalableFloat                                     YawInterpSpeedWhileCrashing;                                // 0x05A8   (0x0028)  
	FScalableFloat                                     YawInterpSpeedAtMinBrakeSpeed;                              // 0x05D0   (0x0028)  
	FScalableFloat                                     YawInterpSpeedAtBaseSpeed;                                  // 0x05F8   (0x0028)  
	FScalableFloat                                     YawInterpSpeedAtMaxLateralSpeed;                            // 0x0620   (0x0028)  
	FScalableFloat                                     InputInterpSpeedHorizontal;                                 // 0x0648   (0x0028)  
	FScalableFloat                                     CrashingMovementInterpSpeed;                                // 0x0670   (0x0028)  
	FScalableFloat                                     AscendingLookPitchClampMin;                                 // 0x0698   (0x0028)  
	FScalableFloat                                     CeilingHeightIncreaseSpeedWhileAscendingMin;                // 0x06C0   (0x0028)  
	FScalableFloat                                     CeilingHeightIncreaseSpeedWhileAscendingMax;                // 0x06E8   (0x0028)  
	FScalableFloat                                     MaxCeilingHeightAddLimitFromAscend;                         // 0x0710   (0x0028)  
	FScalableFloat                                     AscendingSpeedZUpAddedMin;                                  // 0x0738   (0x0028)  
	FScalableFloat                                     AscendingSpeedZUpAddedMax;                                  // 0x0760   (0x0028)  
	FScalableFloat                                     MaxCeilingHeightAddLimitFromBoost;                          // 0x0788   (0x0028)  
	FScalableFloat                                     CeilingHeightIncreaseSpeedWhileBoostingMin;                 // 0x07B0   (0x0028)  
	FScalableFloat                                     CeilingHeightIncreaseSpeedWhileBoostingMax;                 // 0x07D8   (0x0028)  
	FScalableFloat                                     PercentMaxLookPitchForMaxBoostCeilingHeightIncrease;        // 0x0800   (0x0028)  
	FScalableFloat                                     PreCrashWindUpDuration;                                     // 0x0828   (0x0028)  
	FScalableFloat                                     CrashingSpeedBase;                                          // 0x0850   (0x0028)  
	FScalableFloat                                     CrashingSpeedAddedAtMaxDistanceFromCeilingHeight;           // 0x0878   (0x0028)  
	FScalableFloat                                     DistanceFromCeilingHeightForMaxCrashingSpeedAdded;          // 0x08A0   (0x0028)  
	FScalableFloat                                     CrashingLookPitchClampFinalMax;                             // 0x08C8   (0x0028)  
	FScalableFloat                                     CrashingLookPitchClampDelayBeforeLerpToFinalMax;            // 0x08F0   (0x0028)  
	FScalableFloat                                     CrashingLookPitchClampDurationToLerpToFinalMax;             // 0x0918   (0x0028)  
	FScalableFloat                                     PreCrashingSpeedBase;                                       // 0x0940   (0x0028)  
	FScalableFloat                                     PreCrashingInterpToSpeedMod;                                // 0x0968   (0x0028)  
	FScalableFloat                                     DistanceFromCeilingHeightForCrashMode;                      // 0x0990   (0x0028)  
	FScalableFloat                                     MinAngleToPreventCrash;                                     // 0x09B8   (0x0028)  
	FScalableFloat                                     CrashImpactIgnoreWaterDuration;                             // 0x09E0   (0x0028)  
	FScalableFloat                                     MaxAngleForLowFrictionLanding;                              // 0x0A08   (0x0028)  
	FScalableFloat                                     LowFrictionDurationMin;                                     // 0x0A30   (0x0028)  
	FScalableFloat                                     LowFrictionDurationMax;                                     // 0x0A58   (0x0028)  
	FScalableFloat                                     LowFrictionDurationScalar;                                  // 0x0A80   (0x0028)  
	FScalableFloat                                     SpeedForMinLowFrictionMult;                                 // 0x0AA8   (0x0028)  
	FScalableFloat                                     SpeedForMaxLowFrictionMult;                                 // 0x0AD0   (0x0028)  
	FScalableFloat                                     LowFrictionMultFromSpeedMin;                                // 0x0AF8   (0x0028)  
	FScalableFloat                                     LowFrictionMultFromSpeedMax;                                // 0x0B20   (0x0028)  
	FScalableFloat                                     ImpactAngleForMaxLowFrictionDuration;                       // 0x0B48   (0x0028)  
	FScalableFloat                                     ImpactAngleForMinLowFrictionDuration;                       // 0x0B70   (0x0028)  
	FScalableFloat                                     LowFrictionMultFromImpactAngleMax;                          // 0x0B98   (0x0028)  
	FScalableFloat                                     LowFrictionMultFromImpactAngleMin;                          // 0x0BC0   (0x0028)  
	FScalableFloat                                     FlyingSpeedBase;                                            // 0x0BE8   (0x0028)  
	FScalableFloat                                     FlyingSpeedAddedAtMaxDistanceFromCeilingHeight;             // 0x0C10   (0x0028)  
	FScalableFloat                                     FlyingDownZSpeedAddedWhileFalling;                          // 0x0C38   (0x0028)  
	FScalableFloat                                     DistanceFromCeilingHeightForMaxFlyingSpeedAdded;            // 0x0C60   (0x0028)  
	FScalableFloat                                     AirBrakingDefaultMultiMin;                                  // 0x0C88   (0x0028)  
	FScalableFloat                                     AirBrakingDownSpeedMultiMin;                                // 0x0CB0   (0x0028)  
	FScalableFloat                                     ForwardInputThresholdToTriggerMiniBoost;                    // 0x0CD8   (0x0028)  
	FScalableFloat                                     PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput;  // 0x0D00   (0x0028)  
	FScalableFloat                                     CeilingHeightIncreaseSpeedWhileHoldingForwardMin;           // 0x0D28   (0x0028)  
	FScalableFloat                                     CeilingHeightIncreaseSpeedWhileHoldingForwardMax;           // 0x0D50   (0x0028)  
	FScalableFloat                                     CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight; // 0x0D78   (0x0028)  
	FScalableFloat                                     CeilingHeightMinDecreaseSpeedWhileFlying;                   // 0x0DA0   (0x0028)  
	FScalableFloat                                     CeilingHeightMinDecreaseSpeedWhileBoosting;                 // 0x0DC8   (0x0028)  
	FScalableFloat                                     CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight; // 0x0DF0   (0x0028)  
	FScalableFloat                                     CeilingHeightMinDecreaseSpeedWhileAscending;                // 0x0E18   (0x0028)  
	FScalableFloat                                     CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight; // 0x0E40   (0x0028)  
	FScalableFloat                                     HeightAboveWorldInterpSpeedIncreasing;                      // 0x0E68   (0x0028)  
	FScalableFloat                                     HeightAboveWorldInterpSpeedDecreasing;                      // 0x0E90   (0x0028)  
	FScalableFloat                                     HeightForMinAddedCeilingDecay;                              // 0x0EB8   (0x0028)  
	FScalableFloat                                     HeightForMaxAddedCeilingDecay;                              // 0x0EE0   (0x0028)  
	FScalableFloat                                     MaxAddedCeilingDecayFromHeight;                             // 0x0F08   (0x0028)  
	FScalableFloat                                     EnergyThresholdForAddedCeilingDecay;                        // 0x0F30   (0x0028)  
	FScalableFloat                                     MaxAddedCeilingDecayFromEnergy;                             // 0x0F58   (0x0028)  
	FScalableFloat                                     GlobalCeilingHeightMax;                                     // 0x0F80   (0x0028)  
	FScalableFloat                                     GlobalCeilingHeightDiminishingReturnsExponent;              // 0x0FA8   (0x0028)  
	FScalableFloat                                     GlobalCeilingHeightDiminishingReturnsRange;                 // 0x0FD0   (0x0028)  
	FScalableFloat                                     SkimmingMinRequiredAngleToSurface;                          // 0x0FF8   (0x0028)  
	FScalableFloat                                     SkimmingMinRequiredVelocityAlongSurface;                    // 0x1020   (0x0028)  
	FScalableFloat                                     SkimmingMinRequiredHeightAboveWorld;                        // 0x1048   (0x0028)  
	FScalableFloat                                     MaxAngleForGroundHit;                                       // 0x1070   (0x0028)  
	FScalableFloat                                     VelocityClampOnBonk;                                        // 0x1098   (0x0028)  
	unsigned char                                      UnknownData03_6[0x180];                                     // 0x10C0   (0x0180)  MISSED


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.UpdateForRotation
	// void UpdateForRotation(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, float DeltaTime, FRotator& OutNewMoveOrientation); // [0x27baeec] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.UpdateForMovement
	// void UpdateForMovement(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, float DeltaTime, FVector& InVelocity, FVector& InAcceleration, FVector& OutNewVelocity, FVector& OutNewAcceleration, FFortMovementMode_WingedFlyingRuntimeData& OutNewMoveStatus); // [0x27bb834] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.UpdateForHitResponse
	// void UpdateForHitResponse(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, float DeltaTime, FVector& InVelocity, FVector& OldPosition, FVector& Adjustment, FHitResult& Hit, EFortMovementModeExt_PhysUpdateResult& OutHitResult, bool& bOutWantToSlide); // [0xa3ac7d4] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.IsClientReplaying
	// bool IsClientReplaying();                                                                                             // [0xa3ac780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.HandleFlyingStatusChanged
	// void HandleFlyingStatusChanged(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, EWingedFlyingStatus NewStatus, bool bIsActive, FGameplayTag& FailureTag); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.HandleFlyingStatusActivationFailed
	// void HandleFlyingStatusActivationFailed(EWingedFlyingStatus FailedStatus, FGameplayTag& FailureTag);                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.CanStartFlyingStatus
	// void CanStartFlyingStatus(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, EWingedFlyingStatus StatusToStart, bool& bOutCanStart, FGameplayTag& OutFailureTag); // [0xa3ac4dc] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.CanEndFlyingStatus
	// bool CanEndFlyingStatus(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, EWingedFlyingStatus StatusToEnd, float ElapsedDuration); // [0xa3ac258] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged.CanContinueFlyingStatus
	// void CanContinueFlyingStatus(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus, EWingedFlyingStatus StatusToContinue, float ElapsedDuration, bool& bOutCanContinue, FGameplayTag& OutFailureTag); // [0xa3abedc] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying
/// Size: 0x0170 (0x0000A8 - 0x000218)
class UFortPawnComponent_WingedFlying : public UFortPawnComponent
{ 
public:
	EWingedFlyingStatus                                FlyingStatus;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              ForwardSpeed;                                               // 0x00AC   (0x0004)  
	float                                              AddedDownZVelocity;                                         // 0x00B0   (0x0004)  
	float                                              NativeCurrentHeightAboveWorld;                              // 0x00B4   (0x0004)  
	FVector2D                                          FlyingMoveActionValue;                                      // 0x00B8   (0x0010)  
	bool                                               bIntendsToBoost;                                            // 0x00C8   (0x0001)  
	bool                                               bIntendsToAscend;                                           // 0x00C9   (0x0001)  
	bool                                               bIntendsToCrash;                                            // 0x00CA   (0x0001)  
	bool                                               bIntendsToRollLeft;                                         // 0x00CB   (0x0001)  
	bool                                               bIntendsToRollRight;                                        // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	class UClass*                                      FlyingMovementModeExtension;                                // 0x00D0   (0x0008)  
	FGameplayTagContainer                              TagsToEnableSkimmingCheck;                                  // 0x00D8   (0x0020)  
	SDK_UNDEFINED(1,15670) /* TEnumAsByte<ECollisionChannel> */ __um(SkimCheckTraceChannel);                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	FName                                              SkimCheckLeftStartSocket;                                   // 0x00FC   (0x0004)  
	FName                                              SkimCheckLeftEndSocket;                                     // 0x0100   (0x0004)  
	FName                                              SkimCheckRightStartSocket;                                  // 0x0104   (0x0004)  
	FName                                              SkimCheckRightEndSocket;                                    // 0x0108   (0x0004)  
	FGameplayTag                                       TagToEnableHeightCheck;                                     // 0x010C   (0x0004)  
	FScalableFloat                                     HeightCheckInterval;                                        // 0x0110   (0x0028)  
	FScalableFloat                                     HeightCheckTraceLength;                                     // 0x0138   (0x0028)  
	unsigned char                                      UnknownData03_6[0xB8];                                      // 0x0160   (0x00B8)  MISSED


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.StartFlying
	// void StartFlying(FFortMovementMode_WingedFlyingCreationData& CreationData);                                           // [0xa3b059c] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleSkimmingTagsChange
	// void HandleSkimmingTagsChange(FGameplayTag tag, int32_t NewCount);                                                    // [0xa3b0194] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleRightSkimCheckComplete
	// void HandleRightSkimCheckComplete(FHitResult& HitResult);                                                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0x2a2ece4] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleLeftSkimCheckComplete
	// void HandleLeftSkimCheckComplete(FHitResult& HitResult);                                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleHeightCheckTagChange
	// void HandleHeightCheckTagChange(FGameplayTag tag, int32_t NewCount);                                                  // [0xa3aff88] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleForwardSpeedUpdated
	// void HandleForwardSpeedUpdated(float NewForwardSpeed);                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleFlyingMoveStatusUpdated
	// void HandleFlyingMoveStatusUpdated(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus);                            // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleCurrentHeightUpdated
	// void HandleCurrentHeightUpdated(float NewCurrentHeight);                                                              // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.HandleAddedDownZVelocityUpdated
	// void HandleAddedDownZVelocityUpdated(float NewAddedDownZVelocity);                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying.EndFlying
	// void EndFlying();                                                                                                     // [0xa3afa4c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SunRoseFlyingRuntime.FortWeaponWings
/// Size: 0x0100 (0x001550 - 0x001650)
class AFortWeaponWings : public AFortWeapon
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x1550   (0x0020)  MISSED
	FGameplayTagContainer                              OwnedGameplayTags;                                          // 0x1570   (0x0020)  
	class UFortAbilitySystemComponent*                 AbilitySystemComponent;                                     // 0x1590   (0x0008)  
	class UFortHealthSet*                              HealthSet;                                                  // 0x1598   (0x0008)  
	SDK_UNDEFINED(1,15671) /* TEnumAsByte<EPhysicalSurface> */ __um(PrimarySurfaceType);                           // 0x15A0   (0x0001)  
	SDK_UNDEFINED(1,15672) /* TEnumAsByte<EFortBaseWeaponDamage> */ __um(WeaponResponseType);                      // 0x15A1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x15A2   (0x0006)  MISSED
	class UClass*                                      DamageGameplayEffectClass;                                  // 0x15A8   (0x0008)  
	FGameplayTag                                       SetByCallerDamageTag;                                       // 0x15B0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x15B4   (0x0004)  MISSED
	FGameplayTagContainer                              TagsToPreventReload;                                        // 0x15B8   (0x0020)  
	FScalableFloat                                     ServerMeshRelativeRotationRoll;                             // 0x15D8   (0x0028)  
	FScalableFloat                                     ServerMeshRelativeLocationY;                                // 0x1600   (0x0028)  
	FScalableFloat                                     ServerMeshRelativeLocationZ;                                // 0x1628   (0x0028)  


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.TryResetADSInput
	// void TryResetADSInput(class AFortWeapon* Weapon);                                                                     // [0x4c37340] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.HandleWeaponAttachmentChanged
	// void HandleWeaponAttachmentChanged(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                      // [0x4c37250] Final|Native|Protected 
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.HandleSecondaryFirePressed
	// void HandleSecondaryFirePressed(class AFortWeapon* Weapon);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/SunRoseFlyingRuntime.FortWeaponWings.BP_ModifyIncomingDamage
	// void BP_ModifyIncomingDamage(float Damage, FGameplayTagContainer& DamageTags, FHitResult& DamageHit, class AController* EventInstigator, class AActor* DamageCauser, float& OutNewDamage); // [0x18a39e4] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortWingedFlyingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.TraceForWorldAndWater
	// void TraceForWorldAndWater(class AActor* PlayerPawn, FVector& TraceStart, FVector& TraceEnd, bool& bIsBlockingHit, FHitResult& ClosestHit); // [0x3749778] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.SetInputActionDisplayContext
	// void SetInputActionDisplayContext(class AFortPawn* PlayerPawn, class UFortInputMappingContext* InputMappingContext);  // [0xa3b03a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.GetFlyingStatusElapsedTime
	// float GetFlyingStatusElapsedTime(EWingedFlyingStatus FlyingStatus, FFortMovementMode_WingedFlyingRuntimeData& MoveStatus); // [0xa3afe98] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.GetFlyingDuration
	// float GetFlyingDuration(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus);                                       // [0xa3afdf4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.GetDodgeElapsedTime
	// float GetDodgeElapsedTime(FFortMovementMode_WingedFlyingRuntimeData& MoveStatus);                                     // [0xa3afd38] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.FlyingStatusRemoveFlags
	// void FlyingStatusRemoveFlags(EWingedFlyingStatus Status, int32_t FlagsToRemove, EWingedFlyingStatus& NewStatus);      // [0xa3afc38] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.FlyingStatusHasAnyFlags
	// bool FlyingStatusHasAnyFlags(EWingedFlyingStatus Status, int32_t Flags);                                              // [0x191445c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.FlyingStatusHasAllFlags
	// bool FlyingStatusHasAllFlags(EWingedFlyingStatus Status, int32_t Flags);                                              // [0xa3afb74] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.FlyingStatusAddFlags
	// void FlyingStatusAddFlags(EWingedFlyingStatus Status, int32_t FlagsToAdd, EWingedFlyingStatus& NewStatus);            // [0xa3afa74] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary.ClearInputActionDisplayContext
	// void ClearInputActionDisplayContext(class AFortPawn* PlayerPawn, class UFortInputMappingContext* InputMappingContext); // [0xa3af8b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SunRoseFlyingRuntime.SunRoseFlying_PlayerAnimInstance
/// Size: 0x0080 (0x001620 - 0x0016A0)
class USunRoseFlying_PlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
public:
	FGameplayTag                                       AscenderTag;                                                // 0x1620   (0x0004)  
	FGameplayTag                                       GrindRailsTag;                                              // 0x1624   (0x0004)  
	FGameplayTag                                       WingedFlightTag;                                            // 0x1628   (0x0004)  
	FGameplayTag                                       WingsForceCrashTag;                                         // 0x162C   (0x0004)  
	FGameplayTag                                       WingsLeapingTag;                                            // 0x1630   (0x0004)  
	float                                              CurrentHeightAboveWorld;                                    // 0x1634   (0x0004)  
	float                                              Fuel;                                                       // 0x1638   (0x0004)  
	float                                              GlidePitch;                                                 // 0x163C   (0x0004)  
	float                                              GlidePitchAlpha;                                            // 0x1640   (0x0004)  
	float                                              GlidePitchInterp;                                           // 0x1644   (0x0004)  
	float                                              GlidePitchTarget;                                           // 0x1648   (0x0004)  
	float                                              GlideRoll;                                                  // 0x164C   (0x0004)  
	float                                              GlideRollCombined;                                          // 0x1650   (0x0004)  
	float                                              GlideRollCombinedTarget;                                    // 0x1654   (0x0004)  
	float                                              GlideRollInterp;                                            // 0x1658   (0x0004)  
	float                                              GroundBlendTime;                                            // 0x165C   (0x0004)  
	float                                              pelvis;                                                     // 0x1660   (0x0004)  
	float                                              PitchAlpha;                                                 // 0x1664   (0x0004)  
	float                                              RollAlpha;                                                  // 0x1668   (0x0004)  
	float                                              SlowDownOrLandAlpha;                                        // 0x166C   (0x0004)  
	float                                              SlowDownOrLandTarget;                                       // 0x1670   (0x0004)  
	float                                              SlowSpeedAlpha;                                             // 0x1674   (0x0004)  
	float                                              YawAlpha;                                                   // 0x1678   (0x0004)  
	float                                              YawBlend;                                                   // 0x167C   (0x0004)  
	int32_t                                            RandomInteger;                                              // 0x1680   (0x0004)  
	bool                                               bIsAllowWingFlap : 1;                                       // 0x1684:0 (0x0001)  
	bool                                               bIsAscending : 1;                                           // 0x1684:1 (0x0001)  
	bool                                               bIsBoostStartEnd : 1;                                       // 0x1684:2 (0x0001)  
	bool                                               bIsDodgeLeft : 1;                                           // 0x1684:3 (0x0001)  
	bool                                               bIsDodgeRight : 1;                                          // 0x1684:4 (0x0001)  
	bool                                               bIsExtBoostEarly : 1;                                       // 0x1684:5 (0x0001)  
	bool                                               bIsFlyingStart : 1;                                         // 0x1684:6 (0x0001)  
	bool                                               bIsForceDive : 1;                                           // 0x1684:7 (0x0001)  
	bool                                               bIsLeapInterruptible : 1;                                   // 0x1685:0 (0x0001)  
	bool                                               bIsHighWithNoFuel : 1;                                      // 0x1685:1 (0x0001)  
	bool                                               bIsOnAscender : 1;                                          // 0x1685:2 (0x0001)  
	bool                                               bIsOnGrindRail : 1;                                         // 0x1685:3 (0x0001)  
	bool                                               bIsPlayDiveHitToIdle : 1;                                   // 0x1685:4 (0x0001)  
	bool                                               bIsPlayLandAdditive : 1;                                    // 0x1685:5 (0x0001)  
	bool                                               bIsWingLeaping : 1;                                         // 0x1685:6 (0x0001)  
	bool                                               bIsWingReplenish : 1;                                       // 0x1685:7 (0x0001)  
	bool                                               bIsWingsBoosting : 1;                                       // 0x1686:0 (0x0001)  
	bool                                               bIsWingsCrashing : 1;                                       // 0x1686:1 (0x0001)  
	bool                                               bIsWingsFlying : 1;                                         // 0x1686:2 (0x0001)  
	bool                                               bIsDiveStart : 1;                                           // 0x1686:3 (0x0001)  
	bool                                               bToBoosting : 1;                                            // 0x1686:4 (0x0001)  
	unsigned char                                      UnknownData00_6[0x19];                                      // 0x1687   (0x0019)  MISSED
};

/// Class /Script/SunRoseFlyingRuntime.SunRoseFlying_WingsAnimInstance
/// Size: 0x0060 (0x0006F0 - 0x000750)
class USunRoseFlying_WingsAnimInstance : public UFortItemLayerAnimInstance
{ 
public:
	FRotator                                           PlayerPawnRotationRate;                                     // 0x06F0   (0x0018)  
	float                                              PlayerCurrentHeightAboveWorld;                              // 0x0708   (0x0004)  
	float                                              PlayerFuel;                                                 // 0x070C   (0x0004)  
	float                                              PlayerGlidePitch;                                           // 0x0710   (0x0004)  
	float                                              PlayerGlidePitchAlpha;                                      // 0x0714   (0x0004)  
	float                                              PlayerGlideRoll;                                            // 0x0718   (0x0004)  
	float                                              PlayerGroundBlendTime;                                      // 0x071C   (0x0004)  
	float                                              PlayerGlideRollCombined;                                    // 0x0720   (0x0004)  
	float                                              PlayerRollAlpha;                                            // 0x0724   (0x0004)  
	float                                              PlayerSlowDownOrLandAlpha;                                  // 0x0728   (0x0004)  
	float                                              PlayerSpeed2D;                                              // 0x072C   (0x0004)  
	float                                              WingFlapAlpha;                                              // 0x0730   (0x0004)  
	float                                              WingSlowDownOrLandAlpha;                                    // 0x0734   (0x0004)  
	float                                              WingSlowDownOrLandAlphaTarget;                              // 0x0738   (0x0004)  
	int32_t                                            PlayerRandomInteger;                                        // 0x073C   (0x0004)  
	bool                                               bIsConduitToMoving : 1;                                     // 0x0740:0 (0x0001)  
	bool                                               bIsCrouchIdleToCrouchMoving : 1;                            // 0x0740:1 (0x0001)  
	bool                                               bIsCrouchMovingToCrouchIdle : 1;                            // 0x0740:2 (0x0001)  
	bool                                               bIsFallLoopToJumpLand : 1;                                  // 0x0740:3 (0x0001)  
	bool                                               bIsFlyingStart : 1;                                         // 0x0740:4 (0x0001)  
	bool                                               bIsNotCrouchIdle : 1;                                       // 0x0740:5 (0x0001)  
	bool                                               bIsNotCrouchMoving : 1;                                     // 0x0740:6 (0x0001)  
	bool                                               bIsNotMoving : 1;                                           // 0x0740:7 (0x0001)  
	bool                                               bIsNotOnZipline : 1;                                        // 0x0741:0 (0x0001)  
	bool                                               bIsOnZipline : 1;                                           // 0x0741:1 (0x0001)  
	bool                                               bIsOutOfGas : 1;                                            // 0x0741:2 (0x0001)  
	bool                                               bIsProceduralDeactivated : 1;                               // 0x0741:3 (0x0001)  
	bool                                               bIsRandomFlap : 1;                                          // 0x0741:4 (0x0001)  
	bool                                               bIsTacticalJumpLoopEnd : 1;                                 // 0x0741:5 (0x0001)  
	bool                                               bIsToBoostEnd : 1;                                          // 0x0741:6 (0x0001)  
	bool                                               bIsToBoostStart : 1;                                        // 0x0741:7 (0x0001)  
	bool                                               bIsToSliding : 1;                                           // 0x0742:0 (0x0001)  
	bool                                               bPlayerIsAccelerating2D : 1;                                // 0x0742:1 (0x0001)  
	bool                                               bPlayerIsAllowWingFlap : 1;                                 // 0x0742:2 (0x0001)  
	bool                                               bPlayerIsAscending : 1;                                     // 0x0742:3 (0x0001)  
	bool                                               bPlayerIsBoostStartEnd : 1;                                 // 0x0742:4 (0x0001)  
	bool                                               bPlayerIsCrouching : 1;                                     // 0x0742:5 (0x0001)  
	bool                                               bPlayerIsCrouchMoving : 1;                                  // 0x0742:6 (0x0001)  
	bool                                               bPlayerIsDodgeLeft : 1;                                     // 0x0742:7 (0x0001)  
	bool                                               bPlayerIsDodgeRight : 1;                                    // 0x0743:0 (0x0001)  
	bool                                               bPlayerIsFalling : 1;                                       // 0x0743:1 (0x0001)  
	bool                                               bPlayerIsJumping : 1;                                       // 0x0743:2 (0x0001)  
	bool                                               bPlayerIsForceDive : 1;                                     // 0x0743:3 (0x0001)  
	bool                                               bPlayerIsOnAscender : 1;                                    // 0x0743:4 (0x0001)  
	bool                                               bPlayerIsOnGrindRail : 1;                                   // 0x0743:5 (0x0001)  
	bool                                               bPlayerIsLeapInterruptible : 1;                             // 0x0743:6 (0x0001)  
	bool                                               bPlayerIsPlayDiveHitToIdle : 1;                             // 0x0743:7 (0x0001)  
	bool                                               bPlayerIsPlayLandAdditive : 1;                              // 0x0744:0 (0x0001)  
	bool                                               bPlayerIsSliding : 1;                                       // 0x0744:1 (0x0001)  
	bool                                               bPlayerIsSurfaceSwimming : 1;                               // 0x0744:2 (0x0001)  
	bool                                               bPlayerIsTacticalJump : 1;                                  // 0x0744:3 (0x0001)  
	bool                                               bPlayerIsTacticalSprint : 1;                                // 0x0744:4 (0x0001)  
	bool                                               bPlayerIsWingReplenish : 1;                                 // 0x0744:5 (0x0001)  
	bool                                               bPlayerIsWingLeaping : 1;                                   // 0x0744:6 (0x0001)  
	bool                                               bPlayerIsWingsBoosting : 1;                                 // 0x0744:7 (0x0001)  
	bool                                               bPlayerIsWingsCrashing : 1;                                 // 0x0745:0 (0x0001)  
	bool                                               bPlayerIsWingsFlying : 1;                                   // 0x0745:1 (0x0001)  
	bool                                               bPlayerIsZiplining : 1;                                     // 0x0745:2 (0x0001)  
	bool                                               bTacticalJumpLoopToTacticalLand : 1;                        // 0x0745:3 (0x0001)  
	bool                                               bToJumpStart : 1;                                           // 0x0745:4 (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0746   (0x000A)  MISSED
};

/// Class /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase
/// Size: 0x0080 (0x000B60 - 0x000BE0)
class UFortGameplayAbility_SunroseWingsCrashBase : public UFortGameplayAbility
{ 
public:
	float                                              TelegraphUpdateIntervalSeconds;                             // 0x0B60   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0B64   (0x0004)  MISSED
	SDK_UNDEFINED(16,15673) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(TelegraphCollisionObjectTypes);       // 0x0B68   (0x0010)  
	float                                              TelegraphInterpSpeed;                                       // 0x0B78   (0x0004)  
	unsigned char                                      UnknownData01_5[0x2C];                                      // 0x0B7C   (0x002C)  MISSED
	float                                              CrashWindupDuration;                                        // 0x0BA8   (0x0004)  
	float                                              CrashLookPitchMin;                                          // 0x0BAC   (0x0004)  
	float                                              CrashLookPitchMax;                                          // 0x0BB0   (0x0004)  
	float                                              TelegraphTraceStartDist;                                    // 0x0BB4   (0x0004)  
	float                                              TelegraphTraceEndDist;                                      // 0x0BB8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0BBC   (0x0004)  MISSED
	class UClass*                                      TelegraphActorClass;                                        // 0x0BC0   (0x0008)  
	class AActor*                                      TelegraphActor;                                             // 0x0BC8   (0x0008)  
	class UFXSystemAsset*                              TelegraphFXSystemAsset;                                     // 0x0BD0   (0x0008)  
	class UFXSystemComponent*                          TelegraphNS;                                                // 0x0BD8   (0x0008)  


	/// Functions
	// Function /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase.UpdateTelegraph
	// void UpdateTelegraph();                                                                                               // [0xa3b065c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase.EndTelegraph
	// void EndTelegraph();                                                                                                  // [0xa3afa60] Final|Native|Public|BlueprintCallable 
	// Function /Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase.BeginTelegraph
	// void BeginTelegraph();                                                                                                // [0xa3af89c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SunRoseFlyingRuntime.FortMovementMode_WingedFlyingRuntimeData
/// Size: 0x0088 (0x000048 - 0x0000D0)
struct FFortMovementMode_WingedFlyingRuntimeData : FFortMovementMode_FlyingRuntimeData
{ 
	unsigned char                                      UnknownData00_3[0x2];                                       // 0x0048   (0x0002)  MISSED
	bool                                               bIsStartingFlying;                                          // 0x004A   (0x0001)  
	EWingedFlyingStatus                                FlyingStatus;                                               // 0x004B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x34];                                      // 0x004C   (0x0034)  MISSED
	float                                              CurrentHeightAboveWorld;                                    // 0x0080   (0x0004)  
	float                                              InterpolatedHeightAboveWorld;                               // 0x0084   (0x0004)  
	float                                              SpeedMultiplierFromForwardInput;                            // 0x0088   (0x0004)  
	float                                              InterpolatedYInput;                                         // 0x008C   (0x0004)  
	FVector2D                                          InterpolatedCrashInput;                                     // 0x0090   (0x0010)  
	float                                              FlyingEnergy;                                               // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x2C];                                      // 0x00A4   (0x002C)  MISSED
};

/// Struct /Script/SunRoseFlyingRuntime.FortMovementMode_WingedFlyingCreationData
/// Size: 0x0008 (0x000028 - 0x000030)
struct FFortMovementMode_WingedFlyingCreationData : FFortMovementMode_FlyingCreationData
{ 
	float                                              FlyingEnergy;                                               // 0x0028   (0x0004)  
	bool                                               bConsumeExtraLeapEnergy;                                    // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

