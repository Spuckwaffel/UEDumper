
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PBIK

/// Class /Script/IKRig.RetargetOpBase
/// Size: 0x0008 (0x000028 - 0x000030)
class URetargetOpBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/IKRig.CurveRemapOp
/// Size: 0x0018 (0x000030 - 0x000048)
class UCurveRemapOp : public URetargetOpBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FCurveRemapPair>)                   CurvesToRemap                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bCopyAllSourceCurves                                        OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/IKRig.RetargetOpStack
/// Size: 0x0010 (0x000028 - 0x000038)
class URetargetOpStack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class URetargetOpBase*>)            RetargetOps                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IKRig.IKGoalCreatorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UIKGoalCreatorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/IKRig.IKGoalCreatorInterface.AddIKGoals
	// void AddIKGoals(TMap<FName, FIKRigGoal>& OutGoals);                                                                      // [0x8155784] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/IKRig.PinBoneOp
/// Size: 0x00E0 (0x000030 - 0x000110)
class UPinBoneOp : public URetargetOpBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FPinBoneData>)                      BonesToPin                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(ERetargetSourceOrTarget)                   PinTo                                                       OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EPinBoneType)                              PinType                                                     OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x42, 1, 0, 0})
	SMember(FTransform)                                GlobalOffset                                                OFFSET(getStruct<T>, {0x50, 96, 0, 0})
	SMember(FTransform)                                LocalOffset                                                 OFFSET(getStruct<T>, {0xB0, 96, 0, 0})
};

/// Class /Script/IKRig.RootMotionGeneratorOp
/// Size: 0x0220 (0x000030 - 0x000250)
class URootMotionGeneratorOp : public URetargetOpBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     SourceRootBone                                              OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     TargetRootBone                                              OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     TargetPelvisBone                                            OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(ERootMotionSource)                         RootMotionSource                                            OFFSET(get<T>, {0x3C, 1, 0, 0})
	CMember(ERootMotionHeightSource)                   RootHeightSource                                            OFFSET(get<T>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bPropagateToNonRetargetedChildren                           OFFSET(get<bool>, {0x3E, 1, 0, 0})
	DMember(bool)                                      bMaintainOffsetFromPelvis                                   OFFSET(get<bool>, {0x3F, 1, 0, 0})
	DMember(bool)                                      bRotateWithPelvis                                           OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FTransform)                                GlobalOffset                                                OFFSET(getStruct<T>, {0x50, 96, 0, 0})
};

/// Class /Script/IKRig.IKRigComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UIKRigComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalTransform
	// void SetIKRigGoalTransform(FName GoalName, FTransform Transform, float PositionAlpha, float RotationAlpha);              // [0x8157758] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	// void SetIKRigGoalPositionAndRotation(FName GoalName, FVector Position, FQuat Rotation, float PositionAlpha, float RotationAlpha); // [0x81572ac] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.SetIKRigGoal
	// void SetIKRigGoal(FIKRigGoal& Goal);                                                                                     // [0x8157210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRigComponent.ClearAllGoals
	// void ClearAllGoals();                                                                                                    // [0x8155854] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/IKRig.RetargetChainSettings
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class URetargetChainSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     SourceChain                                                 OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     TargetChain                                                 OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FTargetChainSettings)                      Settings                                                    OFFSET(getStruct<T>, {0x30, 176, 0, 0})
};

/// Class /Script/IKRig.RetargetRootSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class URetargetRootSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FTargetRootSettings)                       Settings                                                    OFFSET(getStruct<T>, {0x28, 104, 0, 0})
};

