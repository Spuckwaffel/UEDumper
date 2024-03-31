
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/ItemizationCoreUI.InventoryCollectionViewModel
/// Size: 0x00B8 (0x000068 - 0x000120)
class UInventoryCollectionViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<class UInventoryViewModel*>)        InventoryViewModels                                         OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UInventoryItemEntryViewModel*)       LastSelectedItemEntryViewModel                              OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UInventoryItemEntryViewModel*)       LastActiveItemEntryViewModel                                OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UInventoryItemEntryViewModel*)       LastAmountChangedItemEntryViewModel                         OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<class UInventoryItemEntryViewModel*>) LastAddedItemEntryViewModels                              OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TMap<FGuid, UInventoryItemEntryViewModel*>) ItemEntryIDToItemEntryViewModels                           OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Class /Script/ItemizationCoreUI.InventoryCollectionViewModelResolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryCollectionViewModelResolver : public UMVVMViewModelContextResolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreUI.InventoryCollectionViewModelsManager
/// Size: 0x0050 (0x000030 - 0x000080)
class UInventoryCollectionViewModelsManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FInventoryCollectionKey, UInventoryCollectionViewModel*>) InventoryCollectionToViewModelMap       OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryCollectionViewModelsManager.HandleInventoryCollectionDestroyed
	// void HandleInventoryCollectionDestroyed(class AActor* Actor);                                                            // [0xae4e394] Final|Native|Private 
};

