
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PBIK

/// Enum /Script/IKRig.EPinBoneType
/// Size: 0x05
enum class EPinBoneType : uint8_t
{
	EPinBoneType__FullTransform                                                      = 0,
	EPinBoneType__TranslateOnly                                                      = 1,
	EPinBoneType__RotateOnly                                                         = 2,
	EPinBoneType__ScaleOnly                                                          = 3,
	EPinBoneType__EPinBoneType_MAX                                                   = 4
};

/// Enum /Script/IKRig.ERootMotionSource
/// Size: 0x03
enum class ERootMotionSource : uint8_t
{
	ERootMotionSource__CopyFromSourceRoot                                            = 0,
	ERootMotionSource__GenerateFromTargetPelvis                                      = 1,
	ERootMotionSource__ERootMotionSource_MAX                                         = 2
};

/// Enum /Script/IKRig.ERootMotionHeightSource
/// Size: 0x03
enum class ERootMotionHeightSource : uint8_t
{
	ERootMotionHeightSource__CopyHeightFromSource                                    = 0,
	ERootMotionHeightSource__SnapToGround                                            = 1,
	ERootMotionHeightSource__ERootMotionHeightSource_MAX                             = 2
};

/// Enum /Script/IKRig.ERetargetSourceOrTarget
/// Size: 0x03
enum class ERetargetSourceOrTarget : uint8_t
{
	ERetargetSourceOrTarget__Source                                                  = 0,
	ERetargetSourceOrTarget__Target                                                  = 1,
	ERetargetSourceOrTarget__ERetargetSourceOrTarget_MAX                             = 2
};

/// Enum /Script/IKRig.ERetargetTranslationMode
/// Size: 0x04
enum class ERetargetTranslationMode : uint8_t
{
	ERetargetTranslationMode__None                                                   = 0,
	ERetargetTranslationMode__GloballyScaled                                         = 1,
	ERetargetTranslationMode__Absolute                                               = 2,
	ERetargetTranslationMode__ERetargetTranslationMode_MAX                           = 3
};

/// Enum /Script/IKRig.ERetargetRotationMode
/// Size: 0x05
enum class ERetargetRotationMode : uint8_t
{
	ERetargetRotationMode__Interpolated                                              = 0,
	ERetargetRotationMode__OneToOne                                                  = 1,
	ERetargetRotationMode__OneToOneReversed                                          = 2,
	ERetargetRotationMode__None                                                      = 3,
	ERetargetRotationMode__ERetargetRotationMode_MAX                                 = 4
};

/// Enum /Script/IKRig.EBasicAxis
/// Size: 0x07
enum class EBasicAxis : uint32_t
{
	EBasicAxis__X                                                                    = 0,
	EBasicAxis__Y                                                                    = 1,
	EBasicAxis__Z                                                                    = 2,
	EBasicAxis__NegX                                                                 = 3,
	EBasicAxis__NegY                                                                 = 4,
	EBasicAxis__NegZ                                                                 = 5,
	EBasicAxis__EBasicAxis_MAX                                                       = 6
};

/// Enum /Script/IKRig.EWarpingDirectionSource
/// Size: 0x03
enum class EWarpingDirectionSource : uint32_t
{
	EWarpingDirectionSource__Goals                                                   = 0,
	EWarpingDirectionSource__Chain                                                   = 1,
	EWarpingDirectionSource__EWarpingDirectionSource_MAX                             = 2
};

/// Enum /Script/IKRig.EIKRigGoalSpace
/// Size: 0x04
enum class EIKRigGoalSpace : uint8_t
{
	EIKRigGoalSpace__Component                                                       = 0,
	EIKRigGoalSpace__Additive                                                        = 1,
	EIKRigGoalSpace__World                                                           = 2,
	EIKRigGoalSpace__EIKRigGoalSpace_MAX                                             = 3
};

