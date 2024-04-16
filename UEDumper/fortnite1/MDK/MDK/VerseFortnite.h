
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: ActorEntity
/// dependency: AIModule
/// dependency: AnimPresetsRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: VerseGameplayTags

/// Class /Script/VerseFortnite.BuildingDamageComponentBridgeHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class UBuildingDamageComponentBridgeHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/VerseFortnite.BuildingDamageComponentBridgeHelper.HandleActorDamaged
	// void HandleActorDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xaeb3760] Final|Native|Private|HasDefaults 
};

/// Class /Script/VerseFortnite.FortActorEntitySubsystem
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UFortActorEntitySubsystem : public UActorEntitySubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FActorEntityInteropRules>)          ActorEntityRules                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FActorEntityInteropRules>)          ActorEntityRules_BR                                         OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/VerseFortnite.FortPawnAbilityComponentBridgeHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortPawnAbilityComponentBridgeHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/VerseFortnite.FortPawnAbilityComponentBridgeHelper.HandlePreInvalidateAbilitySystem
	// void HandlePreInvalidateAbilitySystem();                                                                                 // [0xaeb406c] Final|Native|Private 
	// Function /Script/VerseFortnite.FortPawnAbilityComponentBridgeHelper.HandleAbilitySystemInitialized
	// void HandleAbilitySystemInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn); // [0xaeb3620] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseActorPayloadWrapper
/// Size: 0x0008 (0x000290 - 0x000298)
class AVerseActorPayloadWrapper : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/VerseFortnite.GameplayAbility_PlayAnim
/// Size: 0x0008 (0x0003B0 - 0x0003B8)
class UGameplayAbility_PlayAnim : public UGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:


	/// Functions
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnInterrupted
	// void OnInterrupted();                                                                                                    // [0xaeb55f0] Final|Native|Public  
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnCompleted
	// void OnCompleted();                                                                                                      // [0xaeb55dc] Final|Native|Public  
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnCancelled
	// void OnCancelled();                                                                                                      // [0xaeb55c8] Final|Native|Public  
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnBlendOut
	// void OnBlendOut();                                                                                                       // [0xaeb55b4] Final|Native|Public  
	// Function /Script/VerseFortnite.GameplayAbility_PlayAnim.OnBlendIn
	// void OnBlendIn();                                                                                                        // [0xaeb55a0] Final|Native|Public  
};

/// Class /Script/VerseFortnite.NPCCharacterModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier.GetCharacterDefinition
	// class UNPCCharacterDefinition* GetCharacterDefinition();                                                                 // [0xaeb2d68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_OnSpawned
	// void BP_OnSpawned(class AFortPawn* Pawn);                                                                                // [0x7e2ac18] Native|Event|Public|BlueprintEvent 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_OnPreSpawned
	// void BP_OnPreSpawned(class AFortPawn* Pawn);                                                                             // [0x739f924] Native|Event|Public|BlueprintEvent 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_ModifySpawnComponentList
	// void BP_ModifySpawnComponentList(class UFortAthenaAISpawnerDataComponentList* OutList, class UObject* ComponentOuter);   // [0xaeb16ec] Native|Event|Public|BlueprintEvent 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_IsNeededForPreview
	// bool BP_IsNeededForPreview();                                                                                            // [0x662d430] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/VerseFortnite.NPCCharacterModifier.BP_IsDataValid
	// EDataValidationResult BP_IsDataValid(TArray<FText>& OutErrorMessages);                                                   // [0xaeb163c] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Verse
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier_Verse : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.AIComponentData
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIComponentData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.AIAnimationComponentData
/// Size: 0x0010 (0x000028 - 0x000038)
class UAIAnimationComponentData : public UAIComponentData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UClass*)                             PlayAnimGameplayAbility                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     DefaultSlot                                                 OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/VerseFortnite.PlayAnimationGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlayAnimationGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.PlayAnimationPlayPayload
/// Size: 0x0028 (0x000028 - 0x000050)
class UPlayAnimationPlayPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UAnimSequence*)                      Animation                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FName)                                     Slot                                                        OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Class /Script/VerseFortnite.VerseFortniteBRTeamCollection
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UVerseFortniteBRTeamCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteBRTeamCollection.OnActiveTeamArrayBuilt
	// void OnActiveTeamArrayBuilt();                                                                                           // [0xaeb54cc] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseFortniteMinigameTeamCollection
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UVerseFortniteMinigameTeamCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameSetup
	// void OnMinigameSetup(class AFortMinigame* InMinigame);                                                                   // [0xaeb585c] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortniteMinigameTeamCollection.OnMinigameDestroyed
	// void OnMinigameDestroyed(class AActor* DestroyedMinigame);                                                               // [0xaeb5604] Final|Native|Private 
};

