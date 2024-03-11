
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures

/// Class /Script/AnimPresetsRuntime.AnimPreset
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimPreset : public UObject
{ 
public:


	/// Functions
	// Function /Script/AnimPresetsRuntime.AnimPreset.HandleAnimInstance
	// void HandleAnimInstance(class UAnimInstance* Instance);                                                               // [0x78aa6cc] Native|Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Script/AnimPresetsRuntime.AnimPreset.GetPresetClass
	// TWeakObjectPtr<UClass*> GetPresetClass();                                                                             // [0x78aa684] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/AnimPresetsRuntime.AnimPresetComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UAnimPresetComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(32,1269) /* TWeakObjectPtr<UClass*> */ __um(AnimPreset);                                         // 0x00A0   (0x0020)  
};

/// Struct /Script/AnimPresetsRuntime.AnimPreset_SingleAnimationData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAnimPreset_SingleAnimationData
{ 
	class UAnimSequence*                               Animation;                                                  // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/AnimPresetsRuntime.AnimPreset_BasicLocomotion
/// Size: 0x0050 (0x000028 - 0x000078)
class UAnimPreset_BasicLocomotion : public UAnimPreset
{ 
public:
	FAnimPreset_SingleAnimationData                    Idle;                                                       // 0x0028   (0x0010)  
	FAnimPreset_SingleAnimationData                    MoveForward;                                                // 0x0038   (0x0010)  
	FAnimPreset_SingleAnimationData                    MoveBackward;                                               // 0x0048   (0x0010)  
	FAnimPreset_SingleAnimationData                    MoveLeft;                                                   // 0x0058   (0x0010)  
	FAnimPreset_SingleAnimationData                    MoveRight;                                                  // 0x0068   (0x0010)  
};

/// Class /Script/AnimPresetsRuntime.GameFeatureAction_AnimPreset
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_AnimPreset : public UGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,1270) /* TWeakObjectPtr<UClass*> */ __um(AnimBP_Preset_BasicLocomotion);                      // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,1271) /* TWeakObjectPtr<UClass*> */ __um(AnimBP_CopyPoseFromMesh);                            // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,1272) /* TWeakObjectPtr<UClass*> */ __um(AnimBP_RetargetPoseFromMesh);                        // 0x0068   (0x0020)  
};

/// Struct /Script/AnimPresetsRuntime.AnimPresetRetargetData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAnimPresetRetargetData
{ 
	SDK_UNDEFINED(32,1273) /* TWeakObjectPtr<UIKRetargeter*> */ __um(IKRetargeter);                                // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,1274) /* TWeakObjectPtr<USkeletalMesh*> */ __um(SourceSkeletalMesh);                          // 0x0020   (0x0020)  
};

