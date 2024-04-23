
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: AssembledMeshSystem
/// dependency: AtomRuntime
/// dependency: ClientPilot
/// dependency: CoreUObject
/// dependency: CraftingRuntime
/// dependency: DataflowCore
/// dependency: DataRegistry
/// dependency: DeltaFileSystem
/// dependency: DeveloperSettings
/// dependency: EnergyRuntime
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortGameplayGraph
/// dependency: FortImGuiCore
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: FortniteGameFramework
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayGraph
/// dependency: GameplayInteractionsModule
/// dependency: GameplayStateMachine
/// dependency: GameplayTags
/// dependency: GeometryCollectionEngine
/// dependency: ItemizationCoreRuntime
/// dependency: JsonUtilities
/// dependency: JunoWorldManagement
/// dependency: MassEntity
/// dependency: McpProfileSys
/// dependency: MeshNetwork
/// dependency: ModularGameplay
/// dependency: NavigationSystem
/// dependency: NetCore
/// dependency: PhysicsCore
/// dependency: PlayspaceSystem
/// dependency: ProxyTable
/// dependency: ReplicationGraph
/// dependency: SmartObjectsModule
/// dependency: SoundLibrary
/// dependency: SpatialMetricsCore
/// dependency: StateTreeModule
/// dependency: StructUtils
/// dependency: TacticalSprintRuntime
/// dependency: Water
/// dependency: WorldConditions
/// dependency: WorldMetricsCore

/// Class /Script/JunoGameNative.FortAutomationRpcManager_Juno
/// Size: 0x0050 (0x000058 - 0x0000A8)
class UFortAutomationRpcManager_Juno : public UFortAutomationRpcManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/JunoGameNative.FortQueryGenerator_PointsOutsideVolume
/// Size: 0x0078 (0x000088 - 0x000100)
class UFortQueryGenerator_PointsOutsideVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 NumberOfRingsAroundVolume                                   OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(class UClass*)                             GenerateInVolume                                            OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingTrackedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingTrackedActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.ShouldBeTrackedByMetrics
	// bool ShouldBeTrackedByMetrics();                                                                                         // [0x1341380] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.GetNumberOfRelevantActors
	// int32_t GetNumberOfRelevantActors();                                                                                     // [0x682b7a0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingTrackedActorInterface.GetNetRelevanceDistanceOverride
	// float GetNetRelevanceDistanceOverride();                                                                                 // [0xc33dc00] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject
/// Size: 0x0130 (0x000B48 - 0x000C78)
class UJunoAbility_PlayerPushPhysicsObject : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3192;

public:
	CMember(EFortPhysicsSimSize)                       MaxPhysicsObjectSizeToPush                                  OFFSET(get<T>, {0xB48, 1, 0, 0})
	CMember(EFortPhysicsSimSize)                       MinPhysicsObjectSizeToPush                                  OFFSET(get<T>, {0xB49, 1, 0, 0})
	SMember(FGameplayTagContainer)                     NoTagsPusher                                                OFFSET(getStruct<T>, {0xB50, 32, 0, 0})
	SMember(FGameplayTagContainer)                     NoTagsPushedObject                                          OFFSET(getStruct<T>, {0xB70, 32, 0, 0})
	CMember(class UAnimMontage*)                       DefaultPushMontage                                          OFFSET(get<T>, {0xB90, 8, 0, 0})
	CMember(TArray<FPushMontageData>)                  SpecializedPushMontages                                     OFFSET(get<T>, {0xB98, 16, 0, 0})
	SMember(FGameplayTagQuery)                         EnergyComponentQuery                                        OFFSET(getStruct<T>, {0xBA8, 72, 0, 0})
	SMember(FScalableFloat)                            EnergyInitialCost                                           OFFSET(getStruct<T>, {0xBF0, 40, 0, 0})
	SMember(FScalableFloat)                            EnergyDrainPerSecond                                        OFFSET(getStruct<T>, {0xC18, 40, 0, 0})
	DMember(bool)                                      bEnergyExhausted                                            OFFSET(get<bool>, {0xC40, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortComponent_Energy*>)    CachedEnergyComponent                                       OFFSET(get<T>, {0xC44, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TrackedObjectToPush                                         OFFSET(get<T>, {0xC58, 8, 0, 0})
	CMember(EFortPhysicsSimSize)                       TrackedObjectSimSize                                        OFFSET(get<T>, {0xC60, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.StopUsingEnergy
	// void StopUsingEnergy();                                                                                                  // [0xc33e1c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.PotentiallyStartUsingEnergy
	// void PotentiallyStartUsingEnergy();                                                                                      // [0xc33dfb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnPlayerHit
	// void OnPlayerHit(class AActor* HitPlayer, class AActor* HitActor, FVector NormalImpulse, FHitResult& Hit);               // [0xc33dde8] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnEnergyFullyRecharged
	// void OnEnergyFullyRecharged(class UFortComponent_Energy* EnergyComponentRecharged);                                      // [0xc33dd54] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.OnEnergyDrained
	// void OnEnergyDrained(class UFortComponent_Energy* EnergyComponentDrained);                                               // [0xc33dcc0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.GetMontageToPlay
	// class UAnimMontage* GetMontageToPlay();                                                                                  // [0xc33dbdc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAbility_PlayerPushPhysicsObject.CancelPushingPhysicsObject
	// void CancelPushingPhysicsObject();                                                                                       // [0x35e6228] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAccountItemDefinitionOverrideManager
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UJunoAccountItemDefinitionOverrideManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(class UFortHeroType*)                      JunoHeroDefinition                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UDataTable*)                         DefaultCharacters                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<TWeakObjectPtr<UClass*>, TWeakObjectPtr<UClass*>>) PreviewActorClasses                            OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr<UClass*>, FGameplayTagContainer>) GameplayTagParentsToRemoveFromOverrides          OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(TMap<TWeakObjectPtr<UClass*>, FGameplayTagContainer>) GameplayTagsToAdd                                OFFSET(get<T>, {0xE0, 80, 0, 0})
	CMember(TSet<FString>)                             CosmeticsProhibitedByHotfix                                 OFFSET(get<T>, {0x130, 80, 0, 0})
	CMember(TMap<FPrimaryAssetId, FJunoAccountItemDefinitionOverride>) Overrides                                   OFFSET(get<T>, {0x180, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAccountItemOverrideDefinition
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UJunoAccountItemOverrideDefinition : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayTagContainer)                     GameplayTagsToAdd                                           OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bOverrideFrontendTransform                                  OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     FrontendPreviewScale                                        OFFSET(get<float>, {0x54, 4, 0, 0})
	SMember(FVector)                                   FrontendPreviewPivotOffset                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FRotator)                                  FrontendPreviewInitialRotation                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewActorClass                                           OFFSET(get<T>, {0x88, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAthenaCharacterItemOverrideDefinition
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UJunoAthenaCharacterItemOverrideDefinition : public UJunoAccountItemOverrideDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TWeakObjectPtr<UAthenaCharacterItemDefinition*>) BaseAthenaCharacterItemDefinition                     OFFSET(get<T>, {0xB0, 32, 0, 0})
	CMember(TWeakObjectPtr<UAssembledMeshSchema*>)     AssembledMeshSchema                                         OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TWeakObjectPtr<UAssembledMeshSchema*>)     LowDetailsAssembledMeshSchema                               OFFSET(get<T>, {0xF0, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontendAnimMontageIdleOverride                             OFFSET(get<T>, {0x110, 32, 0, 0})
	DMember(float)                                     PreviewPawnScale                                            OFFSET(get<float>, {0x130, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAthenaCharacterItemOverrideDefinition.SetBaseAthenaCharacterItemDefinition
	// void SetBaseAthenaCharacterItemDefinition(TWeakObjectPtr<UAthenaCharacterItemDefinition*> InBaseAthenaCharacterItemDefinition); // [0xc33dfc4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAthenaDanceItemOverrideDefinition
/// Size: 0x00F0 (0x0000A8 - 0x000198)
class UJunoAthenaDanceItemOverrideDefinition : public UJunoAccountItemOverrideDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TWeakObjectPtr<UAthenaDanceItemDefinition*>) BaseAthenaDanceItemDefinition                             OFFSET(get<T>, {0xB0, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             AnimationFemaleOverride                                     OFFSET(get<T>, {0xF0, 32, 0, 0})
	CMember(TArray<FFortEmoteMapping>)                 AnimationOverrides                                          OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontEndAnimation                                           OFFSET(get<T>, {0x120, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontEndAnimationFemaleOverride                             OFFSET(get<T>, {0x140, 32, 0, 0})
	CMember(TArray<FFortEmoteMapping>)                 FrontEndAnimationOverrides                                  OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FVector)                                   GroupEmotePositionOffset                                    OFFSET(getStruct<T>, {0x170, 24, 0, 0})
	DMember(float)                                     GroupEmotePositionOffsetTolerance                           OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     GroupEmoteFollowDistance                                    OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     WalkForwardSpeed                                            OFFSET(get<float>, {0x190, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAthenaDanceItemOverrideDefinition.SetBaseAthenaDanceItemDefinition
	// void SetBaseAthenaDanceItemDefinition(TWeakObjectPtr<UAthenaDanceItemDefinition*> InBaseAthenaDanceItemDefinition);      // [0xc33e0b8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoActionConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoActionConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             JunoActionClass                                             OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(EJunoActionExecutionConfig)                JunoActionExecutionConfig                                   OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoActionConfig_StaticMesh
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoActionConfig_StaticMesh : public UJunoActionConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoActorAttributeOverrideComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoActorAttributeOverrideComponent : public UFortBuildingActorTagComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FDataRegistryType)                         AttributeOverrideDataRegistry                               OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FDataRegistryId)                           DataRegistryItemId                                          OFFSET(getStruct<T>, {0xA4, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.SetupHealthAttributeSet
	// void SetupHealthAttributeSet();                                                                                          // [0xc33e1ac] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.GetSecondaryLootTier
	// FName GetSecondaryLootTier();                                                                                            // [0xc33dc74] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoActorAttributeOverrideComponent.GetPrimaryLootTier
	// FName GetPrimaryLootTier();                                                                                              // [0xc33dc28] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoActorInstancesReportHandler
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoActorInstancesReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceFeatureDataActor
/// Size: 0x0040 (0x000290 - 0x0002D0)
class AJunoPersistenceFeatureDataActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x2C8, 4, 0, 0})
	DMember(bool)                                      bSpawnedByLevelSaveRecord                                   OFFSET(get<bool>, {0x2CC, 1, 0, 0})
	DMember(bool)                                      bForceDirty                                                 OFFSET(get<bool>, {0x2CD, 1, 0, 0})
	DMember(bool)                                      bDirty                                                      OFFSET(get<bool>, {0x2CE, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPersistenceFeatureDataActor.OnPersistentDataModified
	// void OnPersistentDataModified();                                                                                         // [0x6844f50] Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureDataActor
/// Size: 0x0190 (0x0002D0 - 0x000460)
class AJunoAIPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FSavedAIDataManager)                       SavedAIData                                                 OFFSET(getStruct<T>, {0x2E0, 384, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAIPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoAIPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoBasePFWContainer
/// Size: 0x00A0 (0x000140 - 0x0001E0)
class UJunoBasePFWContainer : public UPersistenceFrameworkContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoBasePFWPersistenceFeatureDataContainer
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoBasePFWPersistenceFeatureDataContainer : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoAIPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoAlterationCraftingComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoAlterationCraftingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<UCraftingObjectComponent*>) CachedCraftingObjectComponent                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FDataRegistryType)                         WeaponEssenceDataRegistryType                               OFFSET(getStruct<T>, {0xA8, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xc341184] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.OnCheckValidItemType
	// bool OnCheckValidItemType(class AFortPlayerController* Instigator);                                                      // [0x8f3e098] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAlterationCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                                // [0xc3410e8] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoAnimNotifyState_QueueInput
/// Size: 0x0068 (0x000030 - 0x000098)
class UJunoAnimNotifyState_QueueInput : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bQueueMantisInput                                           OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEventTagsToQueue                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityTagsToRemove                                         OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityTagsToAdd                                            OFFSET(getStruct<T>, {0x78, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAnimNotifyState_MakeInterruptible
/// Size: 0x0040 (0x000030 - 0x000070)
class UJunoAnimNotifyState_MakeInterruptible : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     AbilityTagsToRemove                                         OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityTagsToAdd                                            OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter
/// Size: 0x0030 (0x000030 - 0x000060)
class UJunoAsyncAction_WaitForEventRouter : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnGameplayEventRouterAvailable                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter.WaitForEventRouter
	// class UJunoAsyncAction_WaitForEventRouter* WaitForEventRouter(class AActor* ContextActor);                               // [0xc34122c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAsyncAction_WaitForEventRouter.onGameplayEventRouterAvailable__DelegateSignature
	// void onGameplayEventRouterAvailable__DelegateSignature(class UGameplayEventRouterComponent* EventRouter);                // [0x1340978] MulticastDelegate|Public|Delegate 
};

/// Class /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuilderToolSelectedActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface.ReceiveSpawnedByBuilderTool
	// void ReceiveSpawnedByBuilderTool(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xc344ae0] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolSelectedActorInterface.ReceiveSelectionSpawnedByBuilderTool
	// void ReceiveSelectionSpawnedByBuilderTool(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior, FJunoBuilderToolSelectionSpawnParams& SelectionSpawnParameters); // [0xc34499c] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoBuildingAccountItemDefBase
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UJunoBuildingAccountItemDefBase : public UAthenaCosmeticItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BuildingActorClassToPreview                                 OFFSET(get<T>, {0x578, 32, 0, 0})
	DMember(float)                                     JunoBuildingFrontendPreviewScale                            OFFSET(get<float>, {0x598, 4, 0, 0})
	SMember(FVector2D)                                 JunoBuildingFrontendFramingCenterOffsetRatio                OFFSET(getStruct<T>, {0x5A0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingSetAccountItemDefinition
/// Size: 0x0008 (0x0005B0 - 0x0005B8)
class UJunoBuildingSetAccountItemDefinition : public UJunoBuildingAccountItemDefBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	DMember(float)                                     FoundationPiecesHeightToShow                                OFFSET(get<float>, {0x5B0, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingPropAccountItemDefinition
/// Size: 0x0000 (0x0005B0 - 0x0005B0)
class UJunoBuildingPropAccountItemDefinition : public UJunoBuildingAccountItemDefBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
};

/// Class /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingConnectivityBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.GetKnobs
	// TArray<FJunoBuildingConnectionPoint> GetKnobs(FJunoBuildingConnectionPointsResult& Result);                              // [0xc343be4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.GetAtomModelAssetUserData
	// TArray<UAtomModelAssetUserData*> GetAtomModelAssetUserData(class UObject* Object);                                       // [0xc342ee4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.DebugDrawConnections
	// void DebugDrawConnections(class UObject* WorldContextObject, FJunoBuildingConnectionPointsResult& Candidates, FJunoBuildingConnectionPointsResult& Targets, FJunoBuildingConnection& ChosenConnection, TArray<FJunoBuildingConnection>& Connections); // [0xc342ccc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingConnectivityBlueprintLibrary.DebugDrawConnectionLocations
	// void DebugDrawConnectionLocations(class UObject* WorldContextObject, FJunoBuildingConnection& Connection);               // [0xc342be8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingCosmeticsSettings
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UJunoBuildingCosmeticsSettings : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<UClass*>)                   JunoBuildingSetPreviewActorClass                            OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   JunoBuildingPropPreviewActorClass                           OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   JunoBuildingSetPreviewPrefabAssetClass                      OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   JunoBuildingPropPreviewPrefabAssetClass                     OFFSET(get<T>, {0x90, 32, 0, 0})
	SMember(FGameplayTag)                              BuildingPartSubCategoryTag                                  OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingItemPreviewActor
/// Size: 0x0000 (0x0004A0 - 0x0004A0)
class AJunoBuildingItemPreviewActor : public AFortItemPreviewOffPawnActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewPrefabAsset
/// Size: 0x00F0 (0x000290 - 0x000380)
class AJunoBuildingPreviewPrefabAsset : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FFortUICameraFrameTargetBounds)            CameraFrameTargetBounds                                     OFFSET(getStruct<T>, {0x2A0, 32, 0, 0})
	DMember(float)                                     ZoomedInBoundsScale                                         OFFSET(get<float>, {0x2C0, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingProp
/// Size: 0x00A0 (0x000BD0 - 0x000C70)
class AJunoBuildingProp : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3184;

public:
	CMember(class UJunoGeometryCollectionAssemblerComponent*) GeometryCollectionAssemblerComponent                 OFFSET(get<T>, {0xC40, 8, 0, 0})
	CMember(class UJunoHarvestingComponent*)           HarvestingComponent                                         OFFSET(get<T>, {0xC48, 8, 0, 0})
	CMember(class UJunoPhysicsPersistenceComponent*)   PhysicsPersistenceComponent                                 OFFSET(get<T>, {0xC50, 8, 0, 0})
	CMember(class UItemDefinitionBase*)                AssociatedItem                                              OFFSET(get<T>, {0xC68, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingProp.GetAssociatedItem
	// class UItemDefinitionBase* GetAssociatedItem();                                                                          // [0xc4977e8] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingPropTree
/// Size: 0x0008 (0x000C70 - 0x000C78)
class AJunoBuildingPropTree : public AJunoBuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3192;

public:
	CMember(class UActorComponent*)                    LifeCycleComponent                                          OFFSET(get<T>, {0xC70, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPropTree.BlueprintCanDieInLifecyclePhase
	// bool BlueprintCanDieInLifecyclePhase(char CurrentPhaseIndex);                                                            // [0x1340978] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCameraMode_OrbitCam_BPFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.UpdateViewTargetValues
	// void UpdateViewTargetValues(FTViewTarget& InViewTarget, class AActor* InViewTargetActor, double InInteriorFOV, double InCameraPitchMin, double InCameraPitchMax, bool bInAllowChangingHidePercentByPitch, double InCurrentFOV, double& OutCurrentFOV, double& OutVTVelocity, FVector& OutVelocityDirection, FVector& OutVTVelDir, FVector& OutViewTargetBoxExtent, FVector& OutProbeCastOrigin, double& OutVTVelocityDotWithCam, double& OutCameraPitch, double& OutNormalizedCameraPitch, double& OutHidePawnPenetrationPercent); // [0xc345548] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.UpdateProbeChecks
	// void UpdateProbeChecks(class UObject* InWorldContextObject, class AActor* InViewTargetActor, FVector& InProbeCastOrigin, FName& InTagIgnoredActors, FVector& InViewTargetBoxExtent, double InVerticalProbeLength, int32_t InVerticalProbeTickSkip, int32_t InFrontalProbeTickSkip, double InFrontalAngledProbeAngle, double InFrontalAngledProbeLength, int32_t InVerticalProbeCurTickNum, int32_t InFrontalProbeCurTickNum, int32_t& OutVerticalProbeCurTickNum, int32_t& OutFrontalProbeCurTickNum, bool& bOutVerticalProbeBlocked, double& OutVerticalHitDistance, bool& bOutFrontalProbeBlocked, double& OutFrontalHitDistance); // [0xc344d6c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.GetVelocityWeight
	// double GetVelocityWeight(double InVelocityAddDistanceThreshold, double InVTVelocity, double InFastVelocityThreshold);    // [0xc34451c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.GetVelocityDistanceAdd
	// double GetVelocityDistanceAdd(double InWeight, double InAddMaxDistance);                                                 // [0xc34444c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.GetProbeWeight
	// double GetProbeWeight(double InHitDistance, double InProbeLength, bool bInProbeBlocked);                                 // [0xc344340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.GetFOVAndDistanceInterpSpeed
	// double GetFOVAndDistanceInterpSpeed(double InConfinedSpaceWeight, double InMinInterpSpeed, double InMaxInterpSpeed);     // [0xc343ad8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.GetDesiredFOV
	// double GetDesiredFOV(double InVelocityWeight, double InConfinedSpaceWeight, double InVelocityAddMaxFOV, double InExteriorFOV, double InInteriorFOV); // [0xc343178] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.GetDesiredForwardDistance
	// double GetDesiredForwardDistance(class UObject* InWorldContextObject, double InBuildingPreviewHeightAdditionalZoom, double InBuildingPreviewSizeScalar, FFloatRange InPitchCameraForwardDistanceManager, bool bInIsTargetInConversation, class UCurveFloat* InCurvePitchDistance, double InNormalizedCameraPitch, double InCameraPitch, double InCameraPitchMax, bool bInIsTargetStrafing, bool bInIsTargetBuilding, double InExteriorCameraSpaceForwardDistance, double InExteriorCameraSpaceForwardDistanceStrafing, bool bInCameraAdjustsWhenStrafing, bool bIsBuildPreviewMode, class UCurveFloat* InBuildPreviewBoundsToForwardDistanceScale, FBox InBuildPreviewLocalBounds, double InConfinedSpaceWeight, double bInteriorCameraSpaceForwardDistance, double InVelocityAddMaxDistance, double InFastVelocityThreshold, double InVTVelocity, double InVelocityAddDistanceThreshold, double InCurrentBuildingScalarDistanceOffset, double& OutCurrentBuildingScalarDistanceOffset); // [0xc34330c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam_BPFunctions.GetConfinedSpaceWeight
	// double GetConfinedSpaceWeight(double InVerticalHitDistance, double InVerticalProbeLength, bool bInVerticalProbeBlocked, double InFrontalHitDistance, double InFrontalProbeLength, bool bInFrontalProbeBlocked); // [0xc342f9c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCampActor
/// Size: 0x00C0 (0x000290 - 0x000350)
class AJunoCampActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FGameplayTag)                              StaticGameplayTag                                           OFFSET(getStruct<T>, {0x2D0, 4, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(class UOverlapComponent*)                  BoundsComponent                                             OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FGameplayTagContainer)                     OwnedGameplayTags                                           OFFSET(getStruct<T>, {0x330, 32, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampActor.RemovePersistentTags
	// void RemovePersistentTags(FGameplayTagContainer& TagsToRemove);                                                          // [0xc344cb4] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampActor.RemoveGameplayTag
	// void RemoveGameplayTag(FGameplayTag& TagToRemove);                                                                       // [0xc344ba4] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampActor.GetStaticGameplayTag
	// FGameplayTag GetStaticGameplayTag();                                                                                     // [0x42d1d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampActor.GetOwnedGameplayTags
	// FGameplayTagContainer GetOwnedGameplayTags();                                                                            // [0x93fde40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampActor.GetCampTag
	// FGameplayTag GetCampTag();                                                                                               // [0x42d1d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampActor.ApplyPersistentTags
	// void ApplyPersistentTags(FGameplayTagContainer& TagsToApply);                                                            // [0xc342b30] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampActor.AddGameplayTag
	// void AddGameplayTag(FGameplayTag& TagToAdd);                                                                             // [0xc342a24] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCampCenterComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UJunoCampCenterComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoCampAwesomeLevelChangedDelegate                       OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoCampAwesomePointModificationDelegate                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(class UClass*)                             CampActorClassToSpawn                                       OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FGameplayTag)                              CampCenterDestructionDeathReasonTag                         OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	DMember(bool)                                      bForceCampCreation                                          OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(bool)                                      bCreatePermanentCamp                                        OFFSET(get<bool>, {0x105, 1, 0, 0})
	DMember(bool)                                      bUseAlternateCampCreationFlow                               OFFSET(get<bool>, {0x106, 1, 0, 0})
	CMember(class UJunoAsyncAction_WaitForEventRouter*) WaitForEventRouterAction                                   OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FGuid)                                     LinkedCampActorID                                           OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      bCampCreationFlowTriggered                                  OFFSET(get<bool>, {0x120, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampCenterComponent.OnCampAwesomePointModification
	// void OnCampAwesomePointModification(FJunoEvent_CampAwesomePointsModified& Payload);                                      // [0xc34490c] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.OnCampAwesomeLevelChanged
	// void OnCampAwesomeLevelChanged(FJunoEvent_CampAwesomeLevelChanged& Payload);                                             // [0xc344874] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.NotifyOwnerPlacedByBuilderTool
	// void NotifyOwnerPlacedByBuilderTool(class AFortPlayerController* FortPC);                                                // [0xc3447dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampCenterComponent.HandleSmartObjectEvent
	// void HandleSmartObjectEvent(FSmartObjectEventData& SmartObjectEventData, class AActor* Actor);                           // [0xc344628] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCampComponentBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoCampComponentBase : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoMarkerComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UJunoMarkerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FJunoMarker)                               Settings                                                    OFFSET(getStruct<T>, {0xA0, 152, 0, 0})
	DMember(bool)                                      bShouldCreateMarkerOnStart                                  OFFSET(get<bool>, {0x148, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampMarkerComponent
/// Size: 0x0000 (0x000150 - 0x000150)
class UJunoCampMarkerComponent : public UJunoMarkerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/JunoGameNative.JunoCampMembershipActorComponent
/// Size: 0x0088 (0x0000E0 - 0x000168)
class UJunoCampMembershipActorComponent : public UFortAthenaTrackableAIObjectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoCampMembershipChanged                                 OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	CMember(TWeakObjectPtr<AJunoCampActor*>)           BoundCamp                                                   OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FScalableFloat)                            ToleranceForMovementUpdates                                 OFFSET(getStruct<T>, {0x140, 40, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.OnRep_BoundCamp
	// void OnRep_BoundCamp();                                                                                                  // [0xc3495e8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HasCampAtLocation
	// bool HasCampAtLocation(class UObject* WorldContextObject, FVector& Location);                                            // [0xc349444] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HasCampAtBounds
	// bool HasCampAtBounds(class UObject* WorldContextObject, FBox& Bounds);                                                   // [0xc349374] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.HandleBoundCampEndPlayEvent
	// void HandleBoundCampEndPlayEvent(class AActor* InOwner, TEnumAsByte<EEndPlayReason> EndPlayReason);                      // [0xc348e50] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.GetBoundComponent
	// class UActorComponent* GetBoundComponent(class UClass* ComponentClass);                                                  // [0xc348dac] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.GetBoundCamp
	// class AJunoCampActor* GetBoundCamp();                                                                                    // [0xc348d88] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindOrCreateCampMembershipComponentAndReturnComponent
	// class UActorComponent* FindOrCreateCampMembershipComponentAndReturnComponent(class UClass* ComponentClass, class AActor* Owner); // [0xc348c58] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindOrCreateCampMembershipActorComponentOnActor
	// class UJunoCampMembershipActorComponent* FindOrCreateCampMembershipActorComponentOnActor(class AActor* Owner);           // [0xc348bd8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindCampMembershipComponentAndReturnComponent
	// class UActorComponent* FindCampMembershipComponentAndReturnComponent(class UClass* ComponentClass, class AActor* Owner); // [0xc348afc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindCampMembershipActorComponentOnActor
	// class UJunoCampMembershipActorComponent* FindCampMembershipActorComponentOnActor(class AActor* Owner);                   // [0xc348a70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForLocation
	// class AJunoCampActor* FindBindableLocalCampForLocation(class UObject* WorldContextObject, FVector& Location);            // [0xc348968] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForArea
	// class AJunoCampActor* FindBindableLocalCampForArea(class AActor* Actor, FBox& AreaBox);                                  // [0xc34881c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForActorAndReturnComponent
	// class UActorComponent* FindBindableLocalCampForActorAndReturnComponent(class UClass* ComponentClass, class AActor* Actor); // [0xc348724] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampForActor
	// class AJunoCampActor* FindBindableLocalCampForActor(class AActor* Actor);                                                // [0xc3486a4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.FindBindableLocalCampAtLocationAndReturnComponent
	// class UActorComponent* FindBindableLocalCampAtLocationAndReturnComponent(class UClass* ComponentClass, class UObject* WorldContextObject, FVector& Location); // [0xc348524] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampMembershipActorComponent.AttemptToBindToCamp
	// void AttemptToBindToCamp();                                                                                              // [0xc348380] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoCampPersistenceComponent
/// Size: 0x0118 (0x0000A0 - 0x0001B8)
class UJunoCampPersistenceComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FAwesomeLevelSaveData)                     AwesomeLevelSaveData                                        OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FAICampManagementSaveData)                 AICampManagementSaveData                                    OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
	SMember(FNamedPOISaveData)                         NamedPOISaveData                                            OFFSET(getStruct<T>, {0xE8, 184, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoCampPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoCampPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoCampRecruitmentComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UJunoCampRecruitmentComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FActiveCampNPCEntry>)               ActiveNPCEntries                                            OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FActiveCampCreatureEntry>)          ActiveCreatureEntries                                       OFFSET(get<T>, {0xF8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRecruitmentComponent.GetActiveNPCEntries
	// TArray<FActiveCampNPCEntry> GetActiveNPCEntries();                                                                       // [0xc348d50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoCampRecruitmentComponent.GetActiveCreatureEntries
	// TArray<FActiveCampCreatureEntry> GetActiveCreatureEntries();                                                             // [0xc348d34] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoCampRecruitmentObjectComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UJunoCampRecruitmentObjectComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(int32_t)                                   AcceptedPawnTypes                                           OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoRecruitmentObjectAssignedChangedDelegate              OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoRecruitmentObjectEnableChangeDelegate                 OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoRecruitmentObjectAssignedAISpawnedDelegate            OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoRecruitmentObjectAssignedAIDespawnedDelegate          OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FJunoRecruitmentObjectAssignedData)        CachedAssignedData                                          OFFSET(getStruct<T>, {0x108, 120, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.OnRep_bIsEnabled
	// void OnRep_bIsEnabled();                                                                                                 // [0xc34961c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.OnRep_AssignedData
	// void OnRep_AssignedData();                                                                                               // [0xc3495d4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x7e1ac20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsAssignedToPlayer
	// bool IsAssignedToPlayer();                                                                                               // [0xc3495a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsAssignedToNPC
	// bool IsAssignedToNPC();                                                                                                  // [0xc349588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsAssignedToCreature
	// bool IsAssignedToCreature();                                                                                             // [0xc349568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.IsAssignedToAI
	// bool IsAssignedToAI();                                                                                                   // [0xc34954c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.HandleOnEmptyRecrutmentObjectInteracted
	// void HandleOnEmptyRecrutmentObjectInteracted(class AFortPlayerController* InteractingController);                        // [0xc3492e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.HandleDied
	// void HandleDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xc348f14] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.GetAssignedData
	// FJunoRecruitmentObjectAssignedData GetAssignedData();                                                                    // [0xc348d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.CostlyFindAssignableNPCs
	// bool CostlyFindAssignableNPCs(TArray<FGameplayTag>& OutAssignableNPCs);                                                  // [0xc348478] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.CostlyFindAssignableCreatures
	// bool CostlyFindAssignableCreatures(TArray<FGameplayTag>& OutAssignableCreatures);                                        // [0xc3483cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.CanBeAssignedToPlayers
	// bool CanBeAssignedToPlayers();                                                                                           // [0x949787c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.CanBeAssignedToNPCs
	// bool CanBeAssignedToNPCs();                                                                                              // [0xc3483b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.CanBeAssignedToCreatures
	// bool CanBeAssignedToCreatures();                                                                                         // [0xc348394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.AssignToPlayer
	// void AssignToPlayer(class AFortPlayerController* PlayerController, bool bCheckForDuplicateRecruitmentObjects);           // [0xc3482b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.AssignToCreature
	// bool AssignToCreature(FGameplayTag& UniqueAIIdentifier, bool bCheckForDuplicateRecruitmentObjects, FText CustomName);    // [0xc3480c4] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCampRecruitmentObjectComponent.AssignedActorSpawnLocationOverride
	// void AssignedActorSpawnLocationOverride(FVector& OutSpawnLocation);                                                      // [0x1340978] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoCampRemovalStatusComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UJunoCampRemovalStatusComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FScalableFloat)                            SoftRemovalCampComponentUpdateRate                          OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FJunoCampRemovalStatusData)                CampRemovalStatusData                                       OFFSET(getStruct<T>, {0xE0, 12, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCampRemovalStatusComponent.OnRep_CampRemovalStatusData
	// void OnRep_CampRemovalStatusData();                                                                                      // [0xc3495fc] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoCaveContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCaveContainerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCaveContainerInterface.GetCaveEntrances
	// void GetCaveEntrances(TArray<FTransform>& Transforms);                                                                   // [0xc34aec0] Native|Public|HasOutParms|Const 
};

/// Class /Script/JunoGameNative.JunoChaosAudioGameStateComponent
/// Size: 0x02C0 (0x0000A0 - 0x000360)
class UJunoChaosAudioGameStateComponent : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(class UPhysicalMaterial*)                  FallbackPhysicalMaterial                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FName)                                     CollisionEventSizeParamName                                 OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     CollisionTriggerUpdateParamName                             OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               Collision_Loop                                              OFFSET(get<T>, {0xB0, 32, 0, 0})
	SMember(FScalableFloat)                            CollisionMassToSize                                         OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            CollisionVolumeMultiplier                                   OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	CMember(TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds>) CollisionMaterials                               OFFSET(get<T>, {0x120, 80, 0, 0})
	SMember(FName)                                     BreakEventSizeParamName                                     OFFSET(getStruct<T>, {0x170, 4, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               Break_Group_Default                                         OFFSET(get<T>, {0x178, 32, 0, 0})
	CMember(TMap<UPhysicalMaterial*, USoundBase*>)     BreakGroupMaterialMap                                       OFFSET(get<T>, {0x198, 80, 0, 0})
	SMember(FScalableFloat)                            BreakMassToSize                                             OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            BreakVolumeMultiplier                                       OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	CMember(TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds>) BreakMaterials                                   OFFSET(get<T>, {0x238, 80, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<UAudioComponent*>>) CollisionSoundMap                                       OFFSET(get<T>, {0x288, 80, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<UAudioComponent*>>) BreakSoundMap                                           OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(class UAudioEventAggregatorSubsystem*)     AudioEventAggregatorSubsystem                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<USoundBase*>>)       SoftAssets                                                  OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(TArray<class USoundBase*>)                 LoadedAssets                                                OFFSET(get<T>, {0x340, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.UnSubscribeToChaosEventRelayEvents
	// void UnSubscribeToChaosEventRelayEvents();                                                                               // [0xc34dca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.SubscribeToChaosEventRelayEvents
	// void SubscribeToChaosEventRelayEvents();                                                                                 // [0xc34dc8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnSoundCollisionEvents
	// void OnSoundCollisionEvents(TArray<FSoundCollisionEvent>& SoundCollisionEvents);                                         // [0xc34d20c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnSoundBreakEvents
	// void OnSoundBreakEvents(TArray<FSoundBreakEvent>& SoundBreakEvents);                                                     // [0xc34cb1c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundCollisionEventsUpdated
	// void OnActiveSoundCollisionEventsUpdated(TArray<FSoundCollisionEvent>& SoundCollisionEvents);                            // [0xc34bd08] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundCollisionEventSoundFinished
	// void OnActiveSoundCollisionEventSoundFinished(class UAudioComponent* Component);                                         // [0xc34bc88] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundBreakEventsUpdated
	// void OnActiveSoundBreakEventsUpdated(TArray<FSoundBreakEvent>& SoundBreakEvents);                                        // [0xc34b598] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.OnActiveSoundBreakEventSoundFinished
	// void OnActiveSoundBreakEventSoundFinished(class UAudioComponent* Component);                                             // [0xc34b518] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoChaosAudioGameStateComponent.GetSingleChaosEventSound
	// class USoundBase* GetSingleChaosEventSound(TMap<UPhysicalMaterial*, FChaosAudioEventSizeSounds> ChaosEventMaterials, class UPhysicalMaterial* Material, char EventSize); // [0xc34b0fc] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoCheatProfilerSubsystem
/// Size: 0x0080 (0x000040 - 0x0000C0)
class UJunoCheatProfilerSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/JunoGameNative.JunoClosedDoorNavArea
/// Size: 0x0000 (0x000048 - 0x000048)
class UJunoClosedDoorNavArea : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoGameNative.JunoClusterUnionComponent
/// Size: 0x00F0 (0x000750 - 0x000840)
class UJunoClusterUnionComponent : public UClusterUnionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
};

/// Class /Script/JunoGameNative.JunoComponent_HealthIndicator
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJunoComponent_HealthIndicator : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MaxHealth                                                   OFFSET(get<float>, {0xC4, 4, 0, 0})
	SMember(FVector)                                   AttachOffset                                                OFFSET(getStruct<T>, {0xC8, 24, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnServerPawnHealthChanged
	// void OnServerPawnHealthChanged();                                                                                        // [0xc34cb08] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnRep_MaxHealth
	// void OnRep_MaxHealth();                                                                                                  // [0xc34cab0] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoComponent_HealthIndicator.OnRep_Health
	// void OnRep_Health();                                                                                                     // [0xc34ca6c] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoComponent_Stamina
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UJunoComponent_Stamina : public UFortComponent_Energy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoComponent_Stamina.SetMaxEnergy
	// void SetMaxEnergy(FScalableFloat NewMaxEnergy);                                                                          // [0xc34db10] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoComponent_Stamina.GetMaxEnergy
	// FScalableFloat GetMaxEnergy();                                                                                           // [0xc34b0c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoConnectableActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoConnectableActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoConnectedActorLevelPlayspaceComponent
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UJunoConnectedActorLevelPlayspaceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/JunoGameNative.JunoControlChannelActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoControlChannelActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoControlChannelActorInterface.GetSubscribingChannelInfo
	// FJunoActionChannelInfo GetSubscribingChannelInfo();                                                                      // [0x1340978] Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoControlChannelActorInterface.GetBroadcastingChannelInfo
	// FJunoActionChannelInfo GetBroadcastingChannelInfo();                                                                     // [0x1340978] Event|Public|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoControlChannelActorInterface.ChangeSubscribingChannelTag
	// void ChangeSubscribingChannelTag(int32_t NewChannelIndex, bool bIsOn);                                                   // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoControlChannelActorInterface.ChangeBroadcastingChannelTag
	// void ChangeBroadcastingChannelTag(int32_t NewChannelIndex, bool bIsOn);                                                  // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoControlChannelComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UJunoControlChannelComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FMulticastInlineDelegate)                  OnDetachedFromClusterUnion                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoChannelValueReceived                                  OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(class AJunoClusterUnionActor*)             SourceClusterUnionActor                                     OFFSET(get<T>, {0x128, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControlChannelComponent.UnsubscribeFromChannel
	// void UnsubscribeFromChannel(FGameplayTag InChannelTag);                                                                  // [0xc34dcd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.UnsubscribeFromAllChannels
	// void UnsubscribeFromAllChannels();                                                                                       // [0xc34dcb4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.SubscribeToChannel
	// void SubscribeToChannel(FGameplayTag InChannelTag, FDelegateProperty Delegate);                                          // [0xc34dbb4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.SetChannelValue
	// void SetChannelValue(FGameplayTag InChannelTag, float ChannelValue);                                                     // [0xc34da4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.OnRep_SourceClusterUnionActor
	// void OnRep_SourceClusterUnionActor();                                                                                    // [0xc34caf4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.OnDetached
	// void OnDetached();                                                                                                       // [0xc34c904] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.OnAttached
	// void OnAttached(FGraphIslandHandle& IslandHandle);                                                                       // [0xc34c478] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.GetCombinedChannelValue
	// float GetCombinedChannelValue(FGameplayTagContainer InChannelTagContainer);                                              // [0xc34aff0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.GetChannelValue
	// float GetChannelValue(FGameplayTag InChannelTag);                                                                        // [0xc34af60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControlChannelComponent.ChangeChannelSubscription
	// void ChangeChannelSubscription(FGameplayTag OldChannel, FGameplayTag NewChannel);                                        // [0xc34ac34] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_AFKHandler
/// Size: 0x0070 (0x0000D0 - 0x000140)
class UJunoControllerComponent_AFKHandler : public UFortControllerComponent_AFKHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UDataTable*)                         AFKEventsDataTable                                          OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_AFKHandler.OnPlayerStateRemoved
	// void OnPlayerStateRemoved(class APlayerState* RemovedPlayerState);                                                       // [0x64c3a10] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoControllerComponent_AFKHandler.OnPlayerStateAdded
	// void OnPlayerStateAdded(class APlayerState* AddedPlayerState);                                                           // [0x64c3a10] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_Indicators
/// Size: 0x0100 (0x0000A8 - 0x0001A8)
class UJunoControllerComponent_Indicators : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(float)                                     ShowDistance                                                OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     HideDistance                                                OFFSET(get<float>, {0xBC, 4, 0, 0})
	CMember(TSet<AFortPawn*>)                          VisiblePawnsCache                                           OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TArray<FJunoIndicatorVisibilityQueryEntry>) QueryToPawnEntries                                         OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(float)                                     BuildingHealthBarDisplayMaxDuration                         OFFSET(get<float>, {0x190, 4, 0, 0})
	CMember(TWeakObjectPtr<ABuildingActor*>)           JunoBuildingActor                                           OFFSET(get<T>, {0x194, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_Indicators.OnDeathPlayEffects
	// void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0xc34c518] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent_Indicators.OnAnyFortPawnDestroyed
	// void OnAnyFortPawnDestroyed(class AActor* FortPawnActor);                                                                // [0xc34c3f8] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_MapMarker
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoControllerComponent_MapMarker : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_MapMarker.ServerCustomizeMarker
	// void ServerCustomizeMarker(FGuid Guid, FJunoMarker NewMarker, FText DisplayName);                                        // [0xc34d8fc] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent_MapMarker.ClientRequestCustomization
	// void ClientRequestCustomization(FGuid Guid, FJunoMarker NewMarker, FText DisplayName, EJunoBiome Biome);                 // [0xc34ad1c] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_SocialSim
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UJunoControllerComponent_SocialSim : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.Server_TriggerVillageSelfDestruct
	// void Server_TriggerVillageSelfDestruct();                                                                                // [0x8998b60] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.Server_TriggerAwesomeLevelChange
	// void Server_TriggerAwesomeLevelChange(class AFortPlayerController* TriggeringPlayer);                                    // [0x92441e0] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_SocialSim.OnJunoPlayerPersistenceDataAvailable
	// void OnJunoPlayerPersistenceDataAvailable(FUniqueNetIdRepl& UniquePlayerId, class UJunoPlayerPersistenceComponent* PlayerPersistenceComponent); // [0xc34c918] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCraftingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCraftingAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoCraftingGameplayAbility
/// Size: 0x0000 (0x000B48 - 0x000B48)
class UJunoCraftingGameplayAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2888;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryComponent
/// Size: 0x0270 (0x0000A0 - 0x000310)
class UJunoInventoryComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FJunoInventoryConfig)                      InventoryConfig                                             OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	SMember(FName)                                     InventoryLootTierGroup                                      OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bShouldDropContentsOnOwnerDeath                             OFFSET(get<bool>, {0xFC, 1, 0, 0})
	DMember(float)                                     LootTossSpeed                                               OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     LootTossAngle                                               OFFSET(get<float>, {0x104, 4, 0, 0})
	SMember(FVector)                                   LootTossOffset                                              OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FJunoInventoryHandle)                      InventoryHandle                                             OFFSET(getStruct<T>, {0x120, 36, 0, 0})
	CMember(TMap<FGameplayTag, FJunoItemSlotGroup>)    ItemSlotGroups                                              OFFSET(get<T>, {0x148, 80, 0, 0})
	SMember(FJunoReplicatedItemSlotList)               ReplicatedItemSlotData                                      OFFSET(getStruct<T>, {0x198, 296, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInventoryChangedEvent                                     OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FJunoSelectedSlotData>)             SelectedItemGroupSlots                                      OFFSET(get<T>, {0x2D8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInventoryComponent.UseOffHandDurability
	// void UseOffHandDurability(float DurabilityPerUse);                                                                       // [0xc3fd6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerTakeItem
	// void ServerTakeItem(FJunoTakeItemRequest Request);                                                                       // [0xc3fc844] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerMoveAllItemsPossible
	// void ServerMoveAllItemsPossible(class UJunoInventoryComponent* SourceInventoryComponent, class UJunoInventoryComponent* DestinationInventoryComponent, TArray<FGameplayTag> SourceGroupTags, TArray<FGameplayTag> DestinationGroupTags); // [0xc3fc5dc] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerMoveAllItemsOfType
	// void ServerMoveAllItemsOfType(class UJunoInventoryComponent* SourceInventoryComponent, class UJunoInventoryComponent* DestinationInventoryComponent, TArray<FGameplayTag> SourceGroupTags, TArray<FGameplayTag> DestinationGroupTags, class UItemDefinitionBase* ItemType); // [0xc3fc42c] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerMoveAllItemsAlreadyInDestination
	// void ServerMoveAllItemsAlreadyInDestination(class UJunoInventoryComponent* SourceInventoryComponent, class UJunoInventoryComponent* DestinationInventoryComponent, TArray<FGameplayTag> SourceGroupTags, TArray<FGameplayTag> DestinationGroupTags); // [0xc3fc2c0] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerMergeAllItemsPossible
	// void ServerMergeAllItemsPossible(class AActor* TargetInventoryActor);                                                    // [0x6cc408c] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerAttemptItemTransfer
	// void ServerAttemptItemTransfer(FJunoItemTransferRequest Request);                                                        // [0xc3fc0c4] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.ServerAttemptItemMerge
	// void ServerAttemptItemMerge(FJunoItemSlot SourceItemSlot, FJunoItemSlot DestinationItemSlot, class AActor* SourceInventoryActor, class AActor* DestinationInventoryActor, int32_t Count); // [0xc3fbe64] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoInventoryComponent.RemoveItemFromInventory
	// bool RemoveItemFromInventory(FGuid ItemGuid, int32_t Count);                                                             // [0xc3fbc68] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.OnRep_InventoryHandle
	// void OnRep_InventoryHandle();                                                                                            // [0xc3fbb08] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoInventoryComponent.OnOwningBuildingActorKilled
	// void OnOwningBuildingActorKilled(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0x8f3b060] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetOffhandItem
	// class UFortItem* GetOffhandItem();                                                                                       // [0xc3fb3b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetInventoryItemsInGroups
	// TArray<UFortWorldItem*> GetInventoryItemsInGroups(TArray<FGameplayTag>& Groups);                                         // [0xc3fb00c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoInventoryComponent.GetInventoryItems
	// TArray<UFortWorldItem*> GetInventoryItems();                                                                             // [0xc3fafcc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoInventoryComponent.AddItemToInventory
	// class UFortItem* AddItemToInventory(class UFortItemDefinition* ItemDefinition, int32_t Count);                           // [0xc3f9d84] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCraftingInventoryComponent
/// Size: 0x0000 (0x000310 - 0x000310)
class UJunoCraftingInventoryComponent : public UJunoInventoryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Script/JunoGameNative.JunoCraftingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCraftingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCraftingLibrary.MakePerPlayerCraftingKey
	// FCraftingMultiKey MakePerPlayerCraftingKey(class AActor* Instigator);                                                    // [0xc34fa70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoCraftingLibrary.FindRecipesCraftableFrom
	// TArray<FName> FindRecipesCraftableFrom(class UObject* WorldContextObject, TArray<FItemAndCount>& Ingredients);           // [0xc34f320] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoDeleteActionsReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoDeleteActionsReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoDeltasSaveHandler
/// Size: 0x00F0 (0x000028 - 0x000118)
class UJunoDeltasSaveHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(class UDeltaFileSaveHandler*)              SaveHandler                                                 OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDeprecatedPersistentClasses
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoDeprecatedPersistentClasses : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           DeprecatedPersistentClassPaths                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDestructionBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDestructionBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.SetGeometryCollectionSourceFromAtomModel
	// void SetGeometryCollectionSourceFromAtomModel(class UGeometryCollection* GeometryCollection, class UAtomModel* AtomModel, FName SelectionSetFilter); // [0xc34fe98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.SetGeometryCollectionMaterialForInstancedMeshes
	// void SetGeometryCollectionMaterialForInstancedMeshes(class UGeometryCollection* GeometryCollection, class UMaterialInterface* OpaqueMaterial, class UMaterialInterface* TransparentMaterial, class UMaterialInterface* GlitterMaterial, class UMaterialInterface* OpalMaterial, class UMaterialInterface* InternalGlowMaterial); // [0xc34fcfc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoDestructionBlueprintLibrary.GetGeometryCollectionSource
	// TArray<FGeometryCollectionSource> GetGeometryCollectionSource(class UAtomModel* AtomModel, FName SelectionSetFilter);    // [0xc34f624] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoDumpWorldPersistentContents
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDumpWorldPersistentContents : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoEncounterCheatInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEncounterCheatInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoEssenceLevelComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoEssenceLevelComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoEssenceLevelComponent.OnEquip
	// void OnEquip(class AFortWeapon* Weapon);                                                                                 // [0xc34faf0] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoEventLimiterInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEventLimiterInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoEventRouterLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoEventRouterLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoEventRouterLibrary.GetGameplayEventRouter
	// class UGameplayEventRouterComponent* GetGameplayEventRouter(class AActor* ContextActor);                                 // [0xc34f5a4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoExampleMacroGenerated_CheatTestSetup
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoExampleMacroGenerated_CheatTestSetup : public UPFWCheatTestSetup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UJunoExample_InGameClass*)           InGameClass                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoExampleMacroGenerated_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoExampleMacroGenerated_Container : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoExample_CheatTestSetup
/// Size: 0x0048 (0x000030 - 0x000078)
class UJunoExample_CheatTestSetup : public UPFWCheatTestSetup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UJunoExample_InGameClass*)           InGameClass                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoExample_Container
/// Size: 0x0008 (0x0001E0 - 0x0001E8)
class UJunoExample_Container : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Script/JunoGameNative.JunoExample_InGameClass
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoExample_InGameClass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   PersistentData                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   TransientData                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoExample_Module
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoExample_Module : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoFilteredEventContextCollector
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFilteredEventContextCollector : public UFilteredEventContextCollectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoFogOfWarPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoFogOfWarPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFreeBuildBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly(class UObject* WorldContextObject);                                                            // [0xc34f9d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsItemSpawnerEnabled
	// bool IsItemSpawnerEnabled(class UObject* WorldContextObject);                                                            // [0xc34f920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsFreeBuildEnabled
	// bool IsFreeBuildEnabled(class UObject* WorldContextObject);                                                              // [0xc34f8a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.IsFreeBuildCostFilteringEnabled
	// bool IsFreeBuildCostFilteringEnabled(class UObject* WorldContextObject);                                                 // [0xc34f800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.GetFreeBuildSpawnableItems
	// TArray<FName> GetFreeBuildSpawnableItems(class UObject* WorldContextObject);                                             // [0xc34f510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildBlueprintLibrary.GetFreeBuildSpawnableItemDefinition
	// class UFortItemDefinition* GetFreeBuildSpawnableItemDefinition(class UObject* WorldContextObject, FName& Name);          // [0xc34f440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoFreeBuildComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoFreeBuildComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FDataRegistryType)                         SpawnableItemsRegistryType                                  OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bIsFreeBuildEnabled                                         OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(bool)                                      bIsItemSpawnerEnabled                                       OFFSET(get<bool>, {0xA5, 1, 0, 0})
	DMember(bool)                                      bIsPlayerAllowedToFly                                       OFFSET(get<bool>, {0xA6, 1, 0, 0})
	DMember(bool)                                      bIsFreeBuildCostFilteringEnabled                            OFFSET(get<bool>, {0xA7, 1, 0, 0})
	DMember(bool)                                      bWasFreeBuildEverEnabled                                    OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.WasFreeBuildEverEnabled
	// bool WasFreeBuildEverEnabled();                                                                                          // [0xafa59b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_WasFreeBuildEverEnabled
	// void OnRep_WasFreeBuildEverEnabled();                                                                                    // [0xc34fce8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_IsFreeBuildEnabled
	// void OnRep_IsFreeBuildEnabled();                                                                                         // [0xc34fcb4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnRep_AnyFreeBuildFlag
	// void OnRep_AnyFreeBuildFlag();                                                                                           // [0xc34fca0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xc34fb70] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly();                                                                                             // [0xc34fa50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsItemSpawnerEnabled
	// bool IsItemSpawnerEnabled();                                                                                             // [0xc34f9b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsFreeBuildEnabled
	// bool IsFreeBuildEnabled();                                                                                               // [0xb7155e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.IsFreeBuildCostFilteringEnabled
	// bool IsFreeBuildCostFilteringEnabled();                                                                                  // [0xc34f880] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.GetSpawnableItems
	// TArray<FName> GetSpawnableItems();                                                                                       // [0xc34f7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.EnableFreeBuild
	// void EnableFreeBuild();                                                                                                  // [0xc34f30c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoFreeBuildComponent.DisableFreeBuild
	// void DisableFreeBuild();                                                                                                 // [0xc34f2f8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBasePFWPersistenceFeatureData
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoBasePFWPersistenceFeatureData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bDirty                                                      OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBasePFWPersistenceFeatureData.OnPersistentDataModified
	// void OnPersistentDataModified();                                                                                         // [0x222c62c] RequiredAPI|Native|Protected|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoFreeBuildPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoFreeBuildSaveData)                    FreeBuildSaveData                                           OFFSET(getStruct<T>, {0x50, 2, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoFreeBuildPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FJunoFreeBuildSaveData)                    FreeBuildSaveData                                           OFFSET(getStruct<T>, {0x2E0, 2, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoFreeBuildPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoFreeBuildPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_WorldReactionsManager
/// Size: 0x0050 (0x000230 - 0x000280)
class UJunoGameStateComponent_WorldReactionsManager : public UFortGameStateComponent_WorldReactionsManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /Script/JunoGameNative.JunoGameStateSettings
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoGameStateSettings : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UJunoRuntimeSettings*)               PreOverrideRuntimeSettings                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRuntimeSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UJunoRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bPawnsUseProbeCollision                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bCharacterBasedMovementIgnorePhysicsBase                    OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bCharacterStayBasedInAir                                    OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bBuoyancyEnabled                                            OFFSET(get<bool>, {0x33, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoGameStateTemperatureComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UJunoGameStateTemperatureComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TMap<FGameplayTag, FScalableFloat>)        TemperatureToFloatMap                                       OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FScalableFloat>)        TemperatureThresholdsMap                                    OFFSET(get<T>, {0xF0, 80, 0, 0})
	SMember(FFloatRange)                               TemperatureRange                                            OFFSET(getStruct<T>, {0x140, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.TemperatureToFloat
	// float TemperatureToFloat(FGameplayTag& Temperature);                                                                     // [0xc352a58] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetTemperatureRanges
	// TArray<FTemperatureRange> GetTemperatureRanges();                                                                        // [0xc351de4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetMinimumTemperature
	// float GetMinimumTemperature();                                                                                           // [0xc351dc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateTemperatureComponent.GetMaximumTemperature
	// float GetMaximumTemperature();                                                                                           // [0xc351da4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateWeatherComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoGameStateWeatherComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UDataTable*)                         SeasonTable                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UClass*)                             LocalizedWeatherStateSubclass                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UJunoPlayspacePersistenceFeatureHelper*) WeatherPersistenceFeatureHelper                         OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.TransitionWeatherNowTo
	// void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase, FJunoWeatherLocation OptionalLocation); // [0xc352c78] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.TransitionWeatherNow
	// void TransitionWeatherNow(FName OptionalLocation);                                                                       // [0xc352b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.SetAutoTransitioning
	// void SetAutoTransitioning(bool bAutoTransitionWeather);                                                                  // [0xc352480] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.OnWeatherPhaseChanged
	// void OnWeatherPhaseChanged(class UJunoWeatherStateComponent* WeatherState);                                              // [0x64c3a10] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.OnNextWeatherQueueChanged
	// void OnNextWeatherQueueChanged(class UJunoWeatherStateComponent* WeatherState);                                          // [0x64c3a10] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.IsAutoTransitioning
	// bool IsAutoTransitioning();                                                                                              // [0x85e48d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.HandleWeatherStatesSetup
	// void HandleWeatherStatesSetup(TArray<UJunoWeatherStateComponent*>& WeatherStates);                                       // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.GetWeatherStates
	// TArray<UJunoWeatherStateComponent*> GetWeatherStates();                                                                  // [0xc351e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.ForceWeatherState
	// void ForceWeatherState(FName NewWeatherType, FName OptionalLocation);                                                    // [0xc351b3c] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGameStateWeatherComponent.FindWeatherState
	// class UJunoWeatherStateComponent* FindWeatherState(FJunoWeatherLocation& Location);                                      // [0xc351a20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoGeneratePersistenceAssetsReportCommandlet
/// Size: 0x0000 (0x000080 - 0x000080)
class UJunoGeneratePersistenceAssetsReportCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent
/// Size: 0x0180 (0x0000A0 - 0x000220)
class UJunoGeometryCollectionAssemblerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	DMember(float)                                     AssemblyRatioInterpSpeed                                    OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(EJunoGeometryCollectionAssemblerDurationType) DurationType                                             OFFSET(get<T>, {0xA4, 4, 0, 0})
	DMember(float)                                     LayerHeight                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   LayerCount                                                  OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	SMember(FScalableFloat)                            TimeToAssemble                                              OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            SingleGeometryTimeToAssemble                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            DisassembledZDistance                                       OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            DisassembledZDistanceRandomRatio                            OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            DisassembledRotationAmount                                  OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	DMember(bool)                                      bFreeMemoryWhenNotAnimating                                 OFFSET(get<bool>, {0x178, 1, 0, 0})
	CMember(TMap<UGeometryCollectionComponent*, FJunoGeometryCollectionAssemblerGCInfo>) GeometryCollectionInfos   OFFSET(get<T>, {0x180, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAssemblyVisualsAnimationStart                             OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAssemblyVisualsAnimationUpdated                           OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAssemblyVisualsAnimationEnd                               OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FJunoGeometryCollectionAssemblerTargetData) TargetData                                                 OFFSET(getStruct<T>, {0x200, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.SetFreeMemoryWhenNotAnimating
	// void SetFreeMemoryWhenNotAnimating(bool bValue);                                                                         // [0xc352500] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.OnRep_TargetData
	// void OnRep_TargetData();                                                                                                 // [0xc352020] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsUpdating
	// bool IsUpdating();                                                                                                       // [0x692ed50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsDisassembling
	// bool IsDisassembling();                                                                                                  // [0xc351fc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsDisassembled
	// bool IsDisassembled();                                                                                                   // [0xc351fa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsAssembling
	// bool IsAssembling();                                                                                                     // [0xc351f84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsAssembled
	// bool IsAssembled();                                                                                                      // [0xc351f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.IsActorAssembled
	// bool IsActorAssembled(class AActor* Actor);                                                                              // [0xc351e8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGeometryCollectionAssemblerComponent.GetAssemblyRatio
	// float GetAssemblyRatio();                                                                                                // [0x67d1294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingBCOInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGuidedBuildingBCOInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingBCOInterface.SetParentGuidedBuilding
	// void SetParentGuidedBuilding(class AJunoGuidedBuildingActor* OurGuidedBuild);                                            // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGuidedBuildingInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingInterface.OnSlottedIntoGuidedBuild
	// void OnSlottedIntoGuidedBuild(class AJunoGuidedBuildingActor* GBA, FJunoGuidedBuildingData& SlotData);                   // [0xc352040] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoInputMappingComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoInputMappingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UJunoInputMappingComponentData*)     Data                                                        OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInputMappingComponent.PushContext
	// void PushContext(class UJunoInputControllerComponent* JunoInputController);                                              // [0xc352370] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputMappingComponent.PopContext
	// void PopContext(class UJunoInputControllerComponent* JunoInputController);                                               // [0xc3522e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputMappingComponent.GetEventTag
	// FGameplayTag GetEventTag();                                                                                              // [0xc351d78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoInputMappingComponentData
/// Size: 0x0028 (0x000030 - 0x000058)
class UJunoInputMappingComponentData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FJunoInputMapping>)                 DesiredInputMappings                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FJunoInputAlternateDisplayText>)    DisplayTexts                                                OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	DMember(bool)                                      bPopDefaultContext                                          OFFSET(get<bool>, {0x54, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInputMappingComponentData.GetEventTag
	// FGameplayTag GetEventTag();                                                                                              // [0x305810c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoInputQueueComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UJunoInputQueueComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoInputQueueComponent.StopQueueingInput
	// void StopQueueingInput(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xc3528dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.StartQueueingInput
	// void StartQueueingInput(int32_t MontageInstanecID, class UGameplayAbility* ability, bool bQueueMantisInputs, FGameplayTagContainer EventTags); // [0xc352750] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.SetInterruptible
	// void SetInterruptible(int32_t MontageInstanceID, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xc3525e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.ResetBlockingTags
	// void ResetBlockingTags(int32_t MontageInstanceID);                                                                       // [0xc352400] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.OverrideBlockingTags
	// void OverrideBlockingTags(int32_t MontageInstanceID, class UGameplayAbility* ability, FGameplayTagContainer AbilityTagsToAdd, FGameplayTagContainer AbilityTagsToRemove); // [0xc352130] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoInputQueueComponent.FireQueuedInputs
	// void FireQueuedInputs(int32_t MontageInstanceID);                                                                        // [0xc351abc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoInventoryPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoInventoryPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoInventoryUIPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoInventoryUIPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoKnowledgeBundle
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoKnowledgeBundle : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UDataTable*)                         RecipeTable                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FText)                                     BundleName                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FText)                                     BundleDescription                                           OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  BundleImage                                                 OFFSET(get<T>, {0x58, 32, 0, 0})
	SMember(FGameplayTag)                              BundleIdentifier                                            OFFSET(getStruct<T>, {0x78, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoKnowledgeCraftingComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoKnowledgeCraftingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<UCraftingObjectComponent*>) CachedCraftingObjectComponent                               OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoKnowledgeCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xc35e55c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoKnowledgeCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                                // [0xc35e3f8] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureDataActor
/// Size: 0x00F0 (0x0002D0 - 0x0003C0)
class AJunoKnowledgePersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FJunoKnowledgeSaveData)                    KnowledgeSaveData                                           OFFSET(getStruct<T>, {0x2D8, 232, 0, 0})
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoKnowledgePersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoKnowledgePersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoLevelProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLevelProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoLifeCycleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLifeCycleInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLocalEnvironmentComponentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface.GetCaveId
	// FGuid GetCaveId();                                                                                                       // [0xc35e320] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoLocalEnvironmentComponentInterface.GetBiome
	// FJunoBiomeInfoQueryResult GetBiome();                                                                                    // [0xc35e248] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoLocalEnvironmentActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLocalEnvironmentActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoLocalEnvironmentActorInterface.GetBiomeInfo
	// bool GetBiomeInfo(FJunoBiomeInfoQueryResult& OutHabitat);                                                                // [0xc35e27c] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoLocalEnvironmentActorInterface.GetBiome
	// bool GetBiome(EJunoBiome& OutBiome);                                                                                     // [0xc35e1ac] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoLWMCaveEventDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoLWMCaveEventDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.DisplayableTile
/// Size: 0x0018 (0x000028 - 0x000040)
class UDisplayableTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   TileId                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   ClearedPixelCount                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(class UTexture2D*)                         FogMask                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMapManagerComponent
/// Size: 0x0180 (0x0000F8 - 0x000278)
class UJunoMapManagerComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	DMember(float)                                     ExploredRadius                                              OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FMapExplorationData)                       MapExplorationData                                          OFFSET(getStruct<T>, {0x118, 288, 0, 0})
	CMember(TArray<class UDisplayableTile*>)           DisplayableTiles                                            OFFSET(get<T>, {0x238, 16, 0, 0})
	CMember(TArray<FJunoTileInfo>)                     LoadedTiles                                                 OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(class UTexture2D*)                         ClearedFogMask                                              OFFSET(get<T>, {0x258, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoMapManagerComponent.GetFOWForTile
	// class UTexture2D* GetFOWForTile(int32_t TileId);                                                                         // [0xc35e36c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildLimitGetter
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildLimitGetter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoMarkersLimitPool
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoMarkersLimitPool : public UJunoBuildLimitGetter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     PhysicalMarkerSettingName                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoMarkersPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoMarkersPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoMerchantDatabase
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoMerchantDatabase : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UDataTable*)                         MerchantSalesDataTable                                      OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMeshNetworkWeatherComponent
/// Size: 0x0058 (0x000150 - 0x0001A8)
class UJunoMeshNetworkWeatherComponent : public UMeshNetworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TArray<FJunoSynchronizedWeatherState>)     SynchronizedWeatherStates                                   OFFSET(get<T>, {0x150, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoMeshNetworkWeatherComponent.OnRep_OnSynchronizedWeatherStates
	// void OnRep_OnSynchronizedWeatherStates();                                                                                // [0xc35e734] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoMoodReactionConfigMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoMoodReactionConfigMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FDataTableRowHandle>)   MoodReactionConfigMap                                       OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMovementMode_ELTacSprint
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
class UJunoMovementMode_ELTacSprint : public UFortMovementMode_ELTacSprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
};

/// Class /Script/JunoGameNative.JunoMultiCraftingComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UJunoMultiCraftingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FMulticastInlineDelegate)                  OnMultiCraftingFinished                                     OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMultiCraftingBlocked                                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     TimeToStartProcess                                          OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(TWeakObjectPtr<UCraftingObjectComponent*>) CachedCraftingObjectComponent                               OFFSET(get<T>, {0xE4, 8, 0, 0})
	CMember(TWeakObjectPtr<UJunoInventoryComponent*>)  CachedInventoryComponent                                    OFFSET(get<T>, {0xEC, 8, 0, 0})
	CMember(TArray<FCraftingProcess>)                  CraftingProcesses                                           OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(int64_t)                                   KeyGenerator                                                OFFSET(get<int64_t>, {0x110, 8, 0, 0})
	DMember(bool)                                      bIsCraftingBlocked                                          OFFSET(get<bool>, {0x128, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoMultiCraftingComponent.OnRep_CraftingProcesses
	// void OnRep_CraftingProcesses(TArray<FCraftingProcess>& PrevCraftingProcesses);                                           // [0xc35e69c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoMultiCraftingComponent.OnRep_CraftingBlocked
	// void OnRep_CraftingBlocked();                                                                                            // [0xc35e688] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoMultiCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xc35e604] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoMultiCraftingComponent.IsCraftingBlocked
	// bool IsCraftingBlocked();                                                                                                // [0xc35e544] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoMultiCraftingComponent.HandleInventoryDataRestored
	// void HandleInventoryDataRestored();                                                                                      // [0xc35e530] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoMultiCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                                // [0xc35e494] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoMultiCraftingComponent.GetCraftingProcesses
	// TArray<FCraftingProcess> GetCraftingProcesses();                                                                         // [0xc35e350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoMutator_AutoPickup
/// Size: 0x0020 (0x000338 - 0x000358)
class AJunoMutator_AutoPickup : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FGameplayTagContainer)                     DoNotAutoPickupGameplayTags                                 OFFSET(getStruct<T>, {0x338, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoNPCMoodReactionDatabase
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoNPCMoodReactionDatabase : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UJunoMoodReactionConfigMappings*)    MoodReactionConfigMappings                                  OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPassiveCraftingAnalyticsComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJunoPassiveCraftingAnalyticsComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FJunoPassiveCraftingItemAndCount)          AccumulatedItem                                             OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FJunoPassiveCraftingContributorAnalytics>) AccumulatedContributors                              OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FJunoPassiveCraftingItemAndCount>)  AccumulatedIngredients                                      OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FName)                                     Recipe                                                      OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	DMember(double)                                    AccumulatedCraftingTime                                     OFFSET(get<double>, {0xE0, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPassiveCraftingComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJunoPassiveCraftingComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnPassiveCraftingDone                                       OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAutoCraftingFormulaRowChanged                             OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bAutoSelectRecipeFromIngredients                            OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(TWeakObjectPtr<UJunoInventoryComponent*>)  CachedInventoryComponent                                    OFFSET(get<T>, {0xCC, 8, 0, 0})
	CMember(TWeakObjectPtr<UCraftingObjectComponent*>) CachedCraftingObjectComponent                               OFFSET(get<T>, {0xD4, 8, 0, 0})
	DMember(bool)                                      bIsAutoCrafting                                             OFFSET(get<bool>, {0xDC, 1, 0, 0})
	SMember(FName)                                     AutoCraftingFormulaRow                                      OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	SMember(FDateTime)                                 AutoCraftingStartDateTime                                   OFFSET(getStruct<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.SetAutoCraftRecipe
	// void SetAutoCraftRecipe(FName FormulaRow);                                                                               // [0xc3601e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.OnRep_AutoCraftingFormulaRow
	// void OnRep_AutoCraftingFormulaRow();                                                                                     // [0xc3600ec] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xc35e604] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.MulticastFireCraftingDone
	// void MulticastFireCraftingDone(EPassiveCraftingDoneReason Reason);                                                       // [0xc360068] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.IsAutoCrafting
	// bool IsAutoCrafting();                                                                                                   // [0xc360050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.HandleInventoryDataRestored
	// void HandleInventoryDataRestored();                                                                                      // [0xc36003c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.HandleCraftingStateChanged
	// void HandleCraftingStateChanged(FCraftingObjectStateChangedEvent& Event);                                                // [0xc35ffa0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.GetAutoCraftingFormulaRow
	// FName GetAutoCraftingFormulaRow();                                                                                       // [0x74fa294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.EnableAutoCrafting
	// void EnableAutoCrafting();                                                                                               // [0xc35fe84] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.DisableAutoCrafting
	// void DisableAutoCrafting();                                                                                              // [0xc35fe70] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveCraftingComponent.CalculateNumRemainingAutoCraft
	// int32_t CalculateNumRemainingAutoCraft(FName OptionalFormulaRow);                                                        // [0xc35fd1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UJunoPassiveResourcesGathererPawnComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FScalableFloat)                            JobEstimationTimeMultiplier                                 OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	CMember(class UDataTable*)                         GathererTable                                               OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPassiveResourceGeneratedOnPawnDelegate                    OFFSET(getStruct<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetTotalJobCompletionTimeInJunoHours
	// float GetTotalJobCompletionTimeInJunoHours();                                                                            // [0xc35ff78] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetRemainingJobCompletionTimeInJunoHours
	// float GetRemainingJobCompletionTimeInJunoHours();                                                                        // [0xc35ff50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastUsedGatheringActorItemId
	// FPrimaryAssetId GetLastUsedGatheringActorItemId();                                                                       // [0xc35ff24] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastUsedGatheringActorDisplayText
	// FText GetLastUsedGatheringActorDisplayText();                                                                            // [0xc35fee8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetLastGeneratedPercentage
	// float GetLastGeneratedPercentage();                                                                                      // [0xc35fec0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGathererPawnComponent.GetEstimatedTotalJobCompletionTimeInJunoDays
	// float GetEstimatedTotalJobCompletionTimeInJunoDays();                                                                    // [0xc35fe98] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGatheringWorldConditionSchema
/// Size: 0x0010 (0x000038 - 0x000048)
class UJunoPassiveResourcesGatheringWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class UJunoPassiveResourcesGatheringComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TArray<FPassiveResourcesGatheringRowRuntime>) ActiveGatheringRows                                      OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPassiveResourceGeneratedDelegate                          OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         MatchingRolesQuery                                          OFFSET(getStruct<T>, {0x110, 72, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               GatheringRows                                               OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SimulationConfigurationRow                                  OFFSET(getStruct<T>, {0x168, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent.RemoveGatheringRowOverride
	// void RemoveGatheringRowOverride();                                                                                       // [0xc3601c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPassiveResourcesGatheringComponent.OverrideGatheringRow
	// bool OverrideGatheringRow(FDataTableRowHandle& GatheringRow);                                                            // [0xc36012c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPawnComponent_MovementInputOverrides
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoPawnComponent_MovementInputOverrides : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPersistenceAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceDeveloperSettings
/// Size: 0x0040 (0x000030 - 0x000070)
class UJunoPersistenceDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EJunoWorldPersistenceType)                 PersistenceType                                             OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(EJunoWorldReadOnly)                        ReadOnly                                                    OFFSET(get<T>, {0x34, 4, 0, 0})
	DMember(bool)                                      bForceCreateNewEmptyWorldVersion                            OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FString)                                   DevSettings                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   WorldId                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   NewWorldAdventureSeed                                       OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(EJunoWorldSettingOptions_BuildMode)        Mode                                                        OFFSET(get<T>, {0x64, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      HostileCreatures                                            OFFSET(get<T>, {0x65, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      FriendlyCreatures                                           OFFSET(get<T>, {0x66, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      DropInventoryOnDeath                                        OFFSET(get<T>, {0x67, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      Hunger                                                      OFFSET(get<T>, {0x68, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      StaminaDrain                                                OFFSET(get<T>, {0x69, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      NPCs                                                        OFFSET(get<T>, {0x6A, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      Temperature                                                 OFFSET(get<T>, {0x6B, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      Death                                                       OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      FriendlyFire                                                OFFSET(get<T>, {0x6D, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_WorldSwitch)      PowerSystem                                                 OFFSET(get<T>, {0x6E, 1, 0, 0})
	CMember(EJunoWorldSettingOptions_RecruitedCreaturePermaDeath) RecruitedCreaturePermaDeath                      OFFSET(get<T>, {0x6F, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPersistenceFeatureData
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPersistenceFeatureData : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceFeaturesReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoPersistenceFeaturesReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceReportGenerator
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoPersistenceReportGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoGameNative.JunoPFWDefaultServiceWrapperSettings
/// Size: 0x0000 (0x000040 - 0x000040)
class UJunoPFWDefaultServiceWrapperSettings : public UPersistenceFrameworkServiceSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoPickup
/// Size: 0x0008 (0x0007B8 - 0x0007C0)
class AJunoPickup : public AFortPickupAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
	DMember(float)                                     MaxDropTossSpeed                                            OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     CombineLerpTimeModValue                                     OFFSET(get<float>, {0x7BC, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayerBuildingComponent
/// Size: 0x0518 (0x0000A8 - 0x0005C0)
class UJunoPlayerBuildingComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	SMember(FJunoSelectedSlot)                         ReplicatedSelectedSlot                                      OFFSET(getStruct<T>, {0xA8, 48, 0, 0})
	SMember(FJunoBuildingSlotDataArray)                BuildBars                                                   OFFSET(getStruct<T>, {0x110, 624, 0, 0})
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) LastGuidedBuildingActor                                     OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) ReplicatedLastGuidedBuildingActor                           OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     ReplicateLastGuidedActorTime                                OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     ReplicateBuildingMetricSpatialPrecision                     OFFSET(get<float>, {0x394, 4, 0, 0})
	CMember(class UClass*)                             DefaultBuildingCameraMode                                   OFFSET(get<T>, {0x3A8, 8, 0, 0})
	SMember(FJunoBuildingSessionInfo)                  BuildingSessionInfo                                         OFFSET(getStruct<T>, {0x3B0, 40, 0, 0})
	CMember(class UJunoInputMappingComponentData*)     InputMappingData                                            OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UInputAction*)                       NextSlot                                                    OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UInputAction*)                       PrevSlot                                                    OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UInputAction*)                       ExitBuildMode                                               OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UInputAction*)                       PinItem                                                     OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(TArray<class UInputAction*>)               BuildBarBindings                                            OFFSET(get<T>, {0x400, 16, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               DefaultRecipes                                              OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(TArray<FJunoBuildingMetricsClientPermissions>) ClientSpatialMetricsBuildingPermissions                 OFFSET(get<T>, {0x420, 16, 0, 0})
	SMember(FIntVector)                                LastKnownPawnSpatialCell                                    OFFSET(getStruct<T>, {0x430, 12, 0, 0})
	CMember(TSet<FJunoTrackedActorKey>)                DirtyCellLocations                                          OFFSET(get<T>, {0x440, 80, 0, 0})
	DMember(int32_t)                                   MaxRecentRecipes                                            OFFSET(get<int32_t>, {0x4A0, 4, 0, 0})
	SMember(FJunoMCPItemPlacementStatus)               MCPItemPlacementStatus                                      OFFSET(getStruct<T>, {0x4A4, 12, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  UINotificationIcon                                          OFFSET(get<T>, {0x4B0, 32, 0, 0})
	CMember(TArray<FJunoMCPItemPlacementStatusAlertData>) AlertData                                                OFFSET(get<T>, {0x4D0, 16, 0, 0})
	DMember(bool)                                      bHasSeenItemShopCallout                                     OFFSET(get<bool>, {0x4E0, 1, 0, 0})
	CMember(class UJunoAsyncAction_WaitForEventRouter*) WaitForEventRouterAction                                   OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.SetRecipeAtIndex
	// void SetRecipeAtIndex(int32_t InIndex, FName RecipeName, EJunoBuildModeType ModeType);                                   // [0xc36b954] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.SetLastGuidedBuildingActor
	// void SetLastGuidedBuildingActor(class AJunoGuidedBuildingActor* InLastGuidedBuildingActor);                              // [0xc36b8d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSetRecipeAtIndex
	// void ServerSetRecipeAtIndex(FJunoSlotIndex NewSlot, FName RecipeName);                                                   // [0xc36b750] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSetLastGuidedBuildingActor
	// void ServerSetLastGuidedBuildingActor(class AJunoGuidedBuildingActor* InLastActor);                                      // [0xa8a4838] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSetHasSeenItemShopCallout
	// void ServerSetHasSeenItemShopCallout(bool bHasSeen);                                                                     // [0x9045d44] Net|Native|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerSelectSlot
	// void ServerSelectSlot(FJunoSelectedSlot NewSlot);                                                                        // [0xc36b678] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.ServerEndGuidedBuild
	// void ServerEndGuidedBuild();                                                                                             // [0x8ab0994] RequiredAPI|Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicateLastGuidedActorTime
	// void OnRep_ReplicateLastGuidedActorTime();                                                                               // [0xc36b628] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicatedSelectedSlot
	// void OnRep_ReplicatedSelectedSlot();                                                                                     // [0xc36b650] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_ReplicatedLastGuidedBuildingActor
	// void OnRep_ReplicatedLastGuidedBuildingActor();                                                                          // [0xc36b63c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnRep_MCPItemPlacementStatus
	// void OnRep_MCPItemPlacementStatus();                                                                                     // [0xc36b5c4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnGuidedBuildingStageChanged
	// void OnGuidedBuildingStageChanged(FGuidedBuildingUpdate& StageUpdate);                                                   // [0xc36ada8] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.OnGuidedBuildDone
	// void OnGuidedBuildDone(FGuidedBuildingUpdate& StageUpdate);                                                              // [0xc36ad18] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.IsRecipePinned
	// bool IsRecipePinned(FName Recipe);                                                                                       // [0xc36abc0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.IsBuildModeEnabled
	// bool IsBuildModeEnabled();                                                                                               // [0x33f2000] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HasSelectedRemainingParts
	// bool HasSelectedRemainingParts();                                                                                        // [0xc36ab9c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HasSelectedMissingParts
	// bool HasSelectedMissingParts();                                                                                          // [0xc36ab78] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HandleBuildingMetricsThresholdChange
	// void HandleBuildingMetricsThresholdChange(FInt32Vector& Location);                                                       // [0xc36aa40] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.HandleBuildingMetricsActorCountChange
	// void HandleBuildingMetricsActorCountChange(FInt32Vector& Location, int32_t PreviousActorCount, int32_t NewActorCount);   // [0xc36a7bc] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetTotalAllowedMCPItemWorlds
	// int32_t GetTotalAllowedMCPItemWorlds();                                                                                  // [0xc36a710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetSlotData
	// FJunoBuildingSlotData GetSlotData(int32_t Index, EJunoBuildModeType InType);                                             // [0xc36a5e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetSelectedSlotIndex
	// int32_t GetSelectedSlotIndex(EJunoBuildModeType InType);                                                                 // [0xc36a554] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetRemainingWorldsForMCPItems
	// int32_t GetRemainingWorldsForMCPItems();                                                                                 // [0xc36a530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetRemainingPartsForSelectedRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsForSelectedRecipe();                                                 // [0xc36a4fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetMCPItemPlacedMessageTitle
	// FText GetMCPItemPlacedMessageTitle();                                                                                    // [0xc36a4bc] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetMCPItemPlacedMessageDescription
	// FText GetMCPItemPlacedMessageDescription();                                                                              // [0xac9b2bc] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastSelectedRecipe
	// FName GetLastSelectedRecipe();                                                                                           // [0xc36a4a4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastLoadedRecipeData
	// FJunoLastLoadedRecipeData GetLastLoadedRecipeData();                                                                     // [0xc36a48c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastLoadedRecipe
	// FName GetLastLoadedRecipe();                                                                                             // [0xc36a474] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastGuidedBuildingActor
	// class AJunoGuidedBuildingActor* GetLastGuidedBuildingActor();                                                            // [0xc36a450] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetLastFocusedRecipe
	// FName GetLastFocusedRecipe();                                                                                            // [0xc36a438] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetIsInBuildMode
	// bool GetIsInBuildMode();                                                                                                 // [0xc36a41c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetForcedRecipe
	// FName GetForcedRecipe();                                                                                                 // [0x74fa294] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetCurrentRecipe
	// FName GetCurrentRecipe();                                                                                                // [0xc36a3f4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.GetBuildModeType
	// EJunoBuildModeType GetBuildModeType();                                                                                   // [0x8d4cc98] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.EnterGuidedBuilding
	// void EnterGuidedBuilding(class AJunoGuidedBuildingActor* InLastGuidedBuildingActor);                                     // [0xc36a374] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.EnterBuildingModeAndSelectIndex
	// void EnterBuildingModeAndSelectIndex(int32_t Index, EJunoBuildModeType InType);                                          // [0xc36a284] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.CanPlaceRecipe
	// bool CanPlaceRecipe(FName RecipeToPlace);                                                                                // [0xc36a134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.CanPlaceMCPItems
	// bool CanPlaceMCPItems();                                                                                                 // [0xc36a110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerBuildingComponent.AttempEndGuidedBuild
	// void AttempEndGuidedBuild();                                                                                             // [0xc36a04c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPlayerCampPawnComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UJunoPlayerCampPawnComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerCampPawnComponent.HandleAwesomeLevelChanged
	// void HandleAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                                 // [0xc36a72c] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics
/// Size: 0x0208 (0x0000A0 - 0x0002A8)
class UJunoPlayerControllerComponent_SessionAnalytics : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	DMember(double)                                    JunoPlaySessionStartedTime                                  OFFSET(get<double>, {0xA8, 8, 0, 0})
	SMember(FGuid)                                     JunoPlaySessionID                                           OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             RecipesUnlockedDuringSession                                OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     AccumulatedDistanceTraveled                                 OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     LastIdleCheckTime                                           OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     AccumulatedIdleTime                                         OFFSET(get<float>, {0xD8, 4, 0, 0})
	SMember(FVector)                                   LastPlayerPawnLocation                                      OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	SMember(FString)                                   SavedDisconnectReason                                       OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FGameplayEventListenerHandle)              GracefulShutdownInitiatedEventHandle                        OFFSET(getStruct<T>, {0x158, 28, 0, 0})
	DMember(bool)                                      bGracefulShutdownStarted                                    OFFSET(get<bool>, {0x174, 1, 0, 0})
	DMember(int32_t)                                   GracefulShutdownExitCode                                    OFFSET(get<int32_t>, {0x178, 4, 0, 0})
	DMember(int32_t)                                   GracefulShutdownMaxTime                                     OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
	SMember(FGameplayEventListenerHandle)              PawnEliminatedEventHandle                                   OFFSET(getStruct<T>, {0x1D0, 28, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.ResetHeartbeatStats
	// void ResetHeartbeatStats();                                                                                              // [0xc36b664] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnRep_JunoPlaySessionID
	// void OnRep_JunoPlaySessionID();                                                                                          // [0xc36b5b0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnPlayerStatsUpdateTimer
	// void OnPlayerStatsUpdateTimer();                                                                                         // [0xc36b59c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnPlayerDisconnecting
	// void OnPlayerDisconnecting(class AFortPlayerController* FortPlayerController, FString DevReason, bool bGracefulDisconnect); // [0xc36ae4c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.OnHeartbeatTimer
	// void OnHeartbeatTimer();                                                                                                 // [0xc36ae38] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.HandleInventoryDataRestored
	// void HandleInventoryDataRestored();                                                                                      // [0xc36ab64] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerControllerComponent_SessionAnalytics.HandleGracefulShutdownInitiated
	// void HandleGracefulShutdownInitiated(FFortGracefulShutdownInitiatedEvent& Event);                                        // [0xc36aac8] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceContainerGeneric
/// Size: 0x0078 (0x0001E0 - 0x000258)
class UJunoPlayerPersistenceContainerGeneric : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FPersistenceFrameworkPlayerInfo)           PlayerInfo                                                  OFFSET(getStruct<T>, {0x1E0, 32, 0, 0})
	SMember(FUniqueNetIdRepl)                          PlayerNetId                                                 OFFSET(getStruct<T>, {0x200, 48, 0, 0})
	SMember(FString)                                   SaveFrameworkResourceId                                     OFFSET(getStruct<T>, {0x230, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayerPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantFeatureData
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoPlayspaceAccountantFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FJunoPlayspaceAccountantSaveData)          JunoPlayspaceAccountantSaveData                             OFFSET(getStruct<T>, {0x48, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantFeatureDataActor
/// Size: 0x0058 (0x0002D0 - 0x000328)
class AJunoPlayspaceAccountantFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TMap<FName, int32_t>)                      PersistentValueTable                                        OFFSET(get<T>, {0x2D8, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayspaceAccountantPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPlayspaceAccountantPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning
/// Size: 0x0040 (0x000118 - 0x000158)
class UJunoPlayspaceControllerComponent_PlayerSpawning : public UPlayspaceControllerComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FVector)                                   PlayspaceSearchBoxExtent                                    OFFSET(getStruct<T>, {0x130, 24, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.StartRespawn
	// void StartRespawn();                                                                                                     // [0xc36e5bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.ServerQueuePlayerForRespawn
	// void ServerQueuePlayerForRespawn();                                                                                      // [0xc36e3f0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.OnPawnPosessed
	// void OnPawnPosessed(class AFortPawn* NewPawn);                                                                           // [0xc36df7c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayspaceControllerComponent_PlayerSpawning.IsAllowedToShowRespawnUI
	// bool IsAllowedToShowRespawnUI();                                                                                         // [0xc36df4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPlayspaceIndexPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPlayspaceIndexPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspacePersistenceFeatureHelper
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoPlayspacePersistenceFeatureHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UClass*)                             PersistenceFeatureDataClass                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   PersistenceFeatureData                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoQueryContext_Camp_Center
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQueryContext_Camp_Center : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoQueryContext_Camp_Extents
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoQueryContext_Camp_Extents : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoQueryTest_IsInCamp
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UJunoQueryTest_IsInCamp : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(class UClass*)                             Context                                                     OFFSET(get<T>, {0x1F8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoQuickBuildSelectionData
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoQuickBuildSelectionData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   CurrentlySelectedIndex                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FName>)                             QuickBuildRecipes                                           OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRainCapture
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AJunoRainCapture : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(class USceneCaptureComponent2D*)           SceneCaptureComponent2D                                     OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FName)                                     RainOccluderSceneCaptureLocationName                        OFFSET(getStruct<T>, {0x2A0, 4, 0, 0})
	SMember(FVector)                                   RainOccluderPositionOffset                                  OFFSET(getStruct<T>, {0x2A8, 24, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRainCaptureSubsystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoRainCaptureSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FSoftObjectPath)                           SubsystemDataAssetPath                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(class UJunoRainCaptureSubsystemData*)      SubsystemData                                               OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class AJunoRainCapture*)                   RainCaptureInstance                                         OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRainCaptureSubsystemData
/// Size: 0x0038 (0x000030 - 0x000068)
class UJunoRainCaptureSubsystemData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             TextureTarget                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     WeatherParameterName                                        OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	SMember(FName)                                     RainOccluderSceneCaptureLocationName                        OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	SMember(FVector)                                   RainOccluderPositionOffset                                  OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     UpdateDistanceThreshold                                     OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     UpdateTimeThreshold                                         OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRainOccluderComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoRainOccluderComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoReportHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoReportHandler : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspacePersistenceComponent
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UJunoPlayspacePersistenceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<class UClass*>)                     RequiredPersistenceFeatureDataClasses                       OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FJunoPersistenceFeature>)           PersistenceFeatures                                         OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoRootPlayspacePersistenceComponent
/// Size: 0x0000 (0x000120 - 0x000120)
class UJunoRootPlayspacePersistenceComponent : public UJunoPlayspacePersistenceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/JunoGameNative.JunoSmartObjectComponent
/// Size: 0x0010 (0x000320 - 0x000330)
class UJunoSmartObjectComponent : public UFortSmartObjectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UCurveFloat*)                        LootTierPercentageToSlotPickingModifier                     OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoSyncTimeOfDayComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoSyncTimeOfDayComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoSyncTimeOfDayComponent.SetTimeOfDaySyncEnabled
	// void SetTimeOfDaySyncEnabled(bool bNewTimeOfDaySyncEnabled);                                                             // [0xc36e53c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoSyncTimeOfDayComponent.GetTimeOfDaySyncEnabled
	// bool GetTimeOfDaySyncEnabled();                                                                                          // [0x89a9d74] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoSyncWeatherComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJunoSyncWeatherComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/JunoGameNative.JunoTeamStart
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class AJunoTeamStart : public APlayerStart
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FGameplayTag)                              IdentifierTag                                               OFFSET(getStruct<T>, {0x2C0, 4, 0, 0})
	DMember(float)                                     CapsuleRadius                                               OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     CapsuleHeight                                               OFFSET(get<float>, {0x2C8, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoTeleporter
/// Size: 0x0010 (0x000BD0 - 0x000BE0)
class AJunoTeleporter : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	CMember(TWeakObjectPtr<AJunoTeleporter*>)          TargetTeleporter                                            OFFSET(get<T>, {0xBD0, 8, 0, 0})
	DMember(bool)                                      bIsTeleporterEnabled                                        OFFSET(get<bool>, {0xBD8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoTeleporter.SetTargetTeleporter
	// void SetTargetTeleporter(class AJunoTeleporter* TargetTeleportActor);                                                    // [0xc36e43c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoTeleporter.IsTeleporterEnabled
	// bool IsTeleporterEnabled();                                                                                              // [0xc36df64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoTeleporter.GetTargetTeleporter
	// class AJunoTeleporter* GetTargetTeleporter();                                                                            // [0xc36dda8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoTemperatureAttributeSet
/// Size: 0x0100 (0x000030 - 0x000130)
class UJunoTemperatureAttributeSet : public UFortAttributeSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FGameplayTagContainer)                     BlockedTemperatures                                         OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FFortGameplayAttributeData)                Temperature                                                 OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                ColdResistance                                              OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                HeatResistance                                              OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FGameplayTag)                              CurrentTemperature                                          OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(TArray<FTemperatureRange>)                 TemperatureRanges                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTemperatureChanged                                        OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTemperatureRangesChanged                                  OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bAddTemperatureTagToActor                                   OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FGameplayTag)                              ForcedTemperature                                           OFFSET(getStruct<T>, {0x104, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_TemperatureRanges
	// void OnRep_TemperatureRanges();                                                                                          // [0xc36e3dc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_Temperature
	// void OnRep_Temperature(FFortGameplayAttributeData& OldValue);                                                            // [0xc36e2dc] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_HeatResistance
	// void OnRep_HeatResistance(FFortGameplayAttributeData& OldValue);                                                         // [0xc36e1dc] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_CurrentTemperature
	// void OnRep_CurrentTemperature(FGameplayTag OldTemperature);                                                              // [0xc36e10c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.OnRep_ColdResistance
	// void OnRep_ColdResistance(FFortGameplayAttributeData& OldValue);                                                         // [0xc36e00c] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.HandleWeatherTemperatureChanged
	// void HandleWeatherTemperatureChanged(FJunoEvent_TemperatureChanged Payload);                                             // [0xc36deb4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureAttributeSet.ForceTemperature
	// void ForceTemperature(FGameplayTag TemperatureToForce);                                                                  // [0xc36dd28] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoTemperatureComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoTemperatureComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<UJunoTemperatureAttributeSet*>) TemperatureAttributeSet                                 OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoTemperatureComponent.HandleOwnerASCInvalidated
	// void HandleOwnerASCInvalidated();                                                                                        // [0xc36de8c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureComponent.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* FortAbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0xc36ddd0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoTemperatureComponent.GetTemperatureAttributeSet
	// class UJunoTemperatureAttributeSet* GetTemperatureAttributeSet();                                                        // [0x6ce7f04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoTemplatesReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoTemplatesReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoToyAttachmentFixupComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UJunoToyAttachmentFixupComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoToyAttachmentFixupComponent.HandleToyAttachementFixupTimer
	// void HandleToyAttachementFixupTimer();                                                                                   // [0xc36dea0] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoUIHealthBarLocationInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoUIHealthBarLocationInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoUIHealthBarLocationInterface.GetHealthBarRelativeLocation
	// bool GetHealthBarRelativeLocation(FVector& OutLocation);                                                                 // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoUpdateActionsReportHandler
/// Size: 0x0018 (0x000028 - 0x000040)
class UJunoUpdateActionsReportHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoUserGeneratedTextPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoUserGeneratedTextPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoUserGeneratedTextPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoUserGeneratedTextPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoWeaponAbility
/// Size: 0x0000 (0x000B48 - 0x000B48)
class UJunoWeaponAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2888;

public:
};

/// Class /Script/JunoGameNative.JunoWeaponCreatureItemDefinition
/// Size: 0x0020 (0x000658 - 0x000678)
class UJunoWeaponCreatureItemDefinition : public UFortWeaponRangedItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1656;

public:
	CMember(TArray<class UClass*>)                     Debug_CreaturesToSpawn                                      OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               SpawnEvents                                                 OFFSET(get<T>, {0x668, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWeaponsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeaponsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWeaponsBlueprintLibrary.GetSpawnEvents
	// TArray<FDataTableRowHandle> GetSpawnEvents(class UGameplayAbility* GameplayAbility);                                     // [0xc371014] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeaponsBlueprintLibrary.GetCreaturesToSpawn
	// TArray<UClass*> GetCreaturesToSpawn(class UGameplayAbility* GameplayAbility);                                            // [0xc370680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoWeatherFXPersistence
/// Size: 0x0058 (0x000290 - 0x0002E8)
class AJunoWeatherFXPersistence : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UMaterialParameterCollectionInstance*) CachedMPCInstance                                         OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FLinearColor)                              WindPosition                                                OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FLinearColor)                              WindValueInCave                                             OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	DMember(float)                                     MaxWindSpeed                                                OFFSET(get<float>, {0x2C0, 4, 0, 0})
	SMember(FLinearColor)                              GustMaxWindSpeedAddend                                      OFFSET(getStruct<T>, {0x2C4, 16, 0, 0})
	DMember(float)                                     WindScalar                                                  OFFSET(get<float>, {0x2D4, 4, 0, 0})
	SMember(FName)                                     WindParamName                                               OFFSET(getStruct<T>, {0x2D8, 4, 0, 0})
	SMember(FName)                                     WindPositionParamName                                       OFFSET(getStruct<T>, {0x2DC, 4, 0, 0})
	SMember(FName)                                     WindPreviousPositionParamName                               OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bInCave                                                     OFFSET(get<bool>, {0x2E4, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherFXPersistence.UpdateWindGust
	// void UpdateWindGust(float IntensityScalar, FVector& GustIntensity, FLinearColor& CurrentWind);                           // [0xc371aac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWeatherLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeatherLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherLibrary.StringToLocation
	// FJunoWeatherLocation StringToLocation(FName LocationName);                                                               // [0xc371858] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.RollWeatherFromSeason
	// FJunoWeatherPhase RollWeatherFromSeason(FJunoWeatherSeasonRow& Season, FJunoWeatherLocation& Location, FGameplayTag& OptionalWeatherType); // [0xc3715e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.RollWeatherFromForecast
	// FJunoWeatherPhase RollWeatherFromForecast(FJunoWeatherPhaseForecast& Forecast);                                          // [0xc371520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.NotEqual_JunoWeatherLocation
	// bool NotEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B);                                     // [0xc3711f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.FindGameStateWeatherComponent
	// class UJunoGameStateWeatherComponent* FindGameStateWeatherComponent(class UObject* WorldContextObject);                  // [0xc3704b8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.EqualEqual_JunoWeatherLocation
	// bool EqualEqual_JunoWeatherLocation(FJunoWeatherLocation& A, FJunoWeatherLocation& B);                                   // [0xc3703c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.DescribePhase
	// FString DescribePhase(FJunoWeatherPhase& WeatherPhase);                                                                  // [0xc37031c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.DescribeLocation
	// FString DescribeLocation(FJunoWeatherLocation& WeatherLocation);                                                         // [0xc370278] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLibrary.CalculateLocation
	// FJunoWeatherLocation CalculateLocation(class AActor* Actor);                                                             // [0xc3701e4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWeatherLocationComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoWeatherLocationComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnLocationChanged                                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0xB0, 2, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.OnRep_Location
	// void OnRep_Location(FJunoWeatherLocation& OldLocation);                                                                  // [0xc3712f8] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.HandleLocationChanged
	// void HandleLocationChanged();                                                                                            // [0xc371150] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.GetLocation
	// FJunoWeatherLocation GetLocation();                                                                                      // [0xc370f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherLocationComponent.BP_CalculateLocation
	// FJunoWeatherLocation BP_CalculateLocation();                                                                             // [0xc3701b4] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWeatherPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWeatherPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoWeatherReactionComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoWeatherReactionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMulticastInlineDelegate)                  OnWeatherPhaseChanged                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTemperatureChanged                                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.ReceiveOnWeatherPhaseChanged
	// void ReceiveOnWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged Payload);                                               // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.ReceiveOnTemperatureChanged
	// void ReceiveOnTemperatureChanged(FJunoEvent_TemperatureChanged Payload);                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.HandleWeatherLocationChanged
	// void HandleWeatherLocationChanged(FJunoWeatherLocationChangedEvent Payload);                                             // [0xc371164] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentWeatherPhase
	// FJunoWeatherPhase GetCurrentWeatherPhase();                                                                              // [0xc370e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentTemperatureFloat
	// float GetCurrentTemperatureFloat();                                                                                      // [0xc370e68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetCurrentTemperature
	// FGameplayTag GetCurrentTemperature();                                                                                    // [0xc370df8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.GetClosestStatefulLocationFor
	// FJunoWeatherLocation GetClosestStatefulLocationFor(FJunoWeatherLocation& WeatherLocation);                               // [0xc3705ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherReactionComponent.FindWeatherState
	// class UJunoWeatherStateComponent* FindWeatherState();                                                                    // [0xc370538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWeatherStateComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UJunoWeatherStateComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0xD0, 2, 0, 0})
	CMember(class UDataTable*)                         SeasonTable                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FJunoWeatherPhase)                         CurrentWeatherPhase                                         OFFSET(getStruct<T>, {0xE8, 56, 0, 0})
	SMember(FJunoWeatherPhase)                         NextWeatherPhase                                            OFFSET(getStruct<T>, {0x120, 56, 0, 0})
	CMember(TArray<FJunoWeatherPhase>)                 NextWeatherQueue                                            OFFSET(get<T>, {0x158, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.TransitionWeatherNowTo
	// void TransitionWeatherNowTo(FJunoWeatherPhase& NewWeatherPhase, FJunoWeatherPhase& NewNextWeatherPhase);                 // [0xc3719b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.TransitionWeatherNow
	// void TransitionWeatherNow();                                                                                             // [0xc3719a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.SetAutoTransitioning
	// void SetAutoTransitioning(bool bAutoTransitionWeather);                                                                  // [0xc3717d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.RollWeatherPhase
	// FJunoWeatherPhase RollWeatherPhase();                                                                                    // [0xc371790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.RerollNextWeatherWith
	// void RerollNextWeatherWith(FGameplayTag& WeatherTypeName);                                                               // [0xc371458] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ReceiveWeatherPhaseChanged
	// void ReceiveWeatherPhaseChanged(FJunoEvent_WeatherPhaseChanged& Payload);                                                // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ReceiveTemperatureChanged
	// void ReceiveTemperatureChanged(FJunoEvent_TemperatureChanged& Payload);                                                  // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.QueueNextWeather
	// void QueueNextWeather(FJunoWeatherPhase& QueuedWeather);                                                                 // [0xc3713c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.OnRep_CurrentWeatherPhase
	// void OnRep_CurrentWeatherPhase();                                                                                        // [0xc3712e4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.IsAutoTransitioning
	// bool IsAutoTransitioning();                                                                                              // [0x990d6e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetTransitionOutAlpha
	// float GetTransitionOutAlpha();                                                                                           // [0xc371138] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetTransitionInAlpha
	// float GetTransitionInAlpha();                                                                                            // [0x94276c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetNextWeatherQueue
	// TArray<FJunoWeatherPhase> GetNextWeatherQueue();                                                                         // [0xc370fd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetNextWeatherPhase
	// FJunoWeatherPhase GetNextWeatherPhase();                                                                                 // [0xc370f98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetLocation
	// FJunoWeatherLocation GetLocation();                                                                                      // [0xc370f7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentWeatherPhase
	// FJunoWeatherPhase GetCurrentWeatherPhase();                                                                              // [0xc370f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentTemperatureFloat
	// float GetCurrentTemperatureFloat();                                                                                      // [0x74fa2ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentTemperature
	// FGameplayTag GetCurrentTemperature();                                                                                    // [0xc370e3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.GetCurrentSeason
	// FGameplayTag GetCurrentSeason();                                                                                         // [0xc370dc8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ForceNextWeatherTo
	// void ForceNextWeatherTo(FJunoWeatherPhase& NewNextWeatherPhase);                                                         // [0xc37055c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWeatherStateComponent.ClearNextWeatherQueue
	// void ClearNextWeatherQueue();                                                                                            // [0xc370264] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceCheckpointManager
/// Size: 0x0028 (0x000028 - 0x000050)
class UJunoWorldPersistenceCheckpointManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   CheckpointIntervalSeconds                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MinCheckpointIntervalSeconds                                OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   MaxCheckpointCountWithinConfiguredInterval                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWorldPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWorldPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceSubsystem
/// Size: 0x00F8 (0x000030 - 0x000128)
class UJunoWorldPersistenceSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bEnableWorldPersistence                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bEnableWorldPersistenceInPIE                                OFFSET(get<bool>, {0x69, 1, 0, 0})
	CMember(class UJunoWorldPersistenceHandler*)       WorldPersistenceHandler                                     OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UJunoWorldPersistencePlayerManager*) WorldPersistencePlayerManager                               OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UJunoWorldPersistenceSubsystemData*) SubsystemData                                               OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UJunoWorldPersistenceCheckpointManager*) CheckpointManager                                       OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr<AJunoPersistentPlayspace*>>) PersistentPlayspaceMap                         OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(EJunoWorldSaveDataState)                   WorldSaveDataState                                          OFFSET(get<T>, {0xE0, 1, 0, 0})
	SMember(FSoftObjectPath)                           SubsystemDataAssetPath                                      OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	CMember(TArray<FString>)                           ErrorCodeAllowList                                          OFFSET(get<T>, {0x118, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.WasActorSpawnedFromSavedGame
	// bool WasActorSpawnedFromSavedGame(class AActor* Actor);                                                                  // [0xc374234] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.RequestActorSave
	// void RequestActorSave(class AActor* Actor);                                                                              // [0xc373e04] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldPersistenceSubsystem.GenerateDeterministicMapActorGUID
	// FGuid GenerateDeterministicMapActorGUID(class AActor* Actor);                                                            // [0xc372778] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceSubsystemData
/// Size: 0x0018 (0x000030 - 0x000048)
class UJunoWorldPersistenceSubsystemData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UClass*>)                     AvailableWorldPersistenceHandlerClasses                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UClass*)                             DefaultWorldPersistenceHandlerClass                         OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldRegistryInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldRegistryInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldRegistryInterface.GetWorldDebugInfoText
	// void GetWorldDebugInfoText(class AFortPlayerPawn* PlayerPawn, FJunoDebugWorldInfoResult& WorldDebugInfo);                // [0xc373080] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldRegistryInterface.GetWorldAnalyticsInfo
	// void GetWorldAnalyticsInfo(class UObject* WorldContextObject, FVector& WorldLocation, FJunoWorldAnalyticsInfoResult& WorldAnalyticsInfo); // [0xc3728d8] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldSettingsBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.TurnWorldSettingOn
	// void TurnWorldSettingOn(class UObject* WorldContextObject, FGameplayTag& SettingName);                                   // [0xc374120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.TurnWorldSettingOff
	// void TurnWorldSettingOff(class UObject* WorldContextObject, FGameplayTag& SettingName);                                  // [0xc37400c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingTainted
	// bool IsWorldSettingTainted(class UObject* WorldContextObject, FGameplayTag& SettingName);                                // [0xc3735f8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingSaved
	// bool IsWorldSettingSaved(class UObject* WorldContextObject, FGameplayTag& SettingName);                                  // [0xc3734ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.IsWorldSettingOn
	// bool IsWorldSettingOn(class UObject* WorldContextObject, FGameplayTag& SettingName);                                     // [0xc3733e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsBlueprintLibrary.GetAllWorldSettingNames
	// TArray<FGameplayTag> GetAllWorldSettingNames(class UObject* WorldContextObject);                                         // [0xc372844] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldSettingsComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoWorldSettingsComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FJunoWorldSettingMapping>)          OptionalSettingNames                                        OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FJunoWorldSettingRepState>)         WorldSettings                                               OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.TurnSettingOn
	// void TurnSettingOn(FGameplayTag& SettingName);                                                                           // [0xc373f44] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.TurnSettingOff
	// void TurnSettingOff(FGameplayTag& SettingName);                                                                          // [0xc373e7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.OnRep_WorldSettings
	// void OnRep_WorldSettings(TArray<FJunoWorldSettingRepState>& OldValue);                                                   // [0xc373714] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingTainted
	// bool IsSettingTainted(FGameplayTag& SettingName);                                                                        // [0xc37330c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingSaved
	// bool IsSettingSaved(FGameplayTag& SettingName);                                                                          // [0xc373238] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.IsSettingOn
	// bool IsSettingOn(FGameplayTag& SettingName);                                                                             // [0xc373164] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoWorldSettingsComponent.GetAllSettingNames
	// TArray<FGameplayTag> GetAllSettingNames();                                                                               // [0xc372804] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData
/// Size: 0x0068 (0x000040 - 0x0000A8)
class UJunoWorldSettingsPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<FName, bool>)                         BoolWorldSettings                                           OFFSET(get<T>, {0x48, 80, 0, 0})
	SMember(FJunoWorldSettingsSaveData)                WorldSettingsSaveData                                       OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoWorldSettingsPersistenceFeatureModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoWorldSettingsPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoMapMarkerCustomizationInitData
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UJunoMapMarkerCustomizationInitData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGuid)                                     MarkerID                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FJunoMarker)                               Marker                                                      OFFSET(getStruct<T>, {0x38, 152, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bEditingMarker                                              OFFSET(get<bool>, {0xE1, 1, 0, 0})
};

/// Class /Script/JunoGameNative.PhysicalStrainHealthSubsystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UPhysicalStrainHealthSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/JunoGameNative.PhysicalStrainHealthRuntimeSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UPhysicalStrainHealthRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EPhysicalStrainHealthMode)                 Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     FatigueDamageThresholdPercent                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     FatigueDamageThresholdMinimum                               OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampWorldConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UJunoCampWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement
/// Size: 0x0440 (0x0000F8 - 0x000538)
class UPlayspaceComponent_JunoRootCampManagement : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	SMember(FScalableFloat)                            TimeBeforeSoftRemovedCampBecomesHardRemovedInJunoGameTimeHours OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            RunValidityChecksForCampPlacementOnServer                   OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            RunValidityChecksForCampPlacementOnClients                  OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            BoxExtentsForCampValidityCheck                              OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            BoxExtentsForCampValidityCheckForPOIs                       OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            MoveCampWhenNewSquareIsAddedAfterSoftRemoval                OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FDataRegistryType)                         PlayerPerks                                                 OFFSET(getStruct<T>, {0x1E8, 4, 0, 0})
	SMember(FDataRegistryType)                         NPCPerks                                                    OFFSET(getStruct<T>, {0x1EC, 4, 0, 0})
	CMember(TMap<EJunoBiome, UDataTable*>)             NPCPerksPerBiome                                            OFFSET(get<T>, {0x1F0, 80, 0, 0})
	CMember(class UJunoAsyncAction_WaitForEventRouter*) WaitForEventRouterAction                                   OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(TArray<FReplicatedCampData>)               ReplicatedCampDatas                                         OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(TArray<FPOIEncounterDataForCamps>)         LoadedPOIEncounters                                         OFFSET(get<T>, {0x3E8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement.IsAValidLocationForANewCamp
	// bool IsAValidLocationForANewCamp(FVector& Location, bool bShouldSkipEncounterCheck, FGameplayTagContainer& OutFailureReasons); // [0xc395e68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.PlayspaceComponent_JunoRootCampManagement.GetRootPlayspaceJunoCampManagementComponent
	// class UPlayspaceComponent_JunoRootCampManagement* GetRootPlayspaceJunoCampManagementComponent(class UObject* WorldContextObject); // [0xc395d34] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAwesomeInteractionConfigMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoAwesomeInteractionConfigMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FDataTableRowHandle>)   InteractionConfigMap                                        OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAwesomePlacementConfigMappings
/// Size: 0x0100 (0x000030 - 0x000130)
class UJunoAwesomePlacementConfigMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FDataRegistryType)                         PlacementConfigRegistryType                                 OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	CMember(class UDataTable*)                         CategoryConfigTable                                         OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAwesomePoiConfigMappings
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UJunoAwesomePoiConfigMappings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FDataRegistryType)                         AwesomeProgressionConfigRegistryType                        OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FDataTableRowHandle)                       DefaultConfig                                               OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAwesomeSystemDatabaseComponent
/// Size: 0x0038 (0x0000F8 - 0x000130)
class UJunoAwesomeSystemDatabaseComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(class UJunoAwesomeInteractionConfigMappings*) InteractionConfigMappings                                OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UJunoAwesomePlacementConfigMappings*) PlacementConfigMappings                                    OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UJunoAwesomePoiConfigMappings*)      PoiConfigMappings                                           OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAwesomeThresholdsComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UJunoAwesomeThresholdsComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnAwesomeLevelChanged                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FJunoAwesomeThresholdMapping>)      AwesomeThresholdToActionsMappings                           OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAwesomeThresholdsComponent.HandleJunoAwesomeLevelChanged
	// void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                             // [0xc395db4] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoAwesomeLevelComponent
/// Size: 0x0210 (0x0000A0 - 0x0002B0)
class UJunoAwesomeLevelComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoAwesomeLevelChangedDelegate                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoAwesomePointModification                              OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoAwesomeComponentReadyDelegate                         OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   CurrentAwesomePoints                                        OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	CMember(TArray<int32_t>)                           AwesomePointGoals                                           OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FJunoAwesomeUpgradeRequirements>)   AwesomeUpgradeRequirements                                  OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FJunoAwesomeUpgradeRequirements)           CurrentUpgradeRequirements                                  OFFSET(getStruct<T>, {0x148, 80, 0, 0})
	DMember(bool)                                      bRequiredBuiltObjectsReady                                  OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     CampPersistentTagsCopy                                      OFFSET(getStruct<T>, {0x1F0, 32, 0, 0})
	CMember(EJunoAwesomeConfigDeterminationType)       AwesomeConfigDeterminationType                              OFFSET(get<T>, {0x210, 1, 0, 0})
	SMember(FGameplayTag)                              PoiType                                                     OFFSET(getStruct<T>, {0x214, 4, 0, 0})
	CMember(EJunoBiome)                                CampBiomeType                                               OFFSET(get<T>, {0x218, 1, 0, 0})
	DMember(bool)                                      bIsReadyForUse                                              OFFSET(get<bool>, {0x234, 1, 0, 0})
	DMember(bool)                                      bIsFromPersistence                                          OFFSET(get<bool>, {0x235, 1, 0, 0})
	SMember(FJunoAwesomePointModificationData)         CachedAwesomePointModificationData                          OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FJunoAwesomeLevelChangeData)               CachedAwesomeLevelChangeData                                OFFSET(getStruct<T>, {0x280, 24, 0, 0})
	DMember(bool)                                      bSkipAwesomeUpgradeResourceChecks                           OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(TArray<FAwesomeLevelRewardEntry>)          AwesomeLevelRewardEntries                                   OFFSET(get<T>, {0x2A0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.TriggerAwesomeLevelChange
	// void TriggerAwesomeLevelChange(class AFortPlayerController* TriggeringPlayer);                                           // [0xc396508] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.ProcessAwesomePointModifierCheat
	// bool ProcessAwesomePointModifierCheat(int32_t AwesomePointAmount, class AActor* SourceActor);                            // [0xc3962b4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_CurrentAwesomePoints
	// void OnRep_CurrentAwesomePoints();                                                                                       // [0xc396208] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_bIsReadyForUse
	// void OnRep_bIsReadyForUse();                                                                                             // [0xc396288] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnRep_AwesomeLevel
	// void OnRep_AwesomeLevel();                                                                                               // [0xc3961f0] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.OnAwesomeSettingsInitialized
	// void OnAwesomeSettingsInitialized();                                                                                     // [0xc3961dc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.IsReadyForUse
	// bool IsReadyForUse();                                                                                                    // [0x970765c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.IsAwesomeLevelUpPending
	// EJunoAwesomeLevelUpgradeQueryResult IsAwesomeLevelUpPending(class AFortPlayerController* TriggeringPlayer);              // [0xc396020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.HasEnoughAwesomePointsForALevelUp
	// bool HasEnoughAwesomePointsForALevelUp();                                                                                // [0xc395e44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetMaxAwesomeLevel
	// int32_t GetMaxAwesomeLevel();                                                                                            // [0xc395cfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetMaxAwesomeIndex
	// int32_t GetMaxAwesomeIndex();                                                                                            // [0x9f0fd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentUpgradeRequirements
	// FJunoAwesomeUpgradeRequirements GetCurrentUpgradeRequirements();                                                         // [0xc395cc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentAwesomePointGoal
	// int32_t GetCurrentAwesomePointGoal();                                                                                    // [0xc395ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetCurrentAwesomePointFloor
	// int32_t GetCurrentAwesomePointFloor();                                                                                   // [0xc395c7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetBiomeType
	// EJunoBiome GetBiomeType();                                                                                               // [0x95289f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomePointsNeededForNextLevel
	// int32_t GetAwesomePointsNeededForNextLevel();                                                                            // [0xc395c58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomePoints
	// int32_t GetAwesomePoints();                                                                                              // [0xa399f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevelRewardEntries
	// TArray<FAwesomeLevelRewardEntry> GetAwesomeLevelRewardEntries();                                                         // [0xc395c3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevelFromCurrentPoints
	// int32_t GetAwesomeLevelFromCurrentPoints();                                                                              // [0xc395c18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.GetAwesomeLevel
	// int32_t GetAwesomeLevel();                                                                                               // [0x9070170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.BP_OnAwesomePointsModified
	// void BP_OnAwesomePointsModified(FJunoAwesomePointModificationData& ModificationData);                                    // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoAwesomeLevelComponent.BP_OnAwesomeLevelChanged
	// void BP_OnAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                                  // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoNamedPOIComponent
/// Size: 0x00F0 (0x0000A0 - 0x000190)
class UJunoNamedPOIComponent : public UJunoCampComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoPOINameChangedDelegate                                OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoPOIMarkerChangedDelegate                              OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FText)                                     POIName                                                     OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FJunoMarker)                               Marker                                                      OFFSET(getStruct<T>, {0xE0, 152, 0, 0})
	SMember(FGuid)                                     MarkerID                                                    OFFSET(getStruct<T>, {0x178, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.SetPOIName
	// void SetPOIName(FText& NewPOIName);                                                                                      // [0xc39646c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.ProcessCampReadyLogic
	// void ProcessCampReadyLogic(FJunoCampAwesomeStatsData& ReadyData);                                                        // [0xc3963d8] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.PrepareForCampReadyLogic
	// void PrepareForCampReadyLogic();                                                                                         // [0xc3962a0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnRep_POIName
	// void OnRep_POIName();                                                                                                    // [0xc396234] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnRep_MarkerId
	// void OnRep_MarkerId();                                                                                                   // [0xc396220] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnRep_Marker
	// void OnRep_Marker();                                                                                                     // [0xc396220] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnJunoPOINameChangedSignature__DelegateSignature
	// void OnJunoPOINameChangedSignature__DelegateSignature(FText& NewName);                                                   // [0x1340978] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnJunoPOIMarkerChanged__DelegateSignature
	// void OnJunoPOIMarkerChanged__DelegateSignature();                                                                        // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnAwesomePointsModifiedCosmetic
	// void OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData);                               // [0xc396140] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.OnAwesomeLevelChangedCosmetic
	// void OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData);                                             // [0xc3960b0] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnPlayerExitedCampCosmetic
	// void K2_OnPlayerExitedCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, class AJunoCampActor* OwningCamp); // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnPlayerEnteredCampCosmetic
	// void K2_OnPlayerEnteredCampCosmetic(int32_t CurrentAwesomeLevel, int32_t AwesomePoints, class AJunoCampActor* OwningCamp); // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnCampNameChanged
	// void K2_OnCampNameChanged(FText& NewName, class AJunoCampActor* OwningCamp);                                             // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnAwesomePointsModifiedCosmetic
	// void K2_OnAwesomePointsModifiedCosmetic(FJunoAwesomePointModificationData& ModificationData);                            // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.K2_OnAwesomeLevelChangedCosmetic
	// void K2_OnAwesomeLevelChangedCosmetic(FJunoAwesomeLevelChangeData& ChangeData);                                          // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.GetPOIName
	// FText GetPOIName();                                                                                                      // [0xc395d18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoNamedPOIComponent.GetMarker
	// FJunoMarker GetMarker();                                                                                                 // [0xc395ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoAdventurePlayspaceBase
/// Size: 0x0028 (0x000740 - 0x000768)
class AJunoAdventurePlayspaceBase : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1896;

public:
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0x740, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AdventureTags                                               OFFSET(getStruct<T>, {0x748, 32, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.RemoveAdventureTags
	// void RemoveAdventureTags(FGameplayTagContainer& TagsToRemove);                                                           // [0xc3c83e8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.GetAdventureTags
	// FGameplayTagContainer GetAdventureTags();                                                                                // [0xc3c6d14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.ContainsController
	// bool ContainsController(class AController* Controller);                                                                  // [0xc3c61e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAdventurePlayspaceBase.AppendAdventureTags
	// void AppendAdventureTags(FGameplayTagContainer& TagsToAdd);                                                              // [0xc3c5dc0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoCampPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoAllCampsSaveData)                     SavedAllCamps                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoCampPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TArray<FJunoCampSaveData>)                 SavedCamps                                                  OFFSET(get<T>, {0x2D8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCampPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCampPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoQuestActorSpawnPoint
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AJunoQuestActorSpawnPoint : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FGameplayTagContainer)                     SpawnTags                                                   OFFSET(getStruct<T>, {0x290, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_AwesomeLevelIncreased
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_AwesomeLevelIncreased : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_GuidedBuildCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_GuidedBuildCompleted : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_GuidedBuildStageCompleted
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_GuidedBuildStageCompleted : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_RecruitNPC
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_RecruitNPC : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoVerbProcessor_TemperatureUpdated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoVerbProcessor_TemperatureUpdated : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoAdventureGameplayVolume
/// Size: 0x0040 (0x000330 - 0x000370)
class AJunoAdventureGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0x338, 1, 0, 0})
	DMember(bool)                                      bDestroyLinkedPlayspaceOnEndPlay                            OFFSET(get<bool>, {0x339, 1, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x358, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAINavInvokerComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UJunoAINavInvokerComponent : public UNavigationInvokerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAINavInvokerComponent.OnPlayerPossessed
	// void OnPlayerPossessed(class APawn* Pawn);                                                                               // [0xc3c7d28] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAINavInvokerComponent.OnNPCPossessed
	// void OnNPCPossessed(class APawn* Pawn);                                                                                  // [0xc3c7ca8] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoNavSystemConfig
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UJunoNavSystemConfig : public UAthenaNavSystemConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UJunoPhysicsObjectNavigationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     LowSpeedThreshold                                           OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LowSpeedDistanceThreshold                                   OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     LowSpeedRotationThreshold                                   OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     LowSpeedScaleThreshold                                      OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     LowSpeedDurationTrigger                                     OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(class UPrimitiveComponent*)                PrimitiveComponentAffectingNavMesh                          OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnWake
	// void OnWake(class UPrimitiveComponent* SimulatingComponent, FName BoneName);                                             // [0xc3c7fe8] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnSleep
	// void OnSleep(class UPrimitiveComponent* SimulatingComponent, FName BoneName);                                            // [0xc3c7e6c] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnRemovedFromClusterUnion
	// void OnRemovedFromClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);        // [0xc3c7da8] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnClusterUnionPhysicsObjectAwakeChanged
	// void OnClusterUnionPhysicsObjectAwakeChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake);             // [0xc3c7be0] Final|RequiredAPI|Native|Protected 
	// Function /Script/JunoGameNative.JunoPhysicsObjectNavigationComponent.OnAddedToClusterUnion
	// void OnAddedToClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);            // [0xc3c79ec] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoGameFeatureAction_AddJunoAnalytics
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoGameFeatureAction_AddJunoAnalytics : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UJunoAnalytics*)                     JunoAnalytics                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAnimationBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAnimationBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.ImpactOrDamage
	// void ImpactOrDamage(FGameplayTagContainer& DamageTags, class AFortPawn* DamageInstigator, class AActor* DamageSource, EImpactOrDamage_ExecutionPin& ExecutionPin); // [0xc3c77d8] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.HasMatchingImpactCue
	// bool HasMatchingImpactCue(FGameplayTagContainer& DamageTags, class AFortPawn* DamageInstigator, class AActor* DamageSource); // [0xc3c7618] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetClampedWarpTargetLocation
	// void GetClampedWarpTargetLocation(FVector WarpStartLocation, FVector WarpTargetLocation, float WarpTargetRadius, float WarpDistanceMax, bool ConstrainToPawnForwardVector, FVector PawnForward, FVector& ClampedTargetLocation, FRotator& FaceTargetRotation); // [0xc3c6f78] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.GetCapsuleActorSpaceBounds
	// void GetCapsuleActorSpaceBounds(class UCapsuleComponent* Capsule, FVector& Origin, FVector& Extents);                    // [0xc3c6dec] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.AbilityMontage_SetNextSection
	// void AbilityMontage_SetNextSection(class AFortPawn* FortPawn, FName NextSection);                                        // [0xc3c5c1c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimationBlueprintLibrary.AbilityMontage_ReplicatePosition
	// void AbilityMontage_ReplicatePosition(class AFortPawn* FortPawn, bool bReplicatePosition);                               // [0xc3c5b3c] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoAnimInstance
/// Size: 0x0010 (0x000460 - 0x000470)
class UJunoAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAnimInstance.UpdateAnimationTimer
	// void UpdateAnimationTimer(float& TimeRemaining, bool& bTimeIsExpired, EUpdateAnimationTimer_ExecutionPin& ExecutionPin); // [0xc3c8908] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimInstance.RandomizeAnimationTimer
	// void RandomizeAnimationTimer(float MinTime, float MaxTime, float& TimeRemaining, bool& bTimeIsExpired);                  // [0xc3c8164] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAnimInstance.GetMainAnimInstance
	// class UJunoAnimInstance* GetMainAnimInstance();                                                                          // [0xc3c725c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAnimInstance.BlendCurvesByName
	// float BlendCurvesByName(FName CurveA, FName CurveB, float Alpha);                                                        // [0xc3c5e7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGliderAnimInstance
/// Size: 0x0010 (0x000830 - 0x000840)
class UJunoGliderAnimInstance : public UFortGliderAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	DMember(bool)                                      bIsSkydiving                                                OFFSET(get<bool>, {0x828, 1, 1, 0})
	DMember(bool)                                      bIsParachuteOpen                                            OFFSET(get<bool>, {0x828, 1, 1, 1})
	DMember(bool)                                      bGliderUseFastDeploy                                        OFFSET(get<bool>, {0x828, 1, 1, 2})
	DMember(float)                                     GliderPitch                                                 OFFSET(get<float>, {0x82C, 4, 0, 0})
	DMember(float)                                     GliderRoll                                                  OFFSET(get<float>, {0x830, 4, 0, 0})
	CMember(class UJunoPlayerAnimInstance*)            PlayerAnimInstance                                          OFFSET(get<T>, {0x838, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMinifigAnimationComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoMinifigAnimationComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FRotator)                                  MinifigLookAtRotation                                       OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPawnAnimInstance
/// Size: 0x0120 (0x000470 - 0x000590)
class UJunoPawnAnimInstance : public UJunoAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	SMember(FGameplayTag)                              AggressiveGameplayTag                                       OFFSET(getStruct<T>, {0x470, 4, 0, 0})
	DMember(float)                                     PawnMovingSpeedThreshold                                    OFFSET(get<float>, {0x474, 4, 0, 0})
	DMember(bool)                                      bIsFalling                                                  OFFSET(get<bool>, {0x478, 1, 0, 0})
	DMember(float)                                     PawnSpeed2D                                                 OFFSET(get<float>, {0x47C, 4, 0, 0})
	SMember(FVector)                                   PawnVelocity                                                OFFSET(getStruct<T>, {0x480, 24, 0, 0})
	SMember(FRotator)                                  PawnRotationRate                                            OFFSET(getStruct<T>, {0x498, 24, 0, 0})
	DMember(bool)                                      bPawnIsDying                                                OFFSET(get<bool>, {0x4B0, 1, 1, 0})
	DMember(bool)                                      bPawnIsFalling                                              OFFSET(get<bool>, {0x4B0, 1, 1, 1})
	DMember(bool)                                      bPawnIsOnGround                                             OFFSET(get<bool>, {0x4B0, 1, 1, 2})
	DMember(bool)                                      bPawnIsIdling                                               OFFSET(get<bool>, {0x4B0, 1, 1, 3})
	DMember(bool)                                      bPawnIsJumping                                              OFFSET(get<bool>, {0x4B0, 1, 1, 4})
	DMember(bool)                                      bPawnIsMoving2D                                             OFFSET(get<bool>, {0x4B0, 1, 1, 5})
	DMember(bool)                                      bPawnIsMovingOnGround                                       OFFSET(get<bool>, {0x4B0, 1, 1, 6})
	DMember(bool)                                      bPawnWasMoving2D                                            OFFSET(get<bool>, {0x4B0, 1, 1, 7})
	DMember(bool)                                      bPawnHasAcceleration                                        OFFSET(get<bool>, {0x4B1, 1, 1, 0})
	DMember(bool)                                      bPawnHasRootMotion                                          OFFSET(get<bool>, {0x4B1, 1, 1, 1})
	DMember(bool)                                      bPawnHasVelocity                                            OFFSET(get<bool>, {0x4B1, 1, 1, 2})
	DMember(bool)                                      bPawnIdleBreakTimeIsExpired                                 OFFSET(get<bool>, {0x4B1, 1, 1, 3})
	DMember(bool)                                      bPawnMovingIdleBreakTimeIsExpired                           OFFSET(get<bool>, {0x4B1, 1, 1, 4})
	DMember(bool)                                      bPawnIsAggressive                                           OFFSET(get<bool>, {0x4B1, 1, 1, 5})
	SMember(FVector)                                   PawnAcceleration                                            OFFSET(getStruct<T>, {0x4B8, 24, 0, 0})
	DMember(float)                                     PawnAccelerationDirection                                   OFFSET(get<float>, {0x4D0, 4, 0, 0})
	SMember(FRotator)                                  PawnRotation                                                OFFSET(getStruct<T>, {0x4D8, 24, 0, 0})
	SMember(FRotator)                                  PawnRotationDelta                                           OFFSET(getStruct<T>, {0x4F0, 24, 0, 0})
	SMember(FRotator)                                  PawnRotationRateNormalized                                  OFFSET(getStruct<T>, {0x508, 24, 0, 0})
	SMember(FRotator)                                  PawnRootRotation                                            OFFSET(getStruct<T>, {0x520, 24, 0, 0})
	DMember(float)                                     PawnVelocityDirection                                       OFFSET(get<float>, {0x538, 4, 0, 0})
	SMember(FVector)                                   PawnPreviousVelocity                                        OFFSET(getStruct<T>, {0x540, 24, 0, 0})
	DMember(float)                                     PawnIdleBreakTime                                           OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     PawnMovingIdleBreakTime                                     OFFSET(get<float>, {0x55C, 4, 0, 0})
	DMember(int32_t)                                   PawnCurrentLOD                                              OFFSET(get<int32_t>, {0x560, 4, 0, 0})
	SMember(FVector)                                   PawnLocation                                                OFFSET(getStruct<T>, {0x568, 24, 0, 0})
	DMember(bool)                                      bClothEnabled                                               OFFSET(get<bool>, {0x580, 1, 1, 0})
	DMember(bool)                                      bAnimDynamicsEnabled                                        OFFSET(get<bool>, {0x580, 1, 1, 1})
	DMember(bool)                                      bRigidBodyEnabled                                           OFFSET(get<bool>, {0x580, 1, 1, 2})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.StartPawnMovingIdleBreakTimer
	// void StartPawnMovingIdleBreakTimer(float MinTime, float MaxTime);                                                        // [0xc3c8838] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.StartPawnIdleBreakTimer
	// void StartPawnIdleBreakTimer(float MinTime, float MaxTime);                                                              // [0xc3c8768] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.OnStoppedBeingAggressive
	// void OnStoppedBeingAggressive();                                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.OnBecomeAggressive
	// void OnBecomeAggressive();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.DetermineMoodReactionMontage
	// class UAnimMontage* DetermineMoodReactionMontage(FGameplayTag& MoodReactionTag, class UProxyTable* MoodReactionProxyTable); // [0x1340978] RequiredAPI|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.ClearPawnMovingIdleBreakTimer
	// void ClearPawnMovingIdleBreakTimer();                                                                                    // [0xc3c61c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnAnimInstance.ClearPawnIdleBreakTimer
	// void ClearPawnIdleBreakTimer();                                                                                          // [0xc3c61ac] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPlayerAnimInstance
/// Size: 0x0370 (0x000590 - 0x000900)
class UJunoPlayerAnimInstance : public UJunoPawnAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2304;

public:
	DMember(float)                                     PlayerLookAngleFromPawnMax                                  OFFSET(get<float>, {0x590, 4, 0, 0})
	DMember(float)                                     PlayerLookAngleFromRootMax                                  OFFSET(get<float>, {0x594, 4, 0, 0})
	DMember(float)                                     PlayerFaceVisibleAngle                                      OFFSET(get<float>, {0x598, 4, 0, 0})
	DMember(float)                                     PlayerRunningAccelerationThreshold                          OFFSET(get<float>, {0x59C, 4, 0, 0})
	DMember(float)                                     PlayerWalkingAccelerationThreshold                          OFFSET(get<float>, {0x5A0, 4, 0, 0})
	CMember(class UCurveVector*)                       PlayerStrafeCurve                                           OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    FortPlayerPawn                                              OFFSET(get<T>, {0x5B0, 8, 0, 0})
	DMember(bool)                                      bIsAccelerating2D                                           OFFSET(get<bool>, {0x5B8, 1, 1, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          OFFSET(get<bool>, {0x5B8, 1, 1, 1})
	DMember(bool)                                      bIsMovingAndInMotionEmote                                   OFFSET(get<bool>, {0x5B8, 1, 1, 2})
	DMember(bool)                                      bIsSlopeSliding                                             OFFSET(get<bool>, {0x5B9, 1, 0, 0})
	DMember(bool)                                      bIsInVehicle                                                OFFSET(get<bool>, {0x5BA, 1, 1, 0})
	SMember(FVector)                                   LocalAcceleration                                           OFFSET(getStruct<T>, {0x5C0, 24, 0, 0})
	DMember(float)                                     LocalAccelYawAngle                                          OFFSET(get<float>, {0x5D8, 4, 0, 0})
	SMember(FVector)                                   LocalVelocity                                               OFFSET(getStruct<T>, {0x5E0, 24, 0, 0})
	DMember(float)                                     LocalVelocityYawAngle                                       OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x5FC, 4, 0, 0})
	DMember(float)                                     MaxSwimSpeed                                                OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     VelocityZ                                                   OFFSET(get<float>, {0x604, 4, 0, 0})
	SMember(FVector)                                   WorldAcceleration                                           OFFSET(getStruct<T>, {0x608, 24, 0, 0})
	SMember(FVector)                                   WorldVelocity                                               OFFSET(getStruct<T>, {0x620, 24, 0, 0})
	SMember(FRotator)                                  ActorRotationLastTick                                       OFFSET(getStruct<T>, {0x638, 24, 0, 0})
	DMember(float)                                     YawDeltaCurrentTick                                         OFFSET(get<float>, {0x650, 4, 0, 0})
	DMember(float)                                     YawDeltaLastTick                                            OFFSET(get<float>, {0x654, 4, 0, 0})
	DMember(float)                                     YawDeltaSmoothed                                            OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(bool)                                      bIsTacticalSprint                                           OFFSET(get<bool>, {0x65C, 1, 1, 0})
	DMember(bool)                                      bIsSkydiving                                                OFFSET(get<bool>, {0x65C, 1, 1, 1})
	DMember(bool)                                      bIsParachuteOpen                                            OFFSET(get<bool>, {0x65C, 1, 1, 2})
	DMember(bool)                                      bGliderUseFastDeploy                                        OFFSET(get<bool>, {0x65C, 1, 1, 3})
	DMember(bool)                                      bGliderIsOpen                                               OFFSET(get<bool>, {0x65C, 1, 1, 4})
	DMember(bool)                                      bGliderWasOpen                                              OFFSET(get<bool>, {0x65C, 1, 1, 5})
	DMember(bool)                                      bPlayerProp1Aim                                             OFFSET(get<bool>, {0x65C, 1, 1, 6})
	DMember(bool)                                      bPlayerProp2Aim                                             OFFSET(get<bool>, {0x65C, 1, 1, 7})
	DMember(bool)                                      bPlayerIsCold                                               OFFSET(get<bool>, {0x65D, 1, 1, 0})
	DMember(bool)                                      bPlayerIsMildCold                                           OFFSET(get<bool>, {0x65D, 1, 1, 1})
	DMember(bool)                                      bPlayerIsVeryCold                                           OFFSET(get<bool>, {0x65D, 1, 1, 2})
	DMember(bool)                                      bPlayerIsHot                                                OFFSET(get<bool>, {0x65D, 1, 1, 3})
	DMember(bool)                                      bPlayerIsMildHot                                            OFFSET(get<bool>, {0x65D, 1, 1, 4})
	DMember(bool)                                      bPlayerIsVeryHot                                            OFFSET(get<bool>, {0x65D, 1, 1, 5})
	DMember(bool)                                      bPlayerIsHumanControlled                                    OFFSET(get<bool>, {0x65D, 1, 1, 6})
	DMember(bool)                                      bPlayerIsSneaking                                           OFFSET(get<bool>, {0x65D, 1, 1, 7})
	DMember(bool)                                      bPlayerIsFishing                                            OFFSET(get<bool>, {0x65E, 1, 1, 0})
	DMember(bool)                                      bPlayerWasFishing                                           OFFSET(get<bool>, {0x65E, 1, 1, 1})
	DMember(bool)                                      bPlayerIsFocusing                                           OFFSET(get<bool>, {0x65E, 1, 1, 2})
	DMember(bool)                                      bPlayerIsFlying                                             OFFSET(get<bool>, {0x65E, 1, 1, 3})
	DMember(bool)                                      bPlayerIsFacingController                                   OFFSET(get<bool>, {0x65E, 1, 1, 4})
	DMember(bool)                                      bPlayerIsMovingBackwards                                    OFFSET(get<bool>, {0x65E, 1, 1, 5})
	DMember(bool)                                      bPlayerIsProp1AimTargetValid                                OFFSET(get<bool>, {0x65E, 1, 1, 6})
	DMember(bool)                                      bPlayerIsPushing                                            OFFSET(get<bool>, {0x65E, 1, 1, 7})
	DMember(bool)                                      bPlayerWasPushing                                           OFFSET(get<bool>, {0x65F, 1, 1, 0})
	DMember(bool)                                      bPlayerIsRunning                                            OFFSET(get<bool>, {0x65F, 1, 1, 1})
	DMember(bool)                                      bPlayerIsSprinting                                          OFFSET(get<bool>, {0x65F, 1, 1, 2})
	DMember(bool)                                      bPlayerIsWalking                                            OFFSET(get<bool>, {0x65F, 1, 1, 3})
	DMember(bool)                                      bPlayerIsWaterJumping                                       OFFSET(get<bool>, {0x65F, 1, 1, 4})
	DMember(bool)                                      bPlayerShouldMove                                           OFFSET(get<bool>, {0x65F, 1, 1, 5})
	DMember(bool)                                      bPlayerShouldTurnInPlace                                    OFFSET(get<bool>, {0x65F, 1, 1, 6})
	DMember(bool)                                      bPlayerFaceIsVisible                                        OFFSET(get<bool>, {0x65F, 1, 1, 7})
	DMember(bool)                                      bPlayerUpperBodyIsSwinging                                  OFFSET(get<bool>, {0x660, 1, 1, 0})
	DMember(bool)                                      bPlayerProp1MontageActive                                   OFFSET(get<bool>, {0x660, 1, 1, 1})
	DMember(bool)                                      bPlayerProp2MontageActive                                   OFFSET(get<bool>, {0x660, 1, 1, 2})
	DMember(bool)                                      bPlayerHeadShouldFollowCamera                               OFFSET(get<bool>, {0x660, 1, 1, 3})
	CMember(TEnumAsByte<EFortMovementStyle>)           PlayerMovementStyle                                         OFFSET(get<T>, {0x661, 1, 0, 0})
	DMember(float)                                     PlayerAccelerationAmount                                    OFFSET(get<float>, {0x664, 4, 0, 0})
	SMember(FRotator)                                  PlayerLookAtRotation                                        OFFSET(getStruct<T>, {0x668, 24, 0, 0})
	SMember(FRotator)                                  PlayerRotationTarget                                        OFFSET(getStruct<T>, {0x680, 24, 0, 0})
	SMember(FRotator)                                  PlayerPreviousRotationTarget                                OFFSET(getStruct<T>, {0x698, 24, 0, 0})
	DMember(float)                                     PlayerRotationTargetRate                                    OFFSET(get<float>, {0x6B0, 4, 0, 0})
	DMember(float)                                     PlayerVelocityYawRate                                       OFFSET(get<float>, {0x6B4, 4, 0, 0})
	DMember(float)                                     PlayerUseProceduralFaceAnim                                 OFFSET(get<float>, {0x6B8, 4, 0, 0})
	SMember(FJunoMinifigLayeringMask)                  LayeringMask                                                OFFSET(getStruct<T>, {0x6BC, 160, 0, 0})
	SMember(FInputAlphaBoolBlend)                      SecondaryMotionLODBlend                                     OFFSET(getStruct<T>, {0x760, 72, 0, 0})
	DMember(int32_t)                                   SecondaryMotionLODThreshold                                 OFFSET(get<int32_t>, {0x7A8, 4, 0, 0})
	DMember(float)                                     SecondaryMotionLODBlendTime                                 OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     GliderPitch                                                 OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     GliderRoll                                                  OFFSET(get<float>, {0x7B4, 4, 0, 0})
	CMember(class AFortWeapon*)                        PlayerMainHandItem                                          OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class AFortWeapon*)                        PlayerOffHandItem                                           OFFSET(get<T>, {0x7C0, 8, 0, 0})
	SMember(FVector2D)                                 PlayerAimOffset                                             OFFSET(getStruct<T>, {0x7C8, 16, 0, 0})
	SMember(FVector)                                   PlayerAimOffsetTemp                                         OFFSET(getStruct<T>, {0x7D8, 24, 0, 0})
	SMember(FVector2D)                                 PlayerProp1AimOffset                                        OFFSET(getStruct<T>, {0x7F0, 16, 0, 0})
	SMember(FVector)                                   PlayerProp1AimTargetLocation                                OFFSET(getStruct<T>, {0x800, 24, 0, 0})
	SMember(FRotator)                                  PlayerSlopeMatchingRotationOffset                           OFFSET(getStruct<T>, {0x818, 24, 0, 0})
	DMember(float)                                     PlayerSlopeMatchingWeight                                   OFFSET(get<float>, {0x830, 4, 0, 0})
	SMember(FRotator)                                  PlayerPreviousRootRotation                                  OFFSET(getStruct<T>, {0x838, 24, 0, 0})
	CMember(EJunoMinifigRotationMode)                  PlayerRotationMode                                          OFFSET(get<T>, {0x850, 1, 0, 0})
	SMember(FRotator)                                  SmoothedRotationTarget                                      OFFSET(getStruct<T>, {0x858, 24, 0, 0})
	SMember(FRotator)                                  SuperSmoothedRotationTarget                                 OFFSET(getStruct<T>, {0x870, 24, 0, 0})
	SMember(FRotator)                                  PlayerStartingRotation                                      OFFSET(getStruct<T>, {0x888, 24, 0, 0})
	DMember(float)                                     PlayerStartingAngle                                         OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(bool)                                      bPlayerEmotionHasChanged                                    OFFSET(get<bool>, {0x8A4, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerRotationTarget
	// void UpdatePlayerRotationTarget(float DeltaSeconds);                                                                     // [0xc3c8e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerRootRotation
	// void UpdatePlayerRootRotation(float DeltaSeconds);                                                                       // [0xc3c8d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerCurveRotateToStaticTarget
	// void UpdatePlayerCurveRotateToStaticTarget(float DeltaSeconds);                                                          // [0xc3c8d14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerCurveRotateToMovingTarget
	// void UpdatePlayerCurveRotateToMovingTarget(float DeltaSeconds);                                                          // [0xc3c8c94] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerContinuousRotateToTarget
	// void UpdatePlayerContinuousRotateToTarget(float DeltaSeconds);                                                           // [0xc3c8c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerAimOffsetWithRootCompensation
	// void UpdatePlayerAimOffsetWithRootCompensation(FRotator LookAtRotation, float InterpSpeed, bool bCompensate, float DeltaSeconds); // [0xc3c8ab4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.UpdatePlayerAimOffset
	// void UpdatePlayerAimOffset(float DeltaSeconds);                                                                          // [0xc3c8a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.ShouldForcePlayerToFacePawnRotation
	// bool ShouldForcePlayerToFacePawnRotation();                                                                              // [0xc3c8744] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.SetPlayerRotationMode
	// void SetPlayerRotationMode(EJunoMinifigRotationMode RotationMode);                                                       // [0xc3c8624] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerStoppedPushing
	// void OnPlayerStoppedPushing();                                                                                           // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerOffHandItemChanged
	// void OnPlayerOffHandItemChanged(class AFortWeapon* CurrentItem);                                                         // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerMainHandItemChanged
	// void OnPlayerMainHandItemChanged(class AFortWeapon* CurrentItem);                                                        // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.OnPlayerEmotionChanged
	// void OnPlayerEmotionChanged();                                                                                           // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerStrideScale
	// float GetPlayerStrideScale();                                                                                            // [0xc3c73cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerRotationTargetInterpolationSpeeds
	// void GetPlayerRotationTargetInterpolationSpeeds(float& SmoothedSpeed, float& SuperSmoothedSpeed);                        // [0xc3c72f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerRotationMode
	// EJunoMinifigRotationMode GetPlayerRotationMode();                                                                        // [0xc3c72a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayerAnimInstance.GetPlayerLeanAmount
	// float GetPlayerLeanAmount();                                                                                             // [0xc3c7280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPropAnimInstance
/// Size: 0x0010 (0x000470 - 0x000480)
class UJunoPropAnimInstance : public UJunoAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	DMember(bool)                                      bIsMoving2D                                                 OFFSET(get<bool>, {0x470, 1, 0, 0})
};

/// Class /Script/JunoGameNative.AudioEventAggregatorSubsystem
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UAudioEventAggregatorSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnSoundBreakEvents                                          OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSoundCollisionEvents                                      OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveSoundBreakEventsUpdated                             OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveSoundCollisionEventsUpdated                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetRadius
	// void SetRadius(float Radius);                                                                                            // [0xc3c86c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetCollisionEventLifetime
	// void SetCollisionEventLifetime(float Time);                                                                              // [0xc3c85a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetCollisionDeltaVelocityMagnitudeThreshold
	// void SetCollisionDeltaVelocityMagnitudeThreshold(float Magnitude);                                                       // [0xc3c8524] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.SetBreakEventLifetime
	// void SetBreakEventLifetime(float Time);                                                                                  // [0xc3c84a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.RemoveActiveCollisionEvent
	// void RemoveActiveCollisionEvent(FGuid EventId);                                                                          // [0xc3c8358] Final|Native|Public|HasDefaults 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.RemoveActiveBreakEvent
	// void RemoveActiveBreakEvent(FGuid EventId);                                                                              // [0xc3c82c8] Final|Native|Public|HasDefaults 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.IsAggregatingCollisionEvents
	// bool IsAggregatingCollisionEvents();                                                                                     // [0xc3c79b8] Final|Native|Public  
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.InitChaosEventRelay
	// void InitChaosEventRelay();                                                                                              // [0xc3c79a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.FilterAndGroupCollisionEvents
	// void FilterAndGroupCollisionEvents(TArray<FCollisionChaosEvent>& CollisionEvents);                                       // [0xc3c6c78] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.FilterAndGroupBreakEvents
	// void FilterAndGroupBreakEvents(TArray<FChaosBreakEvent>& BreakEvents);                                                   // [0xc3c6588] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.AudioEventAggregatorSubsystem.DeinitChaosEventRelay
	// void DeinitChaosEventRelay();                                                                                            // [0xc3c6574] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoFoleyContext
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UJunoFoleyContext : public UFortPlayerFoleyContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(float)                                     PitchMultiplier                                             OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoActiveItemAnimContext
/// Size: 0x0000 (0x000098 - 0x000098)
class UJunoActiveItemAnimContext : public USoundLibraryAnimContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/JunoGameNative.JunoCameraMode_OrbitCam
/// Size: 0x00C0 (0x001CD0 - 0x001D90)
class UJunoCameraMode_OrbitCam : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7568;

public:
	DMember(bool)                                      bIsBuildPreviewMode                                         OFFSET(get<bool>, {0x1CD0, 1, 0, 0})
	SMember(FTransform)                                BuildPreviewActorTransform                                  OFFSET(getStruct<T>, {0x1CE0, 96, 0, 0})
	SMember(FBox)                                      BuildPreviewLocalBounds                                     OFFSET(getStruct<T>, {0x1D40, 56, 0, 0})
	DMember(bool)                                      bOverrideCameraOriginDuringBuildPreview                     OFFSET(get<bool>, {0x1D78, 1, 0, 0})
	CMember(class UCurveFloat*)                        BuildPreviewBoundsToForwardDistanceScale                    OFFSET(get<T>, {0x1D80, 8, 0, 0})
	DMember(bool)                                      bUseNativeBPFunctions                                       OFFSET(get<bool>, {0x1D88, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.UpdateCameraBP
	// void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                     // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.OnBecomeActiveBP
	// void OnBecomeActiveBP(class AActor* ViewTarget);                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.IsCurrentlyInBuildPreviewMode
	// bool IsCurrentlyInBuildPreviewMode();                                                                                    // [0xc3c79d4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.GetBuildPreviewerFromViewTarget
	// class AJunoBuilderTool* GetBuildPreviewerFromViewTarget(class AActor* ViewTarget);                                       // [0xc3c6d30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCameraMode_OrbitCam.CalculateCameraOriginForBuildPreview
	// bool CalculateCameraOriginForBuildPreview(class AActor* ViewTarget, FVector& OutOrigin);                                 // [0x1340978] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.FortClientPilot_QuickSmokeJuno
/// Size: 0x0010 (0x000310 - 0x000320)
class UFortClientPilot_QuickSmokeJuno : public UFortClientPilot_GameplayBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/JunoGameNative.FortPickupInteractOverrideComponent_Juno
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UFortPickupInteractOverrideComponent_Juno : public UFortPickupInteractOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/JunoGameNative.JunoAIPersistenceComponent
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UJunoAIPersistenceComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAIPersistenceComponent.HandleControllerChanged
	// void HandleControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController);     // [0xc3c7508] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAIPersistenceComponent.HandleAIFullySpawned
	// void HandleAIFullySpawned(class AAIController* Controller, class AFortPawn* Pawn);                                       // [0xc3c73f4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoAIPersistenceComponent.GetUniqueAIIdentifier
	// FGameplayTag GetUniqueAIIdentifier();                                                                                    // [0xa67af08] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoAIPersistenceComponent.CostlyFindSpawnedNPCByUniqueAIIdentifier
	// class AFortPawn* CostlyFindSpawnedNPCByUniqueAIIdentifier(class UWorld* World, FGameplayTag& UniqueAIIdentifier);        // [0xc3c6484] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAIPersistenceComponent.CostlyFindSpawnedCreatureByUniqueAIIdentifier
	// class AFortPawn* CostlyFindSpawnedCreatureByUniqueAIIdentifier(class UWorld* World, FGameplayTag& UniqueAIIdentifier);   // [0xc3c6484] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoAIPersistenceComponent.CostlyFindSpawnedAIByUniqueAIIdentifier
	// class AFortPawn* CostlyFindSpawnedAIByUniqueAIIdentifier(class UWorld* World, FGameplayTag& UniqueAIIdentifier, bool bSearchForNPC, bool bSearchForCreature); // [0xc3c62a0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoCameraModeOverrideComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UJunoCameraModeOverrideComponent : public UFortCameraModeOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UJunoControllerComponent_BedAssignmentNetworkEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FJunoReplicatedCharacterData)              ReplicatedCharacterData                                     OFFSET(getStruct<T>, {0xC0, 40, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.TryFindCharacterDisplayName
	// FText TryFindCharacterDisplayName(FGameplayTag& CharacterGameplayTag);                                                   // [0xc3fca68] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerHandleEndInteraction
	// void ServerHandleEndInteraction();                                                                                       // [0x8c58fbc] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerAttemptAssignPlayerCharacter
	// void ServerAttemptAssignPlayerCharacter(class AActor* ReceivingActor);                                                   // [0xc3fbde0] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ServerAttemptAssignAICharacter
	// void ServerAttemptAssignAICharacter(class AActor* ReceivingActor, FGameplayTag CharacterGameplayTag);                    // [0xc3fbd18] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.OnRep_CharacterData
	// void OnRep_CharacterData();                                                                                              // [0xc3fbaf4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.HandleCampObjectInteracted
	// void HandleCampObjectInteracted(class AActor* ReceivingActor);                                                           // [0xc3fb52c] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.GetCharacterData
	// FJunoReplicatedCharacterData GetCharacterData();                                                                         // [0xc3fafb0] Final|RequiredAPI|Native|Public 
	// Function /Script/JunoGameNative.JunoControllerComponent_BedAssignmentNetworkEvents.ClientNotifyObjectInteracted
	// void ClientNotifyObjectInteracted(class AActor* ReceivingActor);                                                         // [0x8c91254] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_ControlChannelNetworkEvents
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJunoControllerComponent_ControlChannelNetworkEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_ControlChannelNetworkEvents.ServerSetControlEnabled
	// void ServerSetControlEnabled(bool bEnabled);                                                                             // [0x9045e4c] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_ControlChannelNetworkEvents.ServerSetControlChannelValue
	// void ServerSetControlChannelValue(class UJunoControlChannelComponent* ControlChannelComponent, FGameplayTag ChannelTag, float InValue); // [0xc3fc748] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent_ControlChannelNetworkEvents.ServerChangeChannelForActor
	// void ServerChangeChannelForActor(class AActor* Actor, bool bIsBroadcaster, int32_t NewChannelColorIndex, bool bIsSelected); // [0xc3fc17c] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_PickupManagement
/// Size: 0x0010 (0x000158 - 0x000168)
class UJunoGameStateComponent_PickupManagement : public UFortGameStateComponent_PickupManagement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FDataTableRowHandle)                       SettingsRow                                                 OFFSET(getStruct<T>, {0x158, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_PickupManagement.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xc3fb9c4] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoInputBasedAFKComponent
/// Size: 0x0080 (0x0001B8 - 0x000238)
class UJunoInputBasedAFKComponent : public UFortInputBasedAFKComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FDataTableRowHandle)                       AFKTableRowEntry                                            OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FInputBasedAFKDetectionParameters)         CachedAFKDetectionParameters                                OFFSET(getStruct<T>, {0x1C8, 112, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInputBasedAFKComponent.HandleInventoryItemChanged
	// void HandleInventoryItemChanged(FJunoItemSlot& ItemSlot, EJunoItemChangeType ChangeType);                                // [0xc3fb5ac] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantComponent
/// Size: 0x0028 (0x0000F8 - 0x000120)
class UJunoPlayspaceAccountantComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.IsAccountantReady
	// bool IsAccountantReady();                                                                                                // [0xc3fb9a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.IncrementValue
	// void IncrementValue(FName ValueName, int32_t Value);                                                                     // [0xc3fb770] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.GetValue
	// int32_t GetValue(FName ValueName);                                                                                       // [0xc3fb3d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.GetJunoPlayspaceAccountantComponent
	// class UJunoPlayspaceAccountantComponent* GetJunoPlayspaceAccountantComponent(class UObject* WorldContextObject, FVector& Location); // [0xc3fb0d4] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceAccountantComponent.DecrementValue
	// void DecrementValue(FName ValueName, int32_t Value);                                                                     // [0xc3f9f44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UJunoPlayspaceRandomStreamComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(int32_t)                                   PlayspaceRandomSeed                                         OFFSET(get<int32_t>, {0xF8, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.OnVolumeGuidChanged
	// void OnVolumeGuidChanged(class AActor* Actor, FGuid NewGuid);                                                            // [0xc3fbbac] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.OnVolumeBoundsChanged
	// void OnVolumeBoundsChanged(class APlayspace* Playspace);                                                                 // [0xc3fbb30] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GetJunoRootPlayspaceRandomStreamComponent
	// class UJunoPlayspaceRandomStreamComponent* GetJunoRootPlayspaceRandomStreamComponent(class UObject* WorldContextObject); // [0xc3fb334] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GetJunoPlayspaceRandomStreamComponent
	// class UJunoPlayspaceRandomStreamComponent* GetJunoPlayspaceRandomStreamComponent(class UObject* WorldContextObject, FVector& Location); // [0xc3fb22c] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GenerateRandomStream
	// FRandomStream GenerateRandomStream(FString Name, FVector OptionalLocation);                                              // [0xc3fa894] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPlayspaceRandomStreamComponent.GenerateRandomSeed
	// int32_t GenerateRandomSeed(FString Name, FVector OptionalLocation);                                                      // [0xc3fa17c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoHarvestingComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UJunoHarvestingComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     HeightOffset                                                OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     HorizontalConeRadius                                        OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     VerticalConeRadius                                          OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(class UDataTable*)                         BuildingTagToResourceDataTable                              OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ResourceIdentifierTags                                      OFFSET(getStruct<T>, {0xB8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     BuildingTagsToIgnoreForResourceSplitting                    OFFSET(getStruct<T>, {0xD8, 32, 0, 0})
	SMember(FDataRegistryType)                         CraftingIngredientRegistryType                              OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	DMember(float)                                     TimeToRegenHealth                                           OFFSET(get<float>, {0xFC, 4, 0, 0})
	CMember(TArray<FJunoBuildingHitData>)              BuildingsHitList                                            OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     ResourcePercentToReturn                                     OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(int32_t)                                   PickupsPerResource                                          OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PickupClassPtr                                              OFFSET(get<T>, {0x118, 32, 0, 0})
	DMember(float)                                     TossSpeed                                                   OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     ConeHalfAngleDegrees                                        OFFSET(get<float>, {0x13C, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayerSpawningComponent
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class UJunoPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FGameplayTagContainer)                     AllowedTeamStartTags                                        OFFSET(getStruct<T>, {0xD8, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCoreMutators
/// Size: 0x0048 (0x000338 - 0x000380)
class AJunoCoreMutators : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FMulticastInlineDelegate)                  OnPawnLoaded                                                OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClientInitialLoadingFinished                              OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	DMember(bool)                                      bIsJunoPlayspaceReady                                       OFFSET(get<bool>, {0x358, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPersistentPlayspace
/// Size: 0x0128 (0x000740 - 0x000868)
class AJunoPersistentPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2152;

public:
	CMember(class UJunoPlayspacePersistenceComponent*) PersistenceComponent                                        OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(ESpatialLoadingState)                      SpatialLoadingState                                         OFFSET(get<T>, {0x790, 1, 0, 0})
	SMember(FName)                                     PersistenceMainLevelUniquePackageName                       OFFSET(getStruct<T>, {0x794, 4, 0, 0})
	CMember(TWeakObjectPtr<ULevel*>)                   PersistenceMainLevelWeakPtr                                 OFFSET(get<T>, {0x798, 8, 0, 0})
	DMember(uint32_t)                                  PlayspaceRequestKey                                         OFFSET(get<uint32_t>, {0x7A0, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.ShouldBeTrackedByPlayspace
	// bool ShouldBeTrackedByPlayspace(class AActor* Actor);                                                                    // [0xc56ab40] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.SetShouldBeTrackedByPlayspace
	// void SetShouldBeTrackedByPlayspace(class AActor* Actor, bool bShouldBeTracked);                                          // [0xc56aa8c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.RemoveActorWhenEndPlay
	// void RemoveActorWhenEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                             // [0xc56a92c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPersistentPlayspace.EnableSpawnedActorTracking
	// void EnableSpawnedActorTracking(class AActor* Actor);                                                                    // [0xc56a36c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoRootPlayspace
/// Size: 0x0188 (0x000868 - 0x0009F0)
class AJunoRootPlayspace : public AJunoPersistentPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2544;

public:
	CMember(TWeakObjectPtr<AFortPlayerControllerAthena*>) OwningController                                         OFFSET(get<T>, {0x888, 8, 0, 0})
	SMember(FGameplayTag)                              DefaultInventoryItemTag                                     OFFSET(getStruct<T>, {0x890, 4, 0, 0})
	CMember(class UPlayspaceComponent_JunoServerExpiration*) JunoServerExpiration                                  OFFSET(get<T>, {0x898, 8, 0, 0})
	CMember(class UJunoPlayerSpawningComponent*)       JunoPlayerSpawningComponent                                 OFFSET(get<T>, {0x8A0, 8, 0, 0})
	DMember(float)                                     ProcessPlayerProgressionTime                                OFFSET(get<float>, {0x8C0, 4, 0, 0})
	CMember(class UClass*)                             JunoStateMachineClass                                       OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(EWorldDataAvailable)                       WorldDataAvailable                                          OFFSET(get<T>, {0x8D8, 1, 0, 0})
	DMember(bool)                                      bRootPlayspaceReady                                         OFFSET(get<bool>, {0x8D9, 1, 0, 0})
	CMember(class UJunoWorld*)                         CurrentJunoWorld                                            OFFSET(get<T>, {0x8E0, 8, 0, 0})
	SMember(FJunoReplicatedWorldMetadata)              MetadataForReplication                                      OFFSET(getStruct<T>, {0x8F0, 144, 0, 0})
	CMember(class UJunoPlayerPersistenceComponent*)    JunoPlayerPersistenceComponent                              OFFSET(get<T>, {0x980, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoRootPlayspace.OnRep_WorldMetadata
	// void OnRep_WorldMetadata();                                                                                              // [0xc3fbb1c] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoStateMachine
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UJunoStateMachine : public UGameplayStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/JunoGameNative.JunoState_Setup
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UJunoState_Setup : public UGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               PossibleWorldsDataTable                                     OFFSET(get<T>, {0x78, 32, 0, 0})
	DMember(int32_t)                                   WorldRandomSeed                                             OFFSET(get<int32_t>, {0x98, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCreatureAnimInstance
/// Size: 0x0280 (0x000590 - 0x000810)
class UJunoCreatureAnimInstance : public UJunoPawnAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	DMember(bool)                                      bIsTurning                                                  OFFSET(get<bool>, {0x590, 1, 0, 0})
	DMember(bool)                                      bWasTurning                                                 OFFSET(get<bool>, {0x591, 1, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x592, 1, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x594, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x598, 1, 0, 0})
	SMember(FVector)                                   CreaturePosition                                            OFFSET(getStruct<T>, {0x5A0, 24, 0, 0})
	SMember(FVector)                                   CreaturePositionDelta                                       OFFSET(getStruct<T>, {0x5B8, 24, 0, 0})
	SMember(FRotator)                                  CreatureRootRotation                                        OFFSET(getStruct<T>, {0x5D0, 24, 0, 0})
	SMember(FRotator)                                  CreatureRootRotationOffset                                  OFFSET(getStruct<T>, {0x5E8, 24, 0, 0})
	SMember(FRotator)                                  CreatureRotation                                            OFFSET(getStruct<T>, {0x600, 24, 0, 0})
	SMember(FRotator)                                  CreatureRotationDelta                                       OFFSET(getStruct<T>, {0x618, 24, 0, 0})
	SMember(FVector)                                   CreatureVelocity                                            OFFSET(getStruct<T>, {0x630, 24, 0, 0})
	DMember(float)                                     CreatureYaw                                                 OFFSET(get<float>, {0x648, 4, 0, 0})
	DMember(float)                                     CreatureYawDelta                                            OFFSET(get<float>, {0x64C, 4, 0, 0})
	DMember(bool)                                      RootSmoothing_Enabled                                       OFFSET(get<bool>, {0x650, 1, 0, 0})
	DMember(float)                                     RootSmoothing_Distance                                      OFFSET(get<float>, {0x654, 4, 0, 0})
	DMember(bool)                                      bSlopeWarpingIsEnabled                                      OFFSET(get<bool>, {0x658, 1, 0, 0})
	DMember(float)                                     SlopeWarpingFloorCheckFrequency                             OFFSET(get<float>, {0x65C, 4, 0, 0})
	DMember(float)                                     SlopeWarpingRollAlpha                                       OFFSET(get<float>, {0x660, 4, 0, 0})
	DMember(bool)                                      bStartingInPlace                                            OFFSET(get<bool>, {0x664, 1, 0, 0})
	SMember(FVector)                                   StartInPlace_RootTranslation                                OFFSET(getStruct<T>, {0x668, 24, 0, 0})
	CMember(class UAnimSequence*)                      StartInPlace_Sequence                                       OFFSET(get<T>, {0x680, 8, 0, 0})
	DMember(float)                                     StartInPlace_SequenceTime                                   OFFSET(get<float>, {0x688, 4, 0, 0})
	DMember(bool)                                      bTurningInPlace                                             OFFSET(get<bool>, {0x68C, 1, 0, 0})
	DMember(bool)                                      bTurnInPlace_UseAuthoredAngle                               OFFSET(get<bool>, {0x68D, 1, 0, 0})
	CMember(class UAnimSequence*)                      TurnAnimation                                               OFFSET(get<T>, {0x690, 8, 0, 0})
	DMember(float)                                     TurnInPlace_AnimationAuthoredAngle                          OFFSET(get<float>, {0x698, 4, 0, 0})
	DMember(float)                                     TurnPlayRate                                                OFFSET(get<float>, {0x69C, 4, 0, 0})
	DMember(float)                                     TurnInPlace_RootRotationZ                                   OFFSET(get<float>, {0x6A0, 4, 0, 0})
	DMember(float)                                     TurnInPlace_RotationAngle                                   OFFSET(get<float>, {0x6A4, 4, 0, 0})
	DMember(float)                                     TurnInPlace_RotationAngle_Min                               OFFSET(get<float>, {0x6A8, 4, 0, 0})
	DMember(float)                                     TurnInPlace_RotationRate                                    OFFSET(get<float>, {0x6AC, 4, 0, 0})
	CMember(class UAnimSequence*)                      TurnInPlace_Sequence                                        OFFSET(get<T>, {0x6B0, 8, 0, 0})
	DMember(float)                                     TurnInPlace_SequenceTime                                    OFFSET(get<float>, {0x6B8, 4, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      OFFSET(get<bool>, {0x6BC, 1, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x6C0, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x6C4, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x6C8, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x6CC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x6D0, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x6D4, 4, 0, 0})
	DMember(bool)                                      bHasValidAimTarget                                          OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	SMember(FVector)                                   AimTargetLocation                                           OFFSET(getStruct<T>, {0x6E0, 24, 0, 0})
	DMember(float)                                     AimTime                                                     OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     LookAtAlpha                                                 OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayerForLookAt                                OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     LookAtTooFarFromPlayerTimeOut                               OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(bool)                                      bDisableLookAtDuringMontage                                 OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(bool)                                      bStartTurn                                                  OFFSET(get<bool>, {0x709, 1, 0, 0})
	DMember(float)                                     TurnAngle                                                   OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     TurnRate                                                    OFFSET(get<float>, {0x710, 4, 0, 0})
	SMember(FName)                                     DisableHeadTrackingCurveName                                OFFSET(getStruct<T>, {0x714, 4, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(bool)                                      bPlayLandAdditive                                           OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(bool)                                      bIsFloating                                                 OFFSET(get<bool>, {0x71D, 1, 0, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          OFFSET(get<bool>, {0x71E, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x71F, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Started
	// void TurnInPlace_Started();                                                                                              // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_SignalAnimationEnded
	// void TurnInPlace_SignalAnimationEnded();                                                                                 // [0xc3fd69c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Setup
	// void TurnInPlace_Setup(class UAnimSequence* TurnAnimSequence);                                                           // [0xc3fcba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Interrupted
	// void TurnInPlace_Interrupted();                                                                                          // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.TurnInPlace_Ended
	// void TurnInPlace_Ended();                                                                                                // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.StartInPlace_Started
	// void StartInPlace_Started();                                                                                             // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.StartInPlace_Setup
	// void StartInPlace_Setup(class UAnimSequence* StartAnimSequence);                                                         // [0xc3fc968] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.CreatureIsMovingRight
	// bool CreatureIsMovingRight();                                                                                            // [0xc3f9ebc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoCreatureAnimInstance.CreatureIsMovingLeft
	// bool CreatureIsMovingLeft();                                                                                             // [0xc3f9e34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoCreatureAnimInstance_LootLlama
/// Size: 0x0030 (0x000810 - 0x000840)
class UJunoCreatureAnimInstance_LootLlama : public UJunoCreatureAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	DMember(bool)                                      bHighVelocity                                               OFFSET(get<bool>, {0x808, 1, 0, 0})
	DMember(bool)                                      bIsInterruptible                                            OFFSET(get<bool>, {0x809, 1, 0, 0})
	DMember(bool)                                      bLocoToIdle                                                 OFFSET(get<bool>, {0x80A, 1, 0, 0})
	DMember(bool)                                      bIdleToLoco                                                 OFFSET(get<bool>, {0x80B, 1, 0, 0})
	DMember(bool)                                      bJumpStartToJumpLoop                                        OFFSET(get<bool>, {0x80C, 1, 0, 0})
	DMember(bool)                                      bJumpLandToMovement                                         OFFSET(get<bool>, {0x80D, 1, 0, 0})
	DMember(bool)                                      bIsRunning                                                  OFFSET(get<bool>, {0x80E, 1, 0, 0})
	DMember(bool)                                      bIdleToFalling                                              OFFSET(get<bool>, {0x80F, 1, 0, 0})
	DMember(bool)                                      bToppledOnGround                                            OFFSET(get<bool>, {0x810, 1, 0, 0})
	DMember(bool)                                      bTransitionToLand                                           OFFSET(get<bool>, {0x811, 1, 0, 0})
	DMember(float)                                     TargetDistance                                              OFFSET(get<float>, {0x814, 4, 0, 0})
	DMember(bool)                                      bTargetIsClose                                              OFFSET(get<bool>, {0x818, 1, 0, 0})
	DMember(bool)                                      bIsToppled                                                  OFFSET(get<bool>, {0x819, 1, 0, 0})
	DMember(bool)                                      bIsLeaking                                                  OFFSET(get<bool>, {0x81A, 1, 0, 0})
	DMember(float)                                     MinHighVelocityMagnitude                                    OFFSET(get<float>, {0x81C, 4, 0, 0})
	DMember(float)                                     MaxInterruptibleCurveValue                                  OFFSET(get<float>, {0x820, 4, 0, 0})
	DMember(float)                                     LocoIdleTransitionThreshold                                 OFFSET(get<float>, {0x824, 4, 0, 0})
	DMember(float)                                     RunSpeedThreshold                                           OFFSET(get<float>, {0x828, 4, 0, 0})
	DMember(float)                                     JumpLandToMovementInterruptibleThreshold                    OFFSET(get<float>, {0x82C, 4, 0, 0})
	DMember(float)                                     MinTargetIsCloseDistance                                    OFFSET(get<float>, {0x830, 4, 0, 0})
	SMember(FName)                                     CurveName_Interruptible                                     OFFSET(getStruct<T>, {0x834, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFreeBuildPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoDamageFormulaExecutionCalculation
/// Size: 0x0000 (0x000048 - 0x000048)
class UJunoDamageFormulaExecutionCalculation : public UFortDamageFormulaExecutionCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/JunoGameNative.JunoInventory
/// Size: 0x0080 (0x000538 - 0x0005B8)
class AJunoInventory : public AFortInventory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x568, 16, 0, 0})
	DMember(int32_t)                                   InventoryCapacity                                           OFFSET(get<int32_t>, {0x5A0, 4, 0, 0})
	SMember(FGuid)                                     InventoryHandleGuid                                         OFFSET(getStruct<T>, {0x5A4, 16, 0, 0})
	DMember(bool)                                      bIsPersistent                                               OFFSET(get<bool>, {0x5B4, 1, 0, 0})
	DMember(bool)                                      bWasSpawnedByLevelSaveRecord                                OFFSET(get<bool>, {0x5B5, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryManagerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJunoInventoryManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FJunoInventoryHandle>)              InventoryHandles                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AJunoInventory*>>)   InventoryInstances                                          OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInventoryManagerComponent.OnRep_InventoryInstances
	// void OnRep_InventoryInstances();                                                                                         // [0xc4553e4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoInventoryManagerComponent.OnRep_InventoryHandles
	// void OnRep_InventoryHandles();                                                                                           // [0xc4553d0] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoInventoryPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoInventoriesSaveData)                  SavedInventories                                            OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoInventoryPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TArray<class AJunoInventory*>)             SavedInventories                                            OFFSET(get<T>, {0x2D8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoInventoryPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoInventoryUIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FJunoInventoryUISaveData)                  SavedInventoryUI                                            OFFSET(getStruct<T>, {0x48, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureDataActor
/// Size: 0x0058 (0x0002D0 - 0x000328)
class AJunoInventoryUIPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TMap<FGuid, FJunoSavedInventoryUIData>)    SavedInventoryUI                                            OFFSET(get<T>, {0x2D8, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoInventoryUIPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPlayerInventoryComponent
/// Size: 0x0000 (0x000310 - 0x000310)
class UJunoPlayerInventoryComponent : public UJunoInventoryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerInventoryComponent.OnPlayerPawnPossessed
	// void OnPlayerPawnPossessed(class APawn* PossessedPawn);                                                                  // [0xc45529c] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoBuilderTool
/// Size: 0x0068 (0x001570 - 0x0015D8)
class AJunoBuilderTool : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5592;

public:
	SMember(FMulticastInlineDelegate)                  OnBuilderToolInteractionStarted                             OFFSET(getStruct<T>, {0x1570, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuilderToolInteractionStopped                             OFFSET(getStruct<T>, {0x1580, 16, 0, 0})
	CMember(class UJunoInputMappingComponentData*)     InputMappingData                                            OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(class UInputAction*)                       UnEquipInputAction                                          OFFSET(get<T>, {0x1598, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ActivatedTags                                               OFFSET(getStruct<T>, {0x15A0, 32, 0, 0})
	CMember(TArray<class UJunoBuilderToolInteractionBehavior*>) InteractionBehaviors                               OFFSET(get<T>, {0x15C0, 16, 0, 0})
	CMember(class UJunoBuilderToolInteractionBehavior*) ActiveInteractionBehavior                                  OFFSET(get<T>, {0x15D0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderTool.ServerStartInteraction
	// void ServerStartInteraction(TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID);                  // [0xc45580c] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuilderTool.ServerClearInteraction
	// void ServerClearInteraction(bool bExited);                                                                               // [0xc455554] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderTool.ReceiveInteractionStarted
	// void ReceiveInteractionStarted(class UJunoBuilderToolInteractionBehavior* InteractionBehavior);                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderTool.ReceiveInteractionEnded
	// void ReceiveInteractionEnded(class UJunoBuilderToolInteractionBehavior* InteractionBehavior);                            // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderTool.MulticastStartInteractionOnRemoteClients
	// void MulticastStartInteractionOnRemoteClients(class UJunoBuilderToolInteractionBehavior* InteractionBehavior, TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // [0xc454258] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuilderTool.MulticastClearInteractionOnRemoteClients
	// void MulticastClearInteractionOnRemoteClients();                                                                         // [0x9189e3c] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoBuilderTool.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                          // [0xc454210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x8d1b49c] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetSelectionGUID
	// FGuid GetSelectionGUID();                                                                                                // [0xc453df0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetSelectedActors
	// TArray<FJunoBuilderToolSelectedActor> GetSelectedActors();                                                               // [0xc4536f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.GetActiveInteractionBehavior
	// class UJunoBuilderToolInteractionBehavior* GetActiveInteractionBehavior();                                               // [0xc45333c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderTool.ClientStopInteraction
	// void ClientStopInteraction(bool bIsExiting);                                                                             // [0x8c59e08] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/JunoGameNative.JunoBuilderTool.ClientStartInteraction
	// void ClientStartInteraction(class UJunoBuilderToolInteractionBehavior* InteractionBehavior, TArray<FJunoBuilderToolSelectedActor> SelectedActors, FGuid SelectionGUID); // [0xc452bfc] Final|Net|NetReliableNative|Event|Private|HasDefaults|NetClient 
};

/// Class /Script/JunoGameNative.JunoBuilderToolInteractionBehavior
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UJunoBuilderToolInteractionBehavior : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FMulticastInlineDelegate)                  OnInteractionStart                                          OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInteractionTrigger                                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInteractionEnd                                            OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInteractionExit                                           OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      bShouldAddToParent                                          OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	SMember(FDataTableRowHandle)                       ConfigData                                                  OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     ActivatedTags                                               OFFSET(getStruct<T>, {0xF8, 32, 0, 0})
	CMember(class UInputMappingContext*)               InputMappingContext                                         OFFSET(get<T>, {0x120, 8, 0, 0})
	DMember(int32_t)                                   InputMappingPriority                                        OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	CMember(class UInputAction*)                       TriggerInputAction                                          OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UInputAction*)                       ExitInputAction                                             OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UClass*)                             StartInteractionAbility                                     OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UClass*)                             EndInteractionAbility                                       OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UClass*)                             FailAbility                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UClass*)                             ExitAbility                                                 OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  SupportedClasses                                            OFFSET(getStruct<T>, {0x160, 160, 0, 0})
	CMember(TArray<FJunoBuilderToolSelectedActor>)     SelectedActors                                              OFFSET(get<T>, {0x200, 16, 0, 0})
	SMember(FGuid)                                     SelectionGUID                                               OFFSET(getStruct<T>, {0x210, 16, 0, 0})
	CMember(TArray<FJunoBuilderToolTimedActors>)       ClientPredictedActors                                       OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TArray<FServerSpawnedActorPair>)           ServerSpawnedActors                                         OFFSET(get<T>, {0x230, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ServerSpawnSelectedActors
	// void ServerSpawnSelectedActors(FJunoBuilderToolSelectionSpawnParams SelectionSpawnParameters);                           // [0xc455750] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ServerOnSpawnedActorProcessedByClient
	// void ServerOnSpawnedActorProcessedByClient(FName StableName);                                                            // [0xc455604] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveTriggerInteraction
	// void ReceiveTriggerInteraction();                                                                                        // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveTickInteraction
	// void ReceiveTickInteraction();                                                                                           // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnServer
	// void ReceiveStartInteractionOnServer(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);                        // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnRemoteClient
	// void ReceiveStartInteractionOnRemoteClient(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);                  // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveStartInteractionOnClient
	// void ReceiveStartInteractionOnClient(TArray<FJunoBuilderToolSelectedActor>& Actors, FGuid& Guid);                        // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveSpawnedActor
	// void ReceiveSpawnedActor(class AActor* SpawnedActor);                                                                    // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveExitInteraction
	// void ReceiveExitInteraction(bool bClearInteractionBehavior);                                                             // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveEndInteraction
	// void ReceiveEndInteraction();                                                                                            // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ReceiveClearInteractionOnRemoteClient
	// void ReceiveClearInteractionOnRemoteClient();                                                                            // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.PlayGameplayAbility
	// void PlayGameplayAbility(class UClass* AbilityClass);                                                                    // [0xc45543c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.OnRep_ServerSpawnedActors
	// void OnRep_ServerSpawnedActors();                                                                                        // [0xc4553f8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                          // [0xc454234] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetSelectionGUID
	// FGuid GetSelectionGUID();                                                                                                // [0xaa57834] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetSelectedActors
	// TArray<FJunoBuilderToolSelectedActor> GetSelectedActors();                                                               // [0xc453dd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetPlayerController
	// class APlayerController* GetPlayerController();                                                                          // [0xc453614] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetInstigator
	// class APawn* GetInstigator();                                                                                            // [0xc45351c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetFortPlayerController
	// class AFortPlayerController* GetFortPlayerController();                                                                  // [0xc453444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.GetBuilderTool
	// class AJunoBuilderTool* GetBuilderTool();                                                                                // [0xc453354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuilderToolInteractionBehavior.ClientOnServerSpawnSelectedActorsFailed
	// void ClientOnServerSpawnSelectedActorsFailed(TArray<FName> FailedNames);                                                 // [0xc452b68] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/JunoGameNative.JunoBuildingActor
/// Size: 0x0270 (0x000C70 - 0x000EE0)
class AJunoBuildingActor : public AJunoBuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3808;

public:
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xC88, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xCA0, 16, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xCB0, 160, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  SupportableClasses                                          OFFSET(getStruct<T>, {0xD50, 160, 0, 0})
	CMember(class UJunoConnectivityComponent*)         Connectivity                                                OFFSET(get<T>, {0xDF0, 8, 0, 0})
	CMember(class AJunoGuidedBuildingLandscapeVisualModifierActor*) TerrainVisualModifierActor                     OFFSET(get<T>, {0xDF8, 8, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xE00, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xE60, 24, 0, 0})
	CMember(TArray<FJunoBuildingSnapEntry>)            SnapEntries                                                 OFFSET(get<T>, {0xE78, 16, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xE88, 80, 0, 0})
	DMember(bool)                                      bCanRegenHealth                                             OFFSET(get<bool>, {0xED8, 1, 1, 0})
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0xED9, 1, 0, 0})
	DMember(bool)                                      bForceOverrideDestroyFoliageWhenPlaced                      OFFSET(get<bool>, {0xEDA, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingActor.SetCanEverAffectNavigation
	// void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent);             // [0xbbb24c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingActor.OnRep_bForceOverrideDestroyFoliageWhenPlaced
	// void OnRep_bForceOverrideDestroyFoliageWhenPlaced();                                                                     // [0xc45540c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoBuildingActor.OnPlacedInWorld
	// void OnPlacedInWorld(bool bFinalize, TArray<FJunoBuilderToolSupportActorComponentPair>& SupportCandidates);              // [0xc454b7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingActor.OnBuildingActorDetached
	// void OnBuildingActorDetached();                                                                                          // [0xc454b64] Native|Protected     
	// Function /Script/JunoGameNative.JunoBuildingActor.OnBuildingActorAttached
	// void OnBuildingActorAttached(FGraphIslandHandle& IslandHandle);                                                          // [0xc454ac0] Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoBuildingAssociatedItemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingAssociatedItemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingAssociatedItemInterface.CanRemoveAssociatedItemFromInventory
	// bool CanRemoveAssociatedItemFromInventory();                                                                             // [0x2eb121c] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingBehaviorBase
/// Size: 0x0330 (0x000250 - 0x000580)
class UJunoBuildingBehaviorBase : public UJunoBuilderToolInteractionBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(class UClass*)                             PreviewerClass                                              OFFSET(get<T>, {0x280, 8, 0, 0})
	SMember(FJunoBuildingPreviewParams)                DefaultPreviewParams                                        OFFSET(getStruct<T>, {0x288, 24, 0, 0})
	CMember(class AJunoBuildingPreviewer*)             Previewer_Internal                                          OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(EJunoBuildingBehaviorState)                BuildingState                                               OFFSET(get<T>, {0x2A8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     BuildingStateTags                                           OFFSET(getStruct<T>, {0x2B0, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuildingStateChanged                                      OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuildingStateTagsChanged                                  OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnterPreviewMode                                          OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExitPreviewMode                                           OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(class UJunoInputMappingComponentData*)     PreviewInputMappingData                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UInputAction*)                       BuildingPreviewModeCameraRotationAction                     OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FTransform)                                SelectionToWorld                                            OFFSET(getStruct<T>, {0x320, 96, 0, 0})
	SMember(FTransform)                                TargetSelectionToWorld                                      OFFSET(getStruct<T>, {0x380, 96, 0, 0})
	SMember(FTransform)                                SmoothedSelectionToWorld                                    OFFSET(getStruct<T>, {0x3E0, 96, 0, 0})
	SMember(FTransform)                                SelectionToBasis                                            OFFSET(getStruct<T>, {0x440, 96, 0, 0})
	SMember(FTransform)                                InterpolationBasis                                          OFFSET(getStruct<T>, {0x4A0, 96, 0, 0})
	DMember(float)                                     LocationLerpAlpha                                           OFFSET(get<float>, {0x500, 4, 0, 0})
	DMember(float)                                     RotationLerpAlpha                                           OFFSET(get<float>, {0x504, 4, 0, 0})
	DMember(bool)                                      bIsCurrentlyInPreviewMode                                   OFFSET(get<bool>, {0x509, 1, 0, 0})
	CMember(EJunoBuildModeType)                        CurrentBuildMode                                            OFFSET(get<T>, {0x50A, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPositionInterpStart                                       OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPositionInterpEnd                                         OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	SMember(FGameplayTagQuery)                         SpatialInterfaceSelectionQuery                              OFFSET(getStruct<T>, {0x530, 72, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionToWorld
	// void SetTargetSelectionToWorld(FTransform& NewSelectionToWorld);                                                         // [0xc4564dc] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionRotation
	// void SetTargetSelectionRotation(FQuat& NewRotation);                                                                     // [0xc456454] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetTargetSelectionLocation
	// void SetTargetSelectionLocation(FVector& NewLocation);                                                                   // [0xc456390] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetSmoothedSelectionToWorld
	// void SetSmoothedSelectionToWorld(FTransform& NewSmoothedSelectionToWorld);                                               // [0xc456290] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetInterpolationBasis
	// void SetInterpolationBasis(FTransform& NewInterpolationBasis);                                                           // [0xc456190] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.SetDisabled
	// void SetDisabled(bool bShouldBeDisabled);                                                                                // [0xc456038] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ServerUpdatePreview
	// void ServerUpdatePreview(FTransform NewSelectionToWorld, EJunoBuildingBehaviorState NewBuildingState);                   // [0xc455f10] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceivePositionInterpStart
	// void ReceivePositionInterpStart();                                                                                       // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceivePositionInterpEnd
	// void ReceivePositionInterpEnd();                                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.ReceiveBuildingStateChanged
	// void ReceiveBuildingStateChanged(EJunoBuildingBehaviorState PreviousState, EJunoBuildingBehaviorState NewState);         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.MulticastUpdatePreviewOnRemoteClients
	// void MulticastUpdatePreviewOnRemoteClients(FTransform NewSelectionToWorld, EJunoBuildingBehaviorState NewBuildingState); // [0xc454998] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.IsDisabled
	// bool IsDisabled();                                                                                                       // [0xc4541f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.HandleBuildModeChanged
	// void HandleBuildModeChanged(FJunoEvent_BuildingModeChanged& Event);                                                      // [0xc454124] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetTargetSelectionToWorld
	// FTransform GetTargetSelectionToWorld();                                                                                  // [0xc453e8c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetSelectionToWorld
	// FTransform GetSelectionToWorld();                                                                                        // [0xc453e18] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewWorldBounds
	// FBox GetPreviewWorldBounds();                                                                                            // [0xc453680] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewLocalBounds
	// FBox GetPreviewLocalBounds();                                                                                            // [0xc453638] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetPreviewer
	// class AJunoBuildingPreviewer* GetPreviewer();                                                                            // [0x67681c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetDefaultPreviewParams
	// FJunoBuildingPreviewParams GetDefaultPreviewParams();                                                                    // [0xc453428] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetBuildingStateTags
	// FGameplayTagContainer GetBuildingStateTags();                                                                            // [0xc4533ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.GetBuildingState
	// EJunoBuildingBehaviorState GetBuildingState();                                                                           // [0xc453378] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.CanSelectedActorsBePlaced
	// bool CanSelectedActorsBePlaced(TArray<FJunoBuilderToolSelectedActor>& InSelectedActors, FTransform& InSelectionToWorld, FGameplayTagContainer& OutBuildingStateTags); // [0xc45235c] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorBase.CanPlaceSelectedActors
	// bool CanPlaceSelectedActors(FGameplayTagContainer& OutBuildingStateTags);                                                // [0xc452288] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingBehavior
/// Size: 0x0CF0 (0x000580 - 0x001270)
class UJunoBuildingBehavior : public UJunoBuildingBehaviorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4720;

public:
	CMember(class UInputAction*)                       RotateInputAction                                           OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UInputAction*)                       NudgeInputAction                                            OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UInputAction*)                       ToggleNudgeInputAction                                      OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UInputAction*)                       AdjacencyInputAction                                        OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UInputAction*)                       SnapToggleInputAction                                       OFFSET(get<T>, {0x598, 8, 0, 0})
	DMember(double)                                    RotationStep                                                OFFSET(get<double>, {0x5A0, 8, 0, 0})
	DMember(float)                                     MaxSelectionDistance                                        OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     MaxSelectionDistanceZ                                       OFFSET(get<float>, {0x5AC, 4, 0, 0})
	SMember(FVector)                                   MaxConnectivityDistance                                     OFFSET(getStruct<T>, {0x5B0, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           DefaultGridOffsetLimit                                      OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	SMember(FVector)                                   PenetrationTolerance                                        OFFSET(getStruct<T>, {0x5D8, 24, 0, 0})
	CMember(class UClass*)                             RotateAbility                                               OFFSET(get<T>, {0x5F0, 8, 0, 0})
	SMember(FJunoBuildingBehaviorOverrides)            Overrides                                                   OFFSET(getStruct<T>, {0x5F8, 608, 0, 0})
	SMember(FQuat)                                     RotationOffset                                              OFFSET(getStruct<T>, {0xD90, 32, 0, 0})
	SMember(FJunoBuildingSnapContext)                  SnapContext                                                 OFFSET(getStruct<T>, {0xDC0, 80, 0, 0})
	SMember(FJunoBuildingConnectivityContext)          ConnectivityContext                                         OFFSET(getStruct<T>, {0xEE0, 672, 0, 0})
	DMember(bool)                                      bEnableAdjacency                                            OFFSET(get<bool>, {0x1180, 1, 0, 0})
	DMember(bool)                                      bEnableSnapPlacement                                        OFFSET(get<bool>, {0x1181, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnToggleSnapping                                            OFFSET(getStruct<T>, {0x1188, 16, 0, 0})
	SMember(FIntPoint)                                 GridOffset                                                  OFFSET(getStruct<T>, {0x1198, 8, 0, 0})
	SMember(FQuat)                                     GridOffsetControlRotation                                   OFFSET(getStruct<T>, {0x11A0, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlacementTypeChanged                                      OFFSET(getStruct<T>, {0x11C0, 16, 0, 0})
	SMember(FJunoBuildingBehaviorStateContext)         CachedBuildingStateContext                                  OFFSET(getStruct<T>, {0x11D0, 48, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuildingStateContextChanged                               OFFSET(getStruct<T>, {0x1200, 16, 0, 0})
	DMember(double)                                    LastTriggerRequestedTimestamp                               OFFSET(get<double>, {0x1210, 8, 0, 0})
	DMember(double)                                    LastTriggerTimestamp                                        OFFSET(get<double>, {0x1218, 8, 0, 0})
	DMember(bool)                                      bAdhesionNeedsReset                                         OFFSET(get<bool>, {0x1220, 1, 0, 0})
	SMember(FVector)                                   LastPawnLocationForSmoothing                                OFFSET(getStruct<T>, {0x1228, 24, 0, 0})
	SMember(FRotator)                                  LastCameraRotationForSmoothing                              OFFSET(getStruct<T>, {0x1240, 24, 0, 0})
	DMember(float)                                     PlayerMotionAmount                                          OFFSET(get<float>, {0x1258, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ToggleAdjacency
	// void ToggleAdjacency();                                                                                                  // [0xc4565dc] Final|Native|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.SetGridOffset
	// void SetGridOffset(FIntPoint& NewOffset);                                                                                // [0xc456108] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.RotateSelection
	// void RotateSelection(double Delta);                                                                                      // [0xc4554d0] Final|Native|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveSnappingEnabled
	// void ReceiveSnappingEnabled();                                                                                           // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveSnappingDisabled
	// void ReceiveSnappingDisabled();                                                                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveRotateSelection
	// void ReceiveRotateSelection();                                                                                           // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceivePositionChangedGridCell
	// void ReceivePositionChangedGridCell(FVector& GridCellLocation);                                                          // [0x1340978] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceiveNudgeInputAction
	// void ReceiveNudgeInputAction(bool bOffsetChanged);                                                                       // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.ReceivedFailedInteraction
	// void ReceivedFailedInteraction();                                                                                        // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.IsAdjacencyEnabled
	// bool IsAdjacencyEnabled();                                                                                               // [0xc4541dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.HasAnySnapEntries
	// bool HasAnySnapEntries();                                                                                                // [0xc4541c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpacePivotOffset
	// FVector GetWorldSpacePivotOffset();                                                                                      // [0xc4540cc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpaceGridOffsetLimits
	// FVector2D GetWorldSpaceGridOffsetLimits(FVector2D& MinOffset, FVector2D& MaxOffset);                                     // [0xc453fd4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetWorldSpaceGridOffset
	// FVector2D GetWorldSpaceGridOffset();                                                                                     // [0xc453f88] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetTargetTraceResult
	// FHitResult GetTargetTraceResult();                                                                                       // [0xc453ee4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetSnapContext
	// FJunoBuildingSnapContext GetSnapContext();                                                                               // [0xc453e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetPivotOffset
	// FVector GetPivotOffset();                                                                                                // [0xc4535e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetPenetrationTolerance
	// FVector GetPenetrationTolerance();                                                                                       // [0xc4535b8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetLastPlacementResult
	// FJunoBuildingPlacementResult GetLastPlacementResult();                                                                   // [0xc453540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridSnapOffset
	// FVector GetGridSnapOffset();                                                                                             // [0xc4534c4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridSize
	// FVector GetGridSize();                                                                                                   // [0xc45349c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridOffsetLimits
	// FJunoBuildingBehaviorGridLimits GetGridOffsetLimits();                                                                   // [0xc453480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetGridOffset
	// FIntPoint GetGridOffset();                                                                                               // [0xc453468] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetConnectivityContext
	// FJunoBuildingConnectivityContext GetConnectivityContext();                                                               // [0xc45340c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetConfigData
	// FJunoBuildingBehaviorInteractionRow GetConfigData();                                                                     // [0xc4533f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.GetBuildingStateContext
	// FJunoBuildingBehaviorStateContext GetBuildingStateContext();                                                             // [0xc453390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.AddGridOffset
	// void AddGridOffset(FIntPoint& OffsetDelta);                                                                              // [0xc452200] Final|Native|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingBehavior.AddCameraSpaceGridOffset
	// void AddCameraSpaceGridOffset(FIntPoint& Delta);                                                                         // [0xc452178] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingBehaviorSelectedActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.UpdateNoTargetPlacement
	// void UpdateNoTargetPlacement(FTransform& NewSelectionToWorld, FTransform& NewUnsnappedSelectionToWorld, FTransform& NewBasis, FTransform& ActorToSelection, FJunoBuildingPlacementResult& PlacementResult, class UJunoBuildingBehavior* Behavior); // [0xc49ab3c] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldUpdateNoTargetPlacement
	// bool ShouldUpdateNoTargetPlacement();                                                                                    // [0x89d86b4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldMinDistanceIncludeBounds
	// bool ShouldMinDistanceIncludeBounds();                                                                                   // [0x6bdc338] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldIgnoreOverlaps
	// bool ShouldIgnoreOverlaps(class UPrimitiveComponent* PrimComp, class AActor* OverlappingActor);                          // [0xc49aa40] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.ShouldBeGridAligned
	// bool ShouldBeGridAligned();                                                                                              // [0x9861b38] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetRotationOffset
	// FRotator GetRotationOffset();                                                                                            // [0x9818908] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetPivotOffset
	// FVector GetPivotOffset();                                                                                                // [0xc49920c] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetOverlappableClasses
	// FJunoBuilderToolInteractionActorClassSet GetOverlappableClasses();                                                       // [0xc498394] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetMinDistance
	// float GetMinDistance();                                                                                                  // [0x9842778] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridSnapOffset
	// FVector GetGridSnapOffset();                                                                                             // [0xc497ab8] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridSize
	// FVector GetGridSize();                                                                                                   // [0xbfd69e8] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetGridOffsetLimits
	// FJunoBuildingBehaviorGridLimits GetGridOffsetLimits();                                                                   // [0xc497a88] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetFloatingValidationDirections
	// TArray<EJunoContactDirection> GetFloatingValidationDirections();                                                         // [0xc497a48] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetCoordinateBasis
	// FTransform GetCoordinateBasis();                                                                                         // [0xc497848] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.GetCameraMode
	// class UClass* GetCameraMode();                                                                                           // [0xc497814] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.CanSupport
	// bool CanSupport(class UClass* ActorClass);                                                                               // [0xc497594] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingBehaviorSelectedActorInterface.CanPlaceSelectedActor
	// bool CanPlaceSelectedActor(class UJunoBuildingBehavior* Behavior, FTransform& ToWorld, FGameplayTagContainer& OutBuildingStateTags); // [0xc497414] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetUnitGridSize
	// FVector GetUnitGridSize();                                                                                               // [0xc499890] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetTargetTransform
	// FTransform GetTargetTransform(FJunoBuildingPlacementResult& PlacementResult);                                            // [0xc49979c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetTargetTraceResult
	// FHitResult GetTargetTraceResult(FJunoBuildingPlacementResult& PlacementResult);                                          // [0xc499664] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetSupportCandidates
	// TArray<AActor*> GetSupportCandidates(FJunoBuilderToolSelectionSpawnParams& Params);                                      // [0xc499588] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetPlacementType
	// EJunoBuildingPlacementType GetPlacementType(FJunoBuildingPlacementResult& PlacementResult);                              // [0xc499244] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBuildingBlueprintLibrary.GetCoordinateBasis
	// FTransform GetCoordinateBasis(FJunoBuildingPlacementResult& PlacementResult);                                            // [0xc4978c8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoBuildingGameplayActor
/// Size: 0x0250 (0x000980 - 0x000BD0)
class AJunoBuildingGameplayActor : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	CMember(class UJunoGeometryCollectionAssemblerComponent*) GeometryCollectionAssemblerComponent                 OFFSET(get<T>, {0xA08, 8, 0, 0})
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xA10, 24, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xA30, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xA90, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xAA8, 16, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xAB8, 160, 0, 0})
	CMember(class UItemDefinitionBase*)                AssociatedItem                                              OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xB60, 80, 0, 0})
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0xBB0, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.SetAssociatedItem
	// void SetAssociatedItem(class UItemDefinitionBase* Item);                                                                 // [0xc49a544] Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.HasBeenMigrated
	// bool HasBeenMigrated();                                                                                                  // [0xc4998d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.GetAssociatedItem
	// class UItemDefinitionBase* GetAssociatedItem();                                                                          // [0xc4977bc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropResourceWithTagOnDeath
	// bool BlueprintCanDropResourceWithTagOnDeath(FGameplayTag ResourceTag);                                                   // [0xc497380] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropResourceOnDeath
	// bool BlueprintCanDropResourceOnDeath();                                                                                  // [0x913b8bc] Native|Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingGameplayActor.BlueprintCanDropItemOnDestroy
	// bool BlueprintCanDropItemOnDestroy();                                                                                    // [0x913b894] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingSnapEditorComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoBuildingSnapEditorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FJunoBuildingSnapEntry>)            SnapEntries                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bShowUnselectedTargetingAreas                               OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingSnappingLocation
/// Size: 0x0030 (0x000220 - 0x000250)
class UJunoBuildingSnappingLocation : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FGameplayTagContainer)                     LocationTags                                                OFFSET(getStruct<T>, {0x220, 32, 0, 0})
	CMember(TArray<FJunoBuildingSnapEntryBase>)        SnapEntries                                                 OFFSET(get<T>, {0x240, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDamageableBuildingInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoDamageableBuildingInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoDamageableBuildingInterface.OnBuildingHandleOutOfHealth
	// void OnBuildingHandleOutOfHealth(FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser, FGameplayTagContainer& InTags); // [0xc499ca0] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoDamageableBuildingInterface.OnBuildingHandleDamage
	// void OnBuildingHandleDamage(class AActor* DamageCauser);                                                                 // [0x89c3498] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingActor
/// Size: 0x07B0 (0x000C70 - 0x001420)
class AJunoGuidedBuildingActor : public AJunoBuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5152;

public:
	SMember(FMulticastInlineDelegate)                  OnCurrentStageUpdateDelegate                                OFFSET(getStruct<T>, {0xC88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStageUpdateDelegate                                       OFFSET(getStruct<T>, {0xC98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStageCompleteDelegate                                     OFFSET(getStruct<T>, {0xCA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSectionCompleteDelegate                                   OFFSET(getStruct<T>, {0xCB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSetCompleteDelegate                                       OFFSET(getStruct<T>, {0xCC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSetIncompleteDelegate                                     OFFSET(getStruct<T>, {0xCD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSetUnfinishedDelegate                                     OFFSET(getStruct<T>, {0xCE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentStageChange                                        OFFSET(getStruct<T>, {0xCF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSnapsUpdatedDelegate                                      OFFSET(getStruct<T>, {0xD08, 16, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xD20, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xD80, 24, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xD98, 160, 0, 0})
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xE38, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xE50, 16, 0, 0})
	DMember(float)                                     MinDistanceOverride                                         OFFSET(get<float>, {0xE60, 4, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xE68, 80, 0, 0})
	SMember(FGameplayTagContainer)                     DestroyOnPlacementTags                                      OFFSET(getStruct<T>, {0xEB8, 32, 0, 0})
	CMember(TArray<FJunoGuidedBuildingData>)           DataArray                                                   OFFSET(get<T>, {0xED8, 16, 0, 0})
	SMember(FJunoGuidedBuildingStateArray)             StateArray                                                  OFFSET(getStruct<T>, {0xEE8, 288, 0, 0})
	SMember(FJunoStageKey)                             CurrentStage                                                OFFSET(getStruct<T>, {0x1008, 8, 0, 0})
	SMember(FJunoGuidedBuildingSetCompleteState)       SetCompleteState                                            OFFSET(getStruct<T>, {0x1010, 16, 0, 0})
	SMember(FDateTime)                                 TimeStarted                                                 OFFSET(getStruct<T>, {0x1020, 8, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwningPlayerID                                              OFFSET(getStruct<T>, {0x1028, 48, 0, 0})
	CMember(TWeakObjectPtr<UMaterial*>)                GuidedBuildingMaterial                                      OFFSET(get<T>, {0x1058, 32, 0, 0})
	SMember(FJunoGuidedBuildingSetData)                SetData                                                     OFFSET(getStruct<T>, {0x1078, 144, 0, 0})
	DMember(float)                                     LifespanAfterCompletion                                     OFFSET(get<float>, {0x1108, 4, 0, 0})
	DMember(float)                                     LifespanAfterUnfinished                                     OFFSET(get<float>, {0x110C, 4, 0, 0})
	DMember(float)                                     TimeDelayBeforeShowingNewStageGhostBrushes                  OFFSET(get<float>, {0x1110, 4, 0, 0})
	CMember(class AFortPlayerController*)              LocalRegisteredController                                   OFFSET(get<T>, {0x1118, 8, 0, 0})
	CMember(class AJunoGuidedBuildingLandscapeVisualModifierActor*) TerrainVisualModifierActor                     OFFSET(get<T>, {0x1120, 8, 0, 0})
	SMember(FJunoGuidedBuildingRegisteredPlayerArray)  RegisteredPlayers                                           OFFSET(getStruct<T>, {0x1190, 328, 0, 0})
	CMember(TWeakObjectPtr<APawn*>)                    AutoCompleteInstigatingPawn                                 OFFSET(get<T>, {0x12D8, 8, 0, 0})
	CMember(class UClass*)                             InteractionComponentClass                                   OFFSET(get<T>, {0x12E0, 8, 0, 0})
	SMember(FScalableFloat)                            FoundationVerticalOffset                                    OFFSET(getStruct<T>, {0x12E8, 40, 0, 0})
	CMember(class UClass*)                             OptionalCameraMode                                          OFFSET(get<T>, {0x1310, 8, 0, 0})
	SMember(FGuid)                                     BuildId                                                     OFFSET(getStruct<T>, {0x1318, 16, 0, 0})
	CMember(TArray<FAutoCompleteData>)                 PendingAutoCompleteJobs                                     OFFSET(get<T>, {0x1328, 16, 0, 0})
	CMember(TArray<FAutoCompleteBatch>)                CurrentAutoCompleteBatches                                  OFFSET(get<T>, {0x1338, 16, 0, 0})
	CMember(TArray<FJunoBuildingSnapEntry>)            SnapEntries                                                 OFFSET(get<T>, {0x1350, 16, 0, 0})
	SMember(FJunoStageKey)                             AutoCompleteStageKey                                        OFFSET(getStruct<T>, {0x1394, 8, 0, 0})
	DMember(bool)                                      bInstantBuildAutoComplete                                   OFFSET(get<bool>, {0x139C, 1, 0, 0})
	DMember(bool)                                      bAllowMobileInteractPromptOffset                            OFFSET(get<bool>, {0x139E, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.UpdateBlueprintColor
	// void UpdateBlueprintColor(FJunoGuidedBuildingBrushState& BrushState);                                                    // [0x1340978] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.ShowSparkleEffect
	// void ShowSparkleEffect();                                                                                                // [0x1340978] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetupComponent
	// void SetupComponent(class UPrimitiveComponent* PrimComp);                                                                // [0x9172ea0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetToAutoCompleteToStage
	// void SetToAutoCompleteToStage(class APawn* InInstigator, FJunoStageKey& InAutoCompleteToStage);                          // [0xc49a8e8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetToAutoCompleteCurrentStage
	// void SetToAutoCompleteCurrentStage(class APawn* InInstigator);                                                           // [0xc49a860] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetToAutoComplete
	// void SetToAutoComplete(class APawn* InInstigator);                                                                       // [0xc49a7e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.SetTerrainVisualModifierOptions
	// void SetTerrainVisualModifierOptions(EJunoLandscapeVisualModifierType InModifierType, FTransform& InTransform);          // [0xc49a674] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_SetCompleteState
	// void OnRep_SetCompleteState();                                                                                           // [0xc49a328] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_RegisteredPlayers
	// void OnRep_RegisteredPlayers();                                                                                          // [0xc49a314] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnRep_CurrentStage
	// void OnRep_CurrentStage(FJunoStageKey OldKeyVal);                                                                        // [0xc49a294] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnGhostBrushesVisible
	// void OnGhostBrushesVisible(bool bIsFocused, bool bCanBlendVisibility);                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnGhostBrushesHidden
	// void OnGhostBrushesHidden(bool bCanBlendVisibility);                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnFilledPieceDied
	// void OnFilledPieceDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0xc499f24] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.OnFilledPieceDestroyed
	// void OnFilledPieceDestroyed(class AActor* Actor);                                                                        // [0xc499ea4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsSetComplete
	// bool IsSetComplete();                                                                                                    // [0xc499b28] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsRecipeInStage
	// bool IsRecipeInStage(FJunoStageKey& InStageKey, FName& Recipe);                                                          // [0xc499a38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsRecipeInCurrentStage
	// bool IsRecipeInCurrentStage(FName& Recipe);                                                                              // [0xc499994] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.IsOwningPlayerController
	// bool IsOwningPlayerController(class APlayerController* Controller);                                                      // [0xc499904] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.HideSparkleEffect
	// void HideSparkleEffect();                                                                                                // [0x1340978] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetStageUpdate
	// FGuidedBuildingUpdate GetStageUpdate(FJunoStageKey& InKey);                                                              // [0xc4994c4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetSetCompleteState
	// FJunoGuidedBuildingSetCompleteState GetSetCompleteState();                                                               // [0xc4994a8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetRemainingPartsInfoForRecipeInCurrentStage
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipeInCurrentStage(FName& Recipe);                          // [0xc499400] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetRemainingPartsInfoForRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetRemainingPartsInfoForRecipe(FJunoStageKey& InStageKey, FName& Recipe);             // [0xc499300] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetPartsInStage
	// bool GetPartsInStage(FJunoStageKey& InStageKey, TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                   // [0xc498ae4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetPartsInCurrentStage
	// bool GetPartsInCurrentStage(TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                                       // [0xc4983f8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetMissingPartsForRecipe
	// FJunoGuidedBuildRemainingPartsInfo GetMissingPartsForRecipe(FName& Recipe);                                              // [0xc498264] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetMissingParts
	// void GetMissingParts(TArray<FJunoGuidedBuildRemainingPartsInfo>& OutArray);                                              // [0xc497b74] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetLatestUpdate
	// FGuidedBuildingUpdate GetLatestUpdate();                                                                                 // [0xc497b30] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingActor.GetEntryState
	// EJunoGuidedBuildingState GetEntryState(int32_t BuildingDataIndex);                                                       // [0xc4979bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGuidedBuildingBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.ShowProgressUpTo
	// void ShowProgressUpTo(FJunoStageKey& InStageKey);                                                                        // [0xc497310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.ShowAllStages
	// void ShowAllStages();                                                                                                    // [0x35e6228] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.SetStageHidden
	// void SetStageHidden(FJunoStageKey StageKey, bool bHidden);                                                               // [0xc49a5c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.SetActorToDestroyAtStage
	// void SetActorToDestroyAtStage(class AActor* Actor, FGameplayTag& StageTag, bool bDestroy);                               // [0xc49a3e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.SetActorToAutoComplete
	// void SetActorToAutoComplete(class AActor* Actor, bool bAutoComplete);                                                    // [0x89c4c98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.MoveActorToNewStageByName
	// void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage);                                               // [0xc499bf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.MoveActorToNewStage
	// void MoveActorToNewStage(class AActor* Actor, FJunoStageKey& NewStage);                                                  // [0xc499b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.IsolateStage
	// void IsolateStage(FJunoStageKey& InStageKey);                                                                            // [0xc497310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.HideAllStages
	// void HideAllStages();                                                                                                    // [0x35e6228] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetPreviousStage
	// FJunoStageKey GetPreviousStage(FJunoStageKey StageKey);                                                                  // [0xc49830c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetNextStage
	// FJunoStageKey GetNextStage(FJunoStageKey StageKey);                                                                      // [0xc49830c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetJunoGuidedBuildingWorldSettings
	// class AJunoGuidedBuildingSettings* GetJunoGuidedBuildingWorldSettings();                                                 // [0x6b68584] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.GetAllStageKeys
	// TArray<FJunoStageKey> GetAllStageKeys();                                                                                 // [0xc49778c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoGuidedBuildingBlueprintLibrary.CheckForGuidedBuildingOverlap
	// void CheckForGuidedBuildingOverlap(class AActor* ActorToCheck);                                                          // [0xc497640] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingInteractionComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoGuidedBuildingInteractionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) ParentBuilding                                              OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FText)                                     InteractionText                                             OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     InteractRatingAdjustment                                    OFFSET(get<float>, {0xC0, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingInteractionComponent.GetInteractionText
	// FText GetInteractionText();                                                                                              // [0xc497af0] Native|Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor
/// Size: 0x0048 (0x000290 - 0x0002D8)
class AJunoGuidedBuildingLandscapeVisualModifierActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UJunoLandscapeVisualModifierComponent*) VisualModifier                                           OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(getStruct<T>, {0x2A4, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor.SetupVisualModifier
	// void SetupVisualModifier(EJunoLandscapeVisualModifierType InModifierType);                                               // [0xc49a9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor.RemoveOwningPartRef
	// void RemoveOwningPartRef(class AActor* InOwningPart);                                                                    // [0xc49a364] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingLandscapeVisualModifierActor.AddOwningPartRef
	// void AddOwningPartRef(class AActor* InOwningPart);                                                                       // [0xc497294] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoGuidedBuildingSettings
/// Size: 0x0240 (0x000290 - 0x0004D0)
class AJunoGuidedBuildingSettings : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	DMember(float)                                     ZLevelSize                                                  OFFSET(get<float>, {0x290, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      SortRankTags                                                OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<class UClass*>)                     BaseActorClasses                                            OFFSET(get<T>, {0x2A8, 16, 0, 0})
	CMember(TArray<class UClass*>)                     AllowedInterfaces                                           OFFSET(get<T>, {0x2B8, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ExcludedBaseActorClasses                                    OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FJunoGuidedBuildingSetEditorData)          GeneratedData                                               OFFSET(getStruct<T>, {0x2D8, 176, 0, 0})
	CMember(TArray<FString>)                           DefaultPluginsToActivate                                    OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FName)                                     PrimaryPlaylist                                             OFFSET(getStruct<T>, {0x398, 4, 0, 0})
	CMember(TMap<UClass*, FName>)                      ClassToRecipeMap                                            OFFSET(get<T>, {0x3A0, 80, 0, 0})
	SMember(FName)                                     CraftingFormulaRegistryType                                 OFFSET(getStruct<T>, {0x3F0, 4, 0, 0})
	SMember(FGuidedBuildingCachedEditorData)           CurrentState                                                OFFSET(getStruct<T>, {0x3F8, 200, 0, 0})
	CMember(TArray<FJunoBuildingEditorActorEntry>)     ActorList                                                   OFFSET(get<T>, {0x4C0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.StartGeneratingGuidedBuildingAssets
	// void StartGeneratingGuidedBuildingAssets();                                                                              // [0xc49ab08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.SetActorToDestroyAtStage
	// void SetActorToDestroyAtStage(class AActor* Actor, FGameplayTag& StageTag, bool bDestroy);                               // [0xc49a3e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.SetActorToAutoComplete
	// void SetActorToAutoComplete(class AActor* Actor, bool bAutoComplete);                                                    // [0x89c4c98] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.MoveActorToNewStageByName
	// void MoveActorToNewStageByName(FName& ActorName, FJunoStageKey& NewStage);                                               // [0xc499bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.MoveActorToNewStage
	// void MoveActorToNewStage(class AActor* Actor, FJunoStageKey& NewStage);                                                  // [0xc499b40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.GetAllStageKeys
	// TArray<FJunoStageKey> GetAllStageKeys();                                                                                 // [0xc497770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.GetActorIdentifier
	// FName GetActorIdentifier(class AActor* ActorPtr);                                                                        // [0xc4976ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.GenerateNewStageData
	// void GenerateNewStageData();                                                                                             // [0xc4976b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoGuidedBuildingSettings.AddStage
	// void AddStage(FJunoStageKey& NewStage);                                                                                  // [0xc497310] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoISMPoolRenderer
/// Size: 0x01D8 (0x000028 - 0x000200)
class UJunoISMPoolRenderer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(class AGeometryCollectionISMPoolActor*)    ISMPoolActor                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UGeometryCollectionISMPoolComponent*) ISMPoolComponentOverride                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<class UAtomModelAssetUserData*>)    AtomUserDatas                                               OFFSET(get<T>, {0x1E0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingRenderComponent
/// Size: 0x0000 (0x000220 - 0x000220)
class UJunoBuildingRenderComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /Script/JunoGameNative.JunoISMPoolRendererSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoISMPoolRendererSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   MergedMeshMinLod                                            OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     MergedMeshLodScale                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MergedMeshPropMinLod                                        OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MergedMeshCullDistance                                      OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MergedMeshPropCullDistance                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bMergedMeshAffectDistanceFieldLighting                      OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bMergedMeshOverrideCastFarShadows                           OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(int32_t)                                   MergedMeshCellSize                                          OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bCommonPartsEnable                                          OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   CommonPartsTypeMask                                         OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      bCommonPartsEnableShadows                                   OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   CommonPartsCullDistanceStart                                OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   CommonPartsCullDistanceEnd                                  OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   CommonPartsCullDistanceBoost                                OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   CommonPartsCellSize                                         OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bInstancesEnable                                            OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(int32_t)                                   InstancesMinLod                                             OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     InstancesLodScale                                           OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   InstancesCullDistance                                       OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(bool)                                      bInstancesEnableShadows                                     OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(bool)                                      bInstancesPreallocateComponents                             OFFSET(get<bool>, {0x7D, 1, 0, 0})
	DMember(bool)                                      bInstancesAllowRemove                                       OFFSET(get<bool>, {0x7E, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoCommonPartsDataMappings
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoCommonPartsDataMappings : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<TWeakObjectPtr<UStaticMesh*>, FJunoCommonPartsSettings>) Mapping                                  OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoLandscapeVisualModifierComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UJunoLandscapeVisualModifierComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UStaticMeshComponent*)               DirtPlane                                                   OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(EJunoLandscapeVisualModifierType)          VisualModifierType                                          OFFSET(get<T>, {0x240, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoLandscapeVisualModifierComponent.OnRep_LandscapeModifierData
	// void OnRep_LandscapeModifierData();                                                                                      // [0xc4d2e90] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoPhysicsToySpawnerActor
/// Size: 0x0020 (0x000EE0 - 0x000F00)
class AJunoPhysicsToySpawnerActor : public AJunoBuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3840;

public:
	DMember(bool)                                      bUseOffsetOrientation                                       OFFSET(get<bool>, {0xEE0, 1, 1, 0})
	CMember(TArray<EJunoContactDirection>)             FloatingValidationDirections                                OFFSET(get<T>, {0xEE8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsToySpawnerActor.GetToyClass
	// class UClass* GetToyClass();                                                                                             // [0x1340978] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoPickupComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoPickupComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FDataTableRowHandle)                       CraftingSourceTable                                         OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class UDataTable*)                         ResourceDataTable                                           OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPickupComponent.PickupBuildingctor
	// void PickupBuildingctor(class AFortPlayerController* FPC);                                                               // [0x64c3a10] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoResourceComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UJunoResourceComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UDataTable*)                         BuildingTagDataTable                                        OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UDataTable*)                         ResourceDataTable                                           OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoResourceComponent.HandleBuildingDamaged
	// void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xc4d1c1c] Final|Native|Private|HasDefaults 
};

/// Class /Script/JunoGameNative.JunoStorageChest
/// Size: 0x0230 (0x000C70 - 0x000EA0)
class AJunoStorageChest : public AJunoBuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	CMember(class UGeometryCollectionComponent*)       GeometryCollectionComponent                                 OFFSET(get<T>, {0xC80, 8, 0, 0})
	CMember(class UJunoInventoryComponent*)            ChestInventoryComponent                                     OFFSET(get<T>, {0xC88, 8, 0, 0})
	CMember(class UJunoCampMembershipActorComponent*)  CampMembershipComponent                                     OFFSET(get<T>, {0xC90, 8, 0, 0})
	DMember(bool)                                      bTakeAllItemsOnInteract                                     OFFSET(get<bool>, {0xC98, 1, 0, 0})
	DMember(bool)                                      bDestroyOnInteract                                          OFFSET(get<bool>, {0xC99, 1, 0, 0})
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xCA0, 24, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xCC0, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xD20, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xD38, 16, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xD48, 160, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xDE8, 80, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwnerPlayerId                                               OFFSET(getStruct<T>, {0xE38, 48, 0, 0})
	SMember(FName)                                     BaseLootTierGroup                                           OFFSET(getStruct<T>, {0xE68, 4, 0, 0})
	DMember(float)                                     DefaultInteractTime                                         OFFSET(get<float>, {0xE6C, 4, 0, 0})
	DMember(float)                                     PlayerPlacedInteractTime                                    OFFSET(get<float>, {0xE70, 4, 0, 0})
	DMember(float)                                     SearchedInteractTime                                        OFFSET(get<float>, {0xE74, 4, 0, 0})
	DMember(bool)                                      bUsePlayerPlacedInteractionTime                             OFFSET(get<bool>, {0xE78, 1, 0, 0})
	CMember(class UStaticMesh*)                        SearchedMesh                                                OFFSET(get<T>, {0xE80, 8, 0, 0})
	DMember(float)                                     LootTossSpeed                                               OFFSET(get<float>, {0xE88, 4, 0, 0})
	DMember(float)                                     LootTossAngle                                               OFFSET(get<float>, {0xE8C, 4, 0, 0})
	DMember(bool)                                      bChestSearched                                              OFFSET(get<bool>, {0xE90, 1, 0, 0})
	DMember(bool)                                      bChestLooted                                                OFFSET(get<bool>, {0xE91, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   LastInteractor                                              OFFSET(get<T>, {0xE94, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoStorageChest.UpdateVisibilityOfLightBeamDeathChest
	// void UpdateVisibilityOfLightBeamDeathChest(bool IsVisible);                                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.OnRep_ChestSearched
	// void OnRep_ChestSearched();                                                                                              // [0xc4d2ddc] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnRep_ChestLooted
	// void OnRep_ChestLooted();                                                                                                // [0xc4d2d8c] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnPersistentPlayspaceDataLoadEnd
	// void OnPersistentPlayspaceDataLoadEnd(class AJunoPersistentPlayspace* PersistentPlayspace, bool bSuccess);               // [0xc4d2b80] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoStorageChest.OnInventoryAcquired
	// void OnInventoryAcquired();                                                                                              // [0xc4d2a94] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoStorageChest.IsChestAlreadySearched
	// bool IsChestAlreadySearched();                                                                                           // [0xc4d2110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.GetOwningPlayerID
	// FUniqueNetIdRepl GetOwningPlayerID();                                                                                    // [0xc4d1958] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.CanInteractWithChest
	// bool CanInteractWithChest(class AFortPawn* FortPawn);                                                                    // [0xc4d0ec0] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintOnChestLooted
	// void BlueprintOnChestLooted();                                                                                           // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintGetLootTierGroup
	// FName BlueprintGetLootTierGroup(FJunoBiomeInfoQueryResult BiomeInfo);                                                    // [0x1340978] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintCanShowInventoryUI
	// bool BlueprintCanShowInventoryUI(FInteractionType& InteractType);                                                        // [0xc4d0e40] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoStorageChest.BlueprintAllowSpawnLoot
	// bool BlueprintAllowSpawnLoot(FInteractionType& InteractType);                                                            // [0xc4d0e40] Native|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoBuildingPreviewComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveSet
	// void ReceiveSet();                                                                                                       // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceivePlacementStarted
	// void ReceivePlacementStarted();                                                                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveEnabled
	// void ReceiveEnabled();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveDisabled
	// void ReceiveDisabled();                                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveCreated
	// void ReceiveCreated();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.ReceiveCleared
	// void ReceiveCleared();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.IsSet
	// bool IsSet();                                                                                                            // [0xc4d2128] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetSourceActorClass
	// class UClass* GetSourceActorClass();                                                                                     // [0xb88b254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetPreviewer
	// class AJunoBuildingPreviewer* GetPreviewer();                                                                            // [0xc4d1bc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewComponent.GetOwningPreviewRef
	// FJunoBuildingSelectionPreview GetOwningPreviewRef(bool& bSuccess);                                                       // [0xc4d19b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewer
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AJunoBuildingPreviewer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(TWeakObjectPtr<UJunoBuildingBehaviorBase*>) OwningBehavior                                             OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(TMap<FGuid, FJunoBuildingSelectionPreview>) PreviewPool                                                OFFSET(get<T>, {0x2A0, 80, 0, 0})
	CMember(TArray<FGuid>)                             MostRecentlyUpdated                                         OFFSET(get<T>, {0x2F0, 16, 0, 0})
	SMember(FGuid)                                     CurrentlySetPreviewGUID                                     OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	DMember(bool)                                      bHasSetPreview                                              OFFSET(get<bool>, {0x310, 1, 0, 0})
	SMember(FJunoBuildingPlacementPreview)             PlacementPreview                                            OFFSET(getStruct<T>, {0x320, 192, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.SetPreviewVisibility
	// void SetPreviewVisibility(bool bVisible);                                                                                // [0xc4d358c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.SetPreview
	// bool SetPreview(FGuid& Guid);                                                                                            // [0xc4d34f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveUpdateSnapEntryPreviews
	// void ReceiveUpdateSnapEntryPreviews(TArray<FJunoBuildingSnapEntryPreview>& Previews);                                    // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewSet
	// void ReceivePreviewSet(FJunoBuildingSelectionPreview& Preview);                                                          // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewCreated
	// void ReceivePreviewCreated(FJunoBuildingSelectionPreview& Preview);                                                      // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePreviewCleared
	// void ReceivePreviewCleared(FJunoBuildingSelectionPreview& Preview);                                                      // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementStarted
	// void ReceivePlacementStarted();                                                                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementPreviewInitialized
	// void ReceivePlacementPreviewInitialized(FJunoBuildingPlacementPreview& Preview);                                         // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceivePlacementPreviewHidden
	// void ReceivePlacementPreviewHidden(FJunoBuildingPlacementPreview& Preview);                                              // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveEnabled
	// void ReceiveEnabled();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDisabled
	// void ReceiveDisabled();                                                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDestroyPreview
	// void ReceiveDestroyPreview(FJunoBuildingSelectionPreview& Preview);                                                      // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveDestroyPlacementPreview
	// void ReceiveDestroyPlacementPreview(FJunoBuildingPlacementPreview& Preview);                                             // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ReceiveClearSnapEntryPreviews
	// void ReceiveClearSnapEntryPreviews(TArray<FJunoBuildingSnapEntryPreview>& Previews);                                     // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.NotifyPlacementStarted
	// void NotifyPlacementStarted();                                                                                           // [0xc4d218c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.IsPreviewerEnabled
	// bool IsPreviewerEnabled();                                                                                               // [0x6d56fc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.InitializePlacementPreview
	// void InitializePlacementPreview();                                                                                       // [0xc4d20fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.HidePlacementPreview
	// void HidePlacementPreview();                                                                                             // [0xc4d20bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.HasSetPreview
	// bool HasSetPreview();                                                                                                    // [0xc4d2098] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetPreviewRef
	// FJunoBuildingSelectionPreview GetPreviewRef(bool& bSuccess);                                                             // [0xc4d1b04] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetPlacementPreview
	// FJunoBuildingPlacementPreview GetPlacementPreview();                                                                     // [0xc4d1a6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.GetOwningBuildingBehavior
	// class UJunoBuildingBehaviorBase* GetOwningBuildingBehavior();                                                            // [0xc4d1930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.FindPreviewRef
	// FJunoBuildingSelectionPreview FindPreviewRef(FGuid& Guid, bool& bSuccess);                                               // [0xc4d17cc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.Enable
	// void Enable();                                                                                                           // [0xc4d17b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.Disable
	// void Disable();                                                                                                          // [0xc4d17a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.DestroyPreview
	// void DestroyPreview(FGuid Guid);                                                                                         // [0xc4d1714] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.DestroyPlacementPreview
	// void DestroyPlacementPreview();                                                                                          // [0xc4d1700] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.CreatePreview
	// bool CreatePreview(TArray<FJunoBuilderToolSelectedActor>& SelectedActors, FGuid& Guid, FJunoBuildingPreviewParams& Params); // [0xc4d0f68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBuildingPreviewer.ClearPreview
	// void ClearPreview();                                                                                                     // [0xc4d0f54] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewerSubsystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UJunoBuildingPreviewerSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FJunoBuildingPreviewerWorkingDataAsync>) AsyncPreviewsStack                                     OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingPreviewInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBuildingPreviewInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildingPreviewInterface.GetPreviewComponentTemplates
	// TMap<FName, UClass*> GetPreviewComponentTemplates();                                                                     // [0xc4d1aa4] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_Loot
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoGameStateComponent_Loot : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<class UDataTable*>)                 LootTierTables                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<class UDataTable*>)                 LootPackageTables                                           OFFSET(get<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_Loot.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xc4d2c48] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoBuildInstructionsItemDefinition
/// Size: 0x0060 (0x0001C0 - 0x000220)
class UJunoBuildInstructionsItemDefinition : public UFortWorldItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	DMember(bool)                                      bGiveResourcesOnDestroy                                     OFFSET(get<bool>, {0x1C0, 1, 1, 0})
	SMember(FName)                                     SelfCraftingFormulaName                                     OFFSET(getStruct<T>, {0x1C4, 4, 0, 0})
	CMember(TArray<FName>)                             PrerequisiteCraftingFormulaNames                            OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClassToBuild                                           OFFSET(get<T>, {0x1D8, 32, 0, 0})
	CMember(class UFortPlaysetPropItemDefinition*)     PlaysetPropToBuild                                          OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FText)                                     SizeDescription                                             OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	SMember(FText)                                     SetDescription                                              OFFSET(getStruct<T>, {0x210, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.ShouldGiveResourcesOnDestroy
	// bool ShouldGiveResourcesOnDestroy();                                                                                     // [0xc4d3664] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSizeDescription
	// FText GetSizeDescription();                                                                                              // [0xc4d1c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSetDescription
	// FText GetSetDescription();                                                                                               // [0x9938d8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetSelfCraftingFormulaName
	// FName GetSelfCraftingFormulaName();                                                                                      // [0xc4d1be8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetPrerequisiteCraftingFormulaNames
	// TArray<FName> GetPrerequisiteCraftingFormulaNames();                                                                     // [0xc4d1a88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoBuildInstructionsItemDefinition.GetActorClassToBuild
	// TWeakObjectPtr<UClass*> GetActorClassToBuild();                                                                          // [0xc4d18dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UJunoControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FActorUpgradeInfo>)                 ActorsToUpgrade                                             OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   LastUpgradedActor                                           OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerSetAutoPassiveCraftingFormula
	// void ServerSetAutoPassiveCraftingFormula(class AActor* PassiveCraftingObject, FName FormulaName);                        // [0xc4d3340] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerHandleCraftingBGAContributor
	// void ServerHandleCraftingBGAContributor(class AActor* CraftingObject);                                                   // [0xc4d32a0] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerEnableAutoPassiveCrafting
	// void ServerEnableAutoPassiveCrafting(class AActor* PassiveCraftingObject);                                               // [0xc4d3200] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerDisableAutoPassiveCrafting
	// void ServerDisableAutoPassiveCrafting(class AActor* PassiveCraftingObject);                                              // [0xc4d3160] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.ServerAttemptCraftingUpgrage
	// void ServerAttemptCraftingUpgrage(class AActor* ActorToUpgrade, FName RecipeName);                                       // [0xc4d2fb0] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnRep_LastUpgradedActor
	// void OnRep_LastUpgradedActor();                                                                                          // [0xc4d2ea4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xc4d29ec] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoControllerComponent_CraftingNetworkEvents.OnCraftingChangedState
	// void OnCraftingChangedState(FCraftingObjectStateChangedEvent& Event);                                                    // [0xc4d2950] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoCraftingObjectBGA
/// Size: 0x0248 (0x0009E8 - 0x000C30)
class AJunoCraftingObjectBGA : public ACraftingObjectBGA
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
	CMember(class UJunoGeometryCollectionAssemblerComponent*) GeometryCollectionAssemblerComponent                 OFFSET(get<T>, {0xA80, 8, 0, 0})
	SMember(FVector)                                   GridSizeOverride                                            OFFSET(getStruct<T>, {0xA88, 24, 0, 0})
	SMember(FTransform)                                BuildingPivotOffset                                         OFFSET(getStruct<T>, {0xAA0, 96, 0, 0})
	SMember(FVector)                                   BuildingGridSnapOffset                                      OFFSET(getStruct<T>, {0xB00, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0xB18, 16, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xB28, 160, 0, 0})
	CMember(class UItemDefinitionBase*)                AssociatedItem                                              OFFSET(get<T>, {0xBC8, 8, 0, 0})
	CMember(TMap<FName, UClass*>)                      PreviewComponentTemplates                                   OFFSET(get<T>, {0xBD0, 80, 0, 0})
	SMember(FName)                                     UpgradeRecipe                                               OFFSET(getStruct<T>, {0xC20, 4, 0, 0})
	DMember(bool)                                      bAutoTakeCraftingInventoryOnServerInteract                  OFFSET(get<bool>, {0xC24, 1, 0, 0})
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0xC25, 1, 0, 0})
	DMember(bool)                                      bCloseMenuWhenOutOfInteractionRange                         OFFSET(get<bool>, {0xC26, 1, 0, 0})
	DMember(float)                                     InteractionRangeSphereRadius                                OFFSET(get<float>, {0xC28, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoCraftingObjectBGA.HandleCraftingSuccess
	// void HandleCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                          // [0xc4d1ff0] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoCraftingObjectBGA.GetAssociatedItem
	// class UItemDefinitionBase* GetAssociatedItem();                                                                          // [0xc4d1904] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoGameStateComponent_Crafting
/// Size: 0x0198 (0x000250 - 0x0003E8)
class UJunoGameStateComponent_Crafting : public UFortGameStateComponent_Crafting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	DMember(uint32_t)                                  AllRecipeNamesHash                                          OFFSET(get<uint32_t>, {0x250, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoGameStateComponent_Crafting.OnRep_AllRecipeNamesHash
	// void OnRep_AllRecipeNamesHash();                                                                                         // [0xc4d2d78] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoGameStateComponent_Crafting.HandleLootTablesLoaded
	// void HandleLootTablesLoaded();                                                                                           // [0x35f4808] Final|Native|Protected 
};

/// Class /Script/JunoGameNative.JunoRecipeBundleItemDefinition
/// Size: 0x0010 (0x0001C0 - 0x0001D0)
class UJunoRecipeBundleItemDefinition : public UFortWorldItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(TArray<FDataTableRowHandle>)               CraftingFormulas                                            OFFSET(get<T>, {0x1C0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoConnectivityDataComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoConnectivityDataComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoConnectivitySupportDataComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoConnectivitySupportDataComponent : public UJunoConnectivityDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToy
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPhysicsToy : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsToy.StopAttachment
	// void StopAttachment();                                                                                                   // [0x3457b08] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.StartAttachmentToActor
	// void StartAttachmentToActor(class AActor* Actor);                                                                        // [0x7796cb4] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.OnToyStopTrigger
	// void OnToyStopTrigger();                                                                                                 // [0x77c0394] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.OnToyStartTrigger
	// void OnToyStartTrigger(bool bIsControlled);                                                                              // [0xc4d2f2c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.EnablePhysics
	// void EnablePhysics();                                                                                                    // [0x3948bb4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.DisablePhysics
	// void DisablePhysics();                                                                                                   // [0x328d468] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPhysicsToy.DestroyToy
	// void DestroyToy();                                                                                                       // [0x308d6a4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoAnimGeometryCollectionComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UJunoAnimGeometryCollectionComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FComponentReference)                       GeometryCollectionReference                                 OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FComponentReference)                       SkeletalMeshReference                                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	CMember(TArray<FJunoAnimGcMappingEntry>)           Mappings                                                    OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBasePlayspaceMigrationComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoBasePlayspaceMigrationComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoClientAtomicReplacementComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UJunoClientAtomicReplacementComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class AJunoPersistentPlayspace*)           TargetPlayspace                                             OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnRep_PlayspsaceRenameRepData
	// void OnRep_PlayspsaceRenameRepData();                                                                                    // [0xc4d2f18] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnRep_Guid
	// void OnRep_Guid(FGuid OldGuid);                                                                                          // [0xc4d2e00] Final|Native|Private|HasDefaults 
	// Function /Script/JunoGameNative.JunoClientAtomicReplacementComponent.OnOwnerGuidChanged
	// void OnOwnerGuidChanged(class AActor* Owner, FGuid InGuid);                                                              // [0xc4d2aa8] Final|Native|Private|HasDefaults 
};

/// Class /Script/JunoGameNative.JunoClientAtomicReplacementWorldSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoClientAtomicReplacementWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/JunoGameNative.JunoClusterUnionActor
/// Size: 0x00E0 (0x000330 - 0x000410)
class AJunoClusterUnionActor : public AFortClusterUnionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoClusterUnionActor.OnComponentRemovedFromClusterUnion
	// void OnComponentRemovedFromClusterUnion(class UPrimitiveComponent* Component, TArray<FClusterUnionBoneData>& RemovedBonesData); // [0xc4d25f0] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoClusterUnionActor.OnComponentAddedToClusterUnion
	// void OnComponentAddedToClusterUnion(class UPrimitiveComponent* Component, TArray<FClusterUnionBoneData>& BonesData, TArray<FClusterUnionBoneData>& RemovedBoneIDs, bool bIsNew); // [0xc4d21a0] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoConnectivityComponent
/// Size: 0x0128 (0x0000A0 - 0x0001C8)
class UJunoConnectivityComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FMulticastInlineDelegate)                  NotifyAddedIntoClusterUnion                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyRemovedFromClusterUnion                               OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     ContactDistance                                             OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bIsInGraph                                                  OFFSET(get<bool>, {0xE4, 1, 0, 0})
	CMember(TArray<FComponentReference>)               GeometryCollectionsToIgnoreBreaksForConnectivity            OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FComponentReference>)               RootDoorComponentReferences                                 OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UPrimitiveComponent*>>) DoorComponents                                           OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bAreDoorsEjected                                            OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bAreDoorsEjectedInternal                                    OFFSET(get<bool>, {0x119, 1, 0, 0})
	SMember(FGraphVertexHandle)                        GraphHandle                                                 OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	DMember(bool)                                      bRootPlayspaceInitialized                                   OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      bIsDebris                                                   OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(bool)                                      bHasBeenSaved                                               OFFSET(get<bool>, {0x14A, 1, 0, 0})
	CMember(EJunoAutomaticConnectionMethod)            AutomaticConnectionMethod                                   OFFSET(get<T>, {0x14B, 1, 0, 0})
	CMember(TArray<EJunoContactDirection>)             CustomConnectionDirections                                  OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bCanBeConnectedTo                                           OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bMustConnectToDynamic                                       OFFSET(get<bool>, {0x161, 1, 0, 0})
	DMember(bool)                                      bForceIndependentlySupported                                OFFSET(get<bool>, {0x162, 1, 0, 0})
	DMember(bool)                                      bForceWorldSupportWhenPotentialConnectionsAreNotFound       OFFSET(get<bool>, {0x163, 1, 0, 0})
	DMember(bool)                                      bAddToConnectivityGraphOnBeginPlay                          OFFSET(get<bool>, {0x164, 1, 0, 0})
	DMember(bool)                                      bCanBeWorldSupported                                        OFFSET(get<bool>, {0x165, 1, 0, 0})
	CMember(TArray<class UClass*>)                     ClassesThatAreAlwaysValidForWorldSupport                    OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FVector)                                   OverlapMargin                                               OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	DMember(int32_t)                                   MinimumIslandSize                                           OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<AActor*>>)           AttachedToys                                                OFFSET(get<T>, {0x198, 16, 0, 0})
	DMember(bool)                                      bDisablePartialDestruction                                  OFFSET(get<bool>, {0x1A9, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoConnectivityComponent.ShouldUsePartialDestruction
	// bool ShouldUsePartialDestruction();                                                                                      // [0xc519768] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OverrideMinimumIslandSize
	// void OverrideMinimumIslandSize(int32_t NewSize);                                                                         // [0xc518dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnVertexRemovedFromGraph
	// void OnVertexRemovedFromGraph();                                                                                         // [0xc518dbc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnToyAttached
	// void OnToyAttached(class AActor* ToyActor);                                                                              // [0xc518c24] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRep_IsDebris
	// void OnRep_IsDebris();                                                                                                   // [0xc518b60] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRep_AreDoorsEjected
	// void OnRep_AreDoorsEjected();                                                                                            // [0xc518b4c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRemovedFromGraph
	// void OnRemovedFromGraph();                                                                                               // [0x3b0eddc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnRemovedFromClusterUnion
	// void OnRemovedFromClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);        // [0xc5189a8] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnParentClusterUnionAwake
	// void OnParentClusterUnionAwake(class UPrimitiveComponent* WakingComponent, FName BoneName);                              // [0xc51882c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnParentActorDeath
	// void OnParentActorDeath(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xc518458] Final|Native|Protected|HasDefaults 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnGeometryCollectionDecayed
	// void OnGeometryCollectionDecayed();                                                                                      // [0xc517e44] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnGeometryCollectionBreak
	// void OnGeometryCollectionBreak(FChaosBreakEvent& BreakEvent);                                                            // [0xc517dac] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnAttachedToyDetached
	// void OnAttachedToyDetached(class AActor* ToyActor);                                                                      // [0xc517958] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoConnectivityComponent.OnAddedIntoClusterUnion
	// void OnAddedIntoClusterUnion(class UClusterUnionComponent* ClusterUnion, class UPrimitiveComponent* Component);          // [0xc5177f4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.NotifyRemovedFromGraph
	// void NotifyRemovedFromGraph();                                                                                           // [0x133f4e8] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetRelevantSimulatingComponents
	// TArray<UPrimitiveComponent*> GetRelevantSimulatingComponents();                                                          // [0xc516ca4] Final|RequiredAPI|Native|Public|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetCurrentClusterUnion
	// class UClusterUnionComponent* GetCurrentClusterUnion();                                                                  // [0xc516994] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetContactDistance
	// float GetContactDistance();                                                                                              // [0x74fa294] Final|Native|Public|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetBaseAttachParentActor
	// class AActor* GetBaseAttachParentActor();                                                                                // [0xc51695c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoConnectivityComponent.GetAutomaticallyConnectedComponents
	// void GetAutomaticallyConnectedComponents(TArray<UJunoConnectivityComponent*>& Results);                                  // [0xc516274] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphWorldSubsystem
/// Size: 0x01E8 (0x000040 - 0x000228)
class UJunoConnectivityGraphWorldSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

/// Class /Script/JunoGameNative.JunoConnectivityManagerComponent
/// Size: 0x0178 (0x0000A0 - 0x000218)
class UJunoConnectivityManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	DMember(bool)                                      bIsReady                                                    OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bIsNewPlayspace                                             OFFSET(get<bool>, {0xBA, 1, 0, 0})
	CMember(class UFortConnectivityGraph*)             Graph                                                       OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bIsGraphDirty                                               OFFSET(get<bool>, {0xC8, 1, 0, 0})
	SMember(FJunoConnectivityDebugData)                DebugDrawData                                               OFFSET(getStruct<T>, {0x170, 56, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.RequestAddActorsToConnectivityGraph
	// void RequestAddActorsToConnectivityGraph(TArray<AActor*>& Actors);                                                       // [0xc518e68] Final|Native|Public|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphVertexRemovedFromIsland
	// void OnGraphVertexRemovedFromIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle);                 // [0xc518150] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphVertexAddedToIsland
	// void OnGraphVertexAddedToIsland(FGraphIslandHandle& IslandHandle, FGraphVertexHandle& VertexHandle);                     // [0xc518038] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandDestroyed
	// void OnGraphIslandDestroyed(FGraphIslandHandle& IslandHandle);                                                           // [0xc517f98] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandCreated
	// void OnGraphIslandCreated(FGraphIslandHandle& IslandHandle);                                                             // [0xc517ef8] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.OnGraphIslandConnectivityChanged
	// void OnGraphIslandConnectivityChanged(FGraphIslandHandle& IslandHandle);                                                 // [0xc517e58] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoConnectivityManagerComponent.HandleOnGeometryCollectionBreaks
	// void HandleOnGeometryCollectionBreaks(TArray<FChaosBreakEvent>& BreakEvents);                                            // [0xc516ce4] Final|Native|Protected|HasOutParms 
};

/// Class /Script/JunoGameNative.JunoConnectivityRemovalFixupComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoConnectivityRemovalFixupComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToyActor
/// Size: 0x0000 (0x000BD0 - 0x000BD0)
class AJunoPhysicsToyActor : public AJunoBuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UJunoPhysicsToyConnectivityComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  NotifyAttachedToConnectivityComponent                       OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyRemovedFromConnectivityComponent                      OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bPlayspaceInitialized                                       OFFSET(get<bool>, {0xD0, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent.OnAttachedToNewIsland
	// void OnAttachedToNewIsland(FGraphIslandHandle& NewIslandHandle);                                                         // [0xc5178b8] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent.DetachFromConnectivity
	// void DetachFromConnectivity();                                                                                           // [0xc51610c] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPhysicsToyConnectivityComponent.AttachToConnectivity
	// void AttachToConnectivity(class AActor* Other);                                                                          // [0xc51608c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoWorldReadinessQueryComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UJunoWorldReadinessQueryComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldReadinessQueryComponent.OnBasePhysicsStateChange
	// void OnBasePhysicsStateChange(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);    // [0xc517b94] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoWorldReadinessQueryComponent.OnBaseEndPlay
	// void OnBaseEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                      // [0xc517ad0] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPersistenceFeatureData
/// Size: 0x01E0 (0x0002D0 - 0x0004B0)
class AJunoConnectivityGraphPersistenceFeatureData : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FSerializableConnectivityGraph)            SavedConnectivityData                                       OFFSET(getStruct<T>, {0x2E0, 264, 0, 0})
	SMember(FSerializableConnectivityGraph_v2)         CurrentSavedConnectivityData                                OFFSET(getStruct<T>, {0x3E8, 200, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPhysicsPersistenceComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UJunoPhysicsPersistenceComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsPersistenceWorldSubsystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoPhysicsPersistenceWorldSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/JunoGameNative.JunoGlobalKnowledgeComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UJunoGlobalKnowledgeComponent : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FJunoKnowledgeSaveRecord)                  CurrentWorldKnowledge                                       OFFSET(getStruct<T>, {0x118, 232, 0, 0})
};

/// Class /Script/JunoGameNative.JunoKnowledgeComponent
/// Size: 0x0618 (0x0000A8 - 0x0006C0)
class UJunoKnowledgeComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	DMember(bool)                                      bEnableKnowledgeComponent                                   OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bEnableKnowledgePersistence                                 OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      bEnableKnowledgeFiltering                                   OFFSET(get<bool>, {0x122, 1, 0, 0})
	DMember(bool)                                      bUnownedMCPRecipesKnowledgeBlockedWhenUnfiltered            OFFSET(get<bool>, {0x124, 1, 0, 0})
	CMember(TArray<class UFortItemDefinition*>)        DefaultKnownItems                                           OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FGameplayTagContainer)                     DefaultCraftingObjects                                      OFFSET(getStruct<T>, {0x138, 32, 0, 0})
	SMember(FGameplayTag)                              UnblockMCPRecipesWorldStateTag                              OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FGameplayTagContainer)                     FoundCraftingObjects                                        OFFSET(getStruct<T>, {0x160, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ClaimedKnowlegeBundles                                      OFFSET(getStruct<T>, {0x180, 32, 0, 0})
	SMember(FJunoKnowledgeRecipeStateFastArray)        RecipeStateArray                                            OFFSET(getStruct<T>, {0x1A0, 288, 0, 0})
	CMember(TArray<FJunoKnowledgeItemServerState>)     ItemStateArray                                              OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TMap<FName, FJunoKnowledgeRecipeServerState>) RecipeServerState                                        OFFSET(get<T>, {0x2D0, 80, 0, 0})
	SMember(FGameplayTagContainer)                     McpProfileOwnershipTagsCached                               OFFSET(getStruct<T>, {0x320, 32, 0, 0})
	CMember(TArray<class UItemDefinitionBase*>)        ViewedItems                                                 OFFSET(get<T>, {0x3E0, 16, 0, 0})
	CMember(TArray<int16_t>)                           ViewedRecipes                                               OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(TArray<int16_t>)                           OwnedMcpRecipes                                             OFFSET(get<T>, {0x400, 16, 0, 0})
	CMember(TArray<FJunoKnowledgeReplicatedRecipeDiscoverer>) RecipeDiscoverers                                    OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(TMap<FName, AFortPlayerState*>)            RecipeDiscoverersMap                                        OFFSET(get<T>, {0x420, 80, 0, 0})
	DMember(bool)                                      bMCPRecipesBlocked                                          OFFSET(get<bool>, {0x470, 1, 0, 0})
	DMember(bool)                                      bComponentReady                                             OFFSET(get<bool>, {0x471, 1, 0, 0})
	CMember(TSet<UItemDefinitionBase*>)                ItemQuickLookup                                             OFFSET(get<T>, {0x478, 80, 0, 0})
	SMember(FGameplayEventListenerHandle)              CraftingObjectPlacedHandle                                  OFFSET(getStruct<T>, {0x560, 28, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ViewRecipe
	// void ViewRecipe(FName InRecipeName);                                                                                     // [0xc519958] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ViewItem
	// void ViewItem(class UItemDefinitionBase* InItemDef);                                                                     // [0xc5197b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.UnblockMCPRecipes
	// bool UnblockMCPRecipes();                                                                                                // [0xc519790] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.SetRecipeKnowledgeState
	// void SetRecipeKnowledgeState(FName RowName, EJunoKnowledgeState NewState);                                               // [0xc519530] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.SetPlayerRecipeKnowledgeState
	// void SetPlayerRecipeKnowledgeState(class AFortPlayerController* PC, FName RowName, EJunoKnowledgeState NewState);        // [0xc5192b8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ServerViewRecipe
	// void ServerViewRecipe(FName InRecipeName);                                                                               // [0xc51916c] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.ServerViewItem
	// void ServerViewItem(class UItemDefinitionBase* InItemDef);                                                               // [0xc3fbde0] RequiredAPI|Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.RevealRecipeCategoryForPlayer
	// void RevealRecipeCategoryForPlayer(class AFortPlayerController* PC, FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag); // [0xc519038] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.RevealRecipeCategory
	// void RevealRecipeCategory(FGameplayTag CraftingObjectTag, FGameplayTag CategoryTag, FGameplayTag SubCategoryTag);        // [0xc518f44] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OwnsAnyMCPRecipe
	// bool OwnsAnyMCPRecipe();                                                                                                 // [0xc518e4c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OnRep_ViewedRecipes
	// void OnRep_ViewedRecipes();                                                                                              // [0xc518c10] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OnRep_ViewedItems
	// void OnRep_ViewedItems();                                                                                                // [0xc518b98] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OnRep_RecipeDiscoverers
	// void OnRep_RecipeDiscoverers();                                                                                          // [0xc518b84] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OnMcpInventoryChanged
	// void OnMcpInventoryChanged(TSet<FString>& ItemChangeFlags, int64_t ProfileRevision);                                     // [0xc518268] Final|Native|Protected|HasOutParms 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.OnCraftingObjectInteraction
	// void OnCraftingObjectInteraction(FCraftingMessage CraftingMessage);                                                      // [0xc517d14] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.IsRecipeMissingMCPOwnership
	// bool IsRecipeMissingMCPOwnership(FName RowName);                                                                         // [0xc5176a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasViewedRecipe
	// bool HasViewedRecipe(FName InRecipeName);                                                                                // [0xc51754c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasViewedItem
	// bool HasViewedItem(class UItemDefinitionBase* InItemDef);                                                                // [0xc5174bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HasClaimedKnowledgeBundle
	// bool HasClaimedKnowledgeBundle(FGameplayTag& BundleIdentifier);                                                          // [0xc5173e8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.HandleWorldStateChanged
	// void HandleWorldStateChanged();                                                                                          // [0xc5173d4] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetRecipeKnowledgeState
	// EJunoKnowledgeState GetRecipeKnowledgeState(FName RowName);                                                              // [0xc516b50] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.GetPlayerRecipeKnowledgeState
	// EJunoKnowledgeState GetPlayerRecipeKnowledgeState(class AFortPlayerController* PC, FName RowName);                       // [0xc5169bc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.DoesRecipeRequireMCPOwnership
	// bool DoesRecipeRequireMCPOwnership(FName RowName);                                                                       // [0xc516120] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AreMCPRecipesBlocked
	// bool AreMCPRecipesBlocked();                                                                                             // [0xc516068] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AddCraftingObjectTagsToPlayer
	// void AddCraftingObjectTagsToPlayer(class AFortPlayerController* PC, FGameplayTagContainer CraftingObjectTags);           // [0xc515f38] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AddCraftingObjectTags
	// void AddCraftingObjectTags(FGameplayTagContainer CraftingObjectTags);                                                    // [0xc515e7c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AcquireItemForPlayer
	// void AcquireItemForPlayer(class AFortPlayerController* PC, class UItemDefinitionBase* NewItemDef);                       // [0xc515db0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoKnowledgeComponent.AcquireItem
	// void AcquireItem(class UItemDefinitionBase* NewItemDef);                                                                 // [0xc515d30] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoKnowledgeDebugMenu
/// Size: 0x0400 (0x0004C0 - 0x0008C0)
class AJunoKnowledgeDebugMenu : public AImGuiDebugMenuBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2240;

public:
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData
/// Size: 0x00F0 (0x000040 - 0x000130)
class UJunoKnowledgePersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FJunoKnowledgeSaveData)                    KnowledgeSaveData                                           OFFSET(getStruct<T>, {0x48, 232, 0, 0})
};

/// Class /Script/JunoGameNative.JunoKnowledgePersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoKnowledgePersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoFogOfWarPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoFogOfWarSaveData)                     FogOfWarSaveDatas                                           OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureDataActor
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class AJunoFogOfWarPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TArray<FJunoFogOfWar>)                     FogOfWarData                                                OFFSET(get<T>, {0x2D8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoFogOfWarPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent
/// Size: 0x00E0 (0x0000F8 - 0x0001D8)
class UJunoMarkerManagerPlayspaceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(TArray<FJunoMarker>)                       Markers                                                     OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<FGuid>)                             MarkersIds                                                  OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(class UDataTable*)                         MarkerConfigData                                            OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(TArray<FUniqueMarkerSettings>)             UniqueMarkers                                               OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(TArray<class UObject*>)                    LoadedIconTextures                                          OFFSET(get<T>, {0x168, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.OnRep_MarkersIds
	// void OnRep_MarkersIds();                                                                                                 // [0xc56a918] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.OnRep_Markers
	// void OnRep_Markers();                                                                                                    // [0xc56a904] Final|Native|Protected 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.GetJunoMarkerManagerComponent
	// class UJunoMarkerManagerPlayspaceComponent* GetJunoMarkerManagerComponent(class UObject* WorldContextObject);            // [0xc56a3dc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoMarkerManagerPlayspaceComponent.CreateMarker
	// bool CreateMarker(class AActor* Actor, FJunoMarker& Marker);                                                             // [0xc56a234] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureData
/// Size: 0x0028 (0x000040 - 0x000068)
class UJunoMarkersPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FJunoMarkersSaveData)                      MarkersSaveData                                             OFFSET(getStruct<T>, {0x48, 32, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureDataActor
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class AJunoMarkersPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FJunoMarker>)                       MarkersData                                                 OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FGuid>)                             MarkersIds                                                  OFFSET(get<T>, {0x2E8, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMarkersPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoMarkersPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoModeratorModeBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly(class UObject* WorldContextObject);                                                            // [0xc56a714] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeBlueprintLibrary.IsModeratorModeEnabled
	// bool IsModeratorModeEnabled(class UObject* WorldContextObject);                                                          // [0xc56a5b4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoModeratorModeComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoModeratorModeComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UInputAction*)                       InputAction_TeleportPlayer_ModeratorMode                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bIsModeratorModeEnabled                                     OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bIsPlayerAllowedToFly                                       OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bModeratorConfirmed                                         OFFSET(get<bool>, {0xAA, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnRootPlayspaceOwnerSet
	// void OnRootPlayspaceOwnerSet(class AFortPlayerControllerAthena* PlayerControllerAthena);                                 // [0x64c3a10] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnRep_IsModeratorModeEnabled
	// void OnRep_IsModeratorModeEnabled();                                                                                     // [0xc56a8f0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.OnPawnDestroyed
	// void OnPawnDestroyed(class AActor* DestroyedActor);                                                                      // [0xc56a85c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.IsPlayerAllowedToFly
	// bool IsPlayerAllowedToFly();                                                                                             // [0xc56a794] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.IsModeratorModeEnabled
	// bool IsModeratorModeEnabled();                                                                                           // [0xafa59b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandleTeleportPlayer
	// void HandleTeleportPlayer();                                                                                             // [0xc56a5a0] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandlePlayerPossesedPawn
	// void HandlePlayerPossesedPawn(class APawn* PlayerPawn);                                                                  // [0xc56a520] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.HandleOnCreativeFlyChangedDelegate
	// void HandleOnCreativeFlyChangedDelegate(bool bIsFlying);                                                                 // [0xc56a45c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.EnableModeratorMode
	// void EnableModeratorMode();                                                                                              // [0x35e6228] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.DisableModeratorMode
	// void DisableModeratorMode();                                                                                             // [0x35e6228] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoModeratorModeComponent.CheatModeratorConfirm
	// void CheatModeratorConfirm();                                                                                            // [0xc56a21c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoDoorMetaNavArea
/// Size: 0x0008 (0x000048 - 0x000050)
class UJunoDoorMetaNavArea : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FNavAgentSelector)                         DoorAwareAgents                                             OFFSET(getStruct<T>, {0x48, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoMetaNavArea
/// Size: 0x0008 (0x000048 - 0x000050)
class UJunoMetaNavArea : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   HealthThreshold                                             OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAutoPickupComponent
/// Size: 0x0108 (0x0000A8 - 0x0001B0)
class UJunoAutoPickupComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FScalableFloat)                            ScanRate                                                    OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpawnedTime                                              OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            ScanDistance                                                OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeBetweenMultiPickups                                     OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            RandomPickupDelayMin                                        OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            RandomPickupDelayMax                                        OFFSET(getStruct<T>, {0x170, 40, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPawnComponentMood
/// Size: 0x00F8 (0x0000A8 - 0x0001A0)
class UJunoPawnComponentMood : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoMoodChangedDelegate                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	DMember(float)                                     MaximumTimeToUseRequest                                     OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FJunoMoodStateData)                        CurrentMoodState                                            OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	CMember(class UProxyTable*)                        MoodAnimProxyTable                                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(bool)                                      bIsMoodReactionActive                                       OFFSET(get<bool>, {0xE0, 1, 0, 0})
	SMember(FMoodReactionRequestConfig)                RunningMoodReactionConfig                                   OFFSET(getStruct<T>, {0xE4, 16, 0, 0})
	SMember(FRequestedMoodReaction)                    LastRequestedMoodReaction                                   OFFSET(getStruct<T>, {0xF8, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoMoodReactionTriggeredDelegate                         OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoMoodReactionFinishedDelegate                          OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoMoodReactionCanceledDelegate                          OFFSET(getStruct<T>, {0x160, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponentMood.RequestMoodReaction
	// void RequestMoodReaction(FMoodReactionRequestConfig& RequestConfig);                                                     // [0xc56a9f0] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.OnRep_CurrentMoodState
	// void OnRep_CurrentMoodState();                                                                                           // [0xc56a8dc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.NotifyMoodReactionComplete
	// void NotifyMoodReactionComplete();                                                                                       // [0xc56a848] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastTriggerMoodReaction
	// void MulticastTriggerMoodReaction(FMoodReactionRequestConfig RequestConfig);                                             // [0xc56a7b4] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastOnMoodReactionComplete
	// void MulticastOnMoodReactionComplete();                                                                                  // [0x3145fc4] Final|Net|NetReliableNative|Event|NetMulticast|Private|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.MulticastOnCancelCurrentMoodReaction
	// void MulticastOnCancelCurrentMoodReaction();                                                                             // [0x3b0eddc] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.IsMoodReactionSupported_Internal
	// bool IsMoodReactionSupported_Internal(FGameplayTag& MoodReactionTag);                                                    // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.IsMoodReactionSupported
	// bool IsMoodReactionSupported(FGameplayTag& MoodReactionTag);                                                             // [0xc56a640] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.GetMoodAnimProxyTable
	// class UProxyTable* GetMoodAnimProxyTable();                                                                              // [0x7e1a9cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponentMood.GetCurrentMoodState
	// FJunoMoodStateData GetCurrentMoodState();                                                                                // [0xa399f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPawnComponentSpeechBubble
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UJunoPawnComponentSpeechBubble : public UFortPawnComponent_SpeechBubble
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Script/JunoGameNative.JunoDeltaFile
/// Size: 0x0068 (0x000768 - 0x0007D0)
class UJunoDeltaFile : public ULevelSaveRecord
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	SMember(FName)                                     UniquePackageName                                           OFFSET(getStruct<T>, {0x768, 4, 0, 0})
	CMember(TMap<FGuid, FJunoUpdateAction>)            UpdateActions                                               OFFSET(get<T>, {0x770, 80, 0, 0})
	CMember(TWeakObjectPtr<AJunoPersistentPlayspace*>) WeakPersistentPlayspaceToApplyTo                            OFFSET(get<T>, {0x7C0, 8, 0, 0})
	DMember(bool)                                      bDirty                                                      OFFSET(get<bool>, {0x7C8, 1, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDeltaFileApplier
/// Size: 0x00A0 (0x000500 - 0x0005A0)
class UJunoDeltaFileApplier : public ULevelRecordSpawner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(TMap<FGuid, FJunoUpdateAction>)            UpdateActionMap                                             OFFSET(get<T>, {0x500, 80, 0, 0})
	CMember(TMap<FGuid, FDeleteAction>)                DeleteActionMap                                             OFFSET(get<T>, {0x550, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoDeltasLevelSaveComponent
/// Size: 0x0000 (0x0008F8 - 0x0008F8)
class UJunoDeltasLevelSaveComponent : public UFortLevelSaveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2296;

public:
};

/// Class /Script/JunoGameNative.JunoPFWModule_LevelDeltas
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPFWModule_LevelDeltas : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPFWContainer_LevelDelta
/// Size: 0x0038 (0x000140 - 0x000178)
class UJunoPFWContainer_LevelDelta : public UPersistenceFrameworkContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Script/JunoGameNative.JunoPFWContainer_LevelDeltaIndex
/// Size: 0x0020 (0x0001E0 - 0x000200)
class UJunoPFWContainer_LevelDeltaIndex : public UJunoBasePFWContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceTrackableInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayspaceTrackableInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPersistentPlayspaceLevelRegistry
/// Size: 0x0050 (0x000030 - 0x000080)
class UJunoPersistentPlayspaceLevelRegistry : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FName, FJunoPersistentPlayspaceLevelRegistryEntry>) PersistentPlayspaceLevelMap                   OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayerPersistenceComponent
/// Size: 0x0070 (0x0000F8 - 0x000168)
class UJunoPlayerPersistenceComponent : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnControllerBeginDestroy
	// void OnControllerBeginDestroy(class AFortPlayerControllerAthena* FortPCAthena);                                          // [0x64c3a10] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPlayerPersistenceComponent.OnAnyPlayerLoggedIn
	// void OnAnyPlayerLoggedIn(class APlayerController* PlayerController);                                                     // [0x64c3a10] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceHandler
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoWorldPersistenceHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceHandler_Deltas
/// Size: 0x0130 (0x000030 - 0x000160)
class UJunoWorldPersistenceHandler_Deltas : public UJunoWorldPersistenceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(int32_t)                                   DeltasPeriodicSaveIntervalSeconds_Default                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   DeltasPeriodicSaveIntervalSeconds_PIEOverride               OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	CMember(class UJunoDeltasSaveHandler*)             DeltasSaveHandler                                           OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FSoftClassPath)                            DefaultDeltaFileClass                                       OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	CMember(TArray<FJunoRollbackBadCheckpointRange>)   RollbackBadCheckpointRanges                                 OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistencePlayerManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UJunoWorldPersistencePlayerManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldPersistencePlayerManager.OnAnyPlayerLoggedIn
	// void OnAnyPlayerLoggedIn(class APlayerController* PlayerController);                                                     // [0xc59fc28] Final|Native|Public  
};

/// Class /Script/JunoGameNative.JunoAIPersistenceFeatureData
/// Size: 0x0190 (0x000040 - 0x0001D0)
class UJunoAIPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FSavedAIDataManager)                       SavedAIData                                                 OFFSET(getStruct<T>, {0x50, 384, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPlayspaceAccountantPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoPlayspaceAccountantPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoPlayspaceIndexPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoPlayspaceIndexSaveData)               PlayspaceIndexSaveData                                      OFFSET(getStruct<T>, {0x40, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoUserGeneratedTextPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoUserGeneratedTextPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoUserGeneratedTextSaveData)            UserGeneratedTextSaveData                                   OFFSET(getStruct<T>, {0x40, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureData
/// Size: 0x0058 (0x000040 - 0x000098)
class UJunoWorldPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FJunoWorldSaveData)                        WorldSaveData                                               OFFSET(getStruct<T>, {0x48, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureDataActor
/// Size: 0x0058 (0x0002D0 - 0x000328)
class AJunoWorldPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FJunoWorldSaveData)                        WorldSaveData                                               OFFSET(getStruct<T>, {0x2D8, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWorldPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoClusterUnionPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoClusterUnionSaveData)                 SaveData                                                    OFFSET(getStruct<T>, {0x40, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoClusterUnionPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoConnectivityGraphPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPFWPersistenceFeatureData
/// Size: 0x00D0 (0x000040 - 0x000110)
class UJunoConnectivityGraphPFWPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FSerializableConnectivityGraph_v2)         SavedConnectivityData                                       OFFSET(getStruct<T>, {0x48, 200, 0, 0})
};

/// Class /Script/JunoGameNative.JunoConnectivityGraphPFW_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoConnectivityGraphPFW_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsPFWModule
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UJunoPhysicsPFWModule : public UPersistenceFrameworkModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData
/// Size: 0x0050 (0x000040 - 0x000090)
class UJunoPhysicsToyPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoPhysicsToySaveData)                   Container                                                   OFFSET(getStruct<T>, {0x40, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData_Container
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UJunoPhysicsToyPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/JunoGameNative.JunoPersistenceFeaturePFWState
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoPersistenceFeaturePFWState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UJunoBasePFWPersistenceFeatureDataContainer*>) ContainerWeakPtr                         OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/JunoGameNative.PFWSubsystemExtension_JunoGameNative
/// Size: 0x0008 (0x000038 - 0x000040)
class UPFWSubsystemExtension_JunoGameNative : public UPersistenceFrameworkSubsystemExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent
/// Size: 0x0428 (0x0000A8 - 0x0004D0)
class UJunoControllerComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerSpawnedActorWithBuilderTool                         OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOffhandInputPressed                                       OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOffhandInputReleased                                      OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(class UFortWorldItemDefinition*)           EmptyHandItemDefinition                                     OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(float)                                     InteractionDistanceFromCamera                               OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     InteractionDistanceFromPlayer                               OFFSET(get<float>, {0xE4, 4, 0, 0})
	SMember(FPrimaryAssetId)                           BuilderToolPrimaryAsset                                     OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	CMember(class UClass*)                             DeathChestActorClass                                        OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UClass*)                             DeathChestNavFilterClass                                    OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FVector)                                   DeathChestNavQuestyExtents                                  OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	DMember(float)                                     DeathChestZDistanceToCheck                                  OFFSET(get<float>, {0x118, 4, 0, 0})
	SMember(FJunoMarker)                               CheckpointMarker                                            OFFSET(getStruct<T>, {0x120, 152, 0, 0})
	SMember(FGuid)                                     ItemToBuildGUID                                             OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FGuid)                                     ItemSelectedGuid                                            OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	DMember(bool)                                      bSpawnedBackpack                                            OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	SMember(FVector)                                   BackpackSpawnLocation                                       OFFSET(getStruct<T>, {0x1F0, 24, 0, 0})
	CMember(class UInputComponent*)                    InputComponent                                              OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(class UFortItem*)                          CachedQuickBuildItem                                        OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UFortOffhandComponent*)              OffhandComponent                                            OFFSET(get<T>, {0x448, 8, 0, 0})
	SMember(FGameplayEventListenerHandle)              CheckpointActorDestroyedHandle                              OFFSET(getStruct<T>, {0x450, 28, 0, 0})
	SMember(FJunoPlayerCheckpoint)                     PlayerCheckpoint                                            OFFSET(getStruct<T>, {0x470, 56, 0, 0})
	DMember(bool)                                      bIsModeratorModeEnabled                                     OFFSET(get<bool>, {0x4C8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoControllerComponent.SwitchToEmptyHands
	// void SwitchToEmptyHands(bool bTriggerSelection, FGameplayTag OptionalSlotGroupTag, int32_t OptionalSlotRow, int32_t OptionalSlotColumn); // [0xc5a0354] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SpawnedBackpack
	// bool SpawnedBackpack();                                                                                                  // [0xbde5b48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ShouldSpawnDeathChest
	// bool ShouldSpawnDeathChest();                                                                                            // [0xc5a0330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetPlayerLastCaveTeleporterLocation
	// void SetPlayerLastCaveTeleporterLocation(FVector& TeleporterLocation);                                                   // [0xc5a026c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetPlayerCheckpoint
	// void SetPlayerCheckpoint(class AActor* CheckpointActor, FVector& CheckpointLocation);                                    // [0xc5a0164] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoControllerComponent.SetIsModeratorModeEnabled
	// void SetIsModeratorModeEnabled(bool bEnable);                                                                            // [0xc5a00e4] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToPOI
	// void ServerTeleportToPOI();                                                                                              // [0x931610c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToLocation
	// void ServerTeleportToLocation(FVector TeleportLocation, FRotator TeleportRotation);                                      // [0xc5a0024] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerTeleportToCave
	// void ServerTeleportToCave();                                                                                             // [0x80aa3d4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerSetSelectedItem
	// void ServerSetSelectedItem(FGuid ItemGuid, FGameplayTag SlotGroupTag, int32_t SlotRow, int32_t SlotColumn);              // [0xc59fed4] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerSetCraftingContextItem
	// void ServerSetCraftingContextItem(FGuid InItemGuid);                                                                     // [0xc59fe40] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerRequestPersistenceDataReport
	// void ServerRequestPersistenceDataReport(EJunoPersistenceReportOptions ReportOptions);                                    // [0xc59fdbc] Net|NetReliableNative|Event|Public|NetServer|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerReplicateMapData
	// void ServerReplicateMapData();                                                                                           // [0x8c58edc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.ServerFreeBuildAddInventoryItem
	// void ServerFreeBuildAddInventoryItem(FFortItemEntry InItemEntry);                                                        // [0xc59fd00] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnRep_ItemSelectedGuid
	// void OnRep_ItemSelectedGuid();                                                                                           // [0xc59fca8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnCameraToggle
	// void OnCameraToggle();                                                                                                   // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoControllerComponent.OnAnimToggle
	// void OnAnimToggle();                                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleFortPawnChanged
	// void HandleFortPawnChanged(class AFortPawn* NewPawn);                                                                    // [0xc59fb00] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolUnEquip
	// void HandleBuilderToolUnEquip(class AFortWeapon* Weapon);                                                                // [0xc59fa10] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolInteractionStopped
	// void HandleBuilderToolInteractionStopped(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xc59f94c] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.HandleBuilderToolInteractionStarted
	// void HandleBuilderToolInteractionStarted(class AJunoBuilderTool* BuilderTool, class UJunoBuilderToolInteractionBehavior* Behavior); // [0xc59f888] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetPlayerCheckpoint
	// FJunoPlayerCheckpoint GetPlayerCheckpoint();                                                                             // [0xc59f848] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetLastCaveTeleporterLocation
	// FVector GetLastCaveTeleporterLocation();                                                                                 // [0xc59f820] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.GetIsModeratorModeEnabled
	// bool GetIsModeratorModeEnabled();                                                                                        // [0xc59f808] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.GetBuilderTool
	// class AJunoBuilderTool* GetBuilderTool();                                                                                // [0xc59f7e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientPrintPersistenceDataReport
	// void ClientPrintPersistenceDataReport(TArray<FString> Logs);                                                             // [0xc59f754] Net|NetReliableNative|Event|Public|NetClient|Const 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientNotifyInventoryInvoked
	// void ClientNotifyInventoryInvoked(class AActor* ReceivingActor);                                                         // [0xc59f6d0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientNotifyInventoryFull
	// void ClientNotifyInventoryFull();                                                                                        // [0x8aae40c] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/JunoGameNative.JunoControllerComponent.ClientNotifyInventoryClosed
	// void ClientNotifyInventoryClosed(class AActor* ReceivingActor);                                                          // [0x8ab0aa4] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/JunoGameNative.JunoControllerComponent.AddRecipeToBuilderTool
	// void AddRecipeToBuilderTool(FName RecipeName);                                                                           // [0xc59f588] Final|Native|Public  
	// Function /Script/JunoGameNative.JunoControllerComponent.AddItemToBuilderToolOnEquip
	// void AddItemToBuilderToolOnEquip(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                           // [0xc59f4c4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoControllerComponent.AddItemToBuilderTool
	// void AddItemToBuilderTool(class UFortItem* Item);                                                                        // [0xc59f444] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.JunoHealthComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UJunoHealthComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/JunoGameNative.JunoInputControllerComponent
/// Size: 0x0130 (0x0000A8 - 0x0001D8)
class UJunoInputControllerComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(bool)                                      bCachedEnableClientSettingsRestoreInputPresets              OFFSET(get<bool>, {0xE8, 1, 1, 0})
	CMember(class UJunoInputMappingComponentData*)     InputMappingData                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleCameraToggle                              OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleAnimToggle                                OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleCyclePOI                                  OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleTeleportToCave                            OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_NextQuickbarSlot                                OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_NextQuickbarSlot_Delayed                        OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_PrevQuickbarSlot                                OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_PrevQuickbarSlot_Delayed                        OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenHudMenu                               OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenBuildingMenu                          OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenMapMenu                               OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenInventoryMenu                         OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenShopMenu                              OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenEngagementMenu                        OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_HandleOpenEscapeMenu                            OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_JunoBuildingStartPlacement                      OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_ToggleBuildMode                                 OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_TeleportPlayer                                  OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_OffhandUse                                      OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_FlyDown                                         OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class UInputAction*)                       InputAction_FlyUp                                           OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(TArray<class UInputAction*>)               QuickbarBindings                                            OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TArray<FJunoEnhancedInputActionToGameplayEvent>) InputActionsToGameplayEvents                          OFFSET(get<T>, {0x1B0, 16, 0, 0})
	DMember(bool)                                      bJunoIsFlying                                               OFFSET(get<bool>, {0x1C0, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoInputControllerComponent.PushInputMappingContext
	// void PushInputMappingContext(class UJunoInputMappingComponentData* InData);                                              // [0xc5df244] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/JunoGameNative.JunoInputControllerComponent.PopInputMappingContext
	// void PopInputMappingContext(class UJunoInputMappingComponentData* InData);                                               // [0xc5df0cc] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/JunoGameNative.JunoInputControllerComponent.HandleOnCreativeFlyChangedDelegate
	// void HandleOnCreativeFlyChangedDelegate(bool bIsFlying);                                                                 // [0xc5deecc] Final|Native|Private 
};

/// Class /Script/JunoGameNative.JunoLWITriggerComponent
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UJunoLWITriggerComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/JunoGameNative.JunoPawnComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJunoPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bShouldSpawnDeathChest                                      OFFSET(get<bool>, {0xA8, 1, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponent.ShouldPawnSpawnDeathChest
	// bool ShouldPawnSpawnDeathChest();                                                                                        // [0xafa59b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponent.IsPlayerInCave
	// bool IsPlayerInCave();                                                                                                   // [0xc5df04c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPawnComponent_EmotionalState
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UJunoPawnComponent_EmotionalState : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnJunoCurrentEmotionalStateChangedDelegate                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoCurrentEmotionalStateStartedChange                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJunoCurrentEmotionChangeFinished                          OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCheatEmotionIndexChanged                                  OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(EJunoPawnEmotionalState)                   CurrentEmotionalState                                       OFFSET(get<T>, {0xE8, 1, 0, 0})
	SMember(FJunoEmotionalStateData)                   TargetEmotionalState                                        OFFSET(getStruct<T>, {0xEC, 16, 0, 0})
	DMember(char)                                      CheatEmotionIndex                                           OFFSET(get<char>, {0xFC, 1, 0, 0})
	CMember(TArray<FJunoPawnEmotionalStateMappingFromAwesomeLevel>) JunoPawnEmotionalStateMappingFromAwesomeLevel  OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     ResetToDefaultEmotionRate                                   OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     TimeToStayAtEmotionInSeconds                                OFFSET(get<float>, {0x11C, 4, 0, 0})
	SMember(FTimerHandle)                              DefaultEmotionHandle                                        OFFSET(getStruct<T>, {0x128, 8, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.SetEmotionalState
	// void SetEmotionalState(FJunoEmotionalStateData Emotion);                                                                 // [0xc5df4d8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.SetCurrentEmotionalState
	// void SetCurrentEmotionalState(EJunoPawnEmotionalState NewEmotion);                                                       // [0xc5df458] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.ResetToDefaultEmotionalState
	// void ResetToDefaultEmotionalState();                                                                                     // [0xc5df3bc] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_TargetEmotionalState
	// void OnRep_TargetEmotionalState();                                                                                       // [0xc5df0b8] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_CurrentEmotionalState
	// void OnRep_CurrentEmotionalState();                                                                                      // [0xc5df0a4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.OnRep_CheatEmotionIndex
	// void OnRep_CheatEmotionIndex();                                                                                          // [0xc5df070] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.HandleJunoAwesomeLevelChanged
	// void HandleJunoAwesomeLevelChanged(FJunoAwesomeLevelChangeData& ChangeData);                                             // [0xc5dec04] Final|Native|Private|HasOutParms 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.GetCurrentEmotionalStateValue
	// float GetCurrentEmotionalStateValue();                                                                                   // [0xc5dd228] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/JunoGameNative.JunoPawnComponent_EmotionalState.GetCurrentEmotionalState
	// EJunoPawnEmotionalState GetCurrentEmotionalState();                                                                      // [0x9343ce8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UJunoPawnPhysicsRepulsionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     PushOutMaxDistance                                          OFFSET(get<float>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.SetCapsuleMass
	// void SetCapsuleMass(float InBaseForce);                                                                                  // [0xc5df3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleMovementModeChanged
	// void HandleMovementModeChanged(TEnumAsByte<EMovementMode> MovementMode, char CustomMode);                                // [0xc5dee10] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleMovementBaseChanged
	// void HandleMovementBaseChanged(class UPrimitiveComponent* NewBaseComponent, FName BoneName);                             // [0xc5dec94] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleHeldObjectChanged
	// void HandleHeldObjectChanged(class AActor* HeldObject);                                                                  // [0xc5deb88] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleComponentPhysicsStateChange
	// void HandleComponentPhysicsStateChange(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange); // [0xc5deac4] Final|Native|Private 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.HandleComponentHit
	// void HandleComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xc5de768] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/JunoGameNative.JunoPawnPhysicsRepulsionComponent.GetCapsuleMass
	// float GetCapsuleMass();                                                                                                  // [0x390bcdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoPlayerState
/// Size: 0x0028 (0x0019A0 - 0x0019C8)
class AJunoPlayerState : public AFortPlayerStateAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6600;

public:
	SMember(FGuid)                                     CaveId                                                      OFFSET(getStruct<T>, {0x19A0, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      PinColorForPlayer                                           OFFSET(get<T>, {0x19B0, 16, 0, 0})
	SMember(FGameplayTag)                              GameplayTagPresentWhenTeleporting                           OFFSET(getStruct<T>, {0x19C0, 4, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.JunoPlayerState.GetCaveId
	// FGuid GetCaveId();                                                                                                       // [0xc5dd154] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/JunoGameNative.JunoWorldStreamingSourceProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWorldStreamingSourceProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoControllerComponent_StreamingSources
/// Size: 0x0050 (0x000110 - 0x000160)
class UJunoControllerComponent_StreamingSources : public UFortControllerComponent_StreamingSources
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoAIPersistence
/// Size: 0x0210 (0x0000F8 - 0x000308)
class UPlayspaceComponent_JunoAIPersistence : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FGameplayTagContainer)                     AllDynamicUniqueAIIdentifiers                               OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	CMember(TArray<FJunoAIFriendshipStateThresholds>)  FriendshipStateThresholds                                   OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoPerformance
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UPlayspaceComponent_JunoPerformance : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/JunoGameNative.PlayspaceComponent_JunoServerExpiration
/// Size: 0x0018 (0x0001B8 - 0x0001D0)
class UPlayspaceComponent_JunoServerExpiration : public UPlayspaceComponent_ServerExpiration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(bool)                                      bUseConfigAlertDataList                                     OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	CMember(TArray<FServerExpirationAlertData>)        ConfigAlertDataList                                         OFFSET(get<T>, {0x1C0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoClusterUnionCustomRepNode
/// Size: 0x0028 (0x000050 - 0x000078)
class UJunoClusterUnionCustomRepNode : public UFortReplicationGraphNode_Custom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<class AJunoClusterUnionActor*>)     AllClusterUnions                                            OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoAction.K2_OnExecuteAction
	// void K2_OnExecuteAction(FJunoActionTargetPayload& ActionTargetPayload, class UJunoActionConfig* Config);                 // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/JunoGameNative.JunoAction_SetStaticMesh
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoAction_SetStaticMesh : public UJunoAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoBuildingActorCountMetric
/// Size: 0x0008 (0x000028 - 0x000030)
class UJunoBuildingActorCountMetric : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UDataTable*)                         BuildLimitPools                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingActorCountMetricComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UJunoBuildingActorCountMetricComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UClass*)                             JunoBuildingMetricClass                                     OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UJunoBuildingActorCountMetric*)      JunoBuildingMetric                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingActorMetric
/// Size: 0x01D8 (0x000050 - 0x000228)
class UJunoBuildingActorMetric : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FScalableFloat)                            MinValue                                                    OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FScalableFloat)                            NetworkRelevantActorCountThreshold                          OFFSET(getStruct<T>, {0x88, 40, 0, 0})
	SMember(FScalableFloat)                            SpatialPrecision                                            OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(TMap<FJunoTrackedActorKey, FJunoRelevantActorTrackingData>) ActorCounts                                OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TSet<FJunoTrackedActor>)                   TrackedActors                                               OFFSET(get<T>, {0x128, 80, 0, 0})
	CMember(TArray<class UClass*>)                     TrackedClasses                                              OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TSet<FJunoTrackedActorRefreshmentOptions>) PendingRefreshments                                         OFFSET(get<T>, {0x188, 80, 0, 0})
	CMember(TSet<TWeakObjectPtr<AActor*>>)             ActorsPendingAdd                                            OFFSET(get<T>, {0x1D8, 80, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBuildingSpatialMetricComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UJunoBuildingSpatialMetricComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TWeakObjectPtr<UClass*>)                   JunoBuildingMetricClass                                     OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TWeakObjectPtr<UJunoBuildingActorMetric*>) JunoBuildingMetric                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/JunoGameNative.JunoAssetList
/// Size: 0x0010 (0x000028 - 0x000038)
class UJunoAssetList : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FSoftObjectPath>)                   Assets                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.SpawnResourcesOnDestruction
	// void SpawnResourcesOnDestruction(class AActor* Actor, FVector& LastHitLocation, class AActor* DamageCauser, FGameplayEffectContextHandle& EffectContext); // [0xc5dfb74] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.SpawnPersistentActor
	// class AActor* SpawnPersistentActor(class UObject* WorldContextObject, class UClass*& ActorClass, FTransform& SpawnTransform, class APawn* Instigator, class AJunoPersistentPlayspace* Playspace, FGameplayTagQuery PlayspaceTagQuery); // [0xc5df6a4] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.SetGeometryCollectionISMPoolCustomInstanceData
	// void SetGeometryCollectionISMPoolCustomInstanceData(class UGeometryCollectionComponent* GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // [0xc5df56c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.JunoForEachActorComponentConstDelegate__DelegateSignature
	// void JunoForEachActorComponentConstDelegate__DelegateSignature(class UActorComponent* Component);                        // [0x1340978] Public|Delegate      
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.IsFreshWorld
	// bool IsFreshWorld(class UObject* WorldContextObject);                                                                    // [0xc5defcc] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.IsFirstPlayerSpawn
	// bool IsFirstPlayerSpawn(class AFortPlayerPawn* PlayerPawn);                                                              // [0xc5def4c] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetWorldStartPosition
	// void GetWorldStartPosition(class UObject* WorldContextObject, FVector& Location, bool& bIsReady);                        // [0xc5de614] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPreviewSmartObjectEntranceLocationsWithValidation
	// bool GetPreviewSmartObjectEntranceLocationsWithValidation(class UObject* WorldContextObject, FTransform& WorldTransform, class USmartObjectDefinition* SmartObjectDefinition, class AActor* SkipActor, FSmartObjectSlotEntranceLocationRequest& Request, TArray<FSmartObjectSlotEntranceLocationResult>& Results); // [0xc5de2a4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPreviewSmartObjectEntranceLocations
	// bool GetPreviewSmartObjectEntranceLocations(FTransform& WorldTransform, class USmartObjectDefinition* SmartObjectDefinition, TArray<FSmartObjectSlotEntranceLocationResult>& Results); // [0xc5ddf10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayspaceComponentFromPlayspace
	// class UPlayspaceComponent* GetPlayspaceComponentFromPlayspace(class AActor* Actor, class UClass* ComponentClass, class UClass* PlayspaceClass); // [0xc5ddc78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayspaceComponentByInterface
	// class UPlayspaceComponent* GetPlayspaceComponentByInterface(class AActor* Actor, class UClass* InterfaceClass, class UClass* PlayspaceClass); // [0xc5dd9b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetPlayerSaveData
	// FJunoPlayerSaveData GetPlayerSaveData(class AController* PlayerController, bool& bIsValid);                              // [0xc5dd814] Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetMergedMeshComponents
	// TArray<UPrimitiveComponent*> GetMergedMeshComponents(class UObject* WorldContextObject);                                 // [0xc5dd780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetMapManagerComponent
	// class UJunoMapManagerComponent* GetMapManagerComponent(class UObject* WorldContextObject);                               // [0xc5dd700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetKnownCraftingRecipes
	// void GetKnownCraftingRecipes(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xc5dd498] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetIsWorldOwner
	// bool GetIsWorldOwner(class AFortPlayerController* PC);                                                                   // [0xc5dd418] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetIsWorldKeyHolder
	// bool GetIsWorldKeyHolder(class AFortPlayerController* PC);                                                               // [0xc5dd398] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetDistanceToWorldStartPosition
	// double GetDistanceToWorldStartPosition(class UObject* WorldContextObject, FVector& Location, bool& bIsReady);            // [0xc5dd240] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetCountOfResourcesInAIResourcesInventory
	// int32_t GetCountOfResourcesInAIResourcesInventory(class AActor* AIActor);                                                // [0xc5dd170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBoneIndex
	// int32_t GetBoneIndex(class USkeletalMesh* SkeletalMesh, FName BoneName);                                                 // [0xc5dcfa8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeInformationForActor
	// void GetBiomeInformationForActor(class AActor* Actor, FJunoBiomeInfoQueryResult& OutResult);                             // [0xc5dcdec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeInformationAtLocation
	// void GetBiomeInformationAtLocation(class UObject* WorldContextObject, FVector& Location, FJunoBiomeInfoQueryResult& OutResult); // [0xc5dcc90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetBiomeForActor
	// void GetBiomeForActor(class AActor* Actor, EJunoBiome& OutResult);                                                       // [0xc5dcae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSCustomizableObjectInstance
	// class UCustomizableObjectInstance* GetAMSCustomizableObjectInstance(class AActor* Actor);                                // [0xc5dc8e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSAnimDataAssetsFromActor
	// bool GetAMSAnimDataAssetsFromActor(class AActor* Actor, FAssembledMeshSchemaData_AnimDataAssets& AnimData);              // [0xc5dc7d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetAMSAnimDataAssets
	// bool GetAMSAnimDataAssets(class AFortPlayerPawn* FortPlayerPawn, FAssembledMeshSchemaData_AnimDataAssets& AnimData);     // [0xc5dc7d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.GetActorPersistentPlayspace
	// class AJunoPersistentPlayspace* GetActorPersistentPlayspace(class AActor* Actor);                                        // [0xc5dc994] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.ForEachComponentOfActorClassDefault
	// void ForEachComponentOfActorClassDefault(class UClass*& ActorClass, class UClass*& ComponentClass, FDelegateProperty& Func); // [0xc5dc67c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.CostlyFindAIDisplayNameFromUniqueAIIdentifier
	// FText CostlyFindAIDisplayNameFromUniqueAIIdentifier(class UObject* WorldContextObject, FGameplayTag& UniqueAIIdentifier); // [0xc5dc568] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/JunoGameNative.JunoBlueprintLibrary.BreakHitResultThreadSafe
	// void BreakHitResultThreadSafe(FHitResult& Hit, bool& bBlockingHit, bool& bInitialOverlap, float& Time, float& Distance, FVector& Location, FVector& ImpactPoint, FVector& Normal, FVector& ImpactNormal, class UPhysicalMaterial*& PhysMat, class AActor*& HitActor, class UPrimitiveComponent*& HitComponent, FName& HitBoneName, FName& BoneName, int32_t& HitItem, int32_t& ElementIndex, int32_t& FaceIndex, FVector& TraceStart, FVector& TraceEnd); // [0xc5dbcbc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/JunoGameNative.JunoCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTurnOnWorldSetting
	// void JunoTurnOnWorldSetting(FName WorldSetting);                                                                         // [0x8411ba8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTurnOffWorldSetting
	// void JunoTurnOffWorldSetting(FName WorldSetting);                                                                        // [0x8411ba8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTransitionWeatherNow
	// void JunoTransitionWeatherNow(FName OptionalLocation);                                                                   // [0x8411ba8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleKnowledgeFiltering
	// void JunoToggleKnowledgeFiltering();                                                                                     // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleKnowledgeDebugMenu
	// void JunoToggleKnowledgeDebugMenu();                                                                                     // [0x35e6228] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleFreeCrafting
	// void JunoToggleFreeCrafting();                                                                                           // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoToggleBlockUnownedMCPRecipesKnowledgeWhenUnfiltered
	// void JunoToggleBlockUnownedMCPRecipesKnowledgeWhenUnfiltered();                                                          // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTeleportToPersistenceLocationOfInterest
	// void JunoTeleportToPersistenceLocationOfInterest();                                                                      // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoTeleportToBackpack
	// void JunoTeleportToBackpack();                                                                                           // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoShowDualLocalPlayerInventory
	// void JunoShowDualLocalPlayerInventory();                                                                                 // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoSetEmotion
	// void JunoSetEmotion(int32_t EmotionIndex);                                                                               // [0x6b56e20] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoSavePersistenceDataCsvReport
	// void JunoSavePersistenceDataCsvReport();                                                                                 // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealRecipesOfCategory
	// void JunoRevealRecipesOfCategory(FName CraftingObjectTag, FName CategoryTag, FName SubCategoryTag);                      // [0xc5f7634] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealRecipe
	// void JunoRevealRecipe(FName RecipeName);                                                                                 // [0x8411ba8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoRevealBuildingTestRecipes
	// void JunoRevealBuildingTestRecipes();                                                                                    // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoResavePlayerPersistence
	// void JunoResavePlayerPersistence();                                                                                      // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoResaveAllPersistentPlayspacesActorsAroundPlayer
	// void JunoResaveAllPersistentPlayspacesActorsAroundPlayer(float Max2DDistance);                                           // [0x68f8c0c] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoResaveAllPersistentPlayspacesActors
	// void JunoResaveAllPersistentPlayspacesActors();                                                                          // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_Item
	// void JunoProfiler_Item();                                                                                                // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_Creature
	// void JunoProfiler_Creature();                                                                                            // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingSuburb
	// void JunoProfiler_BuildingSuburb(int32_t NumBuildings);                                                                  // [0x6b56e20] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingPropBundle
	// void JunoProfiler_BuildingPropBundle(FString PropBundleTemplateId);                                                      // [0x6d232d0] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingJunkyard
	// void JunoProfiler_BuildingJunkyard(int32_t NumBuildings, bool bSpawnRandom);                                             // [0x9f27288] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProfiler_BuildingActor
	// void JunoProfiler_BuildingActor();                                                                                       // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoProcessPlayerProgression
	// void JunoProcessPlayerProgression();                                                                                     // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintWorldSettings
	// void JunoPrintWorldSettings();                                                                                           // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintPersistenceDataReport
	// void JunoPrintPersistenceDataReport(bool bShowTemplateData, bool bShowActorInstanceData, bool bShowJunoUpdateActions, bool bShowJunoDeleteActions); // [0xc5f7514] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintConnectivityGraphSummary
	// void JunoPrintConnectivityGraphSummary();                                                                                // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoPrintAreaAwesomeLevelInfo
	// void JunoPrintAreaAwesomeLevelInfo();                                                                                    // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoLogPersistenceDebugInfo
	// void JunoLogPersistenceDebugInfo();                                                                                      // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoListWorlds
	// void JunoListWorlds();                                                                                                   // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoGiveWeapon
	// void JunoGiveWeapon(FString WeaponPath);                                                                                 // [0x9548a24] Final|Exec|Native|Private|Const 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoForceWeatherState
	// void JunoForceWeatherState(FName NewWeatherType, FName OptionalLocation);                                                // [0x6d28668] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoForcePlayerTemperature
	// void JunoForcePlayerTemperature(FName NewTemperatureTag);                                                                // [0x8411ba8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableSpawnedActorPersistentPlayspaceTracking
	// void JunoEnableSpawnedActorPersistentPlayspaceTracking(FName ActorName);                                                 // [0x8411ba8] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableSandbox
	// void JunoEnableSandbox();                                                                                                // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableModeratorMode
	// void JunoEnableModeratorMode();                                                                                          // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoEnableFreeBuild
	// void JunoEnableFreeBuild();                                                                                              // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDumpWorldPersistentContents
	// void JunoDumpWorldPersistentContents();                                                                                  // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDumpAllDeltasAssetReferences
	// void JunoDumpAllDeltasAssetReferences();                                                                                 // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDisableSandbox
	// void JunoDisableSandbox();                                                                                               // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDisableModeratorMode
	// void JunoDisableModeratorMode();                                                                                         // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDisableFreeBuild
	// void JunoDisableFreeBuild();                                                                                             // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDestroyCurrentVillage
	// void JunoDestroyCurrentVillage();                                                                                        // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDestroyAllSupportStructures
	// void JunoDestroyAllSupportStructures();                                                                                  // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDeleteWorld
	// void JunoDeleteWorld(FString JunoWorldId);                                                                               // [0x9548a24] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoDeleteAllWorlds
	// void JunoDeleteAllWorlds();                                                                                              // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCreateNewWorld
	// void JunoCreateNewWorld(FString Title, int32_t AdventureSeed);                                                           // [0x8d4e204] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCreateCurrentWorldCheckpoint
	// void JunoCreateCurrentWorldCheckpoint();                                                                                 // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCompleteGuidedBuildToStage
	// void JunoCompleteGuidedBuildToStage(int32_t SectionIndex, int32_t StageIndex);                                           // [0x6851bec] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCompleteGuidedBuild
	// void JunoCompleteGuidedBuild();                                                                                          // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCompleteCurrentGuidedBuildStage
	// void JunoCompleteCurrentGuidedBuildStage();                                                                              // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearKnowledgeCloudSave
	// void JunoClearKnowledgeCloudSave();                                                                                      // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearFOW
	// void JunoClearFOW(bool bForCurrentTile);                                                                                 // [0x64a7494] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoClearClientFOW
	// void JunoClearClientFOW(bool bForCurrentTile);                                                                           // [0x64a7494] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoCheckInWorldSaveDataAndExitPIE
	// void JunoCheckInWorldSaveDataAndExitPIE();                                                                               // [0x35e6228] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoApplyDamageToRadius
	// void JunoApplyDamageToRadius(float Radius, float DamageToApply);                                                         // [0x89a6ebc] Final|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoAdjustAreaAwesomePoints
	// void JunoAdjustAreaAwesomePoints(int32_t AwesomePointsDelta);                                                            // [0x6b56e20] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/JunoGameNative.JunoCheatManager.JunoAddEssence
	// void JunoAddEssence(FString EssencePath);                                                                                // [0x9548a24] Final|Exec|Native|Private|Const 
};

/// Class /Script/JunoGameNative.JunoGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureData
/// Size: 0x0018 (0x000040 - 0x000058)
class UJunoWeatherPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FJunoWeatherSaveData)                      WeatherSaveData                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureDataActor
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class AJunoWeatherPersistenceFeatureDataActor : public AJunoPersistenceFeatureDataActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TArray<FSavedWeather>)                     SavedWeathers                                               OFFSET(get<T>, {0x2D0, 16, 0, 0})
};

/// Class /Script/JunoGameNative.JunoWeatherPersistenceFeatureDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UJunoWeatherPersistenceFeatureDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/JunoGameNative.JunoWorldConditionWeatherState
/// Size: 0x0020 (0x000028 - 0x000048)
class UJunoWorldConditionWeatherState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/JunoGameNative.JunoWorldConditionWeatherState.HandleWeatherChanged
	// void HandleWeatherChanged(FJunoEvent_WeatherPhaseChanged& Payload);                                                      // [0xc5f7488] Final|Native|Private|HasOutParms 
};

/// Class /Script/JunoGameNative.BlockOctreeManager
/// Size: 0x0168 (0x000290 - 0x0003F8)
class ABlockOctreeManager : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	DMember(int32_t)                                   RelevancyRadius                                             OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	DMember(int32_t)                                   MaxISMCsToPopulateAFrame                                    OFFSET(get<int32_t>, {0x294, 4, 0, 0})
	DMember(bool)                                      bRenderAllBricks                                            OFFSET(get<bool>, {0x298, 1, 0, 0})
	CMember(TMap<int32_t, UInstancedStaticMeshComponent*>) CellIdToISMC                                            OFFSET(get<T>, {0x340, 80, 0, 0})
	CMember(class UInstancedStaticMeshComponent*)      ISMC                                                        OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) ISMCFreeList                                             OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x3C8, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      Colors                                                      OFFSET(get<T>, {0x3D8, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      RandomColors                                                OFFSET(get<T>, {0x3E8, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.BlockOctreeManager.Towers
	// void Towers(int32_t Rows, int32_t Cols);                                                                                 // [0xc5f7994] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/JunoGameNative.StressISMManager
/// Size: 0x0060 (0x000290 - 0x0002F0)
class AStressISMManager : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bPushUpdatesEveryTick                                       OFFSET(get<bool>, {0x290, 1, 0, 0})
	CMember(class UInstancedStaticMeshComponent*)      ISMC                                                        OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) ChildISMC                                                OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FRotator>)                          Rotations                                                   OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      Colors                                                      OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      RandomColors                                                OFFSET(get<T>, {0x2E0, 16, 0, 0})


	/// Functions
	// Function /Script/JunoGameNative.StressISMManager.Towers
	// void Towers(int32_t Rows, int32_t Cols, int32_t Height);                                                                 // [0xc5f7a54] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.StressISMManager.SetNumChildISMC
	// void SetNumChildISMC(int32_t Num);                                                                                       // [0xc5f7914] Final|Native|Public|BlueprintCallable 
	// Function /Script/JunoGameNative.StressISMManager.PushUpdatesToISMC
	// void PushUpdatesToISMC();                                                                                                // [0xc5f7900] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/JunoGameNative.SoundBreakEvent
/// Size: 0x0040 (0x000000 - 0x000040)
class FSoundBreakEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(int32_t)                                   BreakEventNum                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     AccumulatedMass                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysMaterial                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SoundCollisionEvent
/// Size: 0x0058 (0x000000 - 0x000058)
class FSoundCollisionEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(int32_t)                                   CollisionEventNum                                           OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     AccumulatedMass                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector)                                   DeltaVelocity                                               OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysMaterial                                                OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_EnterBuildModePreview
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_EnterBuildModePreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AJunoBuilderTool*)                   BuilderTool                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_ExitBuildModePreview
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_ExitBuildModePreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AJunoBuilderTool*)                   BuilderTool                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorStateContext
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoBuildingBehaviorStateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      OverlappedPreviewComponent                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoBuildingMultiOverlapResult)           OverlapResult                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoBuildingSupportedComponent>)   SupportedComponents                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bBlockedByAssembly                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bGuidedBuildMisplacement                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bBlockedByActorCount                                        OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSupportedComponent
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBuildingSupportedComponent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoBuildingFloatingResult)               Result                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingFloatingResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingFloatingResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<TWeakObjectPtr<UPrimitiveComponent*>>) SupportingComponents                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTemperatureChangedEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoTemperatureChangedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              OldTemperature                                              OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              NewTemperature                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTemperatureRangesChangedEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoTemperatureRangesChangedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FTemperatureRange>)                 NewTemperatureRanges                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.TemperatureRange
/// Size: 0x0014 (0x000000 - 0x000014)
class FTemperatureRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFloatRange)                               Range                                                       OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_TemperatureChanged
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoEvent_TemperatureChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FGameplayTag)                              NewTemperature                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     NewFloatTemperature                                         OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherLocation
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoWeatherLocation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EJunoBiome)                                Biome                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EJunoBiomeHabitat)                         Habitat                                                     OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_WeatherPhaseChanged
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoEvent_WeatherPhaseChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FJunoWeatherPhase)                         NewWeatherPhase                                             OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	SMember(FJunoWeatherPhase)                         NextWeatherPhase                                            OFFSET(getStruct<T>, {0x40, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherPhase
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoWeatherPhase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              WeatherTypeName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     TransitionIn                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TransitionOut                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WindDirectionDegree                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     WeatherIntensity                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     WindSpeed                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(double)                                    GameTimeWeatherEnds                                         OFFSET(get<double>, {0x20, 8, 0, 0})
	SMember(FGameplayTag)                              MorningTemperature                                          OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTag)                              DayTemperature                                              OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FGameplayTag)                              EveningTemperature                                          OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FGameplayTag)                              NightTemperature                                            OFFSET(getStruct<T>, {0x34, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampAwesomeStatsData
/// Size: 0x0014 (0x000000 - 0x000014)
class FJunoCampAwesomeStatsData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   CurrentAwesomePoints                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AwesomeLevelFloor                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxAwesomeLevel                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIsFromPersistence                                          OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeLevelChangeData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoAwesomeLevelChangeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   NewAwesomeLevel                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   OldAwesomeLevel                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CurrentAwesomePoints                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(class AJunoCampActor*)                     OwningCamp                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomePointModificationData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoAwesomePointModificationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   AwesomePointAmount                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AwesomePointsPostModification                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class AActor*)                             SourceActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(EJunoAwesomePointModificationContext)      ModificationContext                                         OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(class AJunoCampActor*)                     OwningCamp                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampRemovalStatusData
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoCampRemovalStatusData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bIsSoftRemoved                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     RemainingRealSecondsBeforeHardRemoval                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMoodStateData
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoMoodStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              MoodTag                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMoodReactionPayload
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoMoodReactionPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              SoundLibraryTag                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FGameplayCueTag)                           GameplayCueTag                                              OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecruitmentObjectAssignedData
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoRecruitmentObjectAssignedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGuid)                                     CampGuid                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          PlayerNetId                                                 OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCPortrait                                                 OFFSET(get<T>, {0x58, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherLocationChangedEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWeatherLocationChangedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoWeatherLocation)                      OldLocation                                                 OFFSET(getStruct<T>, {0x8, 2, 0, 0})
	SMember(FJunoWeatherLocation)                      NewLocation                                                 OFFSET(getStruct<T>, {0xA, 2, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingMessageBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FGuidedBuildingMessageBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) GuidedBuildingActor                                         OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingUpdate
/// Size: 0x0038 (0x000008 - 0x000040)
class FGuidedBuildingUpdate : public FGuidedBuildingMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FJunoStageKey)                             StageKey                                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FJunoStageKey)                             CurrentStageKey                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   TotalNumberOfStagesInSection                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSections                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   CurrentStageInSet                                           OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfStagesInSet                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfSnapsInStage                                 OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInStage                                   OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfSnapsInSection                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInSection                                 OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfSnapsInSet                                   OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInSet                                     OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoStageKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoStageKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SectionIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   StageIndex                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.AssembledMeshSchemaData_AnimDataAssets
/// Size: 0x004F (0x000001 - 0x000050)
class FAssembledMeshSchemaData_AnimDataAssets : public FAssembledMeshSchemaData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, UPrimaryDataAsset*>)           DataAssetMap                                                OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBiomeInfoQueryResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoBiomeInfoQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EJunoBiome)                                PrimaryBiome                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EJunoBiome)                                SecondaryBiome                                              OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EJunoBiomeHabitat)                         PrimaryHabitat                                              OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(EJunoBiomeHabitat)                         SecondaryHabitat                                            OFFSET(get<T>, {0x3, 1, 0, 0})
	CMember(EJunoCaveType)                             CaveType                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     BiomeMix                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HabitatMix                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIsWater                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     WaterDepth                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     WaterSurfaceHeight                                          OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(class AWaterBody*)                         WaterBody                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayerSaveData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FJunoPlayerSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FVector)                                   SpawnPosition                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   OriginalSpawnPosition                                       OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FJunoInventoryHandle)                      InventoryHandle                                             OFFSET(getStruct<T>, {0x48, 36, 0, 0})
	CMember(TArray<FGameplayTag>)                      CompletedFirstTimeConversationNPCIdentifiers                OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(int32_t)                                   WorldVisitCount                                             OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	SMember(FJunoPlayerStats)                          PlayerStats                                                 OFFSET(getStruct<T>, {0x84, 8, 0, 0})
	SMember(FJunoPlayerCheckpoint)                     CheckpointInfo                                              OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	DMember(int32_t)                                   CampCreatedCount                                            OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	SMember(FVector)                                   LastCaveTeleporterLocation                                  OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayerCheckpoint
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoPlayerCheckpoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGuid)                                     CheckpointGUID                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CheckpointActor                                             OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FVector)                                   CheckpointLocation                                          OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bHasCheckpointActor                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayerStats
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoPlayerStats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Hunger                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryHandle
/// Size: 0x0024 (0x000000 - 0x000024)
class FJunoInventoryHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<AJunoInventory*>)           Inventory                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarker
/// Size: 0x0098 (0x000000 - 0x000098)
class FJunoMarker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(class UTexture*)                           Icon                                                        OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(bool)                                      bOverrideColor                                              OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bEnableMarkerCustomization                                  OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(float)                                     TimeLeft                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          AttachedPlayerNetId                                         OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FGuid)                                     VolumeId                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FName)                                     SettingsName                                                OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           MaterialInstanceDynamic                                     OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FName)                                     IconParamName                                               OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     ColorParamName                                              OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	SMember(FDataTableRowHandle)                       CustomizationOptionsHandle                                  OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_PlacementData
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_PlacementData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bQuickBuild                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_PlacementStarted
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_PlacementStarted : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingExited
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_BuildingExited : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingPrebuild
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_BuildingPrebuild : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickbuildRecipeChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_QuickbuildRecipeChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickBuildSelectionData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_QuickBuildSelectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoQuickBuildSelectionData*)       QuickBuildSelectionData                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_QuickBuildSelectionResult
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoEvent_QuickBuildSelectionResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     SelectedRecipe                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.BuildingRecipeListItemSelected
/// Size: 0x0008 (0x000000 - 0x000008)
class FBuildingRecipeListItemSelected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bCanCraft                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_MCPItemPlacedInNewWorld
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_MCPItemPlacedInNewWorld : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   RemainingWorlds                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalAllowedWorlds                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_InputMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_InputMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenHudMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenHudMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CloseHudMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CloseHudMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_PrimaryContentPushedMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_PrimaryContentPushedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_PrimaryContentPoppedMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_PrimaryContentPoppedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenBuildingMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenBuildingMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenMapMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenMapMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenInventoryMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenInventoryMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AFortPlayerController*)              SourceController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenShopMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OpenShopMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CloseShopMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_CloseShopMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenEngagementMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OpenEngagementMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenBedAssignmentMenuMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_OpenBedAssignmentMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             BedActor                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenEscapeMenuMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OpenEscapeMenuMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryItemExecuted
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoEvent_InventoryItemExecuted : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortItem*)                          ItemExecuted                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FUniqueNetIdRepl)                          UniquePlayerId                                              OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryItemSelected
/// Size: 0x001C (0x000000 - 0x00001C)
class FJunoEvent_InventoryItemSelected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FGuid)                                     ItemSelected                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryMenuOpen
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_InventoryMenuOpen : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             InventoryObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_InventoryMenuClose
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_InventoryMenuClose : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             InventoryObject                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_EmptyHands
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoEvent_EmptyHands : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_FreeBuildItemSpawned
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_FreeBuildItemSpawned : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UFortItemDefinition*)                SpawnedItemDefinition                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.PushMontageData
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FPushMontageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FGameplayTagRequirements)                  MontageDataRequirement                                      OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	CMember(TMap<EFortPhysicsSimSize, UAnimMontage*>)  SizeToMontageMap                                            OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAccountItemDefinitionOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoAccountItemDefinitionOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UFortAccountItemDefinition*)         OverridenAccountItemDefinition                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAccountItemConversionRow
/// Size: 0x0080 (0x000008 - 0x000088)
class FJunoAccountItemConversionRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTagsToAdd                                           OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bOverrideFrontendTransform                                  OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     FrontendPreviewScale                                        OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   FrontendPreviewPivotOffset                                  OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  FrontendPreviewInitialRotation                              OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PreviewActorClass                                           OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEmoteConversionRow
/// Size: 0x00C8 (0x000088 - 0x000150)
class FJunoEmoteConversionRow : public FJunoAccountItemConversionRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             AnimationFemaleOverride                                     OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FFortEmoteMapping>)                 AnimationOverrides                                          OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontEndAnimation                                           OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontEndAnimationFemaleOverride                             OFFSET(get<T>, {0xF8, 32, 0, 0})
	CMember(TArray<FFortEmoteMapping>)                 FrontEndAnimationOverrides                                  OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FVector)                                   GroupEmotePositionOffset                                    OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	DMember(float)                                     GroupEmotePositionOffsetTolerance                           OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     GroupEmoteFollowDistance                                    OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     WalkForwardSpeed                                            OFFSET(get<float>, {0x148, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCharacterConversionRow
/// Size: 0x0048 (0x000088 - 0x0000D0)
class FJunoCharacterConversionRow : public FJunoAccountItemConversionRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UAssembledMeshSchema*>)     AssembledMeshSchema                                         OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             FrontendAnimMontageIdleOverride                             OFFSET(get<T>, {0xA8, 32, 0, 0})
	DMember(float)                                     PreviewPawnScale                                            OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoActorAttributeOverrideData
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoActorAttributeOverrideData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     PrimaryLootTier                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     SecondaryLootTier                                           OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FGameplayTag)                              DamageSurfaceTypeTag                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ImpulseMagnitudeDamageThreshold                             OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FName)                                     PhysicsDamageSurfaceRatioRowName                            OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAIPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0180 (0x000000 - 0x000180)
class FJunoAIPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FSavedAIDataManager)                       SavedAIData                                                 OFFSET(getStruct<T>, {0x0, 384, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIDataManager
/// Size: 0x0180 (0x000000 - 0x000180)
class FSavedAIDataManager : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TMap<FGameplayTag, FSavedAIData>)          SavedAIDataPerUniqueAIIdentifier                            OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FSavedCreatureData>)    SavedCreatureDataPerUniqueAIIdentifier                      OFFSET(get<T>, {0x50, 80, 0, 0})
	SMember(FSavedGlobalAIData)                        SavedGlobalAIData                                           OFFSET(getStruct<T>, {0xA0, 224, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FSavedGlobalAIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FSavedGlobalAIData_FTUE)                   FTUE                                                        OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FSavedGlobalAIData_Rewards)                Rewards                                                     OFFSET(getStruct<T>, {0x28, 80, 0, 0})
	SMember(FSavedGlobalAIData_WorldSettings)          WorldSettings                                               OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FSavedGlobalAIData_RecruitmentObjectData)  RecruitmentObjectData                                       OFFSET(getStruct<T>, {0x80, 80, 0, 0})
	SMember(FSavedGlobalAIData_DynamicUniqueAIManager) DynamicUniqueAIManager                                      OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_BaseType
/// Size: 0x0001 (0x000000 - 0x000001)
class FSavedAIData_BaseType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_DynamicUniqueAIManager
/// Size: 0x000F (0x000001 - 0x000010)
class FSavedGlobalAIData_DynamicUniqueAIManager : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSavedGlobalAIData_DynamicUniqueAI>) AllAIs                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_DynamicUniqueAI
/// Size: 0x0007 (0x000001 - 0x000008)
class FSavedGlobalAIData_DynamicUniqueAI : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              AssignedUniqueAIIdentifier                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              DescriptorTag                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_RecruitmentObjectData
/// Size: 0x004F (0x000001 - 0x000050)
class FSavedGlobalAIData_RecruitmentObjectData : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FJunoRecruitmentObjectAssignedData>) RecruitmentObjectToAssignedData                       OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_WorldSettings
/// Size: 0x0003 (0x000001 - 0x000004)
class FSavedGlobalAIData_WorldSettings : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bEnableFriendlyCreatures                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnableHostileCreatures                                     OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bEnableFriendlyNPCs                                         OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bRecruitedCreaturePermaDeath                                OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_Rewards
/// Size: 0x004F (0x000001 - 0x000050)
class FSavedGlobalAIData_Rewards : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, int32_t>)                      CountOfRewardedLootTierGroups                               OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGlobalAIData_FTUE
/// Size: 0x0027 (0x000001 - 0x000028)
class FSavedGlobalAIData_FTUE : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              PickedFTUENPC                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   FTUEStartLocation                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bFTUEWasEverCompleted                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedCreatureData
/// Size: 0x0040 (0x000000 - 0x000040)
class FSavedCreatureData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FSavedCreatureData_Camp)                   Camp                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSavedGenericAIData_Friendship)            Friendship                                                  OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FSavedCreatureData_SoftRemoval)            SoftRemoval                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FSavedCreatureData_Customizations)         Customizations                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedCreatureData_Customizations
/// Size: 0x000F (0x000001 - 0x000010)
class FSavedCreatureData_Customizations : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FText)                                     CustomName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedCreatureData_SoftRemoval
/// Size: 0x000F (0x000001 - 0x000010)
class FSavedCreatureData_SoftRemoval : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   SoftRemovedElapsedJunoGameTime                              OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   NoInteractionsElapsedJunoGameTime                           OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedGenericAIData_Friendship
/// Size: 0x0003 (0x000001 - 0x000004)
class FSavedGenericAIData_Friendship : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedCreatureData_Camp
/// Size: 0x0017 (0x000001 - 0x000018)
class FSavedCreatureData_Camp : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGuid)                                     UniqueGuid                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   AssignedJunoGameTime                                        OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData
/// Size: 0x01B8 (0x000000 - 0x0001B8)
class FSavedAIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FSavedAIData_Tokens)                       Tokens                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FSavedAIData_Camp)                         Camp                                                        OFFSET(getStruct<T>, {0x20, 136, 0, 0})
	SMember(FSavedAIData_SoftRemoval)                  SoftRemoval                                                 OFFSET(getStruct<T>, {0xA8, 48, 0, 0})
	SMember(FSavedAIData_Resources)                    Resources                                                   OFFSET(getStruct<T>, {0xD8, 152, 0, 0})
	SMember(FSavedAIData_Merchant)                     Merchant                                                    OFFSET(getStruct<T>, {0x170, 32, 0, 0})
	SMember(FSavedAIData_WorldSpawn)                   WorldSpawn                                                  OFFSET(getStruct<T>, {0x190, 40, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_WorldSpawn
/// Size: 0x0027 (0x000001 - 0x000028)
class FSavedAIData_WorldSpawn : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGuid)                                     PointProviderGuid                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   AssignationEndGameTime                                      OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	SMember(FString)                                   EventDataPath                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Merchant
/// Size: 0x001F (0x000001 - 0x000020)
class FSavedAIData_Merchant : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FPrimaryAssetId)                           WantItemId                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FSavedAIData_Merchant_StockEntry>)  StockEntries                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     StockRefreshTimeRemaining                                   OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Merchant_StockEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FSavedAIData_Merchant_StockEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   StockQuantity                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FPrimaryAssetId)                           StockSaleItemId                                             OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Resources
/// Size: 0x0097 (0x000001 - 0x000098)
class FSavedAIData_Resources : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<FName, double>)                       GeneratingLootTierGroups                                    OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FSavedAIData_Resources_GeneratedItem>) GeneratedItems                                           OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   GeneratedLootCallsSinceLastRefresh                          OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FPrimaryAssetId)                           LastUsedGatheringActorItemId                                OFFSET(getStruct<T>, {0x64, 8, 0, 0})
	SMember(FName)                                     LastGeneratedLootTier                                       OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	SMember(FJunoInventoryHandle)                      SavedFullInventoryHandle                                    OFFSET(getStruct<T>, {0x70, 36, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Resources_GeneratedItem
/// Size: 0x000C (0x000000 - 0x00000C)
class FSavedAIData_Resources_GeneratedItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FPrimaryAssetId)                           PrimaryAssetId                                              OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_SoftRemoval
/// Size: 0x002F (0x000001 - 0x000030)
class FSavedAIData_SoftRemoval : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTagContainer)                     SoftRemovedReasons                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(int64_t)                                   SoftRemovedElapsedJunoGameTime                              OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   NoInteractionsElapsedJunoGameTime                           OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Camp
/// Size: 0x0087 (0x000001 - 0x000088)
class FSavedAIData_Camp : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGuid)                                     UniqueGuid                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   AssignedJunoGameTime                                        OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(bool)                                      bWasRecruitedRemotely                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SpawnReasons                                                OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTag)                              Role                                                        OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          AttachedPlayerNetId                                         OFFSET(getStruct<T>, {0x48, 48, 0, 0})
	DMember(int64_t)                                   LastSpawnTime                                               OFFSET(get<int64_t>, {0x78, 8, 0, 0})
	CMember(EJunoBiome)                                AttachedBiome                                               OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedAIData_Tokens
/// Size: 0x001F (0x000001 - 0x000020)
class FSavedAIData_Tokens : public FSavedAIData_BaseType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTagContainer)                     SavedTokens                                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeaponEssenceData
/// Size: 0x0028 (0x000008 - 0x000030)
class FJunoWeaponEssenceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      WeaponDefinition                                            OFFSET(get<T>, {0x8, 32, 0, 0})
	DMember(int32_t)                                   EssenceSlotCount                                            OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAnimalIconsRow
/// Size: 0x0078 (0x000008 - 0x000080)
class FJunoAnimalIconsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              AnimalGameplayTag                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FText)                                     AnimalDescription                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SmallIcon                                                   OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               LargeIcon                                                   OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               FullScreenIcon                                              OFFSET(get<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAnimalRandomNameRow
/// Size: 0x0030 (0x000008 - 0x000038)
class FJunoAnimalRandomNameRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FText>)                             AnimalNames                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     AllowedAIDescriptorTags                                     OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeInteractionConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoAwesomeInteractionConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   AwesomePointAdjustment                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomePlacementCategoryConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoAwesomePlacementCategoryConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              BuildingCategory                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   AwesomePointsToContribute                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeUpgradeResourceCost
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoAwesomeUpgradeResourceCost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ResourceCostItemDefinition                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   ItemAmount                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeUpgradeBuiltObjectsRequirement
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoAwesomeUpgradeBuiltObjectsRequirement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     CraftingRowName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ItemAmount                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomeUpgradeRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoAwesomeUpgradeRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FJunoAwesomeUpgradeResourceCost>)   ResourceCostList                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FJunoAwesomeUpgradeBuiltObjectsRequirement>) RequiredBuiltObjectsList                           OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredPersistentTags                                      OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TArray<FName>)                             RequiredWorldReactions                                      OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomePoiConfigTableRow
/// Size: 0x0028 (0x000008 - 0x000030)
class FJunoAwesomePoiConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              ConfigKey                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<int32_t>)                           AwesomePointGoals                                           OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FJunoAwesomeUpgradeRequirements>)   UpgradeRequirements                                         OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBarterSaleItemData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoBarterSaleItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      SaleItemDefinition                                          OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   SaleItemBulkQuantity                                        OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   WantItemQuantity                                            OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBarterPricingData
/// Size: 0x0030 (0x000008 - 0x000038)
class FJunoBarterPricingData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      WantItemDefinition                                          OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FJunoBarterSaleItemData>)           SaleItemDatas                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWaterLocationResult
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoWaterLocationResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EJunoBiomeHabitat)                         WaterType                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   DirectionMaskIndex                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bFoundWater                                                 OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(class AWaterBody*)                         WaterBody                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDebugWorldInfoResult
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoDebugWorldInfoResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     AdventureSeed                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     TileSet                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     TileName                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FText)                                     BiomeName                                                   OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldAnalyticsInfoResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoWorldAnalyticsInfoResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   TileName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   NormalizedTileLocation                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTrackedActorKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoTrackedActorKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FIntVector)                                LocationKey                                                 OFFSET(getStruct<T>, {0x0, 12, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTrackedActor
/// Size: 0x001C (0x000000 - 0x00001C)
class FJunoTrackedActor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoTrackedActorKey)                      ActorKey                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     InitialNetRelevanceDistance                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumberOfRelevantActors                                      OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingMetricQuery
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBuildingMetricQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTrackedActorRefreshmentOptions
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoTrackedActorRefreshmentOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EJunoTrackedActorRefreshReason)            Reason                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ActorRequiringRefresh                                       OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectivityComponentEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoBuildingConnectivityComponentEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TSet<int32_t>)                             IDs                                                         OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPoint
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FJunoBuildingConnectionPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                FieldToObject                                               OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FTransform)                                PointToObject                                               OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	SMember(FVector2D)                                 FieldSize                                                   OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(int32_t)                                   ObjectId                                                    OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(EConnectionPointType)                      PointType                                                   OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bAvailable                                                  OFFSET(get<bool>, {0xDD, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPoints
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingConnectionPoints : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoBuildingConnectionPoint>)      Value                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectionPointsResult
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoBuildingConnectionPointsResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<EConnectionFieldGender, FJunoBuildingConnectionPoints>) PointsMap                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnection
/// Size: 0x01D0 (0x000000 - 0x0001D0)
class FJunoBuildingConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FJunoBuildingConnectionPoint)              Candidate                                                   OFFSET(getStruct<T>, {0x0, 224, 0, 0})
	SMember(FJunoBuildingConnectionPoint)              Target                                                      OFFSET(getStruct<T>, {0xE0, 224, 0, 0})
	CMember(TArray<FVector>)                           Locations                                                   OFFSET(get<T>, {0x1C0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterCreated
/// Size: 0x0014 (0x000000 - 0x000014)
class FJunoEvent_CampCenterCreated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterDestroyed
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampCenterDestroyed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterActivated
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampCenterActivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampCenterDeactivated
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampCenterDeactivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampActorActivated
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampActorActivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampActorDeactivated
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CampActorDeactivated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampAwesomeLevelChanged
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoEvent_CampAwesomeLevelChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampAwesomePointsModified
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoEvent_CampAwesomePointsModified : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_CampAISpawned
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_CampAISpawned : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             SpawnedAI                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CampAIDespawned
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_CampAIDespawned : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             SpawnedAI                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.AwesomeLevelSaveData
/// Size: 0x0004 (0x000000 - 0x000004)
class FAwesomeLevelSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   AwesomeLevel                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.AICampManagementSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
class FAICampManagementSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   LastPassiveResourceGatheringSimulatedJunoRealTime           OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   CampCreationTime                                            OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   FirstRecruitedNPCTime                                       OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   LastVisitorsUpdateTime                                      OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.NamedPOISaveData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FNamedPOISaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FText)                                     POIName                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FJunoMarker)                               Marker                                                      OFFSET(getStruct<T>, {0x10, 152, 0, 0})
	SMember(FGuid)                                     MarkerID                                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoCampPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoAllCampsSaveData)                     SavedAllCamps                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAllCampsSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoAllCampsSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoCampSaveData>)                 Camps                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampSaveData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FJunoCampSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGuid)                                     CampCenterID                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPrimaryAssetId)                           CampCenterAssetID                                           OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGuid)                                     CampActorID                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FBox)                                      CampBounds                                                  OFFSET(getStruct<T>, {0x28, 56, 0, 0})
	DMember(int64_t)                                   SoftRemovedElapsedJunoGameTime                              OFFSET(get<int64_t>, {0x60, 8, 0, 0})
	DMember(int64_t)                                   LastRewardsRollInJunoGameTime                               OFFSET(get<int64_t>, {0x68, 8, 0, 0})
	SMember(FJunoCampRewardResults)                    LastRewardResults                                           OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FName)                                     LastRewardsRollLootTierGroupToSave                          OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   LastAwesomenessLevel                                        OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	CMember(EJunoBiome)                                CampBiome                                                   OFFSET(get<T>, {0x98, 1, 0, 0})
	SMember(FGameplayTagContainer)                     PersistentTags                                              OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FGameplayTag)                              CampTag                                                     OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bIsCampPermanent                                            OFFSET(get<bool>, {0xC4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampRewardResults
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoCampRewardResults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FFortItemEntry>)                    Items                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FJunoCampRewardRecipeResult>)       Recipes                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampRewardRecipeResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoCampRewardRecipeResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>) KnowledgeItemDefinition                         OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EJunoKnowledgeState)                       NewState                                                    OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampRandomNameRow
/// Size: 0x0028 (0x000008 - 0x000030)
class FJunoCampRandomNameRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FText>)                             RandomVillageNames                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bAllBiomes                                                  OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(TArray<EJunoBiome>)                        AllowedBiomes                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.ActiveCampNPCEntry
/// Size: 0x0080 (0x000000 - 0x000080)
class FActiveCampNPCEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTag)                              RoleTag                                                     OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCIconSmall                                                OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCIconLarge                                                OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               NPCIconWide                                                 OFFSET(get<T>, {0x60, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.ActiveCampCreatureEntry
/// Size: 0x0098 (0x000000 - 0x000098)
class FActiveCampCreatureEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTag)                              UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              DescriptorTag                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHasAssignedRecruitmentObject                               OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     FriendshipValue                                             OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              FriendshipStateTag                                          OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CreatureIconSmall                                           OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CreatureIconLarge                                           OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CreatureIconFullScreen                                      OFFSET(get<T>, {0x68, 32, 0, 0})
	SMember(FText)                                     AnimalTypeDescription                                       OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.ChaosAudioEventSizeSounds
/// Size: 0x0020 (0x000000 - 0x000020)
class FChaosAudioEventSizeSounds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundBase*)                         Single                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundBase*)                         Small                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundBase*)                         Medium                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundBase*)                         Large                                                       OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoConnectivityDebugVertexData
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoConnectivityDebugVertexData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   DrawColorIndex                                              OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bIsIndependentlySupported                                   OFFSET(get<bool>, {0x1C, 1, 0, 0})
	CMember(TArray<int32_t>)                           AdjacentVerticesIndices                                     OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoConnectivityDebugData
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoConnectivityDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FJunoConnectivityDebugVertexData>)  VertexDataToDraw                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bDebugDrawEnabled                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTableRow_AFKEvent
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoTableRow_AFKEvent : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   EventWeight                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FInstancedStruct>)                  EventFilters                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoIndicatorVisibilityQueryEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoIndicatorVisibilityQueryEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPawn*)                          Pawn                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.NewCraftingObjectMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FNewCraftingObjectMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CraftingObjectPlaced
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_CraftingObjectPlaced : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDestructionMaterialReplacementDataTable
/// Size: 0x0038 (0x000008 - 0x000040)
class FJunoDestructionMaterialReplacementDataTable : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   SearchString                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   BaseMaterialSearchString                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialReplacement                                         OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FString)                                   Annotations                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDestructionFixISMMaterialsDataflowNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
class FJunoDestructionFixISMMaterialsDataflowNode : public FDataflowNode
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UGeometryCollection*)                GCAsset                                                     OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TArray<FGeometryCollectionAutoInstanceMesh>) InstancedMeshes                                           OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(class UDataTable*)                         ISMMaterialDataTable                                        OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoLivingWorldPointProviderEventLimiter
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoLivingWorldPointProviderEventLimiter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bCanLimitBasedOnEvent                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoExampleMacroGenerated_InGameClass_PersistentInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoExampleMacroGenerated_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   PersistentData_InStorage                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoExample_InGameClass_PersistentInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoExample_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   PersistentData_InStorage                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFogOfWarPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoFogOfWarPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoFogOfWarSaveData)                     FogOfWarSaveData                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFogOfWarSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoFogOfWarSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoFogOfWar>)                     TileDatas                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFogOfWar
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoFogOfWar : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ClearedPixelCount                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              ExplorationMask                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoFreeBuildPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FJunoFreeBuildSaveData)                    FreeBuildSaveData                                           OFFSET(getStruct<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSaveData
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoFreeBuildSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bIsFreeBuildSaved                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bWasFreeBuildEverSaved                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildToggleEvent
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoFreeBuildToggleEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bIsFreeBuildEnabled                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsItemSpawnerEnabled                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsPlayerAllowedToFly                                       OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bIsFreeBuildCostFilteringEnabled                            OFFSET(get<bool>, {0x3, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildEverUsedEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoFreeBuildEverUsedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bWasFreeBuildEverEnabled                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSpawnable
/// Size: 0x0000 (0x000008 - 0x000008)
class FJunoFreeBuildSpawnable : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoFreeBuildSpawnableItem
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoFreeBuildSpawnableItem : public FJunoFreeBuildSpawnable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      Item                                                        OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGeometryCollectionAssemblerGCInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoGeometryCollectionAssemblerGCInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/JunoGameNative.JunoGeometryCollectionAssemblerTargetData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoGeometryCollectionAssemblerTargetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     TargetRatio                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForcedStartRatio                                            OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingNewFocus
/// Size: 0x0008 (0x000000 - 0x000008)
class FGuidedBuildingNewFocus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) GuidedBuildingActor                                         OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildBarUpdate
/// Size: 0x0010 (0x000008 - 0x000018)
class FGuidedBuildBarUpdate : public FGuidedBuildingMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             GuidedBuildBarRecipes                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingRegistrationEvent
/// Size: 0x0014 (0x000000 - 0x000014)
class FGuidedBuildingRegistrationEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) GuidedBuild                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsRegistering                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoIndexedSerializedEdgeData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoIndexedSerializedEdgeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  Node1                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Node2                                                       OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoIndexedSerializedIslandData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoIndexedSerializedIslandData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<uint32_t>)                          Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoIndexedSavedConnectivityData
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoIndexedSavedConnectivityData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGraphProperties)                          Properties                                                  OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	CMember(TArray<FGraphVertexHandle>)                Vertices                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FJunoIndexedSerializedEdgeData>)    Edges                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TMap<FGraphIslandHandle, FJunoIndexedSerializedIslandData>) Islands                                    OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TArray<bool>)                              ConnectivityVertexData                                      OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInputMapping
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInputMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputMappingContext*)               Context                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInputAlternateDisplayText
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoInputAlternateDisplayText : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ActionName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInputMappingChangedMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInputMappingChangedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UJunoInputMappingComponentData*)     JunoInputMappingComponentData                               OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bContextPushed                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoriesSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInventoriesSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class AJunoInventory*>)             Inventories                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoInventoryPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPersistenceFrameworkLevelSaveSpawnablePtr>) Inventories                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryUIPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoInventoryUIPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoInventoryUISaveData)                  SavedInventoryUI                                            OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryUISaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoInventoryUISaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FJunoSavedInventoryUIData>)    InventoryUIData                                             OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSavedInventoryUIData
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoSavedInventoryUIData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     InventoryHandleNewGuid                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FJunoItemSlot>)                     AllSlotData                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FJunoSelectedSlotData>)             SelectedItemGroupSlot                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSelectedSlotData
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoSelectedSlotData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              GroupTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RowIndex                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ColumnIndex                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemSlot
/// Size: 0x0044 (0x00000C - 0x000050)
class FJunoItemSlot : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              GroupTag                                                    OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FGameplayTagContainer)                     SlotTags                                                    OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	DMember(int32_t)                                   RowIndex                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   ColumnIndex                                                 OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FGuid)                                     ItemGuid                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UFortItem*)                          Item                                                        OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeBundleTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoKnowledgeBundleTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     CraftingRecipeIdentifier                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgePersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FJunoKnowledgePersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FJunoKnowledgeSaveData)                    KnowledgeSaveData                                           OFFSET(getStruct<T>, {0x0, 232, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeSaveData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FJunoKnowledgeSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FJunoKnowledgeSaveRecord)                  WorldKnowledgeRecord                                        OFFSET(getStruct<T>, {0x0, 232, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeSaveRecord
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FJunoKnowledgeSaveRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGameplayTagContainer)                     CraftingObjectTags                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ClaimedBundleIdentifiers                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TMap<UItemDefinitionBase*, FJunoKnowledgeItemStateEntry>) ItemStates                                   OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TMap<FName, FJunoKnowledgeRecipeStateEntry>) RecipeStates                                              OFFSET(get<T>, {0x90, 80, 0, 0})
	DMember(bool)                                      bMCPRecipesBlocked                                          OFFSET(get<bool>, {0xE0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateEntry
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FJunoKnowledgeRecipeStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(EJunoKnowledgeState)                       KnowledgeState                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TSet<FUniqueNetIdRepl>)                    ViewedPlayerIds                                             OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TSet<FUniqueNetIdRepl>)                    EverAcquiredPlayerIds                                       OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeItemStateEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoKnowledgeItemStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FDateTime)                                 DateFound                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TSet<FUniqueNetIdRepl>)                    ViewedPlayerIds                                             OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTileInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoTileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   TileId                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 WorldLocation                                               OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoExploredTile
/// Size: 0x0024 (0x00000C - 0x000030)
class FJunoExploredTile : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   TileId                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ClearedPixelCount                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<char>)                              PackedTileMask                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.MapExplorationData
/// Size: 0x0018 (0x000108 - 0x000120)
class FMapExplorationData : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FJunoExploredTile>)                 ExploredTiles                                               OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(int32_t)                                   KnownClearedPixelCount                                      OFFSET(get<int32_t>, {0x118, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarkerSettingsRow
/// Size: 0x0058 (0x000008 - 0x000060)
class FJunoMarkerSettingsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Icon                                                        OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CompassIcon                                                 OFFSET(get<T>, {0x28, 32, 0, 0})
	DMember(bool)                                      bAnchorOnEdges                                              OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bShowUnderground                                            OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bShowOnlyForOwner                                           OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(bool)                                      bIsContainer                                                OFFSET(get<bool>, {0x52, 1, 0, 0})
	DMember(bool)                                      bHasLimitedDuration                                         OFFSET(get<bool>, {0x53, 1, 0, 0})
	DMember(int32_t)                                   duration                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(float)                                     CompassMaximumDistance                                      OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     CompassDistanceToFadeInFromMaxDistance                      OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarkerCustomizationOptionsRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoMarkerCustomizationOptionsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<TWeakObjectPtr<UTexture*>>)         Icons                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      Colors                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarkersPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoMarkersPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FJunoMarkersSaveData)                      MarkersSaveData                                             OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMarkersSaveData
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoMarkersSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FJunoMarker>)                       MarkersData                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGuid>)                             MarkersIds                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMassCommonStateFragment
/// Size: 0x0003 (0x000001 - 0x000004)
class FJunoMassCommonStateFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMerchantPricingLevel
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoMerchantPricingLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UDataTable*)                         BarterPricingData                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     TierGroup                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumberOfPackagesForSale                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMerchantWantedItemData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoMerchantWantedItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      WantItemDefinition                                          OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     WantItemWeight                                              OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMerchantSalesData
/// Size: 0x0030 (0x000008 - 0x000038)
class FJunoMerchantSalesData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              MerchantTag                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   InitialPricingLevel                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<FJunoMerchantPricingLevel>)         PricingLevels                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FJunoMerchantWantedItemData>)       WantedItemDatas                                             OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   RefreshTimeInHours                                          OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSynchronizedWeatherState
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoSynchronizedWeatherState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FJunoWeatherPhase)                         CurrentWeatherPhase                                         OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	SMember(FJunoWeatherPhase)                         NextWeatherPhase                                            OFFSET(getStruct<T>, {0x40, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoModeratorModeToggleEvent
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoModeratorModeToggleEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bIsModeratorModeEnabled                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsPlayerAllowedToFly                                       OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMoodReactionConfigTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoMoodReactionConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              SoundLibraryTag                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayCueTag)                           GameplayCueTag                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.CraftingProcess
/// Size: 0x0068 (0x000000 - 0x000068)
class FCraftingProcess : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FCraftingMultiKey)                         CraftingKey                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FJunoItemSlot)                             ProcessingSlot                                              OFFSET(getStruct<T>, {0x10, 80, 0, 0})
	SMember(FDateTime)                                 ServerStartTime                                             OFFSET(getStruct<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPassiveCraftingContributorAnalytics
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoPassiveCraftingContributorAnalytics : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   AccountId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SessionId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(double)                                    SessionTime                                                 OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPassiveCraftingItemAndCount
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoPassiveCraftingItemAndCount : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UItemDefinitionBase*)                Item                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_ToggleFreeCrafting
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_ToggleFreeCrafting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsFreeCrafting                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.PassiveResourcesGathererRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FPassiveResourcesGathererRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              RequiredRole                                                OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     MinutesToGenerate                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxLootCalls                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FPassiveResourcesGatheringRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     LootTierGroup                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringSimulationConfigurationRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FPassiveResourcesGatheringSimulationConfigurationRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     OverridenMultiplierForSimulatedGeneration                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.PassiveResourcesGatheringRowRuntime
/// Size: 0x0058 (0x000000 - 0x000058)
class FPassiveResourcesGatheringRowRuntime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FWorldConditionQueryState)                 SelectionPreconditionsQueryState                            OFFSET(getStruct<T>, {0x28, 48, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetSourceControlInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoPersistenceAssetSourceControlInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   CurrentRevisionCheckInIdentifier                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CurrentRevisionAction                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   CurrentRevisionUser                                         OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetInfo
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoPersistenceAssetInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   PackageName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FTopLevelAssetPath)                        AssetClassPath                                              OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   FilePath                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bIsInCook                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FJsonObjectWrapper)                        CustomDump                                                  OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FJunoPersistenceAssetSourceControlInfo)    SourceControlInfo                                           OFFSET(getStruct<T>, {0x50, 48, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetBackwardCompatibilityIssue
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoPersistenceAssetBackwardCompatibilityIssue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   PackageName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FTopLevelAssetPath)                        AssetClassPath                                              OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(EJunoPersistenceAssetBackwardCompatibilityIssueType) IssueType                                         OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FJsonObjectWrapper)                        IssueData                                                   OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FString)                                   AssetSourceControlInfoVersion                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FJunoPersistenceAssetSourceControlInfo)    AssetSourceControlInfo                                      OFFSET(getStruct<T>, {0x50, 48, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetsBackwardCompatibilityReport
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoPersistenceAssetsBackwardCompatibilityReport : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   CurrentVersion                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PreviousVersion                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FDateTime)                                 ReportDate                                                  OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FJunoPersistenceAssetsReportSettings)      Settings                                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	CMember(TArray<FJunoPersistenceAssetBackwardCompatibilityIssue>) Issues                                        OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetsReportSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoPersistenceAssetsReportSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   PreviousVersionPersistenceAssetsReportPath                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CurrentVersionPersistenceAssetsReportPath                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bInCookOnly                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bGenerateSourceControlInfo                                  OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bGenerateAssetCustomDump                                    OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistenceAssetsReport
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPersistenceAssetsReport : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   BuildVersion                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 ReportDate                                                  OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FJunoPersistenceAssetsReportSettings)      Settings                                                    OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	CMember(TArray<FJunoPersistenceAssetInfo>)         PersistenceAssetInfos                                       OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPickupManagementSettingsRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoPickupManagementSettingsRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   PickupsAllowedMax                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PickupsDesiredSlack                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     PickupDespawnDelaySeconds                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bDebugPickupManagement                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bEnablePickupManagement                                     OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(EFortRarity)                               NotJunkPickupThreshold                                      OFFSET(get<T>, {0x16, 1, 0, 0})
	CMember(EFortRarity)                               ImportantPickupThreshold                                    OFFSET(get<T>, {0x17, 1, 0, 0})
	DMember(bool)                                      bFlagPlayerDropsAsImportant                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMCPBuildingPlaced
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoMCPBuildingPlaced : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   WorldId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint64_t)                                  Timestamp                                                   OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayerAccountSaveData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoPlayerAccountSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FJunoMCPBuildingPlaced>)            GuestWorldsWithMCPBuildings                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bHasSeenBuildingScreenItemShopCallout                       OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSlotData
/// Size: 0x0034 (0x00000C - 0x000040)
class FJunoBuildingSlotData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     AssociatedRecipe                                            OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ResultingQuantity                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(class UItemDefinitionBase*)                ResultingItemDefintion                                      OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bCanCraft                                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bIsPinned                                                   OFFSET(get<bool>, {0x21, 1, 0, 0})
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSlotDataArray
/// Size: 0x0030 (0x000108 - 0x000138)
class FJunoBuildingSlotDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TArray<FJunoBuildingSlotData>)             Entries                                                     OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(int32_t)                                   LastSelectedIndex                                           OFFSET(get<int32_t>, {0x134, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingSlotPinned
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_BuildingSlotPinned : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   UpdatedSlot                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsPinned                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingSlotUpdate
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_BuildingSlotUpdate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UJunoPlayerBuildingComponent*)       BuildingComp                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   UpdatedSlot                                                 OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_SelectedSlotIndexUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoEvent_SelectedSlotIndexUpdate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UJunoPlayerBuildingComponent*)       BuildingComp                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   NewSelectedSlot                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIsInBuildMode                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FName)                                     CurrentRecipe                                               OFFSET(getStruct<T>, {0x14, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_BuildingModeChanged
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoEvent_BuildingModeChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UJunoPlayerBuildingComponent*)       BuildingComp                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   SelectedSlot                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FName)                                     CurrentRecipe                                               OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsInBuildMode                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_EnableBuildModeWithRecipe
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoEvent_EnableBuildModeWithRecipe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bFromRecents                                                OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoLastLoadedRecipeData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoLastLoadedRecipeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSlotIndex
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoSlotIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EJunoBuildModeType)                        BuildModeType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSelectedSlot
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoSelectedSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FJunoSlotIndex)                            Slot                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ForcedRecipe                                                OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSessionEntry
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoBuildingSessionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TWeakObjectPtr<AActor*>)                   SpawnedActor                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   SpawnLocation                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FDateTime)                                 SpawnTime                                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UItemDefinitionBase*>)      ItemDef                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     Recipe                                                      OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	CMember(TWeakObjectPtr<AJunoCampActor*>)           CampAtLocation                                              OFFSET(get<T>, {0x3C, 8, 0, 0})
	SMember(FGuid)                                     GuidedBuildID                                               OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	SMember(FGuid)                                     CampID                                                      OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	SMember(FGuid)                                     ActorId                                                     OFFSET(getStruct<T>, {0x64, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSessionInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoBuildingSessionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FJunoBuildingSessionEntry>)         Entries                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     SessionId                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingMetricsClientPermissions
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBuildingMetricsClientPermissions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FInt32Vector)                              Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   NetRelevantActorCount                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   UniqueActorCount                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int8_t)                                    BuildBudgetUsagePercent                                     OFFSET(get<int8_t>, {0x14, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMCPItemPlacementStatus
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoMCPItemPlacementStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   NumOfMCPItemWorlds                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bHasPlacedMCPItemInThisWorld                                OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMCPItemPlacementStatusAlertData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoMCPItemPlacementStatusAlertData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UFortUINotification*)                Notification                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceAccountantFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayspaceAccountantFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoPlayspaceAccountantSaveData)          PlayspaceAccountantSaveData                                 OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceAccountantSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayspaceAccountantSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, int32_t>)                      PersistentValueTable                                        OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayspaceIndexPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoPlayspaceIndexSaveData)               PlayspaceIndexSaveData                                      OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPlayspaceIndexSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FJunoPlayspaceIndexNode>)      PlayspaceNodes                                              OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPlayspaceIndexNode
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoPlayspaceIndexNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     ParentID                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FGuid>)                             ChildrenIds                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRollbackBadCheckpointRange
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoRollbackBadCheckpointRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   StartCL                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EndCL                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   StartTimestamp                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   EndTimestamp                                                OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSyncWeatherCache
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoSyncWeatherCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleAmmoInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoHUDVehicleAmmoInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   AmmoCount                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UFortItemDefinition*)                AmmoItemDefinition                                          OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleEnterEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoHUDVehicleEnterEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FJunoHUDVehicleAmmoInfo)                   AmmoInfo                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     CurrentCooldownPercent                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CurrentCooldownDuration                                     OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleExitEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoHUDVehicleExitEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleFireEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoHUDVehicleFireEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FJunoHUDVehicleAmmoInfo)                   AmmoInfo                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDVehicleCooldownUpdateEvent
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoHUDVehicleCooldownUpdateEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Percent                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDGliderCanDeployEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoHUDGliderCanDeployEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bCanDeploy                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoHUDMenuVillageInteractEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoHUDMenuVillageInteractEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AJunoCampActor*)                     CampActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UJunoCampMembershipActorComponent*)  CampActorMembershipActorComponent                           OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoUserGeneratedTextPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoUserGeneratedTextPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoUserGeneratedTextSaveData)            UserGeneratedTextSaveData                                   OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoUserGeneratedTextSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoUserGeneratedTextSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FJunoUserGeneratedTextEntry>)  TextEntries                                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoUserGeneratedTextEntry
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoUserGeneratedTextEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FUniqueNetIdRepl)                          LastUpdatePlayerId                                          OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_AwesomeLevelIncreased
/// Size: 0x0048 (0x000078 - 0x0000C0)
class FJunoVerbMessage_AwesomeLevelIncreased : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSubjectTagsPair)                          SourceActor                                                 OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	DMember(int32_t)                                   NewAwesomeLevel                                             OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   PrevAwesomeLevel                                            OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   RemainingAwesomePoints                                      OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_GuidedBuildCompleted
/// Size: 0x0048 (0x000078 - 0x0000C0)
class FJunoVerbMessage_GuidedBuildCompleted : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSubjectTagsPair)                          GuidedBuilding                                              OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	CMember(TArray<FSubjectTagsPair>)                  BuildContributors                                           OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_GuidedBuildStageCompleted
/// Size: 0x0040 (0x000078 - 0x0000B8)
class FJunoVerbMessage_GuidedBuildStageCompleted : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSubjectTagsPair)                          GuidedBuilding                                              OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	SMember(FJunoStageKey)                             StageKey                                                    OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_RecruitNPC
/// Size: 0x0070 (0x000078 - 0x0000E8)
class FJunoVerbMessage_RecruitNPC : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FSubjectTagsPair)                          UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	SMember(FSubjectTagsPair)                          AIRole                                                      OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbMessage_TemperatureUpdated
/// Size: 0x0070 (0x000078 - 0x0000E8)
class FJunoVerbMessage_TemperatureUpdated : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FSubjectTagsPair)                          PreviousTemperature                                         OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	SMember(FSubjectTagsPair)                          NewTemperature                                              OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWeatherPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoWeatherSaveData)                      WeatherSaveData                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWeatherSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSavedWeather>)                     SavedWeathers                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.SavedWeather
/// Size: 0x0090 (0x000000 - 0x000090)
class FSavedWeather : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	DMember(int64_t)                                   EndUnixTime                                                 OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	SMember(FJunoWeatherPhase)                         CurrentPhase                                                OFFSET(getStruct<T>, {0x10, 56, 0, 0})
	SMember(FJunoWeatherPhase)                         NextPhase                                                   OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	CMember(TArray<FJunoWeatherPhase>)                 NextPhaseQueue                                              OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherPhaseForecast
/// Size: 0x0064 (0x000000 - 0x000064)
class FJunoWeatherPhaseForecast : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FGameplayTag)                              WeatherTypeName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFloatRange)                               WeatherTypeWeight                                           OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FFloatRange)                               duration                                                    OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	DMember(float)                                     TransitionIn                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     TransitionOut                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FFloatRange)                               WindSpeedRange                                              OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	DMember(bool)                                      UseRandomWindDirection                                      OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(float)                                     WindDirectionDegree                                         OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FGameplayTag)                              MorningTemperature                                          OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	SMember(FGameplayTag)                              DayTemperature                                              OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	SMember(FGameplayTag)                              EveningTemperature                                          OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	SMember(FGameplayTag)                              NightTemperature                                            OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	SMember(FFloatRange)                               WeatherIntensityRange                                       OFFSET(getStruct<T>, {0x54, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherLocalizedForecasts
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoWeatherLocalizedForecasts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FJunoWeatherLocation)                      Location                                                    OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	CMember(TArray<FJunoWeatherPhaseForecast>)         WeatherTypes                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWeatherSeasonRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoWeatherSeasonRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              Season                                                      OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(TArray<FJunoWeatherLocalizedForecasts>)    LocalizedForecasts                                          OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionAICampChecks
/// Size: 0x0108 (0x000010 - 0x000118)
class FJunoWorldConditionAICampChecks : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FWorldConditionContextDataRef)             EventDataRef                                                OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FWorldConditionContextDataRef)             AIRef                                                       OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(EJunoWorldConditionAICampChecksIsAssigned) MustBeAssignedToACamp                                       OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EJunoWorldConditionAICampChecksIsAssigned) MustBeAssignedToPlayer                                      OFFSET(get<T>, {0x21, 1, 0, 0})
	SMember(FWorldConditionContextDataRef)             PlayerControllerRef                                         OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FGameplayTagQuery)                         RoleMustMatchQuery                                          OFFSET(getStruct<T>, {0x30, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SoftRemovedReasonsMustMatchQuery                            OFFSET(getStruct<T>, {0x78, 72, 0, 0})
	CMember(EJunoWorldConditionMustHaveLastUsedGatheringActor) MustHaveLastUsedGatheringActor                      OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FGameplayTagQuery)                         CampTagQuery                                                OFFSET(getStruct<T>, {0xC8, 72, 0, 0})
	DMember(bool)                                      bRequireEmptyCampTag                                        OFFSET(get<bool>, {0x110, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionBed
/// Size: 0x0018 (0x000010 - 0x000028)
class FJunoWorldConditionBed : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FWorldConditionContextDataRef)             BedActorRef                                                 OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FWorldConditionContextDataRef)             UserActorRef                                                OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	CMember(EJunoWorldConditionAssignmentState)        AssignmentState                                             OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionIsInCave
/// Size: 0x0008 (0x000010 - 0x000018)
class FJunoWorldConditionIsInCave : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionIsSpatiallyInCamp
/// Size: 0x0008 (0x000010 - 0x000018)
class FJunoWorldConditionIsSpatiallyInCamp : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionLocalCampChecks
/// Size: 0x0060 (0x000010 - 0x000070)
class FJunoWorldConditionLocalCampChecks : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagQuery)                         CampTagQuery                                                OFFSET(getStruct<T>, {0x18, 72, 0, 0})
	DMember(bool)                                      bRequireEmptyCampTag                                        OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bMustHaveFreeRecruitmentObject                              OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(float)                                     MinimumRemainingSoftRemovalTimeInJunoHours                  OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   RequiresAssignedRecruitmentObjectForAnyPawnType             OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionPawnType
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldConditionPawnType : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             PawnRef                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(char)                                      AnyPawnType                                                 OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionPlayerCampChecks
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldConditionPlayerCampChecks : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             PlayerControllerRef                                         OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(EJunoWorldConditionHasFollower)            PlayerHasFollowersCheck                                     OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionPlayerKnowledgeChecks
/// Size: 0x0018 (0x000010 - 0x000028)
class FJunoWorldConditionPlayerKnowledgeChecks : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FWorldConditionContextDataRef)             PlayerControllerRef                                         OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(TArray<FInstancedStruct>)                  RecipeUnlockTypes                                           OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionQuantityInAIResourcesInventory
/// Size: 0x0010 (0x000010 - 0x000020)
class FJunoWorldConditionQuantityInAIResourcesInventory : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             AIRef                                                       OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   RequiredResourcesCount                                      OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionSandboxChecks
/// Size: 0x0000 (0x000010 - 0x000010)
class FJunoWorldConditionSandboxChecks : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/JunoGameNative.JunoWorldPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoWorldPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoWorldSaveData)                        WorldSaveData                                               OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoWorldSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(uint32_t)                                  WorldPersistenceVersion                                     OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	SMember(FDateTime)                                 CreationTime                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FJunoWorldRandomSeed)                      RandomSeed                                                  OFFSET(getStruct<T>, {0x10, 20, 0, 0})
	SMember(FVector)                                   InitialPlayerStartLocation                                  OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FString)                                   LatestSessionId                                             OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldRandomSeed
/// Size: 0x0014 (0x000000 - 0x000014)
class FJunoWorldRandomSeed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   RootSeed                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FGuid)                                     Version                                                     OFFSET(getStruct<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingRepState
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldSettingRepState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              SettingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsSettingOn                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bIsSettingTainted                                           OFFSET(get<bool>, {0x5, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingMapping
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldSettingMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              TagName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SavedName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingsPersistenceFeatureData_InGameClass_PersistentInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWorldSettingsPersistenceFeatureData_InGameClass_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FJunoWorldSettingsSaveData)                WorldSettingsSaveData                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingsSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoWorldSettingsSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             TaintedSettings                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingBoolToggleEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldSettingBoolToggleEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              SettingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsSettingOn                                                OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldSettingTaintedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoWorldSettingTaintedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              SettingName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bIsSettingTainted                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemDiscoveredMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoItemDiscoveredMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UItemDefinitionBase*)                NewItemDefinition                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AFortPlayerState*)                   InstigatorPlayerState                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemViewStateChanged
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoItemViewStateChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AFortPlayerState*)                   PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UItemDefinitionBase*)                ItemDefinition                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsViewed                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeViewStateChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoRecipeViewStateChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerState*)                   PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsViewed                                                   OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeMessageData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoRecipeMessageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     RowName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AFortPlayerState*)                   DiscoveredByPlayerState                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeRevealedMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoRecipeRevealedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoRecipeMessageData>)            FoundRecipes                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeVisibleMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoRecipeVisibleMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FJunoRecipeMessageData>)            VisibleRecipes                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_RequestMapMarkerCustomization
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_RequestMapMarkerCustomization : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoMapMarkerCustomizationInitData*) InitData                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.PhysicsObjectImpactData_JunoStrainCalculation
/// Size: 0x0000 (0x000058 - 0x000058)
class FPhysicsObjectImpactData_JunoStrainCalculation : public FFortPhysicsObjectImpactDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_OpenPlayerManagement
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OpenPlayerManagement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.CampRemovalEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FCampRemovalEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<AJunoCampActor*>)           CampActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.ReplicatedCampData
/// Size: 0x0058 (0x000000 - 0x000058)
class FReplicatedCampData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     CampActorID                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPrimaryAssetId)                           CampCenterAssetID                                           OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FBox)                                      CampBounds                                                  OFFSET(getStruct<T>, {0x18, 56, 0, 0})
	DMember(bool)                                      bIsSoftRemoved                                              OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.POIEncounterDataForCamps
/// Size: 0x0040 (0x000000 - 0x000040)
class FPOIEncounterDataForCamps : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x8, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampManagementPerk
/// Size: 0x0050 (0x000008 - 0x000058)
class FJunoCampManagementPerk : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	CMember(TArray<class UClass*>)                     GEsToApply                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampManagementPlayerPerk
/// Size: 0x0018 (0x000058 - 0x000070)
class FJunoCampManagementPlayerPerk : public FJunoCampManagementPerk
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampManagementNPCPerk
/// Size: 0x0000 (0x000058 - 0x000058)
class FJunoCampManagementNPCPerk : public FJunoCampManagementPerk
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/JunoGameNative.JunoCampManagementNPCPerkPerBiome
/// Size: 0x0000 (0x000058 - 0x000058)
class FJunoCampManagementNPCPerkPerBiome : public FJunoCampManagementPerk
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/JunoGameNative.JunoCampManagementPerksBaseConfiguration
/// Size: 0x0010 (0x000008 - 0x000018)
class FJunoCampManagementPerksBaseConfiguration : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   AwesomenessLevel                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              OptionalCampTag                                             OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(class UDataTable*)                         PerksTable                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCampManagementPlayerPerksBaseConfiguration
/// Size: 0x0000 (0x000018 - 0x000018)
class FJunoCampManagementPlayerPerksBaseConfiguration : public FJunoCampManagementPerksBaseConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoGameNative.JunoCampManagementNPCPerksBaseConfiguration
/// Size: 0x0000 (0x000018 - 0x000018)
class FJunoCampManagementNPCPerksBaseConfiguration : public FJunoCampManagementPerksBaseConfiguration
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/JunoGameNative.PlayerPerksPerAwesomenessLevelDigested
/// Size: 0x0050 (0x000000 - 0x000050)
class FPlayerPerksPerAwesomenessLevelDigested : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/JunoGameNative.PlayerPerksDigested
/// Size: 0x0050 (0x000000 - 0x000050)
class FPlayerPerksDigested : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGameplayTag, FPlayerPerksPerAwesomenessLevelDigested>) PerksPerCampTag                           OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.NPCPerksPerAwesomenessLevelDigested
/// Size: 0x0050 (0x000000 - 0x000050)
class FNPCPerksPerAwesomenessLevelDigested : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/JunoGameNative.NPCPerksDigested
/// Size: 0x0050 (0x000000 - 0x000050)
class FNPCPerksDigested : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGameplayTag, FNPCPerksPerAwesomenessLevelDigested>) PerksPerCampTag                              OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoStudGunSelected
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoStudGunSelected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoStudGunAttachModeEntered
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoStudGunAttachModeEntered : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoStudGunAttachModeExited
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoStudGunAttachModeExited : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoStudGunUnselected
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoStudGunUnselected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoAwesomeThresholdMapping
/// Size: 0x0090 (0x000000 - 0x000090)
class FJunoAwesomeThresholdMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UJunoActionConfig*>)          ThresholdActionConfigs                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FScalableFloat)                            AwesomeLevelThreshold                                       OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FScalableFloat)                            AwesomeLevelRangeMinThreshold                               OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	SMember(FScalableFloat)                            AwesomeLevelRangeMaxThreshold                               OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	CMember(EJunoAwesomeThresholdTestMode)             ThresholdTestMode                                           OFFSET(get<T>, {0x88, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAwesomePlacementConfigTableRow
/// Size: 0x0030 (0x000008 - 0x000038)
class FJunoAwesomePlacementConfigTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EJunoAwesomePlacementConfigType)           PlacementConfigType                                         OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>) ItemDefinition                                  OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FName)                                     CraftingRowName                                             OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   AwesomePointsToContribute                                   OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoRecipeUnlockType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_BuildInstructions
/// Size: 0x0010 (0x000008 - 0x000018)
class FJunoRecipeUnlockType_BuildInstructions : public FJunoRecipeUnlockType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TWeakObjectPtr<UJunoBuildInstructionsItemDefinition*>>) BuildInstructions                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_CraftingRowNames
/// Size: 0x0010 (0x000008 - 0x000018)
class FJunoRecipeUnlockType_CraftingRowNames : public FJunoRecipeUnlockType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FName>)                             CraftingRowNames                                            OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRecipeUnlockType_KnowledgeBundle
/// Size: 0x0008 (0x000008 - 0x000010)
class FJunoRecipeUnlockType_KnowledgeBundle : public FJunoRecipeUnlockType
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UJunoKnowledgeBundle*)               KnowledgeBundle                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEventReaction_RecipeKnowledgeState
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoEventReaction_RecipeKnowledgeState : public FEventReactionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FInstancedStruct>)                  RecipeUnlockTypes                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(EJunoKnowledgeState)                       NewState                                                    OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.PlayerAwesomeUpgradeResourceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPlayerAwesomeUpgradeResourceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class UFortItem*>)                  ResourceInstances                                           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.AwesomePerkReward
/// Size: 0x0040 (0x000000 - 0x000040)
class FAwesomePerkReward : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.AwesomeLevelRewardEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FAwesomeLevelRewardEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   MaxVillagerCapacity                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxNPCOnlyCapacity                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxCreatureOnlyCapacity                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxSharedAICapacity                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(TArray<FAwesomePerkReward>)                PlayerPerkRewards                                           OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FAwesomePerkReward>)                NPCPerkRewards                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_AwesomeLevelIncreased
/// Size: 0x0090 (0x0000A0 - 0x000130)
class FJunoVerbFilter_AwesomeLevelIncreased : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FObjectiveSubjectTags_Progressible)        SourceActor                                                 OFFSET(getStruct<T>, {0xA0, 80, 0, 0})
	DMember(bool)                                      bUseNewLevelRequirement                                     OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FInt32Range)                               RequiredNewLevel                                            OFFSET(getStruct<T>, {0xF4, 16, 0, 0})
	DMember(bool)                                      bUsePrevLevelRequirement                                    OFFSET(get<bool>, {0x104, 1, 0, 0})
	SMember(FInt32Range)                               RequiredPrevLevel                                           OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bUseRemainingPointsLevelRequirement                         OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FInt32Range)                               RequiredRemainingPoints                                     OFFSET(getStruct<T>, {0x11C, 16, 0, 0})
	CMember(EJunoAwesomeLevelIncrementType)            IncrementBy                                                 OFFSET(get<T>, {0x12C, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_GuidedBuildCompleted
/// Size: 0x0098 (0x0000A0 - 0x000138)
class FJunoVerbFilter_GuidedBuildCompleted : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FObjectiveSubjectTags)                     GuidedBuilding                                              OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FObjectiveSubjectTags_Progressible)        BuildContributors                                           OFFSET(getStruct<T>, {0xE8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_GuidedBuildStageCompleted
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class FJunoVerbFilter_GuidedBuildStageCompleted : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FObjectiveSubjectTags)                     GuidedBuilding                                              OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FJunoStageKey)                             StageKey                                                    OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_RecruitNPC
/// Size: 0x0090 (0x0000A0 - 0x000130)
class FJunoVerbFilter_RecruitNPC : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FObjectiveSubjectTags)                     UniqueAIIdentifier                                          OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FObjectiveSubjectTags)                     AIRole                                                      OFFSET(getStruct<T>, {0xE8, 72, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoVerbFilter_TemperatureUpdated
/// Size: 0x0090 (0x0000A0 - 0x000130)
class FJunoVerbFilter_TemperatureUpdated : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FObjectiveSubjectTags)                     PreviousTemperature                                         OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FObjectiveSubjectTags)                     NewTemperature                                              OFFSET(getStruct<T>, {0xE8, 72, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMinifigLayeringParameters
/// Size: 0x0014 (0x000000 - 0x000014)
class FJunoMinifigLayeringParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Prop1                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Prop2                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AddLocomotion                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AddSecondary                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MeshSpace                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoMinifigLayeringMask
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoMinifigLayeringMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FJunoMinifigLayeringParameters)            Head                                                        OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            Torso                                                       OFFSET(getStruct<T>, {0x14, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            ArmL                                                        OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            ArmR                                                        OFFSET(getStruct<T>, {0x3C, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            HandL                                                       OFFSET(getStruct<T>, {0x50, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            HandR                                                       OFFSET(getStruct<T>, {0x64, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            pelvis                                                      OFFSET(getStruct<T>, {0x78, 20, 0, 0})
	SMember(FJunoMinifigLayeringParameters)            Legs                                                        OFFSET(getStruct<T>, {0x8C, 20, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBedAssignmentCharacterInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FJunoBedAssignmentCharacterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              AICharacterGameplayTag                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     AICharacterDisplayName                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               AICharacterIcon                                             OFFSET(get<T>, {0x18, 32, 0, 0})
	DMember(bool)                                      bHasBed                                                     OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoReplicatedCharacterData
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoReplicatedCharacterData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   ForceRepNumber                                              OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EJunoBedAssignmentProcessingState)         ProcessingState                                             OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TArray<FJunoBedAssignmentCharacterInfo>)   AssignedCharacterInfo                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  PlayerNetIds                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoActionChannelInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoActionChannelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              Action                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              Channel                                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingResourceData
/// Size: 0x0018 (0x000008 - 0x000020)
class FJunoBuildingResourceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       ResourceItemHandle                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EJunoResourceScale)                        ResourceScale                                               OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingHitData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingHitData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ABuildingActor*)                     BuildingActor                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTimerHandle)                              HealthRegenHandle                                           OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoResourceData
/// Size: 0x0070 (0x000008 - 0x000078)
class FJunoResourceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) ItemDefinition                                              OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TMap<EJunoResourceScale, int32_t>)         Amount                                                      OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_RootPlayspaceReady
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_RootPlayspaceReady : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AJunoRootPlayspace*)                 Playspace                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_WorldLoadedOrCreated
/// Size: 0x0038 (0x000000 - 0x000038)
class FJunoEvent_WorldLoadedOrCreated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FJunoWorldMetadata)                        WorldMetadata                                               OFFSET(getStruct<T>, {0x0, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoReplicatedWorldMetadata
/// Size: 0x0090 (0x000000 - 0x000090)
class FJunoReplicatedWorldMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FJunoWorldMetadata)                        MetaData                                                    OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FString)                                   OwnerId                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   OwnerName                                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<FString>)                           Keyholders                                                  OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FString>)                           Occupants                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(double)                                    WorldOwnerGuestReservationExpiration                        OFFSET(get<double>, {0x78, 8, 0, 0})
	SMember(FDateTime)                                 CreatedAt                                                   OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	SMember(FDateTime)                                 LastPlayed                                                  OFFSET(getStruct<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.PCGJunoPossibleWorld
/// Size: 0x0038 (0x000008 - 0x000040)
class FPCGJunoPossibleWorld : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   PersistentLevel                                             OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWorld*>>)           OverlayLevels                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bCanBeRandomlySelected                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bIsDeprecated                                               OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryGroupConfig
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoInventoryGroupConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTag)                              GroupType                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  NumItemRows                                                 OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  NumItemColumns                                              OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	CMember(TMap<int32_t, FGameplayTagContainer>)      SlotTagMap                                                  OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoInventoryConfig
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoInventoryConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FJunoInventoryGroupConfig>)         InventoryGroupConfigs                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsPersistent                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemChangedMessage
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoItemChangedMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class UJunoInventoryComponent*)            OwningInventoryComponent                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FJunoItemSlot)                             ChangedSlot                                                 OFFSET(getStruct<T>, {0x8, 80, 0, 0})
	CMember(EJunoItemChangeType)                       ItemChangeType                                              OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemTransferRequest
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FJunoItemTransferRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FJunoItemSlot)                             SourceItemSlot                                              OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	SMember(FJunoItemSlot)                             DestinationItemSlot                                         OFFSET(getStruct<T>, {0x50, 80, 0, 0})
	CMember(class UJunoInventoryComponent*)            SourceInventoryComponent                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UJunoInventoryComponent*)            DestinationInventoryComponent                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bTopOffExistingStacks                                       OFFSET(get<bool>, {0xB4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoTakeItemRequest
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoTakeItemRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FJunoItemSlot)                             SourceItemSlot                                              OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	CMember(class UJunoInventoryComponent*)            SourceInventoryComponent                                    OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class UJunoInventoryComponent*)            DestinationInventoryComponent                               OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      PreferredDestinationGroupOrder                              OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemSlotGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoItemSlotGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              GroupType                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FJunoItemSlot>)                     SlotList                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoReplicatedItemSlotList
/// Size: 0x0020 (0x000108 - 0x000128)
class FJunoReplicatedItemSlotList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FJunoItemSlot>)                     ItemSlots                                                   OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoItemSlotPrediction
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoItemSlotPrediction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/JunoGameNative.ServerSpawnedActorPair
/// Size: 0x000C (0x000000 - 0x00000C)
class FServerSpawnedActorPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     StableName                                                  OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSupportActorComponentPair
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuilderToolSupportActorComponentPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSupportCandidate
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuilderToolSupportCandidate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSelectedActor
/// Size: 0x0070 (0x000000 - 0x000070)
class FJunoBuilderToolSelectedActor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                ToSelection                                                 OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolInteractionActorClassSet
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoBuilderToolInteractionActorClassSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TSet<TWeakObjectPtr<UClass*>>)             Classes                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<TWeakObjectPtr<UClass*>>)             ExcludedSubclasses                                          OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolInteractionRow
/// Size: 0x00A0 (0x000008 - 0x0000A8)
class FJunoBuilderToolInteractionRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FJunoBuilderToolInteractionActorClassSet)  SupportedClasses                                            OFFSET(getStruct<T>, {0x8, 160, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolSelectionSpawnParams
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoBuilderToolSelectionSpawnParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FJunoBuilderToolSelectedActor>)     SelectedActors                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FTransform)                                SelectionTransform                                          OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AttachmentActor                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<FJunoBuilderToolSupportCandidate>)  SupportCandidates                                           OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(class APawn*)                              Instigator                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	CMember(TArray<FName>)                             StableNames                                                 OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	SMember(FBox)                                      WorldSpaceBoundingBox                                       OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuilderToolTimedActors
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBuilderToolTimedActors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TWeakObjectPtr<AActor*>>)           Actors                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntry
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoBuildingSnapEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     Label                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FTransform)                                ToActor                                                     OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FVector)                                   PreviewOffset                                               OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FGameplayTagContainer)                     ConnectableTags                                             OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	SMember(FBox)                                      TargetingArea                                               OFFSET(getStruct<T>, {0xC8, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryContext
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoBuildingSnapEntryContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EJunoBuildingSnapEntryState)               State                                                       OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FTransform)                                ToWorld                                                     OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapContext
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoBuildingSnapContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FJunoBuildingSnapEntryContext>)     TargetEntries                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FQuat)                                     RotationOffset                                              OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingConnectivityContext
/// Size: 0x02A0 (0x000000 - 0x0002A0)
class FJunoBuildingConnectivityContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FJunoBuildingConnectionPointsResult)       PreviewConnectionPoints                                     OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	SMember(FVector)                                   TargetTraceToActorLocation                                  OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FJunoBuildingConnectionPointsResult)       TargetConnectionPoints                                      OFFSET(getStruct<T>, {0x80, 80, 0, 0})
	SMember(FJunoBuildingConnection)                   Connection                                                  OFFSET(getStruct<T>, {0xD0, 464, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingFloatingParams
/// Size: 0x0160 (0x000000 - 0x000160)
class FJunoBuildingFloatingParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/JunoGameNative.OnPlacementAction
/// Size: 0x000C (0x000000 - 0x00000C)
class FOnPlacementAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EOnPlacementAction)                        Action                                                      OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPlacementResult
/// Size: 0x0290 (0x000000 - 0x000290)
class FJunoBuildingPlacementResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FTransform)                                CameraViewPoint                                             OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FHitResult)                                TargetTraceResult                                           OFFSET(getStruct<T>, {0x60, 240, 0, 0})
	CMember(EJunoBuildingPlacementType)                PlacementType                                               OFFSET(get<T>, {0x150, 1, 0, 0})
	SMember(FTransform)                                UnsnappedTargetTransform                                    OFFSET(getStruct<T>, {0x160, 96, 0, 0})
	SMember(FTransform)                                TargetTransform                                             OFFSET(getStruct<T>, {0x1C0, 96, 0, 0})
	SMember(FTransform)                                CoordinateBasis                                             OFFSET(getStruct<T>, {0x220, 96, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AttachmentActor                                             OFFSET(get<T>, {0x280, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorGridLimits
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoBuildingBehaviorGridLimits : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FIntPoint)                                 Min                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FIntPoint)                                 Max                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorInteractionRow
/// Size: 0x0140 (0x0000A8 - 0x0001E8)
class FJunoBuildingBehaviorInteractionRow : public FJunoBuilderToolInteractionRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FJunoBuilderToolInteractionActorClassSet)  OverlappableClasses                                         OFFSET(getStruct<T>, {0xA8, 160, 0, 0})
	SMember(FJunoBuilderToolInteractionActorClassSet)  PlacementSupportingClasses                                  OFFSET(getStruct<T>, {0x148, 160, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingBehaviorOverrides
/// Size: 0x0260 (0x000000 - 0x000260)
class FJunoBuildingBehaviorOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FJunoBuildingBehaviorInteractionRow)       ConfigData                                                  OFFSET(getStruct<T>, {0x0, 488, 0, 0})
	SMember(FVector)                                   GridSize                                                    OFFSET(getStruct<T>, {0x1E8, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x200, 24, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(getStruct<T>, {0x218, 24, 0, 0})
	SMember(FVector)                                   GridSnapOffset                                              OFFSET(getStruct<T>, {0x230, 24, 0, 0})
	SMember(FJunoBuildingBehaviorGridLimits)           GridOffsetLimits                                            OFFSET(getStruct<T>, {0x248, 16, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(bool)                                      bMinDistanceIncludesBounds                                  OFFSET(get<bool>, {0x25C, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryBase
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoBuildingSnapEntryBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     RequiredTags                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingComponentData
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoGuidedBuildingComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingEditorActorEntry
/// Size: 0x0090 (0x000000 - 0x000090)
class FJunoBuildingEditorActorEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     ActorName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(TArray<FJunoGuidedBuildingComponentData>)  CompData                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStageData
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoGuidedBuildingStageData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FText)                                     StageDisplayName                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ActorIndexes                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           AutoCompleteIndexes                                         OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(int32_t)                                   NumCompleted                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bStageEverCompleted                                         OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FGameplayTagContainer)                     StageTags                                                   OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStageEditorData
/// Size: 0x0028 (0x000058 - 0x000080)
class FJunoGuidedBuildingStageEditorData : public FJunoGuidedBuildingStageData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              StageTag                                                    OFFSET(getStruct<T>, {0x58, 4, 0, 0})
	CMember(TArray<FName>)                             ActorNames                                                  OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FName>)                             AutoCompleteActorNames                                      OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSectionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FJunoGuidedBuildingSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     SectionDisplayName                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   NumCompleted                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInSection                                 OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bSectionEverCompleted                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(TArray<FJunoGuidedBuildingStageData>)      Stages                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSectionEditorData
/// Size: 0x0018 (0x000030 - 0x000048)
class FJunoGuidedBuildingSectionEditorData : public FJunoGuidedBuildingSectionData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(double)                                    ZSortValue                                                  OFFSET(get<double>, {0x30, 8, 0, 0})
	CMember(TArray<FJunoGuidedBuildingStageEditorData>) EditorStages                                               OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingDestructionEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoGuidedBuildingDestructionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              StageTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<int32_t>)                           ActorIndexesToDestroy                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingDestructionEditorEntry
/// Size: 0x0010 (0x000018 - 0x000028)
class FJunoGuidedBuildingDestructionEditorEntry : public FJunoGuidedBuildingDestructionEntry
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FName>)                             ActorNamesToDestroy                                         OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetData
/// Size: 0x0090 (0x000000 - 0x000090)
class FJunoGuidedBuildingSetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FText)                                     SetDisplayName                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   TotalNumberOfSnapsInSet                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FJunoGuidedBuildingStageData)              FoundationStage                                             OFFSET(getStruct<T>, {0x18, 88, 0, 0})
	CMember(TArray<FJunoGuidedBuildingDestructionEntry>) DestructionEntries                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FJunoGuidedBuildingSectionData>)    Sections                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetEditorData
/// Size: 0x0020 (0x000090 - 0x0000B0)
class FJunoGuidedBuildingSetEditorData : public FJunoGuidedBuildingSetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FJunoGuidedBuildingDestructionEditorEntry>) DestructionEditorEntries                            OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FJunoGuidedBuildingSectionEditorData>) EditorSections                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.GuidedBuildingCachedEditorData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FGuidedBuildingCachedEditorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AJunoGuidedBuildingSettings*)        SettingsActor                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FJunoBuildingEditorActorEntry>)     ActorEntries                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   BaseName                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingBlueprintName                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingPreviewMeshName                               OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingPluginName                                    OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingBlueprintPath                                 OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   GuidedBuildingPreviewMeshPath                               OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   OldBPPath                                                   OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FName)                                     PlaylistName                                                OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	CMember(TArray<FString>)                           PluginsToActivate                                           OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(class UClass*)                             ParentClass                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             NewBPClass                                                  OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<FJunoStageKey>)                     AllStageKeys                                                OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSortTagData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoSortTagData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              SortTag                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxStageSize                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingData
/// Size: 0x0088 (0x000000 - 0x000088)
class FJunoGuidedBuildingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     ActorName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Recipe                                                      OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TArray<FComponentReference>)               ComponentReferences                                         OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x18, 32, 0, 0})
	CMember(class UClass*)                             HardActorClassPtr                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        Components                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FJunoStageKey)                             StageKey                                                    OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	DMember(int32_t)                                   BuildingStateIndex                                          OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(bool)                                      bIsInstantAutoComplete                                      OFFSET(get<bool>, {0x5C, 1, 1, 0})
	DMember(bool)                                      bIsAutoComplete                                             OFFSET(get<bool>, {0x5C, 1, 1, 1})
	DMember(bool)                                      bIsFoundation                                               OFFSET(get<bool>, {0x5C, 1, 1, 2})
	DMember(bool)                                      bForceIndependentlySupported                                OFFSET(get<bool>, {0x5C, 1, 1, 3})
	CMember(class UClass*)                             SpawnedClass                                                OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FGameplayTagContainer)                     EntryTags                                                   OFFSET(getStruct<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStateEntry
/// Size: 0x0014 (0x00000C - 0x000020)
class FJunoGuidedBuildingStateEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EJunoGuidedBuildingState)                  CurrentState                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   FilledActor                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   BuildingDataIndex                                           OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingStateArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FJunoGuidedBuildingStateArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FJunoGuidedBuildingStateEntry>)     Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class AJunoGuidedBuildingActor*)           Parent                                                      OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingUpdateData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoGuidedBuildingUpdateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<int32_t>)                           UpdatedSnaps                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FJunoStageKey>)                     UpdatedStages                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FJunoStageKey>)                     CompletedStages                                             OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FJunoStageKey>)                     CompletedSections                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bSetComplete                                                OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   FinishingPlayer                                             OFFSET(get<T>, {0x44, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildRemainingPartsInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoGuidedBuildRemainingPartsInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Recipe                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Remaining                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Total                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_LastGuidedBuildingActorChanged
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_LastGuidedBuildingActorChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AJunoGuidedBuildingActor*>) NewActor                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingSetCompleteState
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoGuidedBuildingSetCompleteState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bSetComplete                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   FinishingPlayer                                             OFFSET(get<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      bSetUnfinished                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.AutoCompleteData
/// Size: 0x000C (0x000000 - 0x00000C)
class FAutoCompleteData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   BuildingDataIndex                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SpawnedActor                                                OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.AutoCompleteBatch
/// Size: 0x0020 (0x000000 - 0x000020)
class FAutoCompleteBatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FAutoCompleteData>)                 AutoCompleteData                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<APawn*>)                    Instigator                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingRegisteredPlayer
/// Size: 0x0008 (0x00000C - 0x000014)
class FJunoGuidedBuildingRegisteredPlayer : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingRegisteredPlayerArray
/// Size: 0x0040 (0x000108 - 0x000148)
class FJunoGuidedBuildingRegisteredPlayerArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<FJunoGuidedBuildingRegisteredPlayer>) Entries                                                   OFFSET(get<T>, {0x138, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoGuidedBuildingBrushState
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoGuidedBuildingBrushState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bIsGuidedBuildSelected                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        Comps                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCommonPartsSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoCommonPartsSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bShowLogo                                                   OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(char)                                      PlaneQuadrant                                               OFFSET(get<char>, {0x1D, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.ProjectPlayResourceData
/// Size: 0x0030 (0x000008 - 0x000038)
class FProjectPlayResourceData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) ItemDefinition                                              OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FCurveTableRowHandle)                      ResourceAmount                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingTagData
/// Size: 0x0028 (0x000008 - 0x000030)
class FJunoBuildingTagData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BlueprintClass                                              OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewerRequestData
/// Size: 0x0110 (0x000000 - 0x000110)
class FJunoBuildingPreviewerRequestData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TMap<UActorComponent*, USceneComponent*>)  AttachParents                                               OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewerWorkingData
/// Size: 0x0240 (0x000000 - 0x000240)
class FJunoBuildingPreviewerWorkingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(TArray<class UActorComponent*>)            DefaultComponents                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FJunoBuildingPreviewerRequestData)         RequestData                                                 OFFSET(getStruct<T>, {0x10, 272, 0, 0})
	SMember(FJunoBuildingSelectionPreview)             Result                                                      OFFSET(getStruct<T>, {0x120, 280, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSelectionPreview
/// Size: 0x0118 (0x000000 - 0x000118)
class FJunoBuildingSelectionPreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<class UJunoBuildingPreviewComponent*>) PreviewComponents                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UPrimitiveComponent*>)        CollisionComponents                                         OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UMeshComponent*>)             MeshComponents                                              OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FJunoBuildingSnapEntryPreview>)     SnapEntryPreviews                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FJunoComponentActorMapEntry>)       ComponentToClassMap                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FBox)                                      LocalCollisionBounds                                        OFFSET(getStruct<T>, {0x50, 56, 0, 0})
	SMember(FBox)                                      FoundationCollisionBounds                                   OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FBox)                                      NonFoundationCollisionBounds                                OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(class UBoxComponent*)                      NoTargetPlacementCollisionGBA                               OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UBoxComponent*)                      FoundationPlacementCollisionGBA                             OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoComponentActorMapEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoComponentActorMapEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             SelectedActorClass                                          OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingSnapEntryPreview
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FJunoBuildingSnapEntryPreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EJunoBuildingSnapEntryState)               State                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FTransform)                                ToWorld                                                     OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FBox)                                      TargetingArea                                               OFFSET(getStruct<T>, {0x70, 56, 0, 0})
	DMember(double)                                    FadePercentage                                              OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(bool)                                      bOnPrimaryActor                                             OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewerWorkingDataAsync
/// Size: 0x0260 (0x000000 - 0x000260)
class FJunoBuildingPreviewerWorkingDataAsync : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FJunoBuildingPreviewerWorkingData)         WorkingData                                                 OFFSET(getStruct<T>, {0x0, 576, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoCollisionChannelResponsePair
/// Size: 0x0002 (0x000000 - 0x000002)
class FJunoCollisionChannelResponsePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(TEnumAsByte<ECollisionChannel>)            Channel                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionResponse>)           Response                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPreviewParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoBuildingPreviewParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FJunoCollisionChannelResponsePair>) CollisionResponses                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bShowFoundationPieces                                       OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bSetCustomDepthStencil                                      OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildingPlacementPreview
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FJunoBuildingPlacementPreview : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UMeshComponent*>)             MeshComponents                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                ToWorld                                                     OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x80, 56, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsDisplayData
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoBuildInstructionsDisplayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EFortItemType)                             ItemType                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FText)                                     ItemTypeNameOverride                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FText)                                     QuantityDisplayName                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     ShortDescription                                            OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsPickupData
/// Size: 0x0100 (0x000000 - 0x000100)
class FJunoBuildInstructionsPickupData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TWeakObjectPtr<UStaticMesh*>)              PickupStaticMesh                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PickupSkeletalMesh                                          OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PickupEffectOverride                                        OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               PickupSound                                                 OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               PickupByNearbyPawnSound                                     OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DropSound                                                   OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DroppedLoopSound                                            OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               LandedSound                                                 OFFSET(get<T>, {0xE0, 32, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsItemData
/// Size: 0x0048 (0x000000 - 0x000048)
class FJunoBuildInstructionsItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bGiveResourcesOnDestroy                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     SelfCraftingFormulaName                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ActorClassToBuild                                           OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FText)                                     SizeDescription                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     SetDescription                                              OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildInstructionsInitializationParams
/// Size: 0x01C0 (0x000000 - 0x0001C0)
class FJunoBuildInstructionsInitializationParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FJunoBuildInstructionsDisplayData)         Display                                                     OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FJunoBuildInstructionsPickupData)          Pickup                                                      OFFSET(getStruct<T>, {0x78, 256, 0, 0})
	SMember(FJunoBuildInstructionsItemData)            BuildInstructions                                           OFFSET(getStruct<T>, {0x178, 72, 0, 0})
};

/// Struct /Script/JunoGameNative.ActorUpgradeInfo
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FActorUpgradeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FString)                                   FlowName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ActorToUpgrade                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CraftingObject                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<AJunoPersistentPlayspace*>) Playspace                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     RecipeName                                                  OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(class UJunoBuildInstructionsItemDefinition*) OldItemDef                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UJunoBuildInstructionsItemDefinition*) ItemDef                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FTransform)                                ActorTransform                                              OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	CMember(TArray<FFortItemEntry>)                    ConsumedIngredients                                         OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoAnimGcMappingEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoAnimGcMappingEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     SkeletalMeshBoneName                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   GeometryCollectionRootProxyMeshIndices                      OFFSET(get<int32_t>, {0x4, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.SerializableGraphLegacy
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FSerializableGraphLegacy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FGraphProperties)                          Properties                                                  OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	CMember(TArray<FGraphVertexHandle>)                Vertices                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FGraphHandle, FSerializedEdgeData>)   Edges                                                       OFFSET(get<T>, {0x18, 80, 0, 0})
	CMember(TMap<FGraphIslandHandle, FSerializedIslandData>) Islands                                               OFFSET(get<T>, {0x68, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.SerializableConnectivityGraph
/// Size: 0x0050 (0x0000B8 - 0x000108)
class FSerializableConnectivityGraph : public FSerializableGraphLegacy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TMap<FGraphVertexHandle, FSerializableConnectivityGraphVertex>) ConnectivityVertexData                 OFFSET(get<T>, {0xB8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_KnowledgeComponentReadyOnClient
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoEvent_KnowledgeComponentReadyOnClient : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UJunoKnowledgeComponent*)            KnowledgeComponent                                          OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_LocalRecipeKnowledgeStateChanged
/// Size: 0x0004 (0x000000 - 0x000004)
class FJunoEvent_LocalRecipeKnowledgeStateChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     RecipeRowName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateFastEntry
/// Size: 0x0008 (0x00000C - 0x000014)
class FJunoKnowledgeRecipeStateFastEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int16_t)                                   RecipeID                                                    OFFSET(get<int16_t>, {0xC, 2, 0, 0})
	CMember(EJunoKnowledgeState)                       CurrentState                                                OFFSET(get<T>, {0xE, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeStateFastArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FJunoKnowledgeRecipeStateFastArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FJunoKnowledgeRecipeStateFastEntry>) Entries                                                    OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TWeakObjectPtr<UJunoKnowledgeComponent*>)  ParentComp                                                  OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeReplicatedRecipeDiscoverer
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoKnowledgeReplicatedRecipeDiscoverer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int16_t)                                   RecipeID                                                    OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	CMember(class AFortPlayerState*)                   DiscoveredByPlayerState                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeItemServerState
/// Size: 0x0028 (0x000000 - 0x000028)
class FJunoKnowledgeItemServerState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UItemDefinitionBase*)                ItemDefinition                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AFortPlayerState*)                   InstigatorPlayerState                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoKnowledgeRecipeServerState
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoKnowledgeRecipeServerState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UItemDefinitionBase*)                ResultItem                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.UniqueMarkerSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FUniqueMarkerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       OriginalSettings                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReplacementSettings                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.MoodReactionDataExposedRequestConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FMoodReactionDataExposedRequestConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bLookAtInstigator                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.MoodReactionRequestConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FMoodReactionRequestConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MoodReactionTag                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Instigator                                                  OFFSET(get<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      bLookAtInstigator                                           OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bForceInstantReaction                                       OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.RequestedMoodReaction
/// Size: 0x0018 (0x000000 - 0x000018)
class FRequestedMoodReaction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMoodReactionRequestConfig)                MoodReactionConfig                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoUpdateAction
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FJunoUpdateAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FActorInstanceRecord)                      ActorInstanceRecord                                         OFFSET(getStruct<T>, {0x0, 160, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDeltasStorage_Index_Dss
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoDeltasStorage_Index_Dss : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   WorldCompatibilityVersion                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TMap<FString, FString>)                    PackageDeltaFiles                                           OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoDeltasStorage_Index_PFW
/// Size: 0x0058 (0x000000 - 0x000058)
class FJunoDeltasStorage_Index_PFW : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   WorldCompatibilityVersion                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TMap<FString, FJsonObjectWrapper>)         DeltasMetadata                                              OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPFWDeltaContentBase64
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoPFWDeltaContentBase64 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistentPlayspaceLevelRegistryEntry
/// Size: 0x0024 (0x000000 - 0x000024)
class FJunoPersistentPlayspaceLevelRegistryEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(TWeakObjectPtr<AJunoPersistentPlayspace*>) PersistentPlayspaceWeakPtr                                  OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPersistenceFeature
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FJunoPersistenceFeature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EJunoPersistenceFeatureCheckoutState)      CurrentCheckoutState                                        OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(EJunoPersistenceFeatureCheckoutState)      TargetCheckoutState                                         OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(uint32_t)                                  CheckoutStateChangeRequestKey                               OFFSET(get<uint32_t>, {0x18, 4, 0, 0})
	CMember(class UObject*)                            ImplementationCustomStateObject                             OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   Data                                                        OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UClass*)                             SourceImplementationDataClass                               OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   DifferentImplementationData                                 OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoClusterUnionPersistenceFeatureData_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoClusterUnionPersistenceFeatureData_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoClusterUnionSaveData)                 SaveData                                                    OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoClusterUnionSaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoClusterUnionSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGraphIslandHandle, FJunoSingleClusterUnionSaveData>) PerClusterUnionData                         OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSingleClusterUnionSaveData
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoSingleClusterUnionSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                WorldTransform                                              OFFSET(getStruct<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoConnectivityGraphPFW_PersistentInfo
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FJunoConnectivityGraphPFW_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FSerializableConnectivityGraph_v2)         SavedConnectivityData                                       OFFSET(getStruct<T>, {0x0, 200, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPhysicsToyPersistenceFeatureData_PersistentInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPhysicsToyPersistenceFeatureData_PersistentInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FJunoPhysicsToySaveData)                   Container                                                   OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPhysicsToySaveData
/// Size: 0x0050 (0x000000 - 0x000050)
class FJunoPhysicsToySaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FJunoSinglePhysicsToySaveData>) PerToyData                                                 OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoSinglePhysicsToySaveData
/// Size: 0x0080 (0x000000 - 0x000080)
class FJunoSinglePhysicsToySaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPersistenceFrameworkLevelSaveSpawnablePtr) AttachedActor                                              OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              OFFSET(getStruct<T>, {0x20, 96, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_OnDeathUI
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OnDeathUI : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_OnInventoryFull
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_OnInventoryFull : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/JunoGameNative.JunoEvent_TransitionUIState
/// Size: 0x0001 (0x000000 - 0x000001)
class FJunoEvent_TransitionUIState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_CheckPointRemoved
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_CheckPointRemoved : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGuid)                                     CheckpointGUID                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEnhancedInputActionToGameplayEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEnhancedInputActionToGameplayEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputAction*)                       InputAction                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              GameplayEventTag                                            OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEmotionalStateData
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEmotionalStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EJunoPawnEmotionalState)                   EmotionalState                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     EmotionPercent                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EmotionSetRate                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int8_t)                                    ForceRepCounter                                             OFFSET(get<int8_t>, {0xC, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoEvent_PawnEmotion
/// Size: 0x0010 (0x000000 - 0x000010)
class FJunoEvent_PawnEmotion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class AFortPlayerPawnAthena*)              Pawn                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EJunoPawnEmotionalState)                   CurrentEmotionalState                                       OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     EmotionPercent                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoPawnEmotionalStateMappingFromAwesomeLevel
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoPawnEmotionalStateMappingFromAwesomeLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EJunoPawnEmotionalState)                   EmotionalState                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   NumericalTestValue                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(EJunoPawnEmotionalStateMappingTest)        NumericalTestMode                                           OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldStreamingSources
/// Size: 0x0060 (0x000000 - 0x000060)
class FJunoWorldStreamingSources : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/JunoGameNative.JunoAIFriendshipStateThresholds
/// Size: 0x000C (0x000000 - 0x00000C)
class FJunoAIFriendshipStateThresholds : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              State                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     MinThreshold                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxThreshold                                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoActionTargetPayload
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoActionTargetPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             Target                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoBuildLimitPool
/// Size: 0x0020 (0x000008 - 0x000028)
class FJunoBuildLimitPool : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<class UClass*>)                     Classes                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   MaxInstanceCount                                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(class UClass*)                             BuildLimitGetterClass                                       OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoRelevantActorTrackingData
/// Size: 0x0008 (0x000000 - 0x000008)
class FJunoRelevantActorTrackingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NetRelevantActorCount                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   UniqueActorCount                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoProcessAwesomenessInteractionStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoProcessAwesomenessInteractionStateTreeTaskInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AActor*)                             Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AActor*)                             TargetActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTag)                              InteractionTypeTag                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoProcessAwesomenessInteractionStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FJunoProcessAwesomenessInteractionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGameplayInteractionTaskTrigger)           InteractionTrigger                                          OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.MeshAuditInfo
/// Size: 0x0080 (0x000000 - 0x000080)
class FMeshAuditInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSoftObjectPath)                           AssetPath                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EMeshAuditFailureReason)                   FailureReason                                               OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   NumConvexShapes                                             OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   NumConvexShapePointsTotal                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   CollisionLOD                                                OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   NumTrianglesInPhysicsMesh                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumNonStreamingLODs                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumInlineLODs                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumLODs                                                     OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionTraceFlag                                          OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TArray<int32_t>)                           TriCounts                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int64_t)                                   RenderResourceSystemSize                                    OFFSET(get<int64_t>, {0x50, 8, 0, 0})
	DMember(int64_t)                                   BodySetupResourceSize                                       OFFSET(get<int64_t>, {0x58, 8, 0, 0})
	DMember(float)                                     WorstTriRatio                                               OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MeshBoundingBoxAreaMeters                                   OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FString)                                   RouteToAsset                                                OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bCustomizedCollision                                        OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(bool)                                      bMeshCollideAll                                             OFFSET(get<bool>, {0x79, 1, 0, 0})
	DMember(bool)                                      bNeverStream                                                OFFSET(get<bool>, {0x7A, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.SkeletalMeshAuditInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FSkeletalMeshAuditInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSoftObjectPath)                           AssetPath                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EMeshAuditFailureReason)                   FailureReason                                               OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(int64_t)                                   RenderResourceSystemSize                                    OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   NumNonOptionalLODs                                          OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumInlineLODs                                               OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumLODs                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<int32_t>)                           TriCounts                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   NumBoneInfluencesPerVertex                                  OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   NumBonesInSkeleton                                          OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(float)                                     WorstTriRatio                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MeshBoundingBoxAreaMeters                                   OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bNeverStream                                                OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Struct /Script/JunoGameNative.GeometryCollectionAuditData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FGeometryCollectionAuditData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSoftObjectPath)                           AssetPath                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(uint64_t)                                  RestCollection_ManagedArraysSize                            OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(uint32_t)                                  ComponentInstanceCount                                      OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	DMember(uint32_t)                                  DynamicCollectionCount                                      OFFSET(get<uint32_t>, {0x24, 4, 0, 0})
	DMember(uint64_t)                                  DynamicCollectionsTotalSize                                 OFFSET(get<uint64_t>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   NumRigidsAllInstances                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumSimulatedParticlesAllInstances                           OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ReservedUnusedParticles                                     OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevelRequested                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MaxSimulatedClusterLevelRequested                           OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MaxCalculatedClusterLevel                                   OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   MaxActualClusterLevel                                       OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(uint64_t)                                  RenderDataSize                                              OFFSET(get<uint64_t>, {0x50, 8, 0, 0})
	DMember(int32_t)                                   NumExemplars                                                OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(uint64_t)                                  NaniteDataSize                                              OFFSET(get<uint64_t>, {0x60, 8, 0, 0})
	CMember(TArray<class UStaticMesh*>)                RootProxyMeshes                                             OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(uint64_t)                                  NumAutoInstancedMeshes                                      OFFSET(get<uint64_t>, {0x78, 8, 0, 0})
	CMember(TArray<class UStaticMesh*>)                AutoInstancedMeshes                                         OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(uint64_t)                                  SizeSpecificDataSize                                        OFFSET(get<uint64_t>, {0x90, 8, 0, 0})
	SMember(FString)                                   DynamicCollectionGroupsAndSizes                             OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   RestCollectionGroupsAndSizes                                OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionWeather
/// Size: 0x0048 (0x000010 - 0x000058)
class FJunoWorldConditionWeather : public FWorldConditionCommonBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         AllowedWeather                                              OFFSET(getStruct<T>, {0x10, 72, 0, 0})
};

/// Struct /Script/JunoGameNative.JunoWorldConditionActorWeather
/// Size: 0x0050 (0x000010 - 0x000060)
class FJunoWorldConditionActorWeather : public FWorldConditionCommonActorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagQuery)                         AllowedWeather                                              OFFSET(getStruct<T>, {0x18, 72, 0, 0})
};

/// Enum /Script/JunoGameNative.EJunoBuildingPlacementType
/// Size: 0x05
enum class EJunoBuildingPlacementType : uint8_t
{
	EJunoBuildingPlacementType__GuidedSnapping                                       = 0,
	EJunoBuildingPlacementType__Connectivity                                         = 1,
	EJunoBuildingPlacementType__SnapPlacement                                        = 2,
	EJunoBuildingPlacementType__NoTarget                                             = 3,
	EJunoBuildingPlacementType__MAX                                                  = 4
};

/// Enum /Script/JunoGameNative.EJunoBuildingBehaviorState
/// Size: 0x06
enum class EJunoBuildingBehaviorState : uint8_t
{
	EJunoBuildingBehaviorState__Uninitialized                                        = 0,
	EJunoBuildingBehaviorState__Pending                                              = 1,
	EJunoBuildingBehaviorState__Ready                                                = 2,
	EJunoBuildingBehaviorState__Invalid                                              = 3,
	EJunoBuildingBehaviorState__Disabled                                             = 4,
	EJunoBuildingBehaviorState__MAX                                                  = 5
};

/// Enum /Script/JunoGameNative.EJunoBiomeHabitat
/// Size: 0x16
enum class EJunoBiomeHabitat : uint8_t
{
	EJunoBiomeHabitat__Unknown                                                       = 0,
	EJunoBiomeHabitat__POI                                                           = 1,
	EJunoBiomeHabitat__Cave                                                          = 2,
	EJunoBiomeHabitat__Stone                                                         = 3,
	EJunoBiomeHabitat__Asphalt                                                       = 4,
	EJunoBiomeHabitat__Snow                                                          = 5,
	EJunoBiomeHabitat__Dirt                                                          = 6,
	EJunoBiomeHabitat__Sand                                                          = 7,
	EJunoBiomeHabitat__Grass                                                         = 8,
	EJunoBiomeHabitat__Flowers                                                       = 9,
	EJunoBiomeHabitat__Heather                                                       = 10,
	EJunoBiomeHabitat__Moss                                                          = 11,
	EJunoBiomeHabitat__Ocean                                                         = 12,
	EJunoBiomeHabitat__Lake                                                          = 13,
	EJunoBiomeHabitat__River                                                         = 14,
	EJunoBiomeHabitat__Max                                                           = 15
};

/// Enum /Script/JunoGameNative.EJunoBiome
/// Size: 0x09
enum class EJunoBiome : uint8_t
{
	EJunoBiome__Unknown                                                              = 0,
	EJunoBiome__Grasslands                                                           = 1,
	EJunoBiome__DarkForest                                                           = 2,
	EJunoBiome__Desert                                                               = 3,
	EJunoBiome__Tropical                                                             = 4,
	EJunoBiome__Alpine                                                               = 5,
	EJunoBiome__Water                                                                = 6,
	EJunoBiome__Reserved                                                             = 7,
	EJunoBiome__Max                                                                  = 8
};

/// Enum /Script/JunoGameNative.EJunoAwesomePointModificationContext
/// Size: 0x06
enum class EJunoAwesomePointModificationContext : uint8_t
{
	EJunoAwesomePointModificationContext__Cheat                                      = 0,
	EJunoAwesomePointModificationContext__Interaction                                = 1,
	EJunoAwesomePointModificationContext__ActorPlacement                             = 2,
	EJunoAwesomePointModificationContext__ActorRemoval                               = 3,
	EJunoAwesomePointModificationContext__QuestCompletion                            = 4,
	EJunoAwesomePointModificationContext__EJunoAwesomePointModificationContext_MAX   = 5
};

/// Enum /Script/JunoGameNative.EJunoPawnEmotionalState
/// Size: 0x04
enum class EJunoPawnEmotionalState : uint8_t
{
	EJunoPawnEmotionalState__Default                                                 = 0,
	EJunoPawnEmotionalState__Happy                                                   = 1,
	EJunoPawnEmotionalState__Sad                                                     = 2,
	EJunoPawnEmotionalState__MAX                                                     = 3
};

/// Enum /Script/JunoGameNative.EPassiveCraftingDoneReason
/// Size: 0x05
enum class EPassiveCraftingDoneReason : uint8_t
{
	EPassiveCraftingDoneReason__UnexpectedError                                      = 0,
	EPassiveCraftingDoneReason__PlayerStopped                                        = 1,
	EPassiveCraftingDoneReason__NoOutputSpace                                        = 2,
	EPassiveCraftingDoneReason__MissingIngredients                                   = 3,
	EPassiveCraftingDoneReason__EPassiveCraftingDoneReason_MAX                       = 4
};

/// Enum /Script/JunoGameNative.EJunoCaveType
/// Size: 0x11
enum class EJunoCaveType : uint8_t
{
	EJunoCaveType__Unknown                                                           = 0,
	EJunoCaveType__Surface                                                           = 1,
	EJunoCaveType__Lava                                                              = 2,
	EJunoCaveType__Rift                                                              = 3,
	EJunoCaveType__Ruins                                                             = 4,
	EJunoCaveType__SurfaceMines                                                      = 5,
	EJunoCaveType__Pirate                                                            = 6,
	EJunoCaveType__Bear                                                              = 7,
	EJunoCaveType__Treasure                                                          = 8,
	EJunoCaveType__BossRoom                                                          = 9,
	EJunoCaveType__Max                                                               = 10
};

/// Enum /Script/JunoGameNative.EJunoCompassDirection
/// Size: 0x10
enum class EJunoCompassDirection : uint8_t
{
	EJunoCompassDirection__Unknown                                                   = 0,
	EJunoCompassDirection__North                                                     = 1,
	EJunoCompassDirection__NorthEast                                                 = 2,
	EJunoCompassDirection__East                                                      = 3,
	EJunoCompassDirection__SouthEast                                                 = 4,
	EJunoCompassDirection__South                                                     = 5,
	EJunoCompassDirection__SouthWest                                                 = 6,
	EJunoCompassDirection__West                                                      = 7,
	EJunoCompassDirection__NorthWest                                                 = 8,
	EJunoCompassDirection__Max                                                       = 9
};

/// Enum /Script/JunoGameNative.EJunoTrackedActorRefreshReason
/// Size: 0x05
enum class EJunoTrackedActorRefreshReason : uint8_t
{
	EJunoTrackedActorRefreshReason__LocationChanged                                  = 0,
	EJunoTrackedActorRefreshReason__NetRelDistanceChanged                            = 1,
	EJunoTrackedActorRefreshReason__NumberOfRelevantActorsChanged                    = 2,
	EJunoTrackedActorRefreshReason__Unknown                                          = 3,
	EJunoTrackedActorRefreshReason__EJunoTrackedActorRefreshReason_MAX               = 4
};

/// Enum /Script/JunoGameNative.EJunoRecruitmentObjectAcceptedPawnType
/// Size: 0x05
enum class EJunoRecruitmentObjectAcceptedPawnType : uint8_t
{
	EJunoRecruitmentObjectAcceptedPawnType__None                                     = 0,
	EJunoRecruitmentObjectAcceptedPawnType__Player                                   = 1,
	EJunoRecruitmentObjectAcceptedPawnType__NPC                                      = 2,
	EJunoRecruitmentObjectAcceptedPawnType__Creature                                 = 4,
	EJunoRecruitmentObjectAcceptedPawnType__EJunoRecruitmentObjectAcceptedPawnType_MAX = 5
};

/// Enum /Script/JunoGameNative.EChaosEventSize
/// Size: 0x06
enum class EChaosEventSize : uint8_t
{
	EChaosEventSize__Single                                                          = 0,
	EChaosEventSize__Small                                                           = 1,
	EChaosEventSize__Medium                                                          = 2,
	EChaosEventSize__Large                                                           = 3,
	EChaosEventSize__Default                                                         = 1,
	EChaosEventSize__EChaosEventSize_MAX                                             = 4
};

/// Enum /Script/JunoGameNative.EJunoContactDirection
/// Size: 0x07
enum class EJunoContactDirection : uint8_t
{
	EJunoContactDirection__PosX                                                      = 0,
	EJunoContactDirection__NegX                                                      = 1,
	EJunoContactDirection__PosY                                                      = 2,
	EJunoContactDirection__NegY                                                      = 3,
	EJunoContactDirection__PosZ                                                      = 4,
	EJunoContactDirection__NegZ                                                      = 5,
	EJunoContactDirection__EJunoContactDirection_MAX                                 = 6
};

/// Enum /Script/JunoGameNative.EJunoDumpWorldPersistentContentsVerbosity
/// Size: 0x04
enum class EJunoDumpWorldPersistentContentsVerbosity : uint8_t
{
	EJunoDumpWorldPersistentContentsVerbosity__Compact                               = 0,
	EJunoDumpWorldPersistentContentsVerbosity__Default                               = 1,
	EJunoDumpWorldPersistentContentsVerbosity__Verbose                               = 2,
	EJunoDumpWorldPersistentContentsVerbosity__EJunoDumpWorldPersistentContentsVerbosity_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoGeneratePersistenceAssetsReportCommandletAction
/// Size: 0x04
enum class EJunoGeneratePersistenceAssetsReportCommandletAction : uint8_t
{
	EJunoGeneratePersistenceAssetsReportCommandletAction__None                       = 0,
	EJunoGeneratePersistenceAssetsReportCommandletAction__GeneratePersistenceAssetsReport = 1,
	EJunoGeneratePersistenceAssetsReportCommandletAction__GeneratePersistenceAssetsBackwardCompatibiliyReport = 2,
	EJunoGeneratePersistenceAssetsReportCommandletAction__EJunoGeneratePersistenceAssetsReportCommandletAction_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoGeometryCollectionAssemblerDurationType
/// Size: 0x04
enum class EJunoGeometryCollectionAssemblerDurationType : uint32_t
{
	EJunoGeometryCollectionAssemblerDurationType__Default                            = 0,
	EJunoGeometryCollectionAssemblerDurationType__CalculateLayerCount                = 1,
	EJunoGeometryCollectionAssemblerDurationType__SpecifyLayerCount                  = 2,
	EJunoGeometryCollectionAssemblerDurationType__EJunoGeometryCollectionAssemblerDurationType_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoKnowledgeState
/// Size: 0x04
enum class EJunoKnowledgeState : uint8_t
{
	EJunoKnowledgeState__Hidden                                                      = 0,
	EJunoKnowledgeState__Revealed                                                    = 1,
	EJunoKnowledgeState__Acquired                                                    = 2,
	EJunoKnowledgeState__EJunoKnowledgeState_MAX                                     = 3
};

/// Enum /Script/JunoGameNative.EJunoPersistenceAssetBackwardCompatibilityIssueType
/// Size: 0x05
enum class EJunoPersistenceAssetBackwardCompatibilityIssueType : uint8_t
{
	EJunoPersistenceAssetBackwardCompatibilityIssueType__None                        = 0,
	EJunoPersistenceAssetBackwardCompatibilityIssueType__Missing                     = 1,
	EJunoPersistenceAssetBackwardCompatibilityIssueType__NoLongerCooked              = 2,
	EJunoPersistenceAssetBackwardCompatibilityIssueType__IncompatibleContents        = 3,
	EJunoPersistenceAssetBackwardCompatibilityIssueType__EJunoPersistenceAssetBackwardCompatibilityIssueType_MAX = 4
};

/// Enum /Script/JunoGameNative.EJunoWorldSaveDataState
/// Size: 0x06
enum class EJunoWorldSaveDataState : uint8_t
{
	EJunoWorldSaveDataState__Uninitialized                                           = 0,
	EJunoWorldSaveDataState__Loading                                                 = 1,
	EJunoWorldSaveDataState__Loaded                                                  = 2,
	EJunoWorldSaveDataState__CheckingIn                                              = 3,
	EJunoWorldSaveDataState__CheckedIn                                               = 4,
	EJunoWorldSaveDataState__EJunoWorldSaveDataState_MAX                             = 5
};

/// Enum /Script/JunoGameNative.EJunoLevelSaveDataState
/// Size: 0x05
enum class EJunoLevelSaveDataState : uint8_t
{
	EJunoLevelSaveDataState__None                                                    = 0,
	EJunoLevelSaveDataState__CheckedOut                                              = 1,
	EJunoLevelSaveDataState__Applied                                                 = 2,
	EJunoLevelSaveDataState__CheckedIn                                               = 3,
	EJunoLevelSaveDataState__EJunoLevelSaveDataState_MAX                             = 4
};

/// Enum /Script/JunoGameNative.EJunoWorldPersistenceType
/// Size: 0x03
enum class EJunoWorldPersistenceType : uint32_t
{
	EJunoWorldPersistenceType__Online                                                = 0,
	EJunoWorldPersistenceType__None                                                  = 1,
	EJunoWorldPersistenceType__EJunoWorldPersistenceType_MAX                         = 2
};

/// Enum /Script/JunoGameNative.EJunoWorldReadOnly
/// Size: 0x03
enum class EJunoWorldReadOnly : uint32_t
{
	EJunoWorldReadOnly__No                                                           = 0,
	EJunoWorldReadOnly__Yes                                                          = 1,
	EJunoWorldReadOnly__EJunoWorldReadOnly_MAX                                       = 2
};

/// Enum /Script/JunoGameNative.EJunoPersistenceFeatureCheckoutState
/// Size: 0x04
enum class EJunoPersistenceFeatureCheckoutState : uint32_t
{
	EJunoPersistenceFeatureCheckoutState__None                                       = 0,
	EJunoPersistenceFeatureCheckoutState__CheckedOut                                 = 1,
	EJunoPersistenceFeatureCheckoutState__CheckedIn                                  = 2,
	EJunoPersistenceFeatureCheckoutState__EJunoPersistenceFeatureCheckoutState_MAX   = 3
};

/// Enum /Script/JunoGameNative.EJunoBuildModeType
/// Size: 0x05
enum class EJunoBuildModeType : uint8_t
{
	EJunoBuildModeType__BuildMode                                                    = 0,
	EJunoBuildModeType__GuidedBuildingMode                                           = 1,
	EJunoBuildModeType__NumOfBuildModes                                              = 2,
	EJunoBuildModeType__ActionMode                                                   = 3,
	EJunoBuildModeType__EJunoBuildModeType_MAX                                       = 4
};

/// Enum /Script/JunoGameNative.EJunoPersistenceReportOptions
/// Size: 0x15
enum class EJunoPersistenceReportOptions : uint16_t
{
	EJunoPersistenceReportOptions__None                                              = 0,
	EJunoPersistenceReportOptions__ActorTemplateDataEnabled                          = 1,
	EJunoPersistenceReportOptions__ActorInstanceDataEnabled                          = 2,
	EJunoPersistenceReportOptions__JunoUpdateActionDataEnabled                       = 4,
	EJunoPersistenceReportOptions__JunoDeleteActionDataEnabled                       = 8,
	EJunoPersistenceReportOptions__JunoPersistenceFeaturesDataEnabled                = 16,
	EJunoPersistenceReportOptions__DataEnabledDefaultFlags                           = 31,
	EJunoPersistenceReportOptions__ShowReportHeader                                  = 32,
	EJunoPersistenceReportOptions__ShowPlayspaceHeaders                              = 64,
	EJunoPersistenceReportOptions__ShowSubreportsHeaders                             = 128,
	EJunoPersistenceReportOptions__ShowTablesHeaders                                 = 256,
	EJunoPersistenceReportOptions__ShowIndividualItemsStats                          = 512,
	EJunoPersistenceReportOptions__ShowAggregatedStats                               = 1024,
	EJunoPersistenceReportOptions__ShowDefaultFlags                                  = 1504,
	EJunoPersistenceReportOptions__EJunoPersistenceReportOptions_MAX                 = 1505
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionAICampChecksIsAssigned
/// Size: 0x04
enum class EJunoWorldConditionAICampChecksIsAssigned : uint8_t
{
	EJunoWorldConditionAICampChecksIsAssigned__None                                  = 0,
	EJunoWorldConditionAICampChecksIsAssigned__Assigned                              = 1,
	EJunoWorldConditionAICampChecksIsAssigned__Unassigned                            = 2,
	EJunoWorldConditionAICampChecksIsAssigned__EJunoWorldConditionAICampChecksIsAssigned_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionMustHaveLastUsedGatheringActor
/// Size: 0x04
enum class EJunoWorldConditionMustHaveLastUsedGatheringActor : uint8_t
{
	EJunoWorldConditionMustHaveLastUsedGatheringActor__None                          = 0,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__IsValid                       = 1,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__IsNotValid                    = 2,
	EJunoWorldConditionMustHaveLastUsedGatheringActor__EJunoWorldConditionMustHaveLastUsedGatheringActor_MAX = 3
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionAssignmentState
/// Size: 0x05
enum class EJunoWorldConditionAssignmentState : uint8_t
{
	EJunoWorldConditionAssignmentState__None                                         = 0,
	EJunoWorldConditionAssignmentState__AssignedToUserActor                          = 1,
	EJunoWorldConditionAssignmentState__Assigned                                     = 2,
	EJunoWorldConditionAssignmentState__Unassigned                                   = 3,
	EJunoWorldConditionAssignmentState__EJunoWorldConditionAssignmentState_MAX       = 4
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionPawnType
/// Size: 0x06
enum class EJunoWorldConditionPawnType : uint8_t
{
	EJunoWorldConditionPawnType__None                                                = 0,
	EJunoWorldConditionPawnType__Player                                              = 1,
	EJunoWorldConditionPawnType__Villager                                            = 2,
	EJunoWorldConditionPawnType__EnemyMinifig                                        = 4,
	EJunoWorldConditionPawnType__Creature                                            = 8,
	EJunoWorldConditionPawnType__EJunoWorldConditionPawnType_MAX                     = 9
};

/// Enum /Script/JunoGameNative.EJunoWorldConditionHasFollower
/// Size: 0x04
enum class EJunoWorldConditionHasFollower : uint8_t
{
	EJunoWorldConditionHasFollower__Unset                                            = 0,
	EJunoWorldConditionHasFollower__Zero                                             = 1,
	EJunoWorldConditionHasFollower__OneOrMore                                        = 2,
	EJunoWorldConditionHasFollower__EJunoWorldConditionHasFollower_MAX               = 3
};

/// Enum /Script/JunoGameNative.EPhysicalStrainHealthMode
/// Size: 0x05
enum class EPhysicalStrainHealthMode : uint8_t
{
	EPhysicalStrainHealthMode__Disabled                                              = 0,
	EPhysicalStrainHealthMode__FullIntegrityPercentageMapping                        = 1,
	EPhysicalStrainHealthMode__ZeroIntegrity                                         = 2,
	EPhysicalStrainHealthMode__FullIntegrityFatigueThresholdMapping                  = 3,
	EPhysicalStrainHealthMode__EPhysicalStrainHealthMode_MAX                         = 4
};

/// Enum /Script/JunoGameNative.EJunoAwesomeThresholdTestMode
/// Size: 0x04
enum class EJunoAwesomeThresholdTestMode : uint32_t
{
	EJunoAwesomeThresholdTestMode__LessOrEqual                                       = 0,
	EJunoAwesomeThresholdTestMode__GreaterOrEqual                                    = 1,
	EJunoAwesomeThresholdTestMode__Range                                             = 2,
	EJunoAwesomeThresholdTestMode__EJunoAwesomeThresholdTestMode_MAX                 = 3
};

/// Enum /Script/JunoGameNative.EJunoAwesomePlacementConfigType
/// Size: 0x03
enum class EJunoAwesomePlacementConfigType : uint8_t
{
	EJunoAwesomePlacementConfigType__ItemDefinition                                  = 0,
	EJunoAwesomePlacementConfigType__CraftingRowName                                 = 1,
	EJunoAwesomePlacementConfigType__EJunoAwesomePlacementConfigType_MAX             = 2
};

/// Enum /Script/JunoGameNative.EJunoAwesomeLevelUpgradeQueryResult
/// Size: 0x07
enum class EJunoAwesomeLevelUpgradeQueryResult : uint8_t
{
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingAwesomePoints                   = 0,
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingPlayerResources                 = 1,
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingRequiredBuiltObjectCount        = 2,
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingPersistentCampTags              = 3,
	EJunoAwesomeLevelUpgradeQueryResult__Fail_LackingTriggeredWorldReactions         = 4,
	EJunoAwesomeLevelUpgradeQueryResult__Pass                                        = 5,
	EJunoAwesomeLevelUpgradeQueryResult__EJunoAwesomeLevelUpgradeQueryResult_MAX     = 6
};

/// Enum /Script/JunoGameNative.EJunoAwesomeConfigDeterminationType
/// Size: 0x03
enum class EJunoAwesomeConfigDeterminationType : uint8_t
{
	EJunoAwesomeConfigDeterminationType__Biome                                       = 0,
	EJunoAwesomeConfigDeterminationType__PoiType                                     = 1,
	EJunoAwesomeConfigDeterminationType__EJunoAwesomeConfigDeterminationType_MAX     = 2
};

/// Enum /Script/JunoGameNative.EJunoAwesomeLevelIncrementType
/// Size: 0x03
enum class EJunoAwesomeLevelIncrementType : uint8_t
{
	EJunoAwesomeLevelIncrementType__LevelDelta                                       = 0,
	EJunoAwesomeLevelIncrementType__CurrentLevel                                     = 1,
	EJunoAwesomeLevelIncrementType__EJunoAwesomeLevelIncrementType_MAX               = 2
};

/// Enum /Script/JunoGameNative.EImpactOrDamage_ExecutionPin
/// Size: 0x04
enum class EImpactOrDamage_ExecutionPin : uint8_t
{
	EImpactOrDamage_ExecutionPin__LocalImpact                                        = 0,
	EImpactOrDamage_ExecutionPin__LocalDamage                                        = 1,
	EImpactOrDamage_ExecutionPin__OtherDamage                                        = 2,
	EImpactOrDamage_ExecutionPin__EImpactOrDamage_MAX                                = 3
};

/// Enum /Script/JunoGameNative.EUpdateAnimationTimer_ExecutionPin
/// Size: 0x03
enum class EUpdateAnimationTimer_ExecutionPin : uint8_t
{
	EUpdateAnimationTimer_ExecutionPin__Active                                       = 0,
	EUpdateAnimationTimer_ExecutionPin__Expired                                      = 1,
	EUpdateAnimationTimer_ExecutionPin__EUpdateAnimationTimer_MAX                    = 2
};

/// Enum /Script/JunoGameNative.EJunoMinifigRotationMode
/// Size: 0x05
enum class EJunoMinifigRotationMode : uint8_t
{
	EJunoMinifigRotationMode__NoRotation                                             = 0,
	EJunoMinifigRotationMode__ContinuousRotateToTarget                               = 1,
	EJunoMinifigRotationMode__CurveRotateToMovingTarget                              = 2,
	EJunoMinifigRotationMode__CurveRotateToStaticTarget                              = 3,
	EJunoMinifigRotationMode__EJunoMinifigRotationMode_MAX                           = 4
};

/// Enum /Script/JunoGameNative.EJunoBedAssignmentProcessingState
/// Size: 0x03
enum class EJunoBedAssignmentProcessingState : uint8_t
{
	EJunoBedAssignmentProcessingState__Processing                                    = 0,
	EJunoBedAssignmentProcessingState__Ready                                         = 1,
	EJunoBedAssignmentProcessingState__EJunoBedAssignmentProcessingState_MAX         = 2
};

/// Enum /Script/JunoGameNative.EJunoResourceScale
/// Size: 0x07
enum class EJunoResourceScale : uint8_t
{
	EJunoResourceScale__Invalid                                                      = 0,
	EJunoResourceScale__Small                                                        = 1,
	EJunoResourceScale__Medium                                                       = 2,
	EJunoResourceScale__Large                                                        = 3,
	EJunoResourceScale__VerySmall                                                    = 4,
	EJunoResourceScale__VeryLarge                                                    = 5,
	EJunoResourceScale__EJunoResourceScale_MAX                                       = 6
};

/// Enum /Script/JunoGameNative.EWorldDataAvailable
/// Size: 0x04
enum class EWorldDataAvailable : uint8_t
{
	EWorldDataAvailable__Undefined                                                   = 0,
	EWorldDataAvailable__WasLoadedFromPersistentData                                 = 1,
	EWorldDataAvailable__WasInitializedFromWorldMetadata                             = 2,
	EWorldDataAvailable__EWorldDataAvailable_MAX                                     = 3
};

/// Enum /Script/JunoGameNative.EJunoItemChangeType
/// Size: 0x06
enum class EJunoItemChangeType : uint8_t
{
	EJunoItemChangeType__Added                                                       = 0,
	EJunoItemChangeType__Removed                                                     = 1,
	EJunoItemChangeType__ItemChanged                                                 = 2,
	EJunoItemChangeType__SlotChanged                                                 = 3,
	EJunoItemChangeType__Swapped                                                     = 4,
	EJunoItemChangeType__EJunoItemChangeType_MAX                                     = 5
};

/// Enum /Script/JunoGameNative.EJunoInventoryAcquisitionResult
/// Size: 0x05
enum class EJunoInventoryAcquisitionResult : uint8_t
{
	EJunoInventoryAcquisitionResult__Failure                                         = 0,
	EJunoInventoryAcquisitionResult__SystemNotReady                                  = 1,
	EJunoInventoryAcquisitionResult__InventoryCreated                                = 2,
	EJunoInventoryAcquisitionResult__InventoryRestored                               = 3,
	EJunoInventoryAcquisitionResult__EJunoInventoryAcquisitionResult_MAX             = 4
};

/// Enum /Script/JunoGameNative.EJunoBuildingSnapEntryState
/// Size: 0x06
enum class EJunoBuildingSnapEntryState : uint8_t
{
	EJunoBuildingSnapEntryState__Incompatible                                        = 0,
	EJunoBuildingSnapEntryState__Compatible                                          = 1,
	EJunoBuildingSnapEntryState__InRangeRejected                                     = 2,
	EJunoBuildingSnapEntryState__InRangeValid                                        = 3,
	EJunoBuildingSnapEntryState__Connected                                           = 4,
	EJunoBuildingSnapEntryState__EJunoBuildingSnapEntryState_MAX                     = 5
};

/// Enum /Script/JunoGameNative.EOnPlacementAction
/// Size: 0x03
enum class EOnPlacementAction : uint8_t
{
	EOnPlacementAction__IgnoreOnly                                                   = 0,
	EOnPlacementAction__IgnoreAndDestroy                                             = 1,
	EOnPlacementAction__EOnPlacementAction_MAX                                       = 2
};

/// Enum /Script/JunoGameNative.EJunoGuidedBuildingState
/// Size: 0x05
enum class EJunoGuidedBuildingState : uint8_t
{
	EJunoGuidedBuildingState__Default                                                = 0,
	EJunoGuidedBuildingState__Hidden                                                 = 1,
	EJunoGuidedBuildingState__Unfilled                                               = 2,
	EJunoGuidedBuildingState__Filled                                                 = 3,
	EJunoGuidedBuildingState__EJunoGuidedBuildingState_MAX                           = 4
};

/// Enum /Script/JunoGameNative.EJunoLandscapeVisualModifierType
/// Size: 0x03
enum class EJunoLandscapeVisualModifierType : uint8_t
{
	EJunoLandscapeVisualModifierType__None                                           = 0,
	EJunoLandscapeVisualModifierType__DirtPatch                                      = 1,
	EJunoLandscapeVisualModifierType__EJunoLandscapeVisualModifierType_MAX           = 2
};

/// Enum /Script/JunoGameNative.EJunoAutomaticConnectionMethod
/// Size: 0x04
enum class EJunoAutomaticConnectionMethod : uint8_t
{
	EJunoAutomaticConnectionMethod__Full                                             = 0,
	EJunoAutomaticConnectionMethod__Below                                            = 1,
	EJunoAutomaticConnectionMethod__Custom                                           = 2,
	EJunoAutomaticConnectionMethod__EJunoAutomaticConnectionMethod_MAX               = 3
};

/// Enum /Script/JunoGameNative.EJunoDeltaActionTypes
/// Size: 0x05
enum class EJunoDeltaActionTypes : uint8_t
{
	EJunoDeltaActionTypes__None                                                      = 0,
	EJunoDeltaActionTypes__Add                                                       = 1,
	EJunoDeltaActionTypes__Update                                                    = 2,
	EJunoDeltaActionTypes__Delete                                                    = 4,
	EJunoDeltaActionTypes__EJunoDeltaActionTypes_MAX                                 = 5
};

/// Enum /Script/JunoGameNative.EJunoQuickbarSelectionDirection
/// Size: 0x03
enum class EJunoQuickbarSelectionDirection : uint8_t
{
	EJunoQuickbarSelectionDirection__Next                                            = 0,
	EJunoQuickbarSelectionDirection__Prev                                            = 1,
	EJunoQuickbarSelectionDirection__EJunoQuickbarSelectionDirection_MAX             = 2
};

/// Enum /Script/JunoGameNative.EJunoPawnEmotionalStateMappingTest
/// Size: 0x03
enum class EJunoPawnEmotionalStateMappingTest : uint32_t
{
	EJunoPawnEmotionalStateMappingTest__LessOrEqual                                  = 0,
	EJunoPawnEmotionalStateMappingTest__GreaterOrEqual                               = 1,
	EJunoPawnEmotionalStateMappingTest__EJunoPawnEmotionalStateMappingTest_MAX       = 2
};

/// Enum /Script/JunoGameNative.EJunoActionExecutionConfig
/// Size: 0x04
enum class EJunoActionExecutionConfig : uint8_t
{
	EJunoActionExecutionConfig__ExecuteEveryTime                                     = 0,
	EJunoActionExecutionConfig__ExecuteFirstTimeOnly                                 = 1,
	EJunoActionExecutionConfig__ExecuteReloadOnly                                    = 2,
	EJunoActionExecutionConfig__EJunoActionExecutionConfig_MAX                       = 3
};

/// Enum /Script/JunoGameNative.EMeshAuditFailureReason
/// Size: 0x12
enum class EMeshAuditFailureReason : uint32_t
{
	EMeshAuditFailureReason__MAFR_None                                               = 0,
	EMeshAuditFailureReason__MAFR_NeverStream                                        = 1,
	EMeshAuditFailureReason__MAFR_HighTriRatioInLODs                                 = 2,
	EMeshAuditFailureReason__MAFR_SimplestLODTooComplex                              = 4,
	EMeshAuditFailureReason__MAFR_TriDensityTooHigh                                  = 8,
	EMeshAuditFailureReason__MAFR_PhysicsTriDensityHigh                              = 256,
	EMeshAuditFailureReason__MAFR_PhysicsComplexAsSimple                             = 512,
	EMeshAuditFailureReason__MAFR_PhysicsMeshIsHighLOD                               = 1024,
	EMeshAuditFailureReason__MAFR_PhysicsSimpleShapeTooComplex                       = 2048,
	EMeshAuditFailureReason__MAFR_PhysicsTooDetailedForSmallObject                   = 4096,
	EMeshAuditFailureReason__MAFR_PhysicsCollideAll                                  = 8192,
	EMeshAuditFailureReason__MAFR_MAX                                                = 8193
};

