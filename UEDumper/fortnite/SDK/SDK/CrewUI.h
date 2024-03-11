
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
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay
/// dependency: UMG

/// Enum /Script/CrewUI.EBattlePassCrewContentState
/// Size: 0x04
enum class EBattlePassCrewContentState : uint8_t
{
	EBattlePassCrewContentState__BattlePass                                          = 0,
	EBattlePassCrewContentState__Crew                                                = 1,
	EBattlePassCrewContentState__CrewSubscribed                                      = 2,
	EBattlePassCrewContentState__EBattlePassCrewContentState_MAX                     = 3
};

/// Enum /Script/CrewUI.EFortProgressiveContentInterfaceCloseReason
/// Size: 0x03
enum class EFortProgressiveContentInterfaceCloseReason : uint8_t
{
	EFortProgressiveContentInterfaceCloseReason__Normal                              = 0,
	EFortProgressiveContentInterfaceCloseReason__SubscriptionPurchased               = 1,
	EFortProgressiveContentInterfaceCloseReason__EFortProgressiveContentInterfaceCloseReason_MAX = 2
};

/// Enum /Script/CrewUI.EFortProgressiveContentType
/// Size: 0x03
enum class EFortProgressiveContentType : uint8_t
{
	EFortProgressiveContentType__ProgressiveTableOfContentsScreen                    = 0,
	EFortProgressiveContentType__ProgressiveItemScreen                               = 1,
	EFortProgressiveContentType__EFortProgressiveContentType_MAX                     = 2
};

/// Enum /Script/CrewUI.EBattlePassPurchaseButtonCurrencyType
/// Size: 0x04
enum class EBattlePassPurchaseButtonCurrencyType : uint8_t
{
	EBattlePassPurchaseButtonCurrencyType__None                                      = 0,
	EBattlePassPurchaseButtonCurrencyType__Mtx                                       = 1,
	EBattlePassPurchaseButtonCurrencyType__RealMoney                                 = 2,
	EBattlePassPurchaseButtonCurrencyType__EBattlePassPurchaseButtonCurrencyType_MAX = 3
};

/// Enum /Script/CrewUI.EBattlePassPurchaseState
/// Size: 0x03
enum class EBattlePassPurchaseState : uint8_t
{
	EBattlePassPurchaseState__Purchase                                               = 0,
	EBattlePassPurchaseState__Confirm                                                = 1,
	EBattlePassPurchaseState__EBattlePassPurchaseState_MAX                           = 2
};

/// Enum /Script/CrewUI.ECrewPurchaseButtonState
/// Size: 0x05
enum class ECrewPurchaseButtonState : uint8_t
{
	ECrewPurchaseButtonState__None                                                   = 0,
	ECrewPurchaseButtonState__Purchase                                               = 1,
	ECrewPurchaseButtonState__Rejoin                                                 = 2,
	ECrewPurchaseButtonState__Continue                                               = 3,
	ECrewPurchaseButtonState__ECrewPurchaseButtonState_MAX                           = 4
};

/// Class /Script/CrewUI.BattlePassCrewContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBattlePassCrewContentInterface : public UInterface
{ 
public:
};

/// Class /Script/CrewUI.CrewScreenContentBlockingInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrewScreenContentBlockingInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/CrewUI.CrewScreenContentBlockingInterface.BlockScreenContent
	// void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText);                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortProgressiveContentInterface : public UInterface
{ 
public:
};

/// Class /Script/CrewUI.FortTemporaryItemsComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortTemporaryItemsComponent : public UControllerComponent
{ 
public:
	class UFortTemporaryItemsManager*                  TemporaryItemsManager;                                      // 0x00A0   (0x0008)  
	SDK_UNDEFINED(8,12739) /* TWeakObjectPtr<UFortMcpProfileAthena*> */ __um(AthenaProfile);                       // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsComponent.OnAthenaProfileInitialized
	// void OnAthenaProfileInitialized();                                                                                    // [0x22fb814] Final|Native|Private 
};

/// Class /Script/CrewUI.FortTemporaryItemsManager
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortTemporaryItemsManager : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsManager.OnTemporaryItemsStateChanged
	// void OnTemporaryItemsStateChanged();                                                                                  // [0xa8ec4a0] Final|Native|Private 
};

/// Class /Script/CrewUI.FortTemporaryItemsRewardGroupVM
/// Size: 0x0020 (0x000068 - 0x000088)
class UFortTemporaryItemsRewardGroupVM : public UMVVMViewModelBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0068   (0x0008)  MISSED
	EAthenaCustomizationCategory                       Category;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<class UFortTemporaryItemsRewardVM*>         Rewards;                                                    // 0x0078   (0x0010)  
};

