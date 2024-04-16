
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags

/// Class /Script/HumbleMopGameplayRuntime.FortCameraModifier_HumbleMop
/// Size: 0x01D0 (0x000090 - 0x000260)
class UFortCameraModifier_HumbleMop : public UFortCameraModifier_Custom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(class UCurveFloat*)                        NativeForwardPrecentCurve                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FScalableFloat)                            NativeSprintingUpOffsetMultiplier                           OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FScalableFloat)                            NativeBaseUpOffsetMultiplier                                OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	DMember(float)                                     NativeLeadInTime                                            OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     NativeLeanRight                                             OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     NativeUnNormalizedForwardPercentCurveValueStart             OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     NativeUnNormalizedForwardPercentCurveValueEnd               OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     NativeRemappedVelocityLengthXYOldRangeX                     OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     NativeRemappedVelocityLengthXYOldRangeY                     OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     NativeRemappedVelocityLengthXYNewRangeX                     OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     NativeRemappedVelocityLengthXYNewRangeY                     OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     NativeRemappedVelocityLengthXYMultiplier                    OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedABSOldRangeX                           OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedABSOldRangeY                           OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedABSNewRangeX                           OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedABSNewRangeY                           OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     NativeCurrentForwardTacticalSprintingAdditive               OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     NativeCurrentForwardInterpToSpeed                           OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     NativeRemappedRightSpeedOldRangeX                           OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     NativeRemappedRightSpeedOldRangeY                           OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     NativeRemappedRightSpeedNewRangeX                           OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     NativeRemappedRightSpeedNewRangeY                           OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     NativeRemappedRightSpeedMultiplierA                         OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     NativeRemappedRightSpeedMultiplierB                         OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     NativeCurrentRightRemappedCurrentForwardABSOldRangeX        OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     NativeCurrentRightRemappedCurrentForwardABSOldRangeY        OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     NativeCurrentRightRemappedCurrentForwardABSNewRangeX        OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     NativeCurrentRightRemappedCurrentForwardABSNewRangeY        OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(float)                                     NativeCurrentRightInterpToSpeed                             OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedOldRangeX                              OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedOldRangeY                              OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedNewRangeX                              OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedNewRangeY                              OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     NativeCurrentUpRemappedCurrentForwardABSOldRangeX           OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     NativeCurrentUpRemappedCurrentForwardABSOldRangeY           OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     NativeCurrentUpRemappedCurrentForwardABSNewRangeX           OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     NativeCurrentUpRemappedCurrentForwardABSNewRangeY           OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedMultiplierA                            OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     NativeRemappedUpSpeedMultiplierB                            OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     NativeCurrentUpTacticalSprintingAdditiveA                   OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     NativeCurrentUpTacticalSprintingAdditiveB                   OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     NativeCurrentUpInterpToSpeed                                OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     NativeRemappedForwardSpeedABSOldRangeX                      OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     NativeRemappedForwardSpeedABSOldRangeY                      OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     NativeRemappedForwardSpeedABSNewRangeX                      OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     NativeRemappedForwardSpeedABSNewRangeY                      OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     NativeRemappedForwardSpeedABSMultiplier                     OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     NativeCurrentLeanInterpToTargetOldRangeX                    OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(float)                                     NativeCurrentLeanInterpToTargetOldRangeY                    OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     NativeCurrentLeanInterpToSpeed                              OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     NativeCurrentFOVInterpToTargetA                             OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     NativeCurrentFOVInterpToTargetB                             OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     NativeCurrentFOVInterpToSpeed                               OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(float)                                     NativeRemappedSpeedOldRangeX                                OFFSET(get<float>, {0x1BC, 4, 0, 0})
	DMember(float)                                     NativeRemappedSpeedOldRangeY                                OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     NativeRemappedSpeedNewRangeX                                OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     NativeRemappedSpeedNewRangeY                                OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     NativeCurrentOffsetInterpToSpeed                            OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     NativeCurrentStraightnessMultiplier                         OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     NativeCurrentUpSubtrahend                                   OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     NativeCurrentOffsetVectorInterpToSpeed                      OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     NativeNewViewForwardVectorMultiplier                        OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     NativeNewViewUpVectorMultiplier                             OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(float)                                     NativeNewViewRightVectorMultiplier                          OFFSET(get<float>, {0x1E4, 4, 0, 0})


	/// Functions
	// Function /Script/HumbleMopGameplayRuntime.FortCameraModifier_HumbleMop.UseNativeCalculation
	// bool UseNativeCalculation();                                                                                             // [0xb8b74dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HumbleMopGameplayRuntime.HumbleMopPlayerAnimInstance
/// Size: 0x0110 (0x001530 - 0x001640)
class UHumbleMopPlayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5696;

