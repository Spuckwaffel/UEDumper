
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationLayeringRuntime.BoneMaskDefinitionDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UBoneMaskDefinitionDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FBoneMaskDefinition)                       BoneMaskDefinition                                          OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBoneMaskFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_UpdateBodyPartWeightsMulti
	// void BP_BoneMask_UpdateBodyPartWeightsMulti(FBoneMask& BoneMask, TArray<FBoneMaskUpdateMultiParam>& Params);             // [0x8725ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_UpdateBodyPartWeights
	// void BP_BoneMask_UpdateBodyPartWeights(FBoneMask& BoneMask, FName Name, float LocalSpaceWeight, float MeshSpaceWeight);  // [0x8725b6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_UpdateBodyPartMeshSpaceWeight
	// void BP_BoneMask_UpdateBodyPartMeshSpaceWeight(FBoneMask& BoneMask, FName Name, float MeshSpaceWeight);                  // [0x87258f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_UpdateBodyPartLocalSpaceWeight
	// void BP_BoneMask_UpdateBodyPartLocalSpaceWeight(FBoneMask& BoneMask, FName Name, float LocalSpaceWeight);                // [0x87258f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_GetBodyPartWeights
	// void BP_BoneMask_GetBodyPartWeights(FBoneMask& BoneMask, FName Name, float& LocalSpaceWeight, float& MeshSpaceWeight);   // [0x8725644] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskPerBoneData
/// Size: 0x0008 (0x000000 - 0x000008)
class FBoneMaskPerBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SkeletonPoseBoneIndex                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskBodyPartDefinition
/// Size: 0x0038 (0x000000 - 0x000038)
class FBoneMaskBodyPartDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FBranchFilter>)                     BranchFilters                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FBoneMaskPerBoneData>)              SkeletonPoseBoneWeights                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<int32_t>)                           SkeletonPoseChildBoneIndices                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FBoneMaskEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LocalSpaceWeight                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MeshSpaceWeight                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.BoneMask
/// Size: 0x0050 (0x000000 - 0x000050)
class FBoneMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FBoneMaskEntry>)               BoneMaskMap                                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FBoneMaskDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FBoneMaskBodyPartDefinition>)       BodyPartDefinitions                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskUpdateMultiParam
/// Size: 0x000C (0x000000 - 0x00000C)
class FBoneMaskUpdateMultiParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     LocalSpaceWeight                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MeshSpaceWeight                                             OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskBodyPartNameContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FBoneMaskBodyPartNameContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             Names                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.AnimNode_BoneMask
/// Size: 0x00E8 (0x000010 - 0x0000F8)
class FAnimNode_BoneMask : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPoseLink>)                         BlendPoses                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             BlendWeights                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FBoneMask)                                 BoneMask                                                    OFFSET(getStruct<T>, {0x40, 80, 0, 0})
	CMember(class UBoneMaskDefinitionDataAsset*)       BoneMaskDefinitionDataAsset                                 OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TArray<FBoneMaskBodyPartNameContainer>)    BodyParts                                                   OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TEnumAsByte<ECurveBlendOption>)            CurveBlendOption                                            OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.AnimNode_CopyBoneAdvanced
/// Size: 0x0060 (0x0000C8 - 0x000128)
class FAnimNode_CopyBoneAdvanced : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	SMember(FVector)                                   TranslationWeight                                           OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	DMember(float)                                     RotationWeight                                              OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     ScaleWeight                                                 OFFSET(get<float>, {0xFC, 4, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ControlSpace                                                OFFSET(get<T>, {0x100, 1, 0, 0})
	SMember(FBoneReference)                            TranslationSpaceBone                                        OFFSET(getStruct<T>, {0x104, 12, 0, 0})
	DMember(bool)                                      bTranslationInCustomBoneSpace                               OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x111, 1, 0, 0})
};

/// Struct /Script/AnimationLayeringRuntime.AnimNode_CopyMotion
/// Size: 0x0118 (0x0000C8 - 0x0001E0)
class FAnimNode_CopyMotion : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FComponentSpacePoseLink)                   BasePose                                                    OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FComponentSpacePoseLink)                   BasePoseReference                                           OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bUseBasePose                                                OFFSET(get<bool>, {0xE8, 1, 0, 0})
	SMember(FName)                                     PoseHistoryTag                                              OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	DMember(float)                                     Delay                                                       OFFSET(get<float>, {0xF0, 4, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xF4, 12, 0, 0})
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FBoneReference)                            CopySpace                                                   OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	SMember(FBoneReference)                            ApplySpace                                                  OFFSET(getStruct<T>, {0x118, 12, 0, 0})
	SMember(FRotator)                                  TranslationOffset                                           OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	SMember(FVector)                                   RotationPivot                                               OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	SMember(FName)                                     CurvePrefix                                                 OFFSET(getStruct<T>, {0x170, 4, 0, 0})
	SMember(FName)                                     TargetCurveName                                             OFFSET(getStruct<T>, {0x174, 4, 0, 0})
	DMember(float)                                     TargetCurveScale                                            OFFSET(get<float>, {0x178, 4, 0, 0})
	CMember(ECopyMotion_Component)                     TargetCurveComponent                                        OFFSET(get<T>, {0x17C, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        TargetCurveRotationAxis                                     OFFSET(get<T>, {0x17D, 1, 0, 0})
	SMember(FName)                                     TranslationX_CurveName                                      OFFSET(getStruct<T>, {0x180, 4, 0, 0})
	SMember(FName)                                     TranslationY_CurveName                                      OFFSET(getStruct<T>, {0x184, 4, 0, 0})
	SMember(FName)                                     TranslationZ_CurveName                                      OFFSET(getStruct<T>, {0x188, 4, 0, 0})
	SMember(FName)                                     RotationRoll_CurveName                                      OFFSET(getStruct<T>, {0x18C, 4, 0, 0})
	SMember(FName)                                     RotationPitch_CurveName                                     OFFSET(getStruct<T>, {0x190, 4, 0, 0})
	SMember(FName)                                     RotationYaw_CurveName                                       OFFSET(getStruct<T>, {0x194, 4, 0, 0})
	SMember(FVector)                                   TranslationScale                                            OFFSET(getStruct<T>, {0x198, 24, 0, 0})
	CMember(class UCurveVector*)                       TranslationRemapCurve                                       OFFSET(get<T>, {0x1B0, 8, 0, 0})
	DMember(float)                                     RotationScale                                               OFFSET(get<float>, {0x1B8, 4, 0, 0})
	CMember(class UCurveFloat*)                        RotationRemapCurve                                          OFFSET(get<T>, {0x1C0, 8, 0, 0})
};

/// Enum /Script/AnimationLayeringRuntime.ECopyMotion_Component
/// Size: 0x04
enum class ECopyMotion_Component : uint8_t
{
	ECopyMotion_Component__TranslationX                                              = 0,
	ECopyMotion_Component__TranslationY                                              = 1,
	ECopyMotion_Component__TranslationZ                                              = 2,
	ECopyMotion_Component__RotationAngle                                             = 3
};

