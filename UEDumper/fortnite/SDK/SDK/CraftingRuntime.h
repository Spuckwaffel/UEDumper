
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Class /Script/CraftingRuntime.CraftingObjectBGA
/// Size: 0x0068 (0x000980 - 0x0009E8)
class ACraftingObjectBGA : public ABuildingGameplayActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0980   (0x0008)  MISSED
	class AFortInventory*                              Inventory;                                                  // 0x0988   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0990   (0x0018)  MISSED
	class USphereComponent*                            SphereComponent_InteractionRange;                           // 0x09A8   (0x0008)  
	SDK_UNDEFINED(32,11902) /* TWeakObjectPtr<UClass*> */ __um(MenuWidget);                                        // 0x09B0   (0x0020)  
	class UWidgetComponent*                            WidgetComponent_PotContents;                                // 0x09D0   (0x0008)  
	bool                                               bShowCraftingUI;                                            // 0x09D8   (0x0001)  
	bool                                               bSendEventMessageOnLocalInteract;                           // 0x09D9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x09DA   (0x0006)  MISSED
	class UStaticMeshComponent*                        CraftingObjectMesh;                                         // 0x09E0   (0x0008)  


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
public:


	/// Functions
	// Function /Script/CraftingRuntime.CraftingCheatManager.ToggleFreeCrafting
	// void ToggleFreeCrafting();                                                                                            // [0x36203b0] Final|Exec|Native|Public 
	// Function /Script/CraftingRuntime.CraftingCheatManager.StartSelfCrafting
	// void StartSelfCrafting(FName FormulaName);                                                                            // [0x86efbbc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Struct /Script/CraftingRuntime.CraftingMultiKey
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCraftingMultiKey
{ 
	int64_t                                            Key;                                                        // 0x0000   (0x0008)  
};

