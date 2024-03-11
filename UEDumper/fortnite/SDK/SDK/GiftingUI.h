
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
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: GameSubCatalog
/// dependency: SocialUMG
/// dependency: UMG

/// Enum /Script/GiftingUI.EGiftingPresentationMode
/// Size: 0x07
enum class EGiftingPresentationMode : uint8_t
{
	EGiftingPresentationMode__ConfirmPurchase                                        = 0,
	EGiftingPresentationMode__WrapOptions                                            = 1,
	EGiftingPresentationMode__GiftingProcess                                         = 2,
	EGiftingPresentationMode__GiftingError                                           = 3,
	EGiftingPresentationMode__GiftConfirmed                                          = 4,
	EGiftingPresentationMode__None                                                   = 5,
	EGiftingPresentationMode__EGiftingPresentationMode_MAX                           = 6
};

/// Enum /Script/GiftingUI.EGiftingPricePresentationMode
/// Size: 0x04
enum class EGiftingPricePresentationMode : uint8_t
{
	EGiftingPricePresentationMode__MtxCurrency                                       = 0,
	EGiftingPricePresentationMode__RealMoney                                         = 1,
	EGiftingPricePresentationMode__Hidden                                            = 2,
	EGiftingPricePresentationMode__EGiftingPricePresentationMode_MAX                 = 3
};

/// Enum /Script/GiftingUI.EFilterType
/// Size: 0x03
enum class EFilterType : uint8_t
{
	EFilterType__All                                                                 = 0,
	EFilterType__Party                                                               = 1,
	EFilterType__EFilterType_MAX                                                     = 2
};

/// Enum /Script/GiftingUI.EGiftingScreenPresentationMode
/// Size: 0x03
enum class EGiftingScreenPresentationMode : uint8_t
{
	EGiftingScreenPresentationMode__ItemList                                         = 0,
	EGiftingScreenPresentationMode__NoContent                                        = 1,
	EGiftingScreenPresentationMode__EGiftingScreenPresentationMode_MAX               = 2
};

/// Enum /Script/GiftingUI.ERecipientPresentationMode
/// Size: 0x05
enum class ERecipientPresentationMode : uint8_t
{
	ERecipientPresentationMode__Loading                                              = 0,
	ERecipientPresentationMode__GiftPrice                                            = 1,
	ERecipientPresentationMode__AlreadyOwned                                         = 2,
	ERecipientPresentationMode__Unavailable                                          = 3,
	ERecipientPresentationMode__ERecipientPresentationMode_MAX                       = 4
};

/// Class /Script/GiftingUI.AthenaGiftConfirmedPanel
/// Size: 0x0030 (0x000400 - 0x000430)
class UAthenaGiftConfirmedPanel : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0400   (0x0018)  MISSED
	class URichTextBlock*                              Text_RecipientInfo;                                         // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0428   (0x0008)  
};

/// Class /Script/GiftingUI.AthenaGiftingConfirmationScreen
/// Size: 0x0158 (0x000400 - 0x000558)
class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0400   (0x0030)  MISSED
	class UFortStoreFrontOfferInfo*                    PresentedGiftableOfferInfo;                                 // 0x0430   (0x0008)  
	class UFortStoreFrontOfferInfo*                    PresentedOptionalTokenOfferInfo;                            // 0x0438   (0x0008)  
	unsigned char                                      UnknownData01_5[0xBC];                                      // 0x0440   (0x00BC)  MISSED
	float                                              MinGiftSubmissionDelay;                                     // 0x04FC   (0x0004)  
	float                                              MaxGiftSubmissionDelay;                                     // 0x0500   (0x0004)  
	unsigned char                                      UnknownData02_5[0x14];                                      // 0x0504   (0x0014)  MISSED
	class UCommonButtonBase*                           Button_WrapOptions;                                         // 0x0518   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0520   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0528   (0x0008)  
	class UCommonButtonBase*                           Button_MtxWallet;                                           // 0x0530   (0x0008)  
	class UAthenaGiftingPurchasePanel*                 Panel_GiftingPurchase;                                      // 0x0538   (0x0008)  
	class UAthenaGiftingWrapOptionsPanel*              Panel_WrapOptions;                                          // 0x0540   (0x0008)  
	class UAthenaGiftConfirmedPanel*                   Panel_GiftConfirmed;                                        // 0x0548   (0x0008)  
	class UAthenaGiftingErrorsPanel*                   Panel_GiftingErrors;                                        // 0x0550   (0x0008)  


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged
	// void OnPresentationModeChanged(EGiftingPresentationMode NewMode);                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete
	// void HandleTokenOfferPurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems);                     // [0xa936874] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent
	// void HandleGiftSent(bool bSuccess, TArray<FString>& IneligibleAccounts, TArray<FString>& ErrorCodes);                 // [0xa93650c] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.Dismiss
	// void Dismiss(bool bGiftConfirmed);                                                                                    // [0xa936470] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/GiftingUI.AthenaGiftingErrorsPanel
