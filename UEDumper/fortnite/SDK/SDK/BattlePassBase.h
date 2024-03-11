
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Enum /Script/BattlePassBase.EBattlePassLandingPageSpecialEntryType
/// Size: 0x07
enum class EBattlePassLandingPageSpecialEntryType : uint8_t
{
	EBattlePassLandingPageSpecialEntryType__None                                     = 0,
	EBattlePassLandingPageSpecialEntryType__Subscription                             = 1,
	EBattlePassLandingPageSpecialEntryType__CharacterCustomizer                      = 2,
	EBattlePassLandingPageSpecialEntryType__SpecialCharacter                         = 3,
	EBattlePassLandingPageSpecialEntryType__Weekly                                   = 4,
	EBattlePassLandingPageSpecialEntryType__COUNT                                    = 5,
	EBattlePassLandingPageSpecialEntryType__EBattlePassLandingPageSpecialEntryType_MAX = 6
};

/// Enum /Script/BattlePassBase.FBattlePassLandingPageButtonDisplayBehavior
/// Size: 0x08
enum class FBattlePassLandingPageButtonDisplayBehavior : uint8_t
{
	FBattlePassLandingPageButtonDisplayBehavior__None                                = 0,
	FBattlePassLandingPageButtonDisplayBehavior__MainRewards                         = 1,
	FBattlePassLandingPageButtonDisplayBehavior__BonusRewards                        = 2,
	FBattlePassLandingPageButtonDisplayBehavior__WeeklyRewards                       = 3,
	FBattlePassLandingPageButtonDisplayBehavior__QuestRewards                        = 4,
	FBattlePassLandingPageButtonDisplayBehavior__Subscription                        = 5,
	FBattlePassLandingPageButtonDisplayBehavior__Customization                       = 6,
	FBattlePassLandingPageButtonDisplayBehavior__FBattlePassLandingPageButtonDisplayBehavior_MAX = 7
};

/// Enum /Script/BattlePassBase.BattlePassTileAvailabilityStates
/// Size: 0x05
enum class BattlePassTileAvailabilityStates : uint8_t
{
	BattlePassTileAvailabilityStates__Invalid                                        = 0,
	BattlePassTileAvailabilityStates__Available                                      = 1,
	BattlePassTileAvailabilityStates__Owned                                          = 2,
	BattlePassTileAvailabilityStates__Locked                                         = 3,
	BattlePassTileAvailabilityStates__BattlePassTileAvailabilityStates_MAX           = 4
};

/// Class /Script/BattlePassBase.BattlePassSubPageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBattlePassSubPageInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/BattlePassBase.BattlePassSubPageInterface.OnEnterSubPage
	// void OnEnterSubPage();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/BattlePassBase.BattlePassCharaterRewardTabInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FBattlePassCharaterRewardTabInfo
{ 
	SDK_UNDEFINED(32,11867) /* TWeakObjectPtr<UObject*> */ __um(TabIcon);                                          // 0x0000   (0x0020)  
	int32_t                                            TabCategoryCounter;                                         // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinPageTab
/// Size: 0x0228 (0x000400 - 0x000628)
class UFortBattlePassCustomSkinPageTab : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x1A0];                                     // 0x0400   (0x01A0)  MISSED
	class UScrollBox*                                  ScrollBox_Categories;                                       // 0x05A0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x05A8   (0x0010)  MISSED
	class UBattlePassEnabledInputData*                 EquipEnabledData;                                           // 0x05B8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x05C0   (0x0008)  MISSED
	class UCommonVisibilitySwitcher*                   VisibilitySwitcher_Content;                                 // 0x05C8   (0x0008)  
	TArray<FBattlePassCharaterRewardTabInfo>           TabInfos;                                                   // 0x05D0   (0x0010)  
	class UDynamicEntryBox*                            ListView_PrimaryTabs;                                       // 0x05E0   (0x0008)  
	TArray<FBattlePassCharaterRewardTabInfo>           ActiveTabInfos;                                             // 0x05E8   (0x0010)  
	class UClass*                                      CustomizationRowClass;                                      // 0x05F8   (0x0008)  
	FDataTableRowHandle                                NextTabInputAction;                                         // 0x0600   (0x0010)  
	FDataTableRowHandle                                PreviousTabInputAction;                                     // 0x0610   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0620   (0x0008)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinPageTab.EnableTabActions
	// void EnableTabActions();                                                                                              // [0xa333be0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinTab
