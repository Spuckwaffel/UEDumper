
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
/// dependency: GameplayTags
/// dependency: SlateCore
/// dependency: UMG

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

/// Struct /Script/EventScreenBase.EventItemOverride
/// Size: 0x0068 (0x000000 - 0x000068)
struct FEventItemOverride
{ 
	SDK_UNDEFINED(32,13541) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(ItemDefinition);                       // 0x0000   (0x0020)  
	SDK_UNDEFINED(32,13542) /* TWeakObjectPtr<UTexture2D*> */ __um(CustomItemTexture);                             // 0x0020   (0x0020)  
	SDK_UNDEFINED(32,13543) /* TWeakObjectPtr<UTexture2D*> */ __um(CustomItemTextureMobile);                       // 0x0040   (0x0020)  
	bool                                               bIsDoubleWidth;                                             // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/EventScreenBase.EventScreenTrackData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEventScreenTrackData
{ 
	FLinearColor                                       TrackColorPrimary;                                          // 0x0000   (0x0010)  
	FLinearColor                                       TrackColorSecondary;                                        // 0x0010   (0x0010)  
	FLinearColor                                       TrackColorTertiary;                                         // 0x0020   (0x0010)  
};

/// Struct /Script/EventScreenBase.EventScreenMoreInfoGroup
/// Size: 0x0050 (0x000000 - 0x000050)
struct FEventScreenMoreInfoGroup
{ 
	SDK_UNDEFINED(24,13544) /* FText */                __um(Header);                                               // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,13545) /* FText */                __um(Body);                                                 // 0x0018   (0x0018)  
	SDK_UNDEFINED(32,13546) /* TWeakObjectPtr<UObject*> */ __um(Icon);                                             // 0x0030   (0x0020)  
};

/// Class /Script/EventScreenBase.FortEventScreenData
/// Size: 0x0670 (0x000030 - 0x0006A0)
class UFortEventScreenData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(16,13547) /* FString */              __um(EventCMSId);                                           // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,13548) /* FString */              __um(AccountResourceName);                                  // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,13549) /* FString */              __um(LevelOfferId);                                         // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,13550) /* FString */              __um(PremiumTrackOfferId);                                  // 0x0060   (0x0010)  
	class UFortTokenType*                              PremiumTrackPurchasedToken;                                 // 0x0070   (0x0008)  
	FGameplayTag                                       VaultWorldTag;                                              // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FVaultWorldBackgroundData                          PreviewScreenBackgroundData;                                // 0x0080   (0x0058)  
	SDK_UNDEFINED(32,13551) /* TWeakObjectPtr<UFortChallengeBundleItemDefinition*> */ __um(QuestBundle);           // 0x00D8   (0x0020)  
	SDK_UNDEFINED(32,13552) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(SpecialRewardItem);                    // 0x00F8   (0x0020)  
	SDK_UNDEFINED(32,13553) /* TWeakObjectPtr<UFortItemDefinition*> */ __um(SpecialPremiumRewardItem);             // 0x0118   (0x0020)  
	TArray<FEventItemOverride>                         ItemOverrides;                                              // 0x0138   (0x0010)  
	FEventScreenTrackData                              FreeTrackData;                                              // 0x0148   (0x0030)  
	FEventScreenTrackData                              PremiumTrackData;                                           // 0x0178   (0x0030)  
	FGameplayTag                                       QuestCategoryTag;                                           // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01AC   (0x0004)  MISSED
	TArray<class UClass*>                              RichTextDecorators;                                         // 0x01B0   (0x0010)  
	class UMaterialInterface*                          EventBackgroundMaterial;                                    // 0x01C0   (0x0008)  
	class UMaterialInterface*                          ProgressBarMaterial;                                        // 0x01C8   (0x0008)  
	FSlateBrush                                        CurrencyBrush;                                              // 0x01D0   (0x00C0)  
	FSlateBrush                                        CompletionBannerBrush;                                      // 0x0290   (0x00C0)  
	FSlateBrush                                        GlowForeground;                                             // 0x0350   (0x00C0)  
	FSlateBrush                                        GlowBackground;                                             // 0x0410   (0x00C0)  
	FLinearColor                                       EventBackgroundColor1;                                      // 0x04D0   (0x0010)  
	FLinearColor                                       EventBackgroundColor2;                                      // 0x04E0   (0x0010)  
	FLinearColor                                       RewardBackgroundColor1;                                     // 0x04F0   (0x0010)  
	FLinearColor                                       RewardBackgroundColor2;                                     // 0x0500   (0x0010)  
	FLinearColor                                       RewardBackgroundColor3;                                     // 0x0510   (0x0010)  
	FLinearColor                                       AccentColor;                                                // 0x0520   (0x0010)  
	SDK_UNDEFINED(80,13554) /* TMap<FName, FLinearColor> */ __um(RewardTileBackgroundColors);                      // 0x0530   (0x0050)  
	SDK_UNDEFINED(24,13555) /* FText */                __um(TimeRemainingFormat);                                  // 0x0580   (0x0018)  
	SDK_UNDEFINED(24,13556) /* FText */                __um(CurrencyFormat);                                       // 0x0598   (0x0018)  
	TArray<FEventScreenMoreInfoGroup>                  MoreInfoGroups;                                             // 0x05B0   (0x0010)  
	class USoundBase*                                  DefaultHoveredSound;                                        // 0x05C0   (0x0008)  
	class USoundBase*                                  DefaultPressedSound;                                        // 0x05C8   (0x0008)  
	class USoundBase*                                  BuyPressedSound;                                            // 0x05D0   (0x0008)  
	class USoundBase*                                  BuyHoldStartedSound;                                        // 0x05D8   (0x0008)  
	class USoundBase*                                  BuyHoldCompletedSound;                                      // 0x05E0   (0x0008)  
	class USoundBase*                                  BuyHoldAbortedSound;                                        // 0x05E8   (0x0008)  
	class USoundBase*                                  BackPressedSound;                                           // 0x05F0   (0x0008)  
	class USoundBase*                                  AddPressedSound;                                            // 0x05F8   (0x0008)  
	class USoundBase*                                  SubtractPressedSound;                                       // 0x0600   (0x0008)  
	class USoundBase*                                  ProgressStartedSound;                                       // 0x0608   (0x0008)  
	class USoundBase*                                  ProgressEndedSound;                                         // 0x0610   (0x0008)  
	class USoundBase*                                  ProgressInterruptedSound;                                   // 0x0618   (0x0008)  
	float                                              RewardPreviewZoomLevel;                                     // 0x0620   (0x0004)  
	bool                                               bUseWidgetCameraFraming;                                    // 0x0624   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0625   (0x0003)  MISSED
	SDK_UNDEFINED(32,13557) /* TWeakObjectPtr<UClass*> */ __um(MoreInfoModalClass);                                // 0x0628   (0x0020)  
	SDK_UNDEFINED(32,13558) /* TWeakObjectPtr<UClass*> */ __um(PurchaseLevelsModalClass);                          // 0x0648   (0x0020)  
	SDK_UNDEFINED(32,13559) /* TWeakObjectPtr<UClass*> */ __um(PurchasePremiumTrackModalClass);                    // 0x0668   (0x0020)  
	SDK_UNDEFINED(16,13560) /* TArray<FString> */      __um(CalendarEvents);                                       // 0x0688   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0698   (0x0008)  MISSED
};

