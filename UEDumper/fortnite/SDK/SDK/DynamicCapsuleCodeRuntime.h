
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Struct /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleState
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDynamicCapsuleState
{ 
	float                                              CapsuleRadius;                                              // 0x0000   (0x0004)  
	float                                              CapsuleHalfHeight;                                          // 0x0004   (0x0004)  
	double                                             RelativeMeshHeight;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDynamicCapsuleEntry
{ 
	FGameplayTag                                       tag;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FDynamicCapsuleState                               State;                                                      // 0x0008   (0x0010)  
};

/// Class /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UDynamicCapsuleComponent : public UFortPawnComponent
{ 
public:
	TArray<FDynamicCapsuleEntry>                       DynamicCapsuleEntryStack;                                   // 0x00A8   (0x0010)  
	FDynamicCapsuleState                               ReplicatedCapsuleState;                                     // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x00C8   (0x0030)  MISSED


	/// Functions
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerRemoveDynamicCapsule
	// void ServerRemoveDynamicCapsule(FGameplayTag tag);                                                                    // [0xa8c13fc] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerApplyDynamicCapsule
	// void ServerApplyDynamicCapsule(FGameplayTag tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight); // [0xa8c1008] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.RemoveDynamicCapsule
	// bool RemoveDynamicCapsule(FGameplayTag& tag);                                                                         // [0xa8c0f34] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_ReplicatedCapsuleState
	// void OnRep_ReplicatedCapsuleState();                                                                                  // [0x32b8b74] Final|Native|Private 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_DynamicCapsuleEntryStack
	// void OnRep_DynamicCapsuleEntryStack();                                                                                // [0xa8c0f20] Final|Native|Private 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsuleWithLocationAdjust
	// bool ApplyDynamicCapsuleWithLocationAdjust(FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight); // [0xa8c0cc8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsule
	// bool ApplyDynamicCapsule(FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight);                            // [0xa8c0af4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize
/// Size: 0x0018 (0x000030 - 0x000048)
class UAnimNotifyState_SetCapsuleSize : public UAnimNotifyState
{ 
public:
	float                                              TargetCapsuleRadius;                                        // 0x0030   (0x0004)  
	float                                              TargetCapsuleHalfHeight;                                    // 0x0034   (0x0004)  
	bool                                               bAdjustRelativeMeshHeight;                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              TargetRelativeMeshHeight;                                   // 0x003C   (0x0004)  
	FGameplayTag                                       CapsuleSizeTag;                                             // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJumpSlideComponent : public UFortPawnComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnMovementModeChange
	// void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x14e13bc] Final|Native|Private 
	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideStart
	// void OnJumpSlideStart();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideEnd
	// void OnJumpSlideEnd();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
};