/// Size: 0x0060 (0x000400 - 0x000460)
class UAthenaGiftingErrorsPanel : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0400   (0x0030)  MISSED
	class URichTextBlock*                              Text_RecipientInfo;                                         // 0x0430   (0x0008)  
	class URichTextBlock*                              Text_Title;                                                 // 0x0438   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0440   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0448   (0x0008)  
	class UCommonButtonBase*                           Button_Continue;                                            // 0x0450   (0x0008)  
	class UTileView*                                   TileView_Items;                                             // 0x0458   (0x0008)  


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility
	// void UpdateGiftEligibility(bool bStillGiftable);                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingPriceWidget
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UAthenaGiftingPriceWidget : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            Text_RealMoneyPrice;                                        // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            Text_FinalPrice;                                            // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            Text_RegularPrice;                                          // 0x02F8   (0x0008)  
	class UWidget*                                     Overlay_SalePrice;                                          // 0x0300   (0x0008)  


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode
	// void SetPresentationMode(EGiftingPricePresentationMode Mode);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingPurchaseButton
/// Size: 0x0010 (0x001530 - 0x001540)
class UAthenaGiftingPurchaseButton : public UFortHoldableButton
{ 
public:
	class UAthenaGiftingPriceWidget*                   Widget_Price;                                               // 0x1528   (0x0008)  
	class UCommonTextBlock*                            Text_Title;                                                 // 0x1530   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1538   (0x0008)  MISSED
};

