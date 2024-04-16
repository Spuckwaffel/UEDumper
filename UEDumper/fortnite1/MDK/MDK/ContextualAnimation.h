
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ContextualAnimation.AnimNotifyState_EarlyOutContextualAnimWindow
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimNotifyState_EarlyOutContextualAnimWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ContextualAnimation.AnimNotifyState_IKWindow
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UAnimNotifyState_IKWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FAlphaBlend)                               BlendIn                                                     OFFSET(getStruct<T>, {0x38, 48, 0, 0})
	SMember(FAlphaBlend)                               BlendOut                                                    OFFSET(getStruct<T>, {0x68, 48, 0, 0})
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UContextualAnimActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimActorInterface.GetMesh
	// class USkeletalMeshComponent* GetMesh();                                                                                 // [0x844bbe8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneActorComponent
/// Size: 0x01B0 (0x000500 - 0x0006B0)
class UContextualAnimSceneActorComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FMulticastInlineDelegate)                  OnJoinedSceneDelegate                                       OFFSET(getStruct<T>, {0x508, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLeftSceneDelegate                                         OFFSET(getStruct<T>, {0x518, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayMontageNotifyBeginDelegate                            OFFSET(getStruct<T>, {0x528, 16, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          SceneAsset                                                  OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(bool)                                      bEnableDebug                                                OFFSET(get<bool>, {0x540, 1, 0, 0})
	SMember(FContextualAnimRepBindingsData)            RepBindings                                                 OFFSET(getStruct<T>, {0x548, 80, 0, 0})
	SMember(FContextualAnimRepLateJoinData)            RepLateJoinData                                             OFFSET(getStruct<T>, {0x598, 56, 0, 0})
	SMember(FContextualAnimRepTransitionData)          RepTransitionData                                           OFFSET(getStruct<T>, {0x5D0, 40, 0, 0})
	SMember(FContextualAnimRepTransitionData)          RepTransitionSingleActorData                                OFFSET(getStruct<T>, {0x5F8, 40, 0, 0})
	SMember(FContextualAnimSceneBindings)              Bindings                                                    OFFSET(getStruct<T>, {0x620, 40, 0, 0})
	CMember(TArray<FContextualAnimIKTarget>)           IKTargets                                                   OFFSET(get<T>, {0x648, 16, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.TransitionSingleActor
	// bool TransitionSingleActor(int32_t SectionIdx, int32_t AnimSetIdx);                                                      // [0x844c930] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.TransitionContextualAnimScene
	// bool TransitionContextualAnimScene(FName SectionName);                                                                   // [0x844c864] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.StartContextualAnimScene
	// bool StartContextualAnimScene(FContextualAnimSceneBindings& InBindings);                                                 // [0x844c7ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.ServerStartContextualAnimScene
	// void ServerStartContextualAnimScene(FContextualAnimSceneBindings InBindings);                                            // [0x844c6a0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.ServerEarlyOutContextualAnimScene
	// void ServerEarlyOutContextualAnimScene();                                                                                // [0x844c654] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnTickPose
	// void OnTickPose(class USkinnedMeshComponent* SkinnedMeshComponent, float DeltaTime, bool bNeedsValidRootMotion);         // [0x844c1f8] Native|Protected     
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_TransitionData
	// void OnRep_TransitionData();                                                                                             // [0x844c1e4] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_RepTransitionSingleActor
	// void OnRep_RepTransitionSingleActor();                                                                                   // [0x844c1d0] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_LateJoinData
	// void OnRep_LateJoinData();                                                                                               // [0x844c1bc] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnRep_Bindings
	// void OnRep_Bindings();                                                                                                   // [0x844c1a8] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnPlayMontageNotifyBegin
	// void OnPlayMontageNotifyBegin(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);              // [0x844c080] Final|Native|Protected|HasOutParms 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0x844bf40] Final|Native|Protected 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnLeftScene
	// void OnLeftScene();                                                                                                      // [0x3508bf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.OnJoinedScene
	// void OnJoinedScene(FContextualAnimSceneBindings& InBindings);                                                            // [0x844beb8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.LateJoinContextualAnimScene
	// bool LateJoinContextualAnimScene(class AActor* Actor, FName Role);                                                       // [0x844bd68] Final|Native|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.IsInActiveScene
	// bool IsInActiveScene();                                                                                                  // [0x844bd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargets
	// TArray<FContextualAnimIKTarget> GetIKTargets();                                                                          // [0x844bb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.GetIKTargetByGoalName
	// FContextualAnimIKTarget GetIKTargetByGoalName(FName GoalName);                                                           // [0x844ba48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneActorComponent.EarlyOutContextualAnimScene
	// void EarlyOutContextualAnimScene();                                                                                      // [0x844a8ec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ContextualAnimation.ContextualAnimRolesAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimRolesAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FContextualAnimRoleDefinition>)     Roles                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSceneAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UContextualAnimSceneAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UContextualAnimRolesAsset*)          RolesAsset                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     PrimaryRole                                                 OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(TArray<FContextualAnimSceneSection>)       Sections                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(EContextualAnimCollisionBehavior)          CollisionBehavior                                           OFFSET(get<T>, {0x54, 1, 0, 0})
	CMember(TArray<FContextualAnimIgnoreChannelsParam>) CollisionChannelsToIgnoreParams                            OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FContextualAnimAttachmentParams>)   AttachmentParams                                            OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bPrecomputeAlignmentTracks                                  OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x7C, 4, 0, 0})


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.Query
	// bool Query(FName Role, FContextualAnimQueryResult& OutResult, FContextualAnimQueryParams& QueryParams, FTransform& ToWorldTransform); // [0x844c3b8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetRoles
	// TArray<FName> GetRoles();                                                                                                // [0x844bc10] Final|Native|Public|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria
	// void GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier, EContextualAnimCriterionToConsider CriterionToConsider, TArray<FContextualAnimPoint>& OutResult); // [0x844b0e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.GetAlignmentPointsForSecondaryRole
	// void GetAlignmentPointsForSecondaryRole(EContextualAnimPointType Type, int32_t SectionIdx, FContextualAnimSceneBindingContext& Primary, TArray<FContextualAnimPoint>& OutResult); // [0x844a900] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetStartAndEndTimeForWarpSection
	// void BP_GetStartAndEndTimeForWarpSection(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName WarpSectionName, float& OutStartTime, float& OutEndTime); // [0x84478b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetIKTargetTransformForRoleAtTime
	// FTransform BP_GetIKTargetTransformForRoleAtTime(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, FName TrackName, float Time); // [0x84475bc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_GetAlignmentTransformForRoleRelativeToWarpPoint
	// FTransform BP_GetAlignmentTransformForRoleRelativeToWarpPoint(int32_t SectionIdx, int32_t AnimSetIdx, FName Role, float Time); // [0x8447328] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimSetIndexByAnimation
	// int32_t BP_FindAnimSetIndexByAnimation(int32_t SectionIdx, class UAnimSequenceBase* Animation);                          // [0x8446fa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSceneAsset.BP_FindAnimationForRole
	// class UAnimSequenceBase* BP_FindAnimationForRole(int32_t SectionIdx, int32_t AnimSetIdx, FName Role);                    // [0x8447150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion
/// Size: 0x0008 (0x000028 - 0x000030)
class UContextualAnimSelectionCriterion : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EContextualAnimCriterionType)              Type                                                        OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint
/// Size: 0x0000 (0x000030 - 0x000030)
class UContextualAnimSelectionCriterion_Blueprint : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.GetSceneAsset
	// class UContextualAnimSceneAsset* GetSceneAsset();                                                                        // [0x844bcc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Blueprint.BP_DoesQuerierPassCondition
	// bool BP_DoesQuerierPassCondition(FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Querier); // [0x246f7d8] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_TriggerArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UContextualAnimSelectionCriterion_TriggerArea : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FVector>)                           PolygonPoints                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Cone
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimSelectionCriterion_Cone : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EContextualAnimCriterionConeMode)          Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     HalfAngle                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimSelectionCriterion_Distance
/// Size: 0x0010 (0x000030 - 0x000040)
class UContextualAnimSelectionCriterion_Distance : public UContextualAnimSelectionCriterion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EContextualAnimCriterionDistanceMode)      Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/ContextualAnimation.ContextualAnimUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UContextualAnimUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSectionAndAnimSetIndices
	// void BP_SceneBindings_GetSectionAndAnimSetIndices(FContextualAnimSceneBindings& Bindings, int32_t& SectionIdx, int32_t& AnimSetIdx); // [0x844a654] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetSceneAsset
	// class UContextualAnimSceneAsset* BP_SceneBindings_GetSceneAsset(FContextualAnimSceneBindings& Bindings);                 // [0x844a5a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindings
	// TArray<FContextualAnimSceneBinding> BP_SceneBindings_GetBindings(FContextualAnimSceneBindings& Bindings);                // [0x844a4f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByRole
	// FContextualAnimSceneBinding BP_SceneBindings_GetBindingByRole(FContextualAnimSceneBindings& Bindings, FName Role);       // [0x844a30c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetBindingByActor
	// FContextualAnimSceneBinding BP_SceneBindings_GetBindingByActor(FContextualAnimSceneBindings& Bindings, class AActor* Actor); // [0x844a124] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformFromBinding
	// FTransform BP_SceneBindings_GetAlignmentTransformFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding, FContextualAnimWarpPoint& WarpPoint); // [0x8449f28] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint
	// FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint(FContextualAnimSceneBindings& Bindings, FName Role, FContextualAnimWarpPoint& WarpPoint, float Time); // [0x8449be0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole
	// FTransform BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole(FContextualAnimSceneBindings& Bindings, FName Role, FName RelativeToRole, float Time); // [0x8449848] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_CalculateWarpPoints
	// void BP_SceneBindings_CalculateWarpPoints(FContextualAnimSceneBindings& Bindings, TArray<FContextualAnimWarpPoint>& OutWarpPoints); // [0x84491ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindings_AddOrUpdateWarpTargetsForBindings
	// void BP_SceneBindings_AddOrUpdateWarpTargetsForBindings(FContextualAnimSceneBindings& Bindings);                         // [0x8449110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActorWithExternalTransform
	// FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActorWithExternalTransform(class AActor* Actor, FTransform ExternalTransform); // [0x8448a00] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_MakeFromActor
	// FContextualAnimSceneBindingContext BP_SceneBindingContext_MakeFromActor(class AActor* Actor);                            // [0x84488e4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasMatchingGameplayTag
	// bool BP_SceneBindingContext_HasMatchingGameplayTag(FContextualAnimSceneBindingContext& BindingContext, FGameplayTag& TagToCheck); // [0x8448724] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasAnyMatchingGameplayTags
	// bool BP_SceneBindingContext_HasAnyMatchingGameplayTags(FContextualAnimSceneBindingContext& BindingContext, FGameplayTagContainer& TagContainer); // [0x84485b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_HasAllMatchingGameplayTags
	// bool BP_SceneBindingContext_HasAllMatchingGameplayTags(FContextualAnimSceneBindingContext& BindingContext, FGameplayTagContainer& TagContainer); // [0x844840c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetVelocity
	// FVector BP_SceneBindingContext_GetVelocity(FContextualAnimSceneBindingContext& BindingContext);                          // [0x84482d4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetTransform
	// FTransform BP_SceneBindingContext_GetTransform(FContextualAnimSceneBindingContext& BindingContext);                      // [0x84481c4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetGameplayTags
	// FGameplayTagContainer BP_SceneBindingContext_GetGameplayTags(FContextualAnimSceneBindingContext& BindingContext);        // [0x84480d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBindingContext_GetActor
	// class AActor* BP_SceneBindingContext_GetActor(FContextualAnimSceneBindingContext& BindingContext);                       // [0x8447ff4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetSkeletalMesh
	// class USkeletalMeshComponent* BP_SceneBinding_GetSkeletalMesh(FContextualAnimSceneBinding& Binding);                     // [0x8448fd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetRoleFromBinding
	// FName BP_SceneBinding_GetRoleFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding);  // [0x8448e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetAnimationFromBinding
	// class UAnimSequenceBase* BP_SceneBinding_GetAnimationFromBinding(FContextualAnimSceneBindings& Bindings, FContextualAnimSceneBinding& Binding); // [0x8448cf8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_SceneBinding_GetActor
	// class AActor* BP_SceneBinding_GetActor(FContextualAnimSceneBinding& Binding);                                            // [0x8448c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionTimeLeftFromPos
	// float BP_Montage_GetSectionTimeLeftFromPos(class UAnimMontage* Montage, float Position);                                 // [0x8447e9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionStartAndEndTime
	// void BP_Montage_GetSectionStartAndEndTime(class UAnimMontage* Montage, int32_t SectionIndex, float& OutStartTime, float& OutEndTime); // [0x8447ccc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_Montage_GetSectionLength
	// float BP_Montage_GetSectionLength(class UAnimMontage* Montage, int32_t SectionIndex);                                    // [0x8447b74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_DrawDebugPose
	// void BP_DrawDebugPose(class UObject* WorldContextObject, class UAnimSequenceBase* Animation, float Time, FTransform LocalToWorldTransform, FLinearColor Color, float Lifetime, float Thickness); // [0x8446b40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindingsForTwoActors
	// bool BP_CreateContextualAnimSceneBindingsForTwoActors(class UContextualAnimSceneAsset* SceneAsset, FContextualAnimSceneBindingContext& Primary, FContextualAnimSceneBindingContext& Secondary, FContextualAnimSceneBindings& OutBindings); // [0x84468c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ContextualAnimation.ContextualAnimUtilities.BP_CreateContextualAnimSceneBindings
	// bool BP_CreateContextualAnimSceneBindings(class UContextualAnimSceneAsset* SceneAsset, TMap<FName, FContextualAnimSceneBindingContext>& Params, FContextualAnimSceneBindings& OutBindings); // [0x8446704] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpTarget
/// Size: 0x0040 (0x000000 - 0x000040)
class FContextualAnimWarpTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TargetName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     TargetRotation                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepData
/// Size: 0x0001 (0x000000 - 0x000001)
class FContextualAnimRepData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      RepCounter                                                  OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepBindingsData
/// Size: 0x004F (0x000001 - 0x000050)
class FContextualAnimRepBindingsData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FContextualAnimSceneBindings)              Bindings                                                    OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	CMember(TArray<FContextualAnimWarpPoint>)          WarpPoints                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPoint
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimWarpPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBindings
/// Size: 0x0028 (0x000000 - 0x000028)
class FContextualAnimSceneBindings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(char)                                      ID                                                          OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(class UContextualAnimSceneAsset*)          SceneAsset                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TArray<FContextualAnimSceneBinding>)       Data                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBinding
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FContextualAnimSceneBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FContextualAnimSceneBindingContext)        Context                                                     OFFSET(getStruct<T>, {0x0, 224, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneBindingContext
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimSceneBindingContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UContextualAnimSceneActorComponent*>) CachedSceneActorComp                              OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimInstance*>)            CachedAnimInstance                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   CachedSkeletalMesh                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) CachedMovementComp                                       OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TWeakObjectPtr<UMotionWarpingComponent*>)  CachedMotionWarpingComp                                     OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepLateJoinData
/// Size: 0x0037 (0x000001 - 0x000038)
class FContextualAnimRepLateJoinData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(TArray<FContextualAnimWarpPoint>)          WarpPoints                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRepTransitionData
/// Size: 0x0027 (0x000001 - 0x000028)
class FContextualAnimRepTransitionData : public FContextualAnimRepData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(char)                                      ID                                                          OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(char)                                      SectionIdx                                                  OFFSET(get<char>, {0x2, 1, 0, 0})
	DMember(char)                                      AnimSetIdx                                                  OFFSET(get<char>, {0x3, 1, 0, 0})
	CMember(TArray<FContextualAnimWarpPoint>)          WarpPoints                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         ExternalWarpTargets                                         OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIgnoreChannelsParam
/// Size: 0x0018 (0x000000 - 0x000018)
class FContextualAnimIgnoreChannelsParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<TEnumAsByte<ECollisionChannel>>)    Channels                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimAttachmentParams
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimAttachmentParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSet
/// Size: 0x0068 (0x000000 - 0x000068)
class FContextualAnimSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FContextualAnimTrack>)              Tracks                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FTransform>)                   WarpPoints                                                  OFFSET(get<T>, {0x10, 80, 0, 0})
	DMember(float)                                     RandomWeight                                                OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimTrack
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UAnimSequenceBase*)                  Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     AnimMaxStartTime                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<EMovementMode>)                MovementMode                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(bool)                                      bOptional                                                   OFFSET(get<bool>, {0xD, 1, 0, 0})
	SMember(FContextualAnimAlignmentTrackContainer)    AlignmentData                                               OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FContextualAnimAlignmentTrackContainer)    IKTargetData                                                OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	CMember(TArray<class UContextualAnimSelectionCriterion*>) SelectionCriteria                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FTransform)                                MeshToScene                                                 OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimAlignmentTrackContainer
/// Size: 0x0028 (0x000000 - 0x000028)
class FContextualAnimAlignmentTrackContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FAnimSequenceTrackContainer)               Tracks                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     SampleInterval                                              OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimSceneSection
/// Size: 0x0078 (0x000000 - 0x000078)
class FContextualAnimSceneSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FContextualAnimSet>)                AnimSets                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FName, FContextualAnimIKTargetDefContainer>) RoleToIKTargetDefsMap                                OFFSET(get<T>, {0x18, 80, 0, 0})
	CMember(TArray<FContextualAnimWarpPointDefinition>) WarpPointDefinitions                                       OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPointDefinition
/// Size: 0x001C (0x000000 - 0x00001C)
class FContextualAnimWarpPointDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     WarpTargetName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EContextualAnimWarpPointDefinitionMode)    Mode                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FContextualAnimWarpPointCustomParams)      Params                                                      OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimWarpPointCustomParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FContextualAnimWarpPointCustomParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Origin                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAlongClosestDistance                                       OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FName)                                     OtherRole                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTargetDefContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FContextualAnimIKTargetDefContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FContextualAnimIKTargetDefinition>) IKTargetDefs                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTargetDefinition
/// Size: 0x0014 (0x000000 - 0x000014)
class FContextualAnimIKTargetDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(EContextualAnimIKTargetProvider)           Provider                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FName)                                     TargetRoleName                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     TargetBoneName                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimPoint
/// Size: 0x0080 (0x000000 - 0x000080)
class FContextualAnimPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   AnimTrackIdx                                                OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimActorPreviewData
/// Size: 0x0088 (0x000000 - 0x000088)
class FContextualAnimActorPreviewData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     Role                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EContextualAnimActorPreviewType)           Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PreviewSkeletalMesh                                         OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewAnimInstance                                         OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              PreviewStaticMesh                                           OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewActorClass                                           OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimIKTarget
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimIKTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimRoleDefinition
/// Size: 0x0070 (0x000000 - 0x000070)
class FContextualAnimRoleDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsCharacter                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     PreviewCapsuleHalfHeight                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PreviewCapsuleRadius                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FTransform)                                MeshToComponent                                             OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimStartSceneParams
/// Size: 0x0068 (0x000000 - 0x000068)
class FContextualAnimStartSceneParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FName, FContextualAnimSceneBindingContext>) RoleToActorMap                                        OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(int32_t)                                   SectionIdx                                                  OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimQueryResult
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FContextualAnimQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                EntryTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                SyncTransform                                               OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	DMember(float)                                     AnimStartTime                                               OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   AnimSetIdx                                                  OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Struct /Script/ContextualAnimation.ContextualAnimQueryParams
/// Size: 0x0080 (0x000000 - 0x000080)
class FContextualAnimQueryParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Querier                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                QueryTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(bool)                                      bComplexQuery                                               OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bFindAnimStartTime                                          OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Enum /Script/ContextualAnimation.EContextualAnimCollisionBehavior
/// Size: 0x04
enum class EContextualAnimCollisionBehavior : uint8_t
{
	EContextualAnimCollisionBehavior__None                                           = 0,
	EContextualAnimCollisionBehavior__IgnoreActorWhenMoving                          = 1,
	EContextualAnimCollisionBehavior__IgnoreChannels                                 = 2,
	EContextualAnimCollisionBehavior__EContextualAnimCollisionBehavior_MAX           = 3
};

