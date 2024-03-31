
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/CraftingRuntime.CraftingObjectBGA
/// Size: 0x0068 (0x000980 - 0x0009E8)
class ACraftingObjectBGA : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2536;

public:
	CMember(class AFortInventory*)                     Inventory                                                   OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(class USphereComponent*)                   SphereComponent_InteractionRange                            OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MenuWidget                                                  OFFSET(get<T>, {0x9B0, 32, 0, 0})
	CMember(class UWidgetComponent*)                   WidgetComponent_PotContents                                 OFFSET(get<T>, {0x9D0, 8, 0, 0})
	DMember(bool)                                      bShowCraftingUI                                             OFFSET(get<bool>, {0x9D8, 1, 0, 0})
	DMember(bool)                                      bSendEventMessageOnLocalInteract                            OFFSET(get<bool>, {0x9D9, 1, 0, 0})
	DMember(bool)                                      bRunServerInteractionWhenSendingEventMessage                OFFSET(get<bool>, {0x9DA, 1, 0, 0})
	CMember(class UStaticMeshComponent*)               CraftingObjectMesh                                          OFFSET(get<T>, {0x9E0, 8, 0, 0})


	/// Functions
	// Function /Script/CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeEndOverlap
	// void HandleInteractionRangeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x91ff624] Native|Public        
	// Function /Script/CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeBeginOverlap
	// void HandleInteractionRangeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x91ff2a8] Native|Public|HasOutParms 
};

/// Class /Script/CraftingRuntime.CraftingCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UCraftingCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CraftingRuntime.CraftingCheatManager.ToggleFreeCrafting
	// void ToggleFreeCrafting();                                                                                               // [0x3518b8c] Final|Exec|Native|Public 
	// Function /Script/CraftingRuntime.CraftingCheatManager.StartSelfCrafting
	// void StartSelfCrafting(FName FormulaName);                                                                               // [0x8c99a24] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/CraftingRuntime.CraftingObjectComponent