/// Class /Script/VerseFortnite.TeamProxyActor
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ATeamProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FMulticastInlineDelegate)                  OnTeamIndexChanged                                          OFFSET(getStruct<T>, {0x298, 16, 0, 0})
};

/// Class /Script/VerseFortnite.AIActionsHandlerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UAIActionsHandlerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/VerseFortnite.AIComponent
/// Size: 0x0018 (0x000058 - 0x000070)
class UAIComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class AFortPawn*)                          CachedPawn                                                  OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class AAIController*)                      CachedAIController                                          OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FAIComponentSettings>)              AIComponentSettings                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UClass*>)                     EntityComponents                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UAIComponent*>)               AIComponents                                                OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(class UNPCBehaviorScript*)                 NPCBehaviorScriptInstance                                   OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<UNPCBehaviorScript*>)       NPCBehaviorScript                                           OFFSET(get<T>, {0x68, 8, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse.SetNPCBehaviorScript
	// void SetNPCBehaviorScript(class UNPCBehaviorScript* InAIBehaviorScript);                                                 // [0xaeb5a4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent
	// void AddUniqueEntityComponent(class UClass* EntityComponent);                                                            // [0xaeb14c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VerseFortnite.NPCBehaviorScript
/// Size: 0x0000 (0x000070 - 0x000070)
class UNPCBehaviorScript : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/VerseFortnite.VerseAIPerceptionStimuliSourceComponent
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UVerseAIPerceptionStimuliSourceComponent : public UAthenaAIPerceptionStimuliSourceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/VerseFortnite.LoadNPCCharacterDefinitionAsyncBase
/// Size: 0x0040 (0x000030 - 0x000070)
class ULoadNPCCharacterDefinitionAsyncBase : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<UNPCCharacterDefinition*>)  LoadedCharacterDefinition                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ContextObject                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UNPCCharacterModifier*>>) StoredAdditionalModifiers                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TWeakObjectPtr<UNPCCharacterDefinition*>)  StoredCharacterDefinition                                   OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Class /Script/VerseFortnite.LoadNPCCharacterDefinitionAsync
/// Size: 0x0010 (0x000070 - 0x000080)
class ULoadNPCCharacterDefinitionAsync : public ULoadNPCCharacterDefinitionAsyncBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnLoaded                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.LoadNPCCharacterDefinitionAsync.LoadCharacterDefinitionAsync
	// class ULoadNPCCharacterDefinitionAsync* LoadCharacterDefinitionAsync(class UObject* ContextObj, TWeakObjectPtr<UNPCCharacterDefinition*> CharacterDefinition, TArray<UNPCCharacterModifier*>& AdditionalModifiers); // [0xaeb4b94] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VerseFortnite.LoadAndCreateComponentListAsync