/// Class /Script/CrewUI.FortTemporaryItemsRewardVM
/// Size: 0x0018 (0x000068 - 0x000080)
class UFortTemporaryItemsRewardVM : public UMVVMViewModelBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UFortAccountItemDefinition*                  ItemDefinition;                                             // 0x0070   (0x0008)  
	bool                                               bIsOwned;                                                   // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/CrewUI.FortTemporaryItemsRow
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UFortTemporaryItemsRow : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x02C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsRow.SetTileView
	// void SetTileView(class UTileView* InTileView);                                                                        // [0x99c7ad8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CrewUI.FortTemporaryItemsRow.GetCategoryText
	// FText GetCategoryText(EAthenaCustomizationCategory InCategory);                                                       // [0xa8ec258] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CrewUI.FortTemporaryItemsScreenItemInfo
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortTemporaryItemsScreenItemInfo : public UCommonUserWidget
{ 
public:
	class UAthenaRewardItemTypeRarityTag*              Widget_ItemTypeRarityTag;                                   // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            Text_ItemName;                                              // 0x02F0   (0x0008)  
	class UCommonRichTextBlock*                        RichText_Description;                                       // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsScreenItemInfo.SetData
	// void SetData(class UFortSubscriptionVM* SubscriptionVM, class UFortTemporaryItemsRewardVM* RewardVM);                 // [0xa8ec5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CrewUI.FortTemporaryItemsScreenItemInfo.OnDataSet
	// void OnDataSet(bool bValidItem, bool bIsSubscribed, bool IsOwned);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortTemporaryItemsTileButton
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFortTemporaryItemsTileButton : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x1490   (0x0008)  MISSED
	class UFortCosmeticItemCard*                       ItemCard;                                                   // 0x1498   (0x0008)  


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsTileButton.SetupRewardItem
	// void SetupRewardItem(class UFortAccountItemDefinition* ItemDef);                                                      // [0xa8ec6a4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CrewUI.FortTemporaryItemsVM
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortTemporaryItemsVM : public UFortPerUserViewModel
{ 
public:
	TArray<class UFortTemporaryItemsRewardGroupVM*>    RewardGroups;                                               // 0x0070   (0x0010)  
	FDateTime                                          ExpirationDate;                                             // 0x0080   (0x0008)  
	class UFortTemporaryItemsManager*                  TemporaryItemsManager;                                      // 0x0088   (0x0008)  
};

/// Class /Script/CrewUI.BattlePassCrewPurchaseButton
/// Size: 0x0020 (0x001530 - 0x001550)
class UBattlePassCrewPurchaseButton : public UFortHoldableButton
{ 
public:
	EBattlePassPurchaseButtonCurrencyType              CurrencyType;                                               // 0x1528   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x1529   (0x0007)  MISSED
	class UCommonTextBlock*                            Text_Label;                                                 // 0x1530   (0x0008)  
	class UCommonTextBlock*                            Text_SecondaryLabel;                                        // 0x1538   (0x0008)  
	class UCommonTextBlock*                            Text_FinalCost;                                             // 0x1540   (0x0008)  
	class UWidget*                                     Container_SecondaryLabel;                                   // 0x1548   (0x0008)  


	/// Functions
	// Function /Script/CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated
	// void OnCurrencyUpdated();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.BattlePassCrewPurchaseContainer
/// Size: 0x0080 (0x000400 - 0x000480)
class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0400   (0x0020)  MISSED
	float                                              CrewUpsellTransitionDelayTime;                              // 0x0420   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0424   (0x000C)  MISSED
	class UCommonActivatableWidgetSwitcher*            Switcher_ContentContainer;                                  // 0x0430   (0x0008)  
	class UBattlePassPurchaseScreen*                   BattlePassPurchaseScreen;                                   // 0x0438   (0x0008)  
	class UWidgetAnimation*                            Intro;                                                      // 0x0440   (0x0008)  
	class UWidgetAnimation*                            QuickIntro;                                                 // 0x0448   (0x0008)  
	class UWidgetAnimation*                            CrewBenefitsIntro;                                          // 0x0450   (0x0008)  
	class UClass*                                      CrewSubscriptionErrorModalClass;                            // 0x0458   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0460   (0x0020)  MISSED


	/// Functions
	// Function /Script/CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation
	// void OnTriggerIntroAnimation(bool bCanClaimRewards);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated
	// void OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened);                                // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.BattlePassSeasonHeading
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UBattlePassSeasonHeading : public UCommonUserWidget
{ 
public:
	class UCommonRichTextBlock*                        Text_Season;                                                // 0x02E8   (0x0008)  
};

/// Class /Script/CrewUI.BattlePassPurchaseScreen
/// Size: 0x0128 (0x000440 - 0x000568)
class UBattlePassPurchaseScreen : public UCMSBackgroundWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x3C];                                      // 0x0440   (0x003C)  MISSED
	float                                              CrewTransitionDelayTime;                                    // 0x047C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x70];                                      // 0x0480   (0x0070)  MISSED
	class UClass*                                      PurchaseCompleteModal;                                      // 0x04F0   (0x0008)  
	class UCommonButtonBase*                           Button_ToCrew;                                              // 0x04F8   (0x0008)  
	class UBattlePassCrewPurchaseButton*               Button_Purchase;                                            // 0x0500   (0x0008)  
	class UCommonButtonBase*                           Button_MoreInfo;                                            // 0x0508   (0x0008)  
	class UCommonButtonBase*                           Button_GiftBattlePass;                                      // 0x0510   (0x0008)  
	class UBattlePassCrewPurchaseButton*               Button_ConfirmBase;                                         // 0x0518   (0x0008)  
	class UBattlePassCrewPurchaseButton*               Button_ConfirmBundle;                                       // 0x0520   (0x0008)  
	class UBattlePassSeasonHeading*                    Heading_Primary;                                            // 0x0528   (0x0008)  
	class UBattlePassSeasonHeading*                    Heading_Secondary;                                          // 0x0530   (0x0008)  
	class UCommonRichTextBlock*                        RichText_Disclaimer;                                        // 0x0538   (0x0008)  
	class UCommonTextBlock*                            Text_Description;                                           // 0x0540   (0x0008)  
	class UCommonAnimatedSwitcher*                     Switcher_PurchaseState;                                     // 0x0548   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0550   (0x0018)  MISSED


	/// Functions
	// Function /Script/CrewUI.BattlePassPurchaseScreen.RefreshFocus
	// void RefreshFocus();                                                                                                  // [0x23767a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification
	// void OnShowNavButtonNotification(bool bShowNotification);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable
	// void OnSetScreenInteractable(bool bInteractable);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText
	// void OnSetNavButtonNotificationText(FText& NotificationText);                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged
	// void OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed
	// void OnPurchaseConfirmed();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewMultiSubscriptionAlertModal
/// Size: 0x00E0 (0x000400 - 0x0004E0)
class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UDynamicEntryBox*                            EntryBox_BulletPoints;                                      // 0x0408   (0x0008)  
	class UCommonButtonBase*                           Button_OpenHowToURL;                                        // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_TextURL;                                             // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_DoNotRemind;                                         // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_Close;                                               // 0x0428   (0x0008)  
	class UCommonButtonBase*                           Button_TouchClose;                                          // 0x0430   (0x0008)  
	SDK_UNDEFINED(16,12740) /* TArray<FText> */        __um(BulletPoints);                                         // 0x0438   (0x0010)  
	SDK_UNDEFINED(80,12741) /* TMap<EAppStore, FText> */ __um(AppStorePlatformMapping);                            // 0x0448   (0x0050)  
	SDK_UNDEFINED(16,12742) /* FString */              __um(HowToCancelURL);                                       // 0x0498   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x04A8   (0x0020)  MISSED
	SDK_UNDEFINED(24,12743) /* FText */                __um(PlatformTextStyle);                                    // 0x04C8   (0x0018)  


	/// Functions
	// Function /Script/CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL
	// void OnSetHowToCancelURL(FString MoreInfoUrl);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewPriceChangeAcknowledgeModal
/// Size: 0x0198 (0x000400 - 0x000598)
class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UCommonButtonBase*                           Button_Accept;                                              // 0x0408   (0x0008)  
	class UCommonButtonBase*                           Button_CancelSubscription;                                  // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_MoreInfo;                                            // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_TextURL;                                             // 0x0420   (0x0008)  
	SDK_UNDEFINED(32,12744) /* TWeakObjectPtr<UClass*> */ __um(CancellationInfoModalClass);                        // 0x0428   (0x0020)  
	unsigned char                                      UnknownData01_6[0x150];                                     // 0x0448   (0x0150)  MISSED


	/// Functions
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle
	// void OnSetPriceChangeAcknowledgeTitle(FText& Title);                                                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl
	// void OnSetPriceChangeAcknowledgeMoreInfoUrl(FText& MoreInfoUrl);                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText
	// void OnSetPriceChangeAcknowledgeMoreInfoText(FText& ConfirmButtonText);                                               // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText
	// void OnSetPriceChangeAcknowledgeConfirmButtonText(FText& ConfirmButtonText);                                          // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText
	// void OnSetPriceChangeAcknowledgeCheckboxText(FText& CheckboxText);                                                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText
	// void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(FText& CancelSubscriptionButtonText);                    // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText
	// void OnSetPriceChangeAcknowledgeBodyText(FText& BodyText);                                                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable
	// void OnSetPriceChangeAcknowledgeBodyTable(TArray<FCrewTableRow>& PriceChangeByRegionRows);                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout
	// void OnModalBackout();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal
	// void ExitModal();                                                                                                     // [0x3ee1514] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CrewUI.CrewPurchaseScreen
/// Size: 0x01B8 (0x000440 - 0x0005F8)
class UCrewPurchaseScreen : public UCMSBackgroundWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x78];                                      // 0x0440   (0x0078)  MISSED
	bool                                               bManagementModeEnabled;                                     // 0x04B8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x04B9   (0x0007)  MISSED
	class UWidget*                                     ContentPurchasedFocusWidget;                                // 0x04C0   (0x0008)  
	class UWidget*                                     FocusWidget;                                                // 0x04C8   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_BenefitsTiles;                                  // 0x04D0   (0x0008)  
	SDK_UNDEFINED(32,12745) /* TWeakObjectPtr<UClass*> */ __um(CancellationInfoModalClass);                        // 0x04D8   (0x0020)  
	SDK_UNDEFINED(32,12746) /* TWeakObjectPtr<UClass*> */ __um(LegalInfoModalClass);                               // 0x04F8   (0x0020)  
	SDK_UNDEFINED(32,12747) /* TWeakObjectPtr<UClass*> */ __um(ResolveIssueModalClass);                            // 0x0518   (0x0020)  
	SDK_UNDEFINED(32,12748) /* TWeakObjectPtr<UClass*> */ __um(RejoinModalClass);                                  // 0x0538   (0x0020)  
	SDK_UNDEFINED(32,12749) /* TWeakObjectPtr<UClass*> */ __um(ContinueModalClass);                                // 0x0558   (0x0020)  
	class UCommonButtonBase*                           Button_ToBattlePass;                                        // 0x0578   (0x0008)  
	class UBattlePassCrewPurchaseButton*               Button_Purchase;                                            // 0x0580   (0x0008)  
	class UBattlePassCrewPurchaseButton*               Button_Rejoin;                                              // 0x0588   (0x0008)  
	class UBattlePassCrewPurchaseButton*               Button_Continue;                                            // 0x0590   (0x0008)  
	class UCommonButtonBase*                           Button_ResolvePayment;                                      // 0x0598   (0x0008)  
	class UCommonButtonBase*                           Button_WatchTrailer;                                        // 0x05A0   (0x0008)  
	class UCommonButtonBase*                           Button_Terms;                                               // 0x05A8   (0x0008)  
	class UCommonButtonBase*                           Button_CancellationInfo;                                    // 0x05B0   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_RecurringRewards;                                  // 0x05B8   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_LimitedTimeRewards;                                // 0x05C0   (0x0008)  
	class UCrewTileDetails*                            Details_CurrentCrewTile;                                    // 0x05C8   (0x0008)  
	class UCommonTextBlock*                            Text_LimitedTime;                                           // 0x05D0   (0x0008)  
	class UOverlay*                                    Overlay_UserInformation;                                    // 0x05D8   (0x0008)  
	class UCommonTextBlock*                            Text_UserInformation;                                       // 0x05E0   (0x0008)  
	class UCommonTextBlock*                            Text_CrewDisclaimer;                                        // 0x05E8   (0x0008)  
	class UCommonBorder*                               Border_Disclaimer;                                          // 0x05F0   (0x0008)  


	/// Functions
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated
	// void OnUserInformationTextsUpdated(FText& UserInformationText1, FText& UserInformationText2, EMcpSubscriptionState SubscriptionState); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility
	// void OnUpdateVBuckRefundVisibility(bool bVisible);                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState
	// void OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState);                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification
	// void OnShowNavButtonNotification(bool bShowNotification);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnSetPaymentLegalText
	// void OnSetPaymentLegalText(FText& LegalText);                                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText
	// void OnSetNavButtonNotificationText(FText& NotificationText);                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated
	// void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.EndProgress
	// void EndProgress();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.BeginProgress
	// void BeginProgress(FText& ProgressLabel);                                                                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewRewardTile
/// Size: 0x0060 (0x001490 - 0x0014F0)
class UCrewRewardTile : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x40];                                      // 0x1490   (0x0040)  MISSED
	float                                              TileImageStreamoutSeconds;                                  // 0x14D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x14D4   (0x0004)  MISSED
	class UImage*                                      Image_TileImage;                                            // 0x14D8   (0x0008)  
	class UCommonTextBlock*                            Text_TileLabel;                                             // 0x14E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x14E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/CrewUI.CrewRewardTile.OnUpdateOwnedState
	// void OnUpdateOwnedState(bool bOwned);                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.OnStartingDownloadTileImage
	// void OnStartingDownloadTileImage();                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.OnDownloadTileImageComplete
	// void OnDownloadTileImageComplete(class UTexture2D* Texture);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.IsMonthlyBenefit
	// bool IsMonthlyBenefit();                                                                                              // [0xa8ec474] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CrewUI.CrewSeasonLaunchScreen
/// Size: 0x00E8 (0x000440 - 0x000528)
class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0440   (0x0038)  MISSED
	SDK_UNDEFINED(32,12750) /* TWeakObjectPtr<UClass*> */ __um(ResolveIssueModalClass);                            // 0x0478   (0x0020)  
	class UBattlePassSeasonHeading*                    Heading_SeasonInfo;                                         // 0x0498   (0x0008)  
	class UCommonTextBlock*                            Text_Description;                                           // 0x04A0   (0x0008)  
	class UCommonButtonBase*                           Button_Claim;                                               // 0x04A8   (0x0008)  
	class UCommonButtonBase*                           Button_ResolveIssue;                                        // 0x04B0   (0x0008)  
	class UCommonButtonBase*                           Button_GiftBattlePass;                                      // 0x04B8   (0x0008)  
	class UCommonRichTextBlock*                        RichText_Disclaimer;                                        // 0x04C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x04C8   (0x0060)  MISSED
};

