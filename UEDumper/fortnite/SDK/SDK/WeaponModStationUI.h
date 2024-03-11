
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0030   (0x0020)  MISSED
	SDK_UNDEFINED(16,15772) /* FMulticastInlineDelegate */ __um(OnWeaponModsWorkbenchRequestClose);                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0060   (0x0018)  MISSED
	SDK_UNDEFINED(16,15773) /* FMulticastInlineDelegate */ __um(OnWeaponModsWorkbenchSelectedModChanged);          // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x0088   (0x0060)  MISSED


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.RequestCloseUI
	// void RequestCloseUI();                                                                                                // [0xab21d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.OnWeaponModsWorkbenchSelectedModChanged__DelegateSignature
	// void OnWeaponModsWorkbenchSelectedModChanged__DelegateSignature(class UFortWeaponModItemDefinition* CurrentlySelectedMod); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.OnWeaponModsWorkbenchRequestClose__DelegateSignature
	// void OnWeaponModsWorkbenchRequestClose__DelegateSignature();                                                          // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchContext.GetCurrentModCategory
	// FGameplayTag GetCurrentModCategory();                                                                                 // [0x6cb25ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UAthenaWeaponModsWorkbenchWidgetBase : public UCommonUserWidget
{ 
public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWorkbenchOpened
	// void OnWorkbenchOpened();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWorkbenchClosed
	// void OnWorkbenchClosed();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.OnWeaponModCategoryChanged
	// void OnWeaponModCategoryChanged(FGameplayTag ModTypeTag);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWidgetBase.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                               // [0xab2196c] Native|Protected     
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UAthenaWeaponModsWorkbenchEquippedModDetails : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnSetEquippedModInfo
	// void OnSetEquippedModInfo(class UFortWeaponModItemDefinition* ModItemDefinition, bool bIsDefaultMod, bool bSlotHasDefaultMod, bool bCanRemoveMod); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnSetCurrentlySelectedModInfo
	// void OnSetCurrentlySelectedModInfo(class UFortWeaponModItemDefinition* ModItemDefinition, bool bIsSameCategory, bool bIsEquippedMod); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.OnRemoveModClicked
	// void OnRemoveModClicked();                                                                                            // [0xab21d44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.HandleSetEquippedModInfo
	// void HandleSetEquippedModInfo(class UFortWeaponModItemDefinition* WeaponMod);                                         // [0xab21708] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchEquippedModDetails.HandleCurrentlySelectedModChanged
	// void HandleCurrentlySelectedModChanged(class UFortWeaponModItemDefinition* NewSelectedMod);                           // [0xab21608] Final|Native|Private 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal
/// Size: 0x0038 (0x000400 - 0x000438)
class UAthenaWeaponModsWorkbenchModal : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	TArray<FName>                                      BlockedInputActions;                                        // 0x0408   (0x0010)  
	FPrimaryContentSetup                               PrimaryContentSetup;                                        // 0x0418   (0x0003)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x041B   (0x0005)  MISSED
	class UInputComponent*                             WorkbenchModalInputComp;                                    // 0x0420   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0428   (0x0010)  MISSED


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.OnWeaponEquipped
	// void OnWeaponEquipped(bool bIsModdable);                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.OnInputTypeChanged
	// void OnInputTypeChanged(ECommonInputType NewInputType);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                               // [0xab218a8] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleModStationComponentForceStop
	// void HandleModStationComponentForceStop(class AFortWeaponModStationBase* WeaponModStation);                           // [0xab21688] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModal.HandleCloseUI
	// void HandleCloseUI();                                                                                                 // [0x88a7248] Final|Native|Private 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UAthenaWeaponModsWorkbenchModListEntry : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1490   (0x0010)  MISSED


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.OnRefreshStatus
	// void OnRefreshStatus();                                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.OnListItemSet
	// void OnListItemSet(class UFortItemDefinition* Item);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.IsEquippedMod
	// bool IsEquippedMod();                                                                                                 // [0xab21b24] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModListEntry.IsEquippableMod
	// bool IsEquippableMod();                                                                                               // [0xab21ab4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UAthenaWeaponModsWorkbenchModSelection : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
public:
	class UFortWorldItemDefinition*                    PurchasingCurrency;                                         // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x02F0   (0x0008)  MISSED
	class UCommonListView*                             ListView_ModChoices;                                        // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0300   (0x0008)  MISSED
	FDataTableRowHandle                                PreviousListEntryInputAction;                               // 0x0308   (0x0010)  
	FDataTableRowHandle                                NextListEntryInputAction;                                   // 0x0318   (0x0010)  


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.SetCanRemoveMod
	// void SetCanRemoveMod(bool bCanRemoveMod);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.RequestRemoveMod
	// void RequestRemoveMod();                                                                                              // [0xab21d6c] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.RequestBuyAndEquip
	// void RequestBuyAndEquip();                                                                                            // [0xab21bd8] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedRemoveModCostAndOwnedCurrency
	// void OnSetSelectedRemoveModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency);                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedModInfo
	// void OnSetSelectedModInfo(class UFortWeaponModItemDefinition* ModItemDef);                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnSetSelectedModCostAndOwnedCurrency
	// void OnSetSelectedModCostAndOwnedCurrency(int32_t ModCost, int32_t OwnedCurrency);                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRemoveModClicked
	// void OnRemoveModClicked();                                                                                            // [0xab21d6c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRefreshModType
	// void OnRefreshModType(FGameplayTag ModCategoryTag);                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnRefreshMods
	// void OnRefreshMods(TArray<UFortWeaponModItemDefinition*>& WeaponModItemDefinitions);                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModRemovedCallback
	// void OnModRemovedCallback();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModPurchaseFailed
	// void OnModPurchaseFailed();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnModPurchasedSuccessfully
	// void OnModPurchasedSuccessfully();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnExitUIClicked
	// void OnExitUIClicked();                                                                                               // [0xab21bec] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.OnBuyAndEquipClicked
	// void OnBuyAndEquipClicked();                                                                                          // [0xab21bd8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.IsSelectedModEquippedOnWeapon
	// bool IsSelectedModEquippedOnWeapon();                                                                                 // [0xab21bb4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.GetSelectedRemoveModCostAndOwnedCurrency
	// void GetSelectedRemoveModCostAndOwnedCurrency(int32_t& RemoveModCost, int32_t& OwnedCurrency);                        // [0xab21530] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.GetSelectedModCostAndOwnedCurrency
	// void GetSelectedModCostAndOwnedCurrency(int32_t& ModCost, int32_t& OwnedCurrency);                                    // [0xab21458] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.DoesEquippedWeaponHaveDefaultModForSlot
	// bool DoesEquippedWeaponHaveDefaultModForSlot();                                                                       // [0xab2141c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.CanRemoveSelectedModFromWeapon
	// bool CanRemoveSelectedModFromWeapon();                                                                                // [0x331049c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModSelection.CanApplySelectedModToEquippedWeapon
	// bool CanApplySelectedModToEquippedWeapon();                                                                           // [0xab213ac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UAthenaWeaponModsWorkbenchModTypeButton : public UCommonButtonBase
{ 
public:
	FGameplayTag                                       ModTypeTag;                                                 // 0x1490   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x1494   (0x0004)  MISSED
	class UFortWeaponModItemDefinition*                DefaultModItemDef;                                          // 0x1498   (0x0008)  


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.SetEquippedOrDefaultMod
	// void SetEquippedOrDefaultMod(class UFortWeaponModItemDefinition* ItemDefinition, bool bIsAvailableCategory);          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.OnWorkbenchOpened
	// void OnWorkbenchOpened();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.OnWorkbenchClosed
	// void OnWorkbenchClosed();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                               // [0xab21788] Final|Native|Private 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeButton.GetModTypeTag
	// FGameplayTag GetModTypeTag();                                                                                         // [0xab21440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UAthenaWeaponModsWorkbenchModTypeTabs : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	FDataTableRowHandle                                PreviousTabInputAction;                                     // 0x02F0   (0x0010)  
	FDataTableRowHandle                                NextTabInputAction;                                         // 0x0300   (0x0010)  


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.SetItemSlotInfo
	// void SetItemSlotInfo(TArray<FFortWeaponModSlot>& ModSlots);                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.OnModTypeTabClicked
	// void OnModTypeTabClicked(FGameplayTag ModTypeTag);                                                                    // [0xab21c14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchModTypeTabs.GetTabButtons
	// TArray<UAthenaWeaponModsWorkbenchModTypeButton*> GetTabButtons();                                                     // [0x18a39e4] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UAthenaWeaponModsWorkbenchWeaponDetails : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails.SetWeaponType
	// void SetWeaponType(FText& WeaponTypeText, class UTexture2D* WeaponTypeTexture);                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponDetails.OnWeaponEquipped
	// void OnWeaponEquipped(class UItemDefinitionBase* ItemDefinition, FText& DisplayName);                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UAthenaWeaponModsWorkbenchWeaponRenderContainer : public UAthenaWeaponModsWorkbenchWidgetBase
{ 
public:


	/// Functions
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.OnWeaponModSlotsChanged
	// void OnWeaponModSlotsChanged(class AFortWeapon* Weapon);                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.OnWeaponModSlotPreview
	// void OnWeaponModSlotPreview(class AFortWeapon* Weapon, class UFortWeaponModItemDefinition* PreviewingModItemDefinition); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/WeaponModStationUI.AthenaWeaponModsWorkbenchWeaponRenderContainer.HandleWeaponModSlotPreview
	// void HandleWeaponModSlotPreview(class UFortWeaponModItemDefinition* PreviewingModItemDefinition);                     // [0xab21a34] Final|Native|Private 
};