/// Size: 0x0020 (0x000070 - 0x000090)
class ULoadAndCreateComponentListAsync : public ULoadNPCCharacterDefinitionAsyncBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaAISpawnerDataComponentList*>) ComponentsList                                 OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bStoredForPreview                                           OFFSET(get<bool>, {0x88, 1, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.LoadAndCreateComponentListAsync.LoadAndCreateComponentListAsync
	// class ULoadAndCreateComponentListAsync* LoadAndCreateComponentListAsync(class UObject* ContextObj, TWeakObjectPtr<UNPCCharacterDefinition*> CharacterDefinition, TArray<UNPCCharacterModifier*>& AdditionalModifiers, bool bForPreview); // [0xaeb4154] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VerseFortnite.NPCCharacterDefinition
/// Size: 0x0060 (0x000138 - 0x000198)
class UNPCCharacterDefinition : public UFortAIPawnCustomizationDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FMulticastInlineDelegate)                  OnCharacterModifierModified                                 OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCharacterTypeModified                                     OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x158, 32, 0, 0})
	CMember(class UNPCCharacterType*)                  Type                                                        OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(class UNPCCharacterModifier_Behavior*)     Behavior                                                    OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(TArray<class UNPCCharacterModifier*>)      Modifiers                                                   OFFSET(get<T>, {0x188, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetRequiredAssets
	// void GetRequiredAssets(TArray<FSoftObjectPath>& OutAssets);                                                              // [0xaeb3560] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetPreviewMesh
	// void GetPreviewMesh(class UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers, TArray<FCharacterPreviewMesh>& OutCharacterPreviewMeshes, class APawn*& OutDefaultPawn); // [0xaeb2e08] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetCharacterCID
	// class UAthenaCharacterItemDefinition* GetCharacterCID(class UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers); // [0xaeb2680] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetCharacterBlueprint
	// class UClass* GetCharacterBlueprint(TArray<UNPCCharacterModifier*>& AdditionalModifiers);                                // [0xaeb2048] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.CreateComponentList
	// class UFortAthenaAISpawnerDataComponentList* CreateComponentList(class UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers, bool bForPreview); // [0xaeb1830] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterDefinitionComponent
/// Size: 0x0058 (0x000120 - 0x000178)
class UNPCCharacterDefinitionComponent : public UFortUserOptionContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TWeakObjectPtr<UNPCCharacterDefinition*>)  NPCCharacterDefinition                                      OFFSET(get<T>, {0x120, 32, 0, 0})
	CMember(TWeakObjectPtr<UNPCCharacterDefinition*>)  DefaultNPCCharacterDefinition                               OFFSET(get<T>, {0x140, 32, 0, 0})
	SMember(FGameplayTag)                              DefaultDefinitionTag                                        OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	CMember(TArray<class UNPCCharacterModifier*>)      NPCCharacterModifiers                                       OFFSET(get<T>, {0x168, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterDefinitionComponent.SetNPCCharacterDefinition
	// void SetNPCCharacterDefinition(TWeakObjectPtr<UNPCCharacterDefinition*> Definition);                                     // [0xaeb5b84] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortnite.NPCCharacterDefinitionComponent.OnNPCCharacterTypeChanged
	// void OnNPCCharacterTypeChanged();                                                                                        // [0x3508bf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortnite.NPCCharacterDefinitionComponent.GetNPCCharacterModifiers
	// TArray<UNPCCharacterModifier*> GetNPCCharacterModifiers();                                                               // [0xaeb2dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinitionComponent.GetNPCCharacterDefinition
	// TWeakObjectPtr<UNPCCharacterDefinition*> GetNPCCharacterDefinition();                                                    // [0xaeb2d8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Behavior
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier_Behavior : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_CosmeticSpawn
/// Size: 0x00E8 (0x000028 - 0x000110)
class UNPCCharacterModifier_CosmeticSpawn : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ECharacterLook)                            CharacterLook                                               OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<UAthenaCharacterItemDefinition*>) CharacterCosmetic                                     OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FString)                                   CharacterCosmeticAssetId                                    OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CharacterBlueprint                                          OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(ENPCCharacterMovement)                     CharacterMovement                                           OFFSET(get<T>, {0x80, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AnimPreset                                                  OFFSET(get<T>, {0x88, 32, 0, 0})
	SMember(FAnimPresetRetargetData)                   Retargeter                                                  OFFSET(getStruct<T>, {0xA8, 64, 0, 0})
	CMember(TWeakObjectPtr<UIKRetargeter*>)            IKRetargeter                                                OFFSET(get<T>, {0xE8, 32, 0, 0})
	DMember(bool)                                      bSupportAnimPreset                                          OFFSET(get<bool>, {0x108, 1, 1, 0})
	DMember(bool)                                      bSupportCharacterMovement                                   OFFSET(get<bool>, {0x108, 1, 1, 1})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier_CosmeticSpawn.GetCharacterCosmetic
	// TWeakObjectPtr<UAthenaCharacterItemDefinition*> GetCharacterCosmetic();                                                  // [0xaeb2d24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Effects
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier_Effects : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier_Effects.GetCustomEffects
	// TArray<FNPCCustomEffect> GetCustomEffects();                                                                             // [0x246f7d8] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Emotes
/// Size: 0x0010 (0x000028 - 0x000038)
class UNPCCharacterModifier_Emotes : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FCharacterModifierEmote>)           Emotes                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Inventory
/// Size: 0x0030 (0x000028 - 0x000058)
class UNPCCharacterModifier_Inventory : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCharacterModifierInventoryItem>)   Items                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTagContainer)                     SupportedItemTags                                           OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Movement
/// Size: 0x0010 (0x000028 - 0x000038)
class UNPCCharacterModifier_Movement : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     WalkSpeed                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     RunSpeed                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Acceleration                                                OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Deceleration                                                OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_PatrolPath
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_PatrolPath : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EFortCreativePatrolPathGroup)              PatrolPathGroup                                             OFFSET(get<T>, {0x28, 1, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier_PatrolPath.GetPatrolPathToAssign
	// class AFortAthenaPatrolPath* GetPatrolPathToAssign(class AActor* ModifierOwner);                                         // [0x246f7d8] Event|Public|BlueprintEvent 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Team
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_Team : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ETeamOption)                               TeamOption                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(uint32_t)                                  TeamIndex                                                   OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_UI
/// Size: 0x0010 (0x000028 - 0x000038)
class UNPCCharacterModifier_UI : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_VerseBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_VerseBehavior : public UNPCCharacterModifier_Behavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UNPCBehaviorScript*)                 NPCBehaviorScript                                           OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterType
/// Size: 0x0038 (0x000028 - 0x000060)
class UNPCCharacterType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTag)                              CharacterDefinitionTag                                      OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           SupportedModifiers                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           UnsupportedAdditionalModifiers                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           DefaultModifiers                                            OFFSET(get<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterType.IsPlayerCharacterRequired
	// bool IsPlayerCharacterRequired(ECharacterLook CharacterLook);                                                            // [0xaeb4080] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterType_Custom
/// Size: 0x0060 (0x000060 - 0x0000C0)
class UNPCCharacterType_Custom : public UNPCCharacterType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<UFortAIPawnCustomizationDefinition*>) DefaultCosmetics                                  OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AISpawnerData                                               OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PlayerSpawnerData                                           OFFSET(get<T>, {0xA0, 32, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterType_FromPreset
/// Size: 0x0060 (0x000060 - 0x0000C0)
class UNPCCharacterType_FromPreset : public UNPCCharacterType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   SelectedAI                                                  OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FCharacterTypePreset)                      SelectedPreset                                              OFFSET(getStruct<T>, {0x70, 64, 0, 0})
	CMember(TArray<FCharacterTypePreset>)              Presets                                                     OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterType_FromPreset.GetAvailableAIs
	// TArray<FString> GetAvailableAIs();                                                                                       // [0xaeb200c] Final|Native|Protected|Const 
	// Function /Script/VerseFortnite.NPCCharacterType_FromPreset.GetAIToSpawn
	// TWeakObjectPtr<UClass*> GetAIToSpawn();                                                                                  // [0xaeb1fc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.VerseFortniteActorWrapper
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseFortniteActorWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteActorWrapper.OnActorDestroyed
	// void OnActorDestroyed(class AActor* DestroyedActor);                                                                     // [0xaeb54e0] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseFortniteCharacter
/// Size: 0x0008 (0x000048 - 0x000050)
class UVerseFortniteCharacter : public UVerseFortniteActorWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteCharacter.HandlePossessedPawnChanged
	// void HandlePossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);                                             // [0xaeb3e90] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortniteCharacter.HandlePawnEliminated
	// void HandlePawnEliminated(class AFortPlayerPawnAthena* EliminatedPawn);                                                  // [0x739f924] Native|Protected     
};