/// Class /Script/CrewUI.CrewStandaloneSubscriptionContentContainer
/// Size: 0x0008 (0x0004D0 - 0x0004D8)
class UCrewStandaloneSubscriptionContentContainer : public UFortStandaloneFrontend
{ 
public:
	class UCrewSubscriptionContentContainer*           Widget_CrewContentContainer;                                // 0x04D0   (0x0008)  
};

/// Struct /Script/CrewUI.CrewSubscriptionContentTabData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCrewSubscriptionContentTabData
{ 
	SDK_UNDEFINED(24,12751) /* FText */                __um(TabName);                                              // 0x0000   (0x0018)  
	ESubscriptionContentTab                            TabType;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/CrewUI.CrewSubscriptionContentContainer
/// Size: 0x00A0 (0x000400 - 0x0004A0)
class UCrewSubscriptionContentContainer : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0400   (0x0030)  MISSED
	TArray<FCrewSubscriptionContentTabData>            TabsData;                                                   // 0x0430   (0x0010)  
	FDataTableRowHandle                                NextTabInputAction;                                         // 0x0440   (0x0010)  
	FDataTableRowHandle                                PreviousTabInputAction;                                     // 0x0450   (0x0010)  
	class UDynamicEntryBox*                            EntryBox_Tabs;                                              // 0x0460   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_Tabs;                                           // 0x0468   (0x0008)  
	class UCommonActivatableWidgetSwitcher*            Switcher_Tabs;                                              // 0x0470   (0x0008)  
	class UWidget*                                     Widget_TabsContainer;                                       // 0x0478   (0x0008)  
	float                                              SpacingAdjustmentForTabs;                                   // 0x0480   (0x0004)  
	FPrimaryContentSetup                               ContentSetup;                                               // 0x0484   (0x0003)  
	unsigned char                                      UnknownData01_6[0x19];                                      // 0x0487   (0x0019)  MISSED


	/// Functions
	// Function /Script/CrewUI.CrewSubscriptionContentContainer.OnTabSelected
	// void OnTabSelected(int32_t TabIndex);                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewSubscriptionErrorModal
/// Size: 0x0010 (0x000400 - 0x000410)
class UCrewSubscriptionErrorModal : public UCommonActivatableWidget
{ 
public:
	class UCommonButtonBase*                           Button_Close;                                               // 0x0400   (0x0008)  
	class UCommonButtonBase*                           Button_TouchClose;                                          // 0x0408   (0x0008)  
};

/// Class /Script/CrewUI.CrewTileDetails
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UCrewTileDetails : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x02E8   (0x0028)  MISSED
	class UCommonTextBlock*                            Text_Title;                                                 // 0x0310   (0x0008)  
	class UCommonRichTextBlock*                        RichText_Description;                                       // 0x0318   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_Tags;                                              // 0x0320   (0x0008)  
	class UCommonButtonBase*                           Button_MobileMoreInfo;                                      // 0x0328   (0x0008)  
};

