
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: BlueprintContext
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: UMG

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinPageTab
/// Size: 0x0228 (0x000408 - 0x000630)
class UFortBattlePassCustomSkinPageTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(class UScrollBox*)                         ScrollBox_Categories                                        OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UBattlePassEnabledInputData*)        EquipEnabledData                                            OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          VisibilitySwitcher_Content                                  OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(TArray<FBattlePassCharaterRewardTabInfo>)  TabInfos                                                    OFFSET(get<T>, {0x5D8, 16, 0, 0})
	CMember(class UDynamicEntryBox*)                   ListView_PrimaryTabs                                        OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(TArray<FBattlePassCharaterRewardTabInfo>)  ActiveTabInfos                                              OFFSET(get<T>, {0x5F0, 16, 0, 0})
	CMember(class UClass*)                             CustomizationRowClass                                       OFFSET(get<T>, {0x600, 8, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputAction                                          OFFSET(getStruct<T>, {0x608, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousTabInputAction                                      OFFSET(getStruct<T>, {0x618, 16, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinPageTab.EnableTabActions
	// void EnableTabActions();                                                                                                 // [0xb6206a8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinTab
/// Size: 0x0020 (0x0014A0 - 0x0014C0)
class UFortBattlePassCustomSkinTab : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
	CMember(class UCommonLazyImage*)                   LazyImage_Icon                                              OFFSET(get<T>, {0x14A0, 8, 0, 0})
	SMember(FVector2D)                                 ImageSize_Mobile                                            OFFSET(getStruct<T>, {0x14A8, 16, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinTab.SetIcon
	// void SetIcon(TWeakObjectPtr<UObject*> LazyObject);                                                                       // [0xb621c74] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinTab.BP_ShowBang
	// void BP_ShowBang(bool bShow);                                                                                            // [0x228deb8] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassSkinCategoriesTile
/// Size: 0x0008 (0x000408 - 0x000410)
class UFortBattlePassSkinCategoriesTile : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(class UDynamicEntryBox*)                   FortDynamicEntryBox_Categories                              OFFSET(get<T>, {0x408, 8, 0, 0})
};

/// Class /Script/BattlePassBase.BattlePassLandingPageBase
/// Size: 0x0158 (0x000408 - 0x000560)
class UBattlePassLandingPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(class UBattlePassLandingPageButton*)       LastHoveredPageButton                                       OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UCommonButtonGroupBase*)             LandingPageButtonGroupBase                                  OFFSET(get<T>, {0x530, 8, 0, 0})
};

/// Class /Script/BattlePassBase.BattlePassLandingPageButton
/// Size: 0x0220 (0x0014A0 - 0x0016C0)
class UBattlePassLandingPageButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5824;

public:
	CMember(EBattlePassView)                           SubPageType                                                 OFFSET(get<T>, {0x14A0, 1, 0, 0})
	CMember(EBattlePassFeatures)                       FeatureType                                                 OFFSET(get<T>, {0x14A1, 1, 0, 0})
	SMember(FBattlePassLandingPageEntryPreviewInfo)    PreviewInfo                                                 OFFSET(getStruct<T>, {0x14A8, 144, 0, 0})
	DMember(bool)                                      bNeedsBattlePass                                            OFFSET(get<bool>, {0x1538, 1, 0, 0})
	CMember(class UFortChallengeBundleScheduleDefinition*) DelayQuestSchedule                                      OFFSET(get<T>, {0x1540, 8, 0, 0})
	DMember(int32_t)                                   DelayDaysSinceSeasonStart                                   OFFSET(get<int32_t>, {0x1548, 4, 0, 0})
	CMember(class UFortItemDefinition*)                RequiredItem                                                OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(class UFortBangWrapper_NUI*)               BangWrapper                                                 OFFSET(get<T>, {0x1558, 8, 0, 0})
	DMember(bool)                                      bUsesTelemetry                                              OFFSET(get<bool>, {0x1560, 1, 0, 0})
	SMember(FIntPoint)                                 Telemetry_Size                                              OFFSET(getStruct<T>, {0x1564, 8, 0, 0})
	SMember(FIntPoint)                                 Telemetry_Position                                          OFFSET(getStruct<T>, {0x156C, 8, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         DefaultTexts                                                OFFSET(getStruct<T>, {0x1578, 48, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         DelayedTexts                                                OFFSET(getStruct<T>, {0x15A8, 48, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         SubscribedTexts                                             OFFSET(getStruct<T>, {0x15D8, 48, 0, 0})
	SMember(FBattlePassLandingPageButtonDisplayBehaviorData) DisplayBehaviorData                                   OFFSET(getStruct<T>, {0x1608, 24, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded
	// void OnSubscriptionTextureLoaded(class UTexture2D* Texture);                                                             // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated
	// void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption);                                                              // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnShowDisplayDetails
	// void OnShowDisplayDetails();                                                                                             // [0x228deb8] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSetTileImageMaterial
	// void OnSetTileImageMaterial(class UMaterialInstance* Material);                                                          // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated
	// void OnDisplayDetailsUpdated(FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails);                             // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails
	// FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails();                                                // [0x1d4beb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.BattlePassRewardPageBase
/// Size: 0x0118 (0x000408 - 0x000520)
class UBattlePassRewardPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
};

/// Class /Script/BattlePassBase.BattlePassUIGameFeatureAction
/// Size: 0x0060 (0x000028 - 0x000088)
class UBattlePassUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassScreenClass                                       OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassResourceWidgetClass                               OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassInfoModalClass                                    OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile
/// Size: 0x00B8 (0x0002C8 - 0x000380)
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(class UProgressBar*)                       ProgressBar                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UFortDynamicEntryBox*)               FortDynamicEntryBox_Items                                   OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class URichTextBlock*)                     Text_CategoryTitle                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UFortBattlePassTile*)                PreviewedTile                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(int32_t)                                   OwnedRewards                                                OFFSET(get<int32_t>, {0x308, 4, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile
	// void SetPreviewedTile(int32_t Index);                                                                                    // [0xb621d68] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated
	// void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress);                   // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged
	// void OnLockedStateChanged(bool bCategoryLocked);                                                                         // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated
	// void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile
	// void FocusTile(int32_t Index);                                                                                           // [0xb6206bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinPageBase
/// Size: 0x01C8 (0x000408 - 0x0005D0)
class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(class UScrollBox*)                         ScrollBox_Categories                                        OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(class UFortDynamicEntryBox*)               FortDynamicEntryBox_Categories                              OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(class UBattlePassEnabledInputData*)        EquipEnabledData                                            OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassBulkBuyPageBase
/// Size: 0x01A0 (0x000408 - 0x0005A8)
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(class UCommonButtonBase*)                  Button_Addition                                             OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Subtraction                                          OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_TilesEntries                                OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_BottomButtons                                      OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_BuyLevels                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_ClaimReward                                          OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(class UWidget*)                            Widget_LevelUpMessagePremium                                OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(class UAthenaSeasonItemData_BattleStar*)   SeasonData_BattleStar                                       OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(class UAthenaSeasonItemDefinition*)        SeasonItemDefinition                                        OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UFortBattlePassTile*)                FocusedReward                                               OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Pages                                             OFFSET(get<T>, {0x5A0, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged
	// void OnRewardCountChanged(int32_t Count);                                                                                // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged
	// void OnPageRangeChanged(int32_t FromPage, int32_t ToPage);                                                               // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged
	// void OnCostChanged(int32_t Cost);                                                                                        // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled
	// void HandleUserScrolled(float ScrollAmount);                                                                             // [0xb621a6c] Final|Native|Protected 
};

/// Class /Script/BattlePassBase.FortBattlePassCheckBoxButton
/// Size: 0x0010 (0x0014A0 - 0x0014B0)
class UFortBattlePassCheckBoxButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCheckBoxButton.OnStateChanged
	// void OnStateChanged(bool bNewIsChecked);                                                                                 // [0x228deb8] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassContext
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UFortBattlePassContext : public UBlueprintContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<class UFortPersistentResourceItemDefinition*>) CustomizationPageSeasonalResources               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class UFortPersistentResourceItemDefinition*>) AllSeasonalResources                             OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TMap<ERewardPageType, FSeasonalResourceList>) RewardPageSeasonalResources                              OFFSET(get<T>, {0x58, 80, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies
	// TArray<FSeasonCurrencyMcpData> GetSeasonalCurrencies();                                                                  // [0xb6209b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText
	// FText GetLevelPurchaseDisclaimerText();                                                                                  // [0xb620914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText
	// FText GetDefaultDisclaimerText();                                                                                        // [0x3897f44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText
	// FText GetCurrentSeasonNumberAsText(bool bFullText);                                                                      // [0xb620844] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText
	// FText GetCurrentChapterAsText(bool bFullText);                                                                           // [0xb620774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel
	// bool CanPurchaseBattlePassLevel();                                                                                       // [0xb620684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassResourcesWidgetBase
/// Size: 0x0010 (0x0002F0 - 0x000300)
class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UClass*)                             ResourceCounterClass                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UDynamicEntryBox*)                   EntryBox_ResourceCounters                                   OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassResourcesWidgetBase.ShowResourcesInfoModal
	// void ShowResourcesInfoModal();                                                                                           // [0xb622098] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassResourcesWidgetBase.OnShowMoreInfo
	// void OnShowMoreInfo(bool bShouldShowMoreInfo);                                                                           // [0x228deb8] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassCurrencyPanel
/// Size: 0x0040 (0x000300 - 0x000340)
class UFortBattlePassCurrencyPanel : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class UHorizontalBox*)                     HBox_BattleStarContainer                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_BattleStar                                             OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UHorizontalBox*)                     HBox_CustomSkinContainer                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_CustomSkin                                             OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassDynamicIcon
/// Size: 0x0048 (0x0002C8 - 0x000310)
class UFortBattlePassDynamicIcon : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(TWeakObjectPtr<UObject*>)                  BattlePassDefaultIcon                                       OFFSET(get<T>, {0x2C8, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  BattlePassOwnedIcon                                         OFFSET(get<T>, {0x2E8, 32, 0, 0})
	CMember(class UFortLazyImage*)                     LazyImage_BattlePassIcon                                    OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassDynamicIcon.OnBattlePassInfoUpdated
	// void OnBattlePassInfoUpdated(bool bOwnsBattlePass);                                                                      // [0x228deb8] Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassLevelCount
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class UFortBattlePassLevelCount : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(class UCommonTextBlock*)                   Text_LevelCount                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassPrerequisiteHeader
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortBattlePassPrerequisiteHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UTextBlock*)                         Text_Prerequisite                                           OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget
/// Size: 0x00C0 (0x000408 - 0x0004C8)
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	CMember(class UCommonButtonBase*)                  Button_Addition                                             OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BatchAddition                                        OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Subtraction                                          OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BatchSubtraction                                     OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonVisibilitySwitcher*)          Switcher_PurchaseButtons                                    OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UFortHoldableButton*)                Button_Purchase                                             OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_GetVBucks                                            OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ReloadMtx                                            OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UFortBattlePassCheckBoxButton*)      CheckBox_Bundle                                             OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(int32_t)                                   CurrentLevel                                                OFFSET(get<int32_t>, {0x468, 4, 0, 0})
	DMember(bool)                                      bIsOfferActive                                              OFFSET(get<bool>, {0x46C, 1, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               OFFSET(get<int32_t>, {0x470, 4, 0, 0})
	DMember(int32_t)                                   CurrentBattleStars                                          OFFSET(get<int32_t>, {0x474, 4, 0, 0})
	DMember(int32_t)                                   BatchNum                                                    OFFSET(get<int32_t>, {0x478, 4, 0, 0})
	DMember(bool)                                      bOfferUnavailable                                           OFFSET(get<bool>, {0x47C, 1, 0, 0})
	DMember(int32_t)                                   MaxBundleLevel                                              OFFSET(get<int32_t>, {0x480, 4, 0, 0})
	DMember(int32_t)                                   MaxLevel                                                    OFFSET(get<int32_t>, {0x484, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelPurchases                                           OFFSET(get<int32_t>, {0x488, 4, 0, 0})
	DMember(int32_t)                                   BundleAmount                                                OFFSET(get<int32_t>, {0x48C, 4, 0, 0})
	CMember(class UFortItemDefinition*)                LevelPreviewItem                                            OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UAthenaSeasonItemData_BattleStar*)   BattleStarData                                              OFFSET(get<T>, {0x498, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnUpdatePageUnlockText
	// void OnUpdatePageUnlockText(FText& PageUnlockText);                                                                      // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged
	// void OnTotalPriceChanged(int32_t NewPrice);                                                                              // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged
	// void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft);                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable
	// void OnOfferUnavailable();                                                                                               // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked
	// void OnAmountChangeButtonClicked();                                                                                      // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled
	// bool IsReloadMtxEnabled();                                                                                               // [0xb621be8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete
	// void HandlePurchaseMultiComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, TArray<FString>& OfferIdList); // [0xb6212fc] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete
	// void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString OfferId);                 // [0xb620ae0] Final|Native|Private|HasOutParms 
};

/// Class /Script/BattlePassBase.FortBattlePassResourceCounter
/// Size: 0x0020 (0x0002F0 - 0x000310)
class UFortBattlePassResourceCounter : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(class UCommonTextBlock*)                   Text_ResourceName                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UFortLazyImage*)                     LazyImage_ResourceIcon                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ResourceCount                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UFortPersistentResourceItemDefinition*) CurrentResource                                          OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassRewardGrid
/// Size: 0x00C8 (0x000408 - 0x0004D0)
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	CMember(class UClass*)                             GridTileClass                                               OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UClass*)                             GridEmptyTileClass                                          OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FVector2D)                                 GridCellPadding                                             OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	CMember(class UFortBattlePassRewardGridHeader*)    PageHeader                                                  OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UGridPanel*)                         GridPanel_Rewards                                           OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class UFortBattlePassTileBase*)            DefaultFocusTile                                            OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonButtonBase*>)        LastFocusedTile                                             OFFSET(get<T>, {0x4A8, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected
	// void OnPageUnselected();                                                                                                 // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageSelected
	// void OnPageSelected();                                                                                                   // [0x228deb8] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassRewardGridHeader
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortBattlePassRewardGridHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType
	// void OnSetPageType(ERewardPageType PageType);                                                                            // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageCustomName
	// void OnSetPageCustomName(FText& CustomName);                                                                             // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageUnlocked
	// void OnPageUnlocked(int32_t PurchasedRewards, int32_t TotalRewards);                                                     // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageNumberSet
	// void OnPageNumberSet(int32_t InPageNumber);                                                                              // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageLocked
	// void OnPageLocked(int32_t RequiredLevel, int32_t RequiredRewards, bool IsTimeLocked, FTimespan TimeRemaining);           // [0x228deb8] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnBattlePassLevelSet
	// void OnBattlePassLevelSet(int32_t BattlePassLevel);                                                                      // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber
	// int32_t GetPageNumber();                                                                                                 // [0xac023b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassRewardTrack
/// Size: 0x00A0 (0x000408 - 0x0004A8)
class UFortBattlePassRewardTrack : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	CMember(class UClass*)                             RewardTileClass                                             OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UClass*)                             RewardEmptyTileClass                                        OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UClass*)                             PrerequisiteHeaderClass                                     OFFSET(get<T>, {0x468, 8, 0, 0})
	SMember(FVector2D)                                 GridCellPadding                                             OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	CMember(class UGridPanel*)                         GridPanel_Rewards                                           OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(class UFortBattlePassTileBase*)            DefaultFocusTile                                            OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonButtonBase*>)        LastFocusedTile                                             OFFSET(get<T>, {0x490, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageUnselected
	// void OnPageUnselected();                                                                                                 // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageSelected
	// void OnPageSelected();                                                                                                   // [0x228deb8] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassTileBase
/// Size: 0x00C8 (0x001538 - 0x001600)
class UFortBattlePassTileBase : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5632;

public:
	CMember(ERewardPageType)                           RewardPageType                                              OFFSET(get<T>, {0x1540, 1, 0, 0})
	CMember(class USizeBox*)                           SizeBox_Content                                             OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 TileColors                                                  OFFSET(get<T>, {0x1550, 80, 0, 0})
	SMember(FLinearColor)                              OverlayDimColor                                             OFFSET(getStruct<T>, {0x15A0, 16, 0, 0})
	SMember(FVector2D)                                 TileDesiredCellSpan                                         OFFSET(getStruct<T>, {0x15B0, 16, 0, 0})
	DMember(float)                                     UnitHeight                                                  OFFSET(get<float>, {0x15C0, 4, 0, 0})
	DMember(float)                                     UnitWidth                                                   OFFSET(get<float>, {0x15C4, 4, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetState
	// void SetState(BattlePassTileAvailabilityStates NewState);                                                                // [0xb621ee4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetSize
	// void SetSize(EPageItemTileSize TileSize, FVector2D& CellSpacing);                                                        // [0xb621e14] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnStateChanged
	// void OnStateChanged(BattlePassTileAvailabilityStates NewState);                                                          // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSizeChanged
	// void OnSizeChanged(FVector2D& NewSize);                                                                                  // [0x228deb8] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetTileColors
	// void OnSetTileColors();                                                                                                  // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass
	// void OnSetRequiresBattlePass(bool bRequiresBP);                                                                          // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnRevealed
	// void OnRevealed();                                                                                                       // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnPeeked
	// void OnPeeked();                                                                                                         // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsOwned
	// bool IsOwned();                                                                                                          // [0xb621bcc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsLocked
	// bool IsLocked();                                                                                                         // [0xb621bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsAvailable
	// bool IsAvailable();                                                                                                      // [0xb621b94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.GetState
	// BattlePassTileAvailabilityStates GetState();                                                                             // [0xb620ac8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.AreAnyGrantedItemsEquipped
	// bool AreAnyGrantedItemsEquipped();                                                                                       // [0xb620658] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassTile
/// Size: 0x0080 (0x001600 - 0x001680)
class UFortBattlePassTile : public UFortBattlePassTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5760;

public:
	CMember(class UFortLazyImage*)                     Image_RewardItem                                            OFFSET(get<T>, {0x1618, 8, 0, 0})
	CMember(class UImage*)                             Image_Currency                                              OFFSET(get<T>, {0x1620, 8, 0, 0})
	CMember(class UImage*)                             Age_Gating_Item                                             OFFSET(get<T>, {0x1628, 8, 0, 0})
	DMember(bool)                                      bIsOnBulkBuyMode                                            OFFSET(get<bool>, {0x1630, 1, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnpreviewed
	// void OnUnpreviewed();                                                                                                    // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnhighlighted
	// void OnUnhighlighted();                                                                                                  // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnTilePreviewCycled
	// void OnTilePreviewCycled();                                                                                              // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetTrack
	// void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass);                                                                // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice
	// void OnSetCurrencyAndPrice(EBattlePassCurrencyType Currency, int32_t Price);                                             // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnPreviewed
	// void OnPreviewed();                                                                                                      // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedStateUpdated
	// void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed);    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated
	// void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards);                      // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnHighlighted
	// void OnHighlighted();                                                                                                    // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnAffordabilityChanged
	// void OnAffordabilityChanged(bool bHasEnougCurrency);                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.IsAffordable
	// bool IsAffordable();                                                                                                     // [0xb621b0c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTile.HasPrerequisites
	// bool HasPrerequisites();                                                                                                 // [0xb621ae8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassTutorialTooltip
/// Size: 0x0010 (0x0002F0 - 0x000300)
class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UCommonRichTextBlock*)               Text_Tooltip                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip
	// void ShowTooltip();                                                                                                      // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled
	// void SetTooltipEnabled(bool bEnable);                                                                                    // [0xb622018] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetText
	// void SetText(FText Text);                                                                                                // [0xb621f68] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip
	// void HideTooltip();                                                                                                      // [0x228deb8] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassBase.RebootRallyQuestPanel
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class URebootRallyQuestPanel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/BattlePassBase.RebootRallyQuestPanel.OnRebootRallyEligibilityUpdated
	// void OnRebootRallyEligibilityUpdated(bool bEligible);                                                                    // [0x228deb8] Event|Public|BlueprintEvent 
};

/// Struct /Script/BattlePassBase.BattlePassCharaterRewardTabInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FBattlePassCharaterRewardTabInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UObject*>)                  TabIcon                                                     OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   TabCategoryCounter                                          OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonTexts
/// Size: 0x0030 (0x000000 - 0x000030)
class FBattlePassLandingPageButtonTexts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     TileText                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     LandingPageTitleText                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     LandingPageDescriptionText                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayBehaviorData
/// Size: 0x0018 (0x000000 - 0x000018)
class FBattlePassLandingPageButtonDisplayBehaviorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FBattlePassLandingPageButtonDisplayBehavior) DisplayBehavior                                           OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FTimespan)                                 BehaviorTimespan                                            OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsDisplayActive                                            OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayDetails
/// Size: 0x0050 (0x000000 - 0x000050)
class FBattlePassLandingPageButtonDisplayDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FBattlePassLandingPageButtonTexts)         ButtonTexts                                                 OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bIsBPLocked                                                 OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FText)                                     MissingCosmeticNameText                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FTimespan)                                 DelayTimespan                                               OFFSET(getStruct<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageEntryPreviewInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FBattlePassLandingPageEntryPreviewInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(EBattlePassLandingPageSpecialEntryType)    SpecialEntryType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<EFortItemType>)                     SubscriptionItemTypesToDisplay                              OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTag)                              SpecialCharacterVariantChannelToModify                      OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTag)                              SpecialCharacterActiveVariantTag                            OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr<UMaterialInstance*>>) TemplateIdTileRenderMap                             OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr<UFortItemDefinition*>>) PreviewItems                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bEnableDynamicWeeklyPreview                                 OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     TransitionTime                                              OFFSET(get<float>, {0x84, 4, 0, 0})
};

