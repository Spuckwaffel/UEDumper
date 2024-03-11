
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
/// dependency: GameplayTags
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/EventScreenBase.FortEventScreenData
/// Size: 0x0670 (0x000030 - 0x0006A0)
class UFortEventScreenData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FString)                                   EventCMSId                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   AccountResourceName                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   LevelOfferId                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   PremiumTrackOfferId                                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(class UFortTokenType*)                     PremiumTrackPurchasedToken                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FGameplayTag)                              VaultWorldTag                                               OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FVaultWorldBackgroundData)                 PreviewScreenBackgroundData                                 OFFSET(getStruct<T>, {0x80, 88, 0, 0})
	CMember(TWeakObjectPtr<UFortChallengeBundleItemDefinition*>) QuestBundle                                       OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      SpecialRewardItem                                           OFFSET(get<T>, {0xF8, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      SpecialPremiumRewardItem                                    OFFSET(get<T>, {0x118, 32, 0, 0})
	CMember(TArray<FEventItemOverride>)                ItemOverrides                                               OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FEventScreenTrackData)                     FreeTrackData                                               OFFSET(getStruct<T>, {0x148, 48, 0, 0})
	SMember(FEventScreenTrackData)                     PremiumTrackData                                            OFFSET(getStruct<T>, {0x178, 48, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryTag                                            OFFSET(getStruct<T>, {0x1A8, 4, 0, 0})
	CMember(TArray<class UClass*>)                     RichTextDecorators                                          OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(class UMaterialInterface*)                 EventBackgroundMaterial                                     OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 ProgressBarMaterial                                         OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(FSlateBrush)                               CurrencyBrush                                               OFFSET(getStruct<T>, {0x1D0, 192, 0, 0})
	SMember(FSlateBrush)                               CompletionBannerBrush                                       OFFSET(getStruct<T>, {0x290, 192, 0, 0})
	SMember(FSlateBrush)                               GlowForeground                                              OFFSET(getStruct<T>, {0x350, 192, 0, 0})
	SMember(FSlateBrush)                               GlowBackground                                              OFFSET(getStruct<T>, {0x410, 192, 0, 0})
	SMember(FLinearColor)                              EventBackgroundColor1                                       OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	SMember(FLinearColor)                              EventBackgroundColor2                                       OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor1                                      OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor2                                      OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor3                                      OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FLinearColor)                              AccentColor                                                 OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 RewardTileBackgroundColors                                  OFFSET(get<T>, {0x530, 80, 0, 0})
	SMember(FText)                                     TimeRemainingFormat                                         OFFSET(getStruct<T>, {0x580, 24, 0, 0})
	SMember(FText)                                     CurrencyFormat                                              OFFSET(getStruct<T>, {0x598, 24, 0, 0})
	CMember(TArray<FEventScreenMoreInfoGroup>)         MoreInfoGroups                                              OFFSET(get<T>, {0x5B0, 16, 0, 0})
	CMember(class USoundBase*)                         DefaultHoveredSound                                         OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class USoundBase*)                         DefaultPressedSound                                         OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class USoundBase*)                         BuyPressedSound                                             OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class USoundBase*)                         BuyHoldStartedSound                                         OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class USoundBase*)                         BuyHoldCompletedSound                                       OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class USoundBase*)                         BuyHoldAbortedSound                                         OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(class USoundBase*)                         BackPressedSound                                            OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(class USoundBase*)                         AddPressedSound                                             OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(class USoundBase*)                         SubtractPressedSound                                        OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(class USoundBase*)                         ProgressStartedSound                                        OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(class USoundBase*)                         ProgressEndedSound                                          OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(class USoundBase*)                         ProgressInterruptedSound                                    OFFSET(get<T>, {0x618, 8, 0, 0})
	DMember(float)                                     RewardPreviewZoomLevel                                      OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(bool)                                      bUseWidgetCameraFraming                                     OFFSET(get<bool>, {0x624, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          OFFSET(get<T>, {0x628, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PurchaseLevelsModalClass                                    OFFSET(get<T>, {0x648, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PurchasePremiumTrackModalClass                              OFFSET(get<T>, {0x668, 32, 0, 0})
	CMember(TArray<FString>)                           CalendarEvents                                              OFFSET(get<T>, {0x688, 16, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventModalBase
/// Size: 0x0010 (0x000400 - 0x000410)
class UFortEventModalBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventModalBase.CloseModal
	// void CloseModal();                                                                                                       // [0x3ee1514] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EventScreenBase.FortEventMoreInfoGroup
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortEventMoreInfoGroup : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnSetGroupText
	// void OnSetGroupText(FText& Header, FText& Body);                                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnIconLoaded
	// void OnIconLoaded(class UObject* Icon);                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventMoreInfoModal
/// Size: 0x0028 (0x000410 - 0x000438)
class UFortEventMoreInfoModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Groups                                      OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UScrollBox*)                         SB_Vertical                                                 OFFSET(get<T>, {0x430, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.SetModalText
	// void SetModalText(FText& Header, FText& SubHeader, FText& Legal);                                                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnModalBackout
	// void OnModalBackout();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                        // [0xa921c58] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventPurchaseLevelsModal
/// Size: 0x0070 (0x000410 - 0x000480)
class UFortEventPurchaseLevelsModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(class UCommonButtonBase*)                  Button_Addition                                             OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Subtraction                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Purchase                                             OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_GetVBucks                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UEventScreenListView*)               ListView_RewardPreview                                      OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(int32_t)                                   CurrentResourceValue                                        OFFSET(get<int32_t>, {0x448, 4, 0, 0})
	DMember(int32_t)                                   MaxResourceValue                                            OFFSET(get<int32_t>, {0x44C, 4, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               OFFSET(get<int32_t>, {0x450, 4, 0, 0})
	DMember(int32_t)                                   OfferResourceQuantity                                       OFFSET(get<int32_t>, {0x454, 4, 0, 0})
	DMember(bool)                                      bAnimateListViewFromEmpty                                   OFFSET(get<bool>, {0x458, 1, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnPurchaseAmountChanged
	// void OnPurchaseAmountChanged(int32_t TotalPrice, int32_t LevelQuantity, int32_t PurchaseQuantity, int32_t ResourceQuantity); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnCMSTextApplied
	// void OnCMSTextApplied(FText& LegalText);                                                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnAmountChangeButtonClicked
	// void OnAmountChangeButtonClicked();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                        // [0xa921c80] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortPurchasePremiumTrackBody
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortPurchasePremiumTrackBody : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortPurchasePremiumTrackBody.OnPopulate
	// void OnPopulate(int32_t BodyIndex, FText& BodyText);                                                                     // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventPurchasePremiumTrackModal
/// Size: 0x0070 (0x000410 - 0x000480)
class UFortEventPurchasePremiumTrackModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_Body                                        OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class UScrollBox*)                         ScrollBox_Body                                              OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class UFortCTAButton*)                     Button_Purchase                                             OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_GetVBucks                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PreviewReward                                        OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               OFFSET(get<int32_t>, {0x448, 4, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnPriceSet
	// void OnPriceSet(int32_t Price);                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnCMSTextApplied
	// void OnCMSTextApplied(FText& HeaderText, FText& LegalText);                                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                        // [0xa921ca8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventListViewWidgetBase
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortEventListViewWidgetBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/EventScreenBase.FortEventRewardTracksWidget
/// Size: 0x0050 (0x0002C8 - 0x000318)
class UFortEventRewardTracksWidget : public UFortEventListViewWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_RewardTracks                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(bool)                                      bPreviewMode                                                OFFSET(get<bool>, {0x2D0, 1, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPSetProgressPercent
	// void BPSetProgressPercent(float Percent);                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPSetAllRewardsCollected
	// void BPSetAllRewardsCollected(bool bAllCollected);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPOnSetRewardItem
	// void BPOnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPOnEventScreenDataSet
	// void BPOnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventSpacerWidget
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventSpacerWidget : public UFortEventListViewWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/EventScreenBase.FortEventRewardWidget
/// Size: 0x0090 (0x0002C0 - 0x000350)
class UFortEventRewardWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(class UCommonButtonBase*)                  Button_RewardPreview                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UFortCosmeticItemCard*)              UserWidget_ItemCard                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(bool)                                      bIsTrackOwned                                               OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	DMember(bool)                                      bPreviewMode                                                OFFSET(get<bool>, {0x2D9, 1, 0, 0})
	DMember(bool)                                      bInPreviewSelectedState                                     OFFSET(get<bool>, {0x2DA, 1, 0, 0})
	DMember(bool)                                      bInPremiumUpgradeState                                      OFFSET(get<bool>, {0x2DB, 1, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetTrackData
	// void SetTrackData(FEventScreenTrackData& TrackData, bool bIsOwned);                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetProgressPercent
	// void SetProgressPercent(float Percent);                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetIsBannerItem
	// void SetIsBannerItem(bool bIsBanner);                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInSelectedState
	// void SetInSelectedState(bool bSelected);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewSelectedState
	// void SetInPreviewSelectedState(bool bSelected);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewedState
	// void SetInPreviewedState(bool bPreviewed);                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPremiumUpgradeState
	// void SetInPremiumUpgradeState(bool bHighlighted);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetDoubleWidth
	// void SetDoubleWidth(bool bDoubleWidth);                                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetCustomItemIcon
	// void SetCustomItemIcon(class UTexture2D* CustomItemIcon);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetAllRewardsCollected
	// void SetAllRewardsCollected(bool bAllCollected);                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnSetRewardItem
	// void OnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnRewardWidgetReset
	// void OnRewardWidgetReset();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType NewInputType);                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                        // [0xa921cd0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventScreenBase
/// Size: 0x0428 (0x000730 - 0x000B58)
class UFortEventScreenBase : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	CMember(TArray<class UNamedSlot*>)                 LayoutTemplateSlots                                         OFFSET(get<T>, {0x738, 16, 0, 0})
	CMember(class UFortLazyImage*)                     LazyImage_KeyArt                                            OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ViewQuests                                           OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MoreInfo                                             OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PurchaseLevels                                       OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Preview                                              OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ShowInItemShop                                       OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Previous                                             OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Next                                                 OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UFortEventTrackerModule_CustomText*) CustomText_InspectItem                                      OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class UPanelWidget*)                       Panel_LoadError                                             OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Close                                                OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UFortEventScreenData*)               EventScreenData                                             OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(EEventScreenRewardPreviewType)             ActiveRewardPreviewType                                     OFFSET(get<T>, {0x7B0, 1, 0, 0})
	CMember(class UFortChallengeBundleItemDefinition*) LoadedQuestBundle                                           OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class AFortItemPreviewWorld*)              CachedVaultWorld                                            OFFSET(get<T>, {0x7C0, 8, 0, 0})
	DMember(float)                                     TimeBetweenVariantsRestart                                  OFFSET(get<float>, {0x7D8, 4, 0, 0})
	DMember(float)                                     TimeBetweenVariants                                         OFFSET(get<float>, {0x7DC, 4, 0, 0})
	CMember(class UFortItemVM*)                        CachedItemVM                                                OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(TArray<FFortCosmeticVariantPreview>)       CachedVariantPreviews                                       OFFSET(get<T>, {0x7E8, 16, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventScreenBase.UpdateVariantCounter
	// void UpdateVariantCounter(int32_t CurrentVariantIndex, int32_t TotalNumVariants);                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetRewardTrackLegal
	// void SetRewardTrackLegal(FText& LegalText);                                                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetItemShopOfferInfoVisibility
	// void SetItemShopOfferInfoVisibility(bool bIsVisible);                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetItemShopCallout
	// void SetItemShopCallout(FText& ItemShopCalloutText);                                                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.RegisterLayoutSlots
	// void RegisterLayoutSlots();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnSetBonusInfo
	// void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo);                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnScreenViewChanged
	// void OnScreenViewChanged(EEventScreenView PrevScreenView, EEventScreenView NewScreenView);                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnRewardTrackReady
	// void OnRewardTrackReady();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnRewardPreviewItemChanged
	// void OnRewardPreviewItemChanged(class UFortAccountItemDefinition* Item, bool bFreeTrack);                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnFirstViewAfterCompletion
	// void OnFirstViewAfterCompletion();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnCalendarEventStarted
	// void OnCalendarEventStarted(FString EventName);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnCalendarEventEnded
	// void OnCalendarEventEnded(FString EventName);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.IsCalendarEventActive
	// bool IsCalendarEventActive(FString EventName);                                                                           // [0xa9221a8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HasPurchasedPremiumTrack
	// bool HasPurchasedPremiumTrack();                                                                                         // [0xa922184] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HasAllRewardsCollected
	// bool HasAllRewardsCollected();                                                                                           // [0xa922160] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleUpsellPromptNavigateUpEvent
	// class UWidget* HandleUpsellPromptNavigateUpEvent(EUINavigation InNavigation);                                            // [0xa9220d8] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bVisible);                                                                           // [0xa922058] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleRewardListNavigateUpEvent
	// class UWidget* HandleRewardListNavigateUpEvent(EUINavigation InNavigation);                                              // [0xa921fc8] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleRewardListNavigateRightEvent
	// class UWidget* HandleRewardListNavigateRightEvent(EUINavigation InNavigation);                                           // [0xa921f38] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleItemShown
	// void HandleItemShown(class UFortAccountItemDefinition* AccountItemDef);                                                  // [0xa921eb8] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleGiftBoxClosed
	// void HandleGiftBoxClosed();                                                                                              // [0xa921ea4] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleActiveSeasonDataChanged
	// void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags);                                                   // [0xa921d74] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetVaultWorldFloorMID
	// class UMaterialInstanceDynamic* GetVaultWorldFloorMID();                                                                 // [0xa921d4c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetVaultWorldBackgroundMID
	// class UMaterialInstanceDynamic* GetVaultWorldBackgroundMID();                                                            // [0xa921d24] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetEventTimeRemaining
	// FTimespan GetEventTimeRemaining();                                                                                       // [0xa921cf8] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetActiveModal
	// class UFortEventModalBase* GetActiveModal();                                                                             // [0xa921c08] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.EventScreenListView
/// Size: 0x01E8 (0x000298 - 0x000480)
class UEventScreenListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationStartedEvent                          OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationCompletedEvent                        OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationInterruptedEvent                      OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResourcePreviewOffsetAnimationEvent                       OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	CMember(class UClass*)                             RewardTrackWidgetClass                                      OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UClass*)                             SpacerWidgetClass                                           OFFSET(get<T>, {0x3E8, 8, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(bool)                                      bCenterSelection                                            OFFSET(get<bool>, {0x3F4, 1, 0, 0})
	DMember(float)                                     MaxItemsInView                                              OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(bool)                                      bPreviewMode                                                OFFSET(get<bool>, {0x3FC, 1, 0, 0})
	CMember(class UCurveFloat*)                        ProgressAnimationCurve                                      OFFSET(get<T>, {0x400, 8, 0, 0})
	DMember(bool)                                      bCanAnimateOnceComplete                                     OFFSET(get<bool>, {0x408, 1, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.EventScreenListView.SetNativeTickAllowed
	// void SetNativeTickAllowed(bool bAllowed);                                                                                // [0xa922488] Final|Native|Public|BlueprintCallable 
	// Function /Script/EventScreenBase.EventScreenListView.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                        // [0xa921c30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventScreenTeaser
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortEventScreenTeaser : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	SMember(FString)                                   CountdownCalendarEventFlag                                  OFFSET(getStruct<T>, {0x570, 16, 0, 0})
	CMember(TArray<FString>)                           CalendarEvents                                              OFFSET(get<T>, {0x580, 16, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryTag                                            OFFSET(getStruct<T>, {0x590, 4, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_ViewQuests                                           OFFSET(get<T>, {0x598, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventScreenTeaser.OnCalendarEventStarted
	// void OnCalendarEventStarted(FString EventName);                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.OnCalendarEventEnded
	// void OnCalendarEventEnded(FString EventName);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.IsCalendarEventActive
	// bool IsCalendarEventActive(FString EventName);                                                                           // [0xa922318] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.HandleActiveSeasonDataChanged
	// void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags);                                                   // [0xa921e0c] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.BP_SetCountdownTimeRemaining
	// void BP_SetCountdownTimeRemaining(FTimespan& TimeRemaining);                                                             // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTokenCollectionWidget
/// Size: 0x0060 (0x0002C0 - 0x000320)
class UFortEventTokenCollectionWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UCommonLazyImage*)                   LazyImage_GhostIcon                                         OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   LazyImage_CompletedIcon                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UImage*)                             Image_Glow                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               FallbackBrush                                               OFFSET(get<T>, {0x2D8, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortTokenType*>)           TokenDefinition                                             OFFSET(get<T>, {0x2F8, 32, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTokenCollectionWidget.OnRefreshIcon
	// void OnRefreshIcon(bool IsCollected, bool bIsFirstViewAfterCollection);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortEventTrackerModule : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule.OnModuleInitialized
	// void OnModuleInitialized(class UFortEventScreenData* InEventScreenData);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                        // [0x9ca8894] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_EventDetails
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_EventDetails : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_EventDetails.UpdateEventTimeRemaining
	// void UpdateEventTimeRemaining(FText& EventTimeRemainingText, FTimespan& TimeRemaining);                                  // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_EventDetails.OnPopulateEventDetailsText
	// void OnPopulateEventDetailsText(FText& OutEventName, FText& OutEventDescription);                                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Header
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_Header : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceStarterHeader
	// void OnPopulateEventResourceStarterHeader(FText& Header);                                                                // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceHeader
	// void OnPopulateEventResourceHeader(FText& Header, int32_t ResourceValue);                                                // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardDetails
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_RewardDetails : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateNextRewardDetails
	// void OnPopulateNextRewardDetails(TArray<FText>& RewardNames, int32_t ResourceNeeded);                                    // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateCompletedReward
	// void OnPopulateCompletedReward(TArray<FText>& RewardNames);                                                              // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.IsPremiumTrackOwned
	// bool IsPremiumTrackOwned();                                                                                              // [0x9ca883c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining
/// Size: 0x0020 (0x0002C8 - 0x0002E8)
class UFortEventTrackerModule_RewardRemaining : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(class UCommonButtonBase*)                  Button_PurchasePremium                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining.OnPopulateRemaining
	// void OnPopulateRemaining(int32_t ResourceNeeded, int32_t TotalResourceRequired, bool bRequiresPremiumTrackPurchase);     // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_ProgressiveRewards : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UEventScreenListView*)               ListView_Rewards                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards.OnPopulateCompletionMessage
	// void OnPopulateCompletionMessage(bool bIsComplete, FText& CompletionText);                                               // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Collection
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_Collection : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Collection.OnGatherTokenCollectionWidgets
	// void OnGatherTokenCollectionWidgets(TArray<UFortEventTokenCollectionWidget*>& OutCollectionWidgets);                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Banner
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_Banner : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UFortLazyImage*)                     LazyImage_BannerArt                                         OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnPopulateHeaderCTAText
	// void OnPopulateHeaderCTAText(FText& HeaderCTAText);                                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnPopulateBannerText
	// void OnPopulateBannerText(FText& BannerText);                                                                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnCTACompleted
	// void OnCTACompleted(bool bIsComplete);                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell
/// Size: 0x0070 (0x0002C8 - 0x000338)
class UFortEventTrackerModule_PremiumUpsell : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UFortCTAButton*)                     Button_Prompt                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FText)                                     PromptTextUnowned                                           OFFSET(getStruct<T>, {0x2D0, 24, 0, 0})
	SMember(FText)                                     PromptTextOwned                                             OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnPopulateText
	// void OnPopulateText(FText& HeaderText, FText& BodyText);                                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnIconLoaded
	// void OnIconLoaded(class UTexture* LoadedTexture);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.IsPremiumTrackOwned
	// bool IsPremiumTrackOwned();                                                                                              // [0xa2190ac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_CustomText
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_CustomText : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_CustomText.OnPopulateText
	// void OnPopulateText(FText& CustomText);                                                                                  // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/EventScreenBase.EventItemOverride
/// Size: 0x0068 (0x000000 - 0x000068)
class FEventItemOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ItemDefinition                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CustomItemTexture                                           OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CustomItemTextureMobile                                     OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bIsDoubleWidth                                              OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenTrackData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEventScreenTrackData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FLinearColor)                              TrackColorPrimary                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              TrackColorSecondary                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              TrackColorTertiary                                          OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenMoreInfoGroup
/// Size: 0x0050 (0x000000 - 0x000050)
class FEventScreenMoreInfoGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FText)                                     Header                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Body                                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Icon                                                        OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSMoreInfoGroup
/// Size: 0x0040 (0x000000 - 0x000040)
class FEventScreenCMSMoreInfoGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Header                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Body                                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FString)                                   IconURL                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSResourceGroupOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FEventScreenCMSResourceGroupOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ResourceValue                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   KeyArtOverrideURL                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSData
/// Size: 0x02A8 (0x000000 - 0x0002A8)
class FEventScreenCMSData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FString)                                   EventCMSId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     EventName                                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FText)                                     EventDescription                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     ResourceHeader                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FText)                                     StarterHeader                                               OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FText)                                     CompletionHeader                                            OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FText)                                     EventCTA                                                    OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FText)                                     EventCTACompleted                                           OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FText)                                     HeaderCTA                                                   OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FText)                                     ItemShopCallout                                             OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FString)                                   CTAIconURL                                                  OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   KeyArtURL                                                   OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FText)                                     MoreInfoHeader                                              OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     MoreInfoSubHeader                                           OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     MoreInfoLegal                                               OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	CMember(TArray<FEventScreenCMSMoreInfoGroup>)      MoreInfoGroups                                              OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FText)                                     PurchaseLegal                                               OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FText)                                     RewardTrackLegal                                            OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FString)                                   ItemShopOfferId                                             OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	SMember(FText)                                     PremiumUpsellUnownedHeader                                  OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellUnownedBody                                    OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellOwnedHeader                                    OFFSET(getStruct<T>, {0x1D0, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellOwnedBody                                      OFFSET(getStruct<T>, {0x1E8, 24, 0, 0})
	SMember(FString)                                   PremiumUpsellIconURL                                        OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	SMember(FText)                                     PurchasePremiumTrackHeader                                  OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	CMember(TArray<FText>)                             PurchasePremiumTrackBodyList                                OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FText)                                     InspectSpecialItemUnowned                                   OFFSET(getStruct<T>, {0x238, 24, 0, 0})
	SMember(FText)                                     InspectSpecialItemOwned                                     OFFSET(getStruct<T>, {0x250, 24, 0, 0})
	SMember(FText)                                     InspectSpecialPremiumItemUnowned                            OFFSET(getStruct<T>, {0x268, 24, 0, 0})
	SMember(FText)                                     InspectSpecialPremiumItemOwned                              OFFSET(getStruct<T>, {0x280, 24, 0, 0})
	CMember(TArray<FEventScreenCMSResourceGroupOverride>) ResourceGroupOverrides                                   OFFSET(get<T>, {0x298, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSGroup
/// Size: 0x0010 (0x000000 - 0x000010)
class FEventScreenCMSGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FEventScreenCMSData>)               EventScreens                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/EventScreenBase.EEventScreenView
/// Size: 0x08
enum class EEventScreenView : uint8_t
{
	EEventScreenView__None                                                           = 0,
	EEventScreenView__LandingPage                                                    = 1,
	EEventScreenView__RewardPreview                                                  = 2,
	EEventScreenView__MoreInfo                                                       = 3,
	EEventScreenView__PurchaseLevels                                                 = 4,
	EEventScreenView__PurchasePremiumTrack                                           = 5,
	EEventScreenView__LoadError                                                      = 6,
	EEventScreenView__EEventScreenView_MAX                                           = 7
};

/// Enum /Script/EventScreenBase.EEventScreenRewardPreviewType
/// Size: 0x05
enum class EEventScreenRewardPreviewType : uint8_t
{
	EEventScreenRewardPreviewType__None                                              = 0,
	EEventScreenRewardPreviewType__RewardTrack                                       = 1,
	EEventScreenRewardPreviewType__SpecialItem                                       = 2,
	EEventScreenRewardPreviewType__SpecialPremiumItem                                = 3,
	EEventScreenRewardPreviewType__EEventScreenRewardPreviewType_MAX                 = 4
};