/// Class /Script/CrewUI.CrewTileDetailsTag
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UCrewTileDetailsTag : public UCommonUserWidget
{ 
public:
	class UCommonRichTextBlock*                        Text_Label;                                                 // 0x02E8   (0x0008)  


	/// Functions
	// Function /Script/CrewUI.CrewTileDetailsTag.OnTagSetup
	// void OnTagSetup(ECrewDetailsTag RewardTag, bool bIsOwnedTag);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Struct /Script/CrewUI.FortProgressiveReward
/// Size: 0x0058 (0x000000 - 0x000058)
struct FFortProgressiveReward
{ 
	TArray<FCosmeticVariantInfo>                       DefaultVariantPreviewOverrides;                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(32,12752) /* TWeakObjectPtr<UMaterialInterface*> */ __um(TileMaterial);                          // 0x0010   (0x0020)  
	bool                                               bHidden;                                                    // 0x0030   (0x0001)  
	bool                                               bAllowPreviewStyles;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	SDK_UNDEFINED(32,12753) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(RewardDef);                            // 0x0038   (0x0020)  
};

/// Struct /Script/CrewUI.FortProgressiveStageOverrideDisplayData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFortProgressiveStageOverrideDisplayData
{ 
	TArray<FCosmeticVariantInfo>                       DefaultVariantPreviewOverrides;                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,12754) /* FText */                __um(DisplayName);                                          // 0x0010   (0x0018)  
	SDK_UNDEFINED(32,12755) /* TWeakObjectPtr<UMaterialInterface*> */ __um(TileMaterial);                          // 0x0028   (0x0020)  
	bool                                               bAllowPreviewStyles;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/CrewUI.FortProgressiveUIStage
/// Size: 0x0068 (0x000000 - 0x000068)
struct FFortProgressiveUIStage
{ 
	TArray<FFortProgressiveReward>                     Rewards;                                                    // 0x0000   (0x0010)  
	bool                                               bUseOverrideDisplayData;                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FFortProgressiveStageOverrideDisplayData           OverrideDisplayData;                                        // 0x0018   (0x0050)  
};

/// Struct /Script/CrewUI.FortProgressiveSet
/// Size: 0x0058 (0x000000 - 0x000058)
struct FFortProgressiveSet
{ 
	SDK_UNDEFINED(16,12756) /* FString */              __um(FulfillmentId);                                        // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,12757) /* FText */                __um(SetName);                                              // 0x0010   (0x0018)  
	SDK_UNDEFINED(32,12758) /* TWeakObjectPtr<UMaterialInterface*> */ __um(TileMaterial);                          // 0x0028   (0x0020)  
	TArray<FFortProgressiveUIStage>                    Stages;                                                     // 0x0048   (0x0010)  
};

/// Class /Script/CrewUI.CrewUIGameFeatureAction
/// Size: 0x0120 (0x000028 - 0x000148)
class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,12759) /* TWeakObjectPtr<UClass*> */ __um(BattlePassCrewContainerClass);                      // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,12760) /* TWeakObjectPtr<UClass*> */ __um(CrewContentContainerClass);                         // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,12761) /* TWeakObjectPtr<UClass*> */ __um(CrewStandaloneContentContainerClass);               // 0x0068   (0x0020)  
	SDK_UNDEFINED(32,12762) /* TWeakObjectPtr<UClass*> */ __um(CrewPurchaseScreenClass);                           // 0x0088   (0x0020)  
	SDK_UNDEFINED(32,12763) /* TWeakObjectPtr<UClass*> */ __um(ProgressionScreenClass);                            // 0x00A8   (0x0020)  
	SDK_UNDEFINED(32,12764) /* TWeakObjectPtr<UClass*> */ __um(TemporaryItemsScreenClass);                         // 0x00C8   (0x0020)  
	SDK_UNDEFINED(32,12765) /* TWeakObjectPtr<UClass*> */ __um(CrewPriceChangeAcknowledgeModalClass);              // 0x00E8   (0x0020)  
	SDK_UNDEFINED(32,12766) /* TWeakObjectPtr<UClass*> */ __um(MultiSubAlertModalClass);                           // 0x0108   (0x0020)  
	TArray<FFortProgressiveSet>                        ProgressiveCosmeticSets;                                    // 0x0128   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0138   (0x0010)  MISSED
};

