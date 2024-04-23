
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: IrisCore
/// dependency: ModularGameplay

/// Class /Script/MantisRuntime.FortMantisAnimInstance
/// Size: 0x0010 (0x000460 - 0x000470)
class UFortMantisAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FFortMantisReplicatedAnimInstanceInfo)     MantisAnimInstanceInfo                                      OFFSET(getStruct<T>, {0x458, 16, 0, 0})


	/// Functions
	// Function /Script/MantisRuntime.FortMantisAnimInstance.OnMantisTechniqueStarted
	// void OnMantisTechniqueStarted(int32_t TechniqueIndex, FName TechniqueName);                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortMantisAnimInstance.OnMantisTechniqueEnded
	// void OnMantisTechniqueEnded(int32_t TechniqueIndex, FName TechniqueName);                                                // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/MantisRuntime.FortMantisLayerAnimInstance
/// Size: 0x0010 (0x001510 - 0x001520)
class UFortMantisLayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FFortMantisReplicatedAnimInstanceInfo)     MantisAnimInstanceInfo                                      OFFSET(getStruct<T>, {0x1510, 16, 0, 0})


	/// Functions
	// Function /Script/MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueStarted
	// void OnMantisTechniqueStarted(int32_t TechniqueIndex, FName TechniqueName);                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortMantisLayerAnimInstance.OnMantisTechniqueEnded
	// void OnMantisTechniqueEnded(int32_t TechniqueIndex, FName TechniqueName);                                                // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
