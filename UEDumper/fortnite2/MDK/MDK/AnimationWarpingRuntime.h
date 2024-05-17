
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationWarpingRuntime.AnimationWarpingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimationWarpingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimationWarpingRuntime.AnimationWarpingLibrary.GetOffsetRootTransform
	// FTransform GetOffsetRootTransform(FAnimNodeReference& Node);                                                             // [0xd36ed18] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimationWarpingRuntime.AnimationWarpingLibrary.GetCurveValueFromAnimation
	// bool GetCurveValueFromAnimation(class UAnimSequenceBase* Animation, FName CurveName, float Time, float& OutValue);       // [0xd36e95c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementInterpolationSettings
/// Size: 0x002C (0x000000 - 0x00002C)
class FFootPlacementInterpolationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     UnplantLinearStiffness                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     UnplantLinearDamping                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     UnplantAngularStiffness                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     UnplantAngularDamping                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SeparationStiffness                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SeparationDamping                                           OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     FloorLinearStiffness                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FloorLinearDamping                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FloorAngularStiffness                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     FloorAngularDamping                                         OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bEnableFloorInterpolation                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableSeparationInterpolation                              OFFSET(get<bool>, {0x29, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementTraceSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FFootPlacementTraceSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SweepRadius                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              ComplexTraceChannel                                         OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     MaxGroundPenetration                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SimpleCollisionInfluence                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              SimpleTraceChannel                                          OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementRootDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FFootPlacementRootDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FBoneReference)                            PelvisBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            IKRootBone                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPelvisSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FFootPlacementPelvisSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MaxOffset                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LinearStiffness                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearDamping                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HorizontalRebalancingWeight                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxOffsetHorizontal                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     HeelLiftRatio                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EPelvisHeightMode)                         PelvisHeightMode                                            OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EActorMovementCompensationMode)            ActorMovementCompensationMode                               OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(bool)                                      bEnableInterpolation                                        OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(bool)                                      bDisablePelvisOffsetInAir                                   OFFSET(get<bool>, {0x1B, 1, 0, 0})
	SMember(FName)                                     DisablePelvisCurveName                                      OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacemenLegDefinition
/// Size: 0x0034 (0x000000 - 0x000034)
class FFootPlacemenLegDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FBoneReference)                            BallBone                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FName)                                     SpeedCurveName                                              OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     DisableLockCurveName                                        OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FName)                                     DisableLegCurveName                                         OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPlantSettings
/// Size: 0x0034 (0x000000 - 0x000034)
class FFootPlacementPlantSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DistanceToGround                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EFootPlacementLockType)                    LockType                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     UnplantRadius                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ReplantRadiusRatio                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     UnplantAngle                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ReplantAngleRatio                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxExtensionRatio                                           OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinExtensionRatio                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     SeparatingDistance                                          OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     UnalignmentSpeedThreshold                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     AnkleTwistReduction                                         OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bAdjustHeelBeforePlanting                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_FootPlacement
/// Size: 0x0358 (0x0000C8 - 0x000420)
class FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(EWarpingEvaluationMode)                    PlantSpeedMode                                              OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	SMember(FFootPlacementPelvisSettings)              PelvisSettings                                              OFFSET(getStruct<T>, {0xE4, 32, 0, 0})
	CMember(TArray<FFootPlacemenLegDefinition>)        LegDefinitions                                              OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FFootPlacementPlantSettings)               PlantSettings                                               OFFSET(getStruct<T>, {0x118, 52, 0, 0})
	SMember(FFootPlacementInterpolationSettings)       InterpolationSettings                                       OFFSET(getStruct<T>, {0x14C, 44, 0, 0})
	SMember(FFootPlacementTraceSettings)               TraceSettings                                               OFFSET(getStruct<T>, {0x178, 28, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OffsetRootBone
/// Size: 0x00F0 (0x000010 - 0x000100)
class FAnimNode_OffsetRootBone : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OrientationWarping
/// Size: 0x0158 (0x0000C8 - 0x000220)
class FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(EWarpingEvaluationMode)                    Mode                                                        OFFSET(get<T>, {0xC8, 1, 0, 0})
	DMember(float)                                     OrientationAngle                                            OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     LocomotionAngle                                             OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FVector)                                   LocomotionDirection                                         OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	DMember(float)                                     MinRootMotionSpeedThreshold                                 OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     LocomotionAngleDeltaThreshold                               OFFSET(get<float>, {0xF4, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    SpineBones                                                  OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              OFFSET(getStruct<T>, {0x108, 12, 0, 0})
	CMember(TArray<FBoneReference>)                    IKFootBones                                                 OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        RotationAxis                                                OFFSET(get<T>, {0x128, 1, 0, 0})
	DMember(float)                                     DistributedBoneOrientationAlpha                             OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     RotationInterpSpeed                                         OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     MaxCorrectionDegrees                                        OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     MaxRootMotionDeltaToCompensateDegrees                       OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(bool)                                      bCounterCompenstateInterpolationByRootMotion                OFFSET(get<bool>, {0x13C, 1, 0, 0})
	DMember(bool)                                      bScaleByGlobalBlendWeight                                   OFFSET(get<bool>, {0x13D, 1, 0, 0})
	DMember(bool)                                      bUseManualRootMotionVelocity                                OFFSET(get<bool>, {0x13E, 1, 0, 0})
	SMember(FVector)                                   ManualRootMotionVelocity                                    OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	CMember(EOrientationWarpingSpace)                  WarpingSpace                                                OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(FTransform)                                WarpingSpaceTransform                                       OFFSET(getStruct<T>, {0x160, 96, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
class FSlopeWarpingFootDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     FootSize                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FSlopeWarpingFootData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_SlopeWarping
/// Size: 0x0210 (0x0000C8 - 0x0002D8)
class FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FBoneReference)                            IKFootRootBone                                              OFFSET(getStruct<T>, {0xE0, 12, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  OFFSET(getStruct<T>, {0xEC, 12, 0, 0})
	CMember(TArray<FSlopeWarpingFootDefinition>)       FeetDefinitions                                             OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FSlopeWarpingFootData>)             FeetData                                                    OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              PelvisOffsetInterpolator                                    OFFSET(getStruct<T>, {0x118, 8, 0, 0})
	SMember(FVector)                                   GravityDir                                                  OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FVector)                                   CustomFloorOffset                                           OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	DMember(float)                                     CachedDeltaTime                                             OFFSET(get<float>, {0x1A8, 4, 0, 0})
	SMember(FVector)                                   TargetFloorNormalWorldSpace                                 OFFSET(getStruct<T>, {0x1B0, 24, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              FloorNormalInterpolator                                     OFFSET(getStruct<T>, {0x1C8, 8, 0, 0})
	SMember(FVector)                                   TargetFloorOffsetLocalSpace                                 OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              FloorOffsetInterpolator                                     OFFSET(getStruct<T>, {0x240, 8, 0, 0})
	DMember(float)                                     MaxStepHeight                                               OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(bool)                                      bKeepMeshInsideOfCapsule                                    OFFSET(get<bool>, {0x2A4, 1, 1, 0})
	DMember(bool)                                      bPullPelvisDown                                             OFFSET(get<bool>, {0x2A4, 1, 1, 1})
	DMember(bool)                                      bUseCustomFloorOffset                                       OFFSET(get<bool>, {0x2A4, 1, 1, 2})
	DMember(bool)                                      bWasOnGround                                                OFFSET(get<bool>, {0x2A4, 1, 1, 3})
	DMember(bool)                                      bShowDebug                                                  OFFSET(get<bool>, {0x2A4, 1, 1, 4})
	DMember(bool)                                      bFloorSmoothingInitialized                                  OFFSET(get<bool>, {0x2A4, 1, 1, 5})
	SMember(FVector)                                   ActorLocation                                               OFFSET(getStruct<T>, {0x2A8, 24, 0, 0})
	SMember(FVector)                                   GravityDirCompSpace                                         OFFSET(getStruct<T>, {0x2C0, 24, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_Steering
/// Size: 0x0118 (0x0000C8 - 0x0001E0)
class FAnimNode_Steering : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FQuat)                                     TargetOrientation                                           OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
	DMember(bool)                                      bEnableTargetSmoothing                                      OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(float)                                     SmoothTargetStiffness                                       OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     SmoothTargetDamping                                         OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     ProceduralTargetTime                                        OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     TargetTime                                                  OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     AnimatedTargetTime                                          OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     RootMotionThreshold                                         OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     DisableSteeringBelowSpeed                                   OFFSET(get<float>, {0x10C, 4, 0, 0})
	CMember(class UAnimationAsset*)                    CurrentAnimAsset                                            OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     CurrentAnimAssetTime                                        OFFSET(get<float>, {0x118, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.StrideWarpingFootDefinition
/// Size: 0x0024 (0x000000 - 0x000024)
class FStrideWarpingFootDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FBoneReference)                            ThighBone                                                   OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_StrideWarping
/// Size: 0x0178 (0x0000C8 - 0x000240)
class FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(EWarpingEvaluationMode)                    Mode                                                        OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FVector)                                   StrideDirection                                             OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	DMember(float)                                     StrideScale                                                 OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     LocomotionSpeed                                             OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     MinRootMotionSpeedThreshold                                 OFFSET(get<float>, {0xF0, 4, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  OFFSET(getStruct<T>, {0xF4, 12, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(TArray<FStrideWarpingFootDefinition>)      FootDefinitions                                             OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FInputClampConstants)                      StrideScaleModifier                                         OFFSET(getStruct<T>, {0x120, 20, 0, 0})
	SMember(FWarpingVectorValue)                       FloorNormalDirection                                        OFFSET(getStruct<T>, {0x138, 32, 0, 0})
	SMember(FWarpingVectorValue)                       GravityDirection                                            OFFSET(getStruct<T>, {0x158, 32, 0, 0})
	SMember(FIKFootPelvisPullDownSolver)               PelvisIKFootSolver                                          OFFSET(getStruct<T>, {0x178, 128, 0, 0})
	DMember(bool)                                      bOrientStrideDirectionUsingFloorNormal                      OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(bool)                                      bCompensateIKUsingFKThighRotation                           OFFSET(get<bool>, {0x1F9, 1, 0, 0})
	DMember(bool)                                      bClampIKUsingFKLimits                                       OFFSET(get<bool>, {0x1FA, 1, 0, 0})
	DMember(bool)                                      bDisableIfMissingRootMotion                                 OFFSET(get<bool>, {0x1FB, 1, 0, 0})
};

/// Enum /Script/AnimationWarpingRuntime.EFootPlacementLockType
/// Size: 0x04
enum class EFootPlacementLockType : uint8_t
{
	EFootPlacementLockType__Unlocked                                                 = 0,
	EFootPlacementLockType__PivotAroundBall                                          = 1,
	EFootPlacementLockType__PivotAroundAnkle                                         = 2,
	EFootPlacementLockType__LockRotation                                             = 3
};

/// Enum /Script/AnimationWarpingRuntime.EPelvisHeightMode
/// Size: 0x03
enum class EPelvisHeightMode : uint8_t
{
	EPelvisHeightMode__AllLegs                                                       = 0,
	EPelvisHeightMode__AllPlantedFeet                                                = 1,
	EPelvisHeightMode__FrontPlantedFeetUphill_FrontFeetDownhill                      = 2
};

/// Enum /Script/AnimationWarpingRuntime.EActorMovementCompensationMode
/// Size: 0x03
enum class EActorMovementCompensationMode : uint8_t
{
	EActorMovementCompensationMode__ComponentSpace                                   = 0,
	EActorMovementCompensationMode__WorldSpace                                       = 1,
	EActorMovementCompensationMode__SuddenMotionOnly                                 = 2
};

/// Enum /Script/AnimationWarpingRuntime.EOffsetRootBoneMode
/// Size: 0x04
enum class EOffsetRootBoneMode : uint8_t
{
	EOffsetRootBoneMode__Accumulate                                                  = 0,
	EOffsetRootBoneMode__Interpolate                                                 = 1,
	EOffsetRootBoneMode__Hold                                                        = 2,
	EOffsetRootBoneMode__Release                                                     = 3
};

/// Enum /Script/AnimationWarpingRuntime.EOffsetRootBone_CollisionTestingMode
/// Size: 0x03
enum class EOffsetRootBone_CollisionTestingMode : uint8_t
{
	EOffsetRootBone_CollisionTestingMode__Disabled                                   = 0,
	EOffsetRootBone_CollisionTestingMode__ShrinkMaxTranslation                       = 1,
	EOffsetRootBone_CollisionTestingMode__PlanarCollision                            = 2
};

/// Enum /Script/AnimationWarpingRuntime.EOrientationWarpingSpace
/// Size: 0x03
enum class EOrientationWarpingSpace : uint8_t
{
	EOrientationWarpingSpace__ComponentTransform                                     = 0,
	EOrientationWarpingSpace__RootBoneTransform                                      = 1,
	EOrientationWarpingSpace__CustomTransform                                        = 2
};

