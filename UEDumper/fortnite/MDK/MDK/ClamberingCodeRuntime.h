
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ContextualTraversalRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ModularGameplay

/// Class /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering
/// Size: 0x0068 (0x000178 - 0x0001E0)
class UFortMovementMode_ExtClambering : public UFortMovementMode_ExtLogicTraversalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(class UClass*)                             LedgeLaunchCameraMode                                       OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UClass*)                             WindowClamberCameraMode                                     OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ClamberingTag                                               OFFSET(getStruct<T>, {0x188, 32, 0, 0})
	SMember(FGameplayTag)                              ClamberingStartedTag                                        OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ClamberingFinishedTag                                       OFFSET(getStruct<T>, {0x1B0, 32, 0, 0})
	CMember(class UCameraShakeBase*)                   CameraShake                                                 OFFSET(get<T>, {0x1D0, 8, 0, 0})
	DMember(float)                                     LedgeLaunchSyncPointInterpSpeed                             OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     LedgeLaunchPlayerCollideBounceSpeed                         OFFSET(get<float>, {0x1DC, 4, 0, 0})


	/// Functions
	// Function /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering.BP_GetClamberLocation
	// FVector BP_GetClamberLocation();                                                                                         // [0x32c350c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering.BP_GetAnimationMontageInformation
	// void BP_GetAnimationMontageInformation(FClamberMontageInput& Context, class UAnimMontage*& AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // [0x186becc] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/ClamberingCodeRuntime.InstancedLedgeActor
/// Size: 0x0058 (0x000298 - 0x0002F0)
class AInstancedLedgeActor : public AFortClientOnlyActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UInstancedStaticMeshComponent*)      InstancedStaticMeshComponent                                OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/ClamberingCodeRuntime.InstancedLedgeActor.BP_OnRemoveInstance
	// void BP_OnRemoveInstance(FTransform& LedgeTransform, int32_t InstanceIndex);                                             // [0x186becc] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.InstancedLedgeActor.BP_OnAddInstance
	// void BP_OnAddInstance(FTransform& LedgeTransform, int32_t InstanceIndex);                                                // [0x186becc] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/ClamberingCodeRuntime.LedgeLaunchWorldSubsystem
/// Size: 0x0170 (0x000030 - 0x0001A0)
class ULedgeLaunchWorldSubsystem : public UBuildingWallSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TWeakObjectPtr<UPBWLedgeConfigurationData*>) ConfigurationData                                         OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InstancedLedgeActorClass                                    OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(class UPBWLedgeConfigurationData*)         CachedConfigurationData                                     OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class AInstancedLedgeActor*)               InstancedLedgeActor                                         OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TMap<UClass*, FLedgeLaunchConfigEntry>)    CachedLedgeLaunchMap                                        OFFSET(get<T>, {0x80, 80, 0, 0})


	/// Functions
	// Function /Script/ClamberingCodeRuntime.LedgeLaunchWorldSubsystem.OnWallDied
	// void OnWallDied(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x2f6e1ac] Final|Native|Protected|HasOutParms|HasDefaults 
};

/// Class /Script/ClamberingCodeRuntime.PBWLedgeConfigurationData
/// Size: 0x0190 (0x000030 - 0x0001C0)
class UPBWLedgeConfigurationData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TMap<EPlayerBuiltWallType, TWeakObjectPtr<UClass*>>) MetalWalls                                        OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<EPlayerBuiltWallType, TWeakObjectPtr<UClass*>>) StoneWalls                                        OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<EPlayerBuiltWallType, TWeakObjectPtr<UClass*>>) WoodWalls                                         OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TMap<EPlayerBuiltWallType, FLedgeLaunchConfigEntry>) Transforms                                        OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TMap<EPlayerBuiltWallMaterialType, FLedgeLaunchTransformConfigEntry>) PerMaterialTransforms            OFFSET(get<T>, {0x170, 80, 0, 0})
};

/// Class /Script/ClamberingCodeRuntime.ClamberingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClamberingCodeRuntime.ClamberingComponent
/// Size: 0x0E20 (0x0000A8 - 0x000EC8)
class UClamberingComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3784;

