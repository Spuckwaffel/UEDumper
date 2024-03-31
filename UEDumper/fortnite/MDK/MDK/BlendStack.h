
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/BlendStack.BlendStackAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendStackAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.GetCurrentBlendStackAnimAssetTime
	// float GetCurrentBlendStackAnimAssetTime(FAnimNodeReference& Node);                                                       // [0x7cab380] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.GetCurrentBlendStackAnimAsset
	// class UAnimationAsset* GetCurrentBlendStackAnimAsset(FAnimNodeReference& Node);                                          // [0x7cab294] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ForceBlendNextUpdate
	// void ForceBlendNextUpdate(FBlendStackAnimNodeReference& BlendStackNode);                                                 // [0x7cab1f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNodePure
	// void ConvertToBlendStackNodePure(FAnimNodeReference& Node, FBlendStackAnimNodeReference& BlendStackNode, bool& Result);  // [0x7cab014] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.ConvertToBlendStackNode
	// FBlendStackAnimNodeReference ConvertToBlendStackNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x7caaee8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackAnimNodeLibrary.BlendTo
	// void BlendTo(FAnimUpdateContext& Context, FBlendStackAnimNodeReference& BlendStackNode, class UAnimationAsset* AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, FVector BlendParameters, float WantedPlayRate, float ActivationDelay); // [0x7caa340] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/BlendStack.BlendStackInputAnimNodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendStackInputAnimNodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/BlendStack.BlendStackInputAnimNodeLibrary.GetProperties
	// void GetProperties(FBlendStackInputAnimNodeReference& BlendStackInputNode, class UAnimationAsset*& AnimationAsset, float& AccumulatedTime); // [0x7cab44c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/BlendStack.BlendStackInputAnimNodeLibrary.ConvertToBlendStackInputNodePure
	// void ConvertToBlendStackInputNodePure(FAnimNodeReference& Node, FBlendStackInputAnimNodeReference& BlendStackInputNode, bool& Result); // [0x7caad0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/BlendStack.BlendStackInputAnimNodeLibrary.ConvertToBlendStackInputNode
	// FBlendStackInputAnimNodeReference ConvertToBlendStackInputNode(FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result); // [0x7caabe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/BlendStack.BlendStackAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendStackAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/BlendStack.BlendStackInputAnimNodeReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendStackInputAnimNodeReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/BlendStack.BlendStackAnimPlayer
/// Size: 0x0388 (0x000000 - 0x000388)
class FBlendStackAnimPlayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FAnimNode_SequencePlayer_Standalone)       SequencePlayerNode                                          OFFSET(getStruct<T>, {0x20, 144, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer_Standalone)     BlendSpacePlayerNode                                        OFFSET(getStruct<T>, {0xB0, 144, 0, 0})
	SMember(FAnimNode_Mirror_Standalone)               MirrorNode                                                  OFFSET(getStruct<T>, {0x140, 96, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStack_Standalone
/// Size: 0x0078 (0x000038 - 0x0000B0)
class FAnimNode_BlendStack_Standalone : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FPoseLink>)                         PerSampleGraphPoseLinks                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FBlendStackAnimPlayer>)             AnimPlayers                                                 OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bShouldFilterNotifies                                       OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(int32_t)                                   MaxActiveBlends                                             OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      bStoreBlendedPose                                           OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(float)                                     NotifyRecencyTimeOut                                        OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MaxBlendInTimeToOverrideAnimation                           OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     PlayerDepthBlendInTimeMultiplier                            OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStack
/// Size: 0x0070 (0x0000B0 - 0x000120)
class FAnimNode_BlendStack : public FAnimNode_BlendStack_Standalone
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UAnimationAsset*)                    AnimationAsset                                              OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(float)                                     AnimationTime                                               OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0xBC, 1, 0, 0})
	DMember(bool)                                      bMirrored                                                   OFFSET(get<bool>, {0xBD, 1, 0, 0})
	DMember(float)                                     WantedPlayRate                                              OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     MaxAnimationDeltaTime                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(class UBlendProfile*)                      BlendProfile                                                OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0xD8, 1, 0, 0})
	SMember(FVector)                                   BlendParameters                                             OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	CMember(class UMirrorDataTable*)                   MirrorDataTable                                             OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bUseInertialBlend                                           OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bResetOnBecomingRelevant                                    OFFSET(get<bool>, {0x101, 1, 0, 0})
};

/// Struct /Script/BlendStack.AnimNode_BlendStackInput
/// Size: 0x0018 (0x000010 - 0x000028)
class FAnimNode_BlendStackInput : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   SampleIndex                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   BlendStackAllocationIndex                                   OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bOverridePlayRate                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
};