/// Enum /Script/IKRig.EIKRigGoalTransformSource
/// Size: 0x04
enum class EIKRigGoalTransformSource : uint8_t
{
	EIKRigGoalTransformSource__Manual                                                = 0,
	EIKRigGoalTransformSource__Bone                                                  = 1,
	EIKRigGoalTransformSource__ActorComponent                                        = 2,
	EIKRigGoalTransformSource__EIKRigGoalTransformSource_MAX                         = 3
};

/// Class /Script/IKRig.RetargetOpBase
/// Size: 0x0008 (0x000028 - 0x000030)
class URetargetOpBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsEnabled;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/IKRig.CurveRemapPair
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCurveRemapPair
{ 
	FName                                              SourceCurve;                                                // 0x0000   (0x0004)  
	FName                                              TargetCurve;                                                // 0x0004   (0x0004)  
};

/// Class /Script/IKRig.CurveRemapOp
/// Size: 0x0018 (0x000030 - 0x000048)
class UCurveRemapOp : public URetargetOpBase
{ 
public:
	TArray<FCurveRemapPair>                            CurvesToRemap;                                              // 0x0030   (0x0010)  
	bool                                               bCopyAllSourceCurves;                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/IKRig.RetargetOpStack
/// Size: 0x0010 (0x000028 - 0x000038)
class URetargetOpStack : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class URetargetOpBase*>                     RetargetOps;                                                // 0x0028   (0x0010)  
};

/// Class /Script/IKRig.IKGoalCreatorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UIKGoalCreatorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/IKRig.IKGoalCreatorInterface.AddIKGoals
	// void AddIKGoals(TMap<FName, FIKRigGoal>& OutGoals);                                                                   // [0x78a63d8] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/IKRig.PinBoneData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FPinBoneData
{ 
	FName                                              BoneToPin;                                                  // 0x0000   (0x0004)  
	FName                                              BoneToPinTo;                                                // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0008   (0x0068)  MISSED
};

/// Class /Script/IKRig.PinBoneOp
/// Size: 0x00E0 (0x000030 - 0x000110)
class UPinBoneOp : public URetargetOpBase
{ 
public:
	TArray<FPinBoneData>                               BonesToPin;                                                 // 0x0030   (0x0010)  
	ERetargetSourceOrTarget                            PinTo;                                                      // 0x0040   (0x0001)  
	EPinBoneType                                       PinType;                                                    // 0x0041   (0x0001)  
	bool                                               bMaintainOffset;                                            // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_5[0xD];                                       // 0x0043   (0x000D)  MISSED
	FTransform                                         GlobalOffset;                                               // 0x0050   (0x0060)  
	FTransform                                         LocalOffset;                                                // 0x00B0   (0x0060)  
};

/// Class /Script/IKRig.RootMotionGeneratorOp
/// Size: 0x0220 (0x000030 - 0x000250)
class URootMotionGeneratorOp : public URetargetOpBase
{ 
public:
	FName                                              SourceRootBone;                                             // 0x0030   (0x0004)  
	FName                                              TargetRootBone;                                             // 0x0034   (0x0004)  
	FName                                              TargetPelvisBone;                                           // 0x0038   (0x0004)  
	ERootMotionSource                                  RootMotionSource;                                           // 0x003C   (0x0001)  
	ERootMotionHeightSource                            RootHeightSource;                                           // 0x003D   (0x0001)  
	bool                                               bPropagateToNonRetargetedChildren;                          // 0x003E   (0x0001)  
	bool                                               bMaintainOffsetFromPelvis;                                  // 0x003F   (0x0001)  
	bool                                               bRotateWithPelvis;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0041   (0x000F)  MISSED
	FTransform                                         GlobalOffset;                                               // 0x0050   (0x0060)  
	unsigned char                                      UnknownData01_6[0x1A0];                                     // 0x00B0   (0x01A0)  MISSED
};