/// Class /Script/IKRig.IKRetargetGlobalSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UIKRetargetGlobalSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRetargetGlobalSettings)                   Settings                                                    OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/IKRig.IKRetargeter
/// Size: 0x01D8 (0x000028 - 0x000200)
class UIKRetargeter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TWeakObjectPtr<UIKRigDefinition*>)         SourceIKRigAsset                                            OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UIKRigDefinition*>)         TargetIKRigAsset                                            OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TArray<FRetargetChainMap>)                 ChainMapping                                                OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<class URetargetChainSettings*>)     ChainSettings                                               OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(class URetargetRootSettings*)              RootSettings                                                OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UIKRetargetGlobalSettings*)          GlobalSettings                                              OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class URetargetOpStack*)                   OpStack                                                     OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TMap<FName, FRetargetProfile>)             Profiles                                                    OFFSET(get<T>, {0xA8, 80, 0, 0})
	SMember(FName)                                     CurrentProfile                                              OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              SourceRetargetPoses                                         OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              TargetRetargetPoses                                         OFFSET(get<T>, {0x150, 80, 0, 0})
	SMember(FName)                                     CurrentSourceRetargetPose                                   OFFSET(getStruct<T>, {0x1A0, 4, 0, 0})
	SMember(FName)                                     CurrentTargetRetargetPose                                   OFFSET(getStruct<T>, {0x1A4, 4, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              RetargetPoses                                               OFFSET(get<T>, {0x1A8, 80, 0, 0})
	SMember(FName)                                     CurrentRetargetPose                                         OFFSET(getStruct<T>, {0x1F8, 4, 0, 0})


	/// Functions
	// Function /Script/IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	// void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetRootSettings& RootSettings);             // [0x8157bc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	// void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FRetargetGlobalSettings& GlobalSettings);     // [0x81570e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	// void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSpeedPlantSettings& SpeedPlantSettings, FName TargetChainName); // [0x8156ec8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	// void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSettings& ChainSettings, FName TargetChainName); // [0x8156cbc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	// void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainIKSettings& IKSettings, FName TargetChainName); // [0x8156ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	// void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainFKSettings& FKSettings, FName TargetChainName); // [0x815688c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.HasTargetIKRig
	// bool HasTargetIKRig();                                                                                                   // [0x8156868] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/IKRig.IKRetargeter.HasSourceIKRig
	// bool HasSourceIKRig();                                                                                                   // [0x8156844] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	// FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                               // [0x8156730] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	// void GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName OptionalProfileName, FTargetRootSettings& OutSettings); // [0x8156574] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	// FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                         // [0x81564a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	// void GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName OptionalProfileName, FRetargetGlobalSettings& OutSettings); // [0x8156280] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	// FTargetChainSettings GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName IKGoalName);           // [0x8155f64] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	// FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, FName TargetChainName);      // [0x8155cb8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
	// FTargetChainSettings GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, FName TargetChainName, FName OptionalProfileName); // [0x8155884] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IKRig.IKRetargetProcessor
/// Size: 0x0348 (0x000028 - 0x000370)
class UIKRetargetProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(class UIKRigProcessor*)                    IKRigProcessor                                              OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(TArray<class URetargetOpBase*>)            OpStack                                                     OFFSET(get<T>, {0x360, 16, 0, 0})
};

/// Class /Script/IKRig.IKRigEffectorGoal
/// Size: 0x00D8 (0x000028 - 0x000100)
class UIKRigEffectorGoal : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FTransform)                                CurrentTransform                                            OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0xA0, 96, 0, 0})
};

/// Class /Script/IKRig.IKRigDefinition
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UIKRigDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PreviewSkeletalMesh                                         OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FIKRigSkeleton)                            Skeleton                                                    OFFSET(getStruct<T>, {0x50, 112, 0, 0})
	CMember(TArray<class UIKRigEffectorGoal*>)         Goals                                                       OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class UIKRigSolver*>)               Solvers                                                     OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FRetargetDefinition)                       RetargetDefinition                                          OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
};

