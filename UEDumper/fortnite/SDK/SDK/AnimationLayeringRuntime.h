
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AnimationLayeringRuntime.ECopyMotion_Component
/// Size: 0x05
enum class ECopyMotion_Component : uint8_t
{
	ECopyMotion_Component__TranslationX                                              = 0,
	ECopyMotion_Component__TranslationY                                              = 1,
	ECopyMotion_Component__TranslationZ                                              = 2,
	ECopyMotion_Component__RotationAngle                                             = 3,
	ECopyMotion_Component__ECopyMotion_MAX                                           = 4
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskPerBoneData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FBoneMaskPerBoneData
{ 
	int32_t                                            SkeletonPoseBoneIndex;                                      // 0x0000   (0x0004)  
	float                                              BlendWeight;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskBodyPartDefinition
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBoneMaskBodyPartDefinition
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FBranchFilter>                              BranchFilters;                                              // 0x0008   (0x0010)  
	TArray<FBoneMaskPerBoneData>                       SkeletonPoseBoneWeights;                                    // 0x0018   (0x0010)  
	TArray<int32_t>                                    SkeletonPoseChildBoneIndices;                               // 0x0028   (0x0010)  
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBoneMaskDefinition
{ 
	TArray<FBoneMaskBodyPartDefinition>                BodyPartDefinitions;                                        // 0x0000   (0x0010)  
};

/// Class /Script/AnimationLayeringRuntime.BoneMaskDefinitionDataAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UBoneMaskDefinitionDataAsset : public UDataAsset
{ 
public:
	FBoneMaskDefinition                                BoneMaskDefinition;                                         // 0x0030   (0x0010)  
};

/// Class /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBoneMaskFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_UpdateBodyPartWeightsMulti
	// void BP_BoneMask_UpdateBodyPartWeightsMulti(FBoneMask& BoneMask, TArray<FBoneMaskUpdateMultiParam>& Params);          // [0x7e482ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_UpdateBodyPartWeights
	// void BP_BoneMask_UpdateBodyPartWeights(FBoneMask& BoneMask, FName Name, float LocalSpaceWeight, float MeshSpaceWeight); // [0x7e47f58] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_UpdateBodyPartMeshSpaceWeight
	// void BP_BoneMask_UpdateBodyPartMeshSpaceWeight(FBoneMask& BoneMask, FName Name, float MeshSpaceWeight);               // [0x7e47cdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_UpdateBodyPartLocalSpaceWeight
	// void BP_BoneMask_UpdateBodyPartLocalSpaceWeight(FBoneMask& BoneMask, FName Name, float LocalSpaceWeight);             // [0x7e47cdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLayeringRuntime.BoneMaskFunctionLibrary.BP_BoneMask_GetBodyPartWeights
	// void BP_BoneMask_GetBodyPartWeights(FBoneMask& BoneMask, FName Name, float& LocalSpaceWeight, float& MeshSpaceWeight); // [0x7e47a34] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskEntry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FBoneMaskEntry
{ 
	float                                              LocalSpaceWeight;                                           // 0x0000   (0x0004)  
	float                                              MeshSpaceWeight;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/AnimationLayeringRuntime.BoneMask
/// Size: 0x0050 (0x000000 - 0x000050)
struct FBoneMask
{ 
	SDK_UNDEFINED(80,1249) /* TMap<FName, FBoneMaskEntry> */ __um(BoneMaskMap);                                    // 0x0000   (0x0050)  
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskUpdateMultiParam
/// Size: 0x000C (0x000000 - 0x00000C)
struct FBoneMaskUpdateMultiParam
{ 
	FName                                              Name;                                                       // 0x0000   (0x0004)  
	float                                              LocalSpaceWeight;                                           // 0x0004   (0x0004)  
	float                                              MeshSpaceWeight;                                            // 0x0008   (0x0004)  
};

/// Struct /Script/AnimationLayeringRuntime.BoneMaskBodyPartNameContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBoneMaskBodyPartNameContainer
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/AnimationLayeringRuntime.AnimNode_BoneMask
/// Size: 0x00E8 (0x000010 - 0x0000F8)
struct FAnimNode_BoneMask : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	TArray<FPoseLink>                                  BlendPoses;                                                 // 0x0020   (0x0010)  
	TArray<float>                                      BlendWeights;                                               // 0x0030   (0x0010)  
	FBoneMask                                          BoneMask;                                                   // 0x0040   (0x0050)  
	class UBoneMaskDefinitionDataAsset*                BoneMaskDefinitionDataAsset;                                // 0x0090   (0x0008)  
	TArray<FBoneMaskBodyPartNameContainer>             BodyParts;                                                  // 0x0098   (0x0010)  
	SDK_UNDEFINED(1,1250) /* TEnumAsByte<ECurveBlendOption> */ __um(CurveBlendOption);                             // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            LODThreshold;                                               // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x00B0   (0x0048)  MISSED
};

/// Struct /Script/AnimationLayeringRuntime.AnimNode_CopyBoneAdvanced
/// Size: 0x0060 (0x0000C8 - 0x000128)
struct FAnimNode_CopyBoneAdvanced : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00C8   (0x000C)  
	FBoneReference                                     TargetBone;                                                 // 0x00D4   (0x000C)  
	FVector                                            TranslationWeight;                                          // 0x00E0   (0x0018)  
	float                                              RotationWeight;                                             // 0x00F8   (0x0004)  
	float                                              ScaleWeight;                                                // 0x00FC   (0x0004)  
	SDK_UNDEFINED(1,1251) /* TEnumAsByte<EBoneControlSpace> */ __um(ControlSpace);                                 // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	FBoneReference                                     TranslationSpaceBone;                                       // 0x0104   (0x000C)  
	bool                                               bTranslationInCustomBoneSpace;                              // 0x0110   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_6[0x16];                                      // 0x0112   (0x0016)  MISSED
};

/// Struct /Script/AnimationLayeringRuntime.AnimNode_CopyMotion
/// Size: 0x0118 (0x0000C8 - 0x0001E0)
struct FAnimNode_CopyMotion : FAnimNode_SkeletalControlBase
{ 
	FComponentSpacePoseLink                            BasePose;                                                   // 0x00C8   (0x0010)  
	FComponentSpacePoseLink                            BasePoseReference;                                          // 0x00D8   (0x0010)  
	bool                                               bUseBasePose;                                               // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FName                                              PoseHistoryTag;                                             // 0x00EC   (0x0004)  
	float                                              Delay;                                                      // 0x00F0   (0x0004)  
	FBoneReference                                     SourceBone;                                                 // 0x00F4   (0x000C)  
	FBoneReference                                     BoneToModify;                                               // 0x0100   (0x000C)  
	FBoneReference                                     CopySpace;                                                  // 0x010C   (0x000C)  
	FBoneReference                                     ApplySpace;                                                 // 0x0118   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FRotator                                           TranslationOffset;                                          // 0x0128   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0140   (0x0018)  
	FVector                                            RotationPivot;                                              // 0x0158   (0x0018)  
	FName                                              CurvePrefix;                                                // 0x0170   (0x0004)  
	FName                                              TargetCurveName;                                            // 0x0174   (0x0004)  
	float                                              TargetCurveScale;                                           // 0x0178   (0x0004)  
	ECopyMotion_Component                              TargetCurveComponent;                                       // 0x017C   (0x0001)  
	SDK_UNDEFINED(1,1252) /* TEnumAsByte<EAxis> */     __um(TargetCurveRotationAxis);                              // 0x017D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x017E   (0x0002)  MISSED
	FName                                              TranslationX_CurveName;                                     // 0x0180   (0x0004)  
	FName                                              TranslationY_CurveName;                                     // 0x0184   (0x0004)  
	FName                                              TranslationZ_CurveName;                                     // 0x0188   (0x0004)  
	FName                                              RotationRoll_CurveName;                                     // 0x018C   (0x0004)  
	FName                                              RotationPitch_CurveName;                                    // 0x0190   (0x0004)  
	FName                                              RotationYaw_CurveName;                                      // 0x0194   (0x0004)  
	FVector                                            TranslationScale;                                           // 0x0198   (0x0018)  
	class UCurveVector*                                TranslationRemapCurve;                                      // 0x01B0   (0x0008)  
	float                                              RotationScale;                                              // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	class UCurveFloat*                                 RotationRemapCurve;                                         // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x01C8   (0x0018)  MISSED
};