/// Size: 0x0408 (0x0000A0 - 0x0004A8)
class UCraftingObjectComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	SMember(FMulticastInlineDelegate)                  CraftingObjectStateChanged                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFormulaCraftableChanged                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCraftingSuccess                                           OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FDelegateProperty)                         OnCraftingAdditionalValidationCheck                         OFFSET(getStruct<T>, {0xD0, 12, 0, 0})
	CMember(TArray<FCraftingObjectRepStateData>)       CraftingObjectRepStateData                                  OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TMap<FCraftingMultiKey, FCraftingObjectServerStateData>) CraftingObjectServerStateData                 OFFSET(get<T>, {0x108, 80, 0, 0})
	SMember(FName)                                     LastCraftedItemFormulaRow                                   OFFSET(getStruct<T>, {0x158, 4, 0, 0})
	SMember(FString)                                   LastIngredientStringForAnalytics                            OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   LastFormulaStringForAnalytics                               OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FString)                                   LastResultsStringForAnalytics                               OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                WhileCraftingAbilitySpecHandle                              OFFSET(getStruct<T>, {0x190, 4, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                OwnerCraftingAbilitySpecHandle                              OFFSET(getStruct<T>, {0x194, 4, 0, 0})
	SMember(FGameplayTag)                              CraftingObjectTag                                           OFFSET(getStruct<T>, {0x198, 4, 0, 0})
	SMember(FGameplayTagContainer)                     CraftingObjectTags                                          OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})
	SMember(FScalableFloat)                            CraftingTimeLength                                          OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            ReadyTimeLength                                             OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            OverCraftingTimeLength                                      OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            ResettingTimeLength                                         OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FName)                                     OverCraftingLootTierKey                                     OFFSET(getStruct<T>, {0x260, 4, 0, 0})
	DMember(bool)                                      bTakeItemsAtCraftingStart                                   OFFSET(get<bool>, {0x264, 1, 1, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0x268, 4, 0, 0})
	DMember(bool)                                      bGiveIngredientsToCraftingObject                            OFFSET(get<bool>, {0x26C, 1, 1, 0})
	DMember(bool)                                      bGiveIngredientsToInstigator                                OFFSET(get<bool>, {0x26C, 1, 1, 1})
	SMember(FVector)                                   IngredientSpawnOffset                                       OFFSET(getStruct<T>, {0x270, 24, 0, 0})
	DMember(bool)                                      bGiveToCraftingObject                                       OFFSET(get<bool>, {0x288, 1, 1, 0})
	DMember(bool)                                      bGiveResultToInstigator                                     OFFSET(get<bool>, {0x288, 1, 1, 1})
	CMember(TWeakObjectPtr<UClass*>)                   OwnerCraftingAbility                                        OFFSET(get<T>, {0x290, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WhileCraftingAbility                                        OFFSET(get<T>, {0x2B0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InstigatorWhileCraftingAbility                              OFFSET(get<T>, {0x2D0, 32, 0, 0})
	DMember(bool)                                      bScaleMultiCraftingTime                                     OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     CraftingFailedTags                                          OFFSET(getStruct<T>, {0x2F8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     IngredientsInventoryGroupTag                                OFFSET(getStruct<T>, {0x430, 32, 0, 0})
	DMember(bool)                                      FreeCraftingEnabled                                         OFFSET(get<bool>, {0x4A0, 1, 0, 0})


	/// Functions
	// Function /Script/CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData
	// void OnRep_CraftingObjectRepStateData(TArray<FCraftingObjectRepStateData>& OldValue);                                    // [0xb123300] Final|Native|Private|HasOutParms 
	// Function /Script/CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp
	// void HandlePickupCraftingItemPickedUp(class AFortPickup* Pickup, class AFortPawn* InteractingPawn);                      // [0xb1228fc] Final|Native|Private 
	// Function /Script/CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature
	// void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(FName& FormulaRowName, bool bIsCraftable);               // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnCraftingSuccess                                           OFFSET(getStruct<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerStartCrafting
	// void ServerStartCrafting(class AActor* CraftingObject, FName CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key); // [0xb124dec] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerResumeCrafting
	// void ServerResumeCrafting(class AActor* CraftingObject, FCraftingMultiKey Key);                                          // [0xb124c74] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess
	// void ServerReportCraftingSuccess(class AActor* CraftingObject, FCraftingMultiKey Key);                                   // [0xb124afc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting
	// void ServerPickupItemAndStartCrafting(class AActor* CraftingObject, class AFortPickup* Pickup, FName CraftingFormulaName, FCraftingMultiKey Key); // [0xb124880] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPauseCrafting
	// void ServerPauseCrafting(class AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key);                    // [0xb124688] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems
	// void ServerEjectItems(class AActor* CraftingObject);                                                                     // [0xb1245a4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults
	// void ServerClaimCraftingResults(class AActor* CraftingObject, FCraftingMultiKey Key);                                    // [0xb12442c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting
	// void ServerCancelCrafting(class AActor* CraftingObject, FCraftingMultiKey Key);                                          // [0xb1242b4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess
	// void NotifyCraftingSuccess(class AActor* CraftingObject, FName& FormulaRowName, TArray<FFortItemEntry>& ConsumedIngredients, FCraftingMultiKey Key); // [0xb122e68] Final|Native|Public|HasOutParms 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess
	// void ClientNotifyCraftingSuccess(class AActor* CraftingObject, FName FormulaRowName, TArray<FFortItemEntry> ConsumedIngredients, FCraftingMultiKey Key); // [0xb11fcd4] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed
	// void ClientNotifyCraftingFailed(class AActor* CraftingObject, FGameplayTagContainer FailedReason, FCraftingMultiKey Key); // [0xb11fae8] Net|Native|Event|Public|NetClient 
};

/// Class /Script/CraftingRuntime.FortGameStateComponent_Crafting
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UFortGameStateComponent_Crafting : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FDataRegistryType)                         CraftingFormulaRegistryType                                 OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FDataRegistryType)                         CraftingIngredientsUIDataRegistryType                       OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	CMember(TArray<FCraftingResult>)                   CraftingResultsList                                         OFFSET(get<T>, {0x1F0, 16, 0, 0})


	/// Functions
	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnRep_CraftingResultsList
	// void OnRep_CraftingResultsList();                                                                                        // [0xb12392c] Final|Native|Protected 
	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xb123148] RequiredAPI|Native|Protected|HasOutParms 
};

/// Class /Script/CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UItemDefinitionBase*)                LastPickupItemDef                                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class UItemDefinitionBase*)                LastFocusedItemDef                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FName)                                     LastTargetFormulaName                                       OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	DMember(float)                                     ContextualCraftingInteractDuration                          OFFSET(get<float>, {0xD4, 4, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             CachedInteractionType                                       OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(TEnumAsByte<EInteractionBeingAttempted>)   CachedInteractionBeingAttempted                             OFFSET(get<T>, {0xD9, 1, 0, 0})
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingComplete
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_CraftingComplete : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:


	/// Functions
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingComplete.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xb1230a0] Final|Native|Private|HasOutParms 
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingReady
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_CraftingReady : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:


	/// Functions
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingReady.HandleFormulaCraftableChanged
	// void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable);                                            // [0xb12262c] Final|Native|Private|HasOutParms 
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:


	/// Functions
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleInventoryTabChanged
	// void HandleInventoryTabChanged(FName InventoryTabNameId);                                                                // [0xb12283c] Final|Native|Private 
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleFormulaCraftableChanged
	// void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable);                                            // [0xb12273c] Final|Native|Private|HasOutParms 
};

