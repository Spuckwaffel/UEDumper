
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimGraphRuntime.AnimNodeRigidBodyLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimNodeRigidBodyLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.AnimNodeRigidBodyLibrary.SetOverridePhysicsAsset
	// FRigidBodyAnimNodeReference SetOverridePhysicsAsset(FRigidBodyAnimNodeReference& Node, class UPhysicsAsset* PhysicsAsset); // [0x64d7484] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.AnimNodeRigidBodyLibrary.ConvertToRigidBodyAnimNodePure
	// void ConvertToRigidBodyAnimNodePure(FAnimNodeReference& Node, FRigidBodyAnimNodeReference& RigidBodyAnimNode, bool& Result); // [0x64d6570] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimNodeRigidBodyLibrary.ConvertToRigidBodyAnimNode
	// FRigidBodyAnimNodeReference ConvertToRigidBodyAnimNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x64d6444] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.BlendSpaceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendSpaceLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition
	// void SnapToPosition(FBlendSpaceReference& BlendSpace, FVector NewPosition);                                              // [0x64d7c9c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.BlendSpaceLibrary.GetPosition
	// FVector GetPosition(FBlendSpaceReference& BlendSpace);                                                                   // [0x64d6cd4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
	// FVector GetFilteredPosition(FBlendSpaceReference& BlendSpace);                                                           // [0x64d6bec] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
	// void ConvertToBlendSpacePure(FAnimNodeReference& Node, FBlendSpaceReference& BlendSpace, bool& Result);                  // [0x64d5ee4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
	// FBlendSpaceReference ConvertToBlendSpace(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);          // [0x64d5db8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationOverride
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencerAnimationOverride : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.SequencerAnimationOverride.GetSequencerAnimSlotNames
	// TArray<FName> GetSequencerAnimSlotNames();                                                                               // [0x64d6f14] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/AnimGraphRuntime.SequencerAnimationOverride.AllowsCinematicOverride
	// bool AllowsCinematicOverride();                                                                                          // [0x284fe1c] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/AnimGraphRuntime.AnimationStateMachineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.SetState
	// void SetState(FAnimUpdateContext& UpdateContext, FAnimationStateMachineReference& Node, FName TargetState, float duration, TEnumAsByte<ETransitionLogicType> BlendType, class UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve); // [0x64d7614] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
	// bool IsStateBlendingOut(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node);                        // [0x64d7304] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
	// bool IsStateBlendingIn(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node);                         // [0x64d7184] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetState
	// FName GetState(FAnimUpdateContext& UpdateContext, FAnimationStateMachineReference& Node);                                // [0x64d6f54] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
	// float GetRelevantAnimTimeRemainingFraction(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node);     // [0x64d6dbc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
	// float GetRelevantAnimTimeRemaining(FAnimUpdateContext& UpdateContext, FAnimationStateResultReference& Node);             // [0x2a3d914] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
	// void ConvertToAnimationStateResultPure(FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, bool& Result); // [0x64d5c4c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
	// void ConvertToAnimationStateResult(FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, EAnimNodeReferenceConversionResult& Result); // [0x2a3d7b0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
	// void ConvertToAnimationStateMachinePure(FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, bool& Result); // [0x64d5a7c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
	// void ConvertToAnimationStateMachine(FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, EAnimNodeReferenceConversionResult& Result); // [0x64d590c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.AnimExecutionContextLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.IsActive
	// bool IsActive(FAnimExecutionContext& Context);                                                                           // [0x64d70d4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
	// float GetDeltaTime(FAnimUpdateContext& Context);                                                                         // [0x64d6af0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
	// float GetCurrentWeight(FAnimUpdateContext& Context);                                                                     // [0x64d69f4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
	// FAnimNodeReference GetAnimNodeReference(class UAnimInstance* Instance, int32_t Index);                                   // [0x64d6928] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
	// class UAnimInstance* GetAnimInstance(FAnimExecutionContext& Context);                                                    // [0x64d6870] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
	// FAnimUpdateContext ConvertToUpdateContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // [0x64d6744] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
	// FAnimPoseContext ConvertToPoseContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result);    // [0x64d6318] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
	// FAnimInitializationContext ConvertToInitializationContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // [0x64d61ec] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
	// FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result); // [0x64d60c0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     NotifyName                                                  OFFSET(getStruct<T>, {0x38, 4, 0, 0})
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     NotifyName                                                  OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0000 (0x000370 - 0x000370)
class UAnimSequencerInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/AnimGraphRuntime.BlendListBaseLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendListBaseLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.BlendListBaseLibrary.ResetNode
	// void ResetNode(FBlendListBaseReference& BlendListBase);                                                                  // [0x24d07c4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.BlendListBaseLibrary.ConvertToBlendListBase
	// FBlendListBaseReference ConvertToBlendListBase(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);    // [0x2a3d680] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.BlendSpacePlayerLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition
	// void SnapToPosition(FBlendSpacePlayerReference& BlendSpacePlayer, FVector NewPosition);                                  // [0x64fc640] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
	// bool ShouldResetPlayTimeWhenBlendSpaceChanges(FBlendSpacePlayerReference& BlendSpacePlayer);                             // [0x64fc580] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
	// FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset); // [0x64fc3ec] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
	// FBlendSpacePlayerReference SetPlayRate(FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate);                    // [0x64fc260] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
	// FBlendSpacePlayerReference SetLoop(FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop);                            // [0x64fbdac] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
	// FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(FAnimUpdateContext& UpdateContext, FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float BlendTime); // [0x64fb91c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
	// FBlendSpacePlayerReference SetBlendSpace(FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace);   // [0x64fb78c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
	// float GetStartPosition(FBlendSpacePlayerReference& BlendSpacePlayer);                                                    // [0x64f8d04] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
	// FVector GetPosition(FBlendSpacePlayerReference& BlendSpacePlayer);                                                       // [0x64f8c1c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
	// float GetPlayRate(FBlendSpacePlayerReference& BlendSpacePlayer);                                                         // [0x64f8b8c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
	// bool GetLoop(FBlendSpacePlayerReference& BlendSpacePlayer);                                                              // [0x64f87fc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
	// class UBlendSpace* GetBlendSpace(FBlendSpacePlayerReference& BlendSpacePlayer);                                          // [0x64f867c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
	// void ConvertToBlendSpacePlayerPure(FAnimNodeReference& Node, FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result); // [0x64f773c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
	// FBlendSpacePlayerReference ConvertToBlendSpacePlayer(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x64f7610] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // [0x64fa874] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	// void K2_StartProfilingTimer();                                                                                           // [0x64fa860] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	// FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // [0x64fa5a8] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	// float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);                                     // [0x64fa484] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // [0x64f9eec] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	// float K2_EndProfilingTimer(bool bLog, FString LogPrefix);                                                                // [0x64f9d30] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	// float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // [0x2316b98] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	// FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo); // [0x64f9c28] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	// float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve); // [0x64f92ec] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	// float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector Position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // [0x64f8e54] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
	// float CalculateDirection(FVector& Velocity, FRotator& BaseRotation);                                                     // [0x64f74e8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimGraphRuntime.LayeredBoneBlendLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
	// FLayeredBoneBlendReference SetBlendMask(FAnimUpdateContext& UpdateContext, FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, FName BlendMaskName); // [0x64fb468] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
	// int32_t GetNumPoses(FLayeredBoneBlendReference& LayeredBoneBlend);                                                       // [0x64f8acc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
	// FLayeredBoneBlendReference ConvertToLayeredBoneBlend(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x64f7af4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
	// void ConvertToLayeredBlendPerBonePure(FAnimNodeReference& Node, FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result); // [0x64f7918] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimGraphRuntime.LinkedAnimGraphLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
	// bool HasLinkedAnimInstance(FLinkedAnimGraphReference& Node);                                                             // [0x64f8d94] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
	// class UAnimInstance* GetLinkedAnimInstance(FLinkedAnimGraphReference& Node);                                             // [0x64f873c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
	// void ConvertToLinkedAnimGraphPure(FAnimNodeReference& Node, FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result);   // [0x64f7d4c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
	// FLinkedAnimGraphReference ConvertToLinkedAnimGraph(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x64f7c20] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.MirrorAnimLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMirrorAnimLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.MirrorAnimLibrary.SetMirrorTransitionBlendTime
	// FMirrorAnimNodeReference SetMirrorTransitionBlendTime(FMirrorAnimNodeReference& MirrorNode, float InBlendTime);          // [0x64fc0d4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.MirrorAnimLibrary.SetMirror
	// FMirrorAnimNodeReference SetMirror(FMirrorAnimNodeReference& MirrorNode, bool bInMirror);                                // [0x64fbf40] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.MirrorAnimLibrary.GetMirrorTransitionBlendTime
	// float GetMirrorTransitionBlendTime(FMirrorAnimNodeReference& MirrorNode);                                                // [0x64f8a3c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.MirrorAnimLibrary.GetMirrorDataTable
	// class UMirrorDataTable* GetMirrorDataTable(FMirrorAnimNodeReference& MirrorNode);                                        // [0x64f897c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.MirrorAnimLibrary.GetMirror
	// bool GetMirror(FMirrorAnimNodeReference& MirrorNode);                                                                    // [0x64f88bc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.MirrorAnimLibrary.ConvertToMirrorNodePure
	// void ConvertToMirrorNodePure(FAnimNodeReference& Node, FMirrorAnimNodeReference& MirrorNode, bool& Result);              // [0x64f8054] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.MirrorAnimLibrary.ConvertToMirrorNode
	// FMirrorAnimNodeReference ConvertToMirrorNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);      // [0x64f7f28] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.ModifyCurveAnimLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModifyCurveAnimLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.ModifyCurveAnimLibrary.SetCurveMap
	// FModifyCurveAnimNodeReference SetCurveMap(FModifyCurveAnimNodeReference& ModifyCurveNode, TMap<FName, float>& InCurveMap); // [0x64fbc3c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.ModifyCurveAnimLibrary.SetApplyMode
	// FModifyCurveAnimNodeReference SetApplyMode(FModifyCurveAnimNodeReference& ModifyCurveNode, EModifyCurveApplyMode InMode); // [0x64fb2d8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.ModifyCurveAnimLibrary.SetAlpha
	// FModifyCurveAnimNodeReference SetAlpha(FModifyCurveAnimNodeReference& ModifyCurveNode, float InAlpha);                   // [0x64fb14c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.ModifyCurveAnimLibrary.GetApplyMode
	// EModifyCurveApplyMode GetApplyMode(FModifyCurveAnimNodeReference& ModifyCurveNode);                                      // [0x64f85c8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.ModifyCurveAnimLibrary.GetAlpha
	// float GetAlpha(FModifyCurveAnimNodeReference& ModifyCurveNode);                                                          // [0x64f8538] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.ModifyCurveAnimLibrary.ConvertToModifyCurveNodePure
	// void ConvertToModifyCurveNodePure(FAnimNodeReference& Node, FModifyCurveAnimNodeReference& ModifyCurveNode, bool& Result); // [0x64f835c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.ModifyCurveAnimLibrary.ConvertToModifyCurveNode
	// FModifyCurveAnimNodeReference ConvertToModifyCurveNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x64f8230] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPlayMontageCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnCompleted                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlendOut                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterrupted                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyBegin                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyEnd                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x64fb06c] Final|RequiredAPI|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x64faf8c] Final|RequiredAPI|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0x64faec4] Final|RequiredAPI|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x64fadfc] Final|RequiredAPI|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x2f943a8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequenceEvaluatorLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
	// FSequenceEvaluatorReference SetSequenceWithInertialBlending(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence, float BlendTime); // [0x6502044] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
	// FSequenceEvaluatorReference SetSequence(FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* Sequence); // [0x6501d24] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
	// FSequenceEvaluatorReference SetExplicitTime(FSequenceEvaluatorReference& SequenceEvaluator, float Time);                 // [0x6501a0c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitFrame
	// FSequenceEvaluatorReference SetExplicitFrame(FSequenceEvaluatorReference& SequenceEvaluator, int32_t Frame);             // [0x650187c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
	// class UAnimSequenceBase* GetSequence(FSequenceEvaluatorReference& SequenceEvaluator);                                    // [0x6501248] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
	// float GetAccumulatedTime(FSequenceEvaluatorReference& SequenceEvaluator);                                                // [0x6500f48] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
	// void ConvertToSequenceEvaluatorPure(FAnimNodeReference& Node, FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // [0x650075c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
	// FSequenceEvaluatorReference ConvertToSequenceEvaluator(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x6500630] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
	// FSequenceEvaluatorReference AdvanceTime(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate); // [0x6500268] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequencePlayerLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
	// FSequencePlayerReference SetStartPosition(FSequencePlayerReference& SequencePlayer, float StartPosition);                // [0x6502684] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
	// FSequencePlayerReference SetSequenceWithInertialBlending(FAnimUpdateContext& UpdateContext, FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime); // [0x6502364] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetSequence
	// FSequencePlayerReference SetSequence(FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence);       // [0x6501eb4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
	// FSequencePlayerReference SetPlayRate(FSequencePlayerReference& SequencePlayer, float PlayRate);                          // [0x6501b98] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
	// FSequencePlayerReference SetAccumulatedTime(FSequencePlayerReference& SequencePlayer, float Time);                       // [0x6501564] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
	// float GetStartPosition(FSequencePlayerReference& SequencePlayer);                                                        // [0x65014d4] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
	// class UAnimSequenceBase* GetSequencePure(FSequencePlayerReference& SequencePlayer);                                      // [0x6501414] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetSequence
	// FSequencePlayerReference GetSequence(FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase*& SequenceBase);  // [0x6501308] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
	// float GetPlayRate(FSequencePlayerReference& SequencePlayer);                                                             // [0x65011b8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
	// bool GetLoopAnimation(FSequencePlayerReference& SequencePlayer);                                                         // [0x65010f8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
	// float GetAccumulatedTime(FSequencePlayerReference& SequencePlayer);                                                      // [0x6500fd8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
	// void ConvertToSequencePlayerPure(FAnimNodeReference& Node, FSequencePlayerReference& SequencePlayer, bool& Result);      // [0x6500a64] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
	// FSequencePlayerReference ConvertToSequencePlayer(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);  // [0x6500938] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
	// float ComputePlayRateFromDuration(FSequencePlayerReference& SequencePlayer, float duration);                             // [0x65004ac] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencerAnimationSupport : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.SkeletalControlLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
	// FSkeletalControlReference SetAlpha(FSkeletalControlReference& SkeletalControl, float Alpha);                             // [0x65016f0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
	// float GetAlpha(FSkeletalControlReference& SkeletalControl);                                                              // [0x6501068] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
	// void ConvertToSkeletalControlPure(FAnimNodeReference& Node, FSkeletalControlReference& SkeletalControl, bool& Result);   // [0x6500d6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
	// FSkeletalControlReference ConvertToSkeletalControl(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x6500c40] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