/// Size: 0x0090 (0x0006F0 - 0x000780)
class UFortItemLayerAnimInstance_UncleBrolly : public UFortItemLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	SMember(FCachedAnimStateArray)                     UmbrellaGliderOpenStateDataArray                            OFFSET(getStruct<T>, {0x6F0, 24, 0, 0})
	SMember(FVector)                                   WrapTranslation                                             OFFSET(getStruct<T>, {0x708, 24, 0, 0})
	SMember(FRotator)                                  WrapRotation                                                OFFSET(getStruct<T>, {0x720, 24, 0, 0})
	SMember(FRotator)                                  RootRotationOffset                                          OFFSET(getStruct<T>, {0x738, 24, 0, 0})
	DMember(float)                                     LandingPredictedTimer                                       OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(bool)                                      bShouldUpdateYawCorrection                                  OFFSET(get<bool>, {0x754, 1, 0, 0})
	DMember(bool)                                      bWasAcceleratingBeforeDodge                                 OFFSET(get<bool>, {0x755, 1, 0, 0})
	DMember(float)                                     UncleBrollyDeployCurveValue                                 OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     DashChargeTier                                              OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     DashChargeAdditivePlayrate                                  OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(bool)                                      bIsUmbrellaFailing                                          OFFSET(get<bool>, {0x764, 1, 0, 0})
	DMember(bool)                                      bIsMeleeGuarding                                            OFFSET(get<bool>, {0x765, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x766, 1, 0, 0})
	DMember(bool)                                      bIsInAir                                                    OFFSET(get<bool>, {0x767, 1, 0, 0})
	DMember(bool)                                      bIsLandingPredicted                                         OFFSET(get<bool>, {0x768, 1, 0, 0})
	DMember(bool)                                      bIsJumping                                                  OFFSET(get<bool>, {0x769, 1, 0, 0})
	DMember(bool)                                      bIsDodging                                                  OFFSET(get<bool>, {0x76A, 1, 0, 0})
	DMember(bool)                                      bIsDodgingEast                                              OFFSET(get<bool>, {0x76B, 1, 0, 0})
	DMember(bool)                                      bIsDodgingSouth                                             OFFSET(get<bool>, {0x76C, 1, 0, 0})
	DMember(bool)                                      bIsDodgingWest                                              OFFSET(get<bool>, {0x76D, 1, 0, 0})
	DMember(bool)                                      bIsDashing                                                  OFFSET(get<bool>, {0x76E, 1, 0, 0})
	DMember(bool)                                      bIsDashCharging                                             OFFSET(get<bool>, {0x76F, 1, 0, 0})
	DMember(bool)                                      bIsDashPredictingEnd                                        OFFSET(get<bool>, {0x770, 1, 0, 0})
	DMember(bool)                                      bIsChargeTier1                                              OFFSET(get<bool>, {0x771, 1, 0, 0})
	DMember(bool)                                      bIsChargeTier2                                              OFFSET(get<bool>, {0x772, 1, 0, 0})
	DMember(bool)                                      bIsChargeTier3                                              OFFSET(get<bool>, {0x773, 1, 0, 0})
	DMember(bool)                                      bMeleeGuardingOrUmbrellaFailing                             OFFSET(get<bool>, {0x774, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_to_GuardLoop                            OFFSET(get<bool>, {0x775, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_to_GuardIntro                           OFFSET(get<bool>, {0x776, 1, 0, 0})
	DMember(bool)                                      bTransition_GuardIntro_to_Default                           OFFSET(get<bool>, {0x777, 1, 0, 0})
	DMember(bool)                                      bUpperBodyShouldPassThrough                                 OFFSET(get<bool>, {0x778, 1, 0, 0})
	DMember(bool)                                      bUmbrellaGliderIsOpen                                       OFFSET(get<bool>, {0x779, 1, 0, 0})
};

/// Class /Script/MantisRuntime.UncleBrollyWeaponAnimInstance
/// Size: 0x0040 (0x000370 - 0x0003B0)
class UUncleBrollyWeaponAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(class UClass*)                             UncleBrollyItemLayer                                        OFFSET(get<T>, {0x368, 8, 0, 0})
	SMember(FRotator)                                  UmbrellaRotation                                            OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	DMember(float)                                     UmbrellaSpinSpeed                                           OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     BlockDeployEndPlayrate                                      OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     BlockDeployEndStartPosition                                 OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(bool)                                      bIsDodging                                                  OFFSET(get<bool>, {0x394, 1, 0, 0})
	DMember(bool)                                      bIsPlayingMeleeAnim                                         OFFSET(get<bool>, {0x395, 1, 0, 0})
	DMember(bool)                                      bIsUmbrellaFailing                                          OFFSET(get<bool>, {0x396, 1, 0, 0})
	DMember(bool)                                      bIsMeleeGuarding                                            OFFSET(get<bool>, {0x397, 1, 0, 0})
	DMember(bool)                                      bIsInAir                                                    OFFSET(get<bool>, {0x398, 1, 0, 0})
	DMember(bool)                                      bIsDashing                                                  OFFSET(get<bool>, {0x399, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x39A, 1, 0, 0})
	DMember(bool)                                      bIsPredictingEnd                                            OFFSET(get<bool>, {0x39B, 1, 0, 0})
	DMember(bool)                                      bIsDashCharging                                             OFFSET(get<bool>, {0x39C, 1, 0, 0})
	DMember(bool)                                      bIsDashPredictingEnd                                        OFFSET(get<bool>, {0x39D, 1, 0, 0})
	DMember(bool)                                      bInAirAndMeleeGuarding                                      OFFSET(get<bool>, {0x39E, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_to_DeployStart                          OFFSET(get<bool>, {0x39F, 1, 0, 0})
	DMember(bool)                                      bTransition_DeployStart_to_Default                          OFFSET(get<bool>, {0x3A0, 1, 0, 0})
	DMember(bool)                                      bTransition_Fail_to_FailToDeploy                            OFFSET(get<bool>, {0x3A1, 1, 0, 0})
	DMember(bool)                                      bTransition_FailLoop_to_DeployEnd                           OFFSET(get<bool>, {0x3A2, 1, 0, 0})
};

/// Class /Script/MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UFortAbilityTask_ApplyRootMotionMantisForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(class UAnimMontage*)                       TechniqueMontage                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FFortMantisRootMotionWarpInfo)             WarpInfo                                                    OFFSET(getStruct<T>, {0xD8, 104, 0, 0})
};

/// Class /Script/MantisRuntime.FortAnimNotify_Mantis
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAnimNotify_Mantis : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EFortMantisNotifyEvent)                    MantisNotifyEvent                                           OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(EFortMantisBranchRule)                     MantisBranchRule                                            OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(EFortMantisBranchPath)                     MantisBranchPath                                            OFFSET(get<T>, {0x3A, 1, 0, 0})
};

/// Class /Script/MantisRuntime.FortAnimNotifyState_Mantis
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAnimNotifyState_Mantis : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EFortMantisNotifyWindow)                   MantisNotifyWindow                                          OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGameplayTag)                              MantisNotifyTag                                             OFFSET(getStruct<T>, {0x34, 4, 0, 0})
	CMember(EFortMantisNotifyTranslationWarpLimitRule) TranslationWarpLimitRule                                    OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     TranslationWarpLimit                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EFortMantisNotifyRotationWarpRateRule)     RotationRateWarpRule                                        OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bWarpRotation                                               OFFSET(get<bool>, {0x41, 1, 1, 0})
	DMember(bool)                                      bWarpTranslation                                            OFFSET(get<bool>, {0x41, 1, 1, 1})
};