/// Class /Script/IKRig.IKRigProcessor
/// Size: 0x0120 (0x000028 - 0x000148)
class UIKRigProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<class UIKRigSolver*>)               Solvers                                                     OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/IKRig.IKRigSolver
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRigSolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/IKRig.IKRig_BodyMoverEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_BodyMoverEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     InfluenceMultiplier                                         OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_BodyMover
/// Size: 0x0048 (0x000030 - 0x000078)
class UIKRig_BodyMover : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PositionPositiveX                                           OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     PositionNegativeX                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     PositionPositiveY                                           OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PositionNegativeY                                           OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     PositionPositiveZ                                           OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PositionNegativeZ                                           OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     RotateXAlpha                                                OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RotateYAlpha                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     RotateZAlpha                                                OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(TArray<class UIKRig_BodyMoverEffector*>)   Effectors                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/IKRig.IKRig_LimbEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_LimbEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_LimbSolver
/// Size: 0x0058 (0x000030 - 0x000088)
class UIKRig_LimbSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     RootName                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(float)                                     ReachPrecision                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bEnableLimit                                                OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     MinRotationAngle                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bAveragePull                                                OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     PullDistribution                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     ReachStepAlpha                                              OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bEnableTwistCorrection                                      OFFSET(get<bool>, {0x54, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        EndBoneForwardAxis                                          OFFSET(get<T>, {0x55, 1, 0, 0})
	CMember(class UIKRig_LimbEffector*)                Effector                                                    OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/IKRig.IKRig_FBIKEffector
/// Size: 0x0020 (0x000028 - 0x000048)
class UIKRig_FBIKEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   ChainDepth                                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     StrengthAlpha                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PullChainAlpha                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     PinRotation                                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   IndexInSolver                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_FBIKBoneSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UIKRig_FBIKBoneSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(float)                                     RotationStiffness                                           OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     PositionStiffness                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(EPBIKLimitType)                            X                                                           OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(float)                                     MinX                                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxX                                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EPBIKLimitType)                            Y                                                           OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     MinY                                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaxY                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(EPBIKLimitType)                            Z                                                           OFFSET(get<T>, {0x4C, 1, 0, 0})
	DMember(float)                                     MinZ                                                        OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxZ                                                        OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUsePreferredAngles                                         OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FVector)                                   PreferredAngles                                             OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Class /Script/IKRig.IKRigFBIKSolver
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UIKRigFBIKSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   SubIterations                                               OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     MassMultiplier                                              OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bAllowStretch                                               OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(EPBIKRootBehavior)                         RootBehavior                                                OFFSET(get<T>, {0x41, 1, 0, 0})
	SMember(FRootPrePullSettings)                      PrePullRootSettings                                         OFFSET(getStruct<T>, {0x44, 32, 0, 0})
	DMember(float)                                     PullChainAlpha                                              OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MaxAngle                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     OverRelaxation                                              OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bStartSolveFromInputPose                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
	CMember(TArray<class UIKRig_FBIKEffector*>)        Effectors                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<class UIKRig_FBIKBoneSettings*>)    BoneSettings                                                OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/IKRig.IKRig_PoleSolverEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_PoleSolverEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_PoleSolver
/// Size: 0x0030 (0x000030 - 0x000060)
class UIKRig_PoleSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     RootName                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     EndName                                                     OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	CMember(class UIKRig_PoleSolverEffector*)          Effector                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/IKRig.IKRig_SetTransformEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_SetTransformEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnablePosition                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableRotation                                             OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_SetTransform
/// Size: 0x0018 (0x000030 - 0x000048)
class UIKRig_SetTransform : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     Goal                                                        OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     RootBone                                                    OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	CMember(class UIKRig_SetTransformEffector*)        Effector                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/IKRig.CurveRemapPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FCurveRemapPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SourceCurve                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TargetCurve                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/IKRig.RetargetProfile
/// Size: 0x0100 (0x000000 - 0x000100)
class FRetargetProfile : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(bool)                                      bApplyTargetRetargetPose                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     TargetRetargetPoseName                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bApplySourceRetargetPose                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FName)                                     SourceRetargetPoseName                                      OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      bApplyChainSettings                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TMap<FName, FTargetChainSettings>)         ChainSettings                                               OFFSET(get<T>, {0x18, 80, 0, 0})
	DMember(bool)                                      bApplyRootSettings                                          OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FTargetRootSettings)                       RootSettings                                                OFFSET(getStruct<T>, {0x70, 104, 0, 0})
	DMember(bool)                                      bApplyGlobalSettings                                        OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FRetargetGlobalSettings)                   GlobalSettings                                              OFFSET(getStruct<T>, {0xDC, 32, 0, 0})
};

/// Struct /Script/IKRig.RetargetGlobalSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FRetargetGlobalSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bEnableRoot                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnableFK                                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bEnableIK                                                   OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bEnablePost                                                 OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bWarping                                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(EWarpingDirectionSource)                   DirectionSource                                             OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(EBasicAxis)                                ForwardDirection                                            OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FName)                                     DirectionChain                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(float)                                     WarpForwards                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     SidewaysOffset                                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     WarpSplay                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetRootSettings
/// Size: 0x0068 (0x000000 - 0x000068)
class FTargetRootSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TranslationAlpha                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BlendToSource                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   BlendToSourceWeights                                        OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     ScaleHorizontal                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     ScaleVertical                                               OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector)                                   TranslationOffset                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     AffectIKHorizontal                                          OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     AffectIKVertical                                            OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetChainSettings
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FTargetChainSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTargetChainFKSettings)                    FK                                                          OFFSET(getStruct<T>, {0x0, 28, 0, 0})
	SMember(FTargetChainIKSettings)                    IK                                                          OFFSET(getStruct<T>, {0x20, 120, 0, 0})
	SMember(FTargetChainSpeedPlantSettings)            SpeedPlanting                                               OFFSET(getStruct<T>, {0x98, 20, 0, 0})
};