/// Class /Script/CraftingRuntime.CraftingGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UCraftingGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CraftingRuntime.CraftingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCraftingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CraftingRuntime.CraftingLibrary.StartCrafting
	// void StartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FName& CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key); // [0xb125068] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ResumeCrafting
	// void ResumeCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key);       // [0xb1240b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ReportCraftingSuccess
	// void ReportCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key); // [0xb123ebc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.PickupItemAndStartCrafting
	// void PickupItemAndStartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class AFortPickup* Pickup, FName& CraftingFormulaName, FCraftingMultiKey Key); // [0xb123bc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.PauseCrafting
	// void PauseCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key); // [0xb123940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.IsValidIngredient
	// bool IsValidIngredient(class AFortPlayerController* FortPC, class AActor* CraftingObject, class UItemDefinitionBase* ItemDef); // [0xb122b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.IsFreeCraftingEnabled
	// bool IsFreeCraftingEnabled(class AActor* CraftingObject);                                                                // [0xb122a3c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GiveItemToCraftingObject
	// void GiveItemToCraftingObject(class AFortPlayerController* Instigator, class AActor* CraftingObject, FFortItemEntry& ItemEntryToGrant); // [0xb122358] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetValidIngredientsInInventory
	// void GetValidIngredientsInInventory(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<UFortWorldItem*>& OutIngredients); // [0xb121fb8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetUIDataForCraftingIngredientTags
	// void GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, FGameplayTagContainer& IngredientTags, TArray<TWeakObjectPtr<UItemDefinitionBase*>>& OutItemDefs, TArray<TWeakObjectPtr<UObject*>>& OutIcons); // [0xb121d84] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetTimeToCraftRecipe
	// float GetTimeToCraftRecipe(class AActor* CraftingObject, FName& CraftingFormulaName);                                    // [0xb121c78] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetLastCraftedItemFormulaName
	// FName GetLastCraftedItemFormulaName(class AActor* CraftingObject);                                                       // [0xb121ba4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetKnownCraftingFormulas
	// void GetKnownCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xb121968] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetIngredientsInCraftingObject
	// TArray<UFortWorldItem*> GetIngredientsInCraftingObject(class AActor* CraftingObject);                                    // [0xb12183c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingResultsForRowName
	// void GetCraftingResultsForRowName(class UObject* WorldContextObject, FName& CraftingFormulaRow, TArray<FItemAndCount>& OutResults, int32_t NumToCraft); // [0xb1215dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectTags
	// FGameplayTagContainer GetCraftingObjectTags(class AActor* CraftingObject);                                               // [0xb121504] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectPausedTime
	// float GetCraftingObjectPausedTime(class AActor* CraftingObject, FCraftingMultiKey Key);                                  // [0xb1213a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateTimeLeft
	// float GetCraftingObjectCurrentCraftingStateTimeLeft(class AActor* CraftingObject, FCraftingMultiKey Key);                // [0xb12123c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateStartTime
	// float GetCraftingObjectCurrentCraftingStateStartTime(class AActor* CraftingObject, FCraftingMultiKey Key);               // [0xb1210fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateEndTime
	// float GetCraftingObjectCurrentCraftingStateEndTime(class AActor* CraftingObject, FCraftingMultiKey Key);                 // [0xb120f98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCraftingState
	// ECraftingObjectState GetCraftingObjectCraftingState(class AActor* CraftingObject, FCraftingMultiKey Key);                // [0xb120e58] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectComponent
	// class UCraftingObjectComponent* GetCraftingObjectComponent(class AActor* CraftingObject);                                // [0xb120d8c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingIngredients_TempItems
	// TArray<UFortWorldItem*> GetCraftingIngredients_TempItems(class AActor* CraftingObject, FCraftingMultiKey Key);           // [0xb120c18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulasForCraftingObject
	// void GetCraftingFormulasForCraftingObject(class AActor* CraftingObject, TArray<FName>& OutFormulas);                     // [0xb120ab4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulaNameBeingCrafted
	// FName GetCraftingFormulaNameBeingCrafted(class AActor* CraftingObject, FCraftingMultiKey Key);                           // [0xb12096c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulaIngredientRequirements
	// bool GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, FName& CraftingFormulaRow, TArray<FCraftingIngredientRequirement>& OutIngredientRequirements); // [0xb1207e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftedResults_TempItems
	// TArray<UFortWorldItem*> GetCraftedResults_TempItems(class AActor* CraftingObject, FCraftingMultiKey Key);                // [0xb120670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllValidIngredients
	// void GetAllValidIngredients(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FGameplayTagContainer>& OutIngredients); // [0xb120454] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllCraftingFormulas
	// void GetAllCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xb120274] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllCraftableFormulas
	// void GetAllCraftableFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xb1200a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.EjectItems
	// void EjectItems(class AFortPlayerController* Instigator, class AActor* CraftingObject);                                  // [0xb11ff20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ClaimCraftingResults
	// void ClaimCraftingResults(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key); // [0xb11f8ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CanCraftFormulaWithAdditionalItems
	// bool CanCraftFormulaWithAdditionalItems(class AFortPlayerController* FortPC, class AActor* CraftingObject, FName CraftingFormulaRow, TArray<FItemAndCount>& AdditionalItems, TArray<FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft, FGameplayTagContainer& InInventoryGroups); // [0xb11f304] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CanCraftFormula
	// bool CanCraftFormula(class AFortPlayerController* FortPC, class AActor* CraftingObject, FName CraftingFormulaRow, TArray<FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft, FGameplayTagContainer& InInventoryGroups); // [0xb11efa4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CancelCrafting
	// void CancelCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key);       // [0xb11f6f4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CancelAllCrafting
	// void CancelAllCrafting(class AActor* CraftingObject);                                                                    // [0x63b1a60] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/CraftingRuntime.CraftingObjectSuccessEvent
