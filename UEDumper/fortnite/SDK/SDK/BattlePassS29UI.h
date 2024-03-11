
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: BattlePassBase
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Enum /Script/BattlePassS29UI.EBattlePassStatusBarTypeS29
/// Size: 0x08
enum class EBattlePassStatusBarTypeS29 : uint8_t
{
	EBattlePassStatusBarTypeS29__Hidden                                              = 0,
	EBattlePassStatusBarTypeS29__Prerequisite                                        = 1,
	EBattlePassStatusBarTypeS29__Delayed                                             = 2,
	EBattlePassStatusBarTypeS29__Unclaimable                                         = 3,
	EBattlePassStatusBarTypeS29__Claimable                                           = 4,
	EBattlePassStatusBarTypeS29__Special                                             = 5,
	EBattlePassStatusBarTypeS29__Owned                                               = 6,
	EBattlePassStatusBarTypeS29__EBattlePassStatusBarTypeS29_MAX                     = 7
};

/// Enum /Script/BattlePassS29UI.ERewardWarningTooltipType29
/// Size: 0x04
enum class ERewardWarningTooltipType29 : uint8_t
{
	ERewardWarningTooltipType29__None                                                = 0,
	ERewardWarningTooltipType29__Custom                                              = 1,
	ERewardWarningTooltipType29__AgeGating                                           = 2,
	ERewardWarningTooltipType29__Max                                                 = 3
};

/// Class /Script/BattlePassS29UI.BattlePassBulkBuyPageS29
/// Size: 0x0000 (0x0005A0 - 0x0005A0)
class UBattlePassBulkBuyPageS29 : public UFortBattlePassBulkBuyPageBase
{ 
public:
};

/// Class /Script/BattlePassS29UI.BattlePassLandingPageS29
/// Size: 0x0068 (0x000558 - 0x0005C0)
class UBattlePassLandingPageS29 : public UBattlePassLandingPageBase
{ 
public:
	class UBattlePassLandingPageButton*                Button_Rewards;                                             // 0x0558   (0x0008)  
	class UBattlePassLandingPageButton*                Button_CharacterCustomizer;                                 // 0x0560   (0x0008)  
	class UBattlePassLandingPageButton*                Button_BonusRewards;                                        // 0x0568   (0x0008)  
	class UBattlePassLandingPageButton*                Button_Quests;                                              // 0x0570   (0x0008)  
	class UBattlePassLandingPageButton*                Button_JoinSubscription;                                    // 0x0578   (0x0008)  
	class UBattlePassLandingPageButton*                Button_WeeklyRewards;                                       // 0x0580   (0x0008)  
	class UCommonTextBlock*                            Text_SeasonNumber;                                          // 0x0588   (0x0008)  
	class UAthenaSeasonItemData_BattleStar*            SeasonData_BattleStar;                                      // 0x0590   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0598   (0x0028)  MISSED


	/// Functions
	// Function /Script/BattlePassS29UI.BattlePassLandingPageS29.OnBattlePassSubscriptionAllowed
	// void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed);                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassS29UI.BattlePassRewardPageS29
/// Size: 0x00A0 (0x000518 - 0x0005B8)
class UBattlePassRewardPageS29 : public UBattlePassRewardPageBase
{ 
public:
	class UClass*                                      RewardsTrackClass;                                          // 0x0518   (0x0008)  
	class UFortBattlePassTile*                         FocusedReward;                                              // 0x0520   (0x0008)  
	TArray<class UFortBattlePassRewardTrack*>          TrackPages;                                                 // 0x0528   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0538   (0x0004)  MISSED
	ERewardPageType                                    RewardPageType;                                             // 0x053C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x053D   (0x0003)  MISSED
	int32_t                                            HoldTileTooltip_ClaimedRewardsToHide;                       // 0x0540   (0x0004)  
	int32_t                                            HoldTileTooltip_ClaimedBattlePassToHide;                    // 0x0544   (0x0004)  
	int32_t                                            HoldTileTooltip_RequiredBattleStarsToShow;                  // 0x0548   (0x0004)  
	int32_t                                            LevelRequirementUnlockTooltip_RequiredLevel;                // 0x054C   (0x0004)  
	int32_t                                            ClaimAllRewardsTooltip_RequiredLevelToShow;                 // 0x0550   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0554   (0x0004)  MISSED
	class UCommonAnimatedSwitcher*                     Switcher_RewardTracks;                                      // 0x0558   (0x0008)  
	class UFortBattlePassTutorialTooltipS29*           TutorialTooltip_LevelRequirementUnlock;                     // 0x0560   (0x0008)  
	class UFortBattlePassTutorialTooltipS29*           TutorialTooltip_ClaimAllRewards;                            // 0x0568   (0x0008)  
	class UFortBattlePassTutorialTooltipS29*           TutorialTooltip_HoldTile;                                   // 0x0570   (0x0008)  
	class UAthenaSeasonItemData_BattleStar*            SeasonData_BattleStar;                                      // 0x0578   (0x0008)  
	class UBattlePassBulkBuyInputData*                 BulkBuyInputData;                                           // 0x0580   (0x0008)  
	class UCommonButtonBase*                           Button_NextPage;                                            // 0x0588   (0x0008)  
	class UCommonButtonBase*                           Button_PreviousPage;                                        // 0x0590   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0598   (0x0020)  MISSED