/// Class /Script/CrewUI.FortProgressiveContentContainer
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortProgressiveContentContainer : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0400   (0x0038)  MISSED
	class UCommonActivatableWidgetSwitcher*            Switcher_PrimaryContent;                                    // 0x0438   (0x0008)  
	class UFortProgressiveTableOfContentsScreen*       Widget_ProgressiveTableOfContentsScreen;                    // 0x0440   (0x0008)  
	class UFortProgressiveItemScreen*                  Widget_ProgressiveItemScreen;                               // 0x0448   (0x0008)  
};

/// Class /Script/CrewUI.FortProgressiveItemDetailsWidget
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UFortProgressiveItemDetailsWidget : public UUserWidget
{ 
public:
	class UCommonTextBlock*                            Text_CosmeticStage;                                         // 0x02C0   (0x0008)  
	class UCommonRichTextBlock*                        Text_UnlockCriteria;                                        // 0x02C8   (0x0008)  
	class UWidget*                                     Widget_UnlockCriteriaContainer;                             // 0x02D0   (0x0008)  
	class UAthenaRewardItemTypeRarityTag*              Widget_ItemTypeRarityTag;                                   // 0x02D8   (0x0008)  
	class UWidget*                                     Tag_Owned;                                                  // 0x02E0   (0x0008)  
};