/// Class /Script/IKRig.IKRigComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UIKRigComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalTransform
	// void SetIKRigGoalTransform(FName GoalName, FTransform Transform, float PositionAlpha, float RotationAlpha);           // [0x78a80a4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	// void SetIKRigGoalPositionAndRotation(FName GoalName, FVector Position, FQuat Rotation, float PositionAlpha, float RotationAlpha); // [0x78a7c94] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoal
	// void SetIKRigGoal(FIKRigGoal& Goal);                                                                                  // [0x78a7bf8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.ClearAllGoals
	// void ClearAllGoals();                                                                                                 // [0x78a64a8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/IKRig.TargetChainFKSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTargetChainFKSettings
{ 
	bool                                               EnableFK;                                                   // 0x0000   (0x0001)  
	ERetargetRotationMode                              RotationMode;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              RotationAlpha;                                              // 0x0004   (0x0004)  
	ERetargetTranslationMode                           TranslationMode;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              TranslationAlpha;                                           // 0x000C   (0x0004)  
	float                                              PoleVectorMatching;                                         // 0x0010   (0x0004)  
	float                                              PoleVectorOffset;                                           // 0x0014   (0x0004)  
};

/// Struct /Script/IKRig.TargetChainIKSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FTargetChainIKSettings
{ 
	bool                                               EnableIK;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BlendToSource;                                              // 0x0004   (0x0004)  
	FVector                                            BlendToSourceWeights;                                       // 0x0008   (0x0018)  
	FVector                                            StaticOffset;                                               // 0x0020   (0x0018)  
	FVector                                            StaticLocalOffset;                                          // 0x0038   (0x0018)  
	FRotator                                           StaticRotationOffset;                                       // 0x0050   (0x0018)  
	float                                              ScaleVertical;                                              // 0x0068   (0x0004)  
	float                                              Extension;                                                  // 0x006C   (0x0004)  
	bool                                               bAffectedByIKWarping;                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/IKRig.TargetChainSpeedPlantSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FTargetChainSpeedPlantSettings
{ 
	bool                                               EnableSpeedPlanting;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              SpeedCurveName;                                             // 0x0004   (0x0004)  
	float                                              SpeedThreshold;                                             // 0x0008   (0x0004)  
	float                                              UnplantStiffness;                                           // 0x000C   (0x0004)  
	float                                              UnplantCriticalDamping;                                     // 0x0010   (0x0004)  
};

/// Struct /Script/IKRig.TargetChainSettings
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FTargetChainSettings
{ 
	FTargetChainFKSettings                             FK;                                                         // 0x0000   (0x0018)  
	FTargetChainIKSettings                             IK;                                                         // 0x0018   (0x0078)  
	FTargetChainSpeedPlantSettings                     SpeedPlanting;                                              // 0x0090   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/IKRig.RetargetChainSettings
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class URetargetChainSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              SourceChain;                                                // 0x0028   (0x0004)  
	FName                                              TargetChain;                                                // 0x002C   (0x0004)  
	FTargetChainSettings                               Settings;                                                   // 0x0030   (0x00A8)  
};

/// Struct /Script/IKRig.TargetRootSettings
/// Size: 0x0068 (0x000000 - 0x000068)
struct FTargetRootSettings
{ 
	float                                              RotationAlpha;                                              // 0x0000   (0x0004)  
	float                                              TranslationAlpha;                                           // 0x0004   (0x0004)  
	float                                              BlendToSource;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            BlendToSourceWeights;                                       // 0x0010   (0x0018)  
	float                                              ScaleHorizontal;                                            // 0x0028   (0x0004)  
	float                                              ScaleVertical;                                              // 0x002C   (0x0004)  
	FVector                                            TranslationOffset;                                          // 0x0030   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0048   (0x0018)  
	float                                              AffectIKHorizontal;                                         // 0x0060   (0x0004)  
	float                                              AffectIKVertical;                                           // 0x0064   (0x0004)  
};

/// Class /Script/IKRig.RetargetRootSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class URetargetRootSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FTargetRootSettings                                Settings;                                                   // 0x0028   (0x0068)  
};