	/// Functions
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.OnPageChanged
	// void OnPageChanged(int32_t PageNumber, int32_t RewardPageTotal);                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.OnLoadingScreenSelectedChanged
	// void OnLoadingScreenSelectedChanged(bool bIsSelected);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.OnInitForPageType
	// void OnInitForPageType(ERewardPageType InRewardPageType);                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.HandleRewardTracksBoundaryNavigation
	// class UWidget* HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation);                                      // [0xa33e4b4] Final|Native|Private 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.GetRewardPageBackgroundData
	// FVaultWorldBackgroundData GetRewardPageBackgroundData();                                                              // [0xa33e1d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS29UI.BattlePassScreenS29
/// Size: 0x04E0 (0x000940 - 0x000E20)
class UBattlePassScreenS29 : public UBattlePassScreenBase
{ 
public:
	class UClass*                                      ResourcePurchaseScreenClass;                                // 0x0940   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0948   (0x0008)  MISSED
	class UCommonButtonBase*                           Button_Close;                                               // 0x0950   (0x0008)  
	class UCommonButtonLegacy*                         Button_TouchClose;                                          // 0x0958   (0x0008)  
	class UCommonButtonBase*                           Button_ToggleViewDetails;                                   // 0x0960   (0x0008)  
	class UCommonButtonBase*                           Button_ReplayTrailer;                                       // 0x0968   (0x0008)  
	class UCommonButtonBase*                           Button_ReplayTrailer_Mobile;                                // 0x0970   (0x0008)  
	class UCommonButtonBase*                           Button_ShowAbout;                                           // 0x0978   (0x0008)  
	class UCommonButtonBase*                           Button_ShowAbout_Mobile;                                    // 0x0980   (0x0008)  
	class UCommonButtonBase*                           Button_ShowAboutCustomization;                              // 0x0988   (0x0008)  
	class UCommonButtonBase*                           Button_ShowAboutCustomization_Mobile;                       // 0x0990   (0x0008)  
	class UCommonButtonBase*                           Button_BulkBuyRewards;                                      // 0x0998   (0x0008)  
	class UCommonButtonBase*                           Button_PageComplete;                                        // 0x09A0   (0x0008)  
	class UCommonButtonBase*                           Button_GiftBattlePass;                                      // 0x09A8   (0x0008)  
	class UCommonVisibilitySwitcher*                   VisibilitySwitcher_PlatformBasedButtons;                    // 0x09B0   (0x0008)  
	class UFortBattlePassResourcesWidgetBase*          BattlePassCurrencyPanel;                                    // 0x09B8   (0x0008)  
	class UAthenaExclusiveRewardBanner*                AthenaExclusiveRewardBanner;                                // 0x09C0   (0x0008)  
	class UCommonTextBlock*                            Text_Description;                                           // 0x09C8   (0x0008)  
	class UCommonTextBlock*                            Text_ItemName;                                              // 0x09D0   (0x0008)  
	class UAthenaRewardItemTypeRarityTag*              ItemRewardTag;                                              // 0x09D8   (0x0008)  
	class UCommonTextBlock*                            Text_SetDetails;                                            // 0x09E0   (0x0008)  
	class UWidgetSwitcher*                             Switcher_PrerequisiteInfo;                                  // 0x09E8   (0x0008)  
	class UCommonTextBlock*                            Text_Prerequisite;                                          // 0x09F0   (0x0008)  
	class UWidget*                                     Widget_PrerequisiteProgress;                                // 0x09F8   (0x0008)  
	class UWidget*                                     Widget_LevelUpMessageFree;                                  // 0x0A00   (0x0008)  
	class UWidget*                                     Widget_LevelUpMessagePremium;                               // 0x0A08   (0x0008)  
	class UWidget*                                     Widget_CustomResourceMessage;                               // 0x0A10   (0x0008)  
	class UWidgetSwitcher*                             Switcher_PrimaryAction;                                     // 0x0A18   (0x0008)  
	class UFortCTAButton*                              Button_BuyLevels;                                           // 0x0A20   (0x0008)  
	class UFortCTAButton*                              Button_BuyBattlePass;                                       // 0x0A28   (0x0008)  
	class UFortCTAButton*                              Button_ClaimReward;                                         // 0x0A30   (0x0008)  
	class UCommonButtonBase*                           Button_ViewQuests;                                          // 0x0A38   (0x0008)  
	class UCommonButtonBase*                           Button_PreviewLoadingScreen;                                // 0x0A40   (0x0008)  
	class UFortDynamicEntryBox*                        ItemVMCards;                                                // 0x0A48   (0x0008)  
	class UBorder*                                     Tag_RequiresBP;                                             // 0x0A50   (0x0008)  
	class UBorder*                                     Tag_PageLocked;                                             // 0x0A58   (0x0008)  
	class UBorder*                                     Tag_BaseItem;                                               // 0x0A60   (0x0008)  
	class UBorder*                                     Tag_Prerequisite;                                           // 0x0A68   (0x0008)  
	class UBorder*                                     Tag_CompletePage;                                           // 0x0A70   (0x0008)  
	class UBorder*                                     Tag_NotEnough_Currency;                                     // 0x0A78   (0x0008)  
	class UBorder*                                     Tag_Cost;                                                   // 0x0A80   (0x0008)  
	class UBorder*                                     Tag_Owned;                                                  // 0x0A88   (0x0008)  
	class UBorder*                                     Tag_Delayed;                                                // 0x0A90   (0x0008)  
	FGameplayTag                                       QuestCategoryParentTag;                                     // 0x0A98   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0A9C   (0x0004)  MISSED
	class UClass*                                      PreviewLoadingScreenWidgetClass;                            // 0x0AA0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x58];                                      // 0x0AA8   (0x0058)  MISSED
	class UAthenaSeasonItemData_BattleStar*            SeasonData_BattleStar;                                      // 0x0B00   (0x0008)  
	class UAthenaSeasonItemEntryBase*                  CurrentSelectedEntry;                                       // 0x0B08   (0x0008)  
	TArray<EBattlePassView>                            SwitcherSubPageTypes;                                       // 0x0B10   (0x0010)  
	class UCommonVisibilitySwitcher*                   VisibilitySwitcher_SubPage;                                 // 0x0B20   (0x0008)  
	unsigned char                                      UnknownData03_5[0x100];                                     // 0x0B28   (0x0100)  MISSED
	class UFortItemDefinition*                         SeasonalBaseCustomizationItem;                              // 0x0C28   (0x0008)  
	bool                                               bHasSubscription;                                           // 0x0C30   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0C31   (0x0007)  MISSED
	class UFortBattlePassTutorialTooltipS29*           TutorialTooltip_BattleStars;                                // 0x0C38   (0x0008)  
	class UFortBattlePassTutorialTooltipS29*           TutorialTooltip_StylePoints;                                // 0x0C40   (0x0008)  
	class UFortSwipePanel*                             SwipePanel_Navigation;                                      // 0x0C48   (0x0008)  
	unsigned char                                      UnknownData05_6[0x1D0];                                     // 0x0C50   (0x01D0)  MISSED