/// Class /Script/CrewUI.FortProgressiveScreenBase
/// Size: 0x0078 (0x000730 - 0x0007A8)
class UFortProgressiveScreenBase : public UFortItemPreviewScreen
{ 
public:
	unsigned char                                      UnknownData00_3[0x64];                                      // 0x0730   (0x0064)  MISSED
	float                                              RewardPreviewTime;                                          // 0x0794   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0798   (0x0010)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveScreenBase.BP_OnContainerTabVisibilityUpdated
	// void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveItemScreen
/// Size: 0x0110 (0x0007A8 - 0x0008B8)
class UFortProgressiveItemScreen : public UFortProgressiveScreenBase
{ 
public:
	class UWidget*                                     ContentPurchasedFocusWidget;                                // 0x07A8   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x07B0   (0x0008)  
	class UCommonButtonBase*                           Button_TouchBack;                                           // 0x07B8   (0x0008)  
	class UCommonButtonBase*                           Button_MoreInfo;                                            // 0x07C0   (0x0008)  
	class UBattlePassCrewPurchaseButton*               Button_Subscribe;                                           // 0x07C8   (0x0008)  
	class UCommonButtonBase*                           Button_PreviewStyles;                                       // 0x07D0   (0x0008)  
	class UCommonTextBlock*                            Text_ExpirationFinePrint;                                   // 0x07D8   (0x0008)  
	class UCommonTextBlock*                            Text_NewStagesUnlockFinePrint;                              // 0x07E0   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_StagesPips;                                        // 0x07E8   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_StagesPips;                                     // 0x07F0   (0x0008)  
	class UFortProgressiveItemDetailsWidget*           Widget_ProgressiveItemDetails;                              // 0x07F8   (0x0008)  
	class UFortProgressiveStageList*                   Widget_ProgressiveStageList;                                // 0x0800   (0x0008)  
	class UFortProgressiveItemStateTitleWidget*        ProgressiveItemStateTitle;                                  // 0x0808   (0x0008)  
	SDK_UNDEFINED(32,12767) /* TWeakObjectPtr<UClass*> */ __um(MoreInfoModalClass);                                // 0x0810   (0x0020)  
	FName                                              SubscribedMaterialParameterName;                            // 0x0830   (0x0004)  
	unsigned char                                      UnknownData00_6[0x84];                                      // 0x0834   (0x0084)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState
	// void OnUpdateSubscriptionState(bool bSubscribed);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnItemSelected
	// void OnItemSelected();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated
	// void OnErrorStateTextUpdated(FText& ErrorStateText);                                                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveItemStateTitleWidget
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortProgressiveItemStateTitleWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/CrewUI.FortProgressiveItemStateTitleWidget.BP_OnSetHeaderInfo
	// void BP_OnSetHeaderInfo(FText& Subheading, bool bSubscribed, int32_t UnlockedStages, int32_t MaxStages);              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveItemWidget
/// Size: 0x0090 (0x001490 - 0x001520)
class UFortProgressiveItemWidget : public UCommonButtonBase
{ 
public:
	class UAthenaItemShopReactiveTileText*             TileText_ItemName;                                          // 0x1490   (0x0008)  
	FProgressiveStageItemInfo                          StageItemInfo;                                              // 0x1498   (0x0068)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x1500   (0x0020)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnUnhighlighted
	// void OnUnhighlighted();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded
	// void OnTileMaterialLoaded(bool bSubscribed);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnStageItemChanged
	// void OnStageItemChanged(FProgressiveStageItemInfo& InStageItemInfo);                                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnPeekStateChanged
	// void OnPeekStateChanged(bool bIsInPeekState);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnHighlighted
	// void OnHighlighted();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetDetailsWidget
/// Size: 0x0030 (0x0002C0 - 0x0002F0)
class UFortProgressiveSetDetailsWidget : public UUserWidget
{ 
public:
	class UCommonButtonBase*                           Button_MoreInfo;                                            // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x02C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveSetDetailsWidget.BP_OnUpdateSetDetails
	// void BP_OnUpdateSetDetails(FText& SetName, FText& ExpiringText, bool bCompleted);                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetList
/// Size: 0x0080 (0x000400 - 0x000480)
class UFortProgressiveSetList : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UAthenaScrollBox*                            ScrollBox_SetList;                                          // 0x0408   (0x0008)  
	class UFortSwipePanel*                             SwipePanel_Navigation;                                      // 0x0410   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_SetTiles;                                       // 0x0418   (0x0008)  
	int32_t                                            NumTilesPerPage;                                            // 0x0420   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0424   (0x0004)  MISSED
	TArray<class UFortProgressiveSetTile*>             SetTiles;                                                   // 0x0428   (0x0010)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0438   (0x0048)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveSetList.ClearSetTiles
	// void ClearSetTiles();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveSetList.AddSetTile
	// class UFortProgressiveSetTile* AddSetTile();                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetTile
/// Size: 0x00A0 (0x001490 - 0x001530)
class UFortProgressiveSetTile : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x1490   (0x00A0)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveSetTile.BP_OnTileMaterialLoaded
	// void BP_OnTileMaterialLoaded(bool bSubscribed);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveSetTile.BP_OnInitializeSetInfo
	// void BP_OnInitializeSetInfo(FProgressiveSetInfo& InSetInfo, FText& BottomText, FText& BottomSubtext, bool bSubscribed); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveStageList
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortProgressiveStageList : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0400   (0x0018)  MISSED
	class UCommonButtonGroupBase*                      ButtonGroup_StageItems;                                     // 0x0418   (0x0008)  
	class UAthenaScrollBox*                            ScrollBox_StageList;                                        // 0x0420   (0x0008)  
	class UFortSwipePanel*                             SwipePanel_Navigation;                                      // 0x0428   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0430   (0x0008)  MISSED
	TArray<class UFortProgressiveStageWidget*>         Stages;                                                     // 0x0438   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0448   (0x0008)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveStageList.SelectStageInDirection
	// void SelectStageInDirection(int32_t Direction);                                                                       // [0xa8ec4b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CrewUI.FortProgressiveStageList.ClearStageWidgets
	// void ClearStageWidgets();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageList.AddStageWidget
	// class UFortProgressiveStageWidget* AddStageWidget();                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveStageWidget
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortProgressiveStageWidget : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            Text_Month;                                                 // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02F0   (0x0018)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible
	// void OnSetTooltipVisible(bool bVisible);                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnSetTooltipText
	// void OnSetTooltipText(FText& InToolTipText);                                                                          // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnPeekStateChanged
	// void OnPeekStateChanged(bool bIsInPeekState);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets
	// void ClearStageItemWidgets();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.AddStageItemWidget
	// class UFortProgressiveItemWidget* AddStageItemWidget();                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveTableOfContentsScreen
/// Size: 0x0088 (0x0007A8 - 0x000830)
class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase
{ 
public:
	class UWidget*                                     ContentPurchasedFocusWidget;                                // 0x07A8   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x07B0   (0x0008)  
	class UCommonButtonBase*                           Button_TouchBack;                                           // 0x07B8   (0x0008)  
	class UCommonButtonBase*                           Button_MoreInfo;                                            // 0x07C0   (0x0008)  
	class UBattlePassCrewPurchaseButton*               Button_Subscribe;                                           // 0x07C8   (0x0008)  
	class UFortProgressiveSetList*                     Widget_SetList;                                             // 0x07D0   (0x0008)  
	class UFortProgressiveSetDetailsWidget*            Widget_SetDetails;                                          // 0x07D8   (0x0008)  
	class UFortProgressiveItemStateTitleWidget*        Widget_ItemStateTitle;                                      // 0x07E0   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_SetPagesPips;                                      // 0x07E8   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup_SetPagesPips;                                   // 0x07F0   (0x0008)  
	SDK_UNDEFINED(32,12768) /* TWeakObjectPtr<UClass*> */ __um(MoreInfoModalClass);                                // 0x07F8   (0x0020)  
	FName                                              SubscribedMaterialParameterName;                            // 0x0818   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x081C   (0x0014)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState
	// void BP_OnUpdateSubscriptionState(bool bSubscribed);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable
	// void BP_OnUpdateNumTilesAvailable(int32_t NumTiles);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText
	// void BP_OnUpdateErrorStateText(FText& ErrorStateText);                                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateBanner
	// void BP_OnUpdateBanner(FText& BannerText, bool bAllSetsCompleted, bool bSubscribed);                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnSetDescriptionText
	// void BP_OnSetDescriptionText(FText& ProductDescription);                                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortTemporaryItemsScreen
/// Size: 0x00C8 (0x000730 - 0x0007F8)
class UFortTemporaryItemsScreen : public UFortItemPreviewScreen
{ 
public:
	unsigned char                                      UnknownData00_3[0x60];                                      // 0x0730   (0x0060)  MISSED
	class UVerticalBox*                                VerticalBox_CategoryList;                                   // 0x0790   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0798   (0x0018)  MISSED
	class UCommonButtonBase*                           Button_Back;                                                // 0x07B0   (0x0008)  
	class UCommonButtonBase*                           Button_TouchBack;                                           // 0x07B8   (0x0008)  
	class UCommonButtonBase*                           Button_MoreInfo;                                            // 0x07C0   (0x0008)  
	class UFortTemporaryItemsScreenItemInfo*           Widget_Description;                                         // 0x07C8   (0x0008)  
	SDK_UNDEFINED(32,12769) /* TWeakObjectPtr<UClass*> */ __um(MoreInfoModalClass);                                // 0x07D0   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x07F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsScreen.SetupRowEntry
	// void SetupRowEntry(class UFortTemporaryItemsRow* RewardRow);                                                          // [0xa8ec73c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CrewUI.FortTemporaryItemsScreen.GetSubscriptionVM
	// class UFortSubscriptionVM* GetSubscriptionVM();                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortTemporaryItemsScreen.GetRemainingDaysLabel
	// FText GetRemainingDaysLabel(class UFortTemporaryItemsVM* TemporaryItemsVM);                                           // [0xa8ec308] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CrewUI.FortTemporaryItemsScreen.BP_OnContainerTabVisibilityUpdated
	// void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Struct /Script/CrewUI.FortProgressiveSetRewardData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFortProgressiveSetRewardData
{ 
	class UFortItemDefinition*                         RewardToken;                                                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