public:
	SMember(FName)                                     CurveName_UserCurve01                                       OFFSET(getStruct<T>, {0x1528, 4, 0, 0})
	SMember(FName)                                     CurveName_UserCurve02                                       OFFSET(getStruct<T>, {0x152C, 4, 0, 0})
	SMember(FName)                                     BoneName_Root                                               OFFSET(getStruct<T>, {0x1530, 4, 0, 0})
	SMember(FString)                                   MontageString_HumbleMop_SpawnWheel_M                        OFFSET(getStruct<T>, {0x1538, 16, 0, 0})
	SMember(FGameplayTag)                              HumbleMopWheelRollingTag                                    OFFSET(getStruct<T>, {0x1548, 4, 0, 0})
	SMember(FGameplayTag)                              HumbleMopWheelWindingUpTag                                  OFFSET(getStruct<T>, {0x154C, 4, 0, 0})
	SMember(FGameplayTag)                              HumbleMopWheelWindingDownTag                                OFFSET(getStruct<T>, {0x1550, 4, 0, 0})
	SMember(FGameplayTag)                              HumbleMopSuperJumpActiveTag                                 OFFSET(getStruct<T>, {0x1554, 4, 0, 0})
	SMember(FGameplayTag)                              GameplayActionPlayerSprintTag                               OFFSET(getStruct<T>, {0x1558, 4, 0, 0})
	DMember(float)                                     InterpSpeed                                                 OFFSET(get<float>, {0x155C, 4, 0, 0})
	DMember(float)                                     ExitNoiseInterpSpeed                                        OFFSET(get<float>, {0x1560, 4, 0, 0})
	DMember(float)                                     ForwardSpeedRemapOldMin                                     OFFSET(get<float>, {0x1564, 4, 0, 0})
	DMember(float)                                     ForwardSpeedRemapOldMax                                     OFFSET(get<float>, {0x1568, 4, 0, 0})
	DMember(float)                                     ForwardSpeedRemapNewMin                                     OFFSET(get<float>, {0x156C, 4, 0, 0})
	DMember(float)                                     ForwardSpeedRemapNewMax                                     OFFSET(get<float>, {0x1570, 4, 0, 0})
	DMember(float)                                     LateralSpeedRemapOldMin                                     OFFSET(get<float>, {0x1574, 4, 0, 0})
	DMember(float)                                     LateralSpeedRemapOldMax                                     OFFSET(get<float>, {0x1578, 4, 0, 0})
	DMember(float)                                     LateralSpeedRemapNewMin                                     OFFSET(get<float>, {0x157C, 4, 0, 0})
	DMember(float)                                     LateralSpeedRemapNewMax                                     OFFSET(get<float>, {0x1580, 4, 0, 0})
	DMember(float)                                     NoiseAlphaRemapOldMin                                       OFFSET(get<float>, {0x1584, 4, 0, 0})
	DMember(float)                                     NoiseAlphaRemapOldMax                                       OFFSET(get<float>, {0x1588, 4, 0, 0})
	DMember(float)                                     NoiseAlphaRemapNewMin                                       OFFSET(get<float>, {0x158C, 4, 0, 0})
	DMember(float)                                     NoiseAlphaRemapNewMax                                       OFFSET(get<float>, {0x1590, 4, 0, 0})
	DMember(float)                                     ForwardSpeedInterpSpeed                                     OFFSET(get<float>, {0x1594, 4, 0, 0})
	DMember(float)                                     LateralSpeedInterpSpeed                                     OFFSET(get<float>, {0x1598, 4, 0, 0})
	DMember(float)                                     ExitNoiseAlpha                                              OFFSET(get<float>, {0x159C, 4, 0, 0})
	DMember(float)                                     InputLeftRight                                              OFFSET(get<float>, {0x15A0, 4, 0, 0})
	DMember(float)                                     InputFrontBack                                              OFFSET(get<float>, {0x15A4, 4, 0, 0})
	DMember(float)                                     ForwardSpeedInterp                                          OFFSET(get<float>, {0x15A8, 4, 0, 0})
	DMember(float)                                     LateralSpeedInterp                                          OFFSET(get<float>, {0x15AC, 4, 0, 0})
	DMember(float)                                     WheelNoiseAlpha                                             OFFSET(get<float>, {0x15B0, 4, 0, 0})
	DMember(float)                                     WindUpPlayRate                                              OFFSET(get<float>, {0x15B4, 4, 0, 0})
	DMember(bool)                                      bIsWindingDownOver                                          OFFSET(get<bool>, {0x15B8, 1, 1, 0})
	DMember(bool)                                      bIsWheelActive                                              OFFSET(get<bool>, {0x15B8, 1, 1, 1})
	DMember(bool)                                      bIsWindingUp                                                OFFSET(get<bool>, {0x15B8, 1, 1, 2})
	DMember(bool)                                      bIsWindingUpOver                                            OFFSET(get<bool>, {0x15B8, 1, 1, 3})
	DMember(bool)                                      bIsWindingDown                                              OFFSET(get<bool>, {0x15B8, 1, 1, 4})
	DMember(bool)                                      bIsWheelJumping                                             OFFSET(get<bool>, {0x15B8, 1, 1, 5})
	DMember(bool)                                      bIsWheelTacSprint                                           OFFSET(get<bool>, {0x15B8, 1, 1, 6})
	DMember(bool)                                      bIsWheelJumpLand                                            OFFSET(get<bool>, {0x15B8, 1, 1, 7})
	DMember(bool)                                      bIsWindJump                                                 OFFSET(get<bool>, {0x15B9, 1, 1, 0})
	DMember(bool)                                      bIsDolphinWindJump                                          OFFSET(get<bool>, {0x15B9, 1, 1, 1})
	SMember(FRotator)                                  PlayerCurrentRotation                                       OFFSET(getStruct<T>, {0x15C0, 24, 0, 0})
	SMember(FVector)                                   GoalUpVec                                                   OFFSET(getStruct<T>, {0x15D8, 24, 0, 0})
	SMember(FVector)                                   RightVec                                                    OFFSET(getStruct<T>, {0x15F0, 24, 0, 0})
	SMember(FRotator)                                  PlayerGoalRotation                                          OFFSET(getStruct<T>, {0x1608, 24, 0, 0})
	SMember(FVector)                                   CurrentUpVec                                                OFFSET(getStruct<T>, {0x1620, 24, 0, 0})
};

