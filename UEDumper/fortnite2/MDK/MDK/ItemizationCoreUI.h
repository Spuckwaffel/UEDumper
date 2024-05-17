
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: ItemizationCoreRuntime
/// dependency: ModelViewViewModel
/// dependency: SlateCore
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
	// void HandleInventoryCollectionDestroyed(class AActor* Actor);                                                            // [0xb3c03a4] Final|Native|Private 
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
	// void UseItem();                                                                                                          // [0xb3c0a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.UpdateCanSwap
	// void UpdateCanSwap(class UInventoryItemEntryViewModel* SwapInventoryItemEntryViewModel);                                 // [0xb3c0958] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.ToggleEquippableItemActive
	// void ToggleEquippableItemActive();                                                                                       // [0xb3c092c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetItemSlotNumber
	// void SetItemSlotNumber(int32_t SlotNumber);                                                                              // [0xb3c07e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.SetEquippableItemActive
	// void SetEquippableItemActive(bool bActive);                                                                              // [0xb3c06cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsSmallItemIconLoading
	// bool IsSmallItemIconLoading();                                                                                           // [0xb3c052c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemIconLoading
	// bool IsItemIconLoading();                                                                                                // [0xb3c04fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemEntryIDValid
	// bool IsItemEntryIDValid();                                                                                               // [0xb3c04d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsItemActive
	// bool IsItemActive();                                                                                                     // [0xb3c04ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.IsEquipSlotInputBindingVisible
	// bool IsEquipSlotInputBindingVisible();                                                                                   // [0xb3c0424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSoftSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSoftSmallItemIcon();                                                                      // [0xb3c033c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSoftItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSoftItemIcon();                                                                           // [0xb3c02f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetSmallItemIcon
	// class UTexture2D* GetSmallItemIcon();                                                                                    // [0xb3c02d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemType
	// class UItemType* GetItemType();                                                                                          // [0xb3c02b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemSlotNumber
	// int32_t GetItemSlotNumber();                                                                                             // [0xb3c028c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                      // [0xb3c0244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemPrimaryAmmoCount
	// int64_t GetItemPrimaryAmmoCount();                                                                                       // [0xb3c0220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemName
	// FText GetItemName();                                                                                                     // [0xb3c01e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIconDisplayTextType
	// EItemIconDisplayTextType GetItemIconDisplayTextType();                                                                   // [0xb3c017c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemIcon
	// class UTexture2D* GetItemIcon();                                                                                         // [0xb3c0158] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemEntryID
	// FGuid GetItemEntryID();                                                                                                  // [0xb3c013c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDescription
	// FText GetItemDescription();                                                                                              // [0xb3c0100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition();                                                                          // [0xb3c00dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetItemAmount
	// int64_t GetItemAmount();                                                                                                 // [0xb3c00b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetInventoryID
	// FGuid GetInventoryID();                                                                                                  // [0xb3bf8e8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.GetEquipSlotInputAction
	// class UInputAction* GetEquipSlotInputAction();                                                                           // [0xb3bf864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropHalf
	// void DropHalf();                                                                                                         // [0xb3bf0e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAmount
	// void DropAmount(int64_t Amount);                                                                                         // [0xb3bf068] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.DropAll
	// void DropAll();                                                                                                          // [0xb3bf054] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeInactive
	// bool CanItemBeMadeInactive();                                                                                            // [0xb3befd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryItemEntryViewModel.CanItemBeMadeActive
	// bool CanItemBeMadeActive();                                                                                              // [0xb3bef58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreUI.InventoryItemStreamEntryViewModel
/// Size: 0x0018 (0x000068 - 0x000080)
class UInventoryItemStreamEntryViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UInventoryItemEntryViewModel*)       ItemEntryViewModel                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(int64_t)                                   DisplayedAmount                                             OFFSET(get<int64_t>, {0x70, 8, 0, 0})
};