/// Class /Script/EventScreenBase.FortEventModalBase
/// Size: 0x0010 (0x000400 - 0x000410)
class UFortEventModalBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0400   (0x0010)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventModalBase.CloseModal
	// void CloseModal();                                                                                                    // [0x3ee1514] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EventScreenBase.FortEventMoreInfoGroup
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortEventMoreInfoGroup : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnSetGroupText
	// void OnSetGroupText(FText& Header, FText& Body);                                                                      // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnIconLoaded
	// void OnIconLoaded(class UObject* Icon);                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoGroup.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventMoreInfoModal
/// Size: 0x0028 (0x000410 - 0x000438)
class UFortEventMoreInfoModal : public UFortEventModalBase
{ 
public:
	class UDynamicEntryBox*                            DynamicEntryBox_Groups;                                     // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0420   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0428   (0x0008)  MISSED
	class UScrollBox*                                  SB_Vertical;                                                // 0x0430   (0x0008)  


	/// Functions
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.SetModalText
	// void SetModalText(FText& Header, FText& SubHeader, FText& Legal);                                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnModalBackout
	// void OnModalBackout();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xa921c58] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventPurchaseLevelsModal
/// Size: 0x0070 (0x000410 - 0x000480)
class UFortEventPurchaseLevelsModal : public UFortEventModalBase
{ 
public:
	class UCommonButtonBase*                           Button_Addition;                                            // 0x0410   (0x0008)  
	class UCommonButtonBase*                           Button_Subtraction;                                         // 0x0418   (0x0008)  
	class UCommonButtonBase*                           Button_Purchase;                                            // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_GetVBucks;                                           // 0x0428   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0430   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0438   (0x0008)  
	class UEventScreenListView*                        ListView_RewardPreview;                                     // 0x0440   (0x0008)  
	int32_t                                            CurrentResourceValue;                                       // 0x0448   (0x0004)  
	int32_t                                            MaxResourceValue;                                           // 0x044C   (0x0004)  
	int32_t                                            CurrentVBucks;                                              // 0x0450   (0x0004)  
	int32_t                                            OfferResourceQuantity;                                      // 0x0454   (0x0004)  
	bool                                               bAnimateListViewFromEmpty;                                  // 0x0458   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x0459   (0x0027)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnPurchaseAmountChanged
	// void OnPurchaseAmountChanged(int32_t TotalPrice, int32_t LevelQuantity, int32_t PurchaseQuantity, int32_t ResourceQuantity); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnCMSTextApplied
	// void OnCMSTextApplied(FText& LegalText);                                                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnAmountChangeButtonClicked
	// void OnAmountChangeButtonClicked();                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xa921c80] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortPurchasePremiumTrackBody
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortPurchasePremiumTrackBody : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortPurchasePremiumTrackBody.OnPopulate
	// void OnPopulate(int32_t BodyIndex, FText& BodyText);                                                                  // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventPurchasePremiumTrackModal
/// Size: 0x0070 (0x000410 - 0x000480)
class UFortEventPurchasePremiumTrackModal : public UFortEventModalBase
{ 
public:
	class UDynamicEntryBox*                            DynamicEntryBox_Body;                                       // 0x0410   (0x0008)  
	class UScrollBox*                                  ScrollBox_Body;                                             // 0x0418   (0x0008)  
	class UFortCTAButton*                              Button_Purchase;                                            // 0x0420   (0x0008)  
	class UCommonButtonBase*                           Button_GetVBucks;                                           // 0x0428   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0430   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0438   (0x0008)  
	class UCommonButtonBase*                           Button_PreviewReward;                                       // 0x0440   (0x0008)  
	int32_t                                            CurrentVBucks;                                              // 0x0448   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x044C   (0x0034)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnPriceSet
	// void OnPriceSet(int32_t Price);                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnCMSTextApplied
	// void OnCMSTextApplied(FText& HeaderText, FText& LegalText);                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xa921ca8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventListViewWidgetBase
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortEventListViewWidgetBase : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C0   (0x0008)  MISSED
};

/// Class /Script/EventScreenBase.FortEventRewardTracksWidget
/// Size: 0x0050 (0x0002C8 - 0x000318)
class UFortEventRewardTracksWidget : public UFortEventListViewWidgetBase
{ 
public:
	class UDynamicEntryBox*                            DynamicEntryBox_RewardTracks;                               // 0x02C8   (0x0008)  
	bool                                               bPreviewMode;                                               // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x47];                                      // 0x02D1   (0x0047)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPSetProgressPercent
	// void BPSetProgressPercent(float Percent);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPSetAllRewardsCollected
	// void BPSetAllRewardsCollected(bool bAllCollected);                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPOnSetRewardItem
	// void BPOnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPOnEventScreenDataSet
	// void BPOnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventSpacerWidget
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventSpacerWidget : public UFortEventListViewWidgetBase
{ 
public:
};

/// Class /Script/EventScreenBase.FortEventRewardWidget
/// Size: 0x0090 (0x0002C0 - 0x000350)
class UFortEventRewardWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x02C0   (0x0008)  MISSED
	class UCommonButtonBase*                           Button_RewardPreview;                                       // 0x02C8   (0x0008)  
	class UFortCosmeticItemCard*                       UserWidget_ItemCard;                                        // 0x02D0   (0x0008)  
	bool                                               bIsTrackOwned;                                              // 0x02D8   (0x0001)  
	bool                                               bPreviewMode;                                               // 0x02D9   (0x0001)  
	bool                                               bInPreviewSelectedState;                                    // 0x02DA   (0x0001)  
	bool                                               bInPremiumUpgradeState;                                     // 0x02DB   (0x0001)  
	unsigned char                                      UnknownData01_6[0x74];                                      // 0x02DC   (0x0074)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetTrackData
	// void SetTrackData(FEventScreenTrackData& TrackData, bool bIsOwned);                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetProgressPercent
	// void SetProgressPercent(float Percent);                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetIsBannerItem
	// void SetIsBannerItem(bool bIsBanner);                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInSelectedState
	// void SetInSelectedState(bool bSelected);                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewSelectedState
	// void SetInPreviewSelectedState(bool bSelected);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewedState
	// void SetInPreviewedState(bool bPreviewed);                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPremiumUpgradeState
	// void SetInPremiumUpgradeState(bool bHighlighted);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetDoubleWidth
	// void SetDoubleWidth(bool bDoubleWidth);                                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetCustomItemIcon
	// void SetCustomItemIcon(class UTexture2D* CustomItemIcon);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetAllRewardsCollected
	// void SetAllRewardsCollected(bool bAllCollected);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnSetRewardItem
	// void OnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnRewardWidgetReset
	// void OnRewardWidgetReset();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType NewInputType);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnEventScreenDataSet
	// void OnEventScreenDataSet(class UFortEventScreenData* InEventScreenData);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xa921cd0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventScreenBase
/// Size: 0x0428 (0x000730 - 0x000B58)
class UFortEventScreenBase : public UFortItemPreviewScreen
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0730   (0x0008)  MISSED
	TArray<class UNamedSlot*>                          LayoutTemplateSlots;                                        // 0x0738   (0x0010)  
	class UFortLazyImage*                              LazyImage_KeyArt;                                           // 0x0748   (0x0008)  
	class UCommonButtonBase*                           Button_ViewQuests;                                          // 0x0750   (0x0008)  
	class UCommonButtonBase*                           Button_MoreInfo;                                            // 0x0758   (0x0008)  
	class UCommonButtonBase*                           Button_PurchaseLevels;                                      // 0x0760   (0x0008)  
	class UCommonButtonBase*                           Button_Preview;                                             // 0x0768   (0x0008)  
	class UCommonButtonBase*                           Button_ShowInItemShop;                                      // 0x0770   (0x0008)  
	class UCommonButtonBase*                           Button_Previous;                                            // 0x0778   (0x0008)  
	class UCommonButtonBase*                           Button_Next;                                                // 0x0780   (0x0008)  
	class UFortEventTrackerModule_CustomText*          CustomText_InspectItem;                                     // 0x0788   (0x0008)  
	class UPanelWidget*                                Panel_LoadError;                                            // 0x0790   (0x0008)  
	class UCommonButtonBase*                           Button_Close;                                               // 0x0798   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x07A0   (0x0008)  
	class UFortEventScreenData*                        EventScreenData;                                            // 0x07A8   (0x0008)  
	EEventScreenRewardPreviewType                      ActiveRewardPreviewType;                                    // 0x07B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x07B1   (0x0007)  MISSED
	class UFortChallengeBundleItemDefinition*          LoadedQuestBundle;                                          // 0x07B8   (0x0008)  
	class AFortItemPreviewWorld*                       CachedVaultWorld;                                           // 0x07C0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x07C8   (0x0010)  MISSED
	float                                              TimeBetweenVariantsRestart;                                 // 0x07D8   (0x0004)  
	float                                              TimeBetweenVariants;                                        // 0x07DC   (0x0004)  
	class UFortItemVM*                                 CachedItemVM;                                               // 0x07E0   (0x0008)  
	TArray<FFortCosmeticVariantPreview>                CachedVariantPreviews;                                      // 0x07E8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x360];                                     // 0x07F8   (0x0360)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventScreenBase.UpdateVariantCounter
	// void UpdateVariantCounter(int32_t CurrentVariantIndex, int32_t TotalNumVariants);                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetRewardTrackLegal
	// void SetRewardTrackLegal(FText& LegalText);                                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetItemShopOfferInfoVisibility
	// void SetItemShopOfferInfoVisibility(bool bIsVisible);                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetItemShopCallout
	// void SetItemShopCallout(FText& ItemShopCalloutText);                                                                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.RegisterLayoutSlots
	// void RegisterLayoutSlots();                                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnSetBonusInfo
	// void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo);                                                                // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnScreenViewChanged
	// void OnScreenViewChanged(EEventScreenView PrevScreenView, EEventScreenView NewScreenView);                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnRewardTrackReady
	// void OnRewardTrackReady();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnRewardPreviewItemChanged
	// void OnRewardPreviewItemChanged(class UFortAccountItemDefinition* Item, bool bFreeTrack);                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnFirstViewAfterCompletion
	// void OnFirstViewAfterCompletion();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnCalendarEventStarted
	// void OnCalendarEventStarted(FString EventName);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnCalendarEventEnded
	// void OnCalendarEventEnded(FString EventName);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.IsCalendarEventActive
	// bool IsCalendarEventActive(FString EventName);                                                                        // [0xa9221a8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HasPurchasedPremiumTrack
	// bool HasPurchasedPremiumTrack();                                                                                      // [0xa922184] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HasAllRewardsCollected
	// bool HasAllRewardsCollected();                                                                                        // [0xa922160] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleUpsellPromptNavigateUpEvent
	// class UWidget* HandleUpsellPromptNavigateUpEvent(EUINavigation InNavigation);                                         // [0xa9220d8] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bVisible);                                                                        // [0xa922058] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleRewardListNavigateUpEvent
	// class UWidget* HandleRewardListNavigateUpEvent(EUINavigation InNavigation);                                           // [0xa921fc8] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleRewardListNavigateRightEvent
	// class UWidget* HandleRewardListNavigateRightEvent(EUINavigation InNavigation);                                        // [0xa921f38] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleItemShown
	// void HandleItemShown(class UFortAccountItemDefinition* AccountItemDef);                                               // [0xa921eb8] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleGiftBoxClosed
	// void HandleGiftBoxClosed();                                                                                           // [0xa921ea4] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleActiveSeasonDataChanged
	// void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags);                                                // [0xa921d74] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetVaultWorldFloorMID
	// class UMaterialInstanceDynamic* GetVaultWorldFloorMID();                                                              // [0xa921d4c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetVaultWorldBackgroundMID
	// class UMaterialInstanceDynamic* GetVaultWorldBackgroundMID();                                                         // [0xa921d24] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetEventTimeRemaining
	// FTimespan GetEventTimeRemaining();                                                                                    // [0xa921cf8] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetActiveModal
	// class UFortEventModalBase* GetActiveModal();                                                                          // [0xa921c08] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.EventScreenListView
/// Size: 0x01E8 (0x000298 - 0x000480)
class UEventScreenListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	SDK_UNDEFINED(16,13561) /* FMulticastInlineDelegate */ __um(OnProgressBarAnimationStartedEvent);               // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,13562) /* FMulticastInlineDelegate */ __um(OnProgressBarAnimationCompletedEvent);             // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,13563) /* FMulticastInlineDelegate */ __um(OnProgressBarAnimationInterruptedEvent);           // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,13564) /* FMulticastInlineDelegate */ __um(OnResourcePreviewOffsetAnimationEvent);            // 0x03B0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x03C0   (0x0020)  MISSED
	class UClass*                                      RewardTrackWidgetClass;                                     // 0x03E0   (0x0008)  
	class UClass*                                      SpacerWidgetClass;                                          // 0x03E8   (0x0008)  
	float                                              EntrySpacing;                                               // 0x03F0   (0x0004)  
	bool                                               bCenterSelection;                                           // 0x03F4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x03F5   (0x0003)  MISSED
	float                                              MaxItemsInView;                                             // 0x03F8   (0x0004)  
	bool                                               bPreviewMode;                                               // 0x03FC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x03FD   (0x0003)  MISSED
	class UCurveFloat*                                 ProgressAnimationCurve;                                     // 0x0400   (0x0008)  
	bool                                               bCanAnimateOnceComplete;                                    // 0x0408   (0x0001)  
	unsigned char                                      UnknownData04_6[0x77];                                      // 0x0409   (0x0077)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.EventScreenListView.SetNativeTickAllowed
	// void SetNativeTickAllowed(bool bAllowed);                                                                             // [0xa922488] Final|Native|Public|BlueprintCallable 
	// Function /Script/EventScreenBase.EventScreenListView.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0xa921c30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventScreenTeaser
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortEventScreenTeaser : public UFortActivatablePanel
{ 
public:
	SDK_UNDEFINED(16,13565) /* FString */              __um(CountdownCalendarEventFlag);                           // 0x0570   (0x0010)  
	SDK_UNDEFINED(16,13566) /* TArray<FString> */      __um(CalendarEvents);                                       // 0x0580   (0x0010)  
	FGameplayTag                                       QuestCategoryTag;                                           // 0x0590   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0594   (0x0004)  MISSED
	class UCommonButtonBase*                           Button_ViewQuests;                                          // 0x0598   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x05A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventScreenTeaser.OnCalendarEventStarted
	// void OnCalendarEventStarted(FString EventName);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.OnCalendarEventEnded
	// void OnCalendarEventEnded(FString EventName);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.IsCalendarEventActive
	// bool IsCalendarEventActive(FString EventName);                                                                        // [0xa922318] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.HandleActiveSeasonDataChanged
	// void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags);                                                // [0xa921e0c] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventScreenTeaser.BP_SetCountdownTimeRemaining
	// void BP_SetCountdownTimeRemaining(FTimespan& TimeRemaining);                                                          // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTokenCollectionWidget
/// Size: 0x0060 (0x0002C0 - 0x000320)
class UFortEventTokenCollectionWidget : public UUserWidget
{ 
public:
	class UCommonLazyImage*                            LazyImage_GhostIcon;                                        // 0x02C0   (0x0008)  
	class UCommonLazyImage*                            LazyImage_CompletedIcon;                                    // 0x02C8   (0x0008)  
	class UImage*                                      Image_Glow;                                                 // 0x02D0   (0x0008)  
	SDK_UNDEFINED(32,13567) /* TWeakObjectPtr<UTexture2D*> */ __um(FallbackBrush);                                 // 0x02D8   (0x0020)  
	SDK_UNDEFINED(32,13568) /* TWeakObjectPtr<UFortTokenType*> */ __um(TokenDefinition);                           // 0x02F8   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0318   (0x0008)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTokenCollectionWidget.OnRefreshIcon
	// void OnRefreshIcon(bool IsCollected, bool bIsFirstViewAfterCollection);                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortEventTrackerModule : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule.OnModuleInitialized
	// void OnModuleInitialized(class UFortEventScreenData* InEventScreenData);                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule.GetEventScreenData
	// class UFortEventScreenData* GetEventScreenData();                                                                     // [0x9ca8894] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_EventDetails
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_EventDetails : public UFortEventTrackerModule
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_EventDetails.UpdateEventTimeRemaining
	// void UpdateEventTimeRemaining(FText& EventTimeRemainingText, FTimespan& TimeRemaining);                               // [0x18a39e4] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_EventDetails.OnPopulateEventDetailsText
	// void OnPopulateEventDetailsText(FText& OutEventName, FText& OutEventDescription);                                     // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Header
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_Header : public UFortEventTrackerModule
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceStarterHeader
	// void OnPopulateEventResourceStarterHeader(FText& Header);                                                             // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Header.OnPopulateEventResourceHeader
	// void OnPopulateEventResourceHeader(FText& Header, int32_t ResourceValue);                                             // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardDetails
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_RewardDetails : public UFortEventTrackerModule
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateNextRewardDetails
	// void OnPopulateNextRewardDetails(TArray<FText>& RewardNames, int32_t ResourceNeeded);                                 // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.OnPopulateCompletedReward
	// void OnPopulateCompletedReward(TArray<FText>& RewardNames);                                                           // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardDetails.IsPremiumTrackOwned
	// bool IsPremiumTrackOwned();                                                                                           // [0x9ca883c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining
/// Size: 0x0020 (0x0002C8 - 0x0002E8)
class UFortEventTrackerModule_RewardRemaining : public UFortEventTrackerModule
{ 
public:
	class UCommonButtonBase*                           Button_PurchasePremium;                                     // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02D0   (0x0018)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining.OnPopulateRemaining
	// void OnPopulateRemaining(int32_t ResourceNeeded, int32_t TotalResourceRequired, bool bRequiresPremiumTrackPurchase);  // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_ProgressiveRewards : public UFortEventTrackerModule
{ 
public:
	class UEventScreenListView*                        ListView_Rewards;                                           // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards.OnPopulateCompletionMessage
	// void OnPopulateCompletionMessage(bool bIsComplete, FText& CompletionText);                                            // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Collection
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_Collection : public UFortEventTrackerModule
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Collection.OnGatherTokenCollectionWidgets
	// void OnGatherTokenCollectionWidgets(TArray<UFortEventTokenCollectionWidget*>& OutCollectionWidgets);                  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Banner
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_Banner : public UFortEventTrackerModule
{ 
public:
	class UFortLazyImage*                              LazyImage_BannerArt;                                        // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnPopulateHeaderCTAText
	// void OnPopulateHeaderCTAText(FText& HeaderCTAText);                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnPopulateBannerText
	// void OnPopulateBannerText(FText& BannerText);                                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnCTACompleted
	// void OnCTACompleted(bool bIsComplete);                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell
/// Size: 0x0070 (0x0002C8 - 0x000338)
class UFortEventTrackerModule_PremiumUpsell : public UFortEventTrackerModule
{ 
public:
	class UFortCTAButton*                              Button_Prompt;                                              // 0x02C8   (0x0008)  
	SDK_UNDEFINED(24,13569) /* FText */                __um(PromptTextUnowned);                                    // 0x02D0   (0x0018)  
	SDK_UNDEFINED(24,13570) /* FText */                __um(PromptTextOwned);                                      // 0x02E8   (0x0018)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0300   (0x0038)  MISSED


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnPopulateText
	// void OnPopulateText(FText& HeaderText, FText& BodyText);                                                              // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnIconLoaded
	// void OnIconLoaded(class UTexture* LoadedTexture);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.IsPremiumTrackOwned
	// bool IsPremiumTrackOwned();                                                                                           // [0xa2190ac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_CustomText
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_CustomText : public UFortEventTrackerModule
{ 
public:


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_CustomText.OnPopulateText
	// void OnPopulateText(FText& CustomText);                                                                               // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/EventScreenBase.EventScreenCMSMoreInfoGroup
/// Size: 0x0040 (0x000000 - 0x000040)
struct FEventScreenCMSMoreInfoGroup
{ 
	SDK_UNDEFINED(24,13571) /* FText */                __um(Header);                                               // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,13572) /* FText */                __um(Body);                                                 // 0x0018   (0x0018)  
	SDK_UNDEFINED(16,13573) /* FString */              __um(IconURL);                                              // 0x0030   (0x0010)  
};

/// Struct /Script/EventScreenBase.EventScreenCMSResourceGroupOverride
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEventScreenCMSResourceGroupOverride
{ 
	int32_t                                            ResourceValue;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,13574) /* FString */              __um(KeyArtOverrideURL);                                    // 0x0008   (0x0010)  
};

/// Struct /Script/EventScreenBase.EventScreenCMSData
/// Size: 0x02A8 (0x000000 - 0x0002A8)
struct FEventScreenCMSData
{ 
	SDK_UNDEFINED(16,13575) /* FString */              __um(EventCMSId);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,13576) /* FText */                __um(EventName);                                            // 0x0010   (0x0018)  
	SDK_UNDEFINED(24,13577) /* FText */                __um(EventDescription);                                     // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,13578) /* FText */                __um(ResourceHeader);                                       // 0x0040   (0x0018)  
	SDK_UNDEFINED(24,13579) /* FText */                __um(StarterHeader);                                        // 0x0058   (0x0018)  
	SDK_UNDEFINED(24,13580) /* FText */                __um(CompletionHeader);                                     // 0x0070   (0x0018)  
	SDK_UNDEFINED(24,13581) /* FText */                __um(EventCTA);                                             // 0x0088   (0x0018)  
	SDK_UNDEFINED(24,13582) /* FText */                __um(EventCTACompleted);                                    // 0x00A0   (0x0018)  
	SDK_UNDEFINED(24,13583) /* FText */                __um(HeaderCTA);                                            // 0x00B8   (0x0018)  
	SDK_UNDEFINED(24,13584) /* FText */                __um(ItemShopCallout);                                      // 0x00D0   (0x0018)  
	SDK_UNDEFINED(16,13585) /* FString */              __um(CTAIconURL);                                           // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,13586) /* FString */              __um(KeyArtURL);                                            // 0x00F8   (0x0010)  
	SDK_UNDEFINED(24,13587) /* FText */                __um(MoreInfoHeader);                                       // 0x0108   (0x0018)  
	SDK_UNDEFINED(24,13588) /* FText */                __um(MoreInfoSubHeader);                                    // 0x0120   (0x0018)  
	SDK_UNDEFINED(24,13589) /* FText */                __um(MoreInfoLegal);                                        // 0x0138   (0x0018)  
	TArray<FEventScreenCMSMoreInfoGroup>               MoreInfoGroups;                                             // 0x0150   (0x0010)  
	SDK_UNDEFINED(24,13590) /* FText */                __um(PurchaseLegal);                                        // 0x0160   (0x0018)  
	SDK_UNDEFINED(24,13591) /* FText */                __um(RewardTrackLegal);                                     // 0x0178   (0x0018)  
	SDK_UNDEFINED(16,13592) /* FString */              __um(ItemShopOfferId);                                      // 0x0190   (0x0010)  
	SDK_UNDEFINED(24,13593) /* FText */                __um(PremiumUpsellUnownedHeader);                           // 0x01A0   (0x0018)  
	SDK_UNDEFINED(24,13594) /* FText */                __um(PremiumUpsellUnownedBody);                             // 0x01B8   (0x0018)  
	SDK_UNDEFINED(24,13595) /* FText */                __um(PremiumUpsellOwnedHeader);                             // 0x01D0   (0x0018)  
	SDK_UNDEFINED(24,13596) /* FText */                __um(PremiumUpsellOwnedBody);                               // 0x01E8   (0x0018)  
	SDK_UNDEFINED(16,13597) /* FString */              __um(PremiumUpsellIconURL);                                 // 0x0200   (0x0010)  
	SDK_UNDEFINED(24,13598) /* FText */                __um(PurchasePremiumTrackHeader);                           // 0x0210   (0x0018)  
	SDK_UNDEFINED(16,13599) /* TArray<FText> */        __um(PurchasePremiumTrackBodyList);                         // 0x0228   (0x0010)  
	SDK_UNDEFINED(24,13600) /* FText */                __um(InspectSpecialItemUnowned);                            // 0x0238   (0x0018)  
	SDK_UNDEFINED(24,13601) /* FText */                __um(InspectSpecialItemOwned);                              // 0x0250   (0x0018)  
	SDK_UNDEFINED(24,13602) /* FText */                __um(InspectSpecialPremiumItemUnowned);                     // 0x0268   (0x0018)  
	SDK_UNDEFINED(24,13603) /* FText */                __um(InspectSpecialPremiumItemOwned);                       // 0x0280   (0x0018)  
	TArray<FEventScreenCMSResourceGroupOverride>       ResourceGroupOverrides;                                     // 0x0298   (0x0010)  
};

/// Struct /Script/EventScreenBase.EventScreenCMSGroup
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEventScreenCMSGroup
{ 
	TArray<FEventScreenCMSData>                        EventScreens;                                               // 0x0000   (0x0010)  
};