/// Struct /Script/CraftingRuntime.CraftingObjectRepStateData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCraftingObjectRepStateData
{ 
	FCraftingMultiKey                                  Key;                                                        // 0x0000   (0x0008)  
	ECraftingObjectState                               CraftingObjectState;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              StateChangeServerTime;                                      // 0x000C   (0x0004)  
	float                                              PausedCraftingTime;                                         // 0x0010   (0x0004)  
	FName                                              CraftingFormulaRow;                                         // 0x0014   (0x0004)  
	int32_t                                            NumToCraft;                                                 // 0x0018   (0x0004)  
	SDK_UNDEFINED(8,11903) /* TWeakObjectPtr<AFortPlayerController*> */ __um(CraftingInstigator);                  // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/CraftingRuntime.CraftingObjectComponent
/// Size: 0x03D0 (0x0000A0 - 0x000470)
class UCraftingObjectComponent : public UGameFrameworkComponent
{ 
public:
	SDK_UNDEFINED(16,11904) /* FMulticastInlineDelegate */ __um(CraftingObjectStateChanged);                       // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,11905) /* FMulticastInlineDelegate */ __um(OnFormulaCraftableChanged);                        // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,11906) /* FMulticastInlineDelegate */ __um(OnCraftingSuccess);                                // 0x00C0   (0x0010)  
	SDK_UNDEFINED(12,11907) /* FDelegateProperty */    __um(OnCraftingAdditionalValidationCheck);                  // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FCraftingObjectRepStateData>                CraftingObjectRepStateData;                                 // 0x00E0   (0x0010)  
	SDK_UNDEFINED(80,11908) /* TMap<FCraftingMultiKey, FCraftingObjectServerStateData> */ __um(CraftingObjectServerStateData); // 0x00F0   (0x0050)  
	FName                                              LastCraftedItemFormulaRow;                                  // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0144   (0x0004)  MISSED
	SDK_UNDEFINED(16,11909) /* FString */              __um(LastIngredientStringForAnalytics);                     // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,11910) /* FString */              __um(LastFormulaStringForAnalytics);                        // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,11911) /* FString */              __um(LastResultsStringForAnalytics);                        // 0x0168   (0x0010)  
	FGameplayAbilitySpecHandle                         WhileCraftingAbilitySpecHandle;                             // 0x0178   (0x0004)  
	FGameplayAbilitySpecHandle                         OwnerCraftingAbilitySpecHandle;                             // 0x017C   (0x0004)  
	FGameplayTag                                       CraftingObjectTag;                                          // 0x0180   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FGameplayTagContainer                              CraftingObjectTags;                                         // 0x0188   (0x0020)  
	FScalableFloat                                     CraftingTimeLength;                                         // 0x01A8   (0x0028)  
	FScalableFloat                                     ReadyTimeLength;                                            // 0x01D0   (0x0028)  
	FScalableFloat                                     OverCraftingTimeLength;                                     // 0x01F8   (0x0028)  
	FScalableFloat                                     ResettingTimeLength;                                        // 0x0220   (0x0028)  
	FName                                              OverCraftingLootTierKey;                                    // 0x0248   (0x0004)  
	bool                                               bTakeItemsAtCraftingStart : 1;                              // 0x024C:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x024D   (0x0003)  MISSED
	float                                              DecayRate;                                                  // 0x0250   (0x0004)  
	bool                                               bGiveIngredientsToCraftingObject : 1;                       // 0x0254:0 (0x0001)  
	bool                                               bGiveIngredientsToInstigator : 1;                           // 0x0254:1 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0255   (0x0003)  MISSED
	FVector                                            IngredientSpawnOffset;                                      // 0x0258   (0x0018)  
	bool                                               bGiveToCraftingObject : 1;                                  // 0x0270:0 (0x0001)  
	bool                                               bGiveResultToInstigator : 1;                                // 0x0270:1 (0x0001)  
	unsigned char                                      UnknownData05_4[0x7];                                       // 0x0271   (0x0007)  MISSED
	SDK_UNDEFINED(32,11912) /* TWeakObjectPtr<UClass*> */ __um(OwnerCraftingAbility);                              // 0x0278   (0x0020)  
	SDK_UNDEFINED(32,11913) /* TWeakObjectPtr<UClass*> */ __um(WhileCraftingAbility);                              // 0x0298   (0x0020)  
	SDK_UNDEFINED(32,11914) /* TWeakObjectPtr<UClass*> */ __um(InstigatorWhileCraftingAbility);                    // 0x02B8   (0x0020)  
	bool                                               bScaleMultiCraftingTime;                                    // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x02D9   (0x0007)  MISSED
	FGameplayTagContainer                              CraftingFailedTags;                                         // 0x02E0   (0x0020)  
	unsigned char                                      UnknownData07_5[0x168];                                     // 0x0300   (0x0168)  MISSED
	bool                                               FreeCraftingEnabled;                                        // 0x0468   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x0469   (0x0007)  MISSED


	/// Functions
	// Function /Script/CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData
	// void OnRep_CraftingObjectRepStateData(TArray<FCraftingObjectRepStateData>& OldValue);                                 // [0xa3d0a44] Final|Native|Private|HasOutParms 
	// Function /Script/CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp
	// void HandlePickupCraftingItemPickedUp(class AFortPickup* Pickup, class AFortPawn* InteractingPawn, class UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation); // [0xa3cffdc] Final|Native|Private|HasDefaults 
	// Function /Script/CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature
	// void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(FName& FormulaRowName, bool bIsCraftable);            // [0x18a39e4] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{ 
public:
	SDK_UNDEFINED(16,11915) /* FMulticastInlineDelegate */ __um(OnCraftingSuccess);                                // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerStartCrafting
	// void ServerStartCrafting(class AActor* CraftingObject, FName CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key); // [0xa3d1f2c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerResumeCrafting
	// void ServerResumeCrafting(class AActor* CraftingObject, FCraftingMultiKey Key);                                       // [0xa3d1d94] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess
	// void ServerReportCraftingSuccess(class AActor* CraftingObject, FCraftingMultiKey Key);                                // [0xa3d1bfc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting
	// void ServerPickupItemAndStartCrafting(class AActor* CraftingObject, class AFortPickup* Pickup, FName CraftingFormulaName, FCraftingMultiKey Key); // [0xa3d19e8] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPauseCrafting
	// void ServerPauseCrafting(class AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key);                 // [0xa3d1810] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems
	// void ServerEjectItems(class AActor* CraftingObject);                                                                  // [0xa3d1770] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults
	// void ServerClaimCraftingResults(class AActor* CraftingObject, FCraftingMultiKey Key);                                 // [0xa3d15d8] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting
	// void ServerCancelCrafting(class AActor* CraftingObject, FCraftingMultiKey Key);                                       // [0xa3d1440] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess
	// void NotifyCraftingSuccess(class AActor* CraftingObject, FName& FormulaRowName, TArray<FFortItemEntry>& ConsumedIngredients, FCraftingMultiKey Key); // [0xa3d0664] Final|Native|Public|HasOutParms 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess
	// void ClientNotifyCraftingSuccess(class AActor* CraftingObject, FName FormulaRowName, TArray<FFortItemEntry> ConsumedIngredients, FCraftingMultiKey Key); // [0xa3cd014] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed
	// void ClientNotifyCraftingFailed(class AActor* CraftingObject, FGameplayTagContainer FailedReason, FCraftingMultiKey Key); // [0xa3ccdb0] Net|Native|Event|Public|NetClient 
};

/// Struct /Script/CraftingRuntime.CraftingResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCraftingResult
{ 
	FName                                              ResultLootTierKey;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FItemAndCount>                              Results;                                                    // 0x0008   (0x0010)  
};

/// Class /Script/CraftingRuntime.FortGameStateComponent_Crafting
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UFortGameStateComponent_Crafting : public UFortGameStateComponent
{ 
public:
	FDataRegistryType                                  CraftingFormulaRegistryType;                                // 0x00A0   (0x0004)  
	FDataRegistryType                                  CraftingIngredientsUIDataRegistryType;                      // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x148];                                     // 0x00A8   (0x0148)  MISSED
	TArray<FCraftingResult>                            CraftingResultsList;                                        // 0x01F0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0200   (0x0050)  MISSED


	/// Functions
	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnRep_CraftingResultsList
	// void OnRep_CraftingResultsList();                                                                                     // [0xa3d0bb0] Final|Native|Protected 
	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady
	// void OnPlaylistDataReady(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xa3d0910] RequiredAPI|Native|Protected|HasOutParms 
};

/// Class /Script/CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent
{ 
public:
	class UItemDefinitionBase*                         LastPickupItemDef;                                          // 0x00C0   (0x0008)  
	class UItemDefinitionBase*                         LastFocusedItemDef;                                         // 0x00C8   (0x0008)  
	FName                                              LastTargetFormulaName;                                      // 0x00D0   (0x0004)  
	float                                              ContextualCraftingInteractDuration;                         // 0x00D4   (0x0004)  
	SDK_UNDEFINED(1,11916) /* TEnumAsByte<TInteractionType> */ __um(CachedInteractionType);                        // 0x00D8   (0x0001)  
	SDK_UNDEFINED(1,11917) /* TEnumAsByte<EInteractionBeingAttempted> */ __um(CachedInteractionBeingAttempted);    // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00DA   (0x0006)  MISSED
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingComplete
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_CraftingComplete : public UFortContextualTutorial
{ 
public:


	/// Functions
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingComplete.OnCraftingSuccess
	// void OnCraftingSuccess(FCraftingObjectSuccessEvent& Event);                                                           // [0xa3d0868] Final|Native|Private|HasOutParms 
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingReady
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_CraftingReady : public UFortContextualTutorial
{ 
public:


	/// Functions
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingReady.HandleFormulaCraftableChanged
	// void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable);                                         // [0xa3cf9c8] Final|Native|Private|HasOutParms 
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleInventoryTabChanged
	// void HandleInventoryTabChanged(FName InventoryTabNameId);                                                             // [0xa3cff5c] Final|Native|Private 
	// Function /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleFormulaCraftableChanged
	// void HandleFormulaCraftableChanged(FName& FormulaRowName, bool bIsCraftable);                                         // [0xa3cfad8] Final|Native|Private|HasOutParms 
};

/// Class /Script/CraftingRuntime.CraftingGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UCraftingGlobals : public UObject
{ 
public:
};

/// Class /Script/CraftingRuntime.CraftingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCraftingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CraftingRuntime.CraftingLibrary.StartCrafting
	// void StartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FName& CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key); // [0xa3d2140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ResumeCrafting
	// void ResumeCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key);    // [0xa3d1264] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ReportCraftingSuccess
	// void ReportCraftingSuccess(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key); // [0xa3d1088] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.PickupItemAndStartCrafting
	// void PickupItemAndStartCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, class AFortPickup* Pickup, FName& CraftingFormulaName, FCraftingMultiKey Key); // [0xa3d0df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.PauseCrafting
	// void PauseCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key); // [0xa3d0bc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.IsValidIngredient
	// bool IsValidIngredient(class AFortPlayerController* FortPC, class AActor* CraftingObject, class UItemDefinitionBase* ItemDef); // [0xa3d0238] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.IsFreeCraftingEnabled
	// bool IsFreeCraftingEnabled(class AActor* CraftingObject);                                                             // [0xa3d01a8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GiveItemToCraftingObject
	// void GiveItemToCraftingObject(class AFortPlayerController* Instigator, class AActor* CraftingObject, FFortItemEntry& ItemEntryToGrant); // [0xa3cf778] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetValidIngredientsInInventory
	// void GetValidIngredientsInInventory(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<UFortWorldItem*>& OutIngredients); // [0xa3cf2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetUIDataForCraftingIngredientTags
	// void GetUIDataForCraftingIngredientTags(class UObject* WorldContextObject, FGameplayTagContainer& IngredientTags, TArray<TWeakObjectPtr<UItemDefinitionBase*>>& OutItemDefs, TArray<TWeakObjectPtr<UObject*>>& OutIcons); // [0xa3cf0a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetTimeToCraftRecipe
	// float GetTimeToCraftRecipe(class AActor* CraftingObject, FName& CraftingFormulaName);                                 // [0xa3cefd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetLastCraftedItemFormulaName
	// FName GetLastCraftedItemFormulaName(class AActor* CraftingObject);                                                    // [0xa3cef44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetKnownCraftingFormulas
	// void GetKnownCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xa3cec24] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetIngredientsInCraftingObject
	// TArray<UFortWorldItem*> GetIngredientsInCraftingObject(class AActor* CraftingObject);                                 // [0xa3ceb38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingResultsForRowName
	// void GetCraftingResultsForRowName(class UObject* WorldContextObject, FName& CraftingFormulaRow, TArray<FItemAndCount>& OutResults, int32_t NumToCraft); // [0xa3ce904] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectTags
	// FGameplayTagContainer GetCraftingObjectTags(class AActor* CraftingObject);                                            // [0xa3ce86c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectPausedTime
	// float GetCraftingObjectPausedTime(class AActor* CraftingObject, FCraftingMultiKey Key);                               // [0xa3ce6e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateTimeLeft
	// float GetCraftingObjectCurrentCraftingStateTimeLeft(class AActor* CraftingObject, FCraftingMultiKey Key);             // [0xa3ce55c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateStartTime
	// float GetCraftingObjectCurrentCraftingStateStartTime(class AActor* CraftingObject, FCraftingMultiKey Key);            // [0xa3ce3d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateEndTime
	// float GetCraftingObjectCurrentCraftingStateEndTime(class AActor* CraftingObject, FCraftingMultiKey Key);              // [0xa3ce24c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectCraftingState
	// ECraftingObjectState GetCraftingObjectCraftingState(class AActor* CraftingObject, FCraftingMultiKey Key);             // [0xa3ce0d8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingObjectComponent
	// class UCraftingObjectComponent* GetCraftingObjectComponent(class AActor* CraftingObject);                             // [0xa3ce04c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingIngredients_TempItems
	// TArray<UFortWorldItem*> GetCraftingIngredients_TempItems(class AActor* CraftingObject, FCraftingMultiKey Key);        // [0xa3cdec4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulaNameBeingCrafted
	// FName GetCraftingFormulaNameBeingCrafted(class AActor* CraftingObject, FCraftingMultiKey Key);                        // [0xa3cdd58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftingFormulaIngredientRequirements
	// bool GetCraftingFormulaIngredientRequirements(class UObject* WorldContextObject, FName& CraftingFormulaRow, TArray<FCraftingIngredientRequirement>& OutIngredientRequirements); // [0xa3cdc04] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetCraftedResults_TempItems
	// TArray<UFortWorldItem*> GetCraftedResults_TempItems(class AActor* CraftingObject, FCraftingMultiKey Key);             // [0xa3cda7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllValidIngredients
	// void GetAllValidIngredients(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FGameplayTagContainer>& OutIngredients); // [0xa3cd738] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllCraftingFormulas
	// void GetAllCraftingFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xa3cd418] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.GetAllCraftableFormulas
	// void GetAllCraftableFormulas(class AFortPlayerController* FortPC, class AActor* CraftingObject, TArray<FName>& OutFormulas); // [0xa3cd300] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.EjectItems
	// void EjectItems(class AFortPlayerController* Instigator, class AActor* CraftingObject);                               // [0xa3cd204] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.ClaimCraftingResults
	// void ClaimCraftingResults(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key); // [0xa3ccbd4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CanCraftFormulaWithAdditionalItems
	// bool CanCraftFormulaWithAdditionalItems(class AFortPlayerController* FortPC, class AActor* CraftingObject, FName CraftingFormulaRow, TArray<FItemAndCount>& AdditionalItems, TArray<FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft); // [0xa3cc744] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CanCraftFormula
	// bool CanCraftFormula(class AFortPlayerController* FortPC, class AActor* CraftingObject, FName CraftingFormulaRow, TArray<FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft); // [0xa3cc51c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CancelCrafting
	// void CancelCrafting(class AFortPlayerController* Instigator, class AActor* CraftingObject, FCraftingMultiKey Key);    // [0xa3cc9fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CraftingRuntime.CraftingLibrary.CancelAllCrafting
	// void CancelAllCrafting(class AActor* CraftingObject);                                                                 // [0x6414600] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/CraftingRuntime.CraftingObjectSuccessEvent
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCraftingObjectSuccessEvent
{ 
	class AActor*                                      CraftingObject;                                             // 0x0000   (0x0008)  
	FCraftingMultiKey                                  Key;                                                        // 0x0008   (0x0008)  
	class AFortPlayerController*                       Instigator;                                                 // 0x0010   (0x0008)  
	FName                                              FormulaRowName;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FFortItemEntry>                             ConsumedIngredients;                                        // 0x0020   (0x0010)  
};

/// Struct /Script/CraftingRuntime.CraftingObjectStateChangedEvent
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCraftingObjectStateChangedEvent
{ 
	class AActor*                                      CraftingObject;                                             // 0x0000   (0x0008)  
	FCraftingMultiKey                                  Key;                                                        // 0x0008   (0x0008)  
	class AFortPlayerController*                       Instigator;                                                 // 0x0010   (0x0008)  
	ECraftingObjectState                               CraftingState;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              CraftingStateStartTime;                                     // 0x001C   (0x0004)  
	float                                              CraftingStateDuration;                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/CraftingRuntime.CraftingObjectServerStateData
/// Size: 0x01F8 (0x000000 - 0x0001F8)
struct FCraftingObjectServerStateData
{ 
	bool                                               bNextResultsHandledExternally : 1;                          // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AFortPickup*                                 PendingPickupCraftingItem;                                  // 0x0008   (0x0008)  
	FName                                              PendingPickupCraftingFormula;                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FFortItemEntry                                     PendingPickupCraftingItemEntry;                             // 0x0018   (0x01A0)  
	int32_t                                            PendingPickupHeldCount;                                     // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	TArray<FFortItemEntry>                             AllOfTheIngredientItems;                                    // 0x01C0   (0x0010)  
	TArray<int32_t>                                    NonConsumedIngredientItemIndices;                           // 0x01D0   (0x0010)  
	TArray<FItemAndCount>                              CraftingResults;                                            // 0x01E0   (0x0010)  
	FGameplayAbilitySpecHandle                         InstigatorWhileCraftingAbilitySpecHandle;                   // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01F4   (0x0004)  MISSED
};

/// Struct /Script/CraftingRuntime.CraftingIngredientRequirement
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCraftingIngredientRequirement
{ 
	FGameplayTagContainer                              IngredientTags;                                             // 0x0000   (0x0020)  
	int32_t                                            Count;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/CraftingRuntime.CraftingUpgradeRule
/// Size: 0x0118 (0x000000 - 0x000118)
struct FCraftingUpgradeRule
{ 
	FGameplayTagRequirements                           SourceItemTags;                                             // 0x0000   (0x0088)  
	FGameplayTagRequirements                           TargetItemTags;                                             // 0x0088   (0x0088)  
	char                                               UpgradeFlags;                                               // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Struct /Script/CraftingRuntime.CraftingFormula
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FCraftingFormula : FTableRowBase
{ 
	SDK_UNDEFINED(24,11918) /* FText */                __um(DisplayName);                                          // 0x0008   (0x0018)  
	bool                                               bEnabled : 1;                                               // 0x0020:0 (0x0001)  
	bool                                               bAlwaysKnownFormula : 1;                                    // 0x0020:1 (0x0001)  
	bool                                               bInstantlyConsumeIngredients : 1;                           // 0x0020:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            SortingPriority;                                            // 0x0024   (0x0004)  
	FGameplayTag                                       SourceObjectTag;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FGameplayTagContainer                              AttributeTags;                                              // 0x0030   (0x0020)  
	TArray<FCraftingIngredientRequirement>             RequiredIngredients;                                        // 0x0050   (0x0010)  
	FName                                              ResultLootTierKey;                                          // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	SDK_UNDEFINED(32,11919) /* TWeakObjectPtr<UClass*> */ __um(WhileCraftingAbility);                              // 0x0068   (0x0020)  
	TArray<FCraftingUpgradeRule>                       UpgradeRules;                                               // 0x0088   (0x0010)  
	float                                              OverrideCraftingTime;                                       // 0x0098   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	SDK_UNDEFINED(32,11920) /* TWeakObjectPtr<UClass*> */ __um(InstigatorWhileCraftingAbility);                    // 0x00A0   (0x0020)  
};

/// Struct /Script/CraftingRuntime.CraftingIngredientUIData
/// Size: 0x0040 (0x000008 - 0x000048)
struct FCraftingIngredientUIData : FTableRowBase
{ 
	FGameplayTagContainer                              IngredientTags;                                             // 0x0008   (0x0020)  
	SDK_UNDEFINED(16,11921) /* TArray<TWeakObjectPtr<UItemDefinitionBase*>> */ __um(ItemDefs);                     // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,11922) /* TArray<TWeakObjectPtr<UObject*>> */ __um(Icons);                                    // 0x0038   (0x0010)  
};

/// Struct /Script/CraftingRuntime.CraftingIngredientQueryState
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCraftingIngredientQueryState
{ 
	FCraftingIngredientRequirement                     Requirement;                                                // 0x0000   (0x0028)  
	int32_t                                            Owned;                                                      // 0x0028   (0x0004)  
	int32_t                                            Missing;                                                    // 0x002C   (0x0004)  
};

/// Struct /Script/CraftingRuntime.CraftingMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCraftingMessage
{ 
	class AActor*                                      CraftingObject;                                             // 0x0000   (0x0008)  
};

