
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/CraftingUI.FortCraftingListItem
/// Size: 0x0110 (0x000028 - 0x000138)
class UFortCraftingListItem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/CraftingUI.AthenaCraftingQuickBarButton
/// Size: 0x0020 (0x0014A0 - 0x0014C0)
class UAthenaCraftingQuickBarButton : public UAthenaQuickBarSlotButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:


	/// Functions
	// Function /Script/CraftingUI.AthenaCraftingQuickBarButton.OnIsCraftableItemChanged
	// void OnIsCraftableItemChanged(bool bIsCraftableItem);                                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaCraftingQuickBarButton.OnCanCraftNowChanged
	// void OnCanCraftNowChanged(bool bCanCraftNow);                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/CraftingUI.AthenaEquippedItemCraftingIndicator
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:


	/// Functions
	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged
	// void OnIsCraftableItemChanged(bool bIsCraftableItem);                                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged
	// void OnCanCraftNowChanged(bool bCanCraftNow);                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xb12edb0] Final|Native|Private 
};

/// Class /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:


	/// Functions
	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged
	// void OnIsCraftableItemChanged(bool bIsCraftableItem);                                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged
	// void OnCanCraftNowChanged(bool bCanCraftNow);                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected
	// void HandleInventoryItemSelected(class UFortItem* SelectedItem);                                                         // [0xb12ec30] Final|Native|Private 
};

/// Class /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator
/// Size: 0x0030 (0x0002F0 - 0x000320)
class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	DMember(bool)                                      bCheckForIngredientChangesWhenCraftable                     OFFSET(get<bool>, {0x310, 1, 0, 0})


	/// Functions
	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged
	// void OnIsCraftableItemChanged(bool bIsCraftableItem);                                                                    // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIngredientChanged
	// void OnIngredientChanged(bool bCanCraftNow);                                                                             // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged
	// void OnCanCraftNowChanged(bool bCanCraftNow);                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                                  // [0xb12eef0] Final|Native|Private 
};

/// Class /Script/CraftingUI.FortCookingScreen
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortCookingScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FDataTableRowHandle)                       CloseInputAction                                            OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_EjectAll                                             OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_Cancel                                               OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_RecipeName                                             OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_RecipeDescription                                      OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UImage*)                             Image_Recipe                                                OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UFortSlottedRadialMenu*)             RadialMenu_Recipes                                          OFFSET(get<T>, {0x448, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortCraftingFormulaIngredientsWidget
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortCraftingFormulaIngredientsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_Ingredients                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortCraftingIngredientWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortCraftingIngredientWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UCommonTextBlock*)                   Text_NumAvailable                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_NumRequired                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UAthenaItemIcon*)                    ItemIcon                                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   LazyImage_Icon                                              OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/CraftingUI.FortCraftingIngredientWidget.OnIngredientWidgetUpdated
	// void OnIngredientWidgetUpdated(int32_t NumAvailable, int32_t NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient); // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/CraftingUI.FortCraftingItemInfoWidget
/// Size: 0x0068 (0x000400 - 0x000468)
class UFortCraftingItemInfoWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	SMember(FText)                                     RarityTextFormat                                            OFFSET(getStruct<T>, {0x408, 24, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemName                                               OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemRarity                                             OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemCategory                                           OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UFortItemCategoryIndicator*)         ItemCategoryIndicator                                       OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemDescription                                        OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UAthenaInventoryItemStatsWidget*)    ItemStatsWidget                                             OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UFortCraftingFormulaIngredientsWidget*) IngredientsWidget                                        OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_StartCrafting                                        OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Script/CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet
	// void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData);                                            // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/CraftingUI.FortCraftingListEntry
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortCraftingListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(class UAthenaItemIcon*)                    ItemIcon                                                    OFFSET(get<T>, {0x14E8, 8, 0, 0})
	DMember(bool)                                      bCanCraftItem                                               OFFSET(get<bool>, {0x14F0, 1, 0, 0})


	/// Functions
	// Function /Script/CraftingUI.FortCraftingListEntry.OnCraftingListItemSet
	// void OnCraftingListItemSet();                                                                                            // [0x186becc] Event|Protected|BlueprintEvent 
};

/// Class /Script/CraftingUI.FortCraftingTab
/// Size: 0x0160 (0x000400 - 0x000560)
class UFortCraftingTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x408, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x410, 272, 0, 0})
	SMember(FGameplayTagContainer)                     PrimaryIngredientTags                                       OFFSET(getStruct<T>, {0x520, 32, 0, 0})
	CMember(class UFortCraftingItemInfoWidget*)        CraftingItemInfo                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UCommonListView*)                    ListView_Recipes                                            OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UAthenaQuickbarEditorBase*)          QuickbarEditor                                              OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UAthenaInventoryItemInfo*)           ItemInfoWidget                                              OFFSET(get<T>, {0x558, 8, 0, 0})


	/// Functions
	// Function /Script/CraftingUI.FortCraftingTab.OnFormulaListUpdated
	// void OnFormulaListUpdated(int32_t NumFormulas);                                                                          // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.FortCraftingTab.HandleInventoryItemSelected
	// void HandleInventoryItemSelected(class UFortItem* Item);                                                                 // [0xb12ecf0] Final|Native|Private 
};

/// Class /Script/CraftingUI.FortPotContentsPopup
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UFortPotContentsPopup : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	DMember(int32_t)                                   MaxItemsToShow                                              OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	CMember(class UCommonTileView*)                    TileView_PotContents                                        OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_MoreItems                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UWidget*)                            Overlay_Popup                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/CraftingUI.FortPotContentsPopup.SetOwningCraftingObject
	// void SetOwningCraftingObject(class ACraftingObjectBGA* InCraftingObject);                                                // [0xb12f024] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CraftingUI.FortPotContentsTile
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortPotContentsTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(class UCommonLazyImage*)                   Image_Item                                                  OFFSET(get<T>, {0x14E8, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortUIGameFeatureAction_SetCraftMenuWidget : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UClass*)                             CraftingObject                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CraftingMenuWidget                                          OFFSET(get<T>, {0x30, 32, 0, 0})
};