/// Size: 0x0050 (0x000010 - 0x000060)
class FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               GroupRole                                                   OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(class UBlendSpace*)                        BlendSpace                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TArray<FPoseLink>)                         SamplePoseLinks                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraph
/// Size: 0x0000 (0x000060 - 0x000060)
class FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
/// Size: 0x0000 (0x000020 - 0x000020)
class FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FAnimNode_SkeletalControlBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FComponentSpacePoseLink)                   ComponentPose                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x38, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x84, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0060 (0x0000C8 - 0x000128)
class FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        TranslationMode                                             OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        RotationMode                                                OFFSET(get<T>, {0x121, 1, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        ScaleMode                                                   OFFSET(get<T>, {0x122, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            TranslationSpace                                            OFFSET(get<T>, {0x123, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            RotationSpace                                               OFFSET(get<T>, {0x124, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ScaleSpace                                                  OFFSET(get<T>, {0x125, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimNode_RefPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.RigidBodyAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigidBodyAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
class FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    RotationAxisToRefer                                         OFFSET(get<T>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 OFFSET(get<bool>, {0xE5, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.BlendSpaceReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendSpaceReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FRotationRetargetingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FTransform)                                Source                                                      OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Target                                                      OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	CMember(ERotationComponent)                        RotationComponent                                           OFFSET(get<T>, {0xD0, 1, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	DMember(bool)                                      bUseAbsoluteAngle                                           OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(EEasingFuncType)                           EasingType                                                  OFFSET(get<T>, {0x104, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        CustomCurve                                                 OFFSET(getStruct<T>, {0x108, 136, 0, 0})
	DMember(bool)                                      bFlipEasing                                                 OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(float)                                     EasingWeight                                                OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      bClamp                                                      OFFSET(get<bool>, {0x198, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (0x000000 - 0x000030)
class FPositionHistory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Range                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimationStateResultReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimationStateResultReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimationStateMachineReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimationStateMachineReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
/// Size: 0x0030 (0x000038 - 0x000068)
class FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UBlendSpace*)                        PreviousBlendSpace                                          OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x0008 (0x000068 - 0x000070)
class FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UBlendSpace*)                        BlendSpace                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x0150 (0x000070 - 0x0001C0)
class FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	SMember(FName)                                     SourceSocketName                                            OFFSET(getStruct<T>, {0x144, 4, 0, 0})
	SMember(FName)                                     PivotSocketName                                             OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	SMember(FVector)                                   LookAtLocation                                              OFFSET(getStruct<T>, {0x150, 24, 0, 0})
	SMember(FVector)                                   SocketAxis                                                  OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FAnimNode_ApplyAdditive : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FPoseLink)                                 base                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 Additive                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x40, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x8C, 48, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0xC1, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x001C (0x000000 - 0x00001C)
class FBlendBoneByChannelEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(bool)                                      bBlendTranslation                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bBlendRotation                                              OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bBlendScale                                                 OFFSET(get<bool>, {0x1A, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0058 (0x000010 - 0x000068)
class FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPoseLink)                                 A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FBlendBoneByChannelEntry>)          BoneDefinitions                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            TransformsSpace                                             OFFSET(get<T>, {0x60, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0038 (0x000010 - 0x000048)
class FAnimNode_BlendListBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPoseLink>)                         BlendPose                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0000 (0x000048 - 0x000048)
class FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0000 (0x000048 - 0x000048)
class FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0000 (0x000048 - 0x000048)
class FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (0x000070 - 0x000078)
class FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     NormalizedTime                                              OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bTeleportToNormalizedTime                                   OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
/// Size: 0x0028 (0x000068 - 0x000090)
class FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               GroupRole                                                   OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(EAnimSyncMethod)                           Method                                                      OFFSET(get<T>, {0x6D, 1, 0, 0})
	DMember(bool)                                      bIgnoreForRelevancyTest                                     OFFSET(get<bool>, {0x6E, 1, 0, 0})
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(bool)                                      bResetPlayTimeWhenBlendSpaceChanges                         OFFSET(get<bool>, {0x7D, 1, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(class UBlendSpace*)                        BlendSpace                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CallFunction
/// Size: 0x0028 (0x000010 - 0x000038)
class FAnimNode_CallFunction : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(EAnimFunctionCallSite)                     CallSite                                                    OFFSET(get<T>, {0x34, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x0140 (0x000010 - 0x000150)
class FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SourceMeshComponent                                         OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bCopyCurves                                                 OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bCopyCustomAttributes                                       OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bUseMeshPose                                                OFFSET(get<bool>, {0x1A, 1, 1, 0})
	SMember(FName)                                     RootBoneToCopy                                              OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0028 (0x000010 - 0x000038)
class FAnimNode_CurveSource : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     SourceBinding                                               OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   CurveSource                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00E0 (0x000010 - 0x0000F0)
class FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPoseLink>)                         BlendPoses                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(ELayeredBoneBlendMode)                     BlendMode                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<class UBlendProfile*>)              BlendMasks                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FInputBlendPose>)                   LayerSetup                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<float>)                             BlendWeights                                                OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bMeshSpaceRotationBlend                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bMeshSpaceScaleBlend                                        OFFSET(get<bool>, {0x69, 1, 0, 0})
	CMember(TEnumAsByte<ECurveBlendOption>)            CurveBlendOption                                            OFFSET(get<T>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bBlendRootMotionBasedOnRootBone                             OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	CMember(TArray<FPerBoneBlendWeight>)               PerBoneBlendWeights                                         OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FGuid)                                     SkeletonGuid                                                OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FGuid)                                     VirtualBoneGuid                                             OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0028 (0x000010 - 0x000038)
class FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPoseLink)                                 base                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 Additive                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bMeshSpaceAdditive                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MirrorBase
/// Size: 0x0038 (0x000010 - 0x000048)
class FAnimNode_MirrorBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Mirror
/// Size: 0x0000 (0x000048 - 0x000048)
class FAnimNode_Mirror : public FAnimNode_MirrorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Mirror_Standalone
/// Size: 0x0018 (0x000048 - 0x000060)
class FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bMirror                                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(class UMirrorDataTable*)                   MirrorDataTable                                             OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bResetChild                                                 OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bBoneMirroring                                              OFFSET(get<bool>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bCurveMirroring                                             OFFSET(get<bool>, {0x5E, 1, 0, 0})
	DMember(bool)                                      bAttributeMirroring                                         OFFSET(get<bool>, {0x5F, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0110 (0x000010 - 0x000120)
class FAnimNode_ModifyCurve : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TMap<FName, float>)                        CurveMap                                                    OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<float>)                             CurveValues                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FName>)                             CurveNames                                                  OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(EModifyCurveApplyMode)                     ApplyMode                                                   OFFSET(get<T>, {0x11C, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (0x000010 - 0x000050)
class FAnimNode_MultiWayBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FPoseLink>)                         Poses                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             DesiredAlphas                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bAdditiveNode                                               OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bNormalizeAlpha                                             OFFSET(get<bool>, {0x49, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0060 (0x000038 - 0x000098)
class FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(class UPoseAsset*)                         PoseAsset                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0038 (0x000098 - 0x0000D0)
class FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(class UCurveFloat*)                        CustomCurve                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0010 (0x000098 - 0x0000A8)
class FAnimNode_PoseByName : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FName)                                     PoseName                                                    OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	DMember(float)                                     PoseWeight                                                  OFFSET(get<float>, {0x9C, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0030 (0x000000 - 0x000030)
class FPoseDriverTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   TargetTranslation                                           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FPoseDriverTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPoseDriverTransform>)              BoneTransforms                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     TargetScale                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(ERBFFunctionType)                          FunctionType                                                OFFSET(get<T>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bApplyCustomCurve                                           OFFSET(get<bool>, {0x2E, 1, 0, 0})
	SMember(FRichCurve)                                CustomCurve                                                 OFFSET(getStruct<T>, {0x30, 128, 0, 0})
	SMember(FName)                                     DrivenName                                                  OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bIsHidden                                                   OFFSET(get<bool>, {0xBC, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x0100 (0x000098 - 0x000198)
class FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    SourceBones                                                 OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FBoneReference)                            EvalSpaceBone                                               OFFSET(getStruct<T>, {0xB8, 12, 0, 0})
	DMember(bool)                                      bEvalFromRefPose                                            OFFSET(get<bool>, {0xC4, 1, 0, 0})
	CMember(TArray<FBoneReference>)                    OnlyDriveBones                                              OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FPoseDriverTarget>)                 PoseTargets                                                 OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FRBFParams)                                RBFParams                                                   OFFSET(getStruct<T>, {0xE8, 56, 0, 0})
	CMember(EPoseDriverSource)                         DriveSource                                                 OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(EPoseDriverOutput)                         DriveOutput                                                 OFFSET(get<T>, {0x121, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x164, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x0038 (0x000000 - 0x000038)
class FRBFParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   TargetDimensions                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(ERBFSolverType)                            SolverType                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bAutomaticRadius                                            OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(ERBFFunctionType)                          Function                                                    OFFSET(get<T>, {0xD, 1, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0xE, 1, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    TwistAxis                                                   OFFSET(get<T>, {0xF, 1, 0, 0})
	DMember(float)                                     WeightThreshold                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(ERBFNormalizeMethod)                       NormalizeMethod                                             OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FVector)                                   MedianReference                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     MedianMin                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MedianMax                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x0070 (0x000010 - 0x000080)
class FAnimNode_PoseSnapshot : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     SnapshotName                                                OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FPoseSnapshot)                             Snapshot                                                    OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	CMember(ESnapshotSourceMode)                       Mode                                                        OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (0x000000 - 0x000050)
class FRandomPlayerSequenceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UAnimSequenceBase*)                  Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     ChanceToPlay                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinLoopCount                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxLoopCount                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     MinPlayRate                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxPlayRate                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FAlphaBlend)                               BlendIn                                                     OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0068 (0x000010 - 0x000078)
class FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FRandomPlayerSequenceEntry>)        Entries                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bShuffleMode                                                OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x00A0 (0x000010 - 0x0000B0)
class FAnimNode_RotateRootBone : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     pitch                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      PitchScaleBiasClamp                                         OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	SMember(FInputScaleBiasClamp)                      YawScaleBiasClamp                                           OFFSET(getStruct<T>, {0x58, 48, 0, 0})
	SMember(FRotator)                                  MeshToComponent                                             OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(bool)                                      bRotateRootMotionAttribute                                  OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00A8 (0x000070 - 0x000118)
class FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x90, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0xDC, 48, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x111, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
/// Size: 0x00A8 (0x000060 - 0x000108)
class FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x80, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0xCC, 48, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x100, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x101, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
/// Size: 0x0008 (0x000038 - 0x000040)
class FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0000 (0x000040 - 0x000040)
class FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
/// Size: 0x0028 (0x000040 - 0x000068)
class FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               GroupRole                                                   OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(EAnimSyncMethod)                           Method                                                      OFFSET(get<T>, {0x45, 1, 0, 0})
	DMember(bool)                                      bIgnoreForRelevancyTest                                     OFFSET(get<bool>, {0x46, 1, 0, 0})
	CMember(class UAnimSequenceBase*)                  Sequence                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     ExplicitTime                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bUseExplicitFrame                                           OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(int32_t)                                   ExplicitFrame                                               OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(bool)                                      bShouldLoop                                                 OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bTeleportToExplicitTime                                     OFFSET(get<bool>, {0x5D, 1, 0, 0})
	CMember(TEnumAsByte<ESequenceEvalReinit>)          ReinitializationBehavior                                    OFFSET(get<T>, {0x5E, 1, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0038 (0x000010 - 0x000048)
class FAnimNode_Slot : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(bool)                                      bAlwaysUpdateSourcePose                                     OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Sync
/// Size: 0x0018 (0x000010 - 0x000028)
class FAnimNode_Sync : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               GroupRole                                                   OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00B0 (0x000010 - 0x0000C0)
class FAnimNode_TwoWayBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FPoseLink)                                 A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x31, 1, 1, 0})
	DMember(bool)                                      bResetChildOnActivation                                     OFFSET(get<bool>, {0x31, 1, 1, 3})
	DMember(bool)                                      bAlwaysUpdateChildren                                       OFFSET(get<bool>, {0x31, 1, 1, 4})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x40, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x8C, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x0450 (0x000740 - 0x000B90)
class FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
};

/// Struct /Script/AnimGraphRuntime.BlendListBaseReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendListBaseReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.BlendSpacePlayerReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendSpacePlayerReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0088 (0x000000 - 0x000088)
class FAnimPhysConstraintSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(AnimPhysLinearConstraintType)              LinearXLimitType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(AnimPhysLinearConstraintType)              LinearYLimitType                                            OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(AnimPhysLinearConstraintType)              LinearZLimitType                                            OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FVector)                                   LinearAxesMin                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   LinearAxesMax                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(AnimPhysAngularConstraintType)             AngularConstraintType                                       OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(AnimPhysTwistAxis)                         TwistAxis                                                   OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(AnimPhysTwistAxis)                         AngularTargetAxis                                           OFFSET(get<T>, {0x3A, 1, 0, 0})
	DMember(float)                                     ConeAngle                                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FVector)                                   AngularLimitsMin                                            OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AngularLimitsMax                                            OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   AngularTarget                                               OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0070 (0x000000 - 0x000070)
class FAnimPhysPlanarLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FTransform)                                PlaneTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0030 (0x000000 - 0x000030)
class FAnimPhysSphericalLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   SphereLocalOffset                                           OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     LimitRadius                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(ESphericalLimitType)                       LimitType                                                   OFFSET(get<T>, {0x2C, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysBodyDefinition
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FAnimPhysBodyDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FBoneReference)                            BoundBone                                                   OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   BoxExtents                                                  OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   LocalJointOffset                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FAnimPhysConstraintSetup)                  ConstraintSetup                                             OFFSET(getStruct<T>, {0x40, 136, 0, 0})
	CMember(AnimPhysCollisionType)                     CollisionType                                               OFFSET(get<T>, {0xC8, 1, 0, 0})
	DMember(float)                                     SphereCollisionRadius                                       OFFSET(get<float>, {0xCC, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0448 (0x0000C8 - 0x000510)
class FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	DMember(float)                                     LinearDampingOverride                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     AngularDampingOverride                                      OFFSET(get<float>, {0xCC, 4, 0, 0})
	SMember(FBoneReference)                            RelativeSpaceBone                                           OFFSET(getStruct<T>, {0x190, 12, 0, 0})
	SMember(FBoneReference)                            BoundBone                                                   OFFSET(getStruct<T>, {0x19C, 12, 0, 0})
	SMember(FBoneReference)                            ChainEnd                                                    OFFSET(getStruct<T>, {0x1A8, 12, 0, 0})
	CMember(TArray<FAnimPhysBodyDefinition>)           PhysicsBodyDefinitions                                      OFFSET(get<T>, {0x1B8, 16, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x1C8, 4, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0x1D0, 24, 0, 0})
	DMember(float)                                     LinearSpringConstant                                        OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(float)                                     AngularSpringConstant                                       OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     WindScale                                                   OFFSET(get<float>, {0x1F0, 4, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	DMember(float)                                     AngularBiasOverride                                         OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(int32_t)                                   NumSolverIterationsPreUpdate                                OFFSET(get<int32_t>, {0x244, 4, 0, 0})
	DMember(int32_t)                                   NumSolverIterationsPostUpdate                               OFFSET(get<int32_t>, {0x248, 4, 0, 0})
	CMember(TArray<FAnimPhysSphericalLimit>)           SphericalLimits                                             OFFSET(get<T>, {0x250, 16, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x260, 24, 0, 0})
	CMember(TArray<FAnimPhysPlanarLimit>)              PlanarLimits                                                OFFSET(get<T>, {0x278, 16, 0, 0})
	CMember(AnimPhysSimSpaceType)                      SimulationSpace                                             OFFSET(get<T>, {0x288, 1, 0, 0})
	DMember(bool)                                      bUseSphericalLimits                                         OFFSET(get<bool>, {0x28B, 1, 1, 0})
	DMember(bool)                                      bUsePlanarLimit                                             OFFSET(get<bool>, {0x28B, 1, 1, 1})
	DMember(bool)                                      bDoUpdate                                                   OFFSET(get<bool>, {0x28B, 1, 1, 2})
	DMember(bool)                                      bDoEval                                                     OFFSET(get<bool>, {0x28B, 1, 1, 3})
	DMember(bool)                                      bOverrideLinearDamping                                      OFFSET(get<bool>, {0x28B, 1, 1, 4})
	DMember(bool)                                      bOverrideAngularBias                                        OFFSET(get<bool>, {0x28B, 1, 1, 5})
	DMember(bool)                                      bOverrideAngularDamping                                     OFFSET(get<bool>, {0x28B, 1, 1, 6})
	DMember(bool)                                      bEnableWind                                                 OFFSET(get<bool>, {0x28B, 1, 1, 7})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0x28C, 1, 1, 1})
	DMember(bool)                                      bGravityOverrideInSimSpace                                  OFFSET(get<bool>, {0x28C, 1, 1, 2})
	DMember(bool)                                      bLinearSpring                                               OFFSET(get<bool>, {0x28C, 1, 1, 3})
	DMember(bool)                                      bAngularSpring                                              OFFSET(get<bool>, {0x28C, 1, 1, 4})
	DMember(bool)                                      bChain                                                      OFFSET(get<bool>, {0x28C, 1, 1, 5})
	SMember(FRotationRetargetingInfo)                  RetargetingSettings                                         OFFSET(getStruct<T>, {0x290, 416, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x0040 (0x000000 - 0x000040)
class FAngularRangeLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   LimitMin                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LimitMax                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x30, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
class FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FAngularRangeLimit>)                AngularRangeLimits                                          OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FVector>)                           AngularOffsets                                              OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0058 (0x0000C8 - 0x000120)
class FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	CMember(class UCurveFloat*)                        DrivingCurve                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(double)                                    RangeMin                                                    OFFSET(get<double>, {0xE8, 8, 0, 0})
	DMember(double)                                    RangeMax                                                    OFFSET(get<double>, {0xF0, 8, 0, 0})
	DMember(double)                                    RemappedMin                                                 OFFSET(get<double>, {0xF8, 8, 0, 0})
	DMember(double)                                    RemappedMax                                                 OFFSET(get<double>, {0x100, 8, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	CMember(EDrivenDestinationMode)                    DestinationMode                                             OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(EDrivenBoneModificationMode)               ModificationMode                                            OFFSET(get<T>, {0x119, 1, 0, 0})
	CMember(TEnumAsByte<EComponentType>)               SourceComponent                                             OFFSET(get<T>, {0x11A, 1, 0, 0})
	DMember(bool)                                      bUseRange                                                   OFFSET(get<bool>, {0x11B, 1, 1, 0})
	DMember(bool)                                      bAffectTargetTranslationX                                   OFFSET(get<bool>, {0x11B, 1, 1, 1})
	DMember(bool)                                      bAffectTargetTranslationY                                   OFFSET(get<bool>, {0x11B, 1, 1, 2})
	DMember(bool)                                      bAffectTargetTranslationZ                                   OFFSET(get<bool>, {0x11B, 1, 1, 3})
	DMember(bool)                                      bAffectTargetRotationX                                      OFFSET(get<bool>, {0x11B, 1, 1, 4})
	DMember(bool)                                      bAffectTargetRotationY                                      OFFSET(get<bool>, {0x11B, 1, 1, 5})
	DMember(bool)                                      bAffectTargetRotationZ                                      OFFSET(get<bool>, {0x11B, 1, 1, 6})
	DMember(bool)                                      bAffectTargetScaleX                                         OFFSET(get<bool>, {0x11B, 1, 1, 7})
	DMember(bool)                                      bAffectTargetScaleY                                         OFFSET(get<bool>, {0x11C, 1, 1, 0})
	DMember(bool)                                      bAffectTargetScaleZ                                         OFFSET(get<bool>, {0x11C, 1, 1, 1})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x00E8 (0x0000C8 - 0x0001B0)
class FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FVector)                                   EffectorLocation                                            OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorLocationSpace                                       OFFSET(get<T>, {0xE0, 1, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FBoneReference)                            TipBone                                                     OFFSET(getStruct<T>, {0x170, 12, 0, 0})
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bEnableRotationLimit                                        OFFSET(get<bool>, {0x191, 1, 0, 0})
	CMember(TArray<float>)                             RotationLimitPerJoints                                      OFFSET(get<T>, {0x198, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x0018 (0x000000 - 0x000018)
class FConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(EConstraintOffsetOption)                   OffsetOption                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(ETransformConstraintType)                  TransformType                                               OFFSET(get<T>, {0xD, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      PerAxis                                                     OFFSET(getStruct<T>, {0xE, 3, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0040 (0x0000C8 - 0x000108)
class FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	CMember(TArray<FConstraint>)                       ConstraintSetup                                             OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<float>)                             ConstraintWeights                                           OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
class FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	DMember(bool)                                      bCopyTranslation                                            OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bCopyRotation                                               OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(bool)                                      bCopyScale                                                  OFFSET(get<bool>, {0xE2, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ControlSpace                                                OFFSET(get<T>, {0xE3, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
class FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	DMember(bool)                                      bCopyTranslation                                            OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bCopyRotation                                               OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(bool)                                      bCopyScale                                                  OFFSET(get<bool>, {0xE2, 1, 0, 0})
	CMember(CopyBoneDeltaMode)                         CopyMode                                                    OFFSET(get<T>, {0xE3, 1, 0, 0})
	DMember(float)                                     TranslationMultiplier                                       OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     RotationMultiplier                                          OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0xEC, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x0118 (0x0000C8 - 0x0001E0)
class FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0x130, 128, 0, 0})
	SMember(FBoneReference)                            TipBone                                                     OFFSET(getStruct<T>, {0x1B0, 12, 0, 0})
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0x1BC, 12, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1CC, 4, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorTransformSpace                                      OFFSET(get<T>, {0x1D0, 1, 0, 0})
	CMember(TEnumAsByte<EBoneRotationSource>)          EffectorRotationSource                                      OFFSET(get<T>, {0x1D1, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0060 (0x0000C8 - 0x000128)
class FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FBoneReference)                            RightHandFK                                                 OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            LeftHandFK                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	SMember(FBoneReference)                            RightHandIK                                                 OFFSET(getStruct<T>, {0xE0, 12, 0, 0})
	SMember(FBoneReference)                            LeftHandIK                                                  OFFSET(getStruct<T>, {0xEC, 12, 0, 0})
	CMember(TArray<FBoneReference>)                    IKBonesToMove                                               OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FVector)                                   PerAxisAlpha                                                OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	DMember(float)                                     HandFKWeight                                                OFFSET(get<float>, {0x120, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x0070 (0x000000 - 0x000070)
class FIKChainLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0050 (0x000000 - 0x000050)
class FIKChain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FAnimLegIKDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     MinRotationAngle                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        FootBoneForwardAxis                                         OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(bool)                                      bEnableRotationLimit                                        OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      bEnableKneeTwistCorrection                                  OFFSET(get<bool>, {0x23, 1, 0, 0})
	SMember(FName)                                     TwistOffsetCurveName                                        OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FAnimLegIKData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0038 (0x0000C8 - 0x000100)
class FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(float)                                     ReachPrecision                                              OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	DMember(float)                                     SoftPercentLength                                           OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     SoftAlpha                                                   OFFSET(get<float>, {0xD4, 4, 0, 0})
	CMember(TArray<FAnimLegIKDefinition>)              LegsDefinition                                              OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x0178 (0x0000C8 - 0x000240)
class FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneSocketTarget)                         LookAtTarget                                                OFFSET(getStruct<T>, {0xE0, 128, 0, 0})
	SMember(FVector)                                   LookAtLocation                                              OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FAxis)                                     LookAt_Axis                                                 OFFSET(getStruct<T>, {0x178, 32, 0, 0})
	DMember(bool)                                      bUseLookUpAxis                                              OFFSET(get<bool>, {0x198, 1, 0, 0})
	CMember(TEnumAsByte<EInterpolationBlend>)          InterpolationType                                           OFFSET(get<T>, {0x199, 1, 0, 0})
	SMember(FAxis)                                     LookUp_Axis                                                 OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})
	DMember(float)                                     LookAtClamp                                                 OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     InterpolationTriggerThreashold                              OFFSET(get<float>, {0x1C8, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0058 (0x0000C8 - 0x000120)
class FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FBoneReference)                            BoneToObserve                                               OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            DisplaySpace                                                OFFSET(get<T>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bRelativeToRefPose                                          OFFSET(get<bool>, {0xD5, 1, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x108, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Struct /Script/AnimGraphRuntime.SimSpaceSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FSimSpaceSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     WorldAlpha                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     VelocityScaleZ                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxLinearVelocity                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxAngularVelocity                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxLinearAcceleration                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxAngularAcceleration                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector)                                   ExternalLinearDragV                                         OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   ExternalLinearVelocity                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   ExternalAngularVelocity                                     OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x08A8 (0x0000C8 - 0x000970)
class FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2416;

public:
	CMember(class UPhysicsAsset*)                      OverridePhysicsAsset                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bDefaultToSkeletalMeshPhysicsAsset                          OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bUseLocalLODThresholdOnly                                   OFFSET(get<bool>, {0x208, 1, 0, 0})
	SMember(FVector)                                   OverrideWorldGravity                                        OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x240, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x258, 24, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x270, 24, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings                                            OFFSET(getStruct<T>, {0x288, 96, 0, 0})
	DMember(float)                                     CachedBoundsScale                                           OFFSET(get<float>, {0x2E8, 4, 0, 0})
	SMember(FBoneReference)                            BaseBoneRef                                                 OFFSET(getStruct<T>, {0x2EC, 12, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x2F8, 1, 0, 0})
	CMember(ESimulationSpace)                          SimulationSpace                                             OFFSET(get<T>, {0x2F9, 1, 0, 0})
	DMember(bool)                                      bForceDisableCollisionBetweenConstraintBodies               OFFSET(get<bool>, {0x2FA, 1, 0, 0})
	DMember(bool)                                      bUseExternalClothCollision                                  OFFSET(get<bool>, {0x2FB, 1, 0, 0})
	DMember(bool)                                      bEnableWorldGeometry                                        OFFSET(get<bool>, {0x2FD, 1, 1, 0})
	DMember(bool)                                      bOverrideWorldGravity                                       OFFSET(get<bool>, {0x2FD, 1, 1, 1})
	DMember(bool)                                      bTransferBoneVelocities                                     OFFSET(get<bool>, {0x2FD, 1, 1, 2})
	DMember(bool)                                      bFreezeIncomingPoseOnStart                                  OFFSET(get<bool>, {0x2FD, 1, 1, 3})
	DMember(bool)                                      bClampLinearTranslationLimitToRefPose                       OFFSET(get<bool>, {0x2FD, 1, 1, 4})
	DMember(float)                                     WorldSpaceMinimumScale                                      OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     EvaluationResetTime                                         OFFSET(get<float>, {0x304, 4, 0, 0})
	CMember(ESimulationTiming)                         SimulationTiming                                            OFFSET(get<T>, {0x309, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0070 (0x000010 - 0x000080)
class FAnimNode_ScaleChainLength : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     DefaultChainLength                                          OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FBoneReference)                            ChainStartBone                                              OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FBoneReference)                            ChainEndBone                                                OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(EScaleChainInitialLength)                  ChainInitialLength                                          OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0010 (0x000000 - 0x000010)
class FSplineIKCachedBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   RefSkeletonIndex                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x01A0 (0x0000C8 - 0x000268)
class FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FBoneReference)                            StartBone                                                   OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            EndBone                                                     OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	CMember(ESplineBoneAxis)                           BoneAxis                                                    OFFSET(get<T>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bAutoCalculateSpline                                        OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(int32_t)                                   PointCount                                                  OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	CMember(TArray<FTransform>)                        ControlPoints                                               OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     TwistStart                                                  OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     TwistEnd                                                    OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FAlphaBlend)                               TwistBlend                                                  OFFSET(getStruct<T>, {0x108, 48, 0, 0})
	DMember(float)                                     Stretch                                                     OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x13C, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x00A0 (0x0000C8 - 0x000168)
class FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FBoneReference)                            SpringBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(double)                                    MaxDisplacement                                             OFFSET(get<double>, {0xD8, 8, 0, 0})
	DMember(double)                                    SpringStiffness                                             OFFSET(get<double>, {0xE0, 8, 0, 0})
	DMember(double)                                    SpringDamping                                               OFFSET(get<double>, {0xE8, 8, 0, 0})
	DMember(double)                                    ErrorResetThresh                                            OFFSET(get<double>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bLimitDisplacement                                          OFFSET(get<bool>, {0x164, 1, 1, 0})
	DMember(bool)                                      bTranslateX                                                 OFFSET(get<bool>, {0x164, 1, 1, 1})
	DMember(bool)                                      bTranslateY                                                 OFFSET(get<bool>, {0x164, 1, 1, 2})
	DMember(bool)                                      bTranslateZ                                                 OFFSET(get<bool>, {0x164, 1, 1, 3})
	DMember(bool)                                      bRotateX                                                    OFFSET(get<bool>, {0x164, 1, 1, 4})
	DMember(bool)                                      bRotateY                                                    OFFSET(get<bool>, {0x164, 1, 1, 5})
	DMember(bool)                                      bRotateZ                                                    OFFSET(get<bool>, {0x164, 1, 1, 6})
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0030 (0x000000 - 0x000030)
class FRotationLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   LimitMin                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LimitMax                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x01D8 (0x0000C8 - 0x0002A0)
class FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FBoneReference)                            TrailBone                                                   OFFSET(getStruct<T>, {0x130, 12, 0, 0})
	DMember(int32_t)                                   ChainLength                                                 OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        ChainBoneAxis                                               OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(bool)                                      bInvertChainBoneAxis                                        OFFSET(get<bool>, {0x141, 1, 1, 0})
	DMember(bool)                                      bLimitStretch                                               OFFSET(get<bool>, {0x141, 1, 1, 1})
	DMember(bool)                                      bLimitRotation                                              OFFSET(get<bool>, {0x141, 1, 1, 2})
	DMember(bool)                                      bUsePlanarLimit                                             OFFSET(get<bool>, {0x141, 1, 1, 3})
	DMember(bool)                                      bActorSpaceFakeVel                                          OFFSET(get<bool>, {0x141, 1, 1, 4})
	DMember(bool)                                      bReorientParentToChild                                      OFFSET(get<bool>, {0x141, 1, 1, 5})
	DMember(float)                                     MaxDeltaTime                                                OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     RelaxationSpeedScale                                        OFFSET(get<float>, {0x148, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        TrailRelaxationSpeed                                        OFFSET(getStruct<T>, {0x150, 136, 0, 0})
	SMember(FInputScaleBiasClamp)                      RelaxationSpeedScaleInputProcessor                          OFFSET(getStruct<T>, {0x1D8, 48, 0, 0})
	CMember(TArray<FRotationLimit>)                    RotationLimits                                              OFFSET(get<T>, {0x208, 16, 0, 0})
	CMember(TArray<FVector>)                           RotationOffsets                                             OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<FAnimPhysPlanarLimit>)              PlanarLimits                                                OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(float)                                     StretchLimit                                                OFFSET(get<float>, {0x238, 4, 0, 0})
	SMember(FVector)                                   FakeVelocity                                                OFFSET(getStruct<T>, {0x240, 24, 0, 0})
	SMember(FBoneReference)                            BaseJoint                                                   OFFSET(getStruct<T>, {0x258, 12, 0, 0})
	DMember(float)                                     LastBoneRotationAnimAlphaBlend                              OFFSET(get<float>, {0x264, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0030 (0x000000 - 0x000030)
class FReferenceBoneFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FAxis)                                     Axis                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0098 (0x0000C8 - 0x000160)
class FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FReferenceBoneFrame)                       BaseFrame                                                   OFFSET(getStruct<T>, {0xC8, 48, 0, 0})
	SMember(FReferenceBoneFrame)                       TwistFrame                                                  OFFSET(getStruct<T>, {0xF8, 48, 0, 0})
	SMember(FAxis)                                     TwistPlaneNormalAxis                                        OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	DMember(float)                                     RangeMax                                                    OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     RemappedMin                                                 OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     RemappedMax                                                 OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FName)                                     CurveName                                                   OFFSET(getStruct<T>, {0x154, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0198 (0x0000C8 - 0x000260)
class FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FBoneReference)                            IKBone                                                      OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(double)                                    StartStretchRatio                                           OFFSET(get<double>, {0xD8, 8, 0, 0})
	DMember(double)                                    MaxStretchScale                                             OFFSET(get<double>, {0xE0, 8, 0, 0})
	SMember(FVector)                                   EffectorLocation                                            OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0x110, 128, 0, 0})
	SMember(FVector)                                   JointTargetLocation                                         OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	SMember(FBoneSocketTarget)                         JointTarget                                                 OFFSET(getStruct<T>, {0x1B0, 128, 0, 0})
	SMember(FAxis)                                     TwistAxis                                                   OFFSET(getStruct<T>, {0x230, 32, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorLocationSpace                                       OFFSET(get<T>, {0x250, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            JointTargetLocationSpace                                    OFFSET(get<T>, {0x251, 1, 0, 0})
	DMember(bool)                                      bAllowStretching                                            OFFSET(get<bool>, {0x252, 1, 1, 0})
	DMember(bool)                                      bTakeRotationFromEffectorSpace                              OFFSET(get<bool>, {0x252, 1, 1, 1})
	DMember(bool)                                      bMaintainEffectorRelRot                                     OFFSET(get<bool>, {0x252, 1, 1, 2})
	DMember(bool)                                      bAllowTwist                                                 OFFSET(get<bool>, {0x252, 1, 1, 3})
};

/// Struct /Script/AnimGraphRuntime.IKFootPelvisPullDownSolver
/// Size: 0x0080 (0x000000 - 0x000080)
class FIKFootPelvisPullDownSolver : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVectorRK4SpringInterpolator)              PelvisAdjustmentInterp                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(double)                                    PelvisAdjustmentInterpAlpha                                 OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(double)                                    PelvisAdjustmentMaxDistance                                 OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(double)                                    PelvisAdjustmentErrorTolerance                              OFFSET(get<double>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   PelvisAdjustmentMaxIter                                     OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.WarpingVectorValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FWarpingVectorValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EWarpingVectorMode)                        Mode                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.LayeredBoneBlendReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FLayeredBoneBlendReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.LinkedAnimGraphReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FLinkedAnimGraphReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.MirrorAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FMirrorAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.ModifyCurveAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FModifyCurveAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FRBFEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x0090 (0x000010 - 0x0000A0)
class FRBFTarget : public FRBFEntry
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     ScaleFactor                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bApplyCustomCurve                                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRichCurve)                                CustomCurve                                                 OFFSET(getStruct<T>, {0x18, 128, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0x98, 1, 0, 0})
	CMember(ERBFFunctionType)                          FunctionType                                                OFFSET(get<T>, {0x99, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.SequenceEvaluatorReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FSequenceEvaluatorReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.SequencePlayerReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FSequencePlayerReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.SkeletalControlReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FSkeletalControlReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x04
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                                                                       = 0,
	BMM_Replace                                                                      = 1,
	BMM_Additive                                                                     = 2,
	BMM_MAX                                                                          = 3
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x03
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                                                                   = 0,
	EIT_Additive                                                                     = 1,
	EIT_MAX                                                                          = 2
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x16
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
	EEasingFuncType__CustomCurve                                                     = 14,
	EEasingFuncType__EEasingFuncType_MAX                                             = 15
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x07
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX                                                       = 0,
	ERotationComponent__EulerY                                                       = 1,
	ERotationComponent__EulerZ                                                       = 2,
	ERotationComponent__QuaternionAngle                                              = 3,
	ERotationComponent__SwingAngle                                                   = 4,
	ERotationComponent__TwistAngle                                                   = 5,
	ERotationComponent__ERotationComponent_MAX                                       = 6
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x03
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend                                          = 0,
	EBlendListTransitionType__Inertialization                                        = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX                           = 2
};

/// Enum /Script/AnimGraphRuntime.EAnimFunctionCallSite
/// Size: 0x13
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
	EAnimFunctionCallSite__OnFinishedBlendingIn                                      = 11,
	EAnimFunctionCallSite__EAnimFunctionCallSite_MAX                                 = 12
};

/// Enum /Script/AnimGraphRuntime.ELayeredBoneBlendMode
/// Size: 0x03
enum class ELayeredBoneBlendMode : uint8_t
{
	ELayeredBoneBlendMode__BranchFilter                                              = 0,
	ELayeredBoneBlendMode__BlendMask                                                 = 1,
	ELayeredBoneBlendMode__ELayeredBoneBlendMode_MAX                                 = 2
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x06
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add                                                       = 0,
	EModifyCurveApplyMode__Scale                                                     = 1,
	EModifyCurveApplyMode__Blend                                                     = 2,
	EModifyCurveApplyMode__WeightedMovingAverage                                     = 3,
	EModifyCurveApplyMode__RemapCurve                                                = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX                                 = 5
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x04
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist                                                   = 0,
	EPoseDriverType__SwingOnly                                                       = 1,
	EPoseDriverType__Translation                                                     = 2,
	EPoseDriverType__EPoseDriverType_MAX                                             = 3
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x03
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation                                                      = 0,
	EPoseDriverSource__Translation                                                   = 1,
	EPoseDriverSource__EPoseDriverSource_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x03
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses                                                    = 0,
	EPoseDriverOutput__DriveCurves                                                   = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x03
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot                                               = 0,
	ESnapshotSourceMode__SnapshotPin                                                 = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x04
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset                                                     = 0,
	ESequenceEvalReinit__StartPosition                                               = 1,
	ESequenceEvalReinit__ExplicitTime                                                = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX                                     = 3
};

/// Enum /Script/AnimGraphRuntime.ESwapRootBone
/// Size: 0x04
enum class ESwapRootBone : uint8_t
{
	ESwapRootBone__SwapRootBone_Component                                            = 0,
	ESwapRootBone__SwapRootBone_Actor                                                = 1,
	ESwapRootBone__SwapRootBone_None                                                 = 2,
	ESwapRootBone__SwapRootBone_MAX                                                  = 3
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x03
enum class AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular                                           = 0,
	AnimPhysAngularConstraintType__Cone                                              = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX                 = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x03
enum class AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free                                               = 0,
	AnimPhysLinearConstraintType__Limited                                            = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX                   = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x06
enum class AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component                                                  = 0,
	AnimPhysSimSpaceType__Actor                                                      = 1,
	AnimPhysSimSpaceType__World                                                      = 2,
	AnimPhysSimSpaceType__RootRelative                                               = 3,
	AnimPhysSimSpaceType__BoneRelative                                               = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX                                   = 5
};

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x03
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner                                                       = 0,
	ESphericalLimitType__Outer                                                       = 1,
	ESphericalLimitType__ESphericalLimitType_MAX                                     = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x04
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput                                          = 0,
	EDrivenBoneModificationMode__ReplaceComponent                                    = 1,
	EDrivenBoneModificationMode__AddToRefPose                                        = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX                     = 3
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x04
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone                                                     = 0,
	EDrivenDestinationMode__MorphTarget                                              = 1,
	EDrivenDestinationMode__MaterialParameter                                        = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX                               = 3
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x03
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None                                                    = 0,
	EConstraintOffsetOption__Offset_RefPose                                          = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX                             = 2
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x03
enum class CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate                                                    = 0,
	CopyBoneDeltaMode__Copy                                                          = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x08
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear                                                      = 0,
	EInterpolationBlend__Cubic                                                       = 1,
	EInterpolationBlend__Sinusoidal                                                  = 2,
	EInterpolationBlend__EaseInOutExponent2                                          = 3,
	EInterpolationBlend__EaseInOutExponent3                                          = 4,
	EInterpolationBlend__EaseInOutExponent4                                          = 5,
	EInterpolationBlend__EaseInOutExponent5                                          = 6,
	EInterpolationBlend__MAX                                                         = 7
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x04
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace                                                 = 0,
	ESimulationSpace__WorldSpace                                                     = 1,
	ESimulationSpace__BaseBoneSpace                                                  = 2,
	ESimulationSpace__ESimulationSpace_MAX                                           = 3
};

/// Enum /Script/AnimGraphRuntime.ESimulationTiming
/// Size: 0x04
enum class ESimulationTiming : uint8_t
{
	ESimulationTiming__Default                                                       = 0,
	ESimulationTiming__Synchronous                                                   = 1,
	ESimulationTiming__Deferred                                                      = 2,
	ESimulationTiming__ESimulationTiming_MAX                                         = 3
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x04
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue                                = 0,
	EScaleChainInitialLength__Distance                                               = 1,
	EScaleChainInitialLength__ChainLength                                            = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX                           = 3
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x05
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None                                                            = 0,
	ESplineBoneAxis__X                                                               = 1,
	ESplineBoneAxis__Y                                                               = 2,
	ESplineBoneAxis__Z                                                               = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX                                             = 4
};

/// Enum /Script/AnimGraphRuntime.EWarpingEvaluationMode
/// Size: 0x03
enum class EWarpingEvaluationMode : uint8_t
{
	EWarpingEvaluationMode__Manual                                                   = 0,
	EWarpingEvaluationMode__Graph                                                    = 1,
	EWarpingEvaluationMode__EWarpingEvaluationMode_MAX                               = 2
};

/// Enum /Script/AnimGraphRuntime.EWarpingVectorMode
/// Size: 0x05
enum class EWarpingVectorMode : uint8_t
{
	EWarpingVectorMode__ComponentSpaceVector                                         = 0,
	EWarpingVectorMode__ActorSpaceVector                                             = 1,
	EWarpingVectorMode__WorldSpaceVector                                             = 2,
	EWarpingVectorMode__IKFootRootLocalSpaceVector                                   = 3,
	EWarpingVectorMode__EWarpingVectorMode_MAX                                       = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x03
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive                                                         = 0,
	ERBFSolverType__Interpolative                                                    = 1,
	ERBFSolverType__ERBFSolverType_MAX                                               = 2
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x07
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian                                                       = 0,
	ERBFFunctionType__Exponential                                                    = 1,
	ERBFFunctionType__Linear                                                         = 2,
	ERBFFunctionType__Cubic                                                          = 3,
	ERBFFunctionType__Quintic                                                        = 4,
	ERBFFunctionType__DefaultFunction                                                = 5,
	ERBFFunctionType__ERBFFunctionType_MAX                                           = 6
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x06
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean                                                    = 0,
	ERBFDistanceMethod__Quaternion                                                   = 1,
	ERBFDistanceMethod__SwingAngle                                                   = 2,
	ERBFDistanceMethod__TwistAngle                                                   = 3,
	ERBFDistanceMethod__DefaultMethod                                                = 4,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX                                       = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x05
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne                                       = 0,
	ERBFNormalizeMethod__AlwaysNormalize                                             = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian                                       = 2,
	ERBFNormalizeMethod__NoNormalization                                             = 3,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX                                     = 4
};

