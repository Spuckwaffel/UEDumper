
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BlueprintContext
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UAthenaWeaponModsWorkbenchContext : public UBlueprintContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnWeaponModsWorkbenchRequestClose                           OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWeaponModsWorkbenchSelectedModChanged                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.RequestCloseUI
	// void RequestCloseUI();                                                                                                   // [0xbf2b280] Final|Native|Public|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.OnWeaponModsWorkbenchSelectedModChanged__DelegateSignature
	// void OnWeaponModsWorkbenchSelectedModChanged__DelegateSignature(class UFortWeaponModItemDefinition* CurrentlySelectedMod); // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.OnWeaponModsWorkbenchRequestClose__DelegateSignature
	// void OnWeaponModsWorkbenchRequestClose__DelegateSignature();                                                             // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.GetCurrentModCategory
	// FGameplayTag GetCurrentModCategory();                                                                                    // [0x6e88374] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UAthenaWeaponModsWorkbenchWidgetBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWorkbenchOpened
	// void OnWorkbenchOpened();                                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWorkbenchClosed
	// void OnWorkbenchClosed();                                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWeaponModCategoryChanged
	// void OnWeaponModCategoryChanged(FGameplayTag ModTypeTag);                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xbf2af18] Native|Protected     
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UAthenaWeaponModsWorkbenchEquippedModDetails : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnSetEquippedModInfo
	// void OnSetEquippedModInfo(class UFortWeaponModItemDefinition* ModItemDefinition, bool bIsDefaultMod, bool bSlotHasDefaultMod, bool bCanRemoveMod); // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnSetCurrentlySelectedModInfo
	// void OnSetCurrentlySelectedModInfo(class UFortWeaponModItemDefinition* ModItemDefinition, bool bIsSameCategory, bool bIsEquippedMod); // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnRemoveModClicked
	// void OnRemoveModClicked();                                                                                               // [0xbf2b244] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.HandleSetEquippedModInfo
	// void HandleSetEquippedModInfo(class UFortWeaponModItemDefinition* WeaponMod);                                            // [0xbf2acb4] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.HandleCurrentlySelectedModChanged
	// void HandleCurrentlySelectedModChanged(class UFortWeaponModItemDefinition* NewSelectedMod);                              // [0xbf2abb4] Final|Native|Private 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal
/// Size: 0x0038 (0x000408 - 0x000440)
class UAthenaWeaponModsWorkbenchModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(TArray<FName>)                             BlockedInputActions                                         OFFSET(get<T>, {0x410, 16, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x420, 3, 0, 0})
	CMember(class UInputComponent*)                    WorkbenchModalInputComp                                     OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.OnWeaponEquipped
	// void OnWeaponEquipped(bool bIsModdable);                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.OnInputTypeChanged
	// void OnInputTypeChanged(ECommonInputType NewInputType);                                                                  // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xbf2ae54] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleModStationComponentForceStop
	// void HandleModStationComponentForceStop(class AFortWeaponModStationBase* WeaponModStation);                              // [0xbf2ac34] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleCloseUI
	// void HandleCloseUI();                                                                                                    // [0x91b55b0] Final|Native|Private 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry
/// Size: 0x0010 (0x001480 - 0x001490)
class UAthenaWeaponModsWorkbenchModListEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5264;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.OnRefreshStatus
	// void OnRefreshStatus();                                                                                                  // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.OnListItemSet
	// void OnListItemSet(class UFortItemDefinition* Item);                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.IsEquippedMod
	// bool IsEquippedMod();                                                                                                    // [0xbf2b0d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.IsEquippableMod
	// bool IsEquippableMod();                                                                                                  // [0xbf2b060] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection
/// Size: 0x0040 (0x0002F0 - 0x000330)
class UAthenaWeaponModsWorkbenchModSelection : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(class UFortWorldItemDefinition*)           PurchasingCurrency                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonListView*)                    ListView_ModChoices                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousListEntryInputAction                                OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextListEntryInputAction                                    OFFSET(getStruct<T>, {0x320, 16, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.SetCanRemoveMod
	// void SetCanRemoveMod(bool bCanRemoveMod);                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.RequestRemoveMod
	// void RequestRemoveMod();                                                                                                 // [0xbf2b26c] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.RequestBuyAndEquip
	// void RequestBuyAndEquip();                                                                                               // [0xbf2b188] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedRemoveModCostAndOwnedCurrency
	// void OnSetSelectedRemoveModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency);                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedModInfo
	// void OnSetSelectedModInfo(class UFortWeaponModItemDefinition* ModItemDef);                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedModCostAndOwnedCurrency
	// void OnSetSelectedModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency);                                       // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRemoveModClicked
	// void OnRemoveModClicked();                                                                                               // [0xbf2b26c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRefreshModType
	// void OnRefreshModType(FGameplayTag ModCategoryTag);                                                                      // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRefreshMods
	// void OnRefreshMods(TArray<UFortWeaponModItemDefinition*>& WeaponModItemDefinitions);                                     // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModRemovedCallback
	// void OnModRemovedCallback();                                                                                             // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModPurchaseFailed
	// void OnModPurchaseFailed();                                                                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModPurchasedSuccessfully
	// void OnModPurchasedSuccessfully();                                                                                       // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnExitUIClicked
	// void OnExitUIClicked();                                                                                                  // [0xbf2b19c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnBuyAndEquipClicked
	// void OnBuyAndEquipClicked();                                                                                             // [0xbf2b188] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.IsSelectedModEquippedOnWeapon
	// bool IsSelectedModEquippedOnWeapon();                                                                                    // [0xbf2b164] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.GetSelectedRemoveModCostAndOwnedCurrency
	// void GetSelectedRemoveModCostAndOwnedCurrency(int32_t& RemoveModCost, int32_t& OwnedCurrency);                           // [0xbf2aa58] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.GetSelectedModCostAndOwnedCurrency
	// void GetSelectedModCostAndOwnedCurrency(int32_t& ModCost, int32_t& OwnedCurrency);                                       // [0xbf2a8fc] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.DoesEquippedWeaponHaveDefaultModForSlot
	// bool DoesEquippedWeaponHaveDefaultModForSlot();                                                                          // [0xbf2a8c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.CanRemoveSelectedModFromWeapon
	// bool CanRemoveSelectedModFromWeapon();                                                                                   // [0x33f2000] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.CanApplySelectedModToEquippedWeapon
	// bool CanApplySelectedModToEquippedWeapon();                                                                              // [0xbf2a850] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton
/// Size: 0x0010 (0x001480 - 0x001490)
class UAthenaWeaponModsWorkbenchModTypeButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5264;

public:
	SMember(FGameplayTag)                              ModTypeTag                                                  OFFSET(getStruct<T>, {0x1480, 4, 0, 0})
	CMember(class UFortWeaponModItemDefinition*)       DefaultModItemDef                                           OFFSET(get<T>, {0x1488, 8, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.SetEquippedOrDefaultMod
	// void SetEquippedOrDefaultMod(class UFortWeaponModItemDefinition* ItemDefinition, bool bIsAvailableCategory);             // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.OnWorkbenchOpened
	// void OnWorkbenchOpened();                                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.OnWorkbenchClosed
	// void OnWorkbenchClosed();                                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xbf2ad34] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.GetModTypeTag
	// FGameplayTag GetModTypeTag();                                                                                            // [0xbf2a8e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs
/// Size: 0x0028 (0x0002F0 - 0x000318)
class UAthenaWeaponModsWorkbenchModTypeTabs : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FDataTableRowHandle)                       PreviousTabInputAction                                      OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputAction                                          OFFSET(getStruct<T>, {0x308, 16, 0, 0})


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.SetItemSlotInfo
	// void SetItemSlotInfo(TArray<FFortWeaponModSlot>& ModSlots);                                                              // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.OnModTypeTabClicked
	// void OnModTypeTabClicked(FGameplayTag ModTypeTag);                                                                       // [0xbf2b1c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.GetTabButtons
	// TArray<UAthenaWeaponModsWorkbenchModTypeButton*> GetTabButtons();                                                        // [0x1340978] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails
/// Size: 0x0008 (0x0002F0 - 0x0002F8)
class UAthenaWeaponModsWorkbenchWeaponDetails : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails.SetWeaponType
	// void SetWeaponType(FText& WeaponTypeText, class UTexture2D* WeaponTypeTexture, bool bIsValidType);                       // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails.OnWeaponEquipped
	// void OnWeaponEquipped(class UItemDefinitionBase* ItemDefinition, FText& DisplayName);                                    // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer
/// Size: 0x0000 (0x0002F0 - 0x0002F0)
class UAthenaWeaponModsWorkbenchWeaponRenderContainer : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.OnWeaponModSlotsChanged
	// void OnWeaponModSlotsChanged(class AFortWeapon* Weapon);                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.OnWeaponModSlotPreview
	// void OnWeaponModSlotPreview(class AFortWeapon* Weapon, class UFortWeaponModItemDefinition* PreviewingModItemDefinition); // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.HandleWeaponModSlotPreview
	// void HandleWeaponModSlotPreview(class UFortWeaponModItemDefinition* PreviewingModItemDefinition);                        // [0xbf2afe0] Final|Native|Private 
};