/// Size: 0x0020 (0x001490 - 0x0014B0)
class UFortBattlePassCustomSkinTab : public UCommonButtonBase
{ 
public:
	class UCommonLazyImage*                            LazyImage_Icon;                                             // 0x1490   (0x0008)  
	FVector2D                                          ImageSize_Mobile;                                           // 0x1498   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x14A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinTab.SetIcon
	// void SetIcon(TWeakObjectPtr<UObject*> LazyObject);                                                                    // [0xa334660] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinTab.BP_ShowBang
	// void BP_ShowBang(bool bShow);                                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassSkinCategoriesTile
/// Size: 0x0008 (0x000400 - 0x000408)
class UFortBattlePassSkinCategoriesTile : public UCommonActivatableWidget
{ 
public:
	class UDynamicEntryBox*                            FortDynamicEntryBox_Categories;                             // 0x0400   (0x0008)  
};

/// Class /Script/BattlePassBase.BattlePassLandingPageBase
/// Size: 0x0158 (0x000400 - 0x000558)
class UBattlePassLandingPageBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x120];                                     // 0x0400   (0x0120)  MISSED
	class UBattlePassLandingPageButton*                LastHoveredPageButton;                                      // 0x0520   (0x0008)  
	class UCommonButtonGroupBase*                      LandingPageButtonGroupBase;                                 // 0x0528   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0530   (0x0028)  MISSED
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageEntryPreviewInfo
/// Size: 0x0090 (0x000000 - 0x000090)
struct FBattlePassLandingPageEntryPreviewInfo
{ 
	EBattlePassLandingPageSpecialEntryType             SpecialEntryType;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<EFortItemType>                              SubscriptionItemTypesToDisplay;                             // 0x0008   (0x0010)  
	FGameplayTag                                       SpecialCharacterVariantChannelToModify;                     // 0x0018   (0x0004)  
	FGameplayTag                                       SpecialCharacterActiveVariantTag;                           // 0x001C   (0x0004)  
	SDK_UNDEFINED(80,11868) /* TMap<FString, TWeakObjectPtr<UMaterialInstance*>> */ __um(TemplateIdTileRenderMap); // 0x0020   (0x0050)  
	SDK_UNDEFINED(16,11869) /* TArray<TWeakObjectPtr<UFortItemDefinition*>> */ __um(PreviewItems);                 // 0x0070   (0x0010)  
	bool                                               bEnableDynamicWeeklyPreview;                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              TransitionTime;                                             // 0x0084   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonTexts
/// Size: 0x0048 (0x000000 - 0x000048)
struct FBattlePassLandingPageButtonTexts
{ 
	SDK_UNDEFINED(24,11870) /* FText */                __um(TileText);                                             // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,11871) /* FText */                __um(LandingPageTitleText);                                 // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,11872) /* FText */                __um(LandingPageDescriptionText);                           // 0x0030   (0x0018)  
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayBehaviorData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBattlePassLandingPageButtonDisplayBehaviorData
{ 
	FBattlePassLandingPageButtonDisplayBehavior        DisplayBehavior;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FTimespan                                          BehaviorTimespan;                                           // 0x0008   (0x0008)  
	bool                                               bIsDisplayActive;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/BattlePassBase.BattlePassLandingPageButton
/// Size: 0x0280 (0x001490 - 0x001710)
class UBattlePassLandingPageButton : public UCommonButtonBase
{ 
public:
	EBattlePassView                                    SubPageType;                                                // 0x1490   (0x0001)  
	EBattlePassFeatures                                FeatureType;                                                // 0x1491   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x1492   (0x0006)  MISSED
	FBattlePassLandingPageEntryPreviewInfo             PreviewInfo;                                                // 0x1498   (0x0090)  
	bool                                               bNeedsBattlePass;                                           // 0x1528   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1529   (0x0007)  MISSED
	class UFortChallengeBundleScheduleDefinition*      DelayQuestSchedule;                                         // 0x1530   (0x0008)  
	int32_t                                            DelayDaysSinceSeasonStart;                                  // 0x1538   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x153C   (0x0004)  MISSED
	class UFortItemDefinition*                         RequiredItem;                                               // 0x1540   (0x0008)  
	class UFortBangWrapper_NUI*                        BangWrapper;                                                // 0x1548   (0x0008)  
	bool                                               bUsesTelemetry;                                             // 0x1550   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x1551   (0x0003)  MISSED
	FIntPoint                                          Telemetry_Size;                                             // 0x1554   (0x0008)  
	FIntPoint                                          Telemetry_Position;                                         // 0x155C   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x1564   (0x0004)  MISSED
	FBattlePassLandingPageButtonTexts                  DefaultTexts;                                               // 0x1568   (0x0048)  
	FBattlePassLandingPageButtonTexts                  DelayedTexts;                                               // 0x15B0   (0x0048)  
	FBattlePassLandingPageButtonTexts                  SubscribedTexts;                                            // 0x15F8   (0x0048)  
	FBattlePassLandingPageButtonDisplayBehaviorData    DisplayBehaviorData;                                        // 0x1640   (0x0018)  
	unsigned char                                      UnknownData05_6[0xB8];                                      // 0x1658   (0x00B8)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded
	// void OnSubscriptionTextureLoaded(class UTexture2D* Texture);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated
	// void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption);                                                           // [0x18a39e4] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnShowDisplayDetails
	// void OnShowDisplayDetails();                                                                                          // [0x18a39e4] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSetTileImageMaterial
	// void OnSetTileImageMaterial(class UMaterialInstance* Material);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated
	// void OnDisplayDetailsUpdated(FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails);                          // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails
	// FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails();                                             // [0x279ffc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.BattlePassRewardPageBase
/// Size: 0x0118 (0x000400 - 0x000518)
class UBattlePassRewardPageBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x118];                                     // 0x0400   (0x0118)  MISSED
};

/// Class /Script/BattlePassBase.BattlePassUIGameFeatureAction
/// Size: 0x0060 (0x000028 - 0x000088)
class UBattlePassUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
public:
	SDK_UNDEFINED(32,11873) /* TWeakObjectPtr<UClass*> */ __um(BattlePassScreenClass);                             // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,11874) /* TWeakObjectPtr<UClass*> */ __um(BattlePassResourceWidgetClass);                     // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,11875) /* TWeakObjectPtr<UClass*> */ __um(BattlePassInfoModalClass);                          // 0x0068   (0x0020)  
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile
/// Size: 0x00B8 (0x0002C0 - 0x000378)
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x02C0   (0x0020)  MISSED
	class UProgressBar*                                ProgressBar;                                                // 0x02E0   (0x0008)  
	class UFortDynamicEntryBox*                        FortDynamicEntryBox_Items;                                  // 0x02E8   (0x0008)  
	class URichTextBlock*                              Text_CategoryTitle;                                         // 0x02F0   (0x0008)  
	class UFortBattlePassTile*                         PreviewedTile;                                              // 0x02F8   (0x0008)  
	int32_t                                            OwnedRewards;                                               // 0x0300   (0x0004)  
	unsigned char                                      UnknownData01_6[0x74];                                      // 0x0304   (0x0074)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile
	// void SetPreviewedTile(int32_t Index);                                                                                 // [0xa334754] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated
	// void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress);                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged
	// void OnLockedStateChanged(bool bCategoryLocked);                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated
	// void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile
	// void FocusTile(int32_t Index);                                                                                        // [0xa333bf4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinPageBase
/// Size: 0x01C8 (0x000400 - 0x0005C8)
class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x1A0];                                     // 0x0400   (0x01A0)  MISSED
	class UScrollBox*                                  ScrollBox_Categories;                                       // 0x05A0   (0x0008)  
	class UFortDynamicEntryBox*                        FortDynamicEntryBox_Categories;                             // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x05B0   (0x0008)  MISSED
	class UBattlePassEnabledInputData*                 EquipEnabledData;                                           // 0x05B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x05C0   (0x0008)  MISSED
};

