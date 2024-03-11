
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

/// Class /Script/BlendStack.BlendStackAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendStackAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.GetCurrentBlendStackAnimAssetTime
	// float GetCurrentBlendStackAnimAssetTime(FAnimNodeReference& Node);                                                    // [0x78b6fac] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.GetCurrentBlendStackAnimAsset
	// class UAnimationAsset* GetCurrentBlendStackAnimAsset(FAnimNodeReference& Node);                                       // [0x78b6ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ForceBlendNextUpdate
	// void ForceBlendNextUpdate(FBlendStackAnimNodeReference& BlendStackNode);                                              // [0x78b6e1c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNodePure
	// void ConvertToBlendStackNodePure(FAnimNodeReference& Node, FBlendStackAnimNodeReference& BlendStackNode, bool& Result); // [0x78b6c40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNode
	// FBlendStackAnimNodeReference ConvertToBlendStackNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x78b6b14] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.BlendTo
	// void BlendTo(FAnimUpdateContext& Context, FBlendStackAnimNodeReference& BlendStackNode, class UAnimationAsset* AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, FVector BlendParameters, float WantedPlayRate, float ActivationDelay); // [0x78b5f74] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/BlendStack.BlendStackInputAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendStackInputAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/BlendStack.BlendStackInputAnimNodeLibrary.GetProperties
	// void GetProperties(FBlendStackInputAnimNodeReference& BlendStackInputNode, class UAnimationAsset*& AnimationAsset, float& AccumulatedTime); // [0x78b7078] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackInputAnimNodeLibrary.ConvertToBlendStackInputNodePure
	// void ConvertToBlendStackInputNodePure(FAnimNodeReference& Node, FBlendStackInputAnimNodeReference& BlendStackInputNode, bool& Result); // [0x78b6938] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackInputAnimNodeLibrary.ConvertToBlendStackInputNode
	// FBlendStackInputAnimNodeReference ConvertToBlendStackInputNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x78b680c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/BlendStack.BlendStackAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FBlendStackAnimNodeReference : FAnimNodeReference
{ 
};

/// Struct /Script/BlendStack.BlendStackInputAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
struct FBlendStackInputAnimNodeReference : FAnimNodeReference
{ 
};

/// Struct /Script/BlendStack.BlendStackAnimPlayer
/// Size: 0x0388 (0x000000 - 0x000388)
struct FBlendStackAnimPlayer
{ 
	FAnimNode_SequencePlayer_Standalone                SequencePlayerNode;                                         // 0x0020   (0x0090)  
	FAnimNode_BlendSpacePlayer_Standalone              BlendSpacePlayerNode;                                       // 0x00B0   (0x0090)  
	FAnimNode_Mirror_Standalone                        MirrorNode;                                                 // 0x0140   (0x0060)  
	unsigned char                                      UnknownData00_6[0x1E8];                                     // 0x01A0   (0x01E8)  MISSED
};

/// Struct /Script/BlendStack.AnimNode_BlendStack_Standalone
/// Size: 0x0078 (0x000038 - 0x0000B0)
struct FAnimNode_BlendStack_Standalone : FAnimNode_AssetPlayerBase
{ 
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0038   (0x0010)  MISSED
	TArray<FPoseLink>                                  PerSampleGraphPoseLinks;                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	TArray<FBlendStackAnimPlayer>                      AnimPlayers;                                                // 0x0060   (0x0010)  
	bool                                               bShouldFilterNotifies;                                      // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            MaxActiveBlends;                                            // 0x0074   (0x0004)  
	bool                                               bStoreBlendedPose;                                          // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_5[0x27];                                      // 0x0079   (0x0027)  MISSED
	float                                              NotifyRecencyTimeOut;                                       // 0x00A0   (0x0004)  
	float                                              MaxBlendInTimeToOverrideAnimation;                          // 0x00A4   (0x0004)  
	float                                              PlayerDepthBlendInTimeMultiplier;                           // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/BlendStack.AnimNode_BlendStack
/// Size: 0x0070 (0x0000B0 - 0x000120)
struct FAnimNode_BlendStack : FAnimNode_BlendStack_Standalone
{ 
	class UAnimationAsset*                             AnimationAsset;                                             // 0x00B0   (0x0008)  
	float                                              AnimationTime;                                              // 0x00B8   (0x0004)  
	bool                                               bLoop;                                                      // 0x00BC   (0x0001)  
	bool                                               bMirrored;                                                  // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00BE   (0x0002)  MISSED
	float                                              WantedPlayRate;                                             // 0x00C0   (0x0004)  
	float                                              BlendTime;                                                  // 0x00C4   (0x0004)  
	float                                              MaxAnimationDeltaTime;                                      // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class UBlendProfile*                               BlendProfile;                                               // 0x00D0   (0x0008)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FVector                                            BlendParameters;                                            // 0x00E0   (0x0018)  
	class UMirrorDataTable*                            MirrorDataTable;                                            // 0x00F8   (0x0008)  
	bool                                               bUseInertialBlend;                                          // 0x0100   (0x0001)  
	bool                                               bResetOnBecomingRelevant;                                   // 0x0101   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1E];                                      // 0x0102   (0x001E)  MISSED
};

/// Struct /Script/BlendStack.AnimNode_BlendStackInput
/// Size: 0x0018 (0x000010 - 0x000028)
struct FAnimNode_BlendStackInput : FAnimNode_Base
{ 
	int32_t                                            SampleIndex;                                                // 0x0010   (0x0004)  
	int32_t                                            BlendStackAllocationIndex;                                  // 0x0014   (0x0004)  
	bool                                               bOverridePlayRate;                                          // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              PlayRate;                                                   // 0x001C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