/// Struct /Script/IKRig.RetargetGlobalSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRetargetGlobalSettings
{ 
	bool                                               bEnableRoot;                                                // 0x0000   (0x0001)  
	bool                                               bEnableFK;                                                  // 0x0001   (0x0001)  
	bool                                               bEnableIK;                                                  // 0x0002   (0x0001)  
	bool                                               bEnablePost;                                                // 0x0003   (0x0001)  
	bool                                               bWarping;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	EWarpingDirectionSource                            DirectionSource;                                            // 0x0008   (0x0004)  
	EBasicAxis                                         ForwardDirection;                                           // 0x000C   (0x0004)  
	FName                                              DirectionChain;                                             // 0x0010   (0x0004)  
	float                                              WarpForwards;                                               // 0x0014   (0x0004)  
	float                                              SidewaysOffset;                                             // 0x0018   (0x0004)  
	float                                              WarpSplay;                                                  // 0x001C   (0x0004)  
};

/// Class /Script/IKRig.IKRetargetGlobalSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UIKRetargetGlobalSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FRetargetGlobalSettings                            Settings;                                                   // 0x0028   (0x0020)  
};

/// Struct /Script/IKRig.RetargetChainMap
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRetargetChainMap
{ 
	FName                                              SourceChain;                                                // 0x0000   (0x0004)  
	FName                                              TargetChain;                                                // 0x0004   (0x0004)  
};

/// Class /Script/IKRig.IKRetargeter
/// Size: 0x01D8 (0x000028 - 0x000200)
class UIKRetargeter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	int32_t                                            Version;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(32,14201) /* TWeakObjectPtr<UIKRigDefinition*> */ __um(SourceIKRigAsset);                        // 0x0030   (0x0020)  
	SDK_UNDEFINED(32,14202) /* TWeakObjectPtr<UIKRigDefinition*> */ __um(TargetIKRigAsset);                        // 0x0050   (0x0020)  
	TArray<FRetargetChainMap>                          ChainMapping;                                               // 0x0070   (0x0010)  
	TArray<class URetargetChainSettings*>              ChainSettings;                                              // 0x0080   (0x0010)  
	class URetargetRootSettings*                       RootSettings;                                               // 0x0090   (0x0008)  
	class UIKRetargetGlobalSettings*                   GlobalSettings;                                             // 0x0098   (0x0008)  
	class URetargetOpStack*                            OpStack;                                                    // 0x00A0   (0x0008)  
	SDK_UNDEFINED(80,14203) /* TMap<FName, FRetargetProfile> */ __um(Profiles);                                    // 0x00A8   (0x0050)  
	FName                                              CurrentProfile;                                             // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	SDK_UNDEFINED(80,14204) /* TMap<FName, FIKRetargetPose> */ __um(SourceRetargetPoses);                          // 0x0100   (0x0050)  
	SDK_UNDEFINED(80,14205) /* TMap<FName, FIKRetargetPose> */ __um(TargetRetargetPoses);                          // 0x0150   (0x0050)  
	FName                                              CurrentSourceRetargetPose;                                  // 0x01A0   (0x0004)  
	FName                                              CurrentTargetRetargetPose;                                  // 0x01A4   (0x0004)  
	SDK_UNDEFINED(80,14206) /* TMap<FName, FIKRetargetPose> */ __um(RetargetPoses);                                // 0x01A8   (0x0050)  
	FName                                              CurrentRetargetPose;                                        // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	// void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetRootSettings& RootSettings);          // [0x78a8474] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	// void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FRetargetGlobalSettings& GlobalSettings);  // [0x78a7acc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	// void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSpeedPlantSettings& SpeedPlantSettings, FName TargetChainName); // [0x78a78ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	// void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSettings& ChainSettings, FName TargetChainName); // [0x78a76a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	// void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainIKSettings& IKSettings, FName TargetChainName); // [0x78a7494] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	// void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainFKSettings& FKSettings, FName TargetChainName); // [0x78a7270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.HasTargetIKRig
	// bool HasTargetIKRig();                                                                                                // [0x78a724c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/IKRig.IKRetargeter.HasSourceIKRig
	// bool HasSourceIKRig();                                                                                                // [0x78a7228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	// FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                            // [0x78a7114] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	// void GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName OptionalProfileName, FTargetRootSettings& OutSettings); // [0x78a6efc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	// FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                      // [0x78a6e28] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	// void GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName OptionalProfileName, FRetargetGlobalSettings& OutSettings); // [0x78a6cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	// FTargetChainSettings GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName IKGoalName);        // [0x78a6a54] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	// FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, FName TargetChainName);   // [0x78a67c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
	// FTargetChainSettings GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName TargetChainName, FName OptionalProfileName); // [0x78a64d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IKRig.IKRetargetProcessor
