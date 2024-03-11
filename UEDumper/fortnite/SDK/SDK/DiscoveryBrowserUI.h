
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
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Enum /Script/DiscoveryBrowserUI.EActivityBrowserTileStyle
/// Size: 0x04
enum class EActivityBrowserTileStyle : uint8_t
{
	EActivityBrowserTileStyle__Default                                               = 0,
	EActivityBrowserTileStyle__Minimal                                               = 1,
	EActivityBrowserTileStyle__Detailed                                              = 2,
	EActivityBrowserTileStyle__EActivityBrowserTileStyle_MAX                         = 3
};

/// Class /Script/DiscoveryBrowserUI.DiscoverSelectedActivityViewModel
/// Size: 0x0030 (0x000068 - 0x000098)
class UDiscoverSelectedActivityViewModel : public UMVVMViewModelBase
{ 
public:
	bool                                               bLoading;                                                   // 0x0068   (0x0001)  
	bool                                               bHasPartyData;                                              // 0x0069   (0x0001)  
	bool                                               bIsActiveInvite;                                            // 0x006A   (0x0001)  
	bool                                               bIsPartyPrivate;                                            // 0x006B   (0x0001)  
	int32_t                                            CurrentPartySize;                                           // 0x006C   (0x0004)  
	SDK_UNDEFINED(24,13319) /* FText */                __um(RichPresenceText);                                     // 0x0070   (0x0018)  
	class UFortActivityViewModel*                      ActivityVM;                                                 // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListItemWrapper
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortActivityListItemWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverHomespace
/// Size: 0x0000 (0x000420 - 0x000420)
class UFortDiscoverHomespace : public UScrollableActivatableWidget
{ 
public:


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortDiscoverHomespace.OnPeekPushPercentMobileCVarChanged
	// void OnPeekPushPercentMobileCVarChanged(float PeekPushPercent);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverPreviewManager
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UFortDiscoverPreviewManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortActivityBrowserColorSchemeAsset : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,13320) /* TMap<UMaterialParameterCollection*, FColorSchemeParamaterValues> */ __um(MaterialCollectionOverrides); // 0x0030   (0x0050)  
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserListView
/// Size: 0x0238 (0x000298 - 0x0004D0)
class UFortActivityBrowserListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	float                                              DirectionalNavigationTimeThreshold;                         // 0x0380   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0384   (0x0004)  MISSED
	class UFortHabaneroDisplayData*                    HabaneroDisplayData;                                        // 0x0388   (0x0008)  
	class UClass*                                      DiscoverItemRowClass;                                       // 0x0390   (0x0008)  
	class UClass*                                      HomebarItemRowClass;                                        // 0x0398   (0x0008)  
	SDK_UNDEFINED(80,13321) /* TMap<FName, UClass*> */ __um(RowTypes);                                             // 0x03A0   (0x0050)  
	bool                                               bUseTinyOffsetWhenScrollingIntoView;                        // 0x03F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xDF];                                      // 0x03F1   (0x00DF)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserListView.NavigateToActivityInFirstRow
	// void NavigateToActivityInFirstRow(int32_t ActivityItemIndex);                                                         // [0x1f51cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserListView.HandleVisibleEntriesChanged
	// void HandleVisibleEntriesChanged();                                                                                   // [0xacda2fc] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTileBase
/// Size: 0x0060 (0x001490 - 0x0014F0)
class UFortActivityBrowserTileBase : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x1490   (0x0060)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
/// Size: 0x00E0 (0x0014F0 - 0x0015D0)
class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase
{ 
public:
	int32_t                                            MaxNamesToDisplay;                                          // 0x14F0   (0x0004)  
	int32_t                                            MaxPortraitsToDisplay;                                      // 0x14F4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x14F8   (0x0010)  MISSED
	class UFortJoinablePartyPortraitsDisplay*          PartyMembersAvatarsDisplay;                                 // 0x1508   (0x0008)  
	bool                                               bIsActiveInvite;                                            // 0x1510   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x1511   (0x0003)  MISSED
	int32_t                                            CurrentPartySize;                                           // 0x1514   (0x0004)  
	bool                                               bIsPartyPrivate;                                            // 0x1518   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x1519   (0x0007)  MISSED
	class UFortGameActivity*                           CachedGameActivity;                                         // 0x1520   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x1528   (0x0010)  MISSED
	SDK_UNDEFINED(8,13322) /* TWeakObjectPtr<USocialUser*> */ __um(CachedTargetSocialUser);                        // 0x1538   (0x0008)  
	SDK_UNDEFINED(24,13323) /* FText */                __um(CurrentCTAButtonText);                                 // 0x1540   (0x0018)  
	SDK_UNDEFINED(24,13324) /* FText */                __um(JoinPartyText);                                        // 0x1558   (0x0018)  
	SDK_UNDEFINED(24,13325) /* FText */                __um(RequestToJoinText);                                    // 0x1570   (0x0018)  
	FDataTableRowHandle                                JoinFriendInputAction_Touch;                                // 0x1588   (0x0010)  
	unsigned char                                      UnknownData04_6[0x38];                                      // 0x1598   (0x0038)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateSingleFriendName
	// void UpdateSingleFriendName(FText& SingleFriendName);                                                                 // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateRichPresence
	// void UpdateRichPresence(FText& RichPresence);                                                                         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdatePartyMemberNames
	// void UpdatePartyMemberNames(FText& Names);                                                                            // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateOtherPlayersSubText
	// void UpdateOtherPlayersSubText(FText& OtherPlayersSubText);                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateLastInteraction
	// void UpdateLastInteraction(FText& LastInteraction);                                                                   // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateIslandThumbnail
	// void UpdateIslandThumbnail(class UTexture* ThumbnailTexture);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInteraction
	// void UpdateCTAButtonInteraction(bool bIsInteractionEnabled);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInfo
	// void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound);                                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OpenSidebar
	// void OpenSidebar();                                                                                                   // [0xacda5ac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnUpdateColumnSize
	// void OnUpdateColumnSize(int32_t NewColumnSize);                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTileActiveChanged
	// void OnTileActiveChanged(bool bIsTileActive);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureLoadingComplete
	// void OnTextureLoadingComplete(class UTexture* ThumbnailTexture);                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureBeginLoading
	// void OnTextureBeginLoading();                                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnGameActivityChanged
	// void OnGameActivityChanged(class UFortGameActivity* GameActivity);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.HandleCTAButtonClicked
	// void HandleCTAButtonClicked();                                                                                        // [0xacda140] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetMaxPartySize
	// int32_t GetMaxPartySize();                                                                                            // [0xacda08c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetCTAButtonText
	// FText GetCTAButtonText();                                                                                             // [0xacd9f18] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.BP_PartyInformationUpdated
	// void BP_PartyInformationUpdated(bool bInIsTileSelected);                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRow
/// Size: 0x00C0 (0x0002E8 - 0x0003A8)
class UFortActivityBrowserRow : public UCommonUserWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0xB0];                                      // 0x02E8   (0x00B0)  MISSED
	class UCommonTextBlock*                            Text_CategoryName;                                          // 0x0398   (0x0008)  
	float                                              MinimumVisibilityPercentageForRowActivation;                // 0x03A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
	// void OnRowPeekStateChanged(bool bIsInPeekState);                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
	// void OnRowMoveUp(bool bMovingOffscreen);                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
	// void OnRowMoveDown(bool bMovingOffscreen);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged
	// void OnRowIsSelectedChanged(bool bIsSelected);                                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
	// void OnRowIsActiveChanged(bool bIsActive);                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
	// void OnCategoryItemChanged(bool bPlayAnimation);                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected
	// bool GetIsSelected();                                                                                                 // [0xacda03c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
	// bool GetIsInPeekState();                                                                                              // [0x38739fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
	// bool GetIsActive();                                                                                                   // [0x39c3090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowList
/// Size: 0x0020 (0x0003A8 - 0x0003C8)
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{ 
public:
	class UFortActivityListView*                       ListView_Activities;                                        // 0x03A8   (0x0008)  
	class UCommonButtonBase*                           Button_PageLeft;                                            // 0x03B0   (0x0008)  
	class UCommonButtonBase*                           Button_PageRight;                                           // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x03C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
	// void OnQueryStatusChanged(bool bIsActive);                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserView
/// Size: 0x00B8 (0x000450 - 0x000508)
class UFortActivityBrowserView : public UFortActivityView
{ 
public:
	bool                                               bShowCustomMatchmakingModalButton;                          // 0x0450   (0x0001)  
	bool                                               bShowSpectateMatchModalButton;                              // 0x0451   (0x0001)  
	bool                                               bShowMobileGameDetailsButton;                               // 0x0452   (0x0001)  
	bool                                               bShowMobileAcceptButton;                                    // 0x0453   (0x0001)  
	bool                                               bShowBackToTopButton;                                       // 0x0454   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0455   (0x0003)  MISSED
	FName                                              DiscoverySurfaceName;                                       // 0x0458   (0x0004)  
	unsigned char                                      UnknownData01_6[0xAC];                                      // 0x045C   (0x00AC)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty
	// void OnSurfaceDataDirty();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                // [0xacd9fd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowView
/// Size: 0x01B8 (0x000508 - 0x0006C0)
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0508   (0x0008)  MISSED
	float                                              MouseWheelScrollTimeThreshold;                              // 0x0510   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0514   (0x0004)  MISSED
	class UFortActivityBrowserListView*                BrowserList_Activities;                                     // 0x0518   (0x0008)  
	unsigned char                                      UnknownData02_5[0x60];                                      // 0x0520   (0x0060)  MISSED
	FName                                              TabNameID;                                                  // 0x0580   (0x0004)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x0584   (0x000C)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0590   (0x0110)  
	class UFortSwipePanel*                             SwipePanel_Navigation;                                      // 0x06A0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x06A8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged
	// void OnRowChanged(int32_t NewCategoryIndex);                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished
	// void OnQueryActivitiesFinished();                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnListViewScrolled
	// void OnListViewScrolled(float ItemOffset, float DistanceRemaining);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated
	// void OnActivityUpdated();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.HandleVerticalSwipe
	// void HandleVerticalSwipe(int32_t Direction);                                                                          // [0xacda224] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTile
/// Size: 0x0060 (0x0014F0 - 0x001550)
class UFortActivityBrowserTile : public UFortActivityBrowserTileBase
{ 
public:
	class UFortActivityTileDetailsDisplay*             Display_TileDetails;                                        // 0x14F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x14F8   (0x0058)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserTile.HandleDisplayTileDetailsHoldTriggered
	// void HandleDisplayTileDetailsHoldTriggered(class UCommonButtonBase* Button);                                          // [0xacda154] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                        // [0x2cfba40] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView
/// Size: 0x0158 (0x000508 - 0x000660)
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0508   (0x0008)  MISSED
	class UFortGameActivityProvider*                   ActivityProvider;                                           // 0x0510   (0x0008)  
	class UFortActivityTileView*                       TileView_PlayerActivities;                                  // 0x0518   (0x0008)  
	FName                                              TabNameID;                                                  // 0x0520   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0524   (0x000C)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0530   (0x0110)  
	EFortCreativeDiscoveryPlayHistoryType              PlayHistoryProviderType;                                    // 0x0640   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1F];                                      // 0x0641   (0x001F)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
	// void PlayViewIntro();                                                                                                 // [0xacda5dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesStarted
	// void OnQueryActivitiesStarted();                                                                                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesComplete
	// void OnQueryActivitiesComplete();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
	// void OnPlayViewIntro();                                                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
	// void BP_OnTileViewUpdated();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryPageView
/// Size: 0x0040 (0x000660 - 0x0006A0)
class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0660   (0x0008)  MISSED
	class UCommonRichTextBlock*                        Text_CategoryTitle;                                         // 0x0668   (0x0008)  
	class UCommonButtonBase*                           Button_BackToTop;                                           // 0x0670   (0x0008)  
	class UCommonButtonBase*                           Button_CloseTouch;                                          // 0x0678   (0x0008)  
	class UCommonButtonBase*                           Button_Back;                                                // 0x0680   (0x0008)  
	class UCommonButtonBase*                           Button_MobileAccept;                                        // 0x0688   (0x0008)  
	class UCommonButtonBase*                           Button_MobileShowGameDetails;                               // 0x0690   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0698   (0x0008)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileViewTileBase
/// Size: 0x0090 (0x001490 - 0x001520)
class UFortActivityTileViewTileBase : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x1490   (0x0090)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTile
/// Size: 0x0010 (0x001520 - 0x001530)
class UFortActivityCategoryTile : public UFortActivityTileViewTileBase
{ 
public:
	class UCommonTextBlock*                            Text_CategoryTitle;                                         // 0x1520   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x1528   (0x0008)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel
/// Size: 0x0070 (0x0002E8 - 0x000358)
class UFortActivityCategoryTilePanel : public UCommonUserWidget
{ 
public:
	class UFortActivityTileView*                       TileView_Categories;                                        // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            Text_Title;                                                 // 0x02F0   (0x0008)  
	int32_t                                            TileViewQueryThreshold;                                     // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UFortCreativeDiscoveryActivityProvider*      CachedActivityProvider;                                     // 0x0300   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0308   (0x0050)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryView
/// Size: 0x0148 (0x000508 - 0x000650)
class UFortActivityCategoryView : public UFortActivityBrowserView
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0508   (0x0008)  MISSED
	FName                                              TabNameID;                                                  // 0x0510   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0514   (0x000C)  MISSED
	FFortTabButtonLabelInfo                            TabButtonLabelInfo;                                         // 0x0520   (0x0110)  
	class UFortActivityCategoryTilePanel*              TilePanel_Featured;                                         // 0x0630   (0x0008)  
	class UFortActivityCategoryTilePanel*              TilePanel_All;                                              // 0x0638   (0x0008)  
	class UFortActivityCategoryTilePanel*              CurrentSelectedPanel;                                       // 0x0640   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0648   (0x0008)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady
	// void OnSurfaceDataReady();                                                                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected
	// void OnCategoryTilePanelSelected(class UFortActivityCategoryTilePanel* SelectedPanel);                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel
	// class UFortActivityCategoryTilePanel* NavigateFromPanel(EUINavigation Direction, class UFortActivityCategoryTilePanel* NavigatingPanel); // [0xacda494] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel
	// class UFortActivityCategoryTilePanel* GetTopMostVisiblePanel();                                                       // [0xacda104] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel
	// class UFortActivityCategoryTilePanel* GetCurrentSelectedPanel();                                                      // [0x3583eb4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
/// Size: 0x0080 (0x0006A0 - 0x000720)
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x06A0   (0x0028)  MISSED
	int32_t                                            AmountOfCreatorLinkEntriesQueried;                          // 0x06C8   (0x0004)  
	int32_t                                            ProcessedCreatorLinkEntries;                                // 0x06CC   (0x0004)  
	int32_t                                            AmountOfEntriesQueried;                                     // 0x06D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x06D4   (0x004C)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator
	// void OnNoContentFoundForCreator();                                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished
	// void OnCreatorActivitiesQueryFinished();                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverView
/// Size: 0x00A0 (0x0006C0 - 0x000760)
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{ 
public:
	bool                                               bPlayDetailsAnimationOnScreenOpen;                          // 0x06C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x06C1   (0x0003)  MISSED
	float                                              DetailsDisplayUpdateDelay;                                  // 0x06C4   (0x0004)  
	class UClass*                                      MovieWidgetClass;                                           // 0x06C8   (0x0008)  
	class UFortActivityDetailsDisplay*                 DetailsDisplay_SelectedActivity;                            // 0x06D0   (0x0008)  
	class UFortActivityDetailsDisplay*                 DetailsDisplay_PromotedActivity;                            // 0x06D8   (0x0008)  
	class UPanelWidget*                                Panel_VideoSlot;                                            // 0x06E0   (0x0008)  
	class UPanelWidget*                                Panel_PromotedVideoSlot;                                    // 0x06E8   (0x0008)  
	class UFortActivatableMovieWidget*                 ActivityMovieWidget;                                        // 0x06F0   (0x0008)  
	class UFortActivatableMovieWidget*                 PromotedActivityMovieWidget;                                // 0x06F8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x48];                                      // 0x0700   (0x0048)  MISSED
	class UWidgetAnimation*                            BoundKeyArtOutroAnimation;                                  // 0x0748   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0750   (0x0010)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay
	// void OnUpdateDetailsDisplay();                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro
	// void OnPlayKeyArtOutro();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro
	// void OnPlayKeyArtIntro();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent
	// void OnMoviePreEndEvent();                                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
	// void OnMoviePlayingChanged(bool bIsPlaying);                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                      // [0xacda468] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                      // [0x3d91728] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState
	// bool IsInOutroState();                                                                                                // [0xacda420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading
	// bool IsImageLoading();                                                                                                // [0xacda408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
	// void HandleMovieWidgetMediaStarted();                                                                                 // [0xacda1e8] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent
	// void HandleMovieWidgetMediaPreEndEvent();                                                                             // [0xacda1d4] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget
	// class UFortActivatableMovieWidget* GetPromotedMovieWidget();                                                          // [0xacda0ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget
	// class UFortActivatableMovieWidget* GetMovieWidget();                                                                  // [0xacda0d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation
	// class UWidgetAnimation* GetKeyArtOutroAnimation();                                                                    // [0xacda064] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture
	// class UTexture* GetCurrentTexture();                                                                                  // [0xacd9f68] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay
	// void CheckUpdateDetailsDelay();                                                                                       // [0xacd9db8] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2
/// Size: 0x0150 (0x0006C0 - 0x000810)
class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView
{ 
public:
	SDK_UNDEFINED(16,13326) /* FMulticastInlineDelegate */ __um(OnActivityRequested);                              // 0x06C0   (0x0010)  
	class UFortDiscoverPreviewManager*                 DiscoverPreviewManager;                                     // 0x06D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x06D8   (0x0028)  MISSED
	class UDiscoverSelectedActivityViewModel*          SelectedActivityVM;                                         // 0x0700   (0x0008)  
	SDK_UNDEFINED(32,13327) /* TWeakObjectPtr<UClass*> */ __um(SoftCustomMatchmakingModalClass);                   // 0x0708   (0x0020)  
	SDK_UNDEFINED(32,13328) /* TWeakObjectPtr<UClass*> */ __um(SoftSpectateMatchModalClass);                       // 0x0728   (0x0020)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0748   (0x0008)  MISSED
	FDataTableRowHandle                                BackToTopInputAction;                                       // 0x0750   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0760   (0x0008)  MISSED
	FDataTableRowHandle                                CustomKeyInputAction;                                       // 0x0768   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0778   (0x0008)  MISSED
	FDataTableRowHandle                                ShowSpectateMatchModalInputAction;                          // 0x0780   (0x0010)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0790   (0x0008)  MISSED
	FDataTableRowHandle                                JoinAsSpectatorInputAction;                                 // 0x0798   (0x0010)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x07A8   (0x0008)  MISSED
	FDataTableRowHandle                                JoinAsPlayerInputAction;                                    // 0x07B0   (0x0010)  
	unsigned char                                      UnknownData06_5[0x8];                                       // 0x07C0   (0x0008)  MISSED
	FDataTableRowHandle                                SelectActivityInputAction_Touch;                            // 0x07C8   (0x0010)  
	unsigned char                                      UnknownData07_6[0x38];                                      // 0x07D8   (0x0038)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.UpdateMiscActionBindingVisibility
	// void UpdateMiscActionBindingVisibility(bool bVisible);                                                                // [0x3b3428c] Final|Native|Private|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.StartDiscoverAnalyticSession
	// void StartDiscoverAnalyticSession();                                                                                  // [0x42cb058] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                      // [0xacda468] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                      // [0x3d91728] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.FireDiscoverExitedAnalyticEvent
	// void FireDiscoverExitedAnalyticEvent();                                                                               // [0x3ee1500] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.DeactivationTransitionCompleted
	// void DeactivationTransitionCompleted();                                                                               // [0xacd9de0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListView
/// Size: 0x0190 (0x000298 - 0x000428)
class UFortActivityListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	float                                              DirectionalNavigationTimeThreshold;                         // 0x0380   (0x0004)  
	SDK_UNDEFINED(1,13329) /* TEnumAsByte<EOrientation> */ __um(orientation);                                      // 0x0384   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0385   (0x0003)  MISSED
	float                                              EntrySpacing;                                               // 0x0388   (0x0004)  
	bool                                               bCircularNavigationEnabled;                                 // 0x038C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	SDK_UNDEFINED(80,13330) /* TMap<EActivityBrowserTileStyle, UClass*> */ __um(TileTypes);                        // 0x0390   (0x0050)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x03E0   (0x0048)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                             // [0xacd9f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.AddTileType
	// void AddTileType(EActivityBrowserTileStyle style, class UClass* WidgetClass);                                         // [0xacd9cb4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityLobbyTile
/// Size: 0x0080 (0x0014E0 - 0x001560)
class UFortActivityLobbyTile : public UCommonButtonLegacy
{ 
public:
	class UCommonTextBlock*                            Text_ActivityName;                                          // 0x14E0   (0x0008)  
	class UFortActivityBrowserTag*                     ActivityBrowserTag_EpicOriginal;                            // 0x14E8   (0x0008)  
	class UClass*                                      ActivityModeSetSelectionModalClass;                         // 0x14F0   (0x0008)  
	class UFortGameActivityProvider*                   ActivityProvider;                                           // 0x14F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x1500   (0x0060)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal
	// void ShowModeSetSelectionModal();                                                                                     // [0xacda6b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShouldShowSubmodeSelectButton
	// bool ShouldShowSubmodeSelectButton();                                                                                 // [0x358df48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
	// bool IsActivityEpicCreated();                                                                                         // [0xacda318] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName
	// FText GetChildActivityDisplayName();                                                                                  // [0x233a868] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal
/// Size: 0x0068 (0x000418 - 0x000480)
class UFortActivityModeSetSelectionModal : public UFortActivityModeSetSelectionModalBase
{ 
public:
	class UCommonTextBlock*                            Text_ActivityName;                                          // 0x0418   (0x0008)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0420   (0x0028)  MISSED
	class UCommonButtonBase*                           Button_Back;                                                // 0x0448   (0x0008)  
	class UCommonButtonBase*                           Button_BackBoard;                                           // 0x0450   (0x0008)  
	class UFortActivityModeSetSelection*               List_SubModeList;                                           // 0x0458   (0x0008)  
	class UFortActivitySquadFillButton*                Button_ActivitySquadFill;                                   // 0x0460   (0x0008)  
	class UFortActivityPrivacyButton*                  Button_ActivityPrivacy;                                     // 0x0468   (0x0008)  
	class UFortActivityHabaneroButton*                 Button_Activity_Habanero;                                   // 0x0470   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0478   (0x0008)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetIsRankedSwitchAvailable
	// void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetHabaneroValues
	// void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists);                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose
	// void SaveSelectionAndClose();                                                                                         // [0xacda6a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged
	// void OnSubModeSelectionChanged();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected
	// void OnSubModeSelected();                                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged
	// void OnActivityChanged(class UFortGameActivity* GameActivity, FString StartingSelectedMnemonic);                      // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.IsCreativeModeSetActivity
	// bool IsCreativeModeSetActivity();                                                                                     // [0xacda3c8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile
/// Size: 0x0060 (0x001520 - 0x001580)
class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase
{ 
public:
	class UFortActivityTileDetailsDisplay*             Display_TileDetails;                                        // 0x1520   (0x0008)  
	class UCommonTextBlock*                            Text_LastPlayedDate;                                        // 0x1528   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x1530   (0x0050)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                        // [0xacda12c] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySelector
/// Size: 0x00E8 (0x000028 - 0x000110)
class UFortActivitySelector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	class UUserWidget*                                 SelectedContextWidget;                                      // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0040   (0x0020)  MISSED
	class UFortActivityCreatorPageView*                CachedCreatorPageView;                                      // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0068   (0x0010)  MISSED
	SDK_UNDEFINED(80,13331) /* TMap<FName, UFortActivityBrowserColorSchemeAsset*> */ __um(ColorSchemes);           // 0x0078   (0x0050)  
	class UFortActivityBrowserColorSchemeAsset*        CurrentColorScheme;                                         // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x40];                                      // 0x00D0   (0x0040)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.ToggleFavorite
	// void ToggleFavorite();                                                                                                // [0xacda6f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OpenCreatorPage
	// void OpenCreatorPage();                                                                                               // [0xacda598] Final|Native|Private|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnSwapColorScheme
	// void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnEnableColorScheme
	// void OnEnableColorScheme(bool bIsColorSchemeActive);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.HandleShowActivityDetails
	// void HandleShowActivityDetails();                                                                                     // [0xacda1fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.ConfirmSelectedActivity
	// void ConfirmSelectedActivity();                                                                                       // [0xacd9dcc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay
/// Size: 0x0180 (0x001590 - 0x001710)
class UFortActivityTileDetailsDisplay : public UUIKitHoldableModularButton
{ 
public:
	SDK_UNDEFINED(16,13332) /* FMulticastInlineDelegate */ __um(OnActivitySelectedDelegate);                       // 0x1588   (0x0010)  
	SDK_UNDEFINED(16,13333) /* FMulticastInlineDelegate */ __um(OnActivityUnSelectedDelegate);                     // 0x1598   (0x0010)  
	bool                                               bShowDetailsButton;                                         // 0x15A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x15A9   (0x0003)  MISSED
	int32_t                                            DefaultColumnSize;                                          // 0x15AC   (0x0004)  
	class UCommonTextBlock*                            Text_ActivityName;                                          // 0x15B0   (0x0008)  
	class UCommonTextBlock*                            Text_PlayerCount;                                           // 0x15B8   (0x0008)  
	class UCommonButtonBase*                           Button_Favorite;                                            // 0x15C0   (0x0008)  
	class UCommonButtonBase*                           Button_Details;                                             // 0x15C8   (0x0008)  
	class UFortActivityBrowserTag*                     ActivityBrowserTag_EpicOriginal;                            // 0x15D0   (0x0008)  
	class UTextBlock*                                  Text_DebugId;                                               // 0x15D8   (0x0008)  
	class UFortActivityVideoCycle*                     ActivityVideoCycleWidget;                                   // 0x15E0   (0x0008)  
	SDK_UNDEFINED(80,13334) /* TMap<uint32_t, ECreativeLinkPreviewSize> */ __um(MinColumnSizeToImageSize);         // 0x15E8   (0x0050)  
	char                                               MaxMobileColumnSize;                                        // 0x1638   (0x0001)  
	char                                               MinMobileColumnSize;                                        // 0x1639   (0x0001)  
	bool                                               bIsVideoEnabledForDynamicTileSizingV2;                      // 0x163A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x163B   (0x0005)  MISSED
	class UClass*                                      ActivityDetailsModalClass;                                  // 0x1640   (0x0008)  
	class UClass*                                      ActivityCreatorPageViewClass;                               // 0x1648   (0x0008)  
	class UClass*                                      ActivityCampaignPurchaseScreenClass;                        // 0x1650   (0x0008)  
	class UClass*                                      ActivityAttributionsClass;                                  // 0x1658   (0x0008)  
	unsigned char                                      UnknownData02_6[0xB0];                                      // 0x1660   (0x00B0)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateSqueegeeWidgets
	// void UpdateSqueegeeWidgets(class UFortGameActivity* GameActivity);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateFromFortActivityViewModel
	// void UpdateFromFortActivityViewModel();                                                                               // [0xacda788] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateCCU
	// void UpdateCCU(int32_t CCUCount);                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateActivitySelector
	// void UpdateActivitySelector();                                                                                        // [0xacda774] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo
	// void StopTileVideo();                                                                                                 // [0xacda6e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo
	// void StartTileVideo();                                                                                                // [0xacda6cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.ShouldPlayTileVideo
	// void ShouldPlayTileVideo(bool& bOutResult);                                                                           // [0x18a39e4] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileClicked
	// void OnTileClicked();                                                                                                 // [0xacda584] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRespondToTileViewVisibilityChange
	// void OnRespondToTileViewVisibilityChange(bool bIsVisible);                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged
	// void OnRequiresPurchaseChanged(bool bRequiresPurchase);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
	// void OnPartySizeChanged(int32_t PartySize);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLogoImageChanged
	// void OnLogoImageChanged(bool bIsLoading, class UTexture* Texture);                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
	// void OnLocalPlayerPromotedToLeader();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
	// void OnLocalPlayerDemoted();                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
	// void OnIsFavoriteChanged(bool bIsFavorite);                                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnFriendsPlayingChanged
	// void OnFriendsPlayingChanged(int32_t NumPlaying);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
	// void OnActivityUnSelected__DelegateSignature();                                                                       // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
	// void OnActivitySelected__DelegateSignature();                                                                         // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity
	// bool IsModeSetActivity();                                                                                             // [0xacda438] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityLocked
	// bool IsActivityLocked();                                                                                              // [0xacda374] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
	// bool IsActivityFavorited();                                                                                           // [0xacda350] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleShowActivityDetails
	// void HandleShowActivityDetails();                                                                                     // [0xacda210] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleActivitySelected
	// void HandleActivitySelected();                                                                                        // [0x3ff6e3c] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetIsActivityLockedReason
	// EFortActivityIsLockedReason GetIsActivityLockedReason();                                                              // [0xacd9fec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                // [0x252b240] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivitySelector
	// class UFortActivitySelector* GetActivitySelector();                                                                   // [0xacd9ef4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivityCreatorDisplayText
	// FString GetActivityCreatorDisplayText();                                                                              // [0xacd9eb4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase
	// bool DoesActivityRequirePurchase();                                                                                   // [0xacd9e3c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.BroadcastOnActivityConfirmed
	// void BroadcastOnActivityConfirmed();                                                                                  // [0xacd9d9c] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileView
/// Size: 0x0000 (0x000C00 - 0x000C00)
class UFortActivityTileView : public UCommonTileView
{ 
public:


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.SetListenForMouseWheelInput
	// void SetListenForMouseWheelInput(bool bListenForInput);                                                               // [0x1f51dcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.RespondToVisibilityChange
	// void RespondToVisibilityChange(bool bIsVisible);                                                                      // [0xacda624] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.NavigateToTop
	// void NavigateToTop();                                                                                                 // [0xacda558] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemBrowserRow
/// Size: 0x0050 (0x0003A8 - 0x0003F8)
class UFortDiscoverItemBrowserRow : public UFortActivityBrowserRow
{ 
public:
	class UFortDiscoverItemListView*                   ListView_Tiles;                                             // 0x03A8   (0x0008)  
	class UCommonButtonBase*                           Button_PageLeft;                                            // 0x03B0   (0x0008)  
	class UCommonButtonBase*                           Button_PageRight;                                           // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x03C0   (0x0038)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemListView
/// Size: 0x0150 (0x000298 - 0x0003E8)
class UFortDiscoverItemListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_3[0xE8];                                      // 0x0298   (0x00E8)  MISSED
	float                                              DirectionalNavigationTimeThreshold;                         // 0x0380   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0384   (0x0004)  MISSED
	class UClass*                                      PlayWithFriendsEntryWidgetClass;                            // 0x0388   (0x0008)  
	class UClass*                                      ActivityEntryWidgetClass;                                   // 0x0390   (0x0008)  
	SDK_UNDEFINED(1,13335) /* TEnumAsByte<EOrientation> */ __um(orientation);                                      // 0x0398   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0399   (0x0003)  MISSED
	float                                              EntrySpacing;                                               // 0x039C   (0x0004)  
	bool                                               bCircularNavigationEnabled;                                 // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x47];                                      // 0x03A1   (0x0047)  MISSED


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortDiscoverItemListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                             // [0xacd9fb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.ActivityLibraryComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UActivityLibraryComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x00A0   (0x0010)  MISSED
	class UFortActivitySelector*                       ActivitySelector;                                           // 0x00B0   (0x0008)  
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserContext
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortActivityBrowserContext : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/DiscoveryBrowserUI.OverrideMatchmakingUIComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UOverrideMatchmakingUIComponent : public UActorComponent
{ 
public:
	FMatchmakingUIOverride                             MatchmakingUIOverride;                                      // 0x00A0   (0x0040)  
};

/// Struct /Script/DiscoveryBrowserUI.ColorSchemeParamaterValues
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FColorSchemeParamaterValues
{ 
	class UMaterialParameterCollection*                AlternateMaterialCollection;                                // 0x0000   (0x0008)  
	SDK_UNDEFINED(80,13336) /* TMap<FName, float> */   __um(ScalarParameterValues);                                // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,13337) /* TMap<FName, FLinearColor> */ __um(VectorParameterValues);                           // 0x0058   (0x0050)  
};

