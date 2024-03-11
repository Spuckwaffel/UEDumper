
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
/// Size: 0x0008 (0x000B60 - 0x000B68)
class UGA_Riding_Creature_Burt_SprintCharge_C : public UFortGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0B60   (0x0008)  


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge
	// void ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge(int32_t EntryPoint);                                       // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
/// Size: 0x0008 (0x000B60 - 0x000B68)
class UGA_Riding_Player_StopRidingOnTriggered_C : public UFortGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0B60   (0x0008)  


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C.ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered
	// void ExecuteUbergraph_GA_Riding_Player_StopRidingOnTriggered(int32_t EntryPoint);                                     // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_EatSlapBerry_TriggerInfiniteStamina.GE_Riding_EatSlapBerry_TriggerInfiniteStamina_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_EatSlapBerry_TriggerInfiniteStamina_C : public UGameplayEffect
{ 
public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
/// Size: 0x0018 (0x000B60 - 0x000B78)
class UGA_Riding_Player_IsRiding_C : public UFortGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0B60   (0x0008)  
	class UAnimMontage*                                SettleMontageRef;                                           // 0x0B68   (0x0008)  
	class UFortAbilityTask_PlayMontageWaitTarget*      settleMontageTask;                                          // 0x0B70   (0x0008)  


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.ExecuteUbergraph_GA_Riding_Player_IsRiding
	// void ExecuteUbergraph_GA_Riding_Player_IsRiding(int32_t EntryPoint);                                                  // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_IsRiding.GE_Riding_Player_IsRiding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_IsRiding_C : public UGameplayEffect
{ 
public:
};

/// Class /RidingContent/Gameplay/Camera/Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C
/// Size: 0x0000 (0x001CC0 - 0x001CC0)
class URiding_PlayerCameraMode_TacticalSprint_C : public UFortCameraMode_Riding
{ 
public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
/// Size: 0x0030 (0x000B60 - 0x000B90)
class UGA_Riding_Player_Petting_C : public UFortGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0B60   (0x0008)  
	class URidableComponent*                           Active_Ridable;                                             // 0x0B68   (0x0008)  
	class UClass*                                      GE_PlayerPetting;                                           // 0x0B70   (0x0008)  
	TArray<FGameplayTag>                               TagsToCancelPetting;                                        // 0x0B78   (0x0010)  
	class AFortPlayerPawn*                             FortPlayerPawnRider;                                        // 0x0B88   (0x0008)  


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.PettingTelemetry
	// void PettingTelemetry(class AActor* Owner);                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.GetRiderPettingMontage
	// void GetRiderPettingMontage(class UAnimMontage*& RiderPettingMontage);                                                // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnCancelled_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnInterrupted_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnBlendOut_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8
	// void OnCompleted_EBEF9ED74121A25C39ABC2B953D1B3F8();                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D
	// void Added_DE1C9DFC4A5B4A7B0E203C8095E1CE5D();                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C.ExecuteUbergraph_GA_Riding_Player_Petting
	// void ExecuteUbergraph_GA_Riding_Player_Petting(int32_t EntryPoint);                                                   // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_Petting.GE_Riding_Player_Petting_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_Petting_C : public UGameplayEffect
{ 
public:
};

/// Class /RidingContent/Gameplay/Camera/RidingCameraMode.RidingCameraMode_C
/// Size: 0x0000 (0x001CC0 - 0x001CC0)
class URidingCameraMode_C : public UFortCameraMode_Riding
{ 
public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
/// Size: 0x0008 (0x000EA0 - 0x000EA8)
class UGA_Riding_Creature_IsBeingRidden_Passive_C : public UGA_NPC_Parent_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0EA0   (0x0008)  


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive
	// void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive(int32_t EntryPoint);                                   // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden_Passive.GE_Riding_Creatue_IsBeingRidden_Passive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creatue_IsBeingRidden_Passive_C : public UGameplayEffect
{ 
public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C
/// Size: 0x0008 (0x000EA0 - 0x000EA8)
class UGA_Riding_Creature_IsBeingRidden_C : public UGA_NPC_Parent_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0EA0   (0x0008)  


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden
	// void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden(int32_t EntryPoint);                                           // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden.GE_Riding_Creatue_IsBeingRidden_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creatue_IsBeingRidden_C : public UGameplayEffect
{ 
public:
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Irwin_Prey_Burt_IsBeingRidden.GE_Riding_Irwin_Prey_Burt_IsBeingRidden_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Irwin_Prey_Burt_IsBeingRidden_C : public UGE_Riding_Creatue_IsBeingRidden_C
{ 
public:
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creature_Grant_EatToRefuel.GE_Riding_Creature_Grant_EatToRefuel_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creature_Grant_EatToRefuel_C : public UGameplayEffect
{ 
public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C
/// Size: 0x0030 (0x000B60 - 0x000B90)
class UGA_Riding_Creature_EatToRefuel_C : public UFortGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0B60   (0x0008)  
	FGameplayTagContainer                              Slap_Berry_Tags;                                            // 0x0B68   (0x0020)  
	class UClass*                                      Slap_Berry_Gameplay_Effect;                                 // 0x0B88   (0x0008)  


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C.ExecuteUbergraph_GA_Riding_Creature_EatToRefuel
	// void ExecuteUbergraph_GA_Riding_Creature_EatToRefuel(int32_t EntryPoint);                                             // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C
/// Size: 0x0019 (0x000B60 - 0x000B79)
class UGA_Riding_Player_Sprint_C : public UFortGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0B60   (0x0008)  
	TArray<FGameplayTag>                               Tags_to_cancel_sprinting;                                   // 0x0B68   (0x0010)  
	bool                                               ShouldCancelSprint;                                         // 0x0B78   (0x0001)  


	/// Functions
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.OnRep_CancelSprintDispatcher
	// void OnRep_CancelSprintDispatcher();                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.Added_BA9D24D64958BB04345A3D89BD7617CA
	// void Added_BA9D24D64958BB04345A3D89BD7617CA();                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.FailedToActivatePassiveAbility
	// void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo);                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C.ExecuteUbergraph_GA_Riding_Player_Sprint
	// void ExecuteUbergraph_GA_Riding_Player_Sprint(int32_t EntryPoint);                                                    // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_Sprint.GE_Riding_Player_Sprint_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_Sprint_C : public UGameplayEffect
{ 
public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Pawn.CameraShake_Riding_BoarSprintImpact_Pawn_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_Pawn_C : public ULegacyCameraShake
{ 
public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_BuildDestroy.CameraShake_Riding_BoarSprintImpact_BuildDestroy_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_BuildDestroy_C : public ULegacyCameraShake
{ 
public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Default.CameraShake_Riding_BoarSprintImpact_Default_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_Default_C : public ULegacyCameraShake
{ 
public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_Loop.CameraShake_Riding_Sprint_Loop_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_Sprint_Loop_C : public ULegacyCameraShake
{ 
public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_FOVFlare.CameraShake_Riding_Sprint_FOVFlare_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_Sprint_FOVFlare_C : public ULegacyCameraShake
{ 
public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_JumpOnCreature.CameraShake_Riding_JumpOnCreature_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_JumpOnCreature_C : public ULegacyCameraShake
{ 
public:
};

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Athena_Ascender_DestroyBuilding.GE_Athena_Ascender_DestroyBuilding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Ascender_DestroyBuilding_C : public UGET_DirectPhysicalDamage_C
{ 
public:
};

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Ascender_Ascending.GE_Ascender_Ascending_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Ascender_Ascending_C : public UGameplayEffect
{ 
public:
};

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Ascender_Descending.GE_Ascender_Descending_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Ascender_Descending_C : public UGameplayEffect
{ 
public:
};

/// Class /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
/// Size: 0x01A0 (0x000FF0 - 0x001190)
class AB_Athena_Zipline_Ascender_C : public AFortAscenderZipline
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0FF0   (0x0008)  
	class UAudioParameterComponent*                    AudioParameter;                                             // 0x0FF8   (0x0008)  
	class UCapsuleComponent*                           Capsule;                                                    // 0x1000   (0x0008)  
	class UStaticMeshComponent*                        Ascender_End_Cap;                                           // 0x1008   (0x0008)  
	class UAudioComponent*                             PoleMotorSFX;                                               // 0x1010   (0x0008)  
	class UNiagaraComponent*                           HandleVFX;                                                  // 0x1018   (0x0008)  
	class UNiagaraComponent*                           PoleMotorVFX;                                               // 0x1020   (0x0008)  
	class UAudioComponent*                             HandleAscendingSFX;                                         // 0x1028   (0x0008)  
	class UAudioComponent*                             HandleDescendingSFX;                                        // 0x1030   (0x0008)  
	class USphereComponent*                            HandleInteractVolume;                                       // 0x1038   (0x0008)  
	class UStaticMeshComponent*                        Handle;                                                     // 0x1040   (0x0008)  
	class UStaticMeshComponent*                        Top;                                                        // 0x1048   (0x0008)  
	FScalableFloat                                     Hotfix;                                                     // 0x1050   (0x0028)  
	class USoundBase*                                  StartHandleSound;                                           // 0x1078   (0x0008)  
	class USoundBase*                                  StopHandleSound;                                            // 0x1080   (0x0008)  
	class USoundBase*                                  StopPoleMotorSoundSkid;                                     // 0x1088   (0x0008)  
	class UMaterialInterface*                          SplineMeshMaterialOverride;                                 // 0x1090   (0x0008)  
	class UNiagaraSystem*                              AscendingHandleVFX;                                         // 0x1098   (0x0008)  
	class UNiagaraSystem*                              DescendingHandleVFX;                                        // 0x10A0   (0x0008)  
	class UMaterialInterface*                          SplineThickenMeshMaterialOverride;                          // 0x10A8   (0x0008)  
	double                                             MaxWobbleAnimationLength;                                   // 0x10B0   (0x0008)  
	double                                             LastWobbleActivationTime;                                   // 0x10B8   (0x0008)  
	double                                             TilingDivisor;                                              // 0x10C0   (0x0008)  
	FVector                                            HandleAnimOffset;                                           // 0x10C8   (0x0018)  
	FVector                                            SlideAnimOffset;                                            // 0x10E0   (0x0018)  
	class USoundBase*                                  PlayerGrabBeginDecentSound;                                 // 0x10F8   (0x0008)  
	class UAudioComponent*                             HandleStart;                                                // 0x1100   (0x0008)  
	FVector                                            EndCapRelativeScale;                                        // 0x1108   (0x0018)  
	class UClass*                                      StructureDamageGE;                                          // 0x1120   (0x0008)  
	FTimerHandle                                       AudioVisualizerHandle;                                      // 0x1128   (0x0008)  
	TArray<class AFortPlayerPawn*>                     PlayersOnAscender;                                          // 0x1130   (0x0010)  
	class USoundBase*                                  TravelSound;                                                // 0x1140   (0x0008)  
	bool                                               ShouldPlayWhoosh;                                           // 0x1148   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x1149   (0x0007)  MISSED
	class USoundBase*                                  AscendWhooshSound;                                          // 0x1150   (0x0008)  
	class AFortPlayerPawn*                             PlayerPawn;                                                 // 0x1158   (0x0008)  
	FTimerHandle                                       WhooshHandle;                                               // 0x1160   (0x0008)  
	FGameplayTag                                       LinkToDestroyedGC;                                          // 0x1168   (0x0004)  
	bool                                               BeDestroy;                                                  // 0x116C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x116D   (0x0003)  MISSED
	class APlayerState*                                PlayerStateUsingHandleComponent;                            // 0x1170   (0x0008)  
	TArray<FAudioParameter>                            AudioParameters;                                            // 0x1178   (0x0010)  
	class UAudioParameterComponent*                    ParameterComponent;                                         // 0x1188   (0x0008)  


	/// Functions
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetAffiliationsToShowFor
	// TArray<TEnumAsByte<EFortTeamAffiliation>> GetAffiliationsToShowFor();                                                 // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldShowSoundIndicator
	// bool ShouldShowSoundIndicator(class AFortPlayerController* PlayerController);                                         // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetDynamicDestructionResourceType
	// EDynamicDestructionResourceType GetDynamicDestructionResourceType();                                                  // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetDynamicDestructionStaticMeshComponents
	// void GetDynamicDestructionStaticMeshComponents(TArray<UStaticMeshComponent*>& OutFullFXStaticMeshComponents, TArray<UStaticMeshComponent*>& OutVisibilityOnlyStaticMeshComponents, TArray<UStaticMeshComponent*>& OutShadowProxyStaticMeshComponents); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldUseDynamicDestructionNiagaraSystem
	// bool ShouldUseDynamicDestructionNiagaraSystem();                                                                      // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldUseDynamicDestructionMaterial
	// bool ShouldUseDynamicDestructionMaterial();                                                                           // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnRep_BeDestroy
	// void OnRep_BeDestroy();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintCanInteract
	// bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CanBeginZiplining
	// bool CanBeginZiplining(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent);         // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.LocalOnFailedInteract
	// void LocalOnFailedInteract(class AFortPlayerPawn* InteractingPawn);                                                   // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetBoundsComponents
	// void GetBoundsComponents(class AActor* SelfActor, TArray<USceneComponent*>& OutComponents);                           // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ApplyStructureDamage
	// void ApplyStructureDamage(class ABuildingSMActor* BuildingActor, class AActor* DamageSource);                         // [0x18a39e4] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttachCapToEndOfSplineMesh
	// void AttachCapToEndOfSplineMesh();                                                                                    // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttemptOverrideZiplineSocketOffset
	// bool AttemptOverrideZiplineSocketOffset(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, FVector& BaseSocketOffset, FVector& OutSocketOffset); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CalculateLaunchVelocity
	// void CalculateLaunchVelocity(class AActor* PlayerPawn, FVector& LaunchVelocity);                                      // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.SetCableTilingBySplineLength
	// void SetCableTilingBySplineLength();                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.DeactivateCableWobble
	// void DeactivateCableWobble();                                                                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ActivateCableWobble
	// void ActivateCableWobble();                                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HotfixEnabled
	// void HotfixEnabled();                                                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetTopComponent
	// class UPrimitiveComponent* GetTopComponent();                                                                         // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetHandleComponent
	// class UPrimitiveComponent* GetHandleComponent();                                                                      // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetInteractComponentOverride
	// class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PawnIsInHandleRange
	// bool PawnIsInHandleRange(class AFortPawn* Pawn);                                                                      // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintGetInteractionString
	// FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetLastSplinePointIndex
	// int32_t GetLastSplinePointIndex();                                                                                    // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnReady_93837FC44A18F6AE57D3478CC43A98AB
	// void OnReady_93837FC44A18F6AE57D3478CC43A98AB(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStartedUsingHandle
	// void BP_HandlePlayerStartedUsingHandle(class AFortPlayerPawn* Player);                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStoppedUsingHandle
	// void BP_HandlePlayerStoppedUsingHandle(class AFortPlayerPawn* Player);                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringCable
	// void BP_HandleStartedLoweringCable();                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringHandle
	// void BP_HandleStartedLoweringHandle();                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringCable
	// void BP_HandleStoppedLoweringCable();                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringHandle
	// void BP_HandleStoppedLoweringHandle();                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStarted
	// void OnZipliningStarted(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent);        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PlayerDescendingStarted
	// void PlayerDescendingStarted(class AFortPlayerPawn* Sliding Player);                                                  // [0x18a39e4] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleUpdatedLoweringCable
	// void BP_HandleUpdatedLoweringCable();                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStopped
	// void OnZipliningStopped(class AFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration); // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldPlayWhooshTimer
	// void ShouldPlayWhooshTimer();                                                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnAscenderSetupComplete_Event
	// void OnAscenderSetupComplete_Event();                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HandleLinkedActorDestroyed
	// void HandleLinkedActorDestroyed(class AActor* DamageCauser);                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ExecuteUbergraph_B_Athena_Zipline_Ascender
	// void ExecuteUbergraph_B_Athena_Zipline_Ascender(int32_t EntryPoint);                                                  // [0x18a39e4] Final|HasDefaults    
};

/// Class /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C
/// Size: 0x0059 (0x000C28 - 0x000C81)
class UGA_Athena_Ascender_Smash_C : public UGA_Athena_ZipLine_SmashParent_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0C28   (0x0008)  
	class UPrimitiveComponent*                         ZiplineInteractComponent;                                   // 0x0C30   (0x0008)  
	class AB_Athena_Zipline_Ascender_C*                AscenderZipline;                                            // 0x0C38   (0x0008)  
	FGameplayTag                                       DescendingTag;                                              // 0x0C40   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0C44   (0x0004)  MISSED
	class UAnimMontage*                                M_AscendingAnim;                                            // 0x0C48   (0x0008)  
	class UAnimMontage*                                M_DescendingAnim;                                           // 0x0C50   (0x0008)  
	FActiveGameplayEffectHandle                        DescendingGE_Handle;                                        // 0x0C58   (0x0008)  
	FActiveGameplayEffectHandle                        AscendingGE_Handle;                                         // 0x0C60   (0x0008)  
	class UAnimMontage*                                F_AscendingAnim;                                            // 0x0C68   (0x0008)  
	class UAnimMontage*                                F_DescendingAnim;                                           // 0x0C70   (0x0008)  
	FActiveGameplayEffectHandle                        ZiplinePassiveGE;                                           // 0x0C78   (0x0008)  
	bool                                               bHolsterApplied;                                            // 0x0C80   (0x0001)  


	/// Functions
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GetAscenderMontage
	// void GetAscenderMontage(class UAnimMontage*& Montage);                                                                // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoFailSafeUnholster
	// void DoFailSafeUnholster();                                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoUnholster
	// void DoUnholster();                                                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoHolster
	// void DoHolster();                                                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.IsPlayerUsingHandle
	// bool IsPlayerUsingHandle();                                                                                           // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCancelled_899182BF4C098785CCBCFD85AA84455F
	// void OnCancelled_899182BF4C098785CCBCFD85AA84455F();                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnInterrupted_899182BF4C098785CCBCFD85AA84455F
	// void OnInterrupted_899182BF4C098785CCBCFD85AA84455F();                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnBlendOut_899182BF4C098785CCBCFD85AA84455F
	// void OnBlendOut_899182BF4C098785CCBCFD85AA84455F();                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCompleted_899182BF4C098785CCBCFD85AA84455F
	// void OnCompleted_899182BF4C098785CCBCFD85AA84455F();                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZipliningComplete
	// void ZipliningComplete();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_SmashObjects
	// void SurroundingsCheck_SmashObjects();                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_MotorCheck
	// void SurroundingsCheck_MotorCheck();                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineEnter
	// void GameplayTagEvent_ZiplineEnter(FGameplayEventData& EventData);                                                    // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineExit
	// void GameplayTagEvent_ZiplineExit(FGameplayEventData& EventData);                                                     // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.FallingTagRemoved
	// void FallingTagRemoved();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.Pre_BeginZiplinging
	// void Pre_BeginZiplinging();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.HandleGameplayEventTag
	// void HandleGameplayEventTag(FGameplayEventData& EventData);                                                           // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZiplinePostBegin_Event
	// void ZiplinePostBegin_Event();                                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ExecuteUbergraph_GA_Athena_Ascender_Smash
	// void ExecuteUbergraph_GA_Athena_Ascender_Smash(int32_t EntryPoint);                                                   // [0x18a39e4] Final|HasDefaults    
};

/// Class /Ascender/Gameplay/Ascender/CameraShake_Ascender_LineAttach1.CameraShake_Ascender_LineAttach1_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Ascender_LineAttach1_C : public ULegacyCameraShake
{ 
public:
};