/// Class /Script/VerseFortnite.TaggedObjectQueryWorldSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UTaggedObjectQueryWorldSubsystem : public UTaggedObjectQueryWorldSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/VerseFortnite.VerseFortnitePlayspace
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UVerseFortnitePlayspace : public UVerseFortniteActorWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<class UVerseFortnitePlayspaceExtensionBase*>) Extensions                                        OFFSET(get<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigameSetup
	// void OnMinigameSetup(class AFortMinigame* Minigame);                                                                     // [0xaeb591c] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigamePlayerAdded
	// void OnMinigamePlayerAdded(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);                                           // [0xaeb56c0] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseFortnitePlayspaceExtensionBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortnitePlayspaceExtensionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVerseFortniteSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<TWeakObjectPtr<AActor*>, UVerseFortniteActorWrapper*>) ActorToWrapperMap                          OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.VerseFortniteSubsystem.HandleMinigameStateChanged
	// void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                     // [0xaeb3bb4] Final|Native|Private 
};

/// Struct /Script/VerseFortnite.AIComponentSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FAIComponentSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UClass*)                             AIComponentClass                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UAIComponentData*)                   AIComponentData                                             OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseFortnite.CharacterPreviewMesh
/// Size: 0x0040 (0x000000 - 0x000040)
class FCharacterPreviewMesh : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            SkeletalMesh                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     MeshDescriptor                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/VerseFortnite.CharacterModifierEmote
/// Size: 0x0020 (0x000000 - 0x000020)
class FCharacterModifierEmote : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UAthenaDanceItemDefinition*>) EmoteDefinition                                           OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/VerseFortnite.CharacterModifierInventoryItem
/// Size: 0x0028 (0x000000 - 0x000028)
class FCharacterModifierInventoryItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ItemDefinition                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   ItemQuantity                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/VerseFortnite.DefaultCharacterCustomizationData
/// Size: 0x0050 (0x000000 - 0x000050)
class FDefaultCharacterCustomizationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UCustomCharacterPart*>)       CharacterParts                                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/VerseFortnite.CharacterTypePreset
/// Size: 0x0040 (0x000000 - 0x000040)
class FCharacterTypePreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SpawnerData                                                 OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AdditionalData                                              OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Enum /Script/VerseFortnite.ECharacterLook
/// Size: 0x03
enum class ECharacterLook : uint8_t
{
	ECharacterLook__FortniteCharacter                                                = 0,
	ECharacterLook__CharacterBlueprint                                               = 1,
	ECharacterLook__ECharacterLook_MAX                                               = 2
};

/// Enum /Script/VerseFortnite.ENPCCharacterMovement
/// Size: 0x04
enum class ENPCCharacterMovement : uint8_t
{
	ENPCCharacterMovement__Default                                                   = 0,
	ENPCCharacterMovement__RetargetFromFortniteCharacter                             = 1,
	ENPCCharacterMovement__AnimationPreset                                           = 2,
	ENPCCharacterMovement__ENPCCharacterMovement_MAX                                 = 3
};

/// Enum /Script/VerseFortnite.ETeamOption
/// Size: 0x04
enum class ETeamOption : uint8_t
{
	ETeamOption__Index                                                               = 0,
	ETeamOption__WildlifeAndCreature                                                 = 1,
	ETeamOption__Neutral                                                             = 2,
	ETeamOption__ETeamOption_MAX                                                     = 3
};