/// Size: 0x0348 (0x000028 - 0x000370)
class UIKRetargetProcessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x178];                                     // 0x0000   (0x0178)  MISSED
	class UIKRigProcessor*                             IKRigProcessor;                                             // 0x0178   (0x0008)  
	unsigned char                                      UnknownData01_5[0x1E0];                                     // 0x0180   (0x01E0)  MISSED
	TArray<class URetargetOpBase*>                     OpStack;                                                    // 0x0360   (0x0010)  
};

/// Class /Script/IKRig.IKRigEffectorGoal
/// Size: 0x00D8 (0x000028 - 0x000100)
class UIKRigEffectorGoal : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              GoalName;                                                   // 0x0028   (0x0004)  
	FName                                              BoneName;                                                   // 0x002C   (0x0004)  
	float                                              PositionAlpha;                                              // 0x0030   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         CurrentTransform;                                           // 0x0040   (0x0060)  
	FTransform                                         InitialTransform;                                           // 0x00A0   (0x0060)  
};

/// Struct /Script/IKRig.IKRigSkeleton
/// Size: 0x0070 (0x000000 - 0x000070)
struct FIKRigSkeleton
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0000   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0010   (0x0010)  
	TArray<FName>                                      ExcludedBones;                                              // 0x0020   (0x0010)  
	TArray<FTransform>                                 CurrentPoseGlobal;                                          // 0x0030   (0x0010)  
	TArray<FTransform>                                 CurrentPoseLocal;                                           // 0x0040   (0x0010)  
	TArray<FTransform>                                 RefPoseGlobal;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/IKRig.BoneChain
/// Size: 0x0020 (0x000000 - 0x000020)
struct FBoneChain
{ 
	FName                                              ChainName;                                                  // 0x0000   (0x0004)  
	FBoneReference                                     StartBone;                                                  // 0x0004   (0x000C)  
	FBoneReference                                     EndBone;                                                    // 0x0010   (0x000C)  
	FName                                              IKGoalName;                                                 // 0x001C   (0x0004)  
};

/// Struct /Script/IKRig.RetargetDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRetargetDefinition
{ 
	FName                                              RootBone;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FBoneChain>                                 BoneChains;                                                 // 0x0008   (0x0010)  
};

/// Class /Script/IKRig.IKRigDefinition
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UIKRigDefinition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	SDK_UNDEFINED(32,14207) /* TWeakObjectPtr<USkeletalMesh*> */ __um(PreviewSkeletalMesh);                        // 0x0030   (0x0020)  
	FIKRigSkeleton                                     Skeleton;                                                   // 0x0050   (0x0070)  
	TArray<class UIKRigEffectorGoal*>                  Goals;                                                      // 0x00C0   (0x0010)  
	TArray<class UIKRigSolver*>                        Solvers;                                                    // 0x00D0   (0x0010)  
	FRetargetDefinition                                RetargetDefinition;                                         // 0x00E0   (0x0018)  
};

/// Class /Script/IKRig.IKRigProcessor
/// Size: 0x0120 (0x000028 - 0x000148)
class UIKRigProcessor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x0000   (0x0060)  MISSED
	TArray<class UIKRigSolver*>                        Solvers;                                                    // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0xD8];                                      // 0x0070   (0x00D8)  MISSED
};

/// Class /Script/IKRig.IKRigSolver
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRigSolver : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bIsEnabled;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/IKRig.IKRig_BodyMoverEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_BodyMoverEffector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              GoalName;                                                   // 0x0028   (0x0004)  
	FName                                              BoneName;                                                   // 0x002C   (0x0004)  
	float                                              InfluenceMultiplier;                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_BodyMover
