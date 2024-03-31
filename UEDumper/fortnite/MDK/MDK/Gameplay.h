
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Athena
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: RidingCodeRuntime

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C
/// Size: 0x0008 (0x000B60 - 0x000B68)
class UGA_Riding_Creature_Burt_SprintCharge_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB60, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x186becc] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge
	// void ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge(int32_t EntryPoint);                                          // [0x186becc] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
/// Size: 0x0008 (0x000B60 - 0x000B68)
class UGA_Riding_Player_StopRidingOnTriggered_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB60, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C.ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered
	// void ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32_t EntryPoint);                                        // [0x186becc] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/Camera/Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C
/// Size: 0x0000 (0x001CC0 - 0x001CC0)
class URiding_PlayerCameraMode_TacticalSprint_C : public UFortCameraMode_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7360;

public:
};

/// Class /RidingContent/Gameplay/General/GE_Riding_EatSlapBerry_TriggerInfiniteStamina.GE_Riding_EatSlapBerry_TriggerInfiniteStamina_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_EatSlapBerry_TriggerInfiniteStamina_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
/// Size: 0x0018 (0x000B60 - 0x000B78)
class UGA_Riding_Player_IsRiding_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB60, 8, 0, 0})
	CMember(class UAnimMontage*)                       SettleMontageRef                                            OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(class UFortAbilityTask_PlayMontageWaitTarget*) settleMontageTask                                       OFFSET(get<T>, {0xB70, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x186becc] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.ExecuteUbergraph_GA_Riding_Player_IsRiding
	// void ExecuteUbergraph_GA_Riding_Player_IsRiding(int32_t EntryPoint);                                                     // [0x186becc] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_IsRiding.GE_Riding_Player_IsRiding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_IsRiding_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/Camera/RidingCameraMode.RidingCameraMode_C
/// Size: 0x0000 (0x001CC0 - 0x001CC0)
class URidingCameraMode_C : public UFortCameraMode_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7360;

public:
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_Petting.GE_Riding_Player_Petting_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_Petting_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
/// Size: 0x0030 (0x000B60 - 0x000B90)
class UGA_Riding_Player_Petting_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB60, 8, 0, 0})
	CMember(class URidableComponent*)                  Active_Ridable                                              OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(class UClass*)                             GE_PlayerPetting                                            OFFSET(get<T>, {0xB70, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      TagsToCancelPetting                                         OFFSET(get<T>, {0xB78, 16, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayerPawnRider                                         OFFSET(get<T>, {0xB88, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.PettingTelemetry
	// void PettingTelemetry(class AActor* Owner);                                                                              // [0x186becc] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.GetRiderPettingMontage
	// void GetRiderPettingMontage(class UAnimMontage*& RiderPettingMontage);                                                   // [0x186becc] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                     // [0x186becc] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                   // [0x186becc] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                      // [0x186becc] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                     // [0x186becc] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D
	// void Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D();                                                                           // [0x186becc] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x186becc] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.ExecuteUbergraph_GA_Riding_Player_Petting
	// void ExecuteUbergraph_GA_Riding_Player_Petting(int32_t EntryPoint);                                                      // [0x186becc] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
/// Size: 0x0008 (0x000EA0 - 0x000EA8)
class UGA_Riding_Creature_IsBeingRidden_Passive_C : public UGA_NPC_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3752;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEA0, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x186becc] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive
	// void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive(int32_t EntryPoint);                                      // [0x186becc] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden_Passive.GE_Riding_Creatue_IsBeingRidden_Passive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creatue_IsBeingRidden_Passive_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C
/// Size: 0x0008 (0x000EA0 - 0x000EA8)
class UGA_Riding_Creature_IsBeingRidden_C : public UGA_NPC_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3752;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEA0, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x186becc] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden
	// void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32_t EntryPoint);                                              // [0x186becc] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden.GE_Riding_Creatue_IsBeingRidden_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creatue_IsBeingRidden_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Irwin_Prey_Burt_IsBeingRidden.GE_Riding_Irwin_Prey_Burt_IsBeingRidden_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Irwin_Prey_Burt_IsBeingRidden_C : public UGE_Riding_Creatue_IsBeingRidden_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C
/// Size: 0x0019 (0x000B60 - 0x000B79)
class UGA_Riding_Player_Sprint_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2937;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB60, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      Tags_to_cancel_sprinting                                    OFFSET(get<T>, {0xB68, 16, 0, 0})
	DMember(bool)                                      ShouldCancelSprint                                          OFFSET(get<bool>, {0xB78, 1, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.OnRep_CancelSprintDispatcher
	// void OnRep_CancelSprintDispatcher();                                                                                     // [0x186becc] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.Added_BA9D24D64958BB04345A3D89BD7617CA
	// void Added_BA9D24D64958BB04345A3D89BD7617CA();                                                                           // [0x186becc] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x186becc] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.ExecuteUbergraph_GA_Riding_Player_Sprint
	// void ExecuteUbergraph_GA_Riding_Player_Sprint(int32_t EntryPoint);                                                       // [0x186becc] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_Sprint.GE_Riding_Player_Sprint_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_Sprint_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creature_Grant_EatToRefuel.GE_Riding_Creature_Grant_EatToRefuel_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creature_Grant_EatToRefuel_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C
/// Size: 0x0030 (0x000B60 - 0x000B90)
class UGA_Riding_Creature_EatToRefuel_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB60, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Slap_Berry_Tags                                             OFFSET(getStruct<T>, {0xB68, 32, 0, 0})
	CMember(class UClass*)                             Slap_Berry_Gameplay_Effect                                  OFFSET(get<T>, {0xB88, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C.ExecuteUbergraph_GA_Riding_Creature_EatToRefuel
	// void ExecuteUbergraph_GA_Riding_Creature_EatToRefuel(int32_t EntryPoint);                                                // [0x186becc] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Pawn.CameraShake_Riding_BoarSprintImpact_Pawn_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_Pawn_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_BuildDestroy.CameraShake_Riding_BoarSprintImpact_BuildDestroy_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_BuildDestroy_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Default.CameraShake_Riding_BoarSprintImpact_Default_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_Default_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_Loop.CameraShake_Riding_Sprint_Loop_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_Sprint_Loop_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_FOVFlare.CameraShake_Riding_Sprint_FOVFlare_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_Sprint_FOVFlare_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_JumpOnCreature.CameraShake_Riding_JumpOnCreature_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_JumpOnCreature_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