/// Struct /Script/BattlePassBase.SeasonalResourceList
/// Size: 0x0010 (0x000000 - 0x000010)
class FSeasonalResourceList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UFortPersistentResourceItemDefinition*>) SeasonalResources                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/BattlePassBase.EBattlePassLandingPageSpecialEntryType
/// Size: 0x06
enum class EBattlePassLandingPageSpecialEntryType : uint8_t
{
	EBattlePassLandingPageSpecialEntryType__None                                     = 0,
	EBattlePassLandingPageSpecialEntryType__Subscription                             = 1,
	EBattlePassLandingPageSpecialEntryType__CharacterCustomizer                      = 2,
	EBattlePassLandingPageSpecialEntryType__SpecialCharacter                         = 3,
	EBattlePassLandingPageSpecialEntryType__Weekly                                   = 4,
	EBattlePassLandingPageSpecialEntryType__COUNT                                    = 5
};

/// Enum /Script/BattlePassBase.FBattlePassLandingPageButtonDisplayBehavior
/// Size: 0x07
enum class FBattlePassLandingPageButtonDisplayBehavior : uint8_t
{
	FBattlePassLandingPageButtonDisplayBehavior__None                                = 0,
	FBattlePassLandingPageButtonDisplayBehavior__MainRewards                         = 1,
	FBattlePassLandingPageButtonDisplayBehavior__BonusRewards                        = 2,
	FBattlePassLandingPageButtonDisplayBehavior__WeeklyRewards                       = 3,
	FBattlePassLandingPageButtonDisplayBehavior__QuestRewards                        = 4,
	FBattlePassLandingPageButtonDisplayBehavior__Subscription                        = 5,
	FBattlePassLandingPageButtonDisplayBehavior__Customization                       = 6
};

/// Enum /Script/BattlePassBase.BattlePassTileAvailabilityStates
/// Size: 0x04
enum class BattlePassTileAvailabilityStates : uint8_t
{
	BattlePassTileAvailabilityStates__Invalid                                        = 0,
	BattlePassTileAvailabilityStates__Available                                      = 1,
	BattlePassTileAvailabilityStates__Owned                                          = 2,
	BattlePassTileAvailabilityStates__Locked                                         = 3
};

