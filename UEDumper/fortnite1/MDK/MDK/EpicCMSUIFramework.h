
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
/// Size: 0x00F0 (0x0003A0 - 0x000490)
class UEpicCMSImage : public UCommonLazyImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FMulticastInlineDelegate)                  OnImageLoadingComplete                                      OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	DMember(bool)                                      bMatchImageSize                                             OFFSET(get<bool>, {0x3B0, 1, 0, 0})
	SMember(FSlateBrush)                               LoadingFailFallback                                         OFFSET(getStruct<T>, {0x3C0, 192, 0, 0})
	CMember(class UTexture2D*)                         ExternalMedia                                               OFFSET(get<T>, {0x480, 8, 0, 0})
	DMember(bool)                                      bDownloadingExternalMedia                                   OFFSET(get<bool>, {0x488, 1, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSImage.SetMediaURL
	// void SetMediaURL(FString MediaUrl);                                                                                      // [0x823157c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EpicCMSUIFramework.EpicCMSLayoutBase
/// Size: 0x0068 (0x0002C8 - 0x000330)
class UEpicCMSLayoutBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(TArray<FSlotDescription>)                  CarouselSlotDescriptions                                    OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(class UClass*)                             CarouselClass                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
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
/// Size: 0x0078 (0x000540 - 0x0005B8)
class UEpicCMSScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	SMember(FString)                                   TileSetFieldName                                            OFFSET(getStruct<T>, {0x540, 16, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               TileTypeToTileClassDataTable                                OFFSET(get<T>, {0x550, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   LayoutErrorClass                                            OFFSET(get<T>, {0x570, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               LayoutTypeToLayoutClassDataTable                            OFFSET(get<T>, {0x590, 32, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSSimpleMessage
/// Size: 0x0018 (0x0002F0 - 0x000308)
class UEpicCMSSimpleMessage : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(class UCommonTextBlock*)                   TitleText                                                   OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   BodyText                                                    OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UEpicCMSImage*)                      PrimaryImage                                                OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileBase
/// Size: 0x0110 (0x0014D0 - 0x0015E0)
class UEpicCMSTileBase : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	CMember(class UClass*)                             DefaultTitleTextStyle                                       OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(class UClass*)                             FeaturedTitleTextStyle                                      OFFSET(get<T>, {0x14E0, 8, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x14E8, 16, 0, 0})
	SMember(FString)                                   Link                                                        OFFSET(getStruct<T>, {0x14F8, 16, 0, 0})
	DMember(bool)                                      bDownloadingExternalMedia                                   OFFSET(get<bool>, {0x1508, 1, 0, 0})
	DMember(bool)                                      bRefreshingMcpCatalog                                       OFFSET(get<bool>, {0x1509, 1, 0, 0})
	CMember(class UTexture2D*)                         ExternalMedia                                               OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   LazyImage_Icon                                              OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   TitleTextBlock                                              OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   SubtitleTextBlock                                           OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(class UCommonTextBlock*)                   EyebrowTextBlock                                            OFFSET(get<T>, {0x1548, 8, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileBase.Launch
	// void Launch();                                                                                                           // [0x823147c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileCarousel
/// Size: 0x0050 (0x0002C8 - 0x000318)
class UEpicCMSTileCarousel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FSlateSound)                               PreviousButtonSound                                         OFFSET(getStruct<T>, {0x2C8, 24, 0, 0})
	SMember(FSlateSound)                               NextButtonSound                                             OFFSET(getStruct<T>, {0x2E0, 24, 0, 0})
	CMember(class UCommonWidgetCarousel*)              Carousel                                                    OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class UWidget*)                            NextPageButton                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class UWidget*)                            PreviousPageButton                                          OFFSET(get<T>, {0x308, 8, 0, 0})
	DMember(bool)                                      bShouldShowNavigationOnlyOnHover                            OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bInputActionsForPaging                                      OFFSET(get<bool>, {0x311, 1, 0, 0})
	DMember(bool)                                      bIsShowingNavigation                                        OFFSET(get<bool>, {0x312, 1, 0, 0})


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
	// void SetCurrentPageByIndex(int32_t PageIndex);                                                                           // [0x82314b8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x82314a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
	// void NextPage();                                                                                                         // [0x8231490] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
	// void NavigationVisibilityChanged(bool bShowNavigation);                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
	// void HandleTilePageAdded(class UWidget* TileWidget);                                                                     // [0x6cdc170] Native|Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
	// int32_t GetCurrentPageIndex();                                                                                           // [0x8231454] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
	// void BeginAutoScrolling();                                                                                               // [0x8231420] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
	// void AddTilePage(class UWidget* TilePageWidget);                                                                         // [0x823124c] Final|Native|Public|BlueprintCallable 
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