/// Class /Script/GiftingUI.AthenaGiftingPurchasePanel
/// Size: 0x0048 (0x000400 - 0x000448)
class UAthenaGiftingPurchasePanel : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0400   (0x0018)  MISSED
	class UAthenaGiftingPurchaseButton*                Button_PurchaseGift;                                        // 0x0418   (0x0008)  
	class UFortSocialAvatarIcon*                       Avatar_MemberIcon;                                          // 0x0420   (0x0008)  
	class UCommonTextBlock*                            Text_SocialNameInfo;                                        // 0x0428   (0x0008)  
	class UCommonTextBlock*                            Text_ItemsCount;                                            // 0x0430   (0x0008)  
	class UCommonTextBlock*                            Text_OfferName;                                             // 0x0438   (0x0008)  
	class UTileView*                                   TileView_Items;                                             // 0x0440   (0x0008)  


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation
	// void PlayIntroAnimation();                                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/GiftingUI.AthenaGiftingScreenGiftableItemsData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAthenaGiftingScreenGiftableItemsData
{ 
	TArray<class UFortItemDefinition*>                 ItemDefinitions;                                            // 0x0000   (0x0010)  
	TArray<FItemPreviewSettings>                       PreviewSettings;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Class /Script/GiftingUI.AthenaGiftingScreen
/// Size: 0x0208 (0x000730 - 0x000938)
class UAthenaGiftingScreen : public UFortItemPreviewScreen
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0730   (0x0008)  MISSED
	class UFortGiftingUserSearchWidget*                SearchWidget_SocialSearchWidget;                            // 0x0738   (0x0008)  
	class UFortGiftingSocialUserListView*              ListView_Recipients;                                        // 0x0740   (0x0008)  
	class UTileView*                                   TileView_Items;                                             // 0x0748   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0750   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0758   (0x0008)  
	class UCommonButtonBase*                           Button_GiftingPolicy;                                       // 0x0760   (0x0008)  
	class UCommonButtonBase*                           Button_CameraControl;                                       // 0x0768   (0x0008)  
	class UCommonTextBlock*                            Text_OfferName;                                             // 0x0770   (0x0008)  
	class UCommonTextBlock*                            Text_VBucksOffCount;                                        // 0x0778   (0x0008)  
	class UCommonTextBlock*                            Text_ShownItemIndex;                                        // 0x0780   (0x0008)  
	class UCommonRichTextBlock*                        Text_NoContent;                                             // 0x0788   (0x0008)  
	class UCommonRichTextBlock*                        RichText_OfferItemOwnedCount;                               // 0x0790   (0x0008)  
	class UOverlay*                                    Container_VBucksOffViolator;                                // 0x0798   (0x0008)  
	class UCommonRichTextBlock*                        RichText_GiftCount;                                         // 0x07A0   (0x0008)  
	class UAthenaGiftingPriceWidget*                   Widget_Price;                                               // 0x07A8   (0x0008)  
	class UAthenaLockerItemInfo*                       Widget_ItemInfo;                                            // 0x07B0   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_FilterTabs;                                        // 0x07B8   (0x0008)  
	class UCommonActionWidget*                         ActionWidget_FilterTabsPrevious;                            // 0x07C0   (0x0008)  
	class UCommonActionWidget*                         ActionWidget_FilterTabsNext;                                // 0x07C8   (0x0008)  
	class UAthenaGiftingConfirmationScreen*            ActivatableWidget_GiftingConfirmation;                      // 0x07D0   (0x0008)  
	float                                              ItemCyclingInterval;                                        // 0x07D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x07DC   (0x0004)  MISSED
	FDataTableRowHandle                                FilterTabsPreviousAction;                                   // 0x07E0   (0x0010)  
	FDataTableRowHandle                                FilterTabsNextAction;                                       // 0x07F0   (0x0010)  
	SDK_UNDEFINED(24,14076) /* FText */                __um(RegularGiftingPolicy);                                 // 0x0800   (0x0018)  
	SDK_UNDEFINED(24,14077) /* FText */                __um(BattlePassGiftingPolicy);                              // 0x0818   (0x0018)  
	unsigned char                                      UnknownData02_5[0x60];                                      // 0x0830   (0x0060)  MISSED
	SDK_UNDEFINED(80,14078) /* TMap<UCommonButtonBase*, EFilterType> */ __um(FilterMap);                           // 0x0890   (0x0050)  
	class UCommonButtonGroupBase*                      FilterGroup;                                                // 0x08E0   (0x0008)  
	FAthenaGiftingScreenGiftableItemsData              GiftableItems;                                              // 0x08E8   (0x0030)  
	class UFortItemDefinition*                         PresentedItemDefinition;                                    // 0x0918   (0x0008)  
	class UFortStoreFrontOfferInfo*                    GiftableOfferInfo;                                          // 0x0920   (0x0008)  
	class UFortStoreFrontOfferInfo*                    OptionalTokenOfferInfo;                                     // 0x0928   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0930   (0x0008)  MISSED


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText
	// void OnShowSearchWarningText(bool bShow);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnShownItemChanged
	// void OnShownItemChanged();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton
	// void OnSetupFilterTabButton(class UCommonButtonBase* Button, EFilterType FilterType);                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged
	// void OnPresentationModeChanged(EGiftingScreenPresentationMode Mode);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnPartyListUpdated
	// void OnPartyListUpdated(bool bEmpty);                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnHandlePreviewItem
	// void OnHandlePreviewItem(bool bUseWidePreview);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged
	// void OnFriendSelectionChanged();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnFilterChanged
	// void OnFilterChanged(EFilterType FilterType);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.BlockScreenContent
	// void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText);                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingWrapOptionsPanel
/// Size: 0x0068 (0x000400 - 0x000468)
class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0400   (0x0028)  MISSED
	SDK_UNDEFINED(16,14079) /* TArray<TWeakObjectPtr<UFortGiftBoxItemDefinition*>> */ __um(GiftBoxes);             // 0x0428   (0x0010)  
	TArray<class UFortGiftBoxItemDefinition*>          GiftBoxItemDefs;                                            // 0x0438   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0448   (0x0010)  MISSED
	class UCommonButtonLegacy*                         Button_ConfirmWrap;                                         // 0x0458   (0x0008)  
	class UTileView*                                   TileView_WrapOptions;                                       // 0x0460   (0x0008)  
};

