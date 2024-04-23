
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: MotionTrajectory
/// dependency: PoseSearch
/// dependency: ProxyTable

/// Class /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortLocomotionLayerMaskDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     MaskingHeadTorsoAlpha                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MaskingLeftArmAlpha                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaskingRightArmAlpha                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaskingWeaponAlpha                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MutingHeadTorsoAlpha                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MutingLeftArmAlpha                                          OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MutingRightArmAlpha                                         OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MutingWeaponAlpha                                           OFFSET(get<float>, {0x4C, 4, 0, 0})


	/// Functions
	// Function /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataAsset.ApplyTo
	// void ApplyTo(FFortLocomotionLayerMaskDataSet& DataAsset);                                                                // [0xbcfd3d4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance
/// Size: 0x0440 (0x001510 - 0x001950)
class UFortPlayerMotionMatchingLocomotionAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6480;

public:
	SMember(FVector)                                   FutureRootMotionVelocity                                    OFFSET(getStruct<T>, {0x1510, 24, 0, 0})
	SMember(FMotionMatchingLODConfig)                  HighEndConfig                                               OFFSET(getStruct<T>, {0x1528, 56, 0, 0})
	SMember(FMotionMatchingLODConfig)                  LowEndConfig                                                OFFSET(getStruct<T>, {0x1560, 56, 0, 0})
	SMember(FMotionMatchingLODConfig)                  CurrentLODConfig                                            OFFSET(getStruct<T>, {0x1598, 56, 0, 0})
	CMember(class UAnimSequence*)                      SelectedIdleBreak                                           OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(class UProxyAsset*)                        MotionMatchingLODProxyAsset                                 OFFSET(get<T>, {0x15D8, 8, 0, 0})
	DMember(int32_t)                                   MotionMatchingLOD                                           OFFSET(get<int32_t>, {0x15E0, 4, 0, 0})
	SMember(FMotionMatchingBlendInfo)                  MotionMatchingBlendInfo                                     OFFSET(getStruct<T>, {0x15E4, 8, 0, 0})
	CMember(class UClass*)                             StopBranchOutWindowNotifyClass                              OFFSET(get<T>, {0x15F0, 8, 0, 0})
	CMember(EFortMotionMatchingLocomotionState)        LocomotionState                                             OFFSET(get<T>, {0x15F8, 1, 0, 0})
	DMember(float)                                     StartToLoopSearchDelaySeconds                               OFFSET(get<float>, {0x15FC, 4, 0, 0})
	DMember(float)                                     PivotToLoopSearchDelaySeconds                               OFFSET(get<float>, {0x1600, 4, 0, 0})
	DMember(float)                                     PivotSpeedThreshold                                         OFFSET(get<float>, {0x1604, 4, 0, 0})
	DMember(float)                                     PivotDotProductThresholdRun                                 OFFSET(get<float>, {0x1608, 4, 0, 0})
	DMember(float)                                     DiagonalDetectionThreshold                                  OFFSET(get<float>, {0x160C, 4, 0, 0})
	DMember(float)                                     PivotDotProductThresholdWalk                                OFFSET(get<float>, {0x1610, 4, 0, 0})
	DMember(float)                                     LocomotionStateTime                                         OFFSET(get<float>, {0x1614, 4, 0, 0})
	DMember(float)                                     VelocityDirection                                           OFFSET(get<float>, {0x1618, 4, 0, 0})
	DMember(float)                                     MotionMatchingWeight                                        OFFSET(get<float>, {0x161C, 4, 0, 0})
	CMember(EPoseSearchInterruptMode)                  DatabaseSearchInterruptMode                                 OFFSET(get<T>, {0x1620, 1, 0, 0})
	DMember(bool)                                      bUseOrientationWarping                                      OFFSET(get<bool>, {0x1621, 1, 0, 0})
	DMember(bool)                                      bUseFutureForOrientationWarping                             OFFSET(get<bool>, {0x1622, 1, 0, 0})
	DMember(bool)                                      bIsLowEnd                                                   OFFSET(get<bool>, {0x1623, 1, 0, 0})
	DMember(bool)                                      bUseLocomotionBlendspace                                    OFFSET(get<bool>, {0x1624, 1, 0, 0})
	DMember(bool)                                      bShouldPlayIdle                                             OFFSET(get<bool>, {0x1625, 1, 0, 0})
	DMember(bool)                                      bShouldPlayIdleBreak                                        OFFSET(get<bool>, {0x1626, 1, 0, 0})
	DMember(bool)                                      bShouldExitIdleBreak                                        OFFSET(get<bool>, {0x1627, 1, 0, 0})
	DMember(bool)                                      bShouldExitIdleBreakSlow                                    OFFSET(get<bool>, {0x1628, 1, 0, 0})
	DMember(float)                                     IdleTransitionTimer                                         OFFSET(get<float>, {0x162C, 4, 0, 0})
	DMember(float)                                     IdleBreakTimer                                              OFFSET(get<float>, {0x1630, 4, 0, 0})
	DMember(bool)                                      bBothHandsIKInHandSpace                                     OFFSET(get<bool>, {0x1634, 1, 0, 0})
	DMember(bool)                                      bIsCrouchedTransition                                       OFFSET(get<bool>, {0x1635, 1, 0, 0})
	DMember(bool)                                      bWasCrouching                                               OFFSET(get<bool>, {0x1636, 1, 0, 0})
	DMember(bool)                                      bShouldPlayStandToCrouchTransition                          OFFSET(get<bool>, {0x1637, 1, 0, 0})
	DMember(bool)                                      bShouldPlayCrouchToStandTransition                          OFFSET(get<bool>, {0x1638, 1, 0, 0})
	DMember(bool)                                      bShouldExitCrouchTransition                                 OFFSET(get<bool>, {0x1639, 1, 0, 0})
	DMember(bool)                                      bIsLocallyControlled                                        OFFSET(get<bool>, {0x163A, 1, 0, 0})
	DMember(float)                                     CameraSpamYawThreshold                                      OFFSET(get<float>, {0x163C, 4, 0, 0})
	DMember(float)                                     CameraSpamCoolDownSeconds                                   OFFSET(get<float>, {0x1640, 4, 0, 0})
	DMember(float)                                     CameraSpamSearchThrottleTime                                OFFSET(get<float>, {0x1644, 4, 0, 0})
	DMember(float)                                     DefaultSearchThrottleTime                                   OFFSET(get<float>, {0x1648, 4, 0, 0})
	DMember(float)                                     SearchThrottleTime                                          OFFSET(get<float>, {0x164C, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlpha                                           OFFSET(get<float>, {0x1650, 4, 0, 0})
	DMember(bool)                                      bEnableAdditiveLeans                                        OFFSET(get<bool>, {0x1654, 1, 0, 0})
	DMember(bool)                                      bEnableAdditiveRunLeans                                     OFFSET(get<bool>, {0x1655, 1, 0, 0})
	DMember(bool)                                      bDisableArcs                                                OFFSET(get<bool>, {0x1656, 1, 0, 0})
	DMember(bool)                                      bDisableDiamonds                                            OFFSET(get<bool>, {0x1657, 1, 0, 0})
	DMember(bool)                                      bIdleToMotionMatchingNoInertialization                      OFFSET(get<bool>, {0x1658, 1, 0, 0})
	DMember(bool)                                      bRelaxedStateChanged                                        OFFSET(get<bool>, {0x1659, 1, 0, 0})
	DMember(bool)                                      bIsMelee                                                    OFFSET(get<bool>, {0x165A, 1, 0, 0})
	DMember(bool)                                      bUseRelaxedMotionMatchingData                               OFFSET(get<bool>, {0x165B, 1, 0, 0})
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  OFFSET(getStruct<T>, {0x1660, 16, 0, 0})
	SMember(FTrajectorySamplingData)                   TrajectorySamplingData                                      OFFSET(getStruct<T>, {0x1670, 32, 0, 0})
	SMember(FCharacterTrajectoryData)                  CharacterTrajectoryData                                     OFFSET(getStruct<T>, {0x1690, 480, 0, 0})
	DMember(float)                                     TrajectorySpeedMultiplier                                   OFFSET(get<float>, {0x1870, 4, 0, 0})
	DMember(float)                                     LowFrictionCustomMaxSpeed                                   OFFSET(get<float>, {0x1874, 4, 0, 0})
	DMember(float)                                     LowFrictionCustomBrakingDeceleration                        OFFSET(get<float>, {0x1878, 4, 0, 0})
	DMember(float)                                     LowFrictionCustomFriction                                   OFFSET(get<float>, {0x187C, 4, 0, 0})
	SMember(FFortMotionMatchingAngleSpamTracker)       AccelerationSpamTracker                                     OFFSET(getStruct<T>, {0x1880, 72, 0, 0})
	DMember(bool)                                      bIsPlayingIdleBreak                                         OFFSET(get<bool>, {0x193B, 1, 0, 0})
	DMember(bool)                                      bIsPlayingInterruptibleStop                                 OFFSET(get<bool>, {0x1948, 1, 0, 0})
	DMember(bool)                                      bIsPlayingIdleDatabase                                      OFFSET(get<bool>, {0x1949, 1, 0, 0})
	DMember(bool)                                      bHasReachedIdle                                             OFFSET(get<bool>, {0x194A, 1, 0, 0})


	/// Functions
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.OnUpdateMotionMatchingState
	// void OnUpdateMotionMatchingState(FAnimUpdateContext& Context, FAnimNodeReference& Node);                                 // [0x133f180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.OnUpdateMotionMatching
	// void OnUpdateMotionMatching(FAnimUpdateContext& Context, FAnimNodeReference& Node);                                      // [0x133efc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.OnUpdateIdleBreaks
	// void OnUpdateIdleBreaks(FAnimUpdateContext& Context, FAnimNodeReference& Node);                                          // [0x2cc709c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LocomotionInitiativeRuntime.FortPlayerMotionMatchingLocomotionAnimInstance.GetMotionMatchingBlendProfile
	// class UBlendProfile* GetMotionMatchingBlendProfile();                                                                    // [0x133f414] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LocomotionInitiativeRuntime.LocomotionInitiativeComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class ULocomotionInitiativeComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UClass*)                             MotionMatchingLocomotionAnimBlueprintClass                  OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             RigidBodyPBA_AnimBlueprintClass                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FScalableFloat)                            IsLocomotionInitiativeEnabled                               OFFSET(getStruct<T>, {0xB8, 40, 0, 0})
	CMember(class UAnimSequence*)                      CrouchShuffleInPlaceAnim                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/LocomotionInitiativeRuntime.LocomotionInitiativeGameFeatureData
/// Size: 0x0008 (0x000540 - 0x000548)
class ULocomotionInitiativeGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
	SMember(FPerPlatformBool)                          EnableRequestedFullBodyPBAByDefault                         OFFSET(getStruct<T>, {0x540, 1, 0, 0})
	SMember(FPerPlatformBool)                          EnableSkydivingFullBodyPBAByDefault                         OFFSET(getStruct<T>, {0x541, 1, 0, 0})
	SMember(FPerPlatformBool)                          EnableDBNOCarriedFullBodyPBAByDefault                       OFFSET(getStruct<T>, {0x542, 1, 0, 0})
	SMember(FPerPlatformBool)                          SkydivingEnablePhysicsBasedAnimationByDefault               OFFSET(getStruct<T>, {0x543, 1, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataSet
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortLocomotionLayerMaskDataSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MaskingHeadTorsoAlpha                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaskingLeftArmAlpha                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaskingRightArmAlpha                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaskingWeaponAlpha                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MutingHeadTorsoAlpha                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MutingLeftArmAlpha                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MutingRightArmAlpha                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MutingWeaponAlpha                                           OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.MotionMatchingLODConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FMotionMatchingLODConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UProxyTable*)                        MotionDatabaseProxyTable                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UAnimSequence*)                      StandIdleLoop                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UAnimSequence*)                      CrouchIdleLoop                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<class UAnimSequence*>)              StandIdleBreak                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<class UAnimSequence*>)              CrouchIdleBreak                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.MotionMatchingBlendInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FMotionMatchingBlendInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FName)                                     BlendProfile                                                OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.FortMotionMatchingAngleSpamTracker
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortMotionMatchingAngleSpamTracker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     DirectionChangeAngleThresholdDegrees                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  SpamAngleChangeCounterThreshold                             OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     SpamDetectionWindowLengthSeconds                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpamDetectionMaxConeAngleDegrees                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  MaxSamplesPerSecond                                         OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.LocomotionInitiativeScriptedPlayerInputEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FLocomotionInitiativeScriptedPlayerInputEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ForwardInput                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RightInput                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DurationInSeconds                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/LocomotionInitiativeRuntime.LocomotionInitiativeRecordedInputEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FLocomotionInitiativeRecordedInputEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   InputVector                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  ControlRotation                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Enum /Script/LocomotionInitiativeRuntime.EFortMotionMatchingLocomotionState
/// Size: 0x06
enum class EFortMotionMatchingLocomotionState : uint8_t
{
	EFortMotionMatchingLocomotionState__Idle                                         = 0,
	EFortMotionMatchingLocomotionState__Start                                        = 1,
	EFortMotionMatchingLocomotionState__Loop                                         = 2,
	EFortMotionMatchingLocomotionState__Pivot                                        = 3,
	EFortMotionMatchingLocomotionState__Stop                                         = 4,
	EFortMotionMatchingLocomotionState__EFortMotionMatchingLocomotionState_MAX       = 5
};

