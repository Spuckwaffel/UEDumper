
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MotionWarping.AnimNotifyState_MotionWarping
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class URootMotionModifier*)                RootMotionModifier                                          OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	// void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                // [0x246f7d8] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	// void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                   // [0x246f7d8] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	// void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);                 // [0x246f7d8] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	// void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);  // [0x35c206c] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	// void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x378ffd4] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	// void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier); // [0x3790120] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	// class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime); // [0x3438e20] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/MotionWarping.MotionWarpingUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	// void GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows); // [0x821ca5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	// void GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows); // [0x821c218] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	// FTransform ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);           // [0x821c020] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotionWarping.MotionWarpingComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UMotionWarpingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bSearchForWindowsInAnimsWithinMontages                      OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreUpdate                                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TWeakObjectPtr<ACharacter*>)               CharacterOwner                                              OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TArray<class URootMotionModifier*>)        Modifiers                                                   OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FMotionWarpingTarget>)              WarpTargets                                                 OFFSET(get<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	// int32_t RemoveWarpTarget(FName WarpTargetName);                                                                          // [0x821d200] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveAllWarpTargets
	// int32_t RemoveAllWarpTargets();                                                                                          // [0x821d1dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	// void DisableAllRootMotionModifiers();                                                                                    // [0x821bfcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	// void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);                               // [0x821b060] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	// void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation); // [0x821ae74] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	// void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);                                    // [0x821ace8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	// void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, class USceneComponent* Component, FName BoneName, bool bFollowComponent, FVector LocationOffset, FRotator RotationOffset); // [0x821a924] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	// void AddOrUpdateWarpTarget(FMotionWarpingTarget& WarpTarget);                                                            // [0x821a88c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class URootMotionModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UAnimSequenceBase*>)        Animation                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PreviousPosition                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     CurrentPosition                                             OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FTransform)                                StartTransform                                              OFFSET(getStruct<T>, {0x50, 96, 0, 0})
	DMember(float)                                     ActualStartTime                                             OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FDelegateProperty)                         OnActivateDelegate                                          OFFSET(getStruct<T>, {0xB4, 12, 0, 0})
	SMember(FDelegateProperty)                         OnUpdateDelegate                                            OFFSET(getStruct<T>, {0xC0, 12, 0, 0})
	SMember(FDelegateProperty)                         OnDeactivateDelegate                                        OFFSET(getStruct<T>, {0xCC, 12, 0, 0})
	CMember(ERootMotionModifierState)                  State                                                       OFFSET(get<T>, {0xD8, 1, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_Warp
/// Size: 0x0160 (0x0000E0 - 0x000240)
class URootMotionModifier_Warp : public URootMotionModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FName)                                     WarpTargetName                                              OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	CMember(EWarpPointAnimProvider)                    WarpPointAnimProvider                                       OFFSET(get<T>, {0xE4, 1, 0, 0})
	SMember(FTransform)                                WarpPointAnimTransform                                      OFFSET(getStruct<T>, {0xF0, 96, 0, 0})
	SMember(FName)                                     WarpPointAnimBoneName                                       OFFSET(getStruct<T>, {0x150, 4, 0, 0})
	DMember(bool)                                      bWarpTranslation                                            OFFSET(get<bool>, {0x154, 1, 0, 0})
	DMember(bool)                                      bIgnoreZAxis                                                OFFSET(get<bool>, {0x155, 1, 0, 0})
	CMember(EAlphaBlendOption)                         AddTranslationEasingFunc                                    OFFSET(get<T>, {0x156, 1, 0, 0})
	CMember(class UCurveFloat*)                        AddTranslationEasingCurve                                   OFFSET(get<T>, {0x158, 8, 0, 0})
	DMember(bool)                                      bWarpRotation                                               OFFSET(get<bool>, {0x160, 1, 0, 0})
	CMember(EMotionWarpRotationType)                   RotationType                                                OFFSET(get<T>, {0x161, 1, 0, 0})
	CMember(EMotionWarpRotationMethod)                 RotationMethod                                              OFFSET(get<T>, {0x162, 1, 0, 0})
	DMember(float)                                     WarpRotationTimeMultiplier                                  OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     WarpMaxRotationRate                                         OFFSET(get<float>, {0x168, 4, 0, 0})
	SMember(FTransform)                                CachedTargetTransform                                       OFFSET(getStruct<T>, {0x170, 96, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_SimpleWarp
/// Size: 0x0000 (0x000240 - 0x000240)
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Script/MotionWarping.RootMotionModifier_Scale
/// Size: 0x0020 (0x0000E0 - 0x000100)
class URootMotionModifier_Scale : public URootMotionModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0xE0, 24, 0, 0})


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
	// class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale); // [0x821b240] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
/// Size: 0x0160 (0x000240 - 0x0003A0)
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(bool)                                      bWarpIKBones                                                OFFSET(get<bool>, {0x240, 1, 0, 0})
	CMember(TArray<FName>)                             IKBones                                                     OFFSET(get<T>, {0x248, 16, 0, 0})
	SMember(FTransform)                                CachedMeshTransform                                         OFFSET(getStruct<T>, {0x260, 96, 0, 0})
	SMember(FTransform)                                CachedMeshRelativeTransform                                 OFFSET(getStruct<T>, {0x2C0, 96, 0, 0})
	SMember(FTransform)                                CachedRootMotion                                            OFFSET(getStruct<T>, {0x320, 96, 0, 0})
	SMember(FAnimSequenceTrackContainer)               Result                                                      OFFSET(getStruct<T>, {0x380, 32, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_SkewWarp
/// Size: 0x0000 (0x000240 - 0x000240)
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	// class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, EMotionWarpRotationMethod InRotationMethod, float InWarpRotationTimeMultiplier, float InWarpMaxRotationRate); // [0x821b5d8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingWindowData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMotionWarpingWindowData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UAnimNotifyState_MotionWarping*)     AnimNotify                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/MotionWarping.MotionWarpingUpdateContext
/// Size: 0x001C (0x000000 - 0x00001C)
class FMotionWarpingUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TWeakObjectPtr<UAnimSequenceBase*>)        Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PreviousPosition                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentPosition                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MotionWarping.MotionWarpingTarget
/// Size: 0x0078 (0x000000 - 0x000078)
class FMotionWarpingTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bFollowComponent                                            OFFSET(get<bool>, {0x44, 1, 0, 0})
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/MotionWarping.MotionDeltaTrack
/// Size: 0x0060 (0x000000 - 0x000060)
class FMotionDeltaTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FTransform>)                        BoneTransformTrack                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           DeltaTranslationTrack                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FRotator>)                          DeltaRotationTrack                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector)                                   TotalTranslation                                            OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FRotator)                                  TotalRotation                                               OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/MotionWarping.MotionDeltaTrackContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FMotionDeltaTrackContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMotionDeltaTrack>)                 Tracks                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/MotionWarping.ERootMotionModifierState
/// Size: 0x05
enum class ERootMotionModifierState : uint8_t
{
	ERootMotionModifierState__Waiting                                                = 0,
	ERootMotionModifierState__Active                                                 = 1,
	ERootMotionModifierState__MarkedForRemoval                                       = 2,
	ERootMotionModifierState__Disabled                                               = 3,
	ERootMotionModifierState__ERootMotionModifierState_MAX                           = 4
};