/// Struct /Script/IKRig.TargetChainSpeedPlantSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FTargetChainSpeedPlantSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      EnableSpeedPlanting                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     SpeedCurveName                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     UnplantStiffness                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     UnplantCriticalDamping                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetChainIKSettings
/// Size: 0x0078 (0x000000 - 0x000078)
class FTargetChainIKSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      EnableIK                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     BlendToSource                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   BlendToSourceWeights                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   StaticOffset                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   StaticLocalOffset                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  StaticRotationOffset                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     ScaleVertical                                               OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Extension                                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAffectedByIKWarping                                        OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/IKRig.TargetChainFKSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FTargetChainFKSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      EnableFK                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ERetargetRotationMode)                     RotationMode                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ERetargetTranslationMode)                  TranslationMode                                             OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     TranslationAlpha                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PoleVectorMatching                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      PoleVectorMaintainOffset                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     PoleVectorOffset                                            OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/IKRig.PinBoneData
/// Size: 0x0070 (0x000000 - 0x000070)
class FPinBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     BoneToPin                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneToPinTo                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/IKRig.AnimNode_IKRig
/// Size: 0x0188 (0x000058 - 0x0001E0)
class FAnimNode_IKRig : public FAnimNode_CustomProperty
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class UIKRigDefinition*)                   RigDefinitionAsset                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<FIKRigGoal>)                        Goals                                                       OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bStartFromRefPose                                           OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x81, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x90, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0xDC, 48, 0, 0})
	CMember(class UIKRigProcessor*)                    IKRigProcessor                                              OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x1D8, 4, 0, 0})
};

/// Struct /Script/IKRig.IKRigGoal
/// Size: 0x0090 (0x000000 - 0x000090)
class FIKRigGoal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EIKRigGoalTransformSource)                 TransformSource                                             OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EIKRigGoalSpace)                           PositionSpace                                               OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(EIKRigGoalSpace)                           RotationSpace                                               OFFSET(get<T>, {0x51, 1, 0, 0})
	SMember(FVector)                                   FinalBlendedPosition                                        OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FQuat)                                     FinalBlendedRotation                                        OFFSET(getStruct<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/IKRig.AnimNode_RetargetPoseFromMesh
/// Size: 0x01C8 (0x000010 - 0x0001D8)
class FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SourceMeshComponent                                         OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(class UIKRetargeter*)                      IKRetargeterAsset                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FRetargetProfile)                          CustomRetargetProfile                                       OFFSET(getStruct<T>, {0x28, 256, 0, 0})
	DMember(bool)                                      bSuppressWarnings                                           OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bCopyCurves                                                 OFFSET(get<bool>, {0x129, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   LODThresholdForIK                                           OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	CMember(class UIKRetargetProcessor*)               Processor                                                   OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Struct /Script/IKRig.RetargetChainMap
/// Size: 0x0008 (0x000000 - 0x000008)
class FRetargetChainMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SourceChain                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TargetChain                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/IKRig.IKRetargetPose
/// Size: 0x0070 (0x000000 - 0x000070)
class FIKRetargetPose : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   RootTranslationOffset                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(TMap<FName, FQuat>)                        BoneRotationOffsets                                         OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/IKRig.IKRigGoalContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FIKRigGoalContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IKRig.BoneChain
/// Size: 0x0020 (0x000000 - 0x000020)
class FBoneChain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     ChainName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FBoneReference)                            StartBone                                                   OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FBoneReference)                            EndBone                                                     OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FName)                                     IKGoalName                                                  OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/IKRig.RetargetDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FRetargetDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FBoneChain>)                        BoneChains                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/IKRig.GoalBone
/// Size: 0x000C (0x000000 - 0x00000C)
class FGoalBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/IKRig.IKRigInputSkeleton
/// Size: 0x0038 (0x000000 - 0x000038)
class FIKRigInputSkeleton : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/IKRig.IKRigSkeleton
/// Size: 0x0070 (0x000000 - 0x000070)
class FIKRigSkeleton : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FName>)                             ExcludedBones                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FTransform>)                        CurrentPoseGlobal                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        CurrentPoseLocal                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FTransform>)                        RefPoseGlobal                                               OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/IKRig.LimbSolverSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FLimbSolverSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     ReachPrecision                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnableLimit                                                OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     MinRotationAngle                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bAveragePull                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     PullDistribution                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ReachStepAlpha                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bEnableTwistCorrection                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        EndBoneForwardAxis                                          OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/IKRig.LimbLink
/// Size: 0x0068 (0x000000 - 0x000068)
class FLimbLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/IKRig.LimbSolver
/// Size: 0x0018 (0x000000 - 0x000018)
class FLimbSolver : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Enum /Script/IKRig.EPinBoneType
/// Size: 0x04
enum class EPinBoneType : uint8_t
{
	EPinBoneType__FullTransform                                                      = 0,
	EPinBoneType__TranslateOnly                                                      = 1,
	EPinBoneType__RotateOnly                                                         = 2,
	EPinBoneType__ScaleOnly                                                          = 3
};