/// Class /Script/MantisRuntime.FortGameplayAbility_Mantis
/// Size: 0x0048 (0x000B48 - 0x000B90)
class UFortGameplayAbility_Mantis : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	DMember(bool)                                      bUseCommitValidation                                        OFFSET(get<bool>, {0xB48, 1, 0, 0})
	DMember(bool)                                      bAllowRootMotionWarping                                     OFFSET(get<bool>, {0xB49, 1, 0, 0})
	DMember(bool)                                      bUseAlternativeWarpingBehavior                              OFFSET(get<bool>, {0xB4A, 1, 0, 0})
	DMember(bool)                                      bApplyEffectContainerOnTechniqueDamage                      OFFSET(get<bool>, {0xB4B, 1, 0, 0})
	DMember(bool)                                      bApplyEffectContainerOnTechniqueStart                       OFFSET(get<bool>, {0xB4C, 1, 0, 0})
	CMember(class UFortMantisPawnComponent*)           MantisPawnComponent                                         OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(class UAbilityTask_PlayMontageAndWait*)    MontageTask                                                 OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(class UAbilityTask_ApplyRootMotion_Base*)  RootMotionTask                                              OFFSET(get<T>, {0xB60, 8, 0, 0})


	/// Functions
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished
	// void OnMontageFinished();                                                                                                // [0xb40cfd0] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled
	// void OnMontageCancelled();                                                                                               // [0xb40cfbc] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.GetLevelForGameplayEffectContainer
	// int32_t GetLevelForGameplayEffectContainer(FGameplayTag ApplicationTag);                                                 // [0xb40cc54] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.GetDynamicMontageNameForTechnique
	// FName GetDynamicMontageNameForTechnique(FName TechniqueName);                                                            // [0xb40cb00] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.FillMetadataForTechnique
	// void FillMetadataForTechnique(FName TechniqueName, FFortMantisTechniqueMetadata& OutTechniqueMetadata);                  // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarpingAlternativeBehavior
	// void ConfigureRootMotionWarpingAlternativeBehavior(FName TechniqueName, class AActor*& OutTargetActor, bool& bOutSnapshotTargetActorLocation, EFortMantisWarpTranslationMethod& OutWarpTranslationMethod, FVector& OutWarpTranslationVector, EFortMantisWarpRotationMethod& OutWarpRotationMethod, FRotator& OutStaticRotation); // [0x1340978] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping
	// void ConfigureRootMotionWarping(FName TechniqueName, bool& bOutAllowTranslationWarp, bool& bOutAllowRotationWarp, class AActor*& OutTargetActor, bool& bOutSnapshotTargetActorLocation, bool& bOutWarpTranslationToLocation, FVector& outTargetLocation); // [0xb40c6f8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowStarted
	// void BP_OnTechniqueNotifyWindowStarted(EFortMantisNotifyWindow NotifyWindow, class UFortAnimNotifyState_Mantis* Notify); // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowEnded
	// void BP_OnTechniqueNotifyWindowEnded(EFortMantisNotifyWindow NotifyWindow, class UFortAnimNotifyState_Mantis* Notify);   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyEvent
	// void BP_OnTechniqueNotifyEvent(EFortMantisNotifyEvent NotifyEvent, class UFortAnimNotify_Mantis* Notify);                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit
	// void BP_OnMantisTechniqueHit(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTag ApplicationTag);           // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisPreTechniqueSelection
	// void BP_OnMantisPreTechniqueSelection();                                                                                 // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisInputEvent
	// void BP_OnMantisInputEvent(EFortMantisTechniqueActivationInputType InputType, EFortMantisTechniqueActivationTimingType InputTiming, bool bDidInputStartTechnique, bool bDidInputQueueTechnique, float InputHeldDuration); // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_MantisAbilityTechniqueStarted
	// void BP_MantisAbilityTechniqueStarted(FGameplayTagContainer OwningTags, FName SequenceName, bool StartsSequence, bool EndsSequence); // [0x1340978] Event|Protected|BlueprintEvent 
};

