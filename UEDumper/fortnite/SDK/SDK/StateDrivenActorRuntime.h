
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
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: StructUtils

/// Enum /Script/StateDrivenActorRuntime.EStateDrivenStateID
/// Size: 0x14
enum class EStateDrivenStateID : uint8_t
{
	EStateDrivenStateID__Invalid                                                     = 0,
	EStateDrivenStateID__Success                                                     = 1,
	EStateDrivenStateID__Failure                                                     = 2,
	EStateDrivenStateID__State_A                                                     = 3,
	EStateDrivenStateID__State_B                                                     = 4,
	EStateDrivenStateID__State_C                                                     = 5,
	EStateDrivenStateID__State_D                                                     = 6,
	EStateDrivenStateID__State_E                                                     = 7,
	EStateDrivenStateID__State_F                                                     = 8,
	EStateDrivenStateID__State_G                                                     = 9,
	EStateDrivenStateID__State_H                                                     = 10,
	EStateDrivenStateID__State_I                                                     = 11,
	EStateDrivenStateID__State_J                                                     = 12,
	EStateDrivenStateID__EStateDrivenStateID_MAX                                     = 13
};

/// Class /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven
/// Size: 0x02D8 (0x0000B8 - 0x000390)
class UFortActorComponent_StateDriven : public UFortActorComponent_FortInteractExtension
{ 
public:
	float                                              OverlapRadius;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FVector                                            SlottedItemPopOffset;                                       // 0x00C0   (0x0018)  
	TArray<FGameplayTagQuery>                          VariableTagQueries;                                         // 0x00D8   (0x0010)  
	TArray<float>                                      VariableFloats;                                             // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_5[0xE8];                                      // 0x00F8   (0x00E8)  MISSED
	SDK_UNDEFINED(8,14347) /* TWeakObjectPtr<UStaticMeshComponent*> */ __um(MeshComponentPtr);                     // 0x01E0   (0x0008)  
	SDK_UNDEFINED(8,14348) /* TWeakObjectPtr<USphereComponent*> */ __um(OverlapComponentPtr);                      // 0x01E8   (0x0008)  
	FFortItemEntry                                     SlottedItemEntry;                                           // 0x01F0   (0x01A0)  