/// Class /Script/BattlePassBase.FortBattlePassBulkBuyPageBase
/// Size: 0x01A0 (0x000400 - 0x0005A0)
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x118];                                     // 0x0400   (0x0118)  MISSED
	class UCommonButtonBase*                           Button_Addition;                                            // 0x0518   (0x0008)  
	class UCommonButtonBase*                           Button_Subtraction;                                         // 0x0520   (0x0008)  
	class UDynamicEntryBox*                            DynamicEntryBox_TilesEntries;                               // 0x0528   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_BottomButtons;                                     // 0x0530   (0x0008)  
	class UFortCTAButton*                              Button_BuyLevels;                                           // 0x0538   (0x0008)  
	class UFortCTAButton*                              Button_ClaimReward;                                         // 0x0540   (0x0008)  
	class UWidget*                                     Widget_LevelUpMessagePremium;                               // 0x0548   (0x0008)  
	class UAthenaSeasonItemData_BattleStar*            SeasonData_BattleStar;                                      // 0x0550   (0x0008)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0558   (0x0018)  MISSED
	class UAthenaSeasonItemDefinition*                 SeasonItemDefinition;                                       // 0x0570   (0x0008)  
	class UFortBattlePassTile*                         FocusedReward;                                              // 0x0578   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0580   (0x0018)  MISSED
	class UScrollBox*                                  ScrollBox_Pages;                                            // 0x0598   (0x0008)  


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged
	// void OnRewardCountChanged(int32_t Count);                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged
	// void OnPageRangeChanged(int32_t FromPage, int32_t ToPage);                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged
	// void OnCostChanged(int32_t Cost);                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled
	// void HandleUserScrolled(float ScrollAmount);                                                                          // [0xa334458] Final|Native|Protected 
};