/// Size: 0x0048 (0x000030 - 0x000078)
class UIKRig_BodyMover : public UIKRigSolver
{ 
public:
	FName                                              RootBone;                                                   // 0x0030   (0x0004)  
	float                                              PositionAlpha;                                              // 0x0034   (0x0004)  
	float                                              PositionPositiveX;                                          // 0x0038   (0x0004)  
	float                                              PositionNegativeX;                                          // 0x003C   (0x0004)  
	float                                              PositionPositiveY;                                          // 0x0040   (0x0004)  
	float                                              PositionNegativeY;                                          // 0x0044   (0x0004)  
	float                                              PositionPositiveZ;                                          // 0x0048   (0x0004)  
	float                                              PositionNegativeZ;                                          // 0x004C   (0x0004)  
	float                                              RotationAlpha;                                              // 0x0050   (0x0004)  
	float                                              RotateXAlpha;                                               // 0x0054   (0x0004)  
	float                                              RotateYAlpha;                                               // 0x0058   (0x0004)  
	float                                              RotateZAlpha;                                               // 0x005C   (0x0004)  
	TArray<class UIKRig_BodyMoverEffector*>            Effectors;                                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/IKRig.IKRig_LimbEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_LimbEffector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              GoalName;                                                   // 0x0028   (0x0004)  
	FName                                              BoneName;                                                   // 0x002C   (0x0004)  
};

/// Class /Script/IKRig.IKRig_LimbSolver
/// Size: 0x0058 (0x000030 - 0x000088)
class UIKRig_LimbSolver : public UIKRigSolver
{ 
public:
	FName                                              RootName;                                                   // 0x0030   (0x0004)  
	float                                              ReachPrecision;                                             // 0x0034   (0x0004)  
	SDK_UNDEFINED(1,14208) /* TEnumAsByte<EAxis> */    __um(HingeRotationAxis);                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x003C   (0x0004)  
	bool                                               bEnableLimit;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              MinRotationAngle;                                           // 0x0044   (0x0004)  
	bool                                               bAveragePull;                                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              PullDistribution;                                           // 0x004C   (0x0004)  
	float                                              ReachStepAlpha;                                             // 0x0050   (0x0004)  
	bool                                               bEnableTwistCorrection;                                     // 0x0054   (0x0001)  
	SDK_UNDEFINED(1,14209) /* TEnumAsByte<EAxis> */    __um(EndBoneForwardAxis);                                   // 0x0055   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0056   (0x0002)  MISSED
	class UIKRig_LimbEffector*                         Effector;                                                   // 0x0058   (0x0008)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Class /Script/IKRig.IKRig_FBIKEffector
/// Size: 0x0020 (0x000028 - 0x000048)
class UIKRig_FBIKEffector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              GoalName;                                                   // 0x0028   (0x0004)  
	FName                                              BoneName;                                                   // 0x002C   (0x0004)  
	int32_t                                            ChainDepth;                                                 // 0x0030   (0x0004)  
	float                                              StrengthAlpha;                                              // 0x0034   (0x0004)  
	float                                              PullChainAlpha;                                             // 0x0038   (0x0004)  
	float                                              PinRotation;                                                // 0x003C   (0x0004)  
	int32_t                                            IndexInSolver;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_FBIKBoneSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UIKRig_FBIKBoneSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              bone;                                                       // 0x0028   (0x0004)  
	float                                              RotationStiffness;                                          // 0x002C   (0x0004)  
	float                                              PositionStiffness;                                          // 0x0030   (0x0004)  
	EPBIKLimitType                                     X;                                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              MinX;                                                       // 0x0038   (0x0004)  
	float                                              MaxX;                                                       // 0x003C   (0x0004)  
	EPBIKLimitType                                     Y;                                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              MinY;                                                       // 0x0044   (0x0004)  
	float                                              MaxY;                                                       // 0x0048   (0x0004)  
	EPBIKLimitType                                     Z;                                                          // 0x004C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              MinZ;                                                       // 0x0050   (0x0004)  
	float                                              MaxZ;                                                       // 0x0054   (0x0004)  
	bool                                               bUsePreferredAngles;                                        // 0x0058   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FVector                                            PreferredAngles;                                            // 0x0060   (0x0018)  
};