/// Class /Script/MantisRuntime.FortMantisData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortMantisData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bShowTargetHealthBar                                        OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(class UClass*)                             TechniqueAbility                                            OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FFortGameplayEffectContainer>)      TechniqueAdditionEffectContainers                           OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FFortMantisTechniqueData>)          Techniques                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FFortMantisTechniqueBranch>)        Branches                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/MantisRuntime.FortMantisPawnComponent
/// Size: 0x03C0 (0x0000A0 - 0x000460)
class UFortMantisPawnComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FMulticastInlineDelegate)                  OnTechniqueMetadataReady                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TMap<UAnimMontage*, FFortMantisMontageData>) MontageDataMap                                            OFFSET(get<T>, {0x190, 80, 0, 0})
	CMember(class UFortMantisData*)                    MantisData                                                  OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(class AFortWeapon*)                        Weapon                                                      OFFSET(get<T>, {0x1E8, 8, 0, 0})


	/// Functions
	// Function /Script/MantisRuntime.FortMantisPawnComponent.TryManuallyStartTechnique
	// bool TryManuallyStartTechnique(int32_t TechniqueDataIndex);                                                              // [0xb40d7c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.TryManuallyEndCurrentTechnique
	// bool TryManuallyEndCurrentTechnique();                                                                                   // [0xb40d774] Final|Native|Public|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.SimulateInputEvent
	// void SimulateInputEvent(EFortMantisTechniqueActivationInputType InputType, EFortMantisTechniqueActivationTimingType InputTiming, bool bForceProcessEvent); // [0xb40d678] Final|Native|Public|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.SetLockOnState
	// void SetLockOnState(bool bEnabled, class AActor* TargetActor);                                                           // [0xb40d504] Final|Native|Public|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.SetBranchRule
	// void SetBranchRule(EFortMantisBranchRule InBranchRule, EFortMantisBranchPath InBranchPath);                              // [0xb40d440] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation
	// void OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);                         // [0xb40cff8] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnOwnerWeaponHolstered
	// void OnOwnerWeaponHolstered();                                                                                           // [0xb40cfe4] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate
	// void OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);                  // [0xb40ce78] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.IsSpecificInputPressed
	// bool IsSpecificInputPressed(EFortMantisTechniqueActivationInputType InputType);                                          // [0xb40cdcc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.IsPerformingLockOn
	// bool IsPerformingLockOn();                                                                                               // [0xb40cdb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.HasLockOnTarget
	// bool HasLockOnTarget();                                                                                                  // [0xb40cd70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.HasCurrentTechniqueMetadataBeenSet
	// bool HasCurrentTechniqueMetadataBeenSet();                                                                               // [0xb40cd58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.GetMontageForCurrentTechnique
	// class UAnimMontage* GetMontageForCurrentTechnique();                                                                     // [0xb40cd0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.GetLockOnTarget
	// class AActor* GetLockOnTarget();                                                                                         // [0xb40cce8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MantisRuntime.FortMantisPawnComponent.GetCurrentTechniqueMetadata
	// FFortMantisTechniqueMetadata GetCurrentTechniqueMetadata();                                                              // [0xb40cae4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MantisRuntime.FortMantisWeaponComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UFortMantisWeaponComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UFortMantisData*)                    MantisData                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortMantisPawnComponent*>) MantisPawnComponent                                         OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FFortMantisReplicatedAnimInstanceInfo)     AnimInstanceInfo                                            OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FFortMantisReplicatedAnimInstanceInfo)     ReplayAnimInstanceInfo                                      OFFSET(getStruct<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnWeaponAbilitiesRemoved
	// void OnWeaponAbilitiesRemoved(class AFortWeapon* Weapon, EFortWeaponAbilityRemovalReason RemovalReason);                 // [0xb40d37c] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnUnEquip
	// void OnUnEquip(class AFortWeapon* Weapon);                                                                               // [0xb40d2fc] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnRep_ReplayAnimInstanceInfo
	// void OnRep_ReplayAnimInstanceInfo();                                                                                     // [0xb40d2b8] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnReleaseTrigger
	// void OnReleaseTrigger(class AFortWeapon* Weapon);                                                                        // [0xb40d238] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnReleaseSecondaryFire
	// void OnReleaseSecondaryFire(class AFortWeapon* Weapon);                                                                  // [0xb40d1b8] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnPreActivateSecondaryAbility
	// void OnPreActivateSecondaryAbility(class AFortWeapon* Weapon);                                                           // [0xb40d138] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnPreActivatePrimaryAbility
	// void OnPreActivatePrimaryAbility(class AFortWeapon* Weapon);                                                             // [0xb40d0bc] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.OnEquip
	// void OnEquip(class AFortWeapon* Weapon);                                                                                 // [0xb40cf3c] Final|Native|Protected 
	// Function /Script/MantisRuntime.FortMantisWeaponComponent.GetAnimInstanceInfo
	// FFortMantisReplicatedAnimInstanceInfo GetAnimInstanceInfo();                                                             // [0xb40cac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueMetadata
/// Size: 0x0140 (0x000000 - 0x000140)
class FFortMantisTechniqueMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TMap<FGameplayTag, int32_t>)               IntValues                                                   OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FGameplayTag, float>)                 FloatValues                                                 OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FGameplayTag, FVector>)               VectorValues                                                OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FString>)               StringValues                                                OFFSET(get<T>, {0xF0, 80, 0, 0})
};

/// Struct /Script/MantisRuntime.FortRootMotionSource_Mantis
/// Size: 0x00C0 (0x0000E0 - 0x0001A0)
class FFortRootMotionSource_Mantis : public FRootMotionSource
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(float)                                     CurrentTechniqueTime                                        OFFSET(get<float>, {0xD8, 4, 0, 0})
	CMember(class UAnimMontage*)                       TechniqueMontage                                            OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FFortMantisRootMotionWarpInfo)             WarpInfo                                                    OFFSET(getStruct<T>, {0xE8, 104, 0, 0})
	SMember(FVector)                                   LatestRepMovementLocation                                   OFFSET(getStruct<T>, {0x150, 24, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisRootMotionWarpInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortMantisRootMotionWarpInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<AActor*>)                   WarpTarget                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          BaseComponentForRelativeTargetLocation                      OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector_NetQuantize)                       BaseRelativeWarpTargetLocation                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector_NetQuantize)                       LastValidWarpTargetLocation                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bAllowTranslationWarp                                       OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(bool)                                      bAllowRotationWarp                                          OFFSET(get<bool>, {0x40, 1, 1, 2})
	DMember(bool)                                      bSnapshotTargetLocation                                     OFFSET(get<bool>, {0x40, 1, 1, 3})
	DMember(bool)                                      bUseAlternativeWarpingBehavior                              OFFSET(get<bool>, {0x41, 1, 0, 0})
	CMember(EFortMantisWarpTranslationMethod)          WarpTranslationMethod                                       OFFSET(get<T>, {0x42, 1, 0, 0})
	SMember(FVector_NetQuantize)                       WarpTranslationVector                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(EFortMantisWarpRotationMethod)             WarpRotationMethod                                          OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(float)                                     WarpRotationYaw                                             OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisTargetData
/// Size: 0x01B8 (0x000008 - 0x0001C0)
class FFortMantisTargetData : public FGameplayAbilityTargetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FFortMantisRootMotionWarpInfo)             TechniqueWarpInfo                                           OFFSET(getStruct<T>, {0x8, 104, 0, 0})
	DMember(int32_t)                                   TechniqueDataIndex                                          OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(bool)                                      bIsLockedOn                                                 OFFSET(get<bool>, {0x74, 1, 0, 0})
	SMember(FName)                                     DynamicMontageName                                          OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FFortMantisTechniqueMetadata)              TechniqueMetadata                                           OFFSET(getStruct<T>, {0x80, 320, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueCharacterSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FFortMantisTechniqueCharacterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bDetachCharacterRotationFromCamera                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     ReattachCharacterRotationBlendTime                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ReattachCharacterRotationBlendExponent                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bReattachCharacterRotationIfNoMovementInput                 OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     WindupCharacterRotationRate                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ExecutionCharacterRotationRate                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     RecoveryCharacterRotationRate                               OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueData
/// Size: 0x0158 (0x000000 - 0x000158)
class FFortMantisTechniqueData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bStartsSequence                                             OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bEndsSequence                                               OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bBranchesToBlockedOnZeroDamage                              OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(int32_t)                                   MaxConsecutiveBranchesToSelf                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EFortMantisTechniqueAnimationType)         AnimationType                                               OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TMap<FName, UAnimMontage*>)                DynamicMontages                                             OFFSET(get<T>, {0x18, 80, 0, 0})
	SMember(FName)                                     DefaultDynamicMontageName                                   OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	CMember(EFortMantisTechniqueRootMotionType)        RootMotionType                                              OFFSET(get<T>, {0x6C, 1, 0, 0})
	DMember(float)                                     InputWindowDelay                                            OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(EFortMantisTechniqueActivationInputType)   ActivationInputType                                         OFFSET(get<T>, {0x74, 1, 0, 0})
	CMember(EFortMantisTechniqueActivationTimingType)  ActivationTimingType                                        OFFSET(get<T>, {0x75, 1, 0, 0})
	DMember(float)                                     MinInputHoldDuration                                        OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     MaxInputHoldDuration                                        OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationGameplayCues                                      OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	SMember(FGameplayTagQuery)                         ActivationTagQuery                                          OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         OngoingTagQuery                                             OFFSET(getStruct<T>, {0xE8, 72, 0, 0})
	SMember(FGameplayTag)                              ActivationApplicationTag                                    OFFSET(getStruct<T>, {0x130, 4, 0, 0})
	SMember(FGameplayTag)                              DamageApplicationTag                                        OFFSET(getStruct<T>, {0x134, 4, 0, 0})
	SMember(FFortMantisTechniqueCharacterSettings)     CharacterSettings                                           OFFSET(getStruct<T>, {0x138, 28, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueBranch
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortMantisTechniqueBranch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     FromTechnique                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ToTechnique                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(EFortMantisBranchPath)                     BranchPath                                                  OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisMontageData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortMantisMontageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisReplicatedAnimInstanceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortMantisReplicatedAnimInstanceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bIsTechniqueActive                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     ActiveTechniqueName                                         OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActiveTechniqueIndex                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ActiveTechniqueConsecutiveBranchesToSelf                    OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisRootMotionWarpInfoNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FFortMantisRootMotionWarpInfoNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueActivationInputType
/// Size: 0x05
enum class EFortMantisTechniqueActivationInputType : uint8_t
{
	EFortMantisTechniqueActivationInputType__None                                    = 0,
	EFortMantisTechniqueActivationInputType__Primary                                 = 1,
	EFortMantisTechniqueActivationInputType__Secondary                               = 2,
	EFortMantisTechniqueActivationInputType__Max_Invalid                             = 3,
	EFortMantisTechniqueActivationInputType__EFortMantisTechniqueActivationInputType_MAX = 4
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueActivationTimingType
/// Size: 0x04
enum class EFortMantisTechniqueActivationTimingType : uint8_t
{
	EFortMantisTechniqueActivationTimingType__None                                   = 0,
	EFortMantisTechniqueActivationTimingType__Pressed                                = 1,
	EFortMantisTechniqueActivationTimingType__Released                               = 2,
	EFortMantisTechniqueActivationTimingType__EFortMantisTechniqueActivationTimingType_MAX = 3
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueAnimationType
/// Size: 0x04
enum class EFortMantisTechniqueAnimationType : uint8_t
{
	EFortMantisTechniqueAnimationType__SingleMontage                                 = 0,
	EFortMantisTechniqueAnimationType__DynamicMontage                                = 1,
	EFortMantisTechniqueAnimationType__AnimInstance                                  = 2,
	EFortMantisTechniqueAnimationType__EFortMantisTechniqueAnimationType_MAX         = 3
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueRootMotionType
/// Size: 0x04
enum class EFortMantisTechniqueRootMotionType : uint8_t
{
	EFortMantisTechniqueRootMotionType__None                                         = 0,
	EFortMantisTechniqueRootMotionType__ExtractFromMontageAndWarp                    = 1,
	EFortMantisTechniqueRootMotionType__HoldPosition                                 = 2,
	EFortMantisTechniqueRootMotionType__EFortMantisTechniqueRootMotionType_MAX       = 3
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyEvent
/// Size: 0x04
enum class EFortMantisNotifyEvent : uint8_t
{
	EFortMantisNotifyEvent__Invalid                                                  = 0,
	EFortMantisNotifyEvent__Branch                                                   = 1,
	EFortMantisNotifyEvent__EndTechnique                                             = 2,
	EFortMantisNotifyEvent__EFortMantisNotifyEvent_MAX                               = 3
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyWindow
/// Size: 0x06
enum class EFortMantisNotifyWindow : uint8_t
{
	EFortMantisNotifyWindow__Invalid                                                 = 0,
	EFortMantisNotifyWindow__Input                                                   = 1,
	EFortMantisNotifyWindow__Execution                                               = 2,
	EFortMantisNotifyWindow__Damage                                                  = 3,
	EFortMantisNotifyWindow__RootMotionWarp                                          = 4,
	EFortMantisNotifyWindow__EFortMantisNotifyWindow_MAX                             = 5
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyTranslationWarpLimitRule
/// Size: 0x05
enum class EFortMantisNotifyTranslationWarpLimitRule : uint8_t
{
	EFortMantisNotifyTranslationWarpLimitRule__None                                  = 0,
	EFortMantisNotifyTranslationWarpLimitRule__Window                                = 1,
	EFortMantisNotifyTranslationWarpLimitRule__Animation                             = 2,
	EFortMantisNotifyTranslationWarpLimitRule__Custom                                = 3,
	EFortMantisNotifyTranslationWarpLimitRule__EFortMantisNotifyTranslationWarpLimitRule_MAX = 4
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyRotationWarpRateRule
/// Size: 0x03
enum class EFortMantisNotifyRotationWarpRateRule : uint8_t
{
	EFortMantisNotifyRotationWarpRateRule__Snap                                      = 0,
	EFortMantisNotifyRotationWarpRateRule__WindowDurationLerp                        = 1,
	EFortMantisNotifyRotationWarpRateRule__EFortMantisNotifyRotationWarpRateRule_MAX = 2
};

/// Enum /Script/MantisRuntime.EFortMantisBranchRule
/// Size: 0x04
enum class EFortMantisBranchRule : uint8_t
{
	EFortMantisBranchRule__Off                                                       = 0,
	EFortMantisBranchRule__Any                                                       = 1,
	EFortMantisBranchRule__Starter                                                   = 2,
	EFortMantisBranchRule__EFortMantisBranchRule_MAX                                 = 3
};

/// Enum /Script/MantisRuntime.EFortMantisBranchPath
/// Size: 0x08
enum class EFortMantisBranchPath : uint8_t
{
	EFortMantisBranchPath__Default                                                   = 0,
	EFortMantisBranchPath__Path                                                      = 1,
	EFortMantisBranchPath__Path3                                                     = 2,
	EFortMantisBranchPath__Path4                                                     = 3,
	EFortMantisBranchPath__Path5                                                     = 4,
	EFortMantisBranchPath__Path6                                                     = 5,
	EFortMantisBranchPath__Blocked                                                   = 6,
	EFortMantisBranchPath__EFortMantisBranchPath_MAX                                 = 7
};

/// Enum /Script/MantisRuntime.EFortMantisWarpTranslationMethod
/// Size: 0x07
enum class EFortMantisWarpTranslationMethod : uint8_t
{
	EFortMantisWarpTranslationMethod__None                                           = 0,
	EFortMantisWarpTranslationMethod__OffsetFromTargetActor                          = 1,
	EFortMantisWarpTranslationMethod__StaticLocation                                 = 2,
	EFortMantisWarpTranslationMethod__Reorient                                       = 3,
	EFortMantisWarpTranslationMethod__ScaledBasedOnInput                             = 4,
	EFortMantisWarpTranslationMethod__ReorientAndScaledBasedOnInput                  = 5,
	EFortMantisWarpTranslationMethod__EFortMantisWarpTranslationMethod_MAX           = 6
};

/// Enum /Script/MantisRuntime.EFortMantisWarpRotationMethod
/// Size: 0x04
enum class EFortMantisWarpRotationMethod : uint8_t
{
	EFortMantisWarpRotationMethod__None                                              = 0,
	EFortMantisWarpRotationMethod__FaceTargetActor                                   = 1,
	EFortMantisWarpRotationMethod__StaticRotation                                    = 2,
	EFortMantisWarpRotationMethod__EFortMantisWarpRotationMethod_MAX                 = 3
};

