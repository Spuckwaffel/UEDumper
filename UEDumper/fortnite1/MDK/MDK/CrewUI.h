
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
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/CrewUI.BattlePassCrewContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBattlePassCrewContentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CrewUI.CrewScreenContentBlockingInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrewScreenContentBlockingInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CrewUI.CrewScreenContentBlockingInterface.BlockScreenContent
	// void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText);                                                   // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortProgressiveContentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CrewUI.FortTemporaryItemsComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortTemporaryItemsComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UFortTemporaryItemsManager*)         TemporaryItemsManager                                       OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortMcpProfileAthena*>)    AthenaProfile                                               OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsComponent.OnAthenaProfileInitialized
	// void OnAthenaProfileInitialized();                                                                                       // [0x3d6debc] Final|Native|Private 
};

/// Class /Script/CrewUI.FortTemporaryItemsManager
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortTemporaryItemsManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsManager.OnTemporaryItemsStateChanged
	// void OnTemporaryItemsStateChanged();                                                                                     // [0xb8f4120] Final|Native|Private 
};

/// Class /Script/CrewUI.FortTemporaryItemsRewardGroupVM
/// Size: 0x0020 (0x000068 - 0x000088)
class UFortTemporaryItemsRewardGroupVM : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(EAthenaCustomizationCategory)              Category                                                    OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TArray<class UFortTemporaryItemsRewardVM*>) Rewards                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/CrewUI.FortTemporaryItemsRewardVM
/// Size: 0x0018 (0x000068 - 0x000080)
class UFortTemporaryItemsRewardVM : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UFortAccountItemDefinition*)         ItemDefinition                                              OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bIsOwned                                                    OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Class /Script/CrewUI.FortTemporaryItemsRow
/// Size: 0x0020 (0x0002C8 - 0x0002E8)
class UFortTemporaryItemsRow : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsRow.SetTileView
	// void SetTileView(class UTileView* InTileView);                                                                           // [0xa5dc264] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CrewUI.FortTemporaryItemsRow.GetCategoryText
	// FText GetCategoryText(EAthenaCustomizationCategory InCategory);                                                          // [0xb8f3e6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CrewUI.FortTemporaryItemsScreenItemInfo
/// Size: 0x0018 (0x0002F0 - 0x000308)
class UFortTemporaryItemsScreenItemInfo : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UAthenaRewardItemTypeRarityTag*)     Widget_ItemTypeRarityTag                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemName                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_Description                                        OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsScreenItemInfo.SetData
	// void SetData(class UFortSubscriptionVM* SubscriptionVM, class UFortTemporaryItemsRewardVM* RewardVM);                    // [0xb8f42a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CrewUI.FortTemporaryItemsScreenItemInfo.OnDataSet
	// void OnDataSet(bool bValidItem, bool bIsSubscribed, bool IsOwned);                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortTemporaryItemsTileButton
/// Size: 0x0010 (0x001480 - 0x001490)
class UFortTemporaryItemsTileButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5264;

