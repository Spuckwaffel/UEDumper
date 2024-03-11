
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:
	unsigned char                                      UnknownData00_1[0x138];                                     // 0x0000   (0x0138)  MISSED
};

/// Class /Script/CraftingUI.AthenaCraftingQuickBarButton
/// Size: 0x0020 (0x0014A0 - 0x0014C0)
class UAthenaCraftingQuickBarButton : public UAthenaQuickBarSlotButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x14A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/CraftingUI.AthenaCraftingQuickBarButton.OnIsCraftableItemChanged
	// void OnIsCraftableItemChanged(bool bIsCraftableItem);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaCraftingQuickBarButton.OnCanCraftNowChanged
	// void OnCanCraftNowChanged(bool bCanCraftNow);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CraftingUI.AthenaEquippedItemCraftingIndicator
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x02E8   (0x0020)  MISSED


	/// Functions
	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged
	// void OnIsCraftableItemChanged(bool bIsCraftableItem);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged
	// void OnCanCraftNowChanged(bool bCanCraftNow);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaEquippedItemCraftingIndicator.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                               // [0xa3d8aa8] Final|Native|Private 
};

/// Class /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x02E8   (0x0020)  MISSED


	/// Functions
	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged
	// void OnIsCraftableItemChanged(bool bIsCraftableItem);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged
	// void OnCanCraftNowChanged(bool bCanCraftNow);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected
	// void HandleInventoryItemSelected(class UFortItem* SelectedItem);                                                      // [0xa3d89a8] Final|Native|Private 
};

/// Class /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator
/// Size: 0x0030 (0x0002F0 - 0x000320)
class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x02F0   (0x0020)  MISSED
	bool                                               bCheckForIngredientChangesWhenCraftable;                    // 0x0310   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0311   (0x000F)  MISSED


	/// Functions
	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged
	// void OnIsCraftableItemChanged(bool bIsCraftableItem);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIngredientChanged
	// void OnIngredientChanged(bool bCanCraftNow);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged
	// void OnCanCraftNowChanged(bool bCanCraftNow);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator.HandleWeaponEquipped
	// void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);                               // [0xa3d8b6c] Final|Native|Private 
};

/// Class /Script/CraftingUI.FortCookingScreen
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortCookingScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	FDataTableRowHandle                                CloseInputAction;                                           // 0x0408   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0418   (0x0008)  MISSED
	class UCommonButtonLegacy*                         Button_EjectAll;                                            // 0x0420   (0x0008)  
	class UCommonButtonLegacy*                         Button_Cancel;                                              // 0x0428   (0x0008)  
	class UCommonTextBlock*                            Text_RecipeName;                                            // 0x0430   (0x0008)  
	class UCommonTextBlock*                            Text_RecipeDescription;                                     // 0x0438   (0x0008)  
	class UImage*                                      Image_Recipe;                                               // 0x0440   (0x0008)  
	class UFortSlottedRadialMenu*                      RadialMenu_Recipes;                                         // 0x0448   (0x0008)  
};

/// Class /Script/CraftingUI.FortCraftingFormulaIngredientsWidget
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortCraftingFormulaIngredientsWidget : public UCommonUserWidget
{ 
public:
	class UDynamicEntryBox*                            EntryBox_Ingredients;                                       // 0x02E8   (0x0008)  
};

/// Class /Script/CraftingUI.FortCraftingIngredientWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortCraftingIngredientWidget : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02E8   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_NumAvailable;                                          // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            Text_NumRequired;                                           // 0x02F8   (0x0008)  
	class UAthenaItemIcon*                             ItemIcon;                                                   // 0x0300   (0x0008)  
	class UCommonLazyImage*                            LazyImage_Icon;                                             // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/CraftingUI.FortCraftingIngredientWidget.OnIngredientWidgetUpdated
	// void OnIngredientWidgetUpdated(int32_t NumAvailable, int32_t NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient); // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CraftingUI.FortCraftingItemInfoWidget