/// Size: 0x0030 (0x000000 - 0x000030)
class FCraftingObjectSuccessEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class AActor*)                             CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCraftingMultiKey)                         Key                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(class AFortPlayerController*)              Instigator                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     FormulaRowName                                              OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	CMember(TArray<FFortItemEntry>)                    ConsumedIngredients                                         OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingMultiKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FCraftingMultiKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Key                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingObjectStateChangedEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FCraftingObjectStateChangedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class AActor*)                             CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCraftingMultiKey)                         Key                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(class AFortPlayerController*)              Instigator                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(ECraftingObjectState)                      CraftingState                                               OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(float)                                     CraftingStateStartTime                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     CraftingStateDuration                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingObjectRepStateData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCraftingObjectRepStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FCraftingMultiKey)                         Key                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(ECraftingObjectState)                      CraftingObjectState                                         OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     StateChangeServerTime                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PausedCraftingTime                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FName)                                     CraftingFormulaRow                                          OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumToCraft                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    CraftingInstigator                                          OFFSET(get<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingObjectServerStateData
/// Size: 0x01F8 (0x000000 - 0x0001F8)
class FCraftingObjectServerStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	DMember(bool)                                      bNextResultsHandledExternally                               OFFSET(get<bool>, {0x0, 1, 1, 0})
	CMember(class AFortPickup*)                        PendingPickupCraftingItem                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     PendingPickupCraftingFormula                                OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FFortItemEntry)                            PendingPickupCraftingItemEntry                              OFFSET(getStruct<T>, {0x18, 416, 0, 0})
	DMember(int32_t)                                   PendingPickupHeldCount                                      OFFSET(get<int32_t>, {0x1B8, 4, 0, 0})
	CMember(TArray<FFortItemEntry>)                    AllOfTheIngredientItems                                     OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TArray<int32_t>)                           NonConsumedIngredientItemIndices                            OFFSET(get<T>, {0x1D0, 16, 0, 0})
	CMember(TArray<FItemAndCount>)                     CraftingResults                                             OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                InstigatorWhileCraftingAbilitySpecHandle                    OFFSET(getStruct<T>, {0x1F0, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingIngredientRequirement
/// Size: 0x0028 (0x000000 - 0x000028)
class FCraftingIngredientRequirement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     IngredientTags                                              OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingUpgradeRule
/// Size: 0x0118 (0x000000 - 0x000118)
class FCraftingUpgradeRule : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FGameplayTagRequirements)                  SourceItemTags                                              OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  TargetItemTags                                              OFFSET(getStruct<T>, {0x88, 136, 0, 0})
	DMember(char)                                      UpgradeFlags                                                OFFSET(get<char>, {0x110, 1, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingFormula
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FCraftingFormula : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 1, 0})
	DMember(bool)                                      bAlwaysKnownFormula                                         OFFSET(get<bool>, {0x20, 1, 1, 1})
	DMember(bool)                                      bInstantlyConsumeIngredients                                OFFSET(get<bool>, {0x20, 1, 1, 2})
	DMember(int32_t)                                   SortingPriority                                             OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FGameplayTag)                              SourceObjectTag                                             OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AttributeTags                                               OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	CMember(TArray<FCraftingIngredientRequirement>)    RequiredIngredients                                         OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FName)                                     ResultLootTierKey                                           OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WhileCraftingAbility                                        OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TArray<FCraftingUpgradeRule>)              UpgradeRules                                                OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(float)                                     OverrideCraftingTime                                        OFFSET(get<float>, {0x98, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InstigatorWhileCraftingAbility                              OFFSET(get<T>, {0xA0, 32, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingResult
/// Size: 0x0018 (0x000000 - 0x000018)
class FCraftingResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ResultLootTierKey                                           OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FItemAndCount>)                     Results                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingIngredientUIData
/// Size: 0x0040 (0x000008 - 0x000048)
class FCraftingIngredientUIData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     IngredientTags                                              OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr<UItemDefinitionBase*>>) ItemDefs                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UObject*>>)          Icons                                                       OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingIngredientQueryState
/// Size: 0x0030 (0x000000 - 0x000030)
class FCraftingIngredientQueryState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FCraftingIngredientRequirement)            Requirement                                                 OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	DMember(int32_t)                                   Owned                                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Missing                                                     OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FCraftingMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class AActor*)                             CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/CraftingRuntime.ECraftingObjectState
/// Size: 0x10
enum class ECraftingObjectState : uint8_t
{
	ECraftingObjectState__Invalid                                                    = 0,
	ECraftingObjectState__Idle                                                       = 1,
	ECraftingObjectState__Crafting                                                   = 2,
	ECraftingObjectState__CraftingPaused                                             = 3,
	ECraftingObjectState__CraftingPausedDecaying                                     = 4,
	ECraftingObjectState__Ready                                                      = 5,
	ECraftingObjectState__OverCrafting                                               = 6,
	ECraftingObjectState__Resetting                                                  = 7,
	ECraftingObjectState__TotalStates                                                = 8,
	ECraftingObjectState__ECraftingObjectState_MAX                                   = 9
};

/// Enum /Script/CraftingRuntime.ECraftingIngredientReqError
/// Size: 0x04
enum class ECraftingIngredientReqError : uint8_t
{
	ECraftingIngredientReqError__None                                                = 0,
	ECraftingIngredientReqError__NoItem                                              = 1,
	ECraftingIngredientReqError__NotEnough                                           = 2,
	ECraftingIngredientReqError__ECraftingIngredientReqError_MAX                     = 3
};

