
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AscenderCodeRuntime
/// dependency: Athena
/// dependency: AudioExtensions
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayEffectTemplates
/// dependency: GameplayTags
/// dependency: Niagara
/// dependency: RidingCodeRuntime

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C
/// Size: 0x0008 (0x000B48 - 0x000B50)
class UGA_Riding_Creature_Burt_SprintCharge_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB48, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge
	// void ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge(int32_t EntryPoint);                                          // [0x1340978] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
/// Size: 0x0008 (0x000B48 - 0x000B50)
class UGA_Riding_Player_StopRidingOnTriggered_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB48, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C.ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered
	// void ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32_t EntryPoint);                                        // [0x1340978] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/Camera/Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C
/// Size: 0x0000 (0x001CF0 - 0x001CF0)
class URiding_PlayerCameraMode_TacticalSprint_C : public UFortCameraMode_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7408;

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
/// Size: 0x0030 (0x000B48 - 0x000B78)
class UGA_Riding_Player_Petting_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB48, 8, 0, 0})
	CMember(class URidableComponent*)                  Active_Ridable                                              OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(class UClass*)                             GE_PlayerPetting                                            OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      TagsToCancelPetting                                         OFFSET(get<T>, {0xB60, 16, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayerPawnRider                                         OFFSET(get<T>, {0xB70, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.PettingTelemetry
	// void PettingTelemetry(class AActor* Owner);                                                                              // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.GetRiderPettingMontage
	// void GetRiderPettingMontage(class UAnimMontage*& RiderPettingMontage);                                                   // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                      // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D
	// void Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D();                                                                           // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.ExecuteUbergraph_GA_Riding_Player_Petting
	// void ExecuteUbergraph_GA_Riding_Player_Petting(int32_t EntryPoint);                                                      // [0x1340978] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
/// Size: 0x0018 (0x000B48 - 0x000B60)
class UGA_Riding_Player_IsRiding_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB48, 8, 0, 0})
	CMember(class UAnimMontage*)                       SettleMontageRef                                            OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(class UFortAbilityTask_PlayMontageWaitTarget*) settleMontageTask                                       OFFSET(get<T>, {0xB58, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.ExecuteUbergraph_GA_Riding_Player_IsRiding
	// void ExecuteUbergraph_GA_Riding_Player_IsRiding(int32_t EntryPoint);                                                     // [0x1340978] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_IsRiding.GE_Riding_Player_IsRiding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_IsRiding_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

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

/// Class /RidingContent/Gameplay/Camera/RidingCameraMode.RidingCameraMode_C
/// Size: 0x0000 (0x001CF0 - 0x001CF0)
class URidingCameraMode_C : public UFortCameraMode_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7408;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
/// Size: 0x0008 (0x000ED8 - 0x000EE0)
class UGA_Riding_Creature_IsBeingRidden_Passive_C : public UGA_NPC_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xED8, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive
	// void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive(int32_t EntryPoint);                                      // [0x1340978] Final|HasDefaults    
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
/// Size: 0x0008 (0x000ED8 - 0x000EE0)
class UGA_Riding_Creature_IsBeingRidden_C : public UGA_NPC_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xED8, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden
	// void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32_t EntryPoint);                                              // [0x1340978] Final|HasDefaults    
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
/// Size: 0x0019 (0x000B48 - 0x000B61)
class UGA_Riding_Player_Sprint_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2913;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB48, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      Tags_to_cancel_sprinting                                    OFFSET(get<T>, {0xB50, 16, 0, 0})
	DMember(bool)                                      ShouldCancelSprint                                          OFFSET(get<bool>, {0xB60, 1, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.OnRep_CancelSprintDispatcher
	// void OnRep_CancelSprintDispatcher();                                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.Added_BA9D24D64958BB04345A3D89BD7617CA
	// void Added_BA9D24D64958BB04345A3D89BD7617CA();                                                                           // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.ExecuteUbergraph_GA_Riding_Player_Sprint
	// void ExecuteUbergraph_GA_Riding_Player_Sprint(int32_t EntryPoint);                                                       // [0x1340978] Final|HasDefaults    
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
/// Size: 0x0030 (0x000B48 - 0x000B78)
class UGA_Riding_Creature_EatToRefuel_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB48, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Slap_Berry_Tags                                             OFFSET(getStruct<T>, {0xB50, 32, 0, 0})
	CMember(class UClass*)                             Slap_Berry_Gameplay_Effect                                  OFFSET(get<T>, {0xB70, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C.ExecuteUbergraph_GA_Riding_Creature_EatToRefuel
	// void ExecuteUbergraph_GA_Riding_Creature_EatToRefuel(int32_t EntryPoint);                                                // [0x1340978] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_JumpOnCreature.CameraShake_Riding_JumpOnCreature_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_JumpOnCreature_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
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

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Ascender_Descending.GE_Ascender_Descending_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Ascender_Descending_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Ascender_Ascending.GE_Ascender_Ascending_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Ascender_Ascending_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Athena_Ascender_DestroyBuilding.GE_Athena_Ascender_DestroyBuilding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Ascender_DestroyBuilding_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
/// Size: 0x01A0 (0x000FF0 - 0x001190)
class AB_Athena_Zipline_Ascender_C : public AFortAscenderZipline
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4496;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xFF0, 8, 0, 0})
	CMember(class UAudioParameterComponent*)           AudioParameter                                              OFFSET(get<T>, {0xFF8, 8, 0, 0})
	CMember(class UCapsuleComponent*)                  Capsule                                                     OFFSET(get<T>, {0x1000, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Ascender_End_Cap                                            OFFSET(get<T>, {0x1008, 8, 0, 0})
	CMember(class UAudioComponent*)                    PoleMotorSFX                                                OFFSET(get<T>, {0x1010, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  HandleVFX                                                   OFFSET(get<T>, {0x1018, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  PoleMotorVFX                                                OFFSET(get<T>, {0x1020, 8, 0, 0})
	CMember(class UAudioComponent*)                    HandleAscendingSFX                                          OFFSET(get<T>, {0x1028, 8, 0, 0})
	CMember(class UAudioComponent*)                    HandleDescendingSFX                                         OFFSET(get<T>, {0x1030, 8, 0, 0})
	CMember(class USphereComponent*)                   HandleInteractVolume                                        OFFSET(get<T>, {0x1038, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Handle                                                      OFFSET(get<T>, {0x1040, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Top                                                         OFFSET(get<T>, {0x1048, 8, 0, 0})
	SMember(FScalableFloat)                            Hotfix                                                      OFFSET(getStruct<T>, {0x1050, 40, 0, 0})
	CMember(class USoundBase*)                         StartHandleSound                                            OFFSET(get<T>, {0x1078, 8, 0, 0})
	CMember(class USoundBase*)                         StopHandleSound                                             OFFSET(get<T>, {0x1080, 8, 0, 0})
	CMember(class USoundBase*)                         StopPoleMotorSoundSkid                                      OFFSET(get<T>, {0x1088, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SplineMeshMaterialOverride                                  OFFSET(get<T>, {0x1090, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     AscendingHandleVFX                                          OFFSET(get<T>, {0x1098, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     DescendingHandleVFX                                         OFFSET(get<T>, {0x10A0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SplineThickenMeshMaterialOverride                           OFFSET(get<T>, {0x10A8, 8, 0, 0})
	DMember(double)                                    MaxWobbleAnimationLength                                    OFFSET(get<double>, {0x10B0, 8, 0, 0})
	DMember(double)                                    LastWobbleActivationTime                                    OFFSET(get<double>, {0x10B8, 8, 0, 0})
	DMember(double)                                    TilingDivisor                                               OFFSET(get<double>, {0x10C0, 8, 0, 0})
	SMember(FVector)                                   HandleAnimOffset                                            OFFSET(getStruct<T>, {0x10C8, 24, 0, 0})
	SMember(FVector)                                   SlideAnimOffset                                             OFFSET(getStruct<T>, {0x10E0, 24, 0, 0})
	CMember(class USoundBase*)                         PlayerGrabBeginDecentSound                                  OFFSET(get<T>, {0x10F8, 8, 0, 0})
	CMember(class UAudioComponent*)                    HandleStart                                                 OFFSET(get<T>, {0x1100, 8, 0, 0})
	SMember(FVector)                                   EndCapRelativeScale                                         OFFSET(getStruct<T>, {0x1108, 24, 0, 0})
	CMember(class UClass*)                             StructureDamageGE                                           OFFSET(get<T>, {0x1120, 8, 0, 0})
	SMember(FTimerHandle)                              AudioVisualizerHandle                                       OFFSET(getStruct<T>, {0x1128, 8, 0, 0})
	CMember(TArray<class AFortPlayerPawn*>)            PlayersOnAscender                                           OFFSET(get<T>, {0x1130, 16, 0, 0})
	CMember(class USoundBase*)                         TravelSound                                                 OFFSET(get<T>, {0x1140, 8, 0, 0})
	DMember(bool)                                      ShouldPlayWhoosh                                            OFFSET(get<bool>, {0x1148, 1, 0, 0})
	CMember(class USoundBase*)                         AscendWhooshSound                                           OFFSET(get<T>, {0x1150, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    PlayerPawn                                                  OFFSET(get<T>, {0x1158, 8, 0, 0})
	SMember(FTimerHandle)                              WhooshHandle                                                OFFSET(getStruct<T>, {0x1160, 8, 0, 0})
	SMember(FGameplayTag)                              LinkToDestroyedGC                                           OFFSET(getStruct<T>, {0x1168, 4, 0, 0})
	DMember(bool)                                      BeDestroy                                                   OFFSET(get<bool>, {0x116C, 1, 0, 0})
	CMember(class APlayerState*)                       PlayerStateUsingHandleComponent                             OFFSET(get<T>, {0x1170, 8, 0, 0})
	CMember(TArray<FAudioParameter>)                   AudioParameters                                             OFFSET(get<T>, {0x1178, 16, 0, 0})
	CMember(class UAudioParameterComponent*)           ParameterComponent                                          OFFSET(get<T>, {0x1188, 8, 0, 0})


	/// Functions
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetAffiliationsToShowFor
	// TArray<TEnumAsByte<EFortTeamAffiliation>> GetAffiliationsToShowFor();                                                    // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldShowSoundIndicator
	// bool ShouldShowSoundIndicator(class AFortPlayerController* PlayerController);                                            // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetDynamicDestructionResourceType
	// EDynamicDestructionResourceType GetDynamicDestructionResourceType();                                                     // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetDynamicDestructionStaticMeshComponents
	// void GetDynamicDestructionStaticMeshComponents(TArray<UStaticMeshComponent*>& OutFullFXStaticMeshComponents, TArray<UStaticMeshComponent*>& OutVisibilityOnlyStaticMeshComponents, TArray<UStaticMeshComponent*>& OutShadowProxyStaticMeshComponents); // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldUseDynamicDestructionNiagaraSystem
	// bool ShouldUseDynamicDestructionNiagaraSystem();                                                                         // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldUseDynamicDestructionMaterial
	// bool ShouldUseDynamicDestructionMaterial();                                                                              // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnRep_BeDestroy
	// void OnRep_BeDestroy();                                                                                                  // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintCanInteract
	// bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType); // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CanBeginZiplining
	// bool CanBeginZiplining(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent);            // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.LocalOnFailedInteract
	// void LocalOnFailedInteract(class AFortPlayerPawn* InteractingPawn);                                                      // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetBoundsComponents
	// void GetBoundsComponents(class AActor* SelfActor, TArray<USceneComponent*>& OutComponents);                              // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ApplyStructureDamage
	// void ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource);                            // [0x1340978] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttachCapToEndOfSplineMesh
	// void AttachCapToEndOfSplineMesh();                                                                                       // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttemptOverrideZiplineSocketOffset
	// bool AttemptOverrideZiplineSocketOffset(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, FVector& BaseSocketOffset, FVector& OutSocketOffset); // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CalculateLaunchVelocity
	// void CalculateLaunchVelocity(class AActor* PlayerPawn, FVector& LaunchVelocity);                                         // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.SetCableTilingBySplineLength
	// void SetCableTilingBySplineLength();                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.DeactivateCableWobble
	// void DeactivateCableWobble();                                                                                            // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ActivateCableWobble
	// void ActivateCableWobble();                                                                                              // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HotfixEnabled
	// void HotfixEnabled();                                                                                                    // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetTopComponent
	// class UPrimitiveComponent* GetTopComponent();                                                                            // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetHandleComponent
	// class UPrimitiveComponent* GetHandleComponent();                                                                         // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetInteractComponentOverride
	// class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent); // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PawnIsInHandleRange
	// bool PawnIsInHandleRange(class AFortPawn* Pawn);                                                                         // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintGetInteractionString
	// FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetLastSplinePointIndex
	// int32_t GetLastSplinePointIndex();                                                                                       // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnReady_93837FC44A18F6AE57D3478CC43A98AB
	// void OnReady_93837FC44A18F6AE57D3478CC43A98AB(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStartedUsingHandle
	// void BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player);                                                   // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStoppedUsingHandle
	// void BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player);                                                   // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringCable
	// void BP_HandleStartedLoweringCable();                                                                                    // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringHandle
	// void BP_HandleStartedLoweringHandle();                                                                                   // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringCable
	// void BP_HandleStoppedLoweringCable();                                                                                    // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringHandle
	// void BP_HandleStoppedLoweringHandle();                                                                                   // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStarted
	// void OnZipliningStarted(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent);           // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PlayerDescendingStarted
	// void PlayerDescendingStarted(class AFortPlayerPawn* Sliding Player);                                                     // [0x1340978] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleUpdatedLoweringCable
	// void BP_HandleUpdatedLoweringCable();                                                                                    // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStopped
	// void OnZipliningStopped(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration); // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldPlayWhooshTimer
	// void ShouldPlayWhooshTimer();                                                                                            // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnAscenderSetupComplete_Event
	// void OnAscenderSetupComplete_Event();                                                                                    // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HandleLinkedActorDestroyed
	// void HandleLinkedActorDestroyed(class AActor* DamageCauser);                                                             // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ExecuteUbergraph_B_Athena_Zipline_Ascender
	// void ExecuteUbergraph_B_Athena_Zipline_Ascender(int32_t EntryPoint);                                                     // [0x1340978] Final|HasDefaults    
};

/// Class /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C
/// Size: 0x0059 (0x000C10 - 0x000C69)
class UGA_Athena_Ascender_Smash_C : public UGA_Athena_ZipLine_SmashParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3177;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xC10, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                ZiplineInteractComponent                                    OFFSET(get<T>, {0xC18, 8, 0, 0})
	CMember(class AB_Athena_Zipline_Ascender_C*)       AscenderZipline                                             OFFSET(get<T>, {0xC20, 8, 0, 0})
	SMember(FGameplayTag)                              DescendingTag                                               OFFSET(getStruct<T>, {0xC28, 4, 0, 0})
	CMember(class UAnimMontage*)                       M_AscendingAnim                                             OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(class UAnimMontage*)                       M_DescendingAnim                                            OFFSET(get<T>, {0xC38, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               DescendingGE_Handle                                         OFFSET(getStruct<T>, {0xC40, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               AscendingGE_Handle                                          OFFSET(getStruct<T>, {0xC48, 8, 0, 0})
	CMember(class UAnimMontage*)                       F_AscendingAnim                                             OFFSET(get<T>, {0xC50, 8, 0, 0})
	CMember(class UAnimMontage*)                       F_DescendingAnim                                            OFFSET(get<T>, {0xC58, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ZiplinePassiveGE                                            OFFSET(getStruct<T>, {0xC60, 8, 0, 0})
	DMember(bool)                                      bHolsterApplied                                             OFFSET(get<bool>, {0xC68, 1, 0, 0})


	/// Functions
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GetAscenderMontage
	// void GetAscenderMontage(class UAnimMontage*& Montage);                                                                   // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoFailSafeUnholster
	// void DoFailSafeUnholster();                                                                                              // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoUnholster
	// void DoUnholster();                                                                                                      // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoHolster
	// void DoHolster();                                                                                                        // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.IsPlayerUsingHandle
	// bool IsPlayerUsingHandle();                                                                                              // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCancelled_899182BF4C098785CCBCFD85AA84455F
	// void OnCancelled_899182BF4C098785CCBCFD85AA84455F();                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnInterrupted_899182BF4C098785CCBCFD85AA84455F
	// void OnInterrupted_899182BF4C098785CCBCFD85AA84455F();                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnBlendOut_899182BF4C098785CCBCFD85AA84455F
	// void OnBlendOut_899182BF4C098785CCBCFD85AA84455F();                                                                      // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCompleted_899182BF4C098785CCBCFD85AA84455F
	// void OnCompleted_899182BF4C098785CCBCFD85AA84455F();                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZipliningComplete
	// void ZipliningComplete();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_SmashObjects
	// void SurroundingsCheck_SmashObjects();                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_MotorCheck
	// void SurroundingsCheck_MotorCheck();                                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineEnter
	// void GameplayTagEvent_ZiplineEnter(FGameplayEventData& EventData);                                                       // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineExit
	// void GameplayTagEvent_ZiplineExit(FGameplayEventData& EventData);                                                        // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.FallingTagRemoved
	// void FallingTagRemoved();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.Pre_BeginZiplinging
	// void Pre_BeginZiplinging();                                                                                              // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.HandleGameplayEventTag
	// void HandleGameplayEventTag(FGameplayEventData& EventData);                                                              // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZiplinePostBegin_Event
	// void ZiplinePostBegin_Event();                                                                                           // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ExecuteUbergraph_GA_Athena_Ascender_Smash
	// void ExecuteUbergraph_GA_Athena_Ascender_Smash(int32_t EntryPoint);                                                      // [0x1340978] Final|HasDefaults    
};

/// Class /Ascender/Gameplay/Ascender/CameraShake_Ascender_LineAttach1.CameraShake_Ascender_LineAttach1_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Ascender_LineAttach1_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