/// Class /Script/GiftingUI.FortGiftingSocialUserListEntry
/// Size: 0x00E0 (0x001500 - 0x0015E0)
class UFortGiftingSocialUserListEntry : public USocialListEntryBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xC0];                                      // 0x14F8   (0x00C0)  MISSED
	class UFortSocialAvatarIcon*                       Avatar_MemberIcon;                                          // 0x15B8   (0x0008)  
	class USocialNameTextBlock*                        Text_SocialName;                                            // 0x15C0   (0x0008)  
	class UCommonRichTextBlock*                        RichText_EligibilityStatus;                                 // 0x15C8   (0x0008)  
	class UCommonRichTextBlock*                        RichText_OwnedItems;                                        // 0x15D0   (0x0008)  
	class UAthenaGiftingPriceWidget*                   Widget_Price;                                               // 0x15D8   (0x0008)  


	/// Functions
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode
	// void SetPresentationMode(ERecipientPresentationMode Mode);                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet
	// void OnUserItemSet();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated
	// void OnRecipientStatusUpdated();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed
	// void BP_OnTouchSelectionConfirmed();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged
	// void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation);                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.FortGiftingSocialUserListView
/// Size: 0x00F8 (0x0003A8 - 0x0004A0)
class UFortGiftingSocialUserListView : public USocialUserListViewBase
{ 
public:
	float                                              RefreshRecipientStatusDelay;                                // 0x03A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xF4];                                      // 0x03AC   (0x00F4)  MISSED
};

/// Class /Script/GiftingUI.FortGiftingUserSearchWidget
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortGiftingUserSearchWidget : public UCommonUserWidget
{ 
public:
	class UEditableText*                               EditableText_SearchFriends;                                 // 0x02E8   (0x0008)  
	class UCommonButtonBase*                           Button_ClearQuery;                                          // 0x02F0   (0x0008)  
	class UCommonButtonBase*                           Button_SubmitQuery;                                         // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0300   (0x0030)  MISSED


	/// Functions
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit
	// void OnSearchCommit(bool bSearchStringShort);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered
	// void HandleSearchFriendsTextEntered(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                              // [0xa9366e4] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged
	// void HandleSearchFriendsTextChanged(FText& Text);                                                                     // [0xa936658] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.FocusEditableText
	// void FocusEditableText();                                                                                             // [0xa9364f0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GiftingUI.FortGiftingWrapOptionListEntry
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortGiftingWrapOptionListEntry : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UFortGiftBoxItemDefinition*                  GiftBoxDefinition;                                          // 0x14E8   (0x0008)  
	class UCommonLazyImage*                            Image_Gift;                                                 // 0x14F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x14F8   (0x0008)  MISSED
};

/// Class /Script/GiftingUI.FortGiftingData
/// Size: 0x0020 (0x000530 - 0x000550)
class UFortGiftingData : public UFortGameFeatureData
{ 
public:
	SDK_UNDEFINED(32,14080) /* TWeakObjectPtr<UClass*> */ __um(GiftingScreenClass);                                // 0x0530   (0x0020)  
};

/// Struct /Script/GiftingUI.FortGiftingRecipientState
/// Size: 0x0088 (0x000000 - 0x000088)
struct FFortGiftingRecipientState
{ 
	FCatalogItemPrice                                  Price;                                                      // 0x0000   (0x0050)  
	TArray<FItemQuantity>                              Items;                                                      // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