/// Enum /Script/ContextualAnimation.EContextualAnimPointType
/// Size: 0x04
enum class EContextualAnimPointType : uint8_t
{
	EContextualAnimPointType__FirstFrame                                             = 0,
	EContextualAnimPointType__SyncFrame                                              = 1,
	EContextualAnimPointType__LastFrame                                              = 2,
	EContextualAnimPointType__EContextualAnimPointType_MAX                           = 3
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionToConsider
/// Size: 0x04
enum class EContextualAnimCriterionToConsider : uint8_t
{
	EContextualAnimCriterionToConsider__All                                          = 0,
	EContextualAnimCriterionToConsider__Spatial                                      = 1,
	EContextualAnimCriterionToConsider__Other                                        = 2,
	EContextualAnimCriterionToConsider__EContextualAnimCriterionToConsider_MAX       = 3
};

/// Enum /Script/ContextualAnimation.EContextualAnimActorPreviewType
/// Size: 0x05
enum class EContextualAnimActorPreviewType : uint8_t
{
	EContextualAnimActorPreviewType__SkeletalMesh                                    = 0,
	EContextualAnimActorPreviewType__StaticMesh                                      = 1,
	EContextualAnimActorPreviewType__Actor                                           = 2,
	EContextualAnimActorPreviewType__None                                            = 3,
	EContextualAnimActorPreviewType__EContextualAnimActorPreviewType_MAX             = 4
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionType
/// Size: 0x03
enum class EContextualAnimCriterionType : uint8_t
{
	EContextualAnimCriterionType__Spatial                                            = 0,
	EContextualAnimCriterionType__Other                                              = 1,
	EContextualAnimCriterionType__EContextualAnimCriterionType_MAX                   = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionConeMode
/// Size: 0x03
enum class EContextualAnimCriterionConeMode : uint8_t
{
	EContextualAnimCriterionConeMode__ToPrimary                                      = 0,
	EContextualAnimCriterionConeMode__FromPrimary                                    = 1,
	EContextualAnimCriterionConeMode__EContextualAnimCriterionConeMode_MAX           = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimCriterionDistanceMode
/// Size: 0x03
enum class EContextualAnimCriterionDistanceMode : uint8_t
{
	EContextualAnimCriterionDistanceMode__Distance_3D                                = 0,
	EContextualAnimCriterionDistanceMode__Distance_2D                                = 1,
	EContextualAnimCriterionDistanceMode__Distance_MAX                               = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimJoinRule
/// Size: 0x03
enum class EContextualAnimJoinRule : uint8_t
{
	EContextualAnimJoinRule__Default                                                 = 0,
	EContextualAnimJoinRule__Late                                                    = 1,
	EContextualAnimJoinRule__EContextualAnimJoinRule_MAX                             = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimIKTargetProvider
/// Size: 0x03
enum class EContextualAnimIKTargetProvider : uint8_t
{
	EContextualAnimIKTargetProvider__Autogenerated                                   = 0,
	EContextualAnimIKTargetProvider__Bone                                            = 1,
	EContextualAnimIKTargetProvider__EContextualAnimIKTargetProvider_MAX             = 2
};

/// Enum /Script/ContextualAnimation.EContextualAnimWarpPointDefinitionMode
/// Size: 0x04
enum class EContextualAnimWarpPointDefinitionMode : uint8_t
{
	EContextualAnimWarpPointDefinitionMode__PrimaryActor                             = 0,
	EContextualAnimWarpPointDefinitionMode__Socket                                   = 1,
	EContextualAnimWarpPointDefinitionMode__Custom                                   = 2,
	EContextualAnimWarpPointDefinitionMode__EContextualAnimWarpPointDefinitionMode_MAX = 3
};

