
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
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/EpicCMSUIFramework.EpicCMSImage
/// Size: 0x00F0 (0x0003B0 - 0x0004A0)
class UEpicCMSImage : public UCommonLazyImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	SMember(FMulticastInlineDelegate)                  OnImageLoadingComplete                                      OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	DMember(bool)                                      bMatchImageSize                                             OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	SMember(FSlateBrush)                               LoadingFailFallback                                         OFFSET(getStruct<T>, {0x3D0, 192, 0, 0})
	CMember(class UTexture2D*)                         ExternalMedia                                               OFFSET(get<T>, {0x490, 8, 0, 0})
	DMember(bool)                                      bDownloadingExternalMedia                                   OFFSET(get<bool>, {0x498, 1, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSImage.SetMediaURL
	// void SetMediaURL(FString MediaUrl);                                                                                      // [0x80900ec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EpicCMSUIFramework.EpicCMSLayoutBase
/// Size: 0x0068 (0x0002C0 - 0x000328)
class UEpicCMSLayoutBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TArray<FSlotDescription>)                  CarouselSlotDescriptions                                    OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(class UClass*)                             CarouselClass                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSManager
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UEpicCMSManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/EpicCMSUIFramework.EpicCMSScreenBase
/// Size: 0x0078 (0x000538 - 0x0005B0)
class UEpicCMSScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	SMember(FString)                                   TileSetFieldName                                            OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               TileTypeToTileClassDataTable                                OFFSET(get<T>, {0x548, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   LayoutErrorClass                                            OFFSET(get<T>, {0x568, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               LayoutTypeToLayoutClassDataTable                            OFFSET(get<T>, {0x588, 32, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSSimpleMessage
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UEpicCMSSimpleMessage : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UCommonTextBlock*)                   TitleText                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   BodyText                                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UEpicCMSImage*)                      PrimaryImage                                                OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileBase
/// Size: 0x0110 (0x0014E0 - 0x0015F0)
class UEpicCMSTileBase : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5616;

public:
	CMember(class UClass*)                             DefaultTitleTextStyle                                       OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(class UClass*)                             FeaturedTitleTextStyle                                      OFFSET(get<T>, {0x14F0, 8, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x14F8, 24, 0, 0})
	SMember(FString)                                   Link                                                        OFFSET(getStruct<T>, {0x1510, 16, 0, 0})
	DMember(bool)                                      bDownloadingExternalMedia                                   OFFSET(get<bool>, {0x1520, 1, 0, 0})
	DMember(bool)                                      bRefreshingMcpCatalog                                       OFFSET(get<bool>, {0x1521, 1, 0, 0})
	CMember(class UTexture2D*)                         ExternalMedia                                               OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   LazyImage_Icon                                              OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TitleTextBlock                                              OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   SubtitleTextBlock                                           OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   EyebrowTextBlock                                            OFFSET(get<T>, {0x1560, 8, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileBase.Launch
	// void Launch();                                                                                                           // [0x808ffec] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileCarousel
/// Size: 0x0050 (0x0002C0 - 0x000310)
class UEpicCMSTileCarousel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FSlateSound)                               PreviousButtonSound                                         OFFSET(getStruct<T>, {0x2C0, 24, 0, 0})
	SMember(FSlateSound)                               NextButtonSound                                             OFFSET(getStruct<T>, {0x2D8, 24, 0, 0})
	CMember(class UCommonWidgetCarousel*)              Carousel                                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UWidget*)                            NextPageButton                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UWidget*)                            PreviousPageButton                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bShouldShowNavigationOnlyOnHover                            OFFSET(get<bool>, {0x308, 1, 0, 0})
	DMember(bool)                                      bInputActionsForPaging                                      OFFSET(get<bool>, {0x309, 1, 0, 0})
	DMember(bool)                                      bIsShowingNavigation                                        OFFSET(get<bool>, {0x30A, 1, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
	// void SetCurrentPageByIndex(int32_t PageIndex);                                                                           // [0x8090028] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x8090014] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
	// void NextPage();                                                                                                         // [0x8090000] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
	// void NavigationVisibilityChanged(bool bShowNavigation);                                                                  // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
	// void HandleTilePageAdded(class UWidget* TileWidget);                                                                     // [0x6d61a28] Native|Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
	// int32_t GetCurrentPageIndex();                                                                                           // [0x808ffc4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
	// void BeginAutoScrolling();                                                                                               // [0x808ff90] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
	// void AddTilePage(class UWidget* TilePageWidget);                                                                         // [0x808fdbc] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSTileTypeMapping
/// Size: 0x0020 (0x000008 - 0x000028)
class FEpicCMSTileTypeMapping : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UClass*>)                   TileClass                                                   OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.SlotDescription
/// Size: 0x0010 (0x000000 - 0x000010)
class FSlotDescription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ColumnCount                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   RowCount                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseFeaturedTextStyle                                       OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bEnableAutoScroll                                           OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSPage
/// Size: 0x0070 (0x000000 - 0x000070)
class FEpicCMSPage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSLayoutTypeMapping
/// Size: 0x0020 (0x000008 - 0x000028)
class FEpicCMSLayoutTypeMapping : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UClass*>)                   LayoutType                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EpicCMSUIFramework.TileDefinition
/// Size: 0x0088 (0x000000 - 0x000088)
class FTileDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   TypeString                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Subtitle                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Eyebrow                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Link                                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   GroupId                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FDateTime)                                 Countdown                                                   OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(EDateType)                                 CountdownType                                               OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FString)                                   MediaUrl                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      IsVisible                                                   OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Enum /Script/EpicCMSUIFramework.EDateType
/// Size: 0x04
enum class EDateType : uint8_t
{
	EDateType__None                                                                  = 0,
	EDateType__Coming                                                                = 1,
	EDateType__Ending                                                                = 2,
	EDateType__EDateType_MAX                                                         = 3
};