/// Class /Script/IKRig.IKRigFBIKSolver
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UIKRigFBIKSolver : public UIKRigSolver
{ 
public:
	FName                                              RootBone;                                                   // 0x0030   (0x0004)  
	int32_t                                            Iterations;                                                 // 0x0034   (0x0004)  
	float                                              MassMultiplier;                                             // 0x0038   (0x0004)  
	bool                                               bAllowStretch;                                              // 0x003C   (0x0001)  
	EPBIKRootBehavior                                  RootBehavior;                                               // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	FRootPrePullSettings                               PrePullRootSettings;                                        // 0x0040   (0x0020)  
	float                                              PullChainAlpha;                                             // 0x0060   (0x0004)  
	float                                              MaxAngle;                                                   // 0x0064   (0x0004)  
	float                                              OverRelaxation;                                             // 0x0068   (0x0004)  
	bool                                               bStartSolveFromInputPose;                                   // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	TArray<class UIKRig_FBIKEffector*>                 Effectors;                                                  // 0x0070   (0x0010)  
	TArray<class UIKRig_FBIKBoneSettings*>             BoneSettings;                                               // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x0090   (0x0068)  MISSED
};

/// Class /Script/IKRig.IKRig_PoleSolverEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_PoleSolverEffector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FName                                              GoalName;                                                   // 0x0028   (0x0004)  
	FName                                              BoneName;                                                   // 0x002C   (0x0004)  
	float                                              Alpha;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/IKRig.IKRig_PoleSolver
/// Size: 0x0030 (0x000030 - 0x000060)
class UIKRig_PoleSolver : public UIKRigSolver
{ 
public:
	FName                                              RootName;                                                   // 0x0030   (0x0004)  
	FName                                              EndName;                                                    // 0x0034   (0x0004)  
	class UIKRig_PoleSolverEffector*                   Effector;                                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED
};

/// Class /Script/IKRig.IKRig_SetTransformEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_SetTransformEffector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bEnablePosition;                                            // 0x0028   (0x0001)  
	bool                                               bEnableRotation;                                            // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              Alpha;                                                      // 0x002C   (0x0004)  
};

/// Class /Script/IKRig.IKRig_SetTransform
/// Size: 0x0018 (0x000030 - 0x000048)
class UIKRig_SetTransform : public UIKRigSolver
{ 
public:
	FName                                              Goal;                                                       // 0x0030   (0x0004)  
	FName                                              RootBone;                                                   // 0x0034   (0x0004)  
	class UIKRig_SetTransformEffector*                 Effector;                                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/IKRig.RetargetProfile
/// Size: 0x0100 (0x000000 - 0x000100)
struct FRetargetProfile
{ 
	bool                                               bApplyTargetRetargetPose;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              TargetRetargetPoseName;                                     // 0x0004   (0x0004)  
	bool                                               bApplySourceRetargetPose;                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              SourceRetargetPoseName;                                     // 0x000C   (0x0004)  
	bool                                               bApplyChainSettings;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	SDK_UNDEFINED(80,14210) /* TMap<FName, FTargetChainSettings> */ __um(ChainSettings);                           // 0x0018   (0x0050)  
	bool                                               bApplyRootSettings;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FTargetRootSettings                                RootSettings;                                               // 0x0070   (0x0068)  
	bool                                               bApplyGlobalSettings;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FRetargetGlobalSettings                            GlobalSettings;                                             // 0x00DC   (0x0020)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/IKRig.IKRigGoal
/// Size: 0x0090 (0x000000 - 0x000090)
struct FIKRigGoal
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	EIKRigGoalTransformSource                          TransformSource;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FBoneReference                                     SourceBone;                                                 // 0x0008   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x0018   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0030   (0x0018)  
	float                                              PositionAlpha;                                              // 0x0048   (0x0004)  
	float                                              RotationAlpha;                                              // 0x004C   (0x0004)  
	EIKRigGoalSpace                                    PositionSpace;                                              // 0x0050   (0x0001)  
	EIKRigGoalSpace                                    RotationSpace;                                              // 0x0051   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	FVector                                            FinalBlendedPosition;                                       // 0x0058   (0x0018)  
	FQuat                                              FinalBlendedRotation;                                       // 0x0070   (0x0020)  
};

/// Struct /Script/IKRig.AnimNode_IKRig
/// Size: 0x0188 (0x000058 - 0x0001E0)
struct FAnimNode_IKRig : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	class UIKRigDefinition*                            RigDefinitionAsset;                                         // 0x0068   (0x0008)  
	TArray<FIKRigGoal>                                 Goals;                                                      // 0x0070   (0x0010)  
	bool                                               bStartFromRefPose;                                          // 0x0080   (0x0001)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0081   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0082   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0083   (0x0001)  MISSED
	float                                              Alpha;                                                      // 0x0084   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0088   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0090   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x00D8   (0x0004)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x00DC   (0x0030)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UIKRigProcessor*                             IKRigProcessor;                                             // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_5[0xC0];                                      // 0x0118   (0x00C0)  MISSED
	float                                              ActualAlpha;                                                // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01DC   (0x0004)  MISSED
};