	/// Functions
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OverviewShowAnimationFinished
	// void OverviewShowAnimationFinished();                                                                                 // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnUpdateStatusBar
	// void OnUpdateStatusBar(FText& StatusText, EBattlePassStatusBarTypeS29& BarType);                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnUpdateOwnedOrEquippedTag
	// void OnUpdateOwnedOrEquippedTag(FText& StatusText);                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnUpdateBattlePassRequiredBar
	// void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bTransitionForward);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetWeeklyRewardsInfo
	// void OnSetWeeklyRewardsInfo(FTimespan& DelayTimespan, int32_t AvailableRewards, int32_t OwnedRewards, int32_t TotalRewards, int32_t AvailablePages, int32_t CompletedPages, int32_t TotalPages); // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetWarningToolTip
	// void OnSetWarningToolTip(ERewardWarningTooltipType29& WarningTooltipType, FText& Description);                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetResourcePrice
	// void OnSetResourcePrice(int32_t Cost, class UFortPersistentResourceItemDefinition* PersistentResource);               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetQuestRewardsInfo
	// void OnSetQuestRewardsInfo(FTimespan& DelayTimespan, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetPrerequisiteInfo
	// void OnSetPrerequisiteInfo(FText& Description, int32_t CurrentAmount, int32_t NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetItemPrice
	// void OnSetItemPrice(int32_t Cost, EBattlePassCurrencyType CurrencyType);                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetEquipButtonEnable
	// void OnSetEquipButtonEnable(bool bIsEnable);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetCrewInfo
	// void OnSetCrewInfo(bool bIsNextMonthRewards, FText& MonthText, FTimespan& NextMonthlyRewardTimespan, FText& CharacterDisplayName, FText& CharacterDescription); // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetCoverPageData
	// void OnSetCoverPageData(FText& Title, FText& Description, bool bPageComplete);                                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetBonusRewardsInfo
	// void OnSetBonusRewardsInfo(bool bIsUnlocked, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages, int32_t ClaimedOutfits, int32_t TotalOutfits); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetBonusInfo
	// void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo);                                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetBaseRewardsInfo
	// void OnSetBaseRewardsInfo(int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages);    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnItemVmCardUpdate
	// void OnItemVmCardUpdate(FExpandedItemVM ItemVMs, class UAthenaSeasonItemEntryBase* EntrySelected);                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnItemDelayed
	// void OnItemDelayed(FTimespan Delay);                                                                                  // [0x18a39e4] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnInsufficientResource
	// void OnInsufficientResource(class UFortPersistentResourceItemDefinition* PersistentResource);                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnInsufficientFunds
	// void OnInsufficientFunds(EBattlePassCurrencyType CurrencyType);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnGameModeCompatibilityTagUpdate
	// void OnGameModeCompatibilityTagUpdate(class UFortItemVM* FortItem);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnBattlePassOwned
	// void OnBattlePassOwned();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnBattlePassGiftingAllowed
	// void OnBattlePassGiftingAllowed(bool bGiftingAllowed);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.IsSeasonalCustomizationItemOwned
	// bool IsSeasonalCustomizationItemOwned();                                                                              // [0xa33e56c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.HandleSwitcherVisibilityShown
	// void HandleSwitcherVisibilityShown();                                                                                 // [0xa33e544] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.HandleItemVMCardClicked
	// void HandleItemVMCardClicked(class UFortItemVM* ItemVM, class UAthenaSeasonItemEntryBase* EntrySelected);             // [0xa33e3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.HandleFullScreenMapToggled
	// void HandleFullScreenMapToggled(bool bMapVisible);                                                                    // [0xa33e370] Final|Native|Private 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.HandleClaimRewardComplete
	// void HandleClaimRewardComplete(bool bSuccess, TArray<FString>& OfferTemplateIdList);                                  // [0xa33e284] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.GoBackOneScreen
	// void GoBackOneScreen();                                                                                               // [0xa33e270] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.GetQuestPageDelay
	// FTimespan GetQuestPageDelay();                                                                                        // [0xa33e1a8] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.GetEquipButtonEnable
	// bool GetEquipButtonEnable();                                                                                          // [0xa33e18c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS29UI.FortBattlePassCustomSkinPageS29
/// Size: 0x0018 (0x0005C8 - 0x0005E0)
class UFortBattlePassCustomSkinPageS29 : public UFortBattlePassCustomSkinPageBase
{ 
public:
	SDK_UNDEFINED(16,11883) /* FString */              __um(ClaimBaseItemTooltip_ClaimCheckTemplateId);            // 0x05C8   (0x0010)  
	class UFortBattlePassTutorialTooltip*              TutorialTooltip_ClaimBaseItem;                              // 0x05D8   (0x0008)  
};

/// Class /Script/BattlePassS29UI.FortBattlePassResourcesWidgetS29
/// Size: 0x0020 (0x0002F8 - 0x000318)
class UFortBattlePassResourcesWidgetS29 : public UFortBattlePassResourcesWidgetBase
{ 
public:
	class UCommonTextBlock*                            Text_BattleStarsAmount;                                     // 0x02F8   (0x0008)  
	class UCommonTextBlock*                            Text_StylePointsAmount;                                     // 0x0300   (0x0008)  
	class UBorder*                                     Border_StylePointsRewardsTag;                               // 0x0308   (0x0008)  
	class UBorder*                                     Border_BattleStarsRewardsTag;                               // 0x0310   (0x0008)  


	/// Functions
	// Function /Script/BattlePassS29UI.FortBattlePassResourcesWidgetS29.OnStylePointsRewardsSet
	// void OnStylePointsRewardsSet(int32_t Rewards);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.FortBattlePassResourcesWidgetS29.OnBattleStarRewardsSet
	// void OnBattleStarRewardsSet(int32_t Rewards);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassS29UI.FortBattlePassTutorialTooltipS29
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassTutorialTooltipS29 : public UCommonUserWidget
{ 
public:
	class UCommonRichTextBlock*                        Text_Tooltip;                                               // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/BattlePassS29UI.FortBattlePassTutorialTooltipS29.ShowTooltip
	// void ShowTooltip();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.FortBattlePassTutorialTooltipS29.SetText
	// void SetText(FText Text);                                                                                             // [0xa334954] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.FortBattlePassTutorialTooltipS29.HideTooltip
	// void HideTooltip();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
};

