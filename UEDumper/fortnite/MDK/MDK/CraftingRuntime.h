
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
	CMember(class UStaticMeshComponent*)               CraftingObjectMesh                                          OFFSET(get<T>, {0x9E0, 8, 0, 0})


	/// Functions
	// Function /Script/CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeEndOverlap
	// void HandleInteractionRangeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xa3cfe20] Final|Native|Private 
	// Function /Script/CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeBeginOverlap
	// void HandleInteractionRangeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xa3cfbd8] Final|Native|Private|HasOutParms 
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
	// void ToggleFreeCrafting();                                                                                               // [0x36203b0] Final|Exec|Native|Public 
	// Function /Script/CraftingRuntime.CraftingCheatManager.StartSelfCrafting
	// void StartSelfCrafting(FName FormulaName);                                                                               // [0x86efbbc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/CraftingRuntime.CraftingObjectComponent
/// Size: 0x03D0 (0x0000A0 - 0x000470)
class UCraftingObjectComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FMulticastInlineDelegate)                  CraftingObjectStateChanged                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFormulaCraftableChanged                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCraftingSuccess                                           OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FDelegateProperty)                         OnCraftingAdditionalValidationCheck                         OFFSET(getStruct<T>, {0xD0, 12, 0, 0})
	CMember(TArray<FCraftingObjectRepStateData>)       CraftingObjectRepStateData                                  OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TMap<FCraftingMultiKey, FCraftingObjectServerStateData>) CraftingObjectServerStateData                 OFFSET(get<T>, {0xF0, 80, 0, 0})
	SMember(FName)                                     LastCraftedItemFormulaRow                                   OFFSET(getStruct<T>, {0x140, 4, 0, 0})
	SMember(FString)                                   LastIngredientStringForAnalytics                            OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FString)                                   LastFormulaStringForAnalytics                               OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FString)                                   LastResultsStringForAnalytics                               OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                WhileCraftingAbilitySpecHandle                              OFFSET(getStruct<T>, {0x178, 4, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                OwnerCraftingAbilitySpecHandle                              OFFSET(getStruct<T>, {0x17C, 4, 0, 0})
	SMember(FGameplayTag)                              CraftingObjectTag                                           OFFSET(getStruct<T>, {0x180, 4, 0, 0})
	SMember(FGameplayTagContainer)                     CraftingObjectTags                                          OFFSET(getStruct<T>, {0x188, 32, 0, 0})
	SMember(FScalableFloat)                            CraftingTimeLength                                          OFFSET(getStruct<T>, {0x1A8, 40, 0, 0})
	SMember(FScalableFloat)                            ReadyTimeLength                                             OFFSET(getStruct<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            OverCraftingTimeLength                                      OFFSET(getStruct<T>, {0x1F8, 40, 0, 0})
	SMember(FScalableFloat)                            ResettingTimeLength                                         OFFSET(getStruct<T>, {0x220, 40, 0, 0})
	SMember(FName)                                     OverCraftingLootTierKey                                     OFFSET(getStruct<T>, {0x248, 4, 0, 0})
	DMember(bool)                                      bTakeItemsAtCraftingStart                                   OFFSET(get<bool>, {0x24C, 1, 1, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(bool)                                      bGiveIngredientsToCraftingObject                            OFFSET(get<bool>, {0x254, 1, 1, 0})
	DMember(bool)                                      bGiveIngredientsToInstigator                                OFFSET(get<bool>, {0x254, 1, 1, 1})
	SMember(FVector)                                   IngredientSpawnOffset                                       OFFSET(getStruct<T>, {0x258, 24, 0, 0})
	DMember(bool)                                      bGiveToCraftingObject                                       OFFSET(get<bool>, {0x270, 1, 1, 0})
	DMember(bool)                                      bGiveResultToInstigator                                     OFFSET(get<bool>, {0x270, 1, 1, 1})
	CMember(TWeakObjectPtr<UClass*>)                   OwnerCraftingAbility                                        OFFSET(get<T>, {0x278, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WhileCraftingAbility                                        OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InstigatorWhileCraftingAbility                              OFFSET(get<T>, {0x2B8, 32, 0, 0})
	DMember(bool)                                      bScaleMultiCraftingTime                                     OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     CraftingFailedTags                                          OFFSET(getStruct<T>, {0x2E0, 32, 0, 0})
	DMember(bool)                                      FreeCraftingEnabled                                         OFFSET(get<bool>, {0x468, 1, 0, 0})


	/// Functions
	// Function /Script/CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData
	// void OnRep_CraftingObjectRepStateData(TArray<FCraftingObjectRepStateData>& OldValue);                                    // [0xa3d0a44] Final|Native|Private|HasOutParms 
	// Function /Script/CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp
	// void HandlePickupCraftingItemPickedUp(class AFortPickup* Pickup, class AFortPawn* InteractingPawn, class UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation); // [0xa3cffdc] Final|Native|Private|HasDefaults 
	// Function /Script/CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature
	// void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(FName& FormulaRowName, bool bIsCraftable);               // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
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
	// void ServerStartCrafting(class AActor* CraftingObject, FName CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key); // [0xa3d1f2c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerResumeCrafting
	// void ServerResumeCrafting(class AActor* CraftingObject, FCraftingMultiKey Key);                                          // [0xa3d1d94] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess
	// void ServerReportCraftingSuccess(class AActor* CraftingObject, FCraftingMultiKey Key);                                   // [0xa3d1bfc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting
	// void ServerPickupItemAndStartCrafting(class AActor* CraftingObject, class AFortPickup* Pickup, FName CraftingFormulaName, FCraftingMultiKey Key); // [0xa3d19e8] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPauseCrafting
	// void ServerPauseCrafting(class AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key);                    // [0xa3d1810] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems
	// void ServerEjectItems(class AActor* CraftingObject);                                                                     // [0xa3d1770] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults
	// void ServerClaimCraftingResults(class AActor* CraftingObject, FCraftingMultiKey Key);                                    // [0xa3d15d8] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting
	// void ServerCancelCrafting(class AActor* CraftingObject, FCraftingMultiKey Key);                                          // [0xa3d1440] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess
	// void NotifyCraftingSuccess(class AActor* CraftingObject, FName& FormulaRowName, TArray<FFortItemEntry>& ConsumedIngredients, FCraftingMultiKey Key); // [0xa3d0664] Final|Native|Public|HasOutParms 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess
	// void ClientNotifyCraftingSuccess(class AActor* CraftingObject, FName FormulaRowName, TArray<FFortItemEntry> ConsumedIngredients, FCraftingMultiKey Key); // [0xa3cd014] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed
	// void ClientNotifyCraftingFailed(class AActor* CraftingObject, FGameplayTagContainer FailedReason, FCraftingMultiKey Key); // [0xa3ccdb0] Net|Native|Event|Public|NetClient 
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
	// void OnRep_CraftingResultsList();                                                                                        // [0xa3d0bb0] Final|Native|Protected 
	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xa3d0910] RequiredAPI|Native|Protected|HasOutParms 
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
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                              // [0xa3d0868] Final|Native|Private|HasOutParms 
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
	// void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable);                                            // [0xa3cf9c8] Final|Native|Private|HasOutParms 
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
	// void HandleInventoryTabChanged(FName InventoryTabNameId);                                                                // [0xa3cff5c] Final|Native|Private 
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleFormulaCraftableChanged
	// void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable);                                            // [0xa3cfad8] Final|Native|Private|HasOutParms 
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
	// void StartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FName& CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key); // [0xa3d2140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ResumeCrafting
	// void ResumeCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key);       // [0xa3d1264] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ReportCraftingSuccess
	// void ReportCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key); // [0xa3d1088] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.PickupItemAndStartCrafting
	// void PickupItemAndStartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class AFortPickup* Pickup, FName& CraftingFormulaName, FCraftingMultiKey Key); // [0xa3d0df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.PauseCrafting
	// void PauseCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key); // [0xa3d0bc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.IsValidIngredient
	// bool IsValidIngredient(class AFortPlayerController* FortPC, class AActor* CraftingObject, class UItemDefinitionBase* ItemDef); // [0xa3d0238] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.IsFreeCraftingEnabled
	// bool IsFreeCraftingEnabled(class AActor* CraftingObject);                                                                // [0xa3d01a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GiveItemToCraftingObject
	// void GiveItemToCraftingObject(class AFortPlayerController* Instigator, class AActor* CraftingObject, FFortItemEntry& ItemEntryToGrant); // [0xa3cf778] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetValidIngredientsInInventory
	// void GetValidIngredientsInInventory(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<UFortWorldItem*>& OutIngredients); // [0xa3cf2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetUIDataForCraftingIngredientTags
	// void GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, FGameplayTagContainer& IngredientTags, TArray<TWeakObjectPtr<UItemDefinitionBase*>>& OutItemDefs, TArray<TWeakObjectPtr<UObject*>>& OutIcons); // [0xa3cf0a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetTimeToCraftRecipe
	// float GetTimeToCraftRecipe(class AActor* CraftingObject, FName& CraftingFormulaName);                                    // [0xa3cefd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetLastCraftedItemFormulaName
	// FName GetLastCraftedItemFormulaName(class AActor* CraftingObject);                                                       // [0xa3cef44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetKnownCraftingFormulas
	// void GetKnownCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xa3cec24] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetIngredientsInCraftingObject
	// TArray<UFortWorldItem*> GetIngredientsInCraftingObject(class AActor* CraftingObject);                                    // [0xa3ceb38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingResultsForRowName
	// void GetCraftingResultsForRowName(class UObject* WorldContextObject, FName& CraftingFormulaRow, TArray<FItemAndCount>& OutResults, int32_t NumToCraft); // [0xa3ce904] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectTags
	// FGameplayTagContainer GetCraftingObjectTags(class AActor* CraftingObject);                                               // [0xa3ce86c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectPausedTime
	// float GetCraftingObjectPausedTime(class AActor* CraftingObject, FCraftingMultiKey Key);                                  // [0xa3ce6e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateTimeLeft
	// float GetCraftingObjectCurrentCraftingStateTimeLeft(class AActor* CraftingObject, FCraftingMultiKey Key);                // [0xa3ce55c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateStartTime
	// float GetCraftingObjectCurrentCraftingStateStartTime(class AActor* CraftingObject, FCraftingMultiKey Key);               // [0xa3ce3d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateEndTime
	// float GetCraftingObjectCurrentCraftingStateEndTime(class AActor* CraftingObject, FCraftingMultiKey Key);                 // [0xa3ce24c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCraftingState
	// ECraftingObjectState GetCraftingObjectCraftingState(class AActor* CraftingObject, FCraftingMultiKey Key);                // [0xa3ce0d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectComponent
	// class UCraftingObjectComponent* GetCraftingObjectComponent(class AActor* CraftingObject);                                // [0xa3ce04c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingIngredients_TempItems
	// TArray<UFortWorldItem*> GetCraftingIngredients_TempItems(class AActor* CraftingObject, FCraftingMultiKey Key);           // [0xa3cdec4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulaNameBeingCrafted
	// FName GetCraftingFormulaNameBeingCrafted(class AActor* CraftingObject, FCraftingMultiKey Key);                           // [0xa3cdd58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulaIngredientRequirements
	// bool GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, FName& CraftingFormulaRow, TArray<FCraftingIngredientRequirement>& OutIngredientRequirements); // [0xa3cdc04] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftedResults_TempItems
	// TArray<UFortWorldItem*> GetCraftedResults_TempItems(class AActor* CraftingObject, FCraftingMultiKey Key);                // [0xa3cda7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllValidIngredients
	// void GetAllValidIngredients(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FGameplayTagContainer>& OutIngredients); // [0xa3cd738] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllCraftingFormulas
	// void GetAllCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xa3cd418] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllCraftableFormulas
	// void GetAllCraftableFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xa3cd300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.EjectItems
	// void EjectItems(class AFortPlayerController* Instigator, class AActor* CraftingObject);                                  // [0xa3cd204] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ClaimCraftingResults
	// void ClaimCraftingResults(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key); // [0xa3ccbd4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CanCraftFormulaWithAdditionalItems
	// bool CanCraftFormulaWithAdditionalItems(class AFortPlayerController* FortPC, class AActor* CraftingObject, FName CraftingFormulaRow, TArray<FItemAndCount>& AdditionalItems, TArray<FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft); // [0xa3cc744] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CanCraftFormula
	// bool CanCraftFormula(class AFortPlayerController* FortPC, class AActor* CraftingObject, FName CraftingFormulaRow, TArray<FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft); // [0xa3cc51c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CancelCrafting
	// void CancelCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key);       // [0xa3cc9fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CancelAllCrafting
	// void CancelAllCrafting(class AActor* CraftingObject);                                                                    // [0x6414600] Final|Native|Static|Public|BlueprintCallable 
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