/// Class /Script/BattlePassBase.FortBattlePassCheckBoxButton
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFortBattlePassCheckBoxButton : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1490   (0x0010)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCheckBoxButton.OnStateChanged
	// void OnStateChanged(bool bNewIsChecked);                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassContext
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UFortBattlePassContext : public UBlueprintContextBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<class UFortPersistentResourceItemDefinition*> CustomizationPageSeasonalResources;                       // 0x0038   (0x0010)  
	TArray<class UFortPersistentResourceItemDefinition*> AllSeasonalResources;                                     // 0x0048   (0x0010)  
	SDK_UNDEFINED(80,11876) /* TMap<ERewardPageType, FSeasonalResourceList> */ __um(RewardPageSeasonalResources);  // 0x0058   (0x0050)  


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies
	// TArray<FSeasonCurrencyMcpData> GetSeasonalCurrencies();                                                               // [0xa333f18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText
	// FText GetLevelPurchaseDisclaimerText();                                                                               // [0xa333e64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText
	// FText GetDefaultDisclaimerText();                                                                                     // [0x285d288] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText
	// FText GetCurrentSeasonNumberAsText(bool bFullText);                                                                   // [0xa333d88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText
	// FText GetCurrentChapterAsText(bool bFullText);                                                                        // [0xa333cac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel
	// bool CanPurchaseBattlePassLevel();                                                                                    // [0xa333bbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassResourcesWidgetBase
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget
{ 
public:
	class UClass*                                      ResourceCounterClass;                                       // 0x02E8   (0x0008)  
	class UDynamicEntryBox*                            EntryBox_ResourceCounters;                                  // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassResourcesWidgetBase.ShowResourcesInfoModal
	// void ShowResourcesInfoModal();                                                                                        // [0xa334a84] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassResourcesWidgetBase.OnShowMoreInfo
	// void OnShowMoreInfo(bool bShouldShowMoreInfo);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassCurrencyPanel
/// Size: 0x0040 (0x0002F8 - 0x000338)
class UFortBattlePassCurrencyPanel : public UFortBattlePassResourcesWidgetBase
{ 
public:
	class UHorizontalBox*                              HBox_BattleStarContainer;                                   // 0x02F8   (0x0008)  
	class UCommonTextBlock*                            Text_BattleStar;                                            // 0x0300   (0x0008)  
	class UHorizontalBox*                              HBox_CustomSkinContainer;                                   // 0x0308   (0x0008)  
	class UCommonTextBlock*                            Text_CustomSkin;                                            // 0x0310   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0318   (0x0020)  MISSED
};

/// Class /Script/BattlePassBase.FortBattlePassDynamicIcon
/// Size: 0x0048 (0x0002C0 - 0x000308)
class UFortBattlePassDynamicIcon : public UUserWidget
{ 
public:
	SDK_UNDEFINED(32,11877) /* TWeakObjectPtr<UObject*> */ __um(BattlePassDefaultIcon);                            // 0x02C0   (0x0020)  
	SDK_UNDEFINED(32,11878) /* TWeakObjectPtr<UObject*> */ __um(BattlePassOwnedIcon);                              // 0x02E0   (0x0020)  
	class UFortLazyImage*                              LazyImage_BattlePassIcon;                                   // 0x0300   (0x0008)  


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassDynamicIcon.OnBattlePassInfoUpdated
	// void OnBattlePassInfoUpdated(bool bOwnsBattlePass);                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassLevelCount
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UFortBattlePassLevelCount : public UUserWidget
{ 
public:
	class UCommonTextBlock*                            Text_LevelCount;                                            // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Class /Script/BattlePassBase.FortBattlePassPrerequisiteHeader
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortBattlePassPrerequisiteHeader : public UUserWidget
{ 
public:
	class UTextBlock*                                  Text_Prerequisite;                                          // 0x02C0   (0x0008)  
};

/// Class /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget
/// Size: 0x00C0 (0x000400 - 0x0004C0)
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	class UCommonButtonBase*                           Button_Addition;                                            // 0x0408   (0x0008)  
	class UCommonButtonBase*                           Button_BatchAddition;                                       // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_Subtraction;                                         // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_BatchSubtraction;                                    // 0x0420   (0x0008)  
	class UCommonVisibilitySwitcher*                   Switcher_PurchaseButtons;                                   // 0x0428   (0x0008)  
	class UFortHoldableButton*                         Button_Purchase;                                            // 0x0430   (0x0008)  
	class UCommonButtonBase*                           Button_GetVBucks;                                           // 0x0438   (0x0008)  
	class UCommonButtonBase*                           Button_ReloadMtx;                                           // 0x0440   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0448   (0x0008)  
	class UFortBattlePassCheckBoxButton*               CheckBox_Bundle;                                            // 0x0450   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0458   (0x0008)  
	int32_t                                            CurrentLevel;                                               // 0x0460   (0x0004)  
	bool                                               bIsOfferActive;                                             // 0x0464   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0465   (0x0003)  MISSED
	int32_t                                            CurrentVBucks;                                              // 0x0468   (0x0004)  
	int32_t                                            CurrentBattleStars;                                         // 0x046C   (0x0004)  
	int32_t                                            BatchNum;                                                   // 0x0470   (0x0004)  
	bool                                               bOfferUnavailable;                                          // 0x0474   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0475   (0x0003)  MISSED
	int32_t                                            MaxBundleLevel;                                             // 0x0478   (0x0004)  
	int32_t                                            MaxLevel;                                                   // 0x047C   (0x0004)  
	int32_t                                            MaxLevelPurchases;                                          // 0x0480   (0x0004)  
	int32_t                                            BundleAmount;                                               // 0x0484   (0x0004)  
	class UFortItemDefinition*                         LevelPreviewItem;                                           // 0x0488   (0x0008)  
	class UAthenaSeasonItemData_BattleStar*            BattleStarData;                                             // 0x0490   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0498   (0x0028)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnUpdatePageUnlockText
	// void OnUpdatePageUnlockText(FText& PageUnlockText);                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged
	// void OnTotalPriceChanged(int32_t NewPrice);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged
	// void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable
	// void OnOfferUnavailable();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked
	// void OnAmountChangeButtonClicked();                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled
	// bool IsReloadMtxEnabled();                                                                                            // [0xa3345d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete
	// void HandlePurchaseMultiComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, TArray<FString>& OfferIdList); // [0xa334304] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete
	// void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString OfferId);              // [0xa334040] Final|Native|Private|HasOutParms 
};

/// Class /Script/BattlePassBase.FortBattlePassResourceCounter
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortBattlePassResourceCounter : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            Text_ResourceName;                                          // 0x02E8   (0x0008)  
	class UFortLazyImage*                              LazyImage_ResourceIcon;                                     // 0x02F0   (0x0008)  
	class UCommonTextBlock*                            Text_ResourceCount;                                         // 0x02F8   (0x0008)  
	class UFortPersistentResourceItemDefinition*       CurrentResource;                                            // 0x0300   (0x0008)  
};

/// Class /Script/BattlePassBase.FortBattlePassRewardGrid
/// Size: 0x00D0 (0x000400 - 0x0004D0)
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x68];                                      // 0x0400   (0x0068)  MISSED
	class UClass*                                      GridTileClass;                                              // 0x0468   (0x0008)  
	class UClass*                                      GridEmptyTileClass;                                         // 0x0470   (0x0008)  
	FVector2D                                          GridCellPadding;                                            // 0x0478   (0x0010)  
	class UFortBattlePassRewardGridHeader*             PageHeader;                                                 // 0x0488   (0x0008)  
	class UGridPanel*                                  GridPanel_Rewards;                                          // 0x0490   (0x0008)  
	class UFortBattlePassTileBase*                     DefaultFocusTile;                                           // 0x0498   (0x0008)  
	SDK_UNDEFINED(8,11879) /* TWeakObjectPtr<UCommonButtonBase*> */ __um(LastFocusedTile);                         // 0x04A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x04A8   (0x0028)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected
	// void OnPageUnselected();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageSelected
	// void OnPageSelected();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassRewardGridHeader
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortBattlePassRewardGridHeader : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType
	// void OnSetPageType(ERewardPageType PageType);                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageCustomName
	// void OnSetPageCustomName(FText& CustomName);                                                                          // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageUnlocked
	// void OnPageUnlocked(int32_t PurchasedRewards, int32_t TotalRewards);                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageNumberSet
	// void OnPageNumberSet(int32_t InPageNumber);                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageLocked
	// void OnPageLocked(int32_t RequiredLevel, int32_t RequiredRewards, bool IsTimeLocked, FTimespan TimeRemaining);        // [0x18a39e4] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnBattlePassLevelSet
	// void OnBattlePassLevelSet(int32_t BattlePassLevel);                                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber
	// int32_t GetPageNumber();                                                                                              // [0x6473e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassRewardTrack
/// Size: 0x00A0 (0x000400 - 0x0004A0)
class UFortBattlePassRewardTrack : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0400   (0x0050)  MISSED
	class UClass*                                      RewardTileClass;                                            // 0x0450   (0x0008)  
	class UClass*                                      RewardEmptyTileClass;                                       // 0x0458   (0x0008)  
	class UClass*                                      PrerequisiteHeaderClass;                                    // 0x0460   (0x0008)  
	FVector2D                                          GridCellPadding;                                            // 0x0468   (0x0010)  
	class UGridPanel*                                  GridPanel_Rewards;                                          // 0x0478   (0x0008)  
	class UFortBattlePassTileBase*                     DefaultFocusTile;                                           // 0x0480   (0x0008)  
	SDK_UNDEFINED(8,11880) /* TWeakObjectPtr<UCommonButtonBase*> */ __um(LastFocusedTile);                         // 0x0488   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0490   (0x0010)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageUnselected
	// void OnPageUnselected();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageSelected
	// void OnPageSelected();                                                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassTileBase
/// Size: 0x00C0 (0x001530 - 0x0015F0)
class UFortBattlePassTileBase : public UFortHoldableButton
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x1528   (0x0008)  MISSED
	ERewardPageType                                    RewardPageType;                                             // 0x1530   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x1531   (0x0007)  MISSED
	class USizeBox*                                    SizeBox_Content;                                            // 0x1538   (0x0008)  
	SDK_UNDEFINED(80,11881) /* TMap<FName, FLinearColor> */ __um(TileColors);                                      // 0x1540   (0x0050)  
	FLinearColor                                       OverlayDimColor;                                            // 0x1590   (0x0010)  
	FVector2D                                          TileDesiredCellSpan;                                        // 0x15A0   (0x0010)  
	float                                              UnitHeight;                                                 // 0x15B0   (0x0004)  
	float                                              UnitWidth;                                                  // 0x15B4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x15B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetState
	// void SetState(BattlePassTileAvailabilityStates NewState);                                                             // [0xa3348d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetSize
	// void SetSize(EPageItemTileSize TileSize, FVector2D& CellSpacing);                                                     // [0xa334800] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnStateChanged
	// void OnStateChanged(BattlePassTileAvailabilityStates NewState);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSizeChanged
	// void OnSizeChanged(FVector2D& NewSize);                                                                               // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetTileColors
	// void OnSetTileColors();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass
	// void OnSetRequiresBattlePass(bool bRequiresBP);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnRevealed
	// void OnRevealed();                                                                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnPeeked
	// void OnPeeked();                                                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsOwned
	// bool IsOwned();                                                                                                       // [0xa3345b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsLocked
	// bool IsLocked();                                                                                                      // [0xa33459c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsAvailable
	// bool IsAvailable();                                                                                                   // [0xa334580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.GetState
	// BattlePassTileAvailabilityStates GetState();                                                                          // [0xa334028] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.AreAnyGrantedItemsEquipped
	// bool AreAnyGrantedItemsEquipped();                                                                                    // [0xa333b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassTile
/// Size: 0x0080 (0x0015F0 - 0x001670)
class UFortBattlePassTile : public UFortBattlePassTileBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x15F0   (0x0018)  MISSED
	class UFortLazyImage*                              Image_RewardItem;                                           // 0x1608   (0x0008)  
	class UImage*                                      Image_Currency;                                             // 0x1610   (0x0008)  
	class UImage*                                      Age_Gating_Item;                                            // 0x1618   (0x0008)  
	bool                                               bIsOnBulkBuyMode;                                           // 0x1620   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4F];                                      // 0x1621   (0x004F)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnpreviewed
	// void OnUnpreviewed();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnhighlighted
	// void OnUnhighlighted();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnTilePreviewCycled
	// void OnTilePreviewCycled();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetTrack
	// void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice
	// void OnSetCurrencyAndPrice(EBattlePassCurrencyType Currency, int32_t Price);                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnPreviewed
	// void OnPreviewed();                                                                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedStateUpdated
	// void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated
	// void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards);                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnHighlighted
	// void OnHighlighted();                                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnAffordabilityChanged
	// void OnAffordabilityChanged(bool bHasEnougCurrency);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.IsAffordable
	// bool IsAffordable();                                                                                                  // [0xa3344f8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTile.HasPrerequisites
	// bool HasPrerequisites();                                                                                              // [0xa3344d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassTutorialTooltip
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{ 
public:
	class UCommonRichTextBlock*                        Text_Tooltip;                                               // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip
	// void ShowTooltip();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled
	// void SetTooltipEnabled(bool bEnable);                                                                                 // [0xa334a04] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetText
	// void SetText(FText Text);                                                                                             // [0xa334954] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip
	// void HideTooltip();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassBase.RebootRallyQuestPanel
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class URebootRallyQuestPanel : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/BattlePassBase.RebootRallyQuestPanel.OnRebootRallyEligibilityUpdated
	// void OnRebootRallyEligibilityUpdated(bool bEligible);                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Struct /Script/BattlePassBase.BattlePassEntrySelectedParams
/// Size: 0x0058 (0x000000 - 0x000058)
struct FBattlePassEntrySelectedParams
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/BattlePassBase.BattlePassCoverPageParams
/// Size: 0x0048 (0x000000 - 0x000048)
struct FBattlePassCoverPageParams
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayDetails
/// Size: 0x0070 (0x000000 - 0x000070)
struct FBattlePassLandingPageButtonDisplayDetails
{ 
	FBattlePassLandingPageButtonTexts                  ButtonTexts;                                                // 0x0000   (0x0048)  
	bool                                               bIsBPLocked;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(24,11882) /* FText */                __um(MissingCosmeticNameText);                              // 0x0050   (0x0018)  
	FTimespan                                          DelayTimespan;                                              // 0x0068   (0x0008)  
};

/// Struct /Script/BattlePassBase.SeasonalResourceList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSeasonalResourceList
{ 
	TArray<class UFortPersistentResourceItemDefinition*> SeasonalResources;                                        // 0x0000   (0x0010)  
};