/// Class /Script/ItemizationCoreUI.InventoryItemEntryViewModel
/// Size: 0x0118 (0x000068 - 0x000180)
class UInventoryItemEntryViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(bool)                                      bItemSelected                                               OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bItemBeingSwapped                                           OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bCanDrop                                                    OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bCanSwap                                                    OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(bool)                                      bIsCooldownActive                                           OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     CooldownTimeLeft                                            OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     CooldownProgress                                            OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int64_t)                                   ItemAmountChanged                                           OFFSET(get<int64_t>, {0x78, 8, 0, 0})
	CMember(class UTexture2D*)                         CachedItemIcon                                              OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UTexture2D*)                         CachedSmallItemIcon                                         OFFSET(get<T>, {0x88, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UseItem
	// void UseItem(bool bUnused);                                                                                              // [0xae4eaec] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UpdateCanSwap
	// void UpdateCanSwap(class UInventoryItemEntryViewModel* SwapInventoryItemEntryViewModel);                                 // [0xae4e9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.ToggleEquippableItemActive
	// void ToggleEquippableItemActive(bool bUnused);                                                                           // [0xae4e8e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetItemSlotNumber
	// void SetItemSlotNumber(int32_t SlotNumber);                                                                              // [0xae4e6ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetEquippableItemActive
	// void SetEquippableItemActive(bool bActive);                                                                              // [0xae4e58c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsSmallItemIconLoading
	// bool IsSmallItemIconLoading();                                                                                           // [0xae4e55c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemIconLoading
	// bool IsItemIconLoading();                                                                                                // [0xae4e52c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemEntryIDValid
	// bool IsItemEntryIDValid();                                                                                               // [0xae4e500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemActive
	// bool IsItemActive();                                                                                                     // [0xae4e4dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsEquipSlotInputBindingVisible
	// bool IsEquipSlotInputBindingVisible();                                                                                   // [0xae4e454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSoftSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSoftSmallItemIcon();                                                                      // [0xae4e32c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSoftItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSoftItemIcon();                                                                           // [0xae4e2e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSmallItemIcon
	// class UTexture2D* GetSmallItemIcon();                                                                                    // [0xae4e2c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemType
	// class UItemType* GetItemType();                                                                                          // [0xae4e27c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemSlotNumber
	// int32_t GetItemSlotNumber();                                                                                             // [0xae4e258] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                      // [0xae4e210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemPrimaryAmmoCount
	// int64_t GetItemPrimaryAmmoCount();                                                                                       // [0xae4e1ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemName
	// FText GetItemName();                                                                                                     // [0xae4e1a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIconDisplayTextType
	// EItemIconDisplayTextType GetItemIconDisplayTextType();                                                                   // [0xae4e184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIcon
	// class UTexture2D* GetItemIcon();                                                                                         // [0xae4e160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemEntryID
	// FGuid GetItemEntryID();                                                                                                  // [0xae4e144] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDescription
	// FText GetItemDescription();                                                                                              // [0xae4e100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition();                                                                          // [0xae4e0dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemAmount
	// int64_t GetItemAmount();                                                                                                 // [0xae4e0b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetInventoryID
	// FGuid GetInventoryID();                                                                                                  // [0xae4d918] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetEquipSlotInputAction
	// class UInputAction* GetEquipSlotInputAction();                                                                           // [0xae4d894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropHalf
	// void DropHalf(bool bUnused);                                                                                             // [0xae4d0ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAmount
	// void DropAmount(int64_t Amount);                                                                                         // [0xae4d02c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAll
	// void DropAll(bool bUnused);                                                                                              // [0xae4cf70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeInactive
	// bool CanItemBeMadeInactive();                                                                                            // [0xae4cef4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeActive
	// bool CanItemBeMadeActive();                                                                                              // [0xae4ce74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModel
/// Size: 0x0028 (0x000068 - 0x000090)
class UInventoryViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UInventoryItemEntryViewModel*>) ItemEntryViewModels                                       OFFSET(get<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetTotalSlots
	// int32_t GetTotalSlots();                                                                                                 // [0xae4e370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryName
	// FText GetInventoryName();                                                                                                // [0xae4e07c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDescription
	// FText GetInventoryDescription();                                                                                         // [0xae4d8dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition();                                                                    // [0xae4d8b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryViewModelAllowedConversionFunctions : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions.GetInventoryItemEntryViewModels
	// TArray<UInventoryItemEntryViewModel*> GetInventoryItemEntryViewModels(TArray<UInventoryItemEntryViewModel*> InventoryItemEntryViewModels, bool bIncludeEmptySlots); // [0xae4d934] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions.FindInventoryViewModel
	// class UInventoryViewModel* FindInventoryViewModel(class UInventoryDefinition* InventoryDefinition, TArray<UInventoryViewModel*>& InventoryViewModels); // [0xae4d1c8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreUI.InventoryViewModelConversionFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryViewModelConversionFunctions : public UInventoryViewModelAllowedConversionFunctions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreUI.UniformGridEntryPanel
/// Size: 0x00C8 (0x0001B8 - 0x000280)
class UUniformGridEntryPanel : public UUniformGridPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FMulticastInlineDelegate)                  OnGridItemsSet                                              OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGridEntryAdded                                            OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGridEntryRemoved                                          OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	CMember(class UClass*)                             EntryWidgetClass                                            OFFSET(get<T>, {0x1E8, 8, 0, 0})
	DMember(int32_t)                                   NumColumns                                                  OFFSET(get<int32_t>, {0x1F0, 4, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         SlotHorizontalAlignment                                     OFFSET(get<T>, {0x1F4, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           SlotVerticalAlignment                                       OFFSET(get<T>, {0x1F5, 1, 0, 0})
	SMember(FUserWidgetPool)                           EntryWidgetPool                                             OFFSET(getStruct<T>, {0x1F8, 136, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetSlotAlignment
	// void SetSlotAlignment(TEnumAsByte<EHorizontalAlignment> InSlotHorizontalAlignment, TEnumAsByte<EVerticalAlignment> InSlotVerticalAlignment); // [0xae4e7ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetGridItems
	// void SetGridItems(TArray<UObject*>& GridItems);                                                                          // [0xae4e650] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridItemsSet__DelegateSignature
	// void OnGridItemsSet__DelegateSignature();                                                                                // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryRemoved__DelegateSignature
	// void OnGridEntryRemoved__DelegateSignature(class UWidget* GridEntry);                                                    // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryAdded__DelegateSignature
	// void OnGridEntryAdded__DelegateSignature(class UWidget* GridEntry);                                                      // [0x186becc] MulticastDelegate|Public|Delegate 
};

/// Struct /Script/ItemizationCoreUI.InventoryCollectionKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FInventoryCollectionKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

