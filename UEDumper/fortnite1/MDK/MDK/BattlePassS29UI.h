
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BattlePassBase
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/BattlePassS29UI.BattlePassBulkBuyPageS29
/// Size: 0x0000 (0x0005A8 - 0x0005A8)
class UBattlePassBulkBuyPageS29 : public UFortBattlePassBulkBuyPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
};

/// Class /Script/BattlePassS29UI.BattlePassLandingPageS29
/// Size: 0x0068 (0x000560 - 0x0005C8)
class UBattlePassLandingPageS29 : public UBattlePassLandingPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	CMember(class UBattlePassLandingPageButton*)       Button_Rewards                                              OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_CharacterCustomizer                                  OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_BonusRewards                                         OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_Quests                                               OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_JoinSubscription                                     OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UBattlePassLandingPageButton*)       Button_WeeklyRewards                                        OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SeasonNumber                                           OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UAthenaSeasonItemData_BattleStar*)   SeasonData_BattleStar                                       OFFSET(get<T>, {0x598, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS29UI.BattlePassLandingPageS29.OnBattlePassSubscriptionAllowed
	// void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed);                                                         // [0x246f7d8] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassS29UI.BattlePassRewardPageS29
/// Size: 0x00A0 (0x000520 - 0x0005C0)
class UBattlePassRewardPageS29 : public UBattlePassRewardPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	CMember(class UClass*)                             RewardsTrackClass                                           OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UFortBattlePassTile*)                FocusedReward                                               OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(TArray<class UFortBattlePassRewardTrack*>) TrackPages                                                  OFFSET(get<T>, {0x530, 16, 0, 0})
	CMember(ERewardPageType)                           RewardPageType                                              OFFSET(get<T>, {0x544, 1, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_ClaimedRewardsToHide                        OFFSET(get<int32_t>, {0x548, 4, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_ClaimedBattlePassToHide                     OFFSET(get<int32_t>, {0x54C, 4, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_RequiredBattleStarsToShow                   OFFSET(get<int32_t>, {0x550, 4, 0, 0})
	DMember(int32_t)                                   LevelRequirementUnlockTooltip_RequiredLevel                 OFFSET(get<int32_t>, {0x554, 4, 0, 0})
	DMember(int32_t)                                   ClaimAllRewardsTooltip_RequiredLevelToShow                  OFFSET(get<int32_t>, {0x558, 4, 0, 0})
	CMember(class UCommonAnimatedSwitcher*)            Switcher_RewardTracks                                       OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS29*)  TutorialTooltip_LevelRequirementUnlock                      OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS29*)  TutorialTooltip_ClaimAllRewards                             OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS29*)  TutorialTooltip_HoldTile                                    OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UAthenaSeasonItemData_BattleStar*)   SeasonData_BattleStar                                       OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UBattlePassBulkBuyInputData*)        BulkBuyInputData                                            OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_NextPage                                             OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PreviousPage                                         OFFSET(get<T>, {0x598, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.OnPageChanged
	// void OnPageChanged(int32_t PageNumber, int32_t RewardPageTotal);                                                         // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.OnLoadingScreenSelectedChanged
	// void OnLoadingScreenSelectedChanged(bool bIsSelected);                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.OnInitForPageType
	// void OnInitForPageType(ERewardPageType InRewardPageType);                                                                // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.HandleRewardTracksBoundaryNavigation
	// class UWidget* HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation);                                         // [0xb21a9d8] Final|Native|Private 
	// Function /Script/BattlePassS29UI.BattlePassRewardPageS29.GetRewardPageBackgroundData
	// FVaultWorldBackgroundData GetRewardPageBackgroundData();                                                                 // [0xb21a5fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS29UI.BattlePassScreenS29
/// Size: 0x0520 (0x000940 - 0x000E60)
class UBattlePassScreenS29 : public UBattlePassScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3680;

public:
	CMember(class UClass*)                             ResourcePurchaseScreenClass                                 OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(class UCommonButtonLegacy*)                Button_TouchClose                                           OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ToggleViewDetails                                    OFFSET(get<T>, {0x960, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ReplayTrailer                                        OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ReplayTrailer_Mobile                                 OFFSET(get<T>, {0x970, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowAbout                                            OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowAbout_Mobile                                     OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowAboutCustomization                               OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowAboutCustomization_Mobile                        OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BulkBuyRewards                                       OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PageComplete                                         OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_GiftBattlePass                                       OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          VisibilitySwitcher_PlatformBasedButtons                     OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(class UFortBattlePassResourcesWidgetBase*) BattlePassCurrencyPanel                                     OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(class UAthenaExclusiveRewardBanner*)       AthenaExclusiveRewardBanner                                 OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Description                                            OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemName                                               OFFSET(get<T>, {0x9D0, 8, 0, 0})
	CMember(class UAthenaRewardItemTypeRarityTag*)     ItemRewardTag                                               OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_SetDetails                                             OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_PrerequisiteInfo                                   OFFSET(get<T>, {0x9E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Prerequisite                                           OFFSET(get<T>, {0x9F0, 8, 0, 0})
	CMember(class UWidget*)                            Widget_PrerequisiteProgress                                 OFFSET(get<T>, {0x9F8, 8, 0, 0})
	CMember(class UWidget*)                            Widget_LevelUpMessageFree                                   OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(class UWidget*)                            Widget_LevelUpMessagePremium                                OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(class UWidget*)                            Widget_CustomResourceMessage                                OFFSET(get<T>, {0xA10, 8, 0, 0})
	CMember(class UWidgetSwitcher*)                    Switcher_PrimaryAction                                      OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_BuyLevels                                            OFFSET(get<T>, {0xA20, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_BuyBattlePass                                        OFFSET(get<T>, {0xA28, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_ClaimReward                                          OFFSET(get<T>, {0xA30, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ViewQuests                                           OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PreviewLoadingScreen                                 OFFSET(get<T>, {0xA40, 8, 0, 0})
	CMember(class UFortDynamicEntryBox*)               ItemVMCards                                                 OFFSET(get<T>, {0xA48, 8, 0, 0})
	CMember(class UBorder*)                            Tag_RequiresBP                                              OFFSET(get<T>, {0xA50, 8, 0, 0})
	CMember(class UBorder*)                            Tag_PageLocked                                              OFFSET(get<T>, {0xA58, 8, 0, 0})
	CMember(class UBorder*)                            Tag_BaseItem                                                OFFSET(get<T>, {0xA60, 8, 0, 0})
	CMember(class UBorder*)                            Tag_Prerequisite                                            OFFSET(get<T>, {0xA68, 8, 0, 0})
	CMember(class UBorder*)                            Tag_CompletePage                                            OFFSET(get<T>, {0xA70, 8, 0, 0})
	CMember(class UBorder*)                            Tag_NotEnough_Currency                                      OFFSET(get<T>, {0xA78, 8, 0, 0})
	CMember(class UBorder*)                            Tag_Cost                                                    OFFSET(get<T>, {0xA80, 8, 0, 0})
	CMember(class UBorder*)                            Tag_Owned                                                   OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(class UBorder*)                            Tag_Delayed                                                 OFFSET(get<T>, {0xA90, 8, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryParentTag                                      OFFSET(getStruct<T>, {0xA98, 4, 0, 0})
	CMember(class UClass*)                             PreviewLoadingScreenWidgetClass                             OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(class UAthenaSeasonItemData_BattleStar*)   SeasonData_BattleStar                                       OFFSET(get<T>, {0xB00, 8, 0, 0})
	CMember(class UAthenaSeasonItemEntryBase*)         CurrentSelectedEntry                                        OFFSET(get<T>, {0xB08, 8, 0, 0})
	CMember(TArray<EBattlePassView>)                   SwitcherSubPageTypes                                        OFFSET(get<T>, {0xB10, 16, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          VisibilitySwitcher_SubPage                                  OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(class UFortItemDefinition*)                SeasonalBaseCustomizationItem                               OFFSET(get<T>, {0xC28, 8, 0, 0})
	DMember(bool)                                      bHasSubscription                                            OFFSET(get<bool>, {0xC30, 1, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS29*)  TutorialTooltip_BattleStars                                 OFFSET(get<T>, {0xC38, 8, 0, 0})
	CMember(class UFortBattlePassTutorialTooltipS29*)  TutorialTooltip_StylePoints                                 OFFSET(get<T>, {0xC40, 8, 0, 0})
	CMember(class UFortSwipePanel*)                    SwipePanel_Navigation                                       OFFSET(get<T>, {0xC48, 8, 0, 0})
	CMember(TMap<EBattlePassFeatures, UCommonButtonBase*>) FeatureButtons                                          OFFSET(get<T>, {0xE10, 80, 0, 0})


	/// Functions
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OverviewShowAnimationFinished
	// void OverviewShowAnimationFinished();                                                                                    // [0x3508bf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnUpdateStatusBar
	// void OnUpdateStatusBar(FText& StatusText, EBattlePassStatusBarTypeS29& BarType);                                         // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnUpdateOwnedOrEquippedTag
	// void OnUpdateOwnedOrEquippedTag(FText& StatusText);                                                                      // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnUpdateBattlePassRequiredBar
	// void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible);                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bTransitionForward);                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetWeeklyRewardsInfo
	// void OnSetWeeklyRewardsInfo(FTimespan& DelayTimespan, int32_t AvailableRewards, int32_t OwnedRewards, int32_t TotalRewards, int32_t AvailablePages, int32_t CompletedPages, int32_t TotalPages); // [0x246f7d8] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetWarningToolTip
	// void OnSetWarningToolTip(ERewardWarningTooltipType29& WarningTooltipType, FText& Description);                           // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetResourcePrice
	// void OnSetResourcePrice(int32_t Cost, class UFortPersistentResourceItemDefinition* PersistentResource);                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetQuestRewardsInfo
	// void OnSetQuestRewardsInfo(FTimespan& DelayTimespan, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // [0x246f7d8] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetPrerequisiteInfo
	// void OnSetPrerequisiteInfo(FText& Description, int32_t CurrentAmount, int32_t NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock); // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetItemPrice
	// void OnSetItemPrice(int32_t Cost, EBattlePassCurrencyType CurrencyType);                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetEquipButtonEnable
	// void OnSetEquipButtonEnable(bool bIsEnable);                                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetCrewInfo
	// void OnSetCrewInfo(bool bIsNextMonthRewards, FText& MonthText, FTimespan& NextMonthlyRewardTimespan, FText& CharacterDisplayName, FText& CharacterDescription); // [0x246f7d8] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetCoverPageData
	// void OnSetCoverPageData(FText& Title, FText& Description, bool bPageComplete);                                           // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetBonusRewardsInfo
	// void OnSetBonusRewardsInfo(bool bIsUnlocked, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages, int32_t ClaimedOutfits, int32_t TotalOutfits); // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetBonusInfo
	// void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo);                                                                   // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnSetBaseRewardsInfo
	// void OnSetBaseRewardsInfo(int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages);       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnItemVmCardUpdate
	// void OnItemVmCardUpdate(FExpandedItemVM ItemVMs, class UAthenaSeasonItemEntryBase* EntrySelected);                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnItemDelayed
	// void OnItemDelayed(FTimespan Delay);                                                                                     // [0x246f7d8] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnInsufficientResource
	// void OnInsufficientResource(class UFortPersistentResourceItemDefinition* PersistentResource);                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnInsufficientFunds
	// void OnInsufficientFunds(EBattlePassCurrencyType CurrencyType);                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnGameModeCompatibilityTagUpdate
	// void OnGameModeCompatibilityTagUpdate(class UFortItemVM* FortItem);                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnBattlePassOwned
	// void OnBattlePassOwned();                                                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.OnBattlePassGiftingAllowed
	// void OnBattlePassGiftingAllowed(bool bGiftingAllowed);                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.IsSeasonalCustomizationItemOwned
	// bool IsSeasonalCustomizationItemOwned();                                                                                 // [0xb21aad0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.HandleSwitcherVisibilityShown
	// void HandleSwitcherVisibilityShown();                                                                                    // [0xb21aaa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.HandleItemVMCardClicked
	// void HandleItemVMCardClicked(class UFortItemVM* ItemVM, class UAthenaSeasonItemEntryBase* EntrySelected);                // [0xb21a898] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.HandleFullScreenMapToggled
	// void HandleFullScreenMapToggled(bool bMapVisible);                                                                       // [0xb21a7d4] Final|Native|Private 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.HandleClaimRewardComplete
	// void HandleClaimRewardComplete(bool bSuccess, TArray<FString>& OfferTemplateIdList);                                     // [0xb21a6ac] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.GoBackOneScreen
	// void GoBackOneScreen();                                                                                                  // [0xb21a698] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.GetQuestPageDelay
	// FTimespan GetQuestPageDelay();                                                                                           // [0xb21a5d0] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS29UI.BattlePassScreenS29.GetEquipButtonEnable
	// bool GetEquipButtonEnable();                                                                                             // [0xb21a5b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS29UI.FortBattlePassCustomSkinPageS29
/// Size: 0x0018 (0x0005D0 - 0x0005E8)
class UFortBattlePassCustomSkinPageS29 : public UFortBattlePassCustomSkinPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1512;

public:
	SMember(FString)                                   ClaimBaseItemTooltip_ClaimCheckTemplateId                   OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	CMember(class UFortBattlePassTutorialTooltip*)     TutorialTooltip_ClaimBaseItem                               OFFSET(get<T>, {0x5E0, 8, 0, 0})
};

/// Class /Script/BattlePassS29UI.FortBattlePassResourcesWidgetS29
/// Size: 0x0020 (0x000300 - 0x000320)
class UFortBattlePassResourcesWidgetS29 : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UCommonTextBlock*)                   Text_BattleStarsAmount                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_StylePointsAmount                                      OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UBorder*)                            Border_StylePointsRewardsTag                                OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UBorder*)                            Border_BattleStarsRewardsTag                                OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS29UI.FortBattlePassResourcesWidgetS29.OnStylePointsRewardsSet
	// void OnStylePointsRewardsSet(int32_t Rewards);                                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.FortBattlePassResourcesWidgetS29.OnBattleStarRewardsSet
	// void OnBattleStarRewardsSet(int32_t Rewards);                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassS29UI.FortBattlePassTutorialTooltipS29
/// Size: 0x0010 (0x0002F0 - 0x000300)
class UFortBattlePassTutorialTooltipS29 : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UCommonRichTextBlock*)               Text_Tooltip                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS29UI.FortBattlePassTutorialTooltipS29.ShowTooltip
	// void ShowTooltip();                                                                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS29UI.FortBattlePassTutorialTooltipS29.SetText
	// void SetText(FText Text);                                                                                                // [0xb208af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS29UI.FortBattlePassTutorialTooltipS29.HideTooltip
	// void HideTooltip();                                                                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
};

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

