
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x09B8   (0x0008)  
	class AFortPlayerPawn*                             StormPawn;                                                  // 0x09C0   (0x0008)  
	bool                                               bBoundAudioPercent;                                         // 0x09C8   (0x0001)  


	/// Functions
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                           // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated
	// void Activated(FVector EdgeOfStorm);                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated
	// void Deactivated();                                                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm
	// void ExecuteUbergraph_GCNL_EdgeOfStorm(int32_t EntryPoint);                                                           // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Shields/GC_Shield_FullyCharged.GC_Shield_FullyCharged_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGC_Shield_FullyCharged_C : public UFortGameplayCueNotify_Burst
{ 
public:


	/// Functions
	// Function /Game/GameplayCueNotifies/Shields/GC_Shield_FullyCharged.GC_Shield_FullyCharged_C.OnBurst
	// void OnBurst(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UParticleSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UEliminationBotVFXInterface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C.EndVFX
	// void EndVFX();                                                                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C.TriggerVFX
	// void TriggerVFX();                                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C
/// Size: 0x01F0 (0x000550 - 0x000740)
class AGCN_RezOut_C : public AFortGameplayCueNotify_BurstLatent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0550   (0x0008)  
	float                                              TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC; // 0x0558   (0x0004)  
	float                                              TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC; // 0x055C   (0x0004)  
	float                                              TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC; // 0x0560   (0x0004)  
	SDK_UNDEFINED(1,14049) /* TEnumAsByte<ETimelineDirection> */ __um(TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC); // 0x0564   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0565   (0x0003)  MISSED
	class UTimelineComponent*                          TFX_ResOutCharacterMesh;                                    // 0x0568   (0x0008)  
	float                                              TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776; // 0x0570   (0x0004)  
	SDK_UNDEFINED(1,14050) /* TEnumAsByte<ETimelineDirection> */ __um(TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776); // 0x0574   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0575   (0x0003)  MISSED
	class UTimelineComponent*                          TFX_GlowCharacterMesh;                                      // 0x0578   (0x0008)  
	bool                                               DEBUG_ANIMATION;                                            // 0x0580   (0x0001)  
	bool                                               SpawnDrone;                                                 // 0x0581   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0582   (0x0006)  MISSED
	class UClass*                                      Teleportation_Drone;                                        // 0x0588   (0x0008)  
	double                                             Teleport_Bot_AnimPlayRate;                                  // 0x0590   (0x0008)  
	double                                             Teleport_Bot_Lifespan;                                      // 0x0598   (0x0008)  
	class UPointLightComponent*                        Teleportation_Point_Light;                                  // 0x05A0   (0x0008)  
	FVector                                            Teleportation_Light_Offset;                                 // 0x05A8   (0x0018)  
	FLinearColor                                       Teleportation_Light_Color;                                  // 0x05C0   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            DissolveMIDs;                                               // 0x05D0   (0x0010)  
	class UMaterialInterface*                          Mat_Chracter_Dissolve;                                      // 0x05E0   (0x0008)  
	class APlayerPawn_Athena_C*                        Pawn;                                                       // 0x05E8   (0x0008)  
	SDK_UNDEFINED(80,14051) /* TSet<USkeletalMeshComponent*> */ __um(Dissolve);                                    // 0x05F0   (0x0050)  
	FName                                              Socket_Mesh_Top;                                            // 0x0640   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0644   (0x0004)  MISSED
	double                                             Max_Light_Intensity;                                        // 0x0648   (0x0008)  
	FName                                              Socket_Mesh_Bottom;                                         // 0x0650   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0654   (0x0004)  MISSED
	TArray<class USkeletalMeshComponent*>              Meshes_to_Dissolve;                                         // 0x0658   (0x0010)  
	class ABP_TeleportationDrone_C*                    Drone;                                                      // 0x0668   (0x0008)  
	bool                                               DEBUG_CHILDCOMPONENTS;                                      // 0x0670   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0671   (0x0007)  MISSED
	TArray<class UFXSystemComponent*>                  Particle_Components;                                        // 0x0678   (0x0010)  
	class UNiagaraComponent*                           Spawned_Death_VFX;                                          // 0x0688   (0x0008)  
	class UNiagaraSystem*                              Dissolve_Visual_Effect;                                     // 0x0690   (0x0008)  
	FName                                              Dissolve_VFX_Spawn_Point_Name;                              // 0x0698   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x069C   (0x0004)  MISSED
	class UAnimMontage*                                Base_Elimination_Montage;                                   // 0x06A0   (0x0008)  
	class UAnimMontage*                                DBNO_Elimination_Montage;                                   // 0x06A8   (0x0008)  
	class UAnimMontage*                                Skydiving_Elimination_Montage;                              // 0x06B0   (0x0008)  
	class UAnimMontage*                                Swimming_Elimination_Montage;                               // 0x06B8   (0x0008)  
	class UAnimMontage*                                DBNO_Swimming_Elimination_Montage;                          // 0x06C0   (0x0008)  
	bool                                               Spawn_VFX_Attached;                                         // 0x06C8   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x06C9   (0x0007)  MISSED
	double                                             Dissolve_Timeline_Playrate;                                 // 0x06D0   (0x0008)  
	double                                             Glow_Timeline_Playrate;                                     // 0x06D8   (0x0008)  
	bool                                               DEBUG_REMOVESPAWNVFX;                                       // 0x06E0   (0x0001)  
	bool                                               DEBUG_REMOVESPAWNEDPOINTLIGHT;                              // 0x06E1   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x06E2   (0x0006)  MISSED
	class UNiagaraSystem*                              Drone_Visual_Effect;                                        // 0x06E8   (0x0008)  
	FName                                              Drone_VFX_Attach_Point;                                     // 0x06F0   (0x0004)  
	bool                                               DEBUG_FXSYSTEMCOMPONENTS;                                   // 0x06F4   (0x0001)  
	bool                                               ShouldDelayBetweenAnimAndVFX;                               // 0x06F5   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x06F6   (0x0002)  MISSED
	double                                             DelayBetweenAnimAndVFX;                                     // 0x06F8   (0x0008)  
	FGuid                                              Material_Override_ID;                                       // 0x0700   (0x0010)  
	FFortPawnMaterialOverrideCopiedParameters          Copied_Parameters;                                          // 0x0710   (0x0030)  


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX
	// void Spawn Drone VFX();                                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates
	// void Set Timeline Playrates();                                                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup
	// void Dissolve Material Setup();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX
	// void Spawn Dissolve VFX();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light
	// void Clean-Up Teleportation Light();                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light
	// void Spawn Teleportation Light();                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone
	// void Spawn Teleportation Drone();                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Stop Looping Audio
	// void Stop Looping Audio();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage
	// void Play Elmination AnimMontage();                                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc
	// void TFX_GlowCharacterMesh__FinishedFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc
	// void TFX_GlowCharacterMesh__UpdateFunc();                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc
	// void TFX_ResOutCharacterMesh__FinishedFunc();                                                                         // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc
	// void TFX_ResOutCharacterMesh__UpdateFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.EndVFX
	// void EndVFX();                                                                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX
	// void Set Additional Niagara Parameters on Spawned FX(class UNiagaraComponent* Spawned Death FX);                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX
	// void Set Additional Niagara Parameters on Drone FX(class UNiagaraComponent* Drone FX);                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TriggerVFX
	// void TriggerVFX();                                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut
	// void ExecuteUbergraph_GCN_RezOut(int32_t EntryPoint);                                                                 // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C
/// Size: 0x01C8 (0x000550 - 0x000718)
class AGCN_RezIn_C : public AFortGameplayCueNotify_BurstLatent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0550   (0x0008)  
	float                                              TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C; // 0x0558   (0x0004)  
	float                                              TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C; // 0x055C   (0x0004)  
	float                                              TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C; // 0x0560   (0x0004)  
	SDK_UNDEFINED(1,14052) /* TEnumAsByte<ETimelineDirection> */ __um(TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C); // 0x0564   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0565   (0x0003)  MISSED
	class UTimelineComponent*                          TFX_ResOutCharacterMesh;                                    // 0x0568   (0x0008)  
	float                                              TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028; // 0x0570   (0x0004)  
	SDK_UNDEFINED(1,14053) /* TEnumAsByte<ETimelineDirection> */ __um(TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028); // 0x0574   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0575   (0x0003)  MISSED
	class UTimelineComponent*                          TFX_GlowCharacterMesh;                                      // 0x0578   (0x0008)  
	bool                                               DEBUG_ANIMATION;                                            // 0x0580   (0x0001)  
	bool                                               SpawnDrone;                                                 // 0x0581   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0582   (0x0006)  MISSED
	class UClass*                                      Teleportation_Drone;                                        // 0x0588   (0x0008)  
	double                                             Teleport_Bot_AnimPlayRate;                                  // 0x0590   (0x0008)  
	double                                             Teleport_Bot_Lifespan;                                      // 0x0598   (0x0008)  
	class UPointLightComponent*                        Teleportation_Point_Light;                                  // 0x05A0   (0x0008)  
	FVector                                            Teleportation_Light_Offset;                                 // 0x05A8   (0x0018)  
	FLinearColor                                       Teleportation_Light_Color;                                  // 0x05C0   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            DissolveMIDs;                                               // 0x05D0   (0x0010)  
	class UMaterialInterface*                          Mat_Chracter_Dissolve;                                      // 0x05E0   (0x0008)  
	class APlayerPawn_Athena_C*                        Pawn;                                                       // 0x05E8   (0x0008)  
	SDK_UNDEFINED(80,14054) /* TSet<USkeletalMeshComponent*> */ __um(Dissolve);                                    // 0x05F0   (0x0050)  
	FName                                              Socket_Mesh_Top;                                            // 0x0640   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0644   (0x0004)  MISSED
	double                                             Max_Light_Intensity;                                        // 0x0648   (0x0008)  
	FName                                              Socket_Mesh_Bottom;                                         // 0x0650   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0654   (0x0004)  MISSED
	TArray<class USkeletalMeshComponent*>              Meshes_to_Dissolve;                                         // 0x0658   (0x0010)  
	class ABP_TeleportationDrone_C*                    Drone;                                                      // 0x0668   (0x0008)  
	bool                                               DEBUG_CHILDCOMPONENTS;                                      // 0x0670   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0671   (0x0007)  MISSED
	TArray<class UFXSystemComponent*>                  Particle_Components;                                        // 0x0678   (0x0010)  
	class UNiagaraComponent*                           Spawned_Teleport_VFX;                                       // 0x0688   (0x0008)  
	class UNiagaraSystem*                              Teleport_In_Visual_Effect;                                  // 0x0690   (0x0008)  
	FName                                              Teleport_In_VFX_Attach_Point_Name;                          // 0x0698   (0x0004)  
	int32_t                                            Cur_Dissolve_Setup_Attempt;                                 // 0x069C   (0x0004)  
	int32_t                                            AmountOfTimesToAttemptRestoreMats;                          // 0x06A0   (0x0004)  
	bool                                               Spawn_VFX_Attached;                                         // 0x06A4   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x06A5   (0x0003)  MISSED
	double                                             Dissolve_Timeline_Playrate;                                 // 0x06A8   (0x0008)  
	double                                             Glow_Timeline_Playrate;                                     // 0x06B0   (0x0008)  
	class UNiagaraSystem*                              Drone_Visual_Effect;                                        // 0x06B8   (0x0008)  
	bool                                               DEBUG_TESTJANUSFX;                                          // 0x06C0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x06C1   (0x0003)  MISSED
	FName                                              Drone_VFX_Attach_Point;                                     // 0x06C4   (0x0004)  
	FGuid                                              Material_Override_ID;                                       // 0x06C8   (0x0010)  
	FFortPawnMaterialOverrideCopiedParameters          Copied_Parameters;                                          // 0x06D8   (0x0030)  
	FDelegateHandleController                          Delegate_Handle_Controller;                                 // 0x0708   (0x0010)  


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX
	// void Spawn Drone VFX();                                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates
	// void Set Timelines' Playrates();                                                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX
	// void Spawn Teleport In VFX();                                                                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Restore Character Materials
	// void Restore Character Materials(bool& Fully Completed);                                                              // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light
	// void Clean-Up Teleportation Light();                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light
	// void Spawn Teleportation Light();                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone
	// void Spawn Teleportation Drone();                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Stop Looping Audio
	// void Stop Looping Audio();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc
	// void TFX_GlowCharacterMesh__FinishedFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc
	// void TFX_GlowCharacterMesh__UpdateFunc();                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc
	// void TFX_ResOutCharacterMesh__FinishedFunc();                                                                         // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc
	// void TFX_ResOutCharacterMesh__UpdateFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX
	// void Set Additional Niagara Parameters on Spawned FX(class UNiagaraComponent* Spawned Teleport In FX);                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.EndVFX
	// void EndVFX();                                                                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX
	// void Set Additional Niagara Parameter on Drone FX(class UNiagaraComponent* Drone FX);                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.OnCosmeticPart
	// void OnCosmeticPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, TEnumAsByte<EFortCustomPartType> PartType); // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TriggerVFX
	// void TriggerVFX();                                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn
	// void ExecuteUbergraph_GCN_RezIn(int32_t EntryPoint);                                                                  // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C
/// Size: 0x0010 (0x000740 - 0x000750)
class AGCN_RezOut_NPC_C : public AGCN_RezOut_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0740   (0x0008)  
	class USoundBase*                                  SoundOnNPCDeath;                                            // 0x0748   (0x0008)  


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C.ExecuteUbergraph_GCN_RezOut_NPC
	// void ExecuteUbergraph_GCN_RezOut_NPC(int32_t EntryPoint);                                                             // [0x18a39e4] Final                
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_CreativeRespawn.GCN_RezIn_CreativeRespawn_C
/// Size: 0x0000 (0x000718 - 0x000718)
class AGCN_RezIn_CreativeRespawn_C : public AGCN_RezIn_C
{ 
public:
};

/// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C
/// Size: 0x0030 (0x000550 - 0x000580)
class AGC_Abilities_Death_FadeCapsule_Athena_C : public AFortGameplayCueNotify_BurstLatent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0550   (0x0008)  
	float                                              CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3; // 0x0558   (0x0004)  
	SDK_UNDEFINED(1,14055) /* TEnumAsByte<ETimelineDirection> */ __um(CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3); // 0x055C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x055D   (0x0003)  MISSED
	class UTimelineComponent*                          CapsuleFadeTL;                                              // 0x0560   (0x0008)  
	double                                             Starting_Min_Capsule_Shadow_Vis;                            // 0x0568   (0x0008)  
	TArray<class USkeletalMeshComponent*>              SkeletalMesh;                                               // 0x0570   (0x0010)  


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup
	// void SkeletalMeshSetup(class AFortPlayerPawnAthena* FortPawn);                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc
	// void CapsuleFadeTL__FinishedFunc();                                                                                   // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc
	// void CapsuleFadeTL__UpdateFunc();                                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena
	// void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32_t EntryPoint);                                      // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
/// Size: 0x0030 (0x000550 - 0x000580)
class AGC_Abilities_Death_FadeCapsule_StW_C : public AFortGameplayCueNotify_BurstLatent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0550   (0x0008)  
	float                                              CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1; // 0x0558   (0x0004)  
	SDK_UNDEFINED(1,14056) /* TEnumAsByte<ETimelineDirection> */ __um(CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1); // 0x055C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x055D   (0x0003)  MISSED
	class UTimelineComponent*                          CapsuleFadeTL;                                              // 0x0560   (0x0008)  
	double                                             Starting_Min_Capsule_Shadow_Vis;                            // 0x0568   (0x0008)  
	TArray<class USkeletalMeshComponent*>              SkeletalMesh;                                               // 0x0570   (0x0010)  


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.SkeletalMeshSetup
	// void SkeletalMeshSetup(class AFortPlayerPawn* FortPawn);                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__FinishedFunc
	// void CapsuleFadeTL__FinishedFunc();                                                                                   // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__UpdateFunc
	// void CapsuleFadeTL__UpdateFunc();                                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW
	// void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32_t EntryPoint);                                         // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C
/// Size: 0x0010 (0x000740 - 0x000750)
class AGCN_NPC_Interaction_RezOut_Glitch_C : public AGCN_RezOut_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0740   (0x0008)  
	class USoundBase*                                  SoundOnNPCDeath;                                            // 0x0748   (0x0008)  


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.Spawn Dissolve VFX
	// void Spawn Dissolve VFX();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch
	// void ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch(int32_t EntryPoint);                                          // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C
/// Size: 0x01C8 (0x000550 - 0x000718)
class AGCN_RezIn_Frontend_C : public AFortGameplayCueNotify_BurstLatent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0550   (0x0008)  
	float                                              TFX_ResOutCharacterMesh_LightIntensity_43B69932442AE90AB9E7D9819F3D3E71; // 0x0558   (0x0004)  
	float                                              TFX_ResOutCharacterMesh_ZHeightParam_43B69932442AE90AB9E7D9819F3D3E71; // 0x055C   (0x0004)  
	float                                              TFX_ResOutCharacterMesh_TransitionParam_43B69932442AE90AB9E7D9819F3D3E71; // 0x0560   (0x0004)  
	SDK_UNDEFINED(1,14057) /* TEnumAsByte<ETimelineDirection> */ __um(TFX_ResOutCharacterMesh__Direction_43B69932442AE90AB9E7D9819F3D3E71); // 0x0564   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0565   (0x0003)  MISSED
	class UTimelineComponent*                          TFX_ResOutCharacterMesh;                                    // 0x0568   (0x0008)  
	float                                              TFX_GlowCharacterMesh_EmissiveWarp_580AB4094AE6911DB445A58F9580C544; // 0x0570   (0x0004)  
	SDK_UNDEFINED(1,14058) /* TEnumAsByte<ETimelineDirection> */ __um(TFX_GlowCharacterMesh__Direction_580AB4094AE6911DB445A58F9580C544); // 0x0574   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0575   (0x0003)  MISSED
	class UTimelineComponent*                          TFX_GlowCharacterMesh;                                      // 0x0578   (0x0008)  
	bool                                               DEBUG_ANIMATION;                                            // 0x0580   (0x0001)  
	bool                                               SpawnDrone;                                                 // 0x0581   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0582   (0x0006)  MISSED
	class UClass*                                      Teleportation_Drone;                                        // 0x0588   (0x0008)  
	double                                             Teleport_Bot_AnimPlayRate;                                  // 0x0590   (0x0008)  
	double                                             Teleport_Bot_Lifespan;                                      // 0x0598   (0x0008)  
	class UPointLightComponent*                        Teleportation_Point_Light;                                  // 0x05A0   (0x0008)  
	FVector                                            Teleportation_Light_Offset;                                 // 0x05A8   (0x0018)  
	FLinearColor                                       Teleportation_Light_Color;                                  // 0x05C0   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            DissolveMIDs;                                               // 0x05D0   (0x0010)  
	class UMaterialInterface*                          Mat_Chracter_Dissolve;                                      // 0x05E0   (0x0008)  
	class APlayerPawn_Athena_C*                        Pawn;                                                       // 0x05E8   (0x0008)  
	SDK_UNDEFINED(80,14059) /* TSet<USkeletalMeshComponent*> */ __um(Dissolve);                                    // 0x05F0   (0x0050)  
	FName                                              Socket_Mesh_Top;                                            // 0x0640   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0644   (0x0004)  MISSED
	double                                             Max_Light_Intensity;                                        // 0x0648   (0x0008)  
	FName                                              Socket_Mesh_Bottom;                                         // 0x0650   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0654   (0x0004)  MISSED
	TArray<class USkeletalMeshComponent*>              Meshes_to_Dissolve;                                         // 0x0658   (0x0010)  
	class ABP_TeleportationDrone_C*                    Drone;                                                      // 0x0668   (0x0008)  
	bool                                               DEBUG_CHILDCOMPONENTS;                                      // 0x0670   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0671   (0x0007)  MISSED
	TArray<class UFXSystemComponent*>                  Particle_Components;                                        // 0x0678   (0x0010)  
	class UNiagaraComponent*                           Spawned_Teleport_VFX;                                       // 0x0688   (0x0008)  
	class UNiagaraSystem*                              Teleport_In_Visual_Effect;                                  // 0x0690   (0x0008)  
	FName                                              Teleport_In_VFX_Attach_Point_Name;                          // 0x0698   (0x0004)  
	int32_t                                            Cur_Dissolve_Setup_Attempt;                                 // 0x069C   (0x0004)  
	int32_t                                            AmountOfTimesToAttemptRestoreMats;                          // 0x06A0   (0x0004)  
	bool                                               Spawn_VFX_Attached;                                         // 0x06A4   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x06A5   (0x0003)  MISSED
	double                                             Dissolve_Timeline_Playrate;                                 // 0x06A8   (0x0008)  
	double                                             Glow_Timeline_Playrate;                                     // 0x06B0   (0x0008)  
	class UNiagaraSystem*                              Drone_Visual_Effect;                                        // 0x06B8   (0x0008)  
	bool                                               DEBUG_TESTJANUSFX;                                          // 0x06C0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x06C1   (0x0003)  MISSED
	FName                                              Drone_VFX_Attach_Point;                                     // 0x06C4   (0x0004)  
	FGuid                                              Material_Override_ID;                                       // 0x06C8   (0x0010)  
	FFortPawnMaterialOverrideCopiedParameters          Copied_Parameters;                                          // 0x06D8   (0x0030)  
	FDelegateHandleController                          Delegate_Handle_Controller;                                 // 0x0708   (0x0010)  


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Spawn Drone VFX
	// void Spawn Drone VFX();                                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Set Timelines' Playrates
	// void Set Timelines' Playrates();                                                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Spawn Teleport In VFX
	// void Spawn Teleport In VFX();                                                                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Restore Character Materials
	// void Restore Character Materials(bool& Fully Completed);                                                              // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Clean-Up Teleportation Light
	// void Clean-Up Teleportation Light();                                                                                  // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Spawn Teleportation Light
	// void Spawn Teleportation Light();                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Spawn Teleportation Drone
	// void Spawn Teleportation Drone();                                                                                     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Stop Looping Audio
	// void Stop Looping Audio();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TFX_GlowCharacterMesh__FinishedFunc
	// void TFX_GlowCharacterMesh__FinishedFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TFX_GlowCharacterMesh__UpdateFunc
	// void TFX_GlowCharacterMesh__UpdateFunc();                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TFX_ResOutCharacterMesh__FinishedFunc
	// void TFX_ResOutCharacterMesh__FinishedFunc();                                                                         // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TFX_ResOutCharacterMesh__UpdateFunc
	// void TFX_ResOutCharacterMesh__UpdateFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Set Additional Niagara Parameters on Spawned FX
	// void Set Additional Niagara Parameters on Spawned FX(class UNiagaraComponent* Spawned Teleport In FX);                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.EndVFX
	// void EndVFX();                                                                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.Set Additional Niagara Parameter on Drone FX
	// void Set Additional Niagara Parameter on Drone FX(class UNiagaraComponent* Drone FX);                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.OnCosmeticPart
	// void OnCosmeticPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, TEnumAsByte<EFortCustomPartType> PartType); // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.TriggerVFX
	// void TriggerVFX();                                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn_Frontend.GCN_RezIn_Frontend_C.ExecuteUbergraph_GCN_RezIn_Frontend
	// void ExecuteUbergraph_GCN_RezIn_Frontend(int32_t EntryPoint);                                                         // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_SCMachine.GCN_RezIn_SCMachine_C
/// Size: 0x0000 (0x000718 - 0x000718)
class AGCN_RezIn_SCMachine_C : public AGCN_RezIn_C
{ 
public:
};