/// Struct /Script/IKRig.AnimNode_RetargetPoseFromMesh
/// Size: 0x01C8 (0x000010 - 0x0001D8)
struct FAnimNode_RetargetPoseFromMesh : FAnimNode_Base
{ 
	SDK_UNDEFINED(8,14211) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(SourceMeshComponent);                // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent;                                         // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	class UIKRetargeter*                               IKRetargeterAsset;                                          // 0x0020   (0x0008)  
	FRetargetProfile                                   CustomRetargetProfile;                                      // 0x0028   (0x0100)  
	bool                                               bSuppressWarnings;                                          // 0x0128   (0x0001)  
	bool                                               bCopyCurves;                                                // 0x0129   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x012A   (0x0002)  MISSED
	int32_t                                            LODThreshold;                                               // 0x012C   (0x0004)  
	int32_t                                            LODThresholdForIK;                                          // 0x0130   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	class UIKRetargetProcessor*                        Processor;                                                  // 0x0138   (0x0008)  
	unsigned char                                      UnknownData03_6[0x98];                                      // 0x0140   (0x0098)  MISSED
};

/// Struct /Script/IKRig.IKRetargetPose
/// Size: 0x0070 (0x000000 - 0x000070)
struct FIKRetargetPose
{ 
	FVector                                            RootTranslationOffset;                                      // 0x0000   (0x0018)  
	SDK_UNDEFINED(80,14212) /* TMap<FName, FQuat> */   __um(BoneRotationOffsets);                                  // 0x0018   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/IKRig.IKRigGoalContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FIKRigGoalContainer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/IKRig.GoalBone
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGoalBone
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/IKRig.IKRigInputSkeleton
/// Size: 0x0038 (0x000000 - 0x000038)
struct FIKRigInputSkeleton
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/IKRig.LimbSolverSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FLimbSolverSettings
{ 
	float                                              ReachPrecision;                                             // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,14213) /* TEnumAsByte<EAxis> */    __um(HingeRotationAxis);                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0008   (0x0004)  
	bool                                               bEnableLimit;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MinRotationAngle;                                           // 0x0010   (0x0004)  
	bool                                               bAveragePull;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              PullDistribution;                                           // 0x0018   (0x0004)  
	float                                              ReachStepAlpha;                                             // 0x001C   (0x0004)  
	bool                                               bEnableTwistCorrection;                                     // 0x0020   (0x0001)  
	SDK_UNDEFINED(1,14214) /* TEnumAsByte<EAxis> */    __um(EndBoneForwardAxis);                                   // 0x0021   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/IKRig.LimbLink
/// Size: 0x0068 (0x000000 - 0x000068)
struct FLimbLink
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/IKRig.LimbSolver
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLimbSolver
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