/// Enum /Script/MotionWarping.EMotionWarpRotationType
/// Size: 0x03
enum class EMotionWarpRotationType : uint8_t
{
	EMotionWarpRotationType__Default                                                 = 0,
	EMotionWarpRotationType__Facing                                                  = 1,
	EMotionWarpRotationType__EMotionWarpRotationType_MAX                             = 2
};

/// Enum /Script/MotionWarping.EMotionWarpRotationMethod
/// Size: 0x04
enum class EMotionWarpRotationMethod : uint8_t
{
	EMotionWarpRotationMethod__Slerp                                                 = 0,
	EMotionWarpRotationMethod__SlerpWithClampedRate                                  = 1,
	EMotionWarpRotationMethod__ConstantRate                                          = 2,
	EMotionWarpRotationMethod__EMotionWarpRotationMethod_MAX                         = 3
};

/// Enum /Script/MotionWarping.EWarpPointAnimProvider
/// Size: 0x04
enum class EWarpPointAnimProvider : uint8_t
{
	EWarpPointAnimProvider__None                                                     = 0,
	EWarpPointAnimProvider__Static                                                   = 1,
	EWarpPointAnimProvider__Bone                                                     = 2,
	EWarpPointAnimProvider__EWarpPointAnimProvider_MAX                               = 3
};