	/// Functions
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.TriggerCustomEvent
	// void TriggerCustomEvent(FGameplayTag& EventTag);                                                                      // [0x8787a64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.SetCurrentState
	// void SetCurrentState(FStateDrivenState& InCurrentState);                                                              // [0xaaf5904] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.PopSlottedItem
	// void PopSlottedItem();                                                                                                // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.PlayBurstGameplayCue
	// void PlayBurstGameplayCue(FGameplayTag GameplayCueTag);                                                               // [0xaaf57d4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupOverlapEventSettings
	// void OnSetupOverlapEventSettings();                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupInteractionEventSettings
	// void OnSetupInteractionEventSettings();                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnSetupDamageEventSettings
	// void OnSetupDamageEventSettings();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnResetCollisionSettings
	// void OnResetCollisionSettings();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnMulticastStateTreeEvent
	// void OnMulticastStateTreeEvent(FGameplayTag TransitionTag, FGameplayCueTag BurstGameplayCueTag);                      // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.OnHandleStateTreeEvent
	// void OnHandleStateTreeEvent(FGameplayTag TransitionTag, FGameplayCueTag BurstGameplayCueTag);                         // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleInteraction
	// void HandleInteraction(class ABuildingActor* SelfActor, class AFortPawn* InteractingPawn);                            // [0x6cbaff4] Final|Native|Private 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleEndOverlap
	// void HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x81ea800] Final|Native|Private 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleDied
	// void HandleDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x8682e30] Final|Native|Private|HasDefaults 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleDamaged
	// void HandleDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x8682e30] Final|Native|Private|HasDefaults 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.HandleBeginOverlap
	// void HandleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x81ea384] Final|Native|Private|HasOutParms 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.GetSlottedItemEntry
	// FFortItemEntry GetSlottedItemEntry();                                                                                 // [0xaaf57b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.GetSlottedItemDisplayName
	// FText GetSlottedItemDisplayName();                                                                                    // [0xaaf5774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.GetInteractionString
	// FText GetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0xaaf5690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StateDrivenActorRuntime.FortActorComponent_StateDriven.GetFailedInteractionString
	// FText GetFailedInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0xaaf55ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenStateTransitions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateDrivenStateTransitions
{ 
	FGameplayTag                                       TransitionTag;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FInstancedStruct>                           TransitionEvents;                                           // 0x0008   (0x0010)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenState
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FStateDrivenState
{ 
	SDK_UNDEFINED(16,14349) /* FString */              __um(DevNotes);                                             // 0x0000   (0x0010)  
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0010   (0x0008)  
	bool                                               bApplyMeshTransform;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FTransform                                         StaticMeshTransform;                                        // 0x0020   (0x0060)  
	SDK_UNDEFINED(16,14350) /* TArray<TWeakObjectPtr<UMaterialInstance*>> */ __um(MaterialInstances);              // 0x0080   (0x0010)  
	FGameplayCueTag                                    LoopingGameplayCueTag;                                      // 0x0090   (0x0004)  
	float                                              OverlapRadius;                                              // 0x0094   (0x0004)  
	SDK_UNDEFINED(24,14351) /* FText */                __um(InteractionStringOverride);                            // 0x0098   (0x0018)  
	SDK_UNDEFINED(24,14352) /* FText */                __um(InteractionFailedStringOverride);                      // 0x00B0   (0x0018)  
	TArray<FStateDrivenStateTransitions>               Transitions;                                                // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStateDrivenEvent
{ 
	FGameplayCueTag                                    BurstGameplayCue;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      GameplayEffect;                                             // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	class UFortActorComponent_StateDriven*             StateDrivenOwner;                                           // 0x0020   (0x0008)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenTagQuery
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateDrivenTagQuery
{ 
	FInstancedStruct                                   InstancedTagQuery;                                          // 0x0008   (0x0010)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_BeginOverlap
/// Size: 0x0018 (0x000028 - 0x000040)
struct FStateDrivenEvent_BeginOverlap : FStateDrivenEvent
{ 
	FStateDrivenTagQuery                               OverlappingActorTagQuery;                                   // 0x0028   (0x0018)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_InteractionBase
/// Size: 0x0030 (0x000028 - 0x000058)
struct FStateDrivenEvent_InteractionBase : FStateDrivenEvent
{ 
	FStateDrivenTagQuery                               PlayerTagQuery;                                             // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,14353) /* FText */                __um(InteractionStringOverride);                            // 0x0040   (0x0018)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_Conversation
/// Size: 0x0010 (0x000058 - 0x000068)
struct FStateDrivenEvent_Conversation : FStateDrivenEvent_InteractionBase
{ 
	FGameplayTag                                       ConversationEntryTag;                                       // 0x0058   (0x0004)  
	SDK_UNDEFINED(8,14354) /* TWeakObjectPtr<UFortNonPlayerConversationParticipantComponent*> */ __um(ConversationComponentPtr); // 0x005C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_CustomEvent
/// Size: 0x0008 (0x000028 - 0x000030)
struct FStateDrivenEvent_CustomEvent : FStateDrivenEvent
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_DamageInstance
/// Size: 0x0038 (0x000028 - 0x000060)
struct FStateDrivenEvent_DamageInstance : FStateDrivenEvent
{ 
	FStateDrivenTagQuery                               InstigatorTagQuery;                                         // 0x0028   (0x0018)  
	FStateDrivenTagQuery                               DamageInstanceTagQuery;                                     // 0x0040   (0x0018)  
	float                                              MinimumInstanceDamage;                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_DepositResource
/// Size: 0x0028 (0x000058 - 0x000080)
struct FStateDrivenEvent_DepositResource : FStateDrivenEvent_InteractionBase
{ 
	SDK_UNDEFINED(32,14355) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(DepositItem);                          // 0x0058   (0x0020)  
	int32_t                                            DepositAmount;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_Destroy
/// Size: 0x0030 (0x000028 - 0x000058)
struct FStateDrivenEvent_Destroy : FStateDrivenEvent
{ 
	FStateDrivenTagQuery                               InstigatorTagQuery;                                         // 0x0028   (0x0018)  
	FStateDrivenTagQuery                               DamageInstanceTagQuery;                                     // 0x0040   (0x0018)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_EndOverlap
/// Size: 0x0018 (0x000028 - 0x000040)
struct FStateDrivenEvent_EndOverlap : FStateDrivenEvent
{ 
	FStateDrivenTagQuery                               OverlappingActorTagQuery;                                   // 0x0028   (0x0018)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_InsertItem
/// Size: 0x0018 (0x000058 - 0x000070)
struct FStateDrivenEvent_InsertItem : FStateDrivenEvent_InteractionBase
{ 
	FStateDrivenTagQuery                               EquippedItemTagQuery;                                       // 0x0058   (0x0018)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_Interaction
/// Size: 0x0000 (0x000058 - 0x000058)
struct FStateDrivenEvent_Interaction : FStateDrivenEvent_InteractionBase
{ 
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_PickupItem
/// Size: 0x0000 (0x000040 - 0x000040)
struct FStateDrivenEvent_PickupItem : FStateDrivenEvent_BeginOverlap
{ 
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenFloat
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStateDrivenFloat
{ 
	FInstancedStruct                                   InstancedFloat;                                             // 0x0008   (0x0010)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_Timer
/// Size: 0x0020 (0x000028 - 0x000048)
struct FStateDrivenEvent_Timer : FStateDrivenEvent
{ 
	FStateDrivenFloat                                  duration;                                                   // 0x0028   (0x0018)  
	FTimerHandle                                       TimerTransitionEventHandle;                                 // 0x0040   (0x0008)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenEvent_WithdrawItem
/// Size: 0x0000 (0x000058 - 0x000058)
struct FStateDrivenEvent_WithdrawItem : FStateDrivenEvent_InteractionBase
{ 
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenFloat_Base
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStateDrivenFloat_Base
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenFloat_Simple
/// Size: 0x0008 (0x000008 - 0x000010)
struct FStateDrivenFloat_Simple : FStateDrivenFloat_Base
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenFloat_Variable
/// Size: 0x0008 (0x000008 - 0x000010)
struct FStateDrivenFloat_Variable : FStateDrivenFloat_Base
{ 
	int32_t                                            VariableIndex;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Base
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStateDrivenTagQuery_Base
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Simple
/// Size: 0x0048 (0x000008 - 0x000050)
struct FStateDrivenTagQuery_Simple : FStateDrivenTagQuery_Base
{ 
	FGameplayTagQuery                                  Query;                                                      // 0x0008   (0x0048)  
};

/// Struct /Script/StateDrivenActorRuntime.StateDrivenTagQuery_Variable
/// Size: 0x0008 (0x000008 - 0x000010)
struct FStateDrivenTagQuery_Variable : FStateDrivenTagQuery_Base
{ 
	int32_t                                            VariableIndex;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

