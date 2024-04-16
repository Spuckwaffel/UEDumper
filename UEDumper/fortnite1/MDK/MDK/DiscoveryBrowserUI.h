
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
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/DiscoveryBrowserUI.DiscoverSelectedActivityViewModel
/// Size: 0x0028 (0x000068 - 0x000090)
class UDiscoverSelectedActivityViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bLoading                                                    OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bHasPartyData                                               OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bIsActiveInvite                                             OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bIsPartyPrivate                                             OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(int32_t)                                   CurrentPartySize                                            OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	SMember(FText)                                     RichPresenceText                                            OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(class UFortActivityViewModel*)             ActivityVM                                                  OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListItemWrapper
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortActivityListItemWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverHomespace
/// Size: 0x0000 (0x000428 - 0x000428)
class UFortDiscoverHomespace : public UScrollableActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortDiscoverHomespace.OnPeekPushPercentMobileCVarChanged
	// void OnPeekPushPercentMobileCVarChanged(float PeekPushPercent);                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverPreviewManager
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UFortDiscoverPreviewManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortActivityBrowserColorSchemeAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UMaterialParameterCollection*, FColorSchemeParamaterValues>) MaterialCollectionOverrides          OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserListView
/// Size: 0x0238 (0x000290 - 0x0004C8)
class UFortActivityBrowserListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          OFFSET(get<float>, {0x378, 4, 0, 0})
	CMember(class UFortHabaneroDisplayData*)           HabaneroDisplayData                                         OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UClass*)                             DiscoverItemRowClass                                        OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class UClass*)                             HomebarItemRowClass                                         OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TMap<FName, UClass*>)                      RowTypes                                                    OFFSET(get<T>, {0x398, 80, 0, 0})
	DMember(bool)                                      bUseTinyOffsetWhenScrollingIntoView                         OFFSET(get<bool>, {0x3E8, 1, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserListView.NavigateToActivityInFirstRow
	// void NavigateToActivityInFirstRow(int32_t ActivityItemIndex);                                                            // [0xc5b0104] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserListView.HandleVisibleEntriesChanged
	// void HandleVisibleEntriesChanged();                                                                                      // [0x419ddbc] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTileBase
/// Size: 0x0060 (0x001480 - 0x0014E0)
class UFortActivityBrowserTileBase : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
/// Size: 0x00D0 (0x0014E0 - 0x0015B0)
class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5552;

public:
	DMember(int32_t)                                   MaxNamesToDisplay                                           OFFSET(get<int32_t>, {0x14E0, 4, 0, 0})
	DMember(int32_t)                                   MaxPortraitsToDisplay                                       OFFSET(get<int32_t>, {0x14E4, 4, 0, 0})
	CMember(class UFortJoinablePartyPortraitsDisplay*) PartyMembersAvatarsDisplay                                  OFFSET(get<T>, {0x14F8, 8, 0, 0})
	DMember(bool)                                      bIsActiveInvite                                             OFFSET(get<bool>, {0x1500, 1, 0, 0})
	DMember(int32_t)                                   CurrentPartySize                                            OFFSET(get<int32_t>, {0x1504, 4, 0, 0})
	DMember(bool)                                      bIsPartyPrivate                                             OFFSET(get<bool>, {0x1508, 1, 0, 0})
	CMember(class UFortGameActivity*)                  CachedGameActivity                                          OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(TWeakObjectPtr<USocialUser*>)              CachedTargetSocialUser                                      OFFSET(get<T>, {0x1528, 8, 0, 0})
	SMember(FText)                                     CurrentCTAButtonText                                        OFFSET(getStruct<T>, {0x1530, 16, 0, 0})
	SMember(FText)                                     JoinPartyText                                               OFFSET(getStruct<T>, {0x1540, 16, 0, 0})
	SMember(FText)                                     RequestToJoinText                                           OFFSET(getStruct<T>, {0x1550, 16, 0, 0})
	SMember(FDataTableRowHandle)                       JoinFriendInputAction_Touch                                 OFFSET(getStruct<T>, {0x1560, 16, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateSingleFriendName
	// void UpdateSingleFriendName(FText& SingleFriendName);                                                                    // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateRichPresence
	// void UpdateRichPresence(FText& RichPresence);                                                                            // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdatePartyMemberNames
	// void UpdatePartyMemberNames(FText& Names);                                                                               // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateOtherPlayersSubText
	// void UpdateOtherPlayersSubText(FText& OtherPlayersSubText);                                                              // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateLastInteraction
	// void UpdateLastInteraction(FText& LastInteraction);                                                                      // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateIslandThumbnail
	// void UpdateIslandThumbnail(class UTexture* ThumbnailTexture);                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInteraction
	// void UpdateCTAButtonInteraction(bool bIsInteractionEnabled);                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInfo
	// void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound);                                                // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OpenSidebar
	// void OpenSidebar();                                                                                                      // [0xc5b0218] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnUpdateColumnSize
	// void OnUpdateColumnSize(int32_t NewColumnSize);                                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTileActiveChanged
	// void OnTileActiveChanged(bool bIsTileActive);                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureLoadingComplete
	// void OnTextureLoadingComplete(class UTexture* ThumbnailTexture);                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureBeginLoading
	// void OnTextureBeginLoading();                                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnGameActivityChanged
	// void OnGameActivityChanged(class UFortGameActivity* GameActivity);                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.HandleCTAButtonClicked
	// void HandleCTAButtonClicked();                                                                                           // [0xc5afbcc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetMaxPartySize
	// int32_t GetMaxPartySize();                                                                                               // [0xc5afaf0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetCTAButtonText
	// FText GetCTAButtonText();                                                                                                // [0xc5af894] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.BP_PartyInformationUpdated
	// void BP_PartyInformationUpdated(bool bInIsTileSelected);                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRow
/// Size: 0x00C0 (0x0002F0 - 0x0003B0)
class UFortActivityBrowserRow : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(class UCommonTextBlock*)                   Text_CategoryName                                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(float)                                     MinimumVisibilityPercentageForRowActivation                 OFFSET(get<float>, {0x3A8, 4, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
	// void OnRowPeekStateChanged(bool bIsInPeekState);                                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
	// void OnRowMoveUp(bool bMovingOffscreen);                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
	// void OnRowMoveDown(bool bMovingOffscreen);                                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged
	// void OnRowIsSelectedChanged(bool bIsSelected);                                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
	// void OnRowIsActiveChanged(bool bIsActive);                                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
	// void OnCategoryItemChanged(bool bPlayAnimation);                                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected
	// bool GetIsSelected();                                                                                                    // [0xc5afaa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
	// bool GetIsInPeekState();                                                                                                 // [0xc5afa78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
	// bool GetIsActive();                                                                                                      // [0xc5afa10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowList
/// Size: 0x0020 (0x0003B0 - 0x0003D0)
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class UFortActivityListView*)              ListView_Activities                                         OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PageLeft                                             OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PageRight                                            OFFSET(get<T>, {0x3C0, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
	// void OnQueryStatusChanged(bool bIsActive);                                                                               // [0x246f7d8] Event|Public|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserView
/// Size: 0x00B8 (0x000458 - 0x000510)
class UFortActivityBrowserView : public UFortActivityView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	DMember(bool)                                      bShowCustomMatchmakingModalButton                           OFFSET(get<bool>, {0x458, 1, 0, 0})
	DMember(bool)                                      bShowSpectateMatchModalButton                               OFFSET(get<bool>, {0x459, 1, 0, 0})
	DMember(bool)                                      bShowMobileGameDetailsButton                                OFFSET(get<bool>, {0x45A, 1, 0, 0})
	DMember(bool)                                      bShowMobileAcceptButton                                     OFFSET(get<bool>, {0x45B, 1, 0, 0})
	DMember(bool)                                      bShowBackToTopButton                                        OFFSET(get<bool>, {0x45C, 1, 0, 0})
	SMember(FName)                                     DiscoverySurfaceName                                        OFFSET(getStruct<T>, {0x460, 4, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty
	// void OnSurfaceDataDirty();                                                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                   // [0xc5af9d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowView
/// Size: 0x01A0 (0x000510 - 0x0006B0)
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	DMember(float)                                     MouseWheelScrollTimeThreshold                               OFFSET(get<float>, {0x518, 4, 0, 0})
	CMember(class UFortActivityBrowserListView*)       BrowserList_Activities                                      OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x588, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x590, 256, 0, 0})
	CMember(class UFortSwipePanel*)                    SwipePanel_Navigation                                       OFFSET(get<T>, {0x690, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged
	// void OnRowChanged(int32_t NewCategoryIndex);                                                                             // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished
	// void OnQueryActivitiesFinished();                                                                                        // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnListViewScrolled
	// void OnListViewScrolled(float ItemOffset, float DistanceRemaining);                                                      // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated
	// void OnActivityUpdated();                                                                                                // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.HandleVerticalSwipe
	// void HandleVerticalSwipe(int32_t Direction);                                                                             // [0xc5afcf0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTile
/// Size: 0x0060 (0x0014E0 - 0x001540)
class UFortActivityBrowserTile : public UFortActivityBrowserTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	CMember(class UFortActivityTileDetailsDisplay*)    Display_TileDetails                                         OFFSET(get<T>, {0x14E0, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserTile.HandleDisplayTileDetailsHoldTriggered
	// void HandleDisplayTileDetailsHoldTriggered(class UCommonButtonBase* Button);                                             // [0xc5afbe0] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0xc5afb90] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView
/// Size: 0x0140 (0x000510 - 0x000650)
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(class UFortGameActivityProvider*)          ActivityProvider                                            OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class UFortActivityTileView*)              TileView_PlayerActivities                                   OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x528, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x530, 256, 0, 0})
	CMember(EFortCreativeDiscoveryPlayHistoryType)     PlayHistoryProviderType                                     OFFSET(get<T>, {0x630, 1, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
	// void PlayViewIntro();                                                                                                    // [0xc5b0248] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesStarted
	// void OnQueryActivitiesStarted();                                                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesComplete
	// void OnQueryActivitiesComplete();                                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
	// void OnPlayViewIntro();                                                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
	// void BP_OnTileViewUpdated();                                                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryPageView
/// Size: 0x0040 (0x000650 - 0x000690)
class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	CMember(class UCommonRichTextBlock*)               Text_CategoryTitle                                          OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BackToTop                                            OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_CloseTouch                                           OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MobileAccept                                         OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_MobileShowGameDetails                                OFFSET(get<T>, {0x680, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileViewTileBase
/// Size: 0x0090 (0x001480 - 0x001510)
class UFortActivityTileViewTileBase : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTile
/// Size: 0x0010 (0x001510 - 0x001520)
class UFortActivityCategoryTile : public UFortActivityTileViewTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(class UCommonTextBlock*)                   Text_CategoryTitle                                          OFFSET(get<T>, {0x1510, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel
/// Size: 0x0070 (0x0002F0 - 0x000360)
class UFortActivityCategoryTilePanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(class UFortActivityTileView*)              TileView_Categories                                         OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_Title                                                  OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(int32_t)                                   TileViewQueryThreshold                                      OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	CMember(class UFortCreativeDiscoveryActivityProvider*) CachedActivityProvider                                  OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryView
/// Size: 0x0130 (0x000510 - 0x000640)
class UFortActivityCategoryView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x518, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x520, 256, 0, 0})
	CMember(class UFortActivityCategoryTilePanel*)     TilePanel_Featured                                          OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(class UFortActivityCategoryTilePanel*)     TilePanel_All                                               OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(class UFortActivityCategoryTilePanel*)     CurrentSelectedPanel                                        OFFSET(get<T>, {0x630, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady
	// void OnSurfaceDataReady();                                                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected
	// void OnCategoryTilePanelSelected(class UFortActivityCategoryTilePanel* SelectedPanel);                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel
	// class UFortActivityCategoryTilePanel* NavigateFromPanel(EUINavigation Direction, class UFortActivityCategoryTilePanel* NavigatingPanel); // [0xc5affb4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel
	// class UFortActivityCategoryTilePanel* GetTopMostVisiblePanel();                                                          // [0xc5afb68] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel
	// class UFortActivityCategoryTilePanel* GetCurrentSelectedPanel();                                                         // [0xc5af950] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
/// Size: 0x0080 (0x000690 - 0x000710)
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(int32_t)                                   AmountOfCreatorLinkEntriesQueried                           OFFSET(get<int32_t>, {0x6B8, 4, 0, 0})
	DMember(int32_t)                                   ProcessedCreatorLinkEntries                                 OFFSET(get<int32_t>, {0x6BC, 4, 0, 0})
	DMember(int32_t)                                   AmountOfEntriesQueried                                      OFFSET(get<int32_t>, {0x6C0, 4, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator
	// void OnNoContentFoundForCreator();                                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished
	// void OnCreatorActivitiesQueryFinished();                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverView
/// Size: 0x00A0 (0x0006B0 - 0x000750)
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	DMember(bool)                                      bPlayDetailsAnimationOnScreenOpen                           OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	DMember(float)                                     DetailsDisplayUpdateDelay                                   OFFSET(get<float>, {0x6B4, 4, 0, 0})
	CMember(class UClass*)                             MovieWidgetClass                                            OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(class UFortActivityDetailsDisplay*)        DetailsDisplay_SelectedActivity                             OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(class UFortActivityDetailsDisplay*)        DetailsDisplay_PromotedActivity                             OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(class UPanelWidget*)                       Panel_VideoSlot                                             OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(class UPanelWidget*)                       Panel_PromotedVideoSlot                                     OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(class UFortActivatableMovieWidget*)        ActivityMovieWidget                                         OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(class UFortActivatableMovieWidget*)        PromotedActivityMovieWidget                                 OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   BoundKeyArtOutroAnimation                                   OFFSET(get<T>, {0x738, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay
	// void OnUpdateDetailsDisplay();                                                                                           // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                    // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro
	// void OnPlayKeyArtOutro();                                                                                                // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro
	// void OnPlayKeyArtIntro();                                                                                                // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent
	// void OnMoviePreEndEvent();                                                                                               // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
	// void OnMoviePlayingChanged(bool bIsPlaying);                                                                             // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                         // [0xc5aff88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                         // [0xc5aff5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState
	// bool IsInOutroState();                                                                                                   // [0xc5aff14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading
	// bool IsImageLoading();                                                                                                   // [0xc5afefc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
	// void HandleMovieWidgetMediaStarted();                                                                                    // [0xc5afcb4] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent
	// void HandleMovieWidgetMediaPreEndEvent();                                                                                // [0xc5afca0] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget
	// class UFortActivatableMovieWidget* GetPromotedMovieWidget();                                                             // [0xc5afb50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget
	// class UFortActivatableMovieWidget* GetMovieWidget();                                                                     // [0xc5afb38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation
	// class UWidgetAnimation* GetKeyArtOutroAnimation();                                                                       // [0xc5afac8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture
	// class UTexture* GetCurrentTexture();                                                                                     // [0xc5af968] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay
	// void CheckUpdateDetailsDelay();                                                                                          // [0xc5af720] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2
/// Size: 0x0150 (0x0006B0 - 0x000800)
class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	SMember(FMulticastInlineDelegate)                  OnActivityRequested                                         OFFSET(getStruct<T>, {0x6B0, 16, 0, 0})
	CMember(class UFortDiscoverPreviewManager*)        DiscoverPreviewManager                                      OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(class UDiscoverSelectedActivityViewModel*) SelectedActivityVM                                          OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftCustomMatchmakingModalClass                             OFFSET(get<T>, {0x6F8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftSpectateMatchModalClass                                 OFFSET(get<T>, {0x718, 32, 0, 0})
	SMember(FDataTableRowHandle)                       BackToTopInputAction                                        OFFSET(getStruct<T>, {0x740, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CustomKeyInputAction                                        OFFSET(getStruct<T>, {0x758, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ShowSpectateMatchModalInputAction                           OFFSET(getStruct<T>, {0x770, 16, 0, 0})
	SMember(FDataTableRowHandle)                       JoinAsSpectatorInputAction                                  OFFSET(getStruct<T>, {0x788, 16, 0, 0})
	SMember(FDataTableRowHandle)                       JoinAsPlayerInputAction                                     OFFSET(getStruct<T>, {0x7A0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SelectActivityInputAction_Touch                             OFFSET(getStruct<T>, {0x7B8, 16, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.UpdateMiscActionBindingVisibility
	// void UpdateMiscActionBindingVisibility(bool bVisible);                                                                   // [0xc5b0598] Final|Native|Private|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.StartDiscoverAnalyticSession
	// void StartDiscoverAnalyticSession();                                                                                     // [0xc5b04b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                         // [0xc5aff88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                         // [0xc5aff5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.FireDiscoverExitedAnalyticEvent
	// void FireDiscoverExitedAnalyticEvent();                                                                                  // [0xc5af81c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.DeactivationTransitionCompleted
	// void DeactivationTransitionCompleted();                                                                                  // [0xc5af748] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListView
/// Size: 0x01A0 (0x000290 - 0x000430)
class UFortActivityListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          OFFSET(get<float>, {0x378, 4, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x37C, 1, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(bool)                                      bCircularNavigationEnabled                                  OFFSET(get<bool>, {0x384, 1, 0, 0})
	CMember(TMap<EActivityBrowserTileStyle, UClass*>)  TileTypes                                                   OFFSET(get<T>, {0x388, 80, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                                // [0xc5af990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.AddTileType
	// void AddTileType(EActivityBrowserTileStyle style, class UClass* WidgetClass);                                            // [0xc5af590] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityLobbyTile
/// Size: 0x0080 (0x0014D0 - 0x001550)
class UFortActivityLobbyTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(class UCommonTextBlock*)                   Text_ActivityName                                           OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(class UFortActivityBrowserTag*)            ActivityBrowserTag_EpicOriginal                             OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(class UClass*)                             ActivityModeSetSelectionModalClass                          OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(class UFortGameActivityProvider*)          ActivityProvider                                            OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal
	// void ShowModeSetSelectionModal();                                                                                        // [0xc5b04a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShouldShowSubmodeSelectButton
	// bool ShouldShowSubmodeSelectButton();                                                                                    // [0xc5b047c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
	// bool IsActivityEpicCreated();                                                                                            // [0xc5afe0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName
	// FText GetChildActivityDisplayName();                                                                                     // [0xc5af8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal
/// Size: 0x0068 (0x000420 - 0x000488)
class UFortActivityModeSetSelectionModal : public UFortActivityModeSetSelectionModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(class UCommonTextBlock*)                   Text_ActivityName                                           OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Back                                                 OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_BackBoard                                            OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UFortActivityModeSetSelection*)      List_SubModeList                                            OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UFortActivitySquadFillButton*)       Button_ActivitySquadFill                                    OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UFortActivityPrivacyButton*)         Button_ActivityPrivacy                                      OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UFortActivityHabaneroButton*)        Button_Activity_Habanero                                    OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetIsRankedSwitchAvailable
	// void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable);                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetHabaneroValues
	// void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists);                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose
	// void SaveSelectionAndClose();                                                                                            // [0xc5b0354] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged
	// void OnSubModeSelectionChanged();                                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected
	// void OnSubModeSelected();                                                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged
	// void OnActivityChanged(class UFortGameActivity* GameActivity, FString StartingSelectedMnemonic);                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.IsCreativeModeSetActivity
	// bool IsCreativeModeSetActivity();                                                                                        // [0xc5afebc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile
/// Size: 0x0060 (0x001510 - 0x001570)
class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	CMember(class UFortActivityTileDetailsDisplay*)    Display_TileDetails                                         OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_LastPlayedDate                                         OFFSET(get<T>, {0x1518, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0xc5afba4] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySelector
/// Size: 0x00F8 (0x000028 - 0x000120)
class UFortActivitySelector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(class UUserWidget*)                        SelectedContextWidget                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UFortActivityCreatorPageView*)       CachedCreatorPageView                                       OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TMap<FName, UFortActivityBrowserColorSchemeAsset*>) ColorSchemes                                       OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(class UFortActivityBrowserColorSchemeAsset*) CurrentColorScheme                                        OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.ToggleFavorite
	// void ToggleFavorite();                                                                                                   // [0xc5b04f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OpenCreatorPage
	// void OpenCreatorPage();                                                                                                  // [0xc5b0204] Final|Native|Private|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnSwapColorScheme
	// void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnEnableColorScheme
	// void OnEnableColorScheme(bool bIsColorSchemeActive);                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.HandleShowActivityDetails
	// void HandleShowActivityDetails();                                                                                        // [0xc5afcc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.ConfirmSelectedActivity
	// void ConfirmSelectedActivity();                                                                                          // [0xc5af734] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay
/// Size: 0x0190 (0x001580 - 0x001710)
class UFortActivityTileDetailsDisplay : public UUIKitHoldableModularButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5904;

public:
	SMember(FMulticastInlineDelegate)                  OnActivitySelectedDelegate                                  OFFSET(getStruct<T>, {0x1578, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActivityUnSelectedDelegate                                OFFSET(getStruct<T>, {0x1588, 16, 0, 0})
	DMember(bool)                                      bShowDetailsButton                                          OFFSET(get<bool>, {0x1598, 1, 0, 0})
	DMember(int32_t)                                   DefaultColumnSize                                           OFFSET(get<int32_t>, {0x159C, 4, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ActivityName                                           OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_PlayerCount                                            OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Favorite                                             OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_Details                                              OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(class UFortActivityBrowserTag*)            ActivityBrowserTag_EpicOriginal                             OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(class UTextBlock*)                         Text_DebugId                                                OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(class UFortActivityVideoCycle*)            ActivityVideoCycleWidget                                    OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(TMap<uint32_t, ECreativeLinkPreviewSize>)  MinColumnSizeToImageSize                                    OFFSET(get<T>, {0x15D8, 80, 0, 0})
	DMember(char)                                      MaxMobileColumnSize                                         OFFSET(get<char>, {0x1628, 1, 0, 0})
	DMember(char)                                      MinMobileColumnSize                                         OFFSET(get<char>, {0x1629, 1, 0, 0})
	DMember(bool)                                      bIsVideoEnabledForDynamicTileSizingV2                       OFFSET(get<bool>, {0x162A, 1, 0, 0})
	CMember(class UClass*)                             ActivityDetailsModalClass                                   OFFSET(get<T>, {0x1630, 8, 0, 0})
	CMember(class UClass*)                             ActivityCreatorPageViewClass                                OFFSET(get<T>, {0x1638, 8, 0, 0})
	CMember(class UClass*)                             ActivityCampaignPurchaseScreenClass                         OFFSET(get<T>, {0x1640, 8, 0, 0})
	CMember(class UClass*)                             ActivityAttributionsClass                                   OFFSET(get<T>, {0x1648, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateSqueegeeWidgets
	// void UpdateSqueegeeWidgets(class UFortGameActivity* GameActivity);                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateFromFortActivityViewModel
	// void UpdateFromFortActivityViewModel();                                                                                  // [0xc5b0584] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateCCU
	// void UpdateCCU(int32_t CCUCount);                                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateActivitySelector
	// void UpdateActivitySelector();                                                                                           // [0xc5b0570] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo
	// void StopTileVideo();                                                                                                    // [0xc5b04dc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo
	// void StartTileVideo();                                                                                                   // [0xc5b04c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.ShouldPlayTileVideo
	// void ShouldPlayTileVideo(bool& bOutResult);                                                                              // [0x246f7d8] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileClicked
	// void OnTileClicked();                                                                                                    // [0xc5b01f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRespondToTileViewVisibilityChange
	// void OnRespondToTileViewVisibilityChange(bool bIsVisible);                                                               // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged
	// void OnRequiresPurchaseChanged(bool bRequiresPurchase);                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, class UTexture* Texture);                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
	// void OnPartySizeChanged(int32_t PartySize);                                                                              // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLogoImageChanged
	// void OnLogoImageChanged(bool bIsLoading, class UTexture* Texture);                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
	// void OnLocalPlayerPromotedToLeader();                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
	// void OnLocalPlayerDemoted();                                                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
	// void OnIsFavoriteChanged(bool bIsFavorite);                                                                              // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnFriendsPlayingChanged
	// void OnFriendsPlayingChanged(int32_t NumPlaying);                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
	// void OnActivityUnSelected__DelegateSignature();                                                                          // [0x246f7d8] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
	// void OnActivitySelected__DelegateSignature();                                                                            // [0x246f7d8] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity
	// bool IsModeSetActivity();                                                                                                // [0xc5aff2c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityLocked
	// bool IsActivityLocked();                                                                                                 // [0xc5afe68] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
	// bool IsActivityFavorited();                                                                                              // [0xc5afe44] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleShowActivityDetails
	// void HandleShowActivityDetails();                                                                                        // [0xc5afcdc] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0xc5afbb8] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetIsActivityLockedReason
	// EFortActivityIsLockedReason GetIsActivityLockedReason();                                                                 // [0xc5afa28] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                   // [0xc5af9ec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivitySelector
	// class UFortActivitySelector* GetActivitySelector();                                                                      // [0xc5af870] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivityCreatorDisplayText
	// FString GetActivityCreatorDisplayText();                                                                                 // [0xc5af830] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase
	// bool DoesActivityRequirePurchase();                                                                                      // [0xc5af7a4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.BroadcastOnActivityConfirmed
	// void BroadcastOnActivityConfirmed();                                                                                     // [0xc5af704] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileView
/// Size: 0x0000 (0x000C00 - 0x000C00)
class UFortActivityTileView : public UCommonTileView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.SetListenForMouseWheelInput
	// void SetListenForMouseWheelInput(bool bListenForInput);                                                                  // [0xc5b0368] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.RespondToVisibilityChange
	// void RespondToVisibilityChange(bool bIsVisible);                                                                         // [0xc5b0290] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileView.NavigateToTop
	// void NavigateToTop();                                                                                                    // [0xc5b01c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemBrowserRow
/// Size: 0x0050 (0x0003B0 - 0x000400)
class UFortDiscoverItemBrowserRow : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(class UFortDiscoverItemListView*)          ListView_Tiles                                              OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PageLeft                                             OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_PageRight                                            OFFSET(get<T>, {0x3C0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemListView
/// Size: 0x0150 (0x000290 - 0x0003E0)
class UFortDiscoverItemListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          OFFSET(get<float>, {0x378, 4, 0, 0})
	CMember(class UClass*)                             PlayWithFriendsEntryWidgetClass                             OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class UClass*)                             ActivityEntryWidgetClass                                    OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x390, 1, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(bool)                                      bCircularNavigationEnabled                                  OFFSET(get<bool>, {0x398, 1, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortDiscoverItemListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                                // [0xc5af9b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.ActivityLibraryComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UActivityLibraryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UFortActivitySelector*)              ActivitySelector                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserContext
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortActivityBrowserContext : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/DiscoveryBrowserUI.OverrideMatchmakingUIComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UOverrideMatchmakingUIComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FMatchmakingUIOverride)                    MatchmakingUIOverride                                       OFFSET(getStruct<T>, {0xA0, 64, 0, 0})
};

/// Struct /Script/DiscoveryBrowserUI.ColorSchemeParamaterValues
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FColorSchemeParamaterValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(class UMaterialParameterCollection*)       AlternateMaterialCollection                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TMap<FName, float>)                        ScalarParameterValues                                       OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParameterValues                                       OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Enum /Script/DiscoveryBrowserUI.EActivityBrowserTileStyle
/// Size: 0x04
enum class EActivityBrowserTileStyle : uint8_t
{
	EActivityBrowserTileStyle__Default                                               = 0,
	EActivityBrowserTileStyle__Minimal                                               = 1,
	EActivityBrowserTileStyle__Detailed                                              = 2,
	EActivityBrowserTileStyle__EActivityBrowserTileStyle_MAX                         = 3
};

