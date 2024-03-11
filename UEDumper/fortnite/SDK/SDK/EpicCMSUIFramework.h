
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
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/EpicCMSUIFramework.EDateType
/// Size: 0x04
enum class EDateType : uint8_t
{
	EDateType__None                                                                  = 0,
	EDateType__Coming                                                                = 1,
	EDateType__Ending                                                                = 2,
	EDateType__EDateType_MAX                                                         = 3
};

/// Class /Script/EpicCMSUIFramework.EpicCMSImage
/// Size: 0x00F0 (0x0003B0 - 0x0004A0)
class UEpicCMSImage : public UCommonLazyImage
{ 
public:
	SDK_UNDEFINED(16,9494) /* FMulticastInlineDelegate */ __um(OnImageLoadingComplete);                            // 0x03B0   (0x0010)  
	bool                                               bMatchImageSize;                                            // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x03C1   (0x000F)  MISSED
	FSlateBrush                                        LoadingFailFallback;                                        // 0x03D0   (0x00C0)  
	class UTexture2D*                                  ExternalMedia;                                              // 0x0490   (0x0008)  
	bool                                               bDownloadingExternalMedia;                                  // 0x0498   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0499   (0x0007)  MISSED


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSImage.SetMediaURL
	// void SetMediaURL(FString MediaUrl);                                                                                   // [0x1e700e8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EpicCMSUIFramework.SlotDescription
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSlotDescription
{ 
	FName                                              SlotName;                                                   // 0x0000   (0x0004)  
	int32_t                                            ColumnCount;                                                // 0x0004   (0x0004)  
	int32_t                                            RowCount;                                                   // 0x0008   (0x0004)  
	bool                                               bUseFeaturedTextStyle;                                      // 0x000C   (0x0001)  
	bool                                               bEnableAutoScroll;                                          // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Class /Script/EpicCMSUIFramework.EpicCMSLayoutBase
/// Size: 0x0068 (0x0002C0 - 0x000328)
class UEpicCMSLayoutBase : public UUserWidget
{ 
public:
	TArray<FSlotDescription>                           CarouselSlotDescriptions;                                   // 0x02C0   (0x0010)  
	class UClass*                                      CarouselClass;                                              // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x02D8   (0x0050)  MISSED
};

/// Class /Script/EpicCMSUIFramework.EpicCMSManager
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UEpicCMSManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Class /Script/EpicCMSUIFramework.EpicCMSScreenBase
/// Size: 0x0078 (0x000538 - 0x0005B0)
class UEpicCMSScreenBase : public UCommonActivatablePanelLegacy
{ 
public:
	SDK_UNDEFINED(16,9495) /* FString */               __um(TileSetFieldName);                                     // 0x0538   (0x0010)  
	SDK_UNDEFINED(32,9496) /* TWeakObjectPtr<UDataTable*> */ __um(TileTypeToTileClassDataTable);                   // 0x0548   (0x0020)  
	SDK_UNDEFINED(32,9497) /* TWeakObjectPtr<UClass*> */ __um(LayoutErrorClass);                                   // 0x0568   (0x0020)  
	SDK_UNDEFINED(32,9498) /* TWeakObjectPtr<UDataTable*> */ __um(LayoutTypeToLayoutClassDataTable);               // 0x0588   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x05A8   (0x0008)  MISSED
};

/// Class /Script/EpicCMSUIFramework.EpicCMSSimpleMessage
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UEpicCMSSimpleMessage : public UCommonUserWidget
{ 
public:
	class UCommonTextBlock*                            TitleText;                                                  // 0x02E8   (0x0008)  
	class UCommonTextBlock*                            BodyText;                                                   // 0x02F0   (0x0008)  
	class UEpicCMSImage*                               PrimaryImage;                                               // 0x02F8   (0x0008)  
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileBase
/// Size: 0x0110 (0x0014E0 - 0x0015F0)
class UEpicCMSTileBase : public UCommonButtonLegacy
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x14E0   (0x0008)  MISSED
	class UClass*                                      DefaultTitleTextStyle;                                      // 0x14E8   (0x0008)  
	class UClass*                                      FeaturedTitleTextStyle;                                     // 0x14F0   (0x0008)  
	SDK_UNDEFINED(24,9499) /* FText */                 __um(Title);                                                // 0x14F8   (0x0018)  
	SDK_UNDEFINED(16,9500) /* FString */               __um(Link);                                                 // 0x1510   (0x0010)  
	bool                                               bDownloadingExternalMedia;                                  // 0x1520   (0x0001)  
	bool                                               bRefreshingMcpCatalog;                                      // 0x1521   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x1522   (0x0006)  MISSED
	class UTexture2D*                                  ExternalMedia;                                              // 0x1528   (0x0008)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x1530   (0x0018)  MISSED
	class UCommonLazyImage*                            LazyImage_Icon;                                             // 0x1548   (0x0008)  
	class UCommonTextBlock*                            TitleTextBlock;                                             // 0x1550   (0x0008)  
	class UCommonTextBlock*                            SubtitleTextBlock;                                          // 0x1558   (0x0008)  
	class UCommonTextBlock*                            EyebrowTextBlock;                                           // 0x1560   (0x0008)  
	unsigned char                                      UnknownData03_6[0x88];                                      // 0x1568   (0x0088)  MISSED


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileBase.Launch
	// void Launch();                                                                                                        // [0x7c2bbe8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/EpicCMSUIFramework.EpicCMSTileCarousel
/// Size: 0x0050 (0x0002C0 - 0x000310)
class UEpicCMSTileCarousel : public UUserWidget
{ 
public:
	FSlateSound                                        PreviousButtonSound;                                        // 0x02C0   (0x0018)  
	FSlateSound                                        NextButtonSound;                                            // 0x02D8   (0x0018)  
	class UCommonWidgetCarousel*                       Carousel;                                                   // 0x02F0   (0x0008)  
	class UWidget*                                     NextPageButton;                                             // 0x02F8   (0x0008)  
	class UWidget*                                     PreviousPageButton;                                         // 0x0300   (0x0008)  
	bool                                               bShouldShowNavigationOnlyOnHover;                           // 0x0308   (0x0001)  
	bool                                               bInputActionsForPaging;                                     // 0x0309   (0x0001)  
	bool                                               bIsShowingNavigation;                                       // 0x030A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x030B   (0x0005)  MISSED


	/// Functions
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
	// void SetCurrentPageByIndex(int32_t PageIndex);                                                                        // [0x7c2bc24] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
	// void PreviousPage();                                                                                                  // [0x7c2bc10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
	// void NextPage();                                                                                                      // [0x7c2bbfc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
	// void NavigationVisibilityChanged(bool bShowNavigation);                                                               // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
	// void HandleTilePageAdded(class UWidget* TileWidget);                                                                  // [0x7c2bb64] Native|Event|Protected|BlueprintEvent 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
	// int32_t GetCurrentPageIndex();                                                                                        // [0x7c2bb3c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
	// void BeginAutoScrolling();                                                                                            // [0x7c2bb08] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
	// void AddTilePage(class UWidget* TilePageWidget);                                                                      // [0x7c2b974] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSTileTypeMapping
/// Size: 0x0020 (0x000008 - 0x000028)
struct FEpicCMSTileTypeMapping : FTableRowBase
{ 
	SDK_UNDEFINED(32,9501) /* TWeakObjectPtr<UClass*> */ __um(TileClass);                                          // 0x0008   (0x0020)  
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSPage
/// Size: 0x0070 (0x000000 - 0x000070)
struct FEpicCMSPage
{ 
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/EpicCMSUIFramework.EpicCMSLayoutTypeMapping
/// Size: 0x0020 (0x000008 - 0x000028)
struct FEpicCMSLayoutTypeMapping : FTableRowBase
{ 
	SDK_UNDEFINED(32,9502) /* TWeakObjectPtr<UClass*> */ __um(LayoutType);                                         // 0x0008   (0x0020)  
};

/// Struct /Script/EpicCMSUIFramework.TileDefinition
/// Size: 0x0088 (0x000000 - 0x000088)
struct FTileDefinition
{ 
	SDK_UNDEFINED(16,9503) /* FString */               __um(TypeString);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,9504) /* FString */               __um(Title);                                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,9505) /* FString */               __um(Subtitle);                                             // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,9506) /* FString */               __um(Eyebrow);                                              // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,9507) /* FString */               __um(Link);                                                 // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,9508) /* FString */               __um(GroupId);                                              // 0x0050   (0x0010)  
	FDateTime                                          Countdown;                                                  // 0x0060   (0x0008)  
	EDateType                                          CountdownType;                                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	SDK_UNDEFINED(16,9509) /* FString */               __um(MediaUrl);                                             // 0x0070   (0x0010)  
	bool                                               IsVisible;                                                  // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

