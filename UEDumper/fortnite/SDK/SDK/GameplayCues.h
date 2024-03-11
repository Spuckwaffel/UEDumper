
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
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: Niagara
/// dependency: VictoryCrownsRuntime

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_LuredInterest.GCN_Irwin_PlayerInteraction_LuredInterest_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Irwin_PlayerInteraction_LuredInterest_C : public UFortGameplayCueNotify_Burst
{ 
public:
};

/// Class /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C
/// Size: 0x0018 (0x0009B0 - 0x0009C8)
class AGCNL_Irwin_Slide_C : public AFortGameplayCueNotify_Loop
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	class USoundBase*                                  SlideSound;                                                 // 0x09B8   (0x0008)  
	class UAudioComponent*                             SlidingSoundComponent;                                      // 0x09C0   (0x0008)  


	/// Functions
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.ExecuteUbergraph_GCNL_Irwin_Slide
	// void ExecuteUbergraph_GCNL_Irwin_Slide(int32_t EntryPoint);                                                           // [0x18a39e4] Final|HasDefaults    
};

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Irwin_PlayerInteraction_Tamed_C : public UFortGameplayCueNotify_Burst
{ 
public:
	class USkeletalMeshComponent*                      NewVar;                                                     // 0x0218   (0x0008)  


	/// Functions
	// Function /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Tamed.GCN_Irwin_PlayerInteraction_Tamed_C.OnBurstNiagara
	// void OnBurstNiagara(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Irwin_PlayerInteraction_Untamed_C : public UFortGameplayCueNotify_Burst
{ 
public:
	class USkeletalMeshComponent*                      NewVar;                                                     // 0x0218   (0x0008)  


	/// Functions
	// Function /Irwin/GameplayCues/GCN_Irwin_PlayerInteraction_Untamed.GCN_Irwin_PlayerInteraction_Untamed_C.OnBurstNiagara
	// void OnBurstNiagara(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UNiagaraComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
/// Size: 0x0030 (0x000550 - 0x000580)
class AGCN_BurtCharging_Player_Latent_C : public AFortGameplayCueNotify_BurstLatent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0550   (0x0008)  
	class APlayerController*                           GCPlayerController;                                         // 0x0558   (0x0008)  
	class AFortPlayerPawn*                             FortPlayerPawn;                                             // 0x0560   (0x0008)  
	class USoundBase*                                  BoostSound;                                                 // 0x0568   (0x0008)  
	class UAudioComponent*                             BoostAudioComponent;                                        // 0x0570   (0x0008)  
	class USoundBase*                                  BoostEndSound;                                              // 0x0578   (0x0008)  


	/// Functions
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                           // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteBoostLogic
	// void ExecuteBoostLogic();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.BoostEndEvent
	// void BoostEndEvent();                                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteUbergraph_GCN_BurtCharging_Player_Latent
	// void ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32_t EntryPoint);                                             // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C
/// Size: 0x0018 (0x0009B0 - 0x0009C8)
class AGCNL_RidingSprint_SpeedLines_C : public AFortGameplayCueNotify_Loop
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	class USoundBase*                                  SpeedLinesAudio;                                            // 0x09B8   (0x0008)  
	class UAudioComponent*                             SpeedlinesAudioComp;                                        // 0x09C0   (0x0008)  


	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.OnApplicationGeneric
	// void OnApplicationGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_RidingSprint_SpeedLines.GCNL_RidingSprint_SpeedLines_C.ExecuteUbergraph_GCNL_RidingSprint_SpeedLines
	// void ExecuteUbergraph_GCNL_RidingSprint_SpeedLines(int32_t EntryPoint);                                               // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Pawn.GCN_Riding_BoarSprintImpact_Pawn_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_Pawn_C : public UFortGameplayCueNotify_Burst
{ 
public:
};

/// Class /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C
/// Size: 0x0101 (0x0009B0 - 0x000AB1)
class AGCNL_PlayerIsRiding_C : public AFortGameplayCueNotify_Loop
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	class USoundBase*                                  RidingSoundLoop;                                            // 0x09B8   (0x0008)  
	class UAudioComponent*                             RidingSoundLoopComp;                                        // 0x09C0   (0x0008)  
	FTimerHandle                                       VelocityTimerHandle;                                        // 0x09C8   (0x0008)  
	class AActor*                                      Player;                                                     // 0x09D0   (0x0008)  
	double                                             Speed;                                                      // 0x09D8   (0x0008)  
	SDK_UNDEFINED(1,14060) /* TEnumAsByte<EFortTeamAffiliation> */ __um(TeamAffiliation);                          // 0x09E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x09E1   (0x0007)  MISSED
	FVector                                            Previous;                                                   // 0x09E8   (0x0018)  
	class USoundBase*                                  Enemy_RidingSoundLoop;                                      // 0x0A00   (0x0008)  
	class AFortPlayerPawnAthena*                       As_Fort_Player_Pawn_Athena;                                 // 0x0A08   (0x0008)  
	double                                             JumpParamTarget;                                            // 0x0A10   (0x0008)  
	double                                             JumpValue;                                                  // 0x0A18   (0x0008)  
	bool                                               bIsFalling;                                                 // 0x0A20   (0x0001)  
	bool                                               bCanResetJump;                                              // 0x0A21   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0A22   (0x0006)  MISSED
	class UPawnMovementComponent*                      CreatureMovementComponent;                                  // 0x0A28   (0x0008)  
	FTimerHandle                                       JumpResetTimerHandle;                                       // 0x0A30   (0x0008)  
	double                                             JumpPitchInterpSpeed;                                       // 0x0A38   (0x0008)  
	FCurveTableRowHandle                               RidingCurveTable;                                           // 0x0A40   (0x0010)  
	double                                             BoarSprintSpeed;                                            // 0x0A50   (0x0008)  
	double                                             CurrentVelocity;                                            // 0x0A58   (0x0008)  
	double                                             MaxNormalRunSpeed;                                          // 0x0A60   (0x0008)  
	bool                                               bSprinting;                                                 // 0x0A68   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0A69   (0x0007)  MISSED
	double                                             MaxSpeed;                                                   // 0x0A70   (0x0008)  
	double                                             MaxSpeedClamped;                                            // 0x0A78   (0x0008)  
	class USoundBase*                                  BurstOnCue;                                                 // 0x0A80   (0x0008)  
	FGameplayTagContainer                              BlockSitAudioTags;                                          // 0x0A88   (0x0020)  
	class USoundBase*                                  BurstOffCue;                                                // 0x0AA8   (0x0008)  
	bool                                               HasAudio;                                                   // 0x0AB0   (0x0001)  


	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.CalculateVelocityParam
	// void CalculateVelocityParam();                                                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                         // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingGCNLStarted
	// void PlayerRidingGCNLStarted();                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingDCNLEnded
	// void PlayerRidingDCNLEnded();                                                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnJumpApex
	// void OnJumpApex();                                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.SetUpRidableAudioEvents
	// void SetUpRidableAudioEvents();                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.StartLoopingAudio
	// void StartLoopingAudio();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ExecuteUbergraph_GCNL_PlayerIsRiding
	// void ExecuteUbergraph_GCNL_PlayerIsRiding(int32_t EntryPoint);                                                        // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Default.GCN_Riding_MountLanded_Default_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_MountLanded_Default_C : public UFortGameplayCueNotify_Burst
{ 
public:
};

/// Class /RidingContent/GameplayCues/GCN_Riding_MountLanded_Boar.GCN_Riding_MountLanded_Boar_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_MountLanded_Boar_C : public UFortGameplayCueNotify_Burst
{ 
public:
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_Default.GCN_Riding_BoarSprintImpact_Default_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_Default_C : public UFortGameplayCueNotify_Burst
{ 
public:
};

/// Class /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C
/// Size: 0x0020 (0x0009B0 - 0x0009D0)
class AGCNL_Riding_Sprint_CameraShake_C : public AFortGameplayCueNotify_Loop
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	class AFortPlayerController*                       FortPlayerController;                                       // 0x09B8   (0x0008)  
	class UCameraShakeBase*                            FOVFlare;                                                   // 0x09C0   (0x0008)  
	class UCameraShakeBase*                            ShakeNoise;                                                 // 0x09C8   (0x0008)  


	/// Functions
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake
	// void ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake(int32_t EntryPoint);                                             // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCN_Riding_JumpOnCreature.GCN_Riding_JumpOnCreature_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_JumpOnCreature_C : public UFortGameplayCueNotify_Burst
{ 
public:
};

/// Class /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C
/// Size: 0x0018 (0x0009B0 - 0x0009C8)
class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C : public AFortGameplayCueNotify_Loop
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	FGameplayTag                                       TacticalSprintTag;                                          // 0x09B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x09BC   (0x0004)  MISSED
	class UFXSystemComponent*                          MainNS;                                                     // 0x09C0   (0x0008)  


	/// Functions
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Added_7482F31A49360978B87F339D76FC2BB7
	// void Added_7482F31A49360978B87F339D76FC2BB7();                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Removed_AD34CCD44592FD2F05DB47BDF9413ACC
	// void Removed_AD34CCD44592FD2F05DB47BDF9413ACC();                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.OnApplicationGeneric
	// void OnApplicationGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount
	// void ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32_t EntryPoint);                      // [0x18a39e4] Final|HasDefaults    
};

/// Class /RidingContent/GameplayCues/GCN_Riding_BoarSprintImpact_BuildDestroyed.GCN_Riding_BoarSprintImpact_BuildDestroyed_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Riding_BoarSprintImpact_BuildDestroyed_C : public UFortGameplayCueNotify_Burst
{ 
public:
};

/// Class /Irwin/GameplayCues/GCN_Irwin_SprintImpact.GCN_Irwin_SprintImpact_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Irwin_SprintImpact_C : public UFortGameplayCueNotify_Burst
{ 
public:


	/// Functions
	// Function /Irwin/GameplayCues/GCN_Irwin_SprintImpact.GCN_Irwin_SprintImpact_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C
/// Size: 0x0060 (0x0009B0 - 0x000A10)
class AGCNL_Ascender_Ascent_C : public AFortGameplayCueNotify_Loop
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	class AFortPlayerPawn*                             PlayerPawn;                                                 // 0x09B8   (0x0008)  
	double                                             MinCamShakeAmp;                                             // 0x09C0   (0x0008)  
	double                                             MaxCamShakeAmp;                                             // 0x09C8   (0x0008)  
	double                                             MinCamShakeFreq;                                            // 0x09D0   (0x0008)  
	double                                             MaxCamShakeFreq;                                            // 0x09D8   (0x0008)  
	class ULegacyCameraShake*                          matineeCamShake;                                            // 0x09E0   (0x0008)  
	FScalableFloat                                     MaxAscenderSpeed;                                           // 0x09E8   (0x0028)  


	/// Functions
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnApplicationGeneric
	// void OnApplicationGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.CameraShakeTimer
	// void CameraShakeTimer();                                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.ExecuteUbergraph_GCNL_Ascender_Ascent
	// void ExecuteUbergraph_GCNL_Ascender_Ascent(int32_t EntryPoint);                                                       // [0x18a39e4] Final|HasDefaults    
};

/// Class /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C
/// Size: 0x0028 (0x0009B0 - 0x0009D8)
class AGCNL_Ascender_Descent_C : public AFortGameplayCueNotify_Loop
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	FTimerHandle                                       SoundVisualizerHandle;                                      // 0x09B8   (0x0008)  
	class AActor*                                      My_Target;                                                  // 0x09C0   (0x0008)  
	class UAudioComponent*                             AudioComponent;                                             // 0x09C8   (0x0008)  
	class UTexture*                                    Override_Icon;                                              // 0x09D0   (0x0008)  


	/// Functions
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.VisualizeAudio
	// void VisualizeAudio();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.ExecuteUbergraph_GCNL_Ascender_Descent
	// void ExecuteUbergraph_GCNL_Ascender_Descent(int32_t EntryPoint);                                                      // [0x18a39e4] Final|HasDefaults    
};

/// Class /Ascender/GameplayCues/GCN_Ascender_SpeedLines.GCN_Ascender_SpeedLines_C
/// Size: 0x0008 (0x000218 - 0x000220)
class UGCN_Ascender_SpeedLines_C : public UFortGameplayCueNotify_Burst
{ 
public:
	class UMaterialInterface*                          Decal_Material;                                             // 0x0218   (0x0008)  


	/// Functions
	// Function /Ascender/GameplayCues/GCN_Ascender_SpeedLines.GCN_Ascender_SpeedLines_C.OnBurst
	// void OnBurst(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UParticleSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Ascender/GameplayCues/GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGC_Ascender_LinkToDestroyed_C : public UFortGameplayCueNotify_Burst
{ 
public:


	/// Functions
	// Function /Ascender/GameplayCues/GC_Ascender_LinkToDestroyed.GC_Ascender_LinkToDestroyed_C.OnBurstGeneric
	// void OnBurstGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C
/// Size: 0x00A8 (0x0009B0 - 0x000A58)
class AGCNL_VehicleCosmetics_CosmeticSwap_C : public AFortGameplayCueNotify_Loop
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x09B0   (0x0008)  
	float                                              Sweep_Car_to_Normal_Car_Sweep_Controller_E45E3F1947E3780C879AA7B0F67B8AA0; // 0x09B8   (0x0004)  
	SDK_UNDEFINED(1,14061) /* TEnumAsByte<ETimelineDirection> */ __um(Sweep_Car_to_Normal__Direction_E45E3F1947E3780C879AA7B0F67B8AA0); // 0x09BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x09BD   (0x0003)  MISSED
	class UTimelineComponent*                          Sweep_Car_to_Normal;                                        // 0x09C0   (0x0008)  
	class UNiagaraComponent*                           LoopingVFX;                                                 // 0x09C8   (0x0008)  
	SDK_UNDEFINED(16,14062) /* TScriptInterface<Class> */ __um(LocalFortVehicleInterface);                         // 0x09D0   (0x0010)  
	FTimerHandle                                       KeepCheckingTimer;                                          // 0x09E0   (0x0008)  
	TArray<class UMaterialInterface*>                  OG_Vehicle_Mats;                                            // 0x09E8   (0x0010)  
	SDK_UNDEFINED(80,14063) /* TSet<UMaterialInterface*> */ __um(OG_Wheel_Mats);                                   // 0x09F8   (0x0050)  
	class UMaterialInterface*                          Vehicle_DeRez_Material;                                     // 0x0A48   (0x0008)  
	class UAudioComponent*                             LoopingSound;                                               // 0x0A50   (0x0008)  


	/// Functions
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.Material Switch
	// void Material Switch(bool Restore Original, TScriptInterface<Class> Vehicle);                                         // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.Sweep Car to Normal__FinishedFunc
	// void Sweep Car to Normal__FinishedFunc();                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.Sweep Car to Normal__UpdateFunc
	// void Sweep Car to Normal__UpdateFunc();                                                                               // [0x18a39e4] BlueprintEvent       
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.KeepCheckingForWheels
	// void KeepCheckingForWheels();                                                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /VehicleCosmetics/GameplayCues/GCNL_VehicleCosmetics_CosmeticSwap.GCNL_VehicleCosmetics_CosmeticSwap_C.ExecuteUbergraph_GCNL_VehicleCosmetics_CosmeticSwap
	// void ExecuteUbergraph_GCNL_VehicleCosmetics_CosmeticSwap(int32_t EntryPoint);                                         // [0x18a39e4] Final|HasDefaults    
};

/// Class /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C
/// Size: 0x0088 (0x000A68 - 0x000AF0)
class AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C : public AFortGameplayCueNotify_CrownWear
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A68   (0x0008)  
	FScalableFloat                                     Audio_Vizualizer_Shown_On_Wearer_;                          // 0x0A70   (0x0028)  
	FScalableFloat                                     Audio_Vizualizer_Range;                                     // 0x0A98   (0x0028)  
	FScalableFloat                                     Audio_Vizualizer_Ping_Frequency;                            // 0x0AC0   (0x0028)  
	FTimerHandle                                       timer_handle;                                               // 0x0AE8   (0x0008)  


	/// Functions
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.AVIndicatorLoop
	// void AVIndicatorLoop();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnRemovalGeneric
	// void OnRemovalGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnLoopingStartGeneric
	// void OnLoopingStartGeneric(class AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping
	// void ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping(int32_t EntryPoint);                               // [0x18a39e4] Final|HasDefaults    
};