/// Size: 0x0068 (0x000400 - 0x000468)
class UFortCraftingItemInfoWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	SDK_UNDEFINED(24,12579) /* FText */                __um(RarityTextFormat);                                     // 0x0408   (0x0018)  
	class UCommonTextBlock*                            Text_ItemName;                                              // 0x0420   (0x0008)  
	class UCommonTextBlock*                            Text_ItemRarity;                                            // 0x0428   (0x0008)  
	class UCommonTextBlock*                            Text_ItemCategory;                                          // 0x0430   (0x0008)  
	class UFortItemCategoryIndicator*                  ItemCategoryIndicator;                                      // 0x0438   (0x0008)  
	class UCommonTextBlock*                            Text_ItemDescription;                                       // 0x0440   (0x0008)  
	class UAthenaInventoryItemStatsWidget*             ItemStatsWidget;                                            // 0x0448   (0x0008)  
	class UFortCraftingFormulaIngredientsWidget*       IngredientsWidget;                                          // 0x0450   (0x0008)  
	class UCommonButtonLegacy*                         Button_StartCrafting;                                       // 0x0458   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0460   (0x0008)  MISSED


	/// Functions
	// Function /Script/CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet
	// void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData);                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CraftingUI.FortCraftingListEntry
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortCraftingListEntry : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UAthenaItemIcon*                             ItemIcon;                                                   // 0x14E8   (0x0008)  
	bool                                               bCanCraftItem;                                              // 0x14F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x14F1   (0x000F)  MISSED


	/// Functions
	// Function /Script/CraftingUI.FortCraftingListEntry.OnCraftingListItemSet
	// void OnCraftingListItemSet();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CraftingUI.FortCraftingTab
/// Size: 0x0160 (0x000400 - 0x000560)
class UFortCraftingTab : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	FName                                              TabNameID;                                                  // 0x0408   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x040C   (0x0004)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0410   (0x0110)  
	FGameplayTagContainer                              PrimaryIngredientTags;                                      // 0x0520   (0x0020)  
	class UFortCraftingItemInfoWidget*                 CraftingItemInfo;                                           // 0x0540   (0x0008)  
	class UCommonListView*                             ListView_Recipes;                                           // 0x0548   (0x0008)  
	class UAthenaQuickbarEditorBase*                   QuickbarEditor;                                             // 0x0550   (0x0008)  
	class UAthenaInventoryItemInfo*                    ItemInfoWidget;                                             // 0x0558   (0x0008)  


	/// Functions
	// Function /Script/CraftingUI.FortCraftingTab.OnFormulaListUpdated
	// void OnFormulaListUpdated(int32_t NumFormulas);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CraftingUI.FortCraftingTab.HandleInventoryItemSelected
	// void HandleInventoryItemSelected(class UFortItem* Item);                                                              // [0xa3d8a28] Final|Native|Private 
};

/// Class /Script/CraftingUI.FortPotContentsPopup
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UFortPotContentsPopup : public UUserWidget
{ 
public:
	int32_t                                            MaxItemsToShow;                                             // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x02C4   (0x000C)  MISSED
	class UCommonTileView*                             TileView_PotContents;                                       // 0x02D0   (0x0008)  
	class UCommonTextBlock*                            Text_MoreItems;                                             // 0x02D8   (0x0008)  
	class UWidget*                                     Overlay_Popup;                                              // 0x02E0   (0x0008)  


	/// Functions
	// Function /Script/CraftingUI.FortPotContentsPopup.SetOwningCraftingObject
	// void SetOwningCraftingObject(class ACraftingObjectBGA* InCraftingObject);                                             // [0xa3d8c28] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CraftingUI.FortPotContentsTile
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortPotContentsTile : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UCommonLazyImage*                            Image_Item;                                                 // 0x14E8   (0x0008)  
};

/// Class /Script/CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortUIGameFeatureAction_SetCraftMenuWidget : public UFortUIGameFeatureAction
{ 
public:
	class UClass*                                      CraftingObject;                                             // 0x0028   (0x0008)  
	SDK_UNDEFINED(32,12580) /* TWeakObjectPtr<UClass*> */ __um(CraftingMenuWidget);                                // 0x0030   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