/// Enum /Script/IKRig.ERootMotionSource
/// Size: 0x02
enum class ERootMotionSource : uint8_t
{
	ERootMotionSource__CopyFromSourceRoot                                            = 0,
	ERootMotionSource__GenerateFromTargetPelvis                                      = 1
};

/// Enum /Script/IKRig.ERootMotionHeightSource
/// Size: 0x02
enum class ERootMotionHeightSource : uint8_t
{
	ERootMotionHeightSource__CopyHeightFromSource                                    = 0,
	ERootMotionHeightSource__SnapToGround                                            = 1
};

/// Enum /Script/IKRig.ERetargetSourceOrTarget
/// Size: 0x02
enum class ERetargetSourceOrTarget : uint8_t
{
	ERetargetSourceOrTarget__Source                                                  = 0,
	ERetargetSourceOrTarget__Target                                                  = 1
};

/// Enum /Script/IKRig.ERetargetTranslationMode
/// Size: 0x03
enum class ERetargetTranslationMode : uint8_t
{
	ERetargetTranslationMode__None                                                   = 0,
	ERetargetTranslationMode__GloballyScaled                                         = 1,
	ERetargetTranslationMode__Absolute                                               = 2
};

/// Enum /Script/IKRig.ERetargetRotationMode
/// Size: 0x04
enum class ERetargetRotationMode : uint8_t
{
	ERetargetRotationMode__Interpolated                                              = 0,
	ERetargetRotationMode__OneToOne                                                  = 1,
	ERetargetRotationMode__OneToOneReversed                                          = 2,
	ERetargetRotationMode__None                                                      = 3
};

/// Enum /Script/IKRig.EBasicAxis
/// Size: 0x06
enum class EBasicAxis : uint32_t
{
	EBasicAxis__X                                                                    = 0,
	EBasicAxis__Y                                                                    = 1,
	EBasicAxis__Z                                                                    = 2,
	EBasicAxis__NegX                                                                 = 3,
	EBasicAxis__NegY                                                                 = 4,
	EBasicAxis__NegZ                                                                 = 5
};

/// Enum /Script/IKRig.EWarpingDirectionSource
/// Size: 0x03
enum class EWarpingDirectionSource : uint32_t
{
	EWarpingDirectionSource__Goals                                                   = 0,
	EWarpingDirectionSource__Chain                                                   = 1,
	EWarpingDirectionSource__RootBone                                                = 2
};

/// Enum /Script/IKRig.EIKRigGoalSpace
/// Size: 0x03
enum class EIKRigGoalSpace : uint8_t
{
	EIKRigGoalSpace__Component                                                       = 0,
	EIKRigGoalSpace__Additive                                                        = 1,
	EIKRigGoalSpace__World                                                           = 2
};

/// Enum /Script/IKRig.EIKRigGoalTransformSource
/// Size: 0x03
enum class EIKRigGoalTransformSource : uint8_t
{
	EIKRigGoalTransformSource__Manual                                                = 0,
	EIKRigGoalTransformSource__Bone                                                  = 1,
	EIKRigGoalTransformSource__ActorComponent                                        = 2
};

