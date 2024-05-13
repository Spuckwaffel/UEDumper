
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x03
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                                                                       = 0,
	BMM_Replace                                                                      = 1,
	BMM_Additive                                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x02
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                                                                   = 0,
	EIT_Additive                                                                     = 1
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x15
enum class EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear                                                          = 0,
	EEasingFuncType__Sinusoidal                                                      = 1,
	EEasingFuncType__Cubic                                                           = 2,
	EEasingFuncType__QuadraticInOut                                                  = 3,
	EEasingFuncType__CubicInOut                                                      = 4,
	EEasingFuncType__HermiteCubic                                                    = 5,
	EEasingFuncType__QuarticInOut                                                    = 6,
	EEasingFuncType__QuinticInOut                                                    = 7,
	EEasingFuncType__CircularIn                                                      = 8,
	EEasingFuncType__CircularOut                                                     = 9,
	EEasingFuncType__CircularInOut                                                   = 10,
	EEasingFuncType__ExpIn                                                           = 11,
	EEasingFuncType__ExpOut                                                          = 12,
	EEasingFuncType__ExpInOut                                                        = 13,
	EEasingFuncType__CustomCurve                                                     = 14
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x06
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX                                                       = 0,
	ERotationComponent__EulerY                                                       = 1,
	ERotationComponent__EulerZ                                                       = 2,
	ERotationComponent__QuaternionAngle                                              = 3,
	ERotationComponent__SwingAngle                                                   = 4,
	ERotationComponent__TwistAngle                                                   = 5
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x02
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend                                          = 0,
	EBlendListTransitionType__Inertialization                                        = 1
};

/// Enum /Script/AnimGraphRuntime.EAnimFunctionCallSite
/// Size: 0x12
enum class EAnimFunctionCallSite : uint32_t
{
	EAnimFunctionCallSite__OnInitialize                                              = 0,
	EAnimFunctionCallSite__OnUpdate                                                  = 1,
	EAnimFunctionCallSite__OnBecomeRelevant                                          = 2,
	EAnimFunctionCallSite__OnEvaluate                                                = 3,
	EAnimFunctionCallSite__OnInitializePostRecursion                                 = 4,
	EAnimFunctionCallSite__OnUpdatePostRecursion                                     = 5,
	EAnimFunctionCallSite__OnBecomeRelevantPostRecursion                             = 6,
	EAnimFunctionCallSite__OnEvaluatePostRecursion                                   = 7,
	EAnimFunctionCallSite__OnStartedBlendingOut                                      = 8,
	EAnimFunctionCallSite__OnStartedBlendingIn                                       = 9,
	EAnimFunctionCallSite__OnFinishedBlendingOut                                     = 10,
	EAnimFunctionCallSite__OnFinishedBlendingIn                                      = 11
};

/// Enum /Script/AnimGraphRuntime.ELayeredBoneBlendMode
/// Size: 0x02
enum class ELayeredBoneBlendMode : uint8_t
{
	ELayeredBoneBlendMode__BranchFilter                                              = 0,
	ELayeredBoneBlendMode__BlendMask                                                 = 1
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x05
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add                                                       = 0,
	EModifyCurveApplyMode__Scale                                                     = 1,
	EModifyCurveApplyMode__Blend                                                     = 2,
	EModifyCurveApplyMode__WeightedMovingAverage                                     = 3,
	EModifyCurveApplyMode__RemapCurve                                                = 4
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x03
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist                                                   = 0,
	EPoseDriverType__SwingOnly                                                       = 1,
	EPoseDriverType__Translation                                                     = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x02
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation                                                      = 0,
	EPoseDriverSource__Translation                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x02
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses                                                    = 0,
	EPoseDriverOutput__DriveCurves                                                   = 1
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x02
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot                                               = 0,
	ESnapshotSourceMode__SnapshotPin                                                 = 1
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x03
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset                                                     = 0,
	ESequenceEvalReinit__StartPosition                                               = 1,
	ESequenceEvalReinit__ExplicitTime                                                = 2
};