/// Class /Script/ItemizationCoreUI.InventoryItemStreamViewModel
/// Size: 0x0030 (0x000068 - 0x000098)
class UInventoryItemStreamViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<class UInventoryItemStreamEntryViewModel*>) ItemStreamEntryViewModels                           OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   MaximumDisplayedEntries                                     OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(float)                                     ExpirationTime                                              OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bCombineItemEntries                                         OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bShowItemAmountIncreased                                    OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      bShowItemAmountDecreased                                    OFFSET(get<bool>, {0x82, 1, 0, 0})
	CMember(TArray<class UItemType*>)                  AllowedItemTypes                                            OFFSET(get<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.InventoryItemStreamViewModel.RemoveItemEntry
	// void RemoveItemEntry(class UInventoryItemEntryViewModel* ItemEntryViewModel);                                            // [0xb3c064c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemStreamViewModel.RemoveAllItemEntries
	// void RemoveAllItemEntries();                                                                                             // [0xb3c05dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemStreamViewModel.OnItemEntryAmountChanged
	// void OnItemEntryAmountChanged(class UInventoryItemEntryViewModel* ItemEntryViewModel);                                   // [0xb3c055c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemStreamViewModel.AddItemEntry
	// void AddItemEntry(class UInventoryItemEntryViewModel* ItemEntryViewModel);                                               // [0xb3beed8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.InventoryItemStreamViewModel.AddItemEntries
	// void AddItemEntries(TArray<UInventoryItemEntryViewModel*>& ItemEntryViewModels);                                         // [0xb3be7a8] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// int32_t GetTotalSlots();                                                                                                 // [0xb3c0380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryName
	// FText GetInventoryName();                                                                                                // [0xb3c007c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDescription
	// FText GetInventoryDescription();                                                                                         // [0xb3bf8ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreUI.InventoryViewModel.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition();                                                                    // [0xb3bf888] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// TArray<UInventoryItemEntryViewModel*> GetInventoryItemEntryViewModels(TArray<UInventoryItemEntryViewModel*> InventoryItemEntryViewModels, bool bIncludeEmptySlots); // [0xb3bf904] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreUI.InventoryViewModelAllowedConversionFunctions.FindInventoryViewModel
	// class UInventoryViewModel* FindInventoryViewModel(class UInventoryDefinition* InventoryDefinition, TArray<UInventoryViewModel*>& InventoryViewModels); // [0xb3bf128] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
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
/// Size: 0x00C8 (0x0001B0 - 0x000278)
class UUniformGridEntryPanel : public UUniformGridPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	SMember(FMulticastInlineDelegate)                  OnGridItemsSet                                              OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGridEntryAdded                                            OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGridEntryRemoved                                          OFFSET(getStruct<T>, {0x1D0, 16, 0, 0})
	CMember(class UClass*)                             EntryWidgetClass                                            OFFSET(get<T>, {0x1E0, 8, 0, 0})
	DMember(int32_t)                                   NumColumns                                                  OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         SlotHorizontalAlignment                                     OFFSET(get<T>, {0x1EC, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           SlotVerticalAlignment                                       OFFSET(get<T>, {0x1ED, 1, 0, 0})
	SMember(FUserWidgetPool)                           EntryWidgetPool                                             OFFSET(getStruct<T>, {0x1F0, 136, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetSlotAlignment
	// void SetSlotAlignment(TEnumAsByte<EHorizontalAlignment> InSlotHorizontalAlignment, TEnumAsByte<EVerticalAlignment> InSlotVerticalAlignment); // [0xb3c0868] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.SetGridItems
	// void SetGridItems(TArray<UObject*>& GridItems);                                                                          // [0xb3c074c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridItemsSet__DelegateSignature
	// void OnGridItemsSet__DelegateSignature();                                                                                // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryRemoved__DelegateSignature
	// void OnGridEntryRemoved__DelegateSignature(class UWidget* GridEntry);                                                    // [0x228deb8] MulticastDelegate|Public|Delegate 
	// Function /Script/ItemizationCoreUI.UniformGridEntryPanel.OnGridEntryAdded__DelegateSignature
	// void OnGridEntryAdded__DelegateSignature(class UWidget* GridEntry);                                                      // [0x228deb8] MulticastDelegate|Public|Delegate 
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

/// Enum /Script/ItemizationCoreUI.EItemIconDisplayTextType
/// Size: 0x03
enum class EItemIconDisplayTextType : uint8_t
{
	EItemIconDisplayTextType__StackSize                                              = 0,
	EItemIconDisplayTextType__PrimaryAmmo                                            = 1,
	EItemIconDisplayTextType__None                                                   = 2
};