public:
	CMember(class UFortCosmeticItemCard*)              ItemCard                                                    OFFSET(get<T>, {0x1488, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsTileButton.SetupRewardItem
	// void SetupRewardItem(class UFortAccountItemDefinition* ItemDef);                                                         // [0xb8f43e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CrewUI.FortTemporaryItemsVM
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortTemporaryItemsVM : public UFortPerUserViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class UFortTemporaryItemsRewardGroupVM*>) RewardGroups                                          OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FDateTime)                                 ExpirationDate                                              OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	CMember(class UFortTemporaryItemsManager*)         TemporaryItemsManager                                       OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/CrewUI.BattlePassCrewPurchaseButton
/// Size: 0x0020 (0x001520 - 0x001540)
class UBattlePassCrewPurchaseButton : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	CMember(EBattlePassPurchaseButtonCurrencyType)     CurrencyType                                                OFFSET(get<T>, {0x1518, 1, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Label                                                  OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SecondaryLabel                                         OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_FinalCost                                              OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(class UWidget*)                            Container_SecondaryLabel                                    OFFSET(get<T>, {0x1538, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated
	// void OnCurrencyUpdated();                                                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.BattlePassCrewPurchaseContainer
/// Size: 0x0080 (0x000408 - 0x000488)
class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	DMember(float)                                     CrewUpsellTransitionDelayTime                               OFFSET(get<float>, {0x428, 4, 0, 0})
	CMember(class UCommonActivatableWidgetSwitcher*)   Switcher_ContentContainer                                   OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UBattlePassPurchaseScreen*)          BattlePassPurchaseScreen                                    OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Intro                                                       OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   QuickIntro                                                  OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   CrewBenefitsIntro                                           OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UClass*)                             CrewSubscriptionErrorModalClass                             OFFSET(get<T>, {0x460, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation
	// void OnTriggerIntroAnimation(bool bCanClaimRewards);                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated
	// void OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened);                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.BattlePassSeasonHeading
/// Size: 0x0008 (0x0002F0 - 0x0002F8)
class UBattlePassSeasonHeading : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UCommonRichTextBlock*)               Text_Season                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/CrewUI.BattlePassPurchaseScreen
/// Size: 0x0128 (0x000448 - 0x000570)
class UBattlePassPurchaseScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	DMember(float)                                     CrewTransitionDelayTime                                     OFFSET(get<float>, {0x484, 4, 0, 0})
	CMember(class UClass*)                             PurchaseCompleteModal                                       OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ToCrew                                               OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class UBattlePassCrewPurchaseButton*)      Button_Purchase                                             OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoreInfo                                             OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_GiftBattlePass                                       OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UBattlePassCrewPurchaseButton*)      Button_ConfirmBase                                          OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UBattlePassCrewPurchaseButton*)      Button_ConfirmBundle                                        OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UBattlePassSeasonHeading*)           Heading_Primary                                             OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UBattlePassSeasonHeading*)           Heading_Secondary                                           OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_Disclaimer                                         OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Description                                            OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UCommonAnimatedSwitcher*)            Switcher_PurchaseState                                      OFFSET(get<T>, {0x550, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.BattlePassPurchaseScreen.RefreshFocus
	// void RefreshFocus();                                                                                                     // [0x3d91cc8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification
	// void OnShowNavButtonNotification(bool bShowNotification);                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable
	// void OnSetScreenInteractable(bool bInteractable);                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText
	// void OnSetNavButtonNotificationText(FText& NotificationText);                                                            // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged
	// void OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState);                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed
	// void OnPurchaseConfirmed();                                                                                              // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewMultiSubscriptionAlertModal
/// Size: 0x00D0 (0x000408 - 0x0004D8)
class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	CMember(class UDynamicEntryBox*)                   EntryBox_BulletPoints                                       OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_OpenHowToURL                                         OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TextURL                                              OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_DoNotRemind                                          OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchClose                                           OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TArray<FText>)                             BulletPoints                                                OFFSET(get<T>, {0x440, 16, 0, 0})
	CMember(TMap<EAppStore, FText>)                    AppStorePlatformMapping                                     OFFSET(get<T>, {0x450, 80, 0, 0})
	SMember(FString)                                   HowToCancelURL                                              OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FText)                                     PlatformTextStyle                                           OFFSET(getStruct<T>, {0x4C8, 16, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL
	// void OnSetHowToCancelURL(FString MoreInfoUrl);                                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewPriceChangeAcknowledgeModal
/// Size: 0x0140 (0x000408 - 0x000548)
class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
	CMember(class UCommonButtonBase*)                  Button_Accept                                               OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CancelSubscription                                   OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoreInfo                                             OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TextURL                                              OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CancellationInfoModalClass                                  OFFSET(get<T>, {0x430, 32, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle
	// void OnSetPriceChangeAcknowledgeTitle(FText& Title);                                                                     // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl
	// void OnSetPriceChangeAcknowledgeMoreInfoUrl(FText& MoreInfoUrl);                                                         // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText
	// void OnSetPriceChangeAcknowledgeMoreInfoText(FText& ConfirmButtonText);                                                  // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText
	// void OnSetPriceChangeAcknowledgeConfirmButtonText(FText& ConfirmButtonText);                                             // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText
	// void OnSetPriceChangeAcknowledgeCheckboxText(FText& CheckboxText);                                                       // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText
	// void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(FText& CancelSubscriptionButtonText);                       // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText
	// void OnSetPriceChangeAcknowledgeBodyText(FText& BodyText);                                                               // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable
	// void OnSetPriceChangeAcknowledgeBodyTable(TArray<FCrewTableRow>& PriceChangeByRegionRows);                               // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout
	// void OnModalBackout();                                                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal
	// void ExitModal();                                                                                                        // [0x41c1904] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CrewUI.CrewPurchaseScreen
/// Size: 0x01B8 (0x000448 - 0x000600)
class UCrewPurchaseScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	DMember(bool)                                      bManagementModeEnabled                                      OFFSET(get<bool>, {0x4C0, 1, 0, 0})
	CMember(class UWidget*)                            ContentPurchasedFocusWidget                                 OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UWidget*)                            FocusWidget                                                 OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_BenefitsTiles                                   OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CancellationInfoModalClass                                  OFFSET(get<T>, {0x4E0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   LegalInfoModalClass                                         OFFSET(get<T>, {0x500, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ResolveIssueModalClass                                      OFFSET(get<T>, {0x520, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RejoinModalClass                                            OFFSET(get<T>, {0x540, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ContinueModalClass                                          OFFSET(get<T>, {0x560, 32, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ToBattlePass                                         OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UBattlePassCrewPurchaseButton*)      Button_Purchase                                             OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UBattlePassCrewPurchaseButton*)      Button_Rejoin                                               OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UBattlePassCrewPurchaseButton*)      Button_Continue                                             OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ResolvePayment                                       OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_WatchTrailer                                         OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Terms                                                OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CancellationInfo                                     OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_RecurringRewards                                   OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_LimitedTimeRewards                                 OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UCrewTileDetails*)                   Details_CurrentCrewTile                                     OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_LimitedTime                                            OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_UserInformation                                     OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_UserInformation                                        OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_CrewDisclaimer                                         OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(class UCommonBorder*)                      Border_Disclaimer                                           OFFSET(get<T>, {0x5F8, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated
	// void OnUserInformationTextsUpdated(FText& UserInformationText1, FText& UserInformationText2, EMcpSubscriptionState SubscriptionState); // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility
	// void OnUpdateVBuckRefundVisibility(bool bVisible);                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState
	// void OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState);                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification
	// void OnShowNavButtonNotification(bool bShowNotification);                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnSetPaymentLegalText
	// void OnSetPaymentLegalText(FText& LegalText);                                                                            // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText
	// void OnSetNavButtonNotificationText(FText& NotificationText);                                                            // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated
	// void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.EndProgress
	// void EndProgress();                                                                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.BeginProgress
	// void BeginProgress(FText& ProgressLabel);                                                                                // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewRewardTile
/// Size: 0x0060 (0x001480 - 0x0014E0)
class UCrewRewardTile : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	DMember(float)                                     TileImageStreamoutSeconds                                   OFFSET(get<float>, {0x14C0, 4, 0, 0})
	CMember(class UImage*)                             Image_TileImage                                             OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_TileLabel                                              OFFSET(get<T>, {0x14D0, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewRewardTile.OnUpdateOwnedState
	// void OnUpdateOwnedState(bool bOwned);                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.OnStartingDownloadTileImage
	// void OnStartingDownloadTileImage();                                                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.OnDownloadTileImageComplete
	// void OnDownloadTileImageComplete(class UTexture2D* Texture);                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.IsMonthlyBenefit
	// bool IsMonthlyBenefit();                                                                                                 // [0xb8f40f4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CrewUI.CrewSeasonLaunchScreen
/// Size: 0x00E8 (0x000448 - 0x000530)
class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ResolveIssueModalClass                                      OFFSET(get<T>, {0x480, 32, 0, 0})
	CMember(class UBattlePassSeasonHeading*)           Heading_SeasonInfo                                          OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Description                                            OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Claim                                                OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ResolveIssue                                         OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_GiftBattlePass                                       OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_Disclaimer                                         OFFSET(get<T>, {0x4C8, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewStandaloneSubscriptionContentContainer
/// Size: 0x0008 (0x0004D8 - 0x0004E0)
class UCrewStandaloneSubscriptionContentContainer : public UFortStandaloneFrontend
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	CMember(class UCrewSubscriptionContentContainer*)  Widget_CrewContentContainer                                 OFFSET(get<T>, {0x4D8, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewSubscriptionContentContainer
/// Size: 0x00A0 (0x000408 - 0x0004A8)
class UCrewSubscriptionContentContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	CMember(TArray<FCrewSubscriptionContentTabData>)   TabsData                                                    OFFSET(get<T>, {0x438, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputAction                                          OFFSET(getStruct<T>, {0x448, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousTabInputAction                                      OFFSET(getStruct<T>, {0x458, 16, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Tabs                                               OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_Tabs                                            OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UCommonActivatableWidgetSwitcher*)   Switcher_Tabs                                               OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UWidget*)                            Widget_TabsContainer                                        OFFSET(get<T>, {0x480, 8, 0, 0})
	DMember(float)                                     SpacingAdjustmentForTabs                                    OFFSET(get<float>, {0x488, 4, 0, 0})
	SMember(FPrimaryContentSetup)                      ContentSetup                                                OFFSET(getStruct<T>, {0x48C, 3, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewSubscriptionContentContainer.OnTabSelected
	// void OnTabSelected(int32_t TabIndex);                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewSubscriptionErrorModal
/// Size: 0x0010 (0x000408 - 0x000418)
class UCrewSubscriptionErrorModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchClose                                           OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewTileDetails
/// Size: 0x0048 (0x0002F0 - 0x000338)
class UCrewTileDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UCommonTextBlock*)                   Text_Title                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               RichText_Description                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_Tags                                               OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MobileMoreInfo                                       OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewTileDetailsTag
/// Size: 0x0008 (0x0002F0 - 0x0002F8)
class UCrewTileDetailsTag : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UCommonRichTextBlock*)               Text_Label                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewTileDetailsTag.OnTagSetup
	// void OnTagSetup(ECrewDetailsTag RewardTag, bool bIsOwnedTag);                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewUIGameFeatureAction
/// Size: 0x0120 (0x000028 - 0x000148)
class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassCrewContainerClass                                OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewContentContainerClass                                   OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewStandaloneContentContainerClass                         OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewPurchaseScreenClass                                     OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ProgressionScreenClass                                      OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TemporaryItemsScreenClass                                   OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewPriceChangeAcknowledgeModalClass                        OFFSET(get<T>, {0xE8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MultiSubAlertModalClass                                     OFFSET(get<T>, {0x108, 32, 0, 0})
	CMember(TArray<FFortProgressiveSet>)               ProgressiveCosmeticSets                                     OFFSET(get<T>, {0x128, 16, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveContentContainer
/// Size: 0x0050 (0x000408 - 0x000458)
class UFortProgressiveContentContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(class UCommonActivatableWidgetSwitcher*)   Switcher_PrimaryContent                                     OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UFortProgressiveTableOfContentsScreen*) Widget_ProgressiveTableOfContentsScreen                  OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UFortProgressiveItemScreen*)         Widget_ProgressiveItemScreen                                OFFSET(get<T>, {0x450, 8, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveItemDetailsWidget
/// Size: 0x0028 (0x0002C8 - 0x0002F0)
class UFortProgressiveItemDetailsWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(class UCommonTextBlock*)                   Text_CosmeticStage                                          OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UCommonRichTextBlock*)               Text_UnlockCriteria                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UWidget*)                            Widget_UnlockCriteriaContainer                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UAthenaRewardItemTypeRarityTag*)     Widget_ItemTypeRarityTag                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UWidget*)                            Tag_Owned                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveScreenBase
/// Size: 0x0078 (0x000730 - 0x0007A8)
class UFortProgressiveScreenBase : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1960;

public:
	DMember(float)                                     RewardPreviewTime                                           OFFSET(get<float>, {0x794, 4, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveScreenBase.BP_OnContainerTabVisibilityUpdated
	// void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);                              // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveItemScreen
/// Size: 0x0108 (0x0007A8 - 0x0008B0)
class UFortProgressiveItemScreen : public UFortProgressiveScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	CMember(class UWidget*)                            ContentPurchasedFocusWidget                                 OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchBack                                            OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoreInfo                                             OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UBattlePassCrewPurchaseButton*)      Button_Subscribe                                            OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PreviewStyles                                        OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ExpirationFinePrint                                    OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_NewStagesUnlockFinePrint                               OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_StagesPips                                         OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_StagesPips                                      OFFSET(get<T>, {0x7F0, 8, 0, 0})
	CMember(class UFortProgressiveItemDetailsWidget*)  Widget_ProgressiveItemDetails                               OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(class UFortProgressiveStageList*)          Widget_ProgressiveStageList                                 OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(class UFortProgressiveItemStateTitleWidget*) ProgressiveItemStateTitle                                 OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          OFFSET(get<T>, {0x810, 32, 0, 0})
	SMember(FName)                                     SubscribedMaterialParameterName                             OFFSET(getStruct<T>, {0x830, 4, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState
	// void OnUpdateSubscriptionState(bool bSubscribed);                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnItemSelected
	// void OnItemSelected();                                                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated
	// void OnErrorStateTextUpdated(FText& ErrorStateText);                                                                     // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveItemStateTitleWidget
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortProgressiveItemStateTitleWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/CrewUI.FortProgressiveItemStateTitleWidget.BP_OnSetHeaderInfo
	// void BP_OnSetHeaderInfo(FText& Subheading, bool bSubscribed, int32_t UnlockedStages, int32_t MaxStages);                 // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveItemWidget
/// Size: 0x0080 (0x001480 - 0x001500)
class UFortProgressiveItemWidget : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(class UAthenaItemShopReactiveTileText*)    TileText_ItemName                                           OFFSET(get<T>, {0x1480, 8, 0, 0})
	SMember(FProgressiveStageItemInfo)                 StageItemInfo                                               OFFSET(getStruct<T>, {0x1488, 96, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnUnhighlighted
	// void OnUnhighlighted();                                                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded
	// void OnTileMaterialLoaded(bool bSubscribed);                                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnStageItemChanged
	// void OnStageItemChanged(FProgressiveStageItemInfo& InStageItemInfo);                                                     // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnPeekStateChanged
	// void OnPeekStateChanged(bool bIsInPeekState);                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnHighlighted
	// void OnHighlighted();                                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetDetailsWidget
/// Size: 0x0030 (0x0002C8 - 0x0002F8)
class UFortProgressiveSetDetailsWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(class UCommonButtonBase*)                  Button_MoreInfo                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveSetDetailsWidget.BP_OnUpdateSetDetails
	// void BP_OnUpdateSetDetails(FText& SetName, FText& ExpiringText, bool bCompleted);                                        // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetList
/// Size: 0x0080 (0x000408 - 0x000488)
class UFortProgressiveSetList : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(class UAthenaScrollBox*)                   ScrollBox_SetList                                           OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UFortSwipePanel*)                    SwipePanel_Navigation                                       OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_SetTiles                                        OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(int32_t)                                   NumTilesPerPage                                             OFFSET(get<int32_t>, {0x428, 4, 0, 0})
	CMember(TArray<class UFortProgressiveSetTile*>)    SetTiles                                                    OFFSET(get<T>, {0x430, 16, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveSetList.ClearSetTiles
	// void ClearSetTiles();                                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveSetList.AddSetTile
	// class UFortProgressiveSetTile* AddSetTile();                                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetTile
/// Size: 0x00A0 (0x001480 - 0x001520)
class UFortProgressiveSetTile : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:


	/// Functions
	// Function /Script/CrewUI.FortProgressiveSetTile.BP_OnTileMaterialLoaded
	// void BP_OnTileMaterialLoaded(bool bSubscribed);                                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveSetTile.BP_OnInitializeSetInfo
	// void BP_OnInitializeSetInfo(FProgressiveSetInfo& InSetInfo, FText& BottomText, FText& BottomSubtext, bool bSubscribed);  // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveStageList
/// Size: 0x0050 (0x000408 - 0x000458)
class UFortProgressiveStageList : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_StageItems                                      OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UAthenaScrollBox*)                   ScrollBox_StageList                                         OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UFortSwipePanel*)                    SwipePanel_Navigation                                       OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(TArray<class UFortProgressiveStageWidget*>) Stages                                                     OFFSET(get<T>, {0x440, 16, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveStageList.SelectStageInDirection
	// void SelectStageInDirection(int32_t Direction);                                                                          // [0xb8f4134] Final|Native|Public|BlueprintCallable 
	// Function /Script/CrewUI.FortProgressiveStageList.ClearStageWidgets
	// void ClearStageWidgets();                                                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageList.AddStageWidget
	// class UFortProgressiveStageWidget* AddStageWidget();                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveStageWidget
/// Size: 0x0020 (0x0002F0 - 0x000310)
class UFortProgressiveStageWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UCommonTextBlock*)                   Text_Month                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible
	// void OnSetTooltipVisible(bool bVisible);                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnSetTooltipText
	// void OnSetTooltipText(FText& InToolTipText);                                                                             // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnPeekStateChanged
	// void OnPeekStateChanged(bool bIsInPeekState);                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets
	// void ClearStageItemWidgets();                                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.AddStageItemWidget
	// class UFortProgressiveItemWidget* AddStageItemWidget();                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveTableOfContentsScreen
/// Size: 0x0088 (0x0007A8 - 0x000830)
class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	CMember(class UWidget*)                            ContentPurchasedFocusWidget                                 OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchBack                                            OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoreInfo                                             OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UBattlePassCrewPurchaseButton*)      Button_Subscribe                                            OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class UFortProgressiveSetList*)            Widget_SetList                                              OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UFortProgressiveSetDetailsWidget*)   Widget_SetDetails                                           OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(class UFortProgressiveItemStateTitleWidget*) Widget_ItemStateTitle                                     OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_SetPagesPips                                       OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             ButtonGroup_SetPagesPips                                    OFFSET(get<T>, {0x7F0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          OFFSET(get<T>, {0x7F8, 32, 0, 0})
	SMember(FName)                                     SubscribedMaterialParameterName                             OFFSET(getStruct<T>, {0x818, 4, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState
	// void BP_OnUpdateSubscriptionState(bool bSubscribed);                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable
	// void BP_OnUpdateNumTilesAvailable(int32_t NumTiles);                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText
	// void BP_OnUpdateErrorStateText(FText& ErrorStateText);                                                                   // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateBanner
	// void BP_OnUpdateBanner(FText& BannerText, bool bAllSetsCompleted, bool bSubscribed);                                     // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnSetDescriptionText
	// void BP_OnSetDescriptionText(FText& ProductDescription);                                                                 // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortTemporaryItemsScreen
/// Size: 0x00C8 (0x000730 - 0x0007F8)
class UFortTemporaryItemsScreen : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2040;

public:
	CMember(class UVerticalBox*)                       VerticalBox_CategoryList                                    OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TouchBack                                            OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoreInfo                                             OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class UFortTemporaryItemsScreenItemInfo*)  Widget_Description                                          OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          OFFSET(get<T>, {0x7D0, 32, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortTemporaryItemsScreen.SetupRowEntry
	// void SetupRowEntry(class UFortTemporaryItemsRow* RewardRow);                                                             // [0xb8f44bc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CrewUI.FortTemporaryItemsScreen.GetSubscriptionVM
	// class UFortSubscriptionVM* GetSubscriptionVM();                                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortTemporaryItemsScreen.GetRemainingDaysLabel
	// FText GetRemainingDaysLabel(class UFortTemporaryItemsVM* TemporaryItemsVM);                                              // [0xb8f3f54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CrewUI.FortTemporaryItemsScreen.BP_OnContainerTabVisibilityUpdated
	// void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);                              // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Struct /Script/CrewUI.CrewSubscriptionContentTabData
/// Size: 0x0018 (0x000000 - 0x000018)
class FCrewSubscriptionContentTabData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FText)                                     TabName                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ESubscriptionContentTab)                   TabType                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveReward
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortProgressiveReward : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCosmeticVariantInfo>)              DefaultVariantPreviewOverrides                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bHidden                                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAllowPreviewStyles                                         OFFSET(get<bool>, {0x31, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      RewardDef                                                   OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveStageOverrideDisplayData
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortProgressiveStageOverrideDisplayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FCosmeticVariantInfo>)              DefaultVariantPreviewOverrides                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bAllowPreviewStyles                                         OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveUIStage
/// Size: 0x0060 (0x000000 - 0x000060)
class FFortProgressiveUIStage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FFortProgressiveReward>)            Rewards                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bUseOverrideDisplayData                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FFortProgressiveStageOverrideDisplayData)  OverrideDisplayData                                         OFFSET(getStruct<T>, {0x18, 72, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveSet
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortProgressiveSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   FulfillmentId                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     SetName                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TArray<FFortProgressiveUIStage>)           Stages                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveSetRewardData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortProgressiveSetRewardData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UFortItemDefinition*)                RewardToken                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

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

