
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Athena
/// dependency: Blueprints
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: Niagara

/// Class /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C
/// Size: 0x0019 (0x0009B0 - 0x0009C9)
class AGCNL_EdgeOfStorm_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2505;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x9B0, 8, 0, 0})
	CMember(class UAudioComponent*)                    Audio                                                       OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    StormPawn                                                   OFFSET(get<T>, {0x9C0, 8, 0, 0})
	DMember(bool)                                      bBoundAudioPercent                                          OFFSET(get<bool>, {0x9C8, 1, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated
	// void Activated(FVector EdgeOfStorm);                                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated
	// void Deactivated();                                                                                                      // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm
	// void ExecuteUbergraph_GCNL_EdgeOfStorm(int32_t EntryPoint);                                                              // [0x1340978] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Shields/GC_Shield_FullyCharged.GC_Shield_FullyCharged_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGC_Shield_FullyCharged_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:


	/// Functions
	// Function /Game/GameplayCueNotifies/Shields/GC_Shield_FullyCharged.GC_Shield_FullyCharged_C.OnBurst
	// void OnBurst(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UParticleSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UEliminationBotVFXInterface_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C.EndVFX
	// void EndVFX();                                                                                                           // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C.TriggerVFX
	// void TriggerVFX();                                                                                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C
/// Size: 0x01C8 (0x000550 - 0x000718)
class AGCN_RezIn_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C OFFSET(get<float>, {0x55C, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C OFFSET(get<float>, {0x560, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C OFFSET(get<T>, {0x564, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TFX_ResOutCharacterMesh                                     OFFSET(get<T>, {0x568, 8, 0, 0})
	DMember(float)                                     TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028 OFFSET(get<float>, {0x570, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028 OFFSET(get<T>, {0x574, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TFX_GlowCharacterMesh                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(bool)                                      DEBUG_ANIMATION                                             OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      SpawnDrone                                                  OFFSET(get<bool>, {0x581, 1, 0, 0})
	CMember(class UClass*)                             Teleportation_Drone                                         OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_AnimPlayRate                                   OFFSET(get<double>, {0x590, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_Lifespan                                       OFFSET(get<double>, {0x598, 8, 0, 0})
	CMember(class UPointLightComponent*)               Teleportation_Point_Light                                   OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FVector)                                   Teleportation_Light_Offset                                  OFFSET(getStruct<T>, {0x5A8, 24, 0, 0})
	SMember(FLinearColor)                              Teleportation_Light_Color                                   OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   DissolveMIDs                                                OFFSET(get<T>, {0x5D0, 16, 0, 0})
	CMember(class UMaterialInterface*)                 Mat_Chracter_Dissolve                                       OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class APlayerPawn_Athena_C*)               Pawn                                                        OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(TSet<USkeletalMeshComponent*>)             Dissolve                                                    OFFSET(get<T>, {0x5F0, 80, 0, 0})
	SMember(FName)                                     Socket_Mesh_Top                                             OFFSET(getStruct<T>, {0x640, 4, 0, 0})
	DMember(double)                                    Max_Light_Intensity                                         OFFSET(get<double>, {0x648, 8, 0, 0})
	SMember(FName)                                     Socket_Mesh_Bottom                                          OFFSET(getStruct<T>, {0x650, 4, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     Meshes_to_Dissolve                                          OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(class ABP_TeleportationDrone_C*)           Drone                                                       OFFSET(get<T>, {0x668, 8, 0, 0})
	DMember(bool)                                      DEBUG_CHILDCOMPONENTS                                       OFFSET(get<bool>, {0x670, 1, 0, 0})
	CMember(TArray<class UFXSystemComponent*>)         Particle_Components                                         OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  Spawned_Teleport_VFX                                        OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     Teleport_In_Visual_Effect                                   OFFSET(get<T>, {0x690, 8, 0, 0})
	SMember(FName)                                     Teleport_In_VFX_Attach_Point_Name                           OFFSET(getStruct<T>, {0x698, 4, 0, 0})
	DMember(int32_t)                                   Cur_Dissolve_Setup_Attempt                                  OFFSET(get<int32_t>, {0x69C, 4, 0, 0})
	DMember(int32_t)                                   AmountOfTimesToAttemptRestoreMats                           OFFSET(get<int32_t>, {0x6A0, 4, 0, 0})
	DMember(bool)                                      Spawn_VFX_Attached                                          OFFSET(get<bool>, {0x6A4, 1, 0, 0})
	DMember(double)                                    Dissolve_Timeline_Playrate                                  OFFSET(get<double>, {0x6A8, 8, 0, 0})
	DMember(double)                                    Glow_Timeline_Playrate                                      OFFSET(get<double>, {0x6B0, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     Drone_Visual_Effect                                         OFFSET(get<T>, {0x6B8, 8, 0, 0})
	DMember(bool)                                      DEBUG_TESTJANUSFX                                           OFFSET(get<bool>, {0x6C0, 1, 0, 0})
	SMember(FName)                                     Drone_VFX_Attach_Point                                      OFFSET(getStruct<T>, {0x6C4, 4, 0, 0})
	SMember(FGuid)                                     Material_Override_ID                                        OFFSET(getStruct<T>, {0x6C8, 16, 0, 0})
	SMember(FFortPawnMaterialOverrideCopiedParameters) Copied_Parameters                                           OFFSET(getStruct<T>, {0x6D8, 48, 0, 0})
	SMember(FDelegateHandleController)                 Delegate_Handle_Controller                                  OFFSET(getStruct<T>, {0x708, 16, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX
	// void Spawn Drone VFX();                                                                                                  // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates
	// void Set Timelines' Playrates();                                                                                         // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX
	// void Spawn Teleport In VFX();                                                                                            // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Restore Character Materials
	// void Restore Character Materials(bool& Fully Completed);                                                                 // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light
	// void Clean-Up Teleportation Light();                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light
	// void Spawn Teleportation Light();                                                                                        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone
	// void Spawn Teleportation Drone();                                                                                        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Stop Looping Audio
	// void Stop Looping Audio();                                                                                               // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc
	// void TFX_GlowCharacterMesh__FinishedFunc();                                                                              // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc
	// void TFX_GlowCharacterMesh__UpdateFunc();                                                                                // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc
	// void TFX_ResOutCharacterMesh__FinishedFunc();                                                                            // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc
	// void TFX_ResOutCharacterMesh__UpdateFunc();                                                                              // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                              // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX
	// void Set Additional Niagara Parameters on Spawned FX(class UNiagaraComponent* Spawned Teleport In FX);                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.EndVFX
	// void EndVFX();                                                                                                           // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX
	// void Set Additional Niagara Parameter on Drone FX(class UNiagaraComponent* Drone FX);                                    // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.OnCosmeticPart
	// void OnCosmeticPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, TEnumAsByte<EFortCustomPartType> PartType); // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TriggerVFX
	// void TriggerVFX();                                                                                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn
	// void ExecuteUbergraph_GCN_RezIn(int32_t EntryPoint);                                                                     // [0x1340978] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C
/// Size: 0x01F0 (0x000550 - 0x000740)
class AGCN_RezOut_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC OFFSET(get<float>, {0x55C, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC OFFSET(get<float>, {0x560, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC OFFSET(get<T>, {0x564, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TFX_ResOutCharacterMesh                                     OFFSET(get<T>, {0x568, 8, 0, 0})
	DMember(float)                                     TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776 OFFSET(get<float>, {0x570, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776 OFFSET(get<T>, {0x574, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TFX_GlowCharacterMesh                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(bool)                                      DEBUG_ANIMATION                                             OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      SpawnDrone                                                  OFFSET(get<bool>, {0x581, 1, 0, 0})
	CMember(class UClass*)                             Teleportation_Drone                                         OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_AnimPlayRate                                   OFFSET(get<double>, {0x590, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_Lifespan                                       OFFSET(get<double>, {0x598, 8, 0, 0})
	CMember(class UPointLightComponent*)               Teleportation_Point_Light                                   OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FVector)                                   Teleportation_Light_Offset                                  OFFSET(getStruct<T>, {0x5A8, 24, 0, 0})
	SMember(FLinearColor)                              Teleportation_Light_Color                                   OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   DissolveMIDs                                                OFFSET(get<T>, {0x5D0, 16, 0, 0})
	CMember(class UMaterialInterface*)                 Mat_Chracter_Dissolve                                       OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class APlayerPawn_Athena_C*)               Pawn                                                        OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(TSet<USkeletalMeshComponent*>)             Dissolve                                                    OFFSET(get<T>, {0x5F0, 80, 0, 0})
	SMember(FName)                                     Socket_Mesh_Top                                             OFFSET(getStruct<T>, {0x640, 4, 0, 0})
	DMember(double)                                    Max_Light_Intensity                                         OFFSET(get<double>, {0x648, 8, 0, 0})
	SMember(FName)                                     Socket_Mesh_Bottom                                          OFFSET(getStruct<T>, {0x650, 4, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     Meshes_to_Dissolve                                          OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(class ABP_TeleportationDrone_C*)           Drone                                                       OFFSET(get<T>, {0x668, 8, 0, 0})
	DMember(bool)                                      DEBUG_CHILDCOMPONENTS                                       OFFSET(get<bool>, {0x670, 1, 0, 0})
	CMember(TArray<class UFXSystemComponent*>)         Particle_Components                                         OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  Spawned_Death_VFX                                           OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     Dissolve_Visual_Effect                                      OFFSET(get<T>, {0x690, 8, 0, 0})
	SMember(FName)                                     Dissolve_VFX_Spawn_Point_Name                               OFFSET(getStruct<T>, {0x698, 4, 0, 0})
	CMember(class UAnimMontage*)                       Base_Elimination_Montage                                    OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(class UAnimMontage*)                       DBNO_Elimination_Montage                                    OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(class UAnimMontage*)                       Skydiving_Elimination_Montage                               OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(class UAnimMontage*)                       Swimming_Elimination_Montage                                OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(class UAnimMontage*)                       DBNO_Swimming_Elimination_Montage                           OFFSET(get<T>, {0x6C0, 8, 0, 0})
	DMember(bool)                                      Spawn_VFX_Attached                                          OFFSET(get<bool>, {0x6C8, 1, 0, 0})
	DMember(double)                                    Dissolve_Timeline_Playrate                                  OFFSET(get<double>, {0x6D0, 8, 0, 0})
	DMember(double)                                    Glow_Timeline_Playrate                                      OFFSET(get<double>, {0x6D8, 8, 0, 0})
	DMember(bool)                                      DEBUG_REMOVESPAWNVFX                                        OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(bool)                                      DEBUG_REMOVESPAWNEDPOINTLIGHT                               OFFSET(get<bool>, {0x6E1, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     Drone_Visual_Effect                                         OFFSET(get<T>, {0x6E8, 8, 0, 0})
	SMember(FName)                                     Drone_VFX_Attach_Point                                      OFFSET(getStruct<T>, {0x6F0, 4, 0, 0})
	DMember(bool)                                      DEBUG_FXSYSTEMCOMPONENTS                                    OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      ShouldDelayBetweenAnimAndVFX                                OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(double)                                    DelayBetweenAnimAndVFX                                      OFFSET(get<double>, {0x6F8, 8, 0, 0})
	SMember(FGuid)                                     Material_Override_ID                                        OFFSET(getStruct<T>, {0x700, 16, 0, 0})
	SMember(FFortPawnMaterialOverrideCopiedParameters) Copied_Parameters                                           OFFSET(getStruct<T>, {0x710, 48, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX
	// void Spawn Drone VFX();                                                                                                  // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates
	// void Set Timeline Playrates();                                                                                           // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup
	// void Dissolve Material Setup();                                                                                          // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX
	// void Spawn Dissolve VFX();                                                                                               // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light
	// void Clean-Up Teleportation Light();                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light
	// void Spawn Teleportation Light();                                                                                        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone
	// void Spawn Teleportation Drone();                                                                                        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Stop Looping Audio
	// void Stop Looping Audio();                                                                                               // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage
	// void Play Elmination AnimMontage();                                                                                      // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc
	// void TFX_GlowCharacterMesh__FinishedFunc();                                                                              // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc
	// void TFX_GlowCharacterMesh__UpdateFunc();                                                                                // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc
	// void TFX_ResOutCharacterMesh__FinishedFunc();                                                                            // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc
	// void TFX_ResOutCharacterMesh__UpdateFunc();                                                                              // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.EndVFX
	// void EndVFX();                                                                                                           // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                              // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX
	// void Set Additional Niagara Parameters on Spawned FX(class UNiagaraComponent* Spawned Death FX);                         // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX
	// void Set Additional Niagara Parameters on Drone FX(class UNiagaraComponent* Drone FX);                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TriggerVFX
	// void TriggerVFX();                                                                                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut
	// void ExecuteUbergraph_GCN_RezOut(int32_t EntryPoint);                                                                    // [0x1340978] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C
/// Size: 0x01C8 (0x000550 - 0x000718)
class AGCN_RezIn_Frontend_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_LightIntensity_43B69932442AE90AB9E7D9819F3D3E71 OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_ZHeightParam_43B69932442AE90AB9E7D9819F3D3E71 OFFSET(get<float>, {0x55C, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_TransitionParam_43B69932442AE90AB9E7D9819F3D3E71 OFFSET(get<float>, {0x560, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_ResOutCharacterMesh__Direction_43B69932442AE90AB9E7D9819F3D3E71 OFFSET(get<T>, {0x564, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TFX_ResOutCharacterMesh                                     OFFSET(get<T>, {0x568, 8, 0, 0})
	DMember(float)                                     TFX_GlowCharacterMesh_EmissiveWarp_580AB4094AE6911DB445A58F9580C544 OFFSET(get<float>, {0x570, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_GlowCharacterMesh__Direction_580AB4094AE6911DB445A58F9580C544 OFFSET(get<T>, {0x574, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TFX_GlowCharacterMesh                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(bool)                                      DEBUG_ANIMATION                                             OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      SpawnDrone                                                  OFFSET(get<bool>, {0x581, 1, 0, 0})
	CMember(class UClass*)                             Teleportation_Drone                                         OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_AnimPlayRate                                   OFFSET(get<double>, {0x590, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_Lifespan                                       OFFSET(get<double>, {0x598, 8, 0, 0})
	CMember(class UPointLightComponent*)               Teleportation_Point_Light                                   OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FVector)                                   Teleportation_Light_Offset                                  OFFSET(getStruct<T>, {0x5A8, 24, 0, 0})
	SMember(FLinearColor)                              Teleportation_Light_Color                                   OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   DissolveMIDs                                                OFFSET(get<T>, {0x5D0, 16, 0, 0})
	CMember(class UMaterialInterface*)                 Mat_Chracter_Dissolve                                       OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class APlayerPawn_Athena_C*)               Pawn                                                        OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(TSet<USkeletalMeshComponent*>)             Dissolve                                                    OFFSET(get<T>, {0x5F0, 80, 0, 0})
	SMember(FName)                                     Socket_Mesh_Top                                             OFFSET(getStruct<T>, {0x640, 4, 0, 0})
	DMember(double)                                    Max_Light_Intensity                                         OFFSET(get<double>, {0x648, 8, 0, 0})
	SMember(FName)                                     Socket_Mesh_Bottom                                          OFFSET(getStruct<T>, {0x650, 4, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     Meshes_to_Dissolve                                          OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(class ABP_TeleportationDrone_C*)           Drone                                                       OFFSET(get<T>, {0x668, 8, 0, 0})
	DMember(bool)                                      DEBUG_CHILDCOMPONENTS                                       OFFSET(get<bool>, {0x670, 1, 0, 0})
	CMember(TArray<class UFXSystemComponent*>)         Particle_Components                                         OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  Spawned_Teleport_VFX                                        OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     Teleport_In_Visual_Effect                                   OFFSET(get<T>, {0x690, 8, 0, 0})
	SMember(FName)                                     Teleport_In_VFX_Attach_Point_Name                           OFFSET(getStruct<T>, {0x698, 4, 0, 0})
	DMember(int32_t)                                   Cur_Dissolve_Setup_Attempt                                  OFFSET(get<int32_t>, {0x69C, 4, 0, 0})
	DMember(int32_t)                                   AmountOfTimesToAttemptRestoreMats                           OFFSET(get<int32_t>, {0x6A0, 4, 0, 0})
	DMember(bool)                                      Spawn_VFX_Attached                                          OFFSET(get<bool>, {0x6A4, 1, 0, 0})
	DMember(double)                                    Dissolve_Timeline_Playrate                                  OFFSET(get<double>, {0x6A8, 8, 0, 0})
	DMember(double)                                    Glow_Timeline_Playrate                                      OFFSET(get<double>, {0x6B0, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     Drone_Visual_Effect                                         OFFSET(get<T>, {0x6B8, 8, 0, 0})
	DMember(bool)                                      DEBUG_TESTJANUSFX                                           OFFSET(get<bool>, {0x6C0, 1, 0, 0})
	SMember(FName)                                     Drone_VFX_Attach_Point                                      OFFSET(getStruct<T>, {0x6C4, 4, 0, 0})
	SMember(FGuid)                                     Material_Override_ID                                        OFFSET(getStruct<T>, {0x6C8, 16, 0, 0})
	SMember(FFortPawnMaterialOverrideCopiedParameters) Copied_Parameters                                           OFFSET(getStruct<T>, {0x6D8, 48, 0, 0})
	SMember(FDelegateHandleController)                 Delegate_Handle_Controller                                  OFFSET(getStruct<T>, {0x708, 16, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Spawn Drone VFX
	// void Spawn Drone VFX();                                                                                                  // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Set Timelines' Playrates
	// void Set Timelines' Playrates();                                                                                         // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Spawn Teleport In VFX
	// void Spawn Teleport In VFX();                                                                                            // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Restore Character Materials
	// void Restore Character Materials(bool& Fully Completed);                                                                 // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Clean-Up Teleportation Light
	// void Clean-Up Teleportation Light();                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Spawn Teleportation Light
	// void Spawn Teleportation Light();                                                                                        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Spawn Teleportation Drone
	// void Spawn Teleportation Drone();                                                                                        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Stop Looping Audio
	// void Stop Looping Audio();                                                                                               // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TFX_GlowCharacterMesh__FinishedFunc
	// void TFX_GlowCharacterMesh__FinishedFunc();                                                                              // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TFX_GlowCharacterMesh__UpdateFunc
	// void TFX_GlowCharacterMesh__UpdateFunc();                                                                                // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TFX_ResOutCharacterMesh__FinishedFunc
	// void TFX_ResOutCharacterMesh__FinishedFunc();                                                                            // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TFX_ResOutCharacterMesh__UpdateFunc
	// void TFX_ResOutCharacterMesh__UpdateFunc();                                                                              // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                              // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Set Additional Niagara Parameters on Spawned FX
	// void Set Additional Niagara Parameters on Spawned FX(class UNiagaraComponent* Spawned Teleport In FX);                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.EndVFX
	// void EndVFX();                                                                                                           // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Set Additional Niagara Parameter on Drone FX
	// void Set Additional Niagara Parameter on Drone FX(class UNiagaraComponent* Drone FX);                                    // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.OnCosmeticPart
	// void OnCosmeticPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, TEnumAsByte<EFortCustomPartType> PartType); // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TriggerVFX
	// void TriggerVFX();                                                                                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.ExecuteUbergraph_GCN_RezIn_Frontend
	// void ExecuteUbergraph_GCN_RezIn_Frontend(int32_t EntryPoint);                                                            // [0x1340978] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C
/// Size: 0x0010 (0x000740 - 0x000750)
class AGCN_NPC_Interaction_RezOut_Glitch_C : public AGCN_RezOut_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x740, 8, 0, 0})
	CMember(class USoundBase*)                         SoundOnNPCDeath                                             OFFSET(get<T>, {0x748, 8, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.Spawn Dissolve VFX
	// void Spawn Dissolve VFX();                                                                                               // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch
	// void ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch(int32_t EntryPoint);                                             // [0x1340978] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C
/// Size: 0x0010 (0x000740 - 0x000750)
class AGCN_RezOut_NPC_C : public AGCN_RezOut_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x740, 8, 0, 0})
	CMember(class USoundBase*)                         SoundOnNPCDeath                                             OFFSET(get<T>, {0x748, 8, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                              // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C.ExecuteUbergraph_GCN_RezOut_NPC
	// void ExecuteUbergraph_GCN_RezOut_NPC(int32_t EntryPoint);                                                                // [0x1340978] Final                
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_CreativeRespawn.GCN_RezIn_CreativeRespawn_C
/// Size: 0x0000 (0x000718 - 0x000718)
class AGCN_RezIn_CreativeRespawn_C : public AGCN_RezIn_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
};

/// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
/// Size: 0x0030 (0x000550 - 0x000580)
class AGC_Abilities_Death_FadeCapsule_StW_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	DMember(float)                                     CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1 OFFSET(get<float>, {0x558, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1   OFFSET(get<T>, {0x55C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 CapsuleFadeTL                                               OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(double)                                    Starting_Min_Capsule_Shadow_Vis                             OFFSET(get<double>, {0x568, 8, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     SkeletalMesh                                                OFFSET(get<T>, {0x570, 16, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.SkeletalMeshSetup
	// void SkeletalMeshSetup(class AFortPlayerPawn* FortPawn);                                                                 // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__FinishedFunc
	// void CapsuleFadeTL__FinishedFunc();                                                                                      // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__UpdateFunc
	// void CapsuleFadeTL__UpdateFunc();                                                                                        // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW
	// void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32_t EntryPoint);                                            // [0x1340978] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C
/// Size: 0x0030 (0x000550 - 0x000580)
class AGC_Abilities_Death_FadeCapsule_Athena_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	DMember(float)                                     CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3 OFFSET(get<float>, {0x558, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3   OFFSET(get<T>, {0x55C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 CapsuleFadeTL                                               OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(double)                                    Starting_Min_Capsule_Shadow_Vis                             OFFSET(get<double>, {0x568, 8, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     SkeletalMesh                                                OFFSET(get<T>, {0x570, 16, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup
	// void SkeletalMeshSetup(class AFortPlayerPawnAthena* FortPawn);                                                           // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc
	// void CapsuleFadeTL__FinishedFunc();                                                                                      // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc
	// void CapsuleFadeTL__UpdateFunc();                                                                                        // [0x1340978] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena
	// void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32_t EntryPoint);                                         // [0x1340978] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_SCMachine.GCN_RezIn_SCMachine_C
/// Size: 0x0000 (0x000718 - 0x000718)
class AGCN_RezIn_SCMachine_C : public AGCN_RezIn_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
};