public:
	CMember(EClamberingState)                          LocalClamberingState                                        OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(EClamberingState)                          ReplicatedClamberingState                                   OFFSET(get<T>, {0xB1, 1, 0, 0})
	SMember(FClamberingTargetingData)                  LockedTargetingData                                         OFFSET(getStruct<T>, {0xB8, 224, 0, 0})
	SMember(FReplicatedClamberingTargetingData_SimClient) ReplicatedTargetingData                                  OFFSET(getStruct<T>, {0x198, 56, 0, 0})
	SMember(FScalableFloat)                            ClamberingEnabled                                           OFFSET(getStruct<T>, {0x1D8, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberIndicatorEnabled                                     OFFSET(getStruct<T>, {0x200, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberStartMaxFallingDamageFraction                        OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	DMember(bool)                                      bPerformTargetingWhileWalking                               OFFSET(get<bool>, {0x258, 1, 0, 0})
	DMember(bool)                                      bPerformTargetingWhileSwimming                              OFFSET(get<bool>, {0x259, 1, 0, 0})
	SMember(FScalableFloat)                            ServerFailDelay                                             OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            ServerValidatePlayerMaxDistance                             OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FClamberingInputConfig)                    InputConfig                                                 OFFSET(getStruct<T>, {0x2B0, 848, 0, 0})
	SMember(FClamberingTargetingConfig_Ledge)          TargetingConfig_Ledge                                       OFFSET(getStruct<T>, {0x600, 1240, 0, 0})
	SMember(FClamberingInputConfig_CachedValues)       InputConfigCachedValues                                     OFFSET(getStruct<T>, {0xAD8, 92, 0, 0})
	SMember(FClamberingTargetingConfig_Ledge_CachedContextualValues) TargetingConfig_Ledge_CachedContextualValues  OFFSET(getStruct<T>, {0xB34, 128, 0, 0})
	SMember(FClamberingMovementConfig_Ledge)           MoveConfig_Ledge                                            OFFSET(getStruct<T>, {0xBB8, 80, 0, 0})
	SMember(FScalableFloat)                            ClamberSyncTargetLedgeOffset                                OFFSET(getStruct<T>, {0xC08, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberingMaxAnalyticsEvents                                OFFSET(getStruct<T>, {0xC30, 40, 0, 0})
	SMember(FScalableFloat)                            SynchedActionFailDelay                                      OFFSET(getStruct<T>, {0xC58, 40, 0, 0})
	CMember(class UClass*)                             MovementModeExtension                                       OFFSET(get<T>, {0xC80, 8, 0, 0})
	SMember(FGameplayTag)                              SynchedActionMMETag                                         OFFSET(getStruct<T>, {0xC88, 4, 0, 0})
	SMember(FName)                                     LedgeLaunchSyncPointName                                    OFFSET(getStruct<T>, {0xC8C, 4, 0, 0})
	DMember(double)                                    LastTeleportTime                                            OFFSET(get<double>, {0xC90, 8, 0, 0})
	DMember(bool)                                      bTutorialModeEnabled                                        OFFSET(get<bool>, {0xC98, 1, 0, 0})
	SMember(FClamberingTargetingData)                  LocalTargetingData                                          OFFSET(getStruct<T>, {0xCA0, 224, 0, 0})
	SMember(FClamberingTargetingData)                  ParallelTargetingData                                       OFFSET(getStruct<T>, {0xD80, 224, 0, 0})
	DMember(float)                                     QueuedInputTimer                                            OFFSET(get<float>, {0xE60, 4, 0, 0})
	DMember(float)                                     InputEnabledTimer                                           OFFSET(get<float>, {0xE64, 4, 0, 0})
	DMember(bool)                                      bJumpInputPressed                                           OFFSET(get<bool>, {0xE68, 1, 0, 0})
	DMember(float)                                     JumpHeldInAirTime                                           OFFSET(get<float>, {0xE6C, 4, 0, 0})
	SMember(FGameplayTag)                              Tag_DisableClambering                                       OFFSET(getStruct<T>, {0xEC0, 4, 0, 0})


	/// Functions
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.UnregisterMutatorUpdatedDelegate
	// void UnregisterMutatorUpdatedDelegate();                                                                                 // [0xafaa834] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ShouldShowClamberIndicator
	// bool ShouldShowClamberIndicator();                                                                                       // [0xafaa810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.SetTutorialModeEnabled
	// void SetTutorialModeEnabled(bool bEnabled);                                                                              // [0xafaa74c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ServerStartClambering
	// void ServerStartClambering(FReplicatedClamberingTargetingData InReplicatedTargetingData, double ClientLastTeleportTime); // [0xafaa590] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);                                                          // [0xafaa34c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedTargetingData
	// void OnRep_ReplicatedTargetingData();                                                                                    // [0xafaa1dc] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                       // [0x3449b9c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x1c74404] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.NetMulticast_ClamberingLedgeFailed
	// void NetMulticast_ClamberingLedgeFailed(EClamberingFailedReason FailedReason, EClamberingState FailedState);             // [0xafaa098] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsTutorialModeEnabled
	// bool IsTutorialModeEnabled();                                                                                            // [0xafaa074] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsClamberingEnabled
	// bool IsClamberingEnabled();                                                                                              // [0xafaa050] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsAutoClamberingEnabled
	// bool IsAutoClamberingEnabled();                                                                                          // [0xafaa02c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataValid
	// void HandleTargetingDataValid(FClamberingTargetingData& TargetingData);                                                  // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataInvalid
	// void HandleTargetingDataInvalid();                                                                                       // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorHealthChanged
	// void HandleTargetActorHealthChanged();                                                                                   // [0xafaa018] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorDestroyed
	// void HandleTargetActorDestroyed(class AActor* Actor);                                                                    // [0xafa9f58] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerTeleported
	// void HandleOwnerTeleported(class AFortPawn* TeleportedOwner);                                                            // [0xafa9e98] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerMovementModeChanged
	// void HandleOwnerMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0x1962ac4] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                                // [0xafa9dd4] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDied
	// void HandleOwnerDied(class AFortPawn* DeadPawn);                                                                         // [0xafa9d14] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDBNO
	// void HandleOwnerDBNO();                                                                                                  // [0x30aa498] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInvalidated
	// void HandleOwnerASCInvalidated();                                                                                        // [0x30aa4c0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0x3362a20] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetOutOfActivationRange
	// void HandleClamberingTargetOutOfActivationRange();                                                                       // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetInActivationRange
	// void HandleClamberingTargetInActivationRange();                                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.DrawDebugHUD
	// void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);                                                               // [0x6d6d7fc] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeEnabled
	// void BP_TutorialModeEnabled();                                                                                           // [0x186becc] Event|Protected|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeDisabled
	// void BP_TutorialModeDisabled();                                                                                          // [0x186becc] Event|Protected|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_OnMMEStarted
	// void BP_OnMMEStarted();                                                                                                  // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_IsValidTargetActor
	// void BP_IsValidTargetActor(class AActor* TargetActor, bool& bIsValidTargetActor);                                        // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleSynchedActionStarted
	// void BP_HandleSynchedActionStarted(FSynchedActionInfo& SynchedActionInfo);                                               // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleClamberingStateChanged
	// void BP_HandleClamberingStateChanged(EClamberingState OldClamberingState, EClamberingState NewClamberingState);          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartTargeting
	// void BP_CanStartTargeting(bool& bCanStartTargeting);                                                                     // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartClambering
	// void BP_CanStartClambering(bool& bCanStartClambering);                                                                   // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ClamberingCodeRuntime.ClamberingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ClamberingCodeRuntime.ClamberingLibrary.PerformClamberingTargeting
	// bool PerformClamberingTargeting(class ACharacter* Character, FClamberingTargetingData& OutTargetingData);                // [0xafaa210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ClamberingCodeRuntime.FortAthenaMutator_LedgeLaunch
/// Size: 0x0178 (0x000338 - 0x0004B0)
class AFortAthenaMutator_LedgeLaunch : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	CMember(TArray<TWeakObjectPtr<ABuildingWall*>>)    CurrentWalls                                                OFFSET(get<T>, {0x490, 16, 0, 0})
	DMember(bool)                                      bShouldSpawnLedge                                           OFFSET(get<bool>, {0x4A0, 1, 0, 0})


	/// Functions
	// Function /Script/ClamberingCodeRuntime.FortAthenaMutator_LedgeLaunch.OnRep_bShouldSpawnLedge
	// void OnRep_bShouldSpawnLedge();                                                                                          // [0xafaa1f0] Final|Native|Private 
};

/// Struct /Script/ClamberingCodeRuntime.FortMovementMode_ClamberingRuntimeData
/// Size: 0x0030 (0x0000D0 - 0x000100)
class FFortMovementMode_ClamberingRuntimeData : public FFortMovementMode_TraversalBaseRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/ClamberingCodeRuntime.FortMovementMode_ClamberingCreationData
/// Size: 0x0010 (0x000130 - 0x000140)
class FFortMovementMode_ClamberingCreationData : public FFortMovementMode_TraversalBaseCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TArray<FSynchedActionWarpPointInfo_Replicated>) LedgeLaunchWarpPointInfos                              OFFSET(get<T>, {0x128, 16, 0, 0})
	DMember(int32_t)                                   LedgeLaunchWarpPointIndex                                   OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(bool)                                      bCanStandOnLedge                                            OFFSET(get<bool>, {0x13C, 1, 0, 0})
	DMember(bool)                                      bHasFixedLedgeLaunchWarpPoint                               OFFSET(get<bool>, {0x13D, 1, 0, 0})
	DMember(bool)                                      bClamberFromFalling                                         OFFSET(get<bool>, {0x13E, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberMontageInput
/// Size: 0x0050 (0x000000 - 0x000050)
class FClamberMontageInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSynchedActionInfo)                        BaseSynchedActionInfo                                       OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FVector)                                   FutureLedgeWarpPoint                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bIsLedgeLaunch                                              OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bHasFutureLedge                                             OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bClamberFromFalling                                         OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      bWindowClamber                                              OFFSET(get<bool>, {0x4B, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.LedgeLaunchConfigEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FLedgeLaunchConfigEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FTransform>)                        LedgeTransforms                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FTransform>)                        WindowLedgeTransforms                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.LedgeLaunchTransformConfigEntry
/// Size: 0x0050 (0x000000 - 0x000050)
class FLedgeLaunchTransformConfigEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<EPlayerBuiltWallType, FLedgeLaunchConfigEntry>) Transforms                                        OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig
/// Size: 0x0350 (0x000000 - 0x000350)
class FClamberingInputConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FScalableFloat)                            ClamberActivationHorizontalRange                            OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberActivationVerticalRange                              OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberLookAtThreshold                                      OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            EnableInputDelay                                            OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            QueuedInputWindow                                           OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            HeldInputDuration                                           OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	CMember(EClamberingActivationMode)                 ActivationMode                                              OFFSET(get<T>, {0xF0, 1, 0, 0})
	SMember(FScalableFloat)                            AutoStartMovementThreshold                                  OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartLookAtThreshold                                    OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckCastRadius                                OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckHorizontalRange                           OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckLookAtThresholdMultiplier                 OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            TargetInvalidateDistance                                    OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetAimInvalidateAngle                                    OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetActorMovementInvalidateDistance                       OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            LedgeLaunchEnabled                                          OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDirectionalLedgeLaunchAngle                              OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            PBWLedgeLaunchMaxHorizontalTranslation                      OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultLedgeLaunchVerticalTranslation                       OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            PBWLedgeLaunchVerticalTranslation                           OFFSET(getStruct<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            PBWNextLedgeLaunchVerticalTranslation                       OFFSET(getStruct<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            LedgeLaunchWarpingWindow                                    OFFSET(getStruct<T>, {0x328, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
/// Size: 0x04D8 (0x000000 - 0x0004D8)
class FClamberingTargetingConfig_Ledge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	SMember(FScalableFloat)                            ForwardCastDistance                                         OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastRadius                                           OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            FowardCast2D                                                OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            VerticalSurfaceThreshold                                    OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HorizontalSurfaceThreshold                                  OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            UpwardDistanceCapsuleHeightMultiplier                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            UpwardStartDistanceCapsuleHeightMultiplier                  OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardDistanceCapsuleHeightMultiplier                     OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeHeight                                          OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeHeightWater                                     OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            FallingSpeedThreshold                                       OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeFallingHeight                                   OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeFallingWaterHeight                              OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardSphereCastRadius                                     OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardSphereCastRadius                                    OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            AllowNonWalkableSurfaces                                    OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationEnabled                                     OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleRadiusModifier                       OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleHalfHeightModifier                   OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleBottomVerticalOffset                 OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeDepth                                           OFFSET(getStruct<T>, {0x320, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardSweepOffset                                         OFFSET(getStruct<T>, {0x348, 40, 0, 0})
	SMember(FScalableFloat)                            FutureLedgeLaunchMaxVerticalDetectionRange                  OFFSET(getStruct<T>, {0x370, 40, 0, 0})
	SMember(FScalableFloat)                            FutureLedgeLaunchMaxHorizontalDetectionRange                OFFSET(getStruct<T>, {0x398, 40, 0, 0})
	SMember(FScalableFloat)                            FloorCheckCastWallOffset                                    OFFSET(getStruct<T>, {0x3C0, 40, 0, 0})
	SMember(FScalableFloat)                            FloorCheckDownDistance                                      OFFSET(getStruct<T>, {0x3E8, 40, 0, 0})
	SMember(FScalableFloat)                            FloorCheckMaxAllowedAngle                                   OFFSET(getStruct<T>, {0x410, 40, 0, 0})
	SMember(FScalableFloat)                            WindowTargetingHorizontalSweepBreadth                       OFFSET(getStruct<T>, {0x438, 40, 0, 0})
	SMember(FScalableFloat)                            WindowTargetingHorizontalSweepHeight                        OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	SMember(FScalableFloat)                            WindowTargetingHorizontalOpeningSweepBreadth                OFFSET(getStruct<T>, {0x488, 40, 0, 0})
	SMember(FScalableFloat)                            WindowTargetingVerticalOffsetCheckInWindowFrame             OFFSET(getStruct<T>, {0x4B0, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig_CachedValues
/// Size: 0x005C (0x000000 - 0x00005C)
class FClamberingInputConfig_CachedValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 92;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
/// Size: 0x0080 (0x000000 - 0x000080)
class FClamberingTargetingConfig_Ledge_CachedContextualValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
/// Size: 0x0028 (0x000000 - 0x000028)
class FClamberingTargetingDebugDrawData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Box
/// Size: 0x0020 (0x000028 - 0x000048)
class FClamberingTargetingDebugDrawData_Box : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
/// Size: 0x0028 (0x000028 - 0x000050)
class FClamberingTargetingDebugDrawData_Capsule : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
/// Size: 0x0018 (0x000028 - 0x000040)
class FClamberingTargetingDebugDrawData_Line : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
/// Size: 0x0008 (0x000028 - 0x000030)
class FClamberingTargetingDebugDrawData_Sphere : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
/// Size: 0x0020 (0x000028 - 0x000048)
class FClamberingTargetingDebugDrawData_DirectionalArrow : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
/// Size: 0x0020 (0x000050 - 0x000070)
class FClamberingTargetingDebugDrawData_CapsuleCast : public FClamberingTargetingDebugDrawData_Capsule
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
/// Size: 0x0018 (0x000030 - 0x000048)
class FClamberingTargetingDebugDrawData_SphereCast : public FClamberingTargetingDebugDrawData_Sphere
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
class FClamberingTargetingDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
/// Size: 0x0000 (0x000001 - 0x000001)
class FClamberingTargetingDebugData_Ledge : public FClamberingTargetingDebugData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FClamberingTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      bCanStandOnLedge                                            OFFSET(get<bool>, {0x1, 1, 1, 1})
	DMember(bool)                                      bIsWindow                                                   OFFSET(get<bool>, {0x1, 1, 1, 2})
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   SourceAim                                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   WallLocation                                                OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   WallNormal                                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   TargetNormal                                                OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TargetActorComponent                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FVector)                                   TargetActorComponentLocation                                OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(TArray<FVector>)                           NextLedgeLaunchWarpPoints                                   OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData
/// Size: 0x0078 (0x000000 - 0x000078)
class FReplicatedClamberingTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector_NetQuantize10)                     SourceLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector_NetQuantize100)                    WallLocation                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(uint16_t)                                  WallNormalYawQuantized                                      OFFSET(get<uint16_t>, {0x38, 2, 0, 0})
	DMember(uint16_t)                                  WallNormalPitchQuantized                                    OFFSET(get<uint16_t>, {0x3A, 2, 0, 0})
	SMember(FVector_NetQuantize100)                    TargetLocation                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(uint16_t)                                  TargetNormalYawQuantized                                    OFFSET(get<uint16_t>, {0x58, 2, 0, 0})
	DMember(uint16_t)                                  TargetNormalPitchQuantized                                  OFFSET(get<uint16_t>, {0x5A, 2, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TargetActorComponent                                        OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0x70, 4, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
/// Size: 0x0038 (0x000000 - 0x000038)
class FReplicatedClamberingTargetingData_SimClient : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  WallNormalYawQuantized                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	SMember(FVector_NetQuantize100)                    TargetLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                TargetActorComponent                                        OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
/// Size: 0x0050 (0x000000 - 0x000050)
class FClamberingMovementConfig_Ledge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            duration                                                    OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            BlockCheckTickRate                                          OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FClamberingAnalytics_ClamberEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   MatchTime                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EClamberingType)                           ClamberType                                                 OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FVector)                                   ClamberLocation                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EClamberingFailedReason)                   FailureReason                                               OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnimationEntry
/// Size: 0x0010 (0x000008 - 0x000018)
class FClamberingAnimationEntry : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UAnimMontage*)                       Montage                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     MinClamberHeight                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bLedgeLaunch                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Enum /Script/ClamberingCodeRuntime.EPlayerBuiltWallType
/// Size: 0x11
enum class EPlayerBuiltWallType : uint8_t
{
	EPlayerBuiltWallType__Solid                                                      = 0,
	EPlayerBuiltWallType__Windows                                                    = 1,
	EPlayerBuiltWallType__WindowC                                                    = 2,
	EPlayerBuiltWallType__WindowSide                                                 = 3,
	EPlayerBuiltWallType__DoorC                                                      = 4,
	EPlayerBuiltWallType__DoorS                                                      = 5,
	EPlayerBuiltWallType__DoorSide                                                   = 6,
	EPlayerBuiltWallType__Archway                                                    = 7,
	EPlayerBuiltWallType__ArchwayLarge                                               = 8,
	EPlayerBuiltWallType__ArchwayLargeSupport                                        = 9,
	EPlayerBuiltWallType__EPlayerBuiltWallType_MAX                                   = 10
};

/// Enum /Script/ClamberingCodeRuntime.EPlayerBuiltWallMaterialType
/// Size: 0x04
enum class EPlayerBuiltWallMaterialType : uint8_t
{
	EPlayerBuiltWallMaterialType__Wood                                               = 0,
	EPlayerBuiltWallMaterialType__Metal                                              = 1,
	EPlayerBuiltWallMaterialType__Stone                                              = 2,
	EPlayerBuiltWallMaterialType__EPlayerBuiltWallMaterialType_MAX                   = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingType
/// Size: 0x04
enum class EClamberingType : uint8_t
{
	EClamberingType__Invalid                                                         = 0,
	EClamberingType__Ledge                                                           = 1,
	EClamberingType__Window                                                          = 2,
	EClamberingType__EClamberingType_MAX                                             = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingState
/// Size: 0x07
enum class EClamberingState : uint8_t
{
	EClamberingState__Inactive                                                       = 0,
	EClamberingState__Targeting                                                      = 1,
	EClamberingState__Ledge_Moving                                                   = 2,
	EClamberingState__Ledge_Failed                                                   = 3,
	EClamberingState__Window_Moving                                                  = 4,
	EClamberingState__Window_Failed                                                  = 5,
	EClamberingState__EClamberingState_MAX                                           = 6
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingFailedReason
/// Size: 0x14
enum class EClamberingFailedReason : uint8_t
{
	EClamberingFailedReason__None                                                    = 0,
	EClamberingFailedReason__Unknown                                                 = 1,
	EClamberingFailedReason__DebugForced                                             = 2,
	EClamberingFailedReason__OwnerDied                                               = 3,
	EClamberingFailedReason__OwnerDBNO                                               = 4,
	EClamberingFailedReason__OwnerLaunched                                           = 5,
	EClamberingFailedReason__SynchedActionNotStarted                                 = 6,
	EClamberingFailedReason__OwnerTeleported                                         = 7,
	EClamberingFailedReason__Ledge_PlayerTooFar                                      = 8,
	EClamberingFailedReason__Ledge_TargetLocationInvalid                             = 9,
	EClamberingFailedReason__Ledge_TargetActorInvalid                                = 10,
	EClamberingFailedReason__Ledge_TargetActorDestroyed                              = 11,
	EClamberingFailedReason__Ledge_BlockerEncountered                                = 12,
	EClamberingFailedReason__EClamberingFailedReason_MAX                             = 13
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingActivationMode
/// Size: 0x04
enum class EClamberingActivationMode : uint8_t
{
	EClamberingActivationMode__ClientPreference                                      = 0,
	EClamberingActivationMode__ForceAutoClambering                                   = 1,
	EClamberingActivationMode__ForceManualClambering                                 = 2,
	EClamberingActivationMode__EClamberingActivationMode_MAX                         = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingDebugTextAlign
/// Size: 0x04
enum class EClamberingDebugTextAlign : uint8_t
{
	EClamberingDebugTextAlign__Left                                                  = 0,
	EClamberingDebugTextAlign__Right                                                 = 1,
	EClamberingDebugTextAlign__Center                                                = 2,
	EClamberingDebugTextAlign__EClamberingDebugTextAlign_MAX                         = 3
};