/// Enum /Script/AnimGraphRuntime.ESwapRootBone
/// Size: 0x03
enum class ESwapRootBone : uint8_t
{
	ESwapRootBone__SwapRootBone_Component                                            = 0,
	ESwapRootBone__SwapRootBone_Actor                                                = 1,
	ESwapRootBone__SwapRootBone_None                                                 = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x02
enum class AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular                                           = 0,
	AnimPhysAngularConstraintType__Cone                                              = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x02
enum class AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free                                               = 0,
	AnimPhysLinearConstraintType__Limited                                            = 1
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x05
enum class AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component                                                  = 0,
	AnimPhysSimSpaceType__Actor                                                      = 1,
	AnimPhysSimSpaceType__World                                                      = 2,
	AnimPhysSimSpaceType__RootRelative                                               = 3,
	AnimPhysSimSpaceType__BoneRelative                                               = 4
};

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x02
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner                                                       = 0,
	ESphericalLimitType__Outer                                                       = 1
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x03
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput                                          = 0,
	EDrivenBoneModificationMode__ReplaceComponent                                    = 1,
	EDrivenBoneModificationMode__AddToRefPose                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x03
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone                                                     = 0,
	EDrivenDestinationMode__MorphTarget                                              = 1,
	EDrivenDestinationMode__MaterialParameter                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x02
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None                                                    = 0,
	EConstraintOffsetOption__Offset_RefPose                                          = 1
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x02
enum class CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate                                                    = 0,
	CopyBoneDeltaMode__Copy                                                          = 1
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x07
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear                                                      = 0,
	EInterpolationBlend__Cubic                                                       = 1,
	EInterpolationBlend__Sinusoidal                                                  = 2,
	EInterpolationBlend__EaseInOutExponent2                                          = 3,
	EInterpolationBlend__EaseInOutExponent3                                          = 4,
	EInterpolationBlend__EaseInOutExponent4                                          = 5,
	EInterpolationBlend__EaseInOutExponent5                                          = 6
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x03
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace                                                 = 0,
	ESimulationSpace__WorldSpace                                                     = 1,
	ESimulationSpace__BaseBoneSpace                                                  = 2
};

/// Enum /Script/AnimGraphRuntime.ESimulationTiming
/// Size: 0x03
enum class ESimulationTiming : uint8_t
{
	ESimulationTiming__Default                                                       = 0,
	ESimulationTiming__Synchronous                                                   = 1,
	ESimulationTiming__Deferred                                                      = 2
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x03
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue                                = 0,
	EScaleChainInitialLength__Distance                                               = 1,
	EScaleChainInitialLength__ChainLength                                            = 2
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x04
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None                                                            = 0,
	ESplineBoneAxis__X                                                               = 1,
	ESplineBoneAxis__Y                                                               = 2,
	ESplineBoneAxis__Z                                                               = 3
};

/// Enum /Script/AnimGraphRuntime.EWarpingEvaluationMode
/// Size: 0x02
enum class EWarpingEvaluationMode : uint8_t
{
	EWarpingEvaluationMode__Manual                                                   = 0,
	EWarpingEvaluationMode__Graph                                                    = 1
};

/// Enum /Script/AnimGraphRuntime.EWarpingVectorMode
/// Size: 0x04
enum class EWarpingVectorMode : uint8_t
{
	EWarpingVectorMode__ComponentSpaceVector                                         = 0,
	EWarpingVectorMode__ActorSpaceVector                                             = 1,
	EWarpingVectorMode__WorldSpaceVector                                             = 2,
	EWarpingVectorMode__IKFootRootLocalSpaceVector                                   = 3
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x02
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive                                                         = 0,
	ERBFSolverType__Interpolative                                                    = 1
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x06
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian                                                       = 0,
	ERBFFunctionType__Exponential                                                    = 1,
	ERBFFunctionType__Linear                                                         = 2,
	ERBFFunctionType__Cubic                                                          = 3,
	ERBFFunctionType__Quintic                                                        = 4,
	ERBFFunctionType__DefaultFunction                                                = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x05
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean                                                    = 0,
	ERBFDistanceMethod__Quaternion                                                   = 1,
	ERBFDistanceMethod__SwingAngle                                                   = 2,
	ERBFDistanceMethod__TwistAngle                                                   = 3,
	ERBFDistanceMethod__DefaultMethod                                                = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x04
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne                                       = 0,
	ERBFNormalizeMethod__AlwaysNormalize                                             = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian                                       = 2,
	ERBFNormalizeMethod__NoNormalization                                             = 3
};

