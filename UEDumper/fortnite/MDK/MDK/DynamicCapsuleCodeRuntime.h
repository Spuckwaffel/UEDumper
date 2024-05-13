
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UDynamicCapsuleComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FDynamicCapsuleEntry>)              DynamicCapsuleEntryStack                                    OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FDynamicCapsuleState)                      ReplicatedCapsuleState                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})


	/// Functions
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerRemoveDynamicCapsule
	// void ServerRemoveDynamicCapsule(FGameplayTag tag);                                                                       // [0xbc3c038] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ServerApplyDynamicCapsule
	// void ServerApplyDynamicCapsule(FGameplayTag tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight); // [0xbc3bebc] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.RemoveDynamicCapsule
	// bool RemoveDynamicCapsule(FGameplayTag& tag);                                                                            // [0xbc3bde8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_ReplicatedCapsuleState
	// void OnRep_ReplicatedCapsuleState();                                                                                     // [0x1c55258] Final|Native|Private 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.OnRep_DynamicCapsuleEntryStack
	// void OnRep_DynamicCapsuleEntryStack();                                                                                   // [0xbc3bdd4] Final|Native|Private 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsuleWithLocationAdjust
	// bool ApplyDynamicCapsuleWithLocationAdjust(FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight); // [0xbc3bb7c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent.ApplyDynamicCapsule
	// bool ApplyDynamicCapsule(FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight);                               // [0xbc3b9a8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize
/// Size: 0x0018 (0x000030 - 0x000048)
class UAnimNotifyState_SetCapsuleSize : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     TargetCapsuleRadius                                         OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     TargetCapsuleHalfHeight                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bAdjustRelativeMeshHeight                                   OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     TargetRelativeMeshHeight                                    OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FGameplayTag)                              CapsuleSizeTag                                              OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Class /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJumpSlideComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnMovementModeChange
	// void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x1511cc8] Final|Native|Private 
	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideStart
	// void OnJumpSlideStart();                                                                                                 // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent.OnJumpSlideEnd
	// void OnJumpSlideEnd();                                                                                                   // [0x20c3f9c] Event|Public|BlueprintEvent 
};

/// Struct /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleState
/// Size: 0x0010 (0x000000 - 0x000010)
class FDynamicCapsuleState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     CapsuleRadius                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CapsuleHalfHeight                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(double)                                    RelativeMeshHeight                                          OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FDynamicCapsuleEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FDynamicCapsuleState)                      State                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

