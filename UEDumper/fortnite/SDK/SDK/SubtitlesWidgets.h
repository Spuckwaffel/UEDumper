
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Overlay
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/SubtitlesWidgets.ESubtitleDisplayTextSize
/// Size: 0x06
enum class ESubtitleDisplayTextSize : uint8_t
{
	ESubtitleDisplayTextSize__ExtraSmall                                             = 0,
	ESubtitleDisplayTextSize__Small                                                  = 1,
	ESubtitleDisplayTextSize__Medium                                                 = 2,
	ESubtitleDisplayTextSize__Large                                                  = 3,
	ESubtitleDisplayTextSize__ExtraLarge                                             = 4,
	ESubtitleDisplayTextSize__ESubtitleDisplayTextSize_MAX                           = 5
};

/// Enum /Script/SubtitlesWidgets.ESubtitleDisplayTextColor
/// Size: 0x03
enum class ESubtitleDisplayTextColor : uint8_t
{
	ESubtitleDisplayTextColor__White                                                 = 0,
	ESubtitleDisplayTextColor__Yellow                                                = 1,
	ESubtitleDisplayTextColor__ESubtitleDisplayTextColor_MAX                         = 2
};

/// Enum /Script/SubtitlesWidgets.ESubtitleDisplayTextBorder
/// Size: 0x04
enum class ESubtitleDisplayTextBorder : uint8_t
{
	ESubtitleDisplayTextBorder__None                                                 = 0,
	ESubtitleDisplayTextBorder__Outline                                              = 1,
	ESubtitleDisplayTextBorder__DropShadow                                           = 2,
	ESubtitleDisplayTextBorder__ESubtitleDisplayTextBorder_MAX                       = 3
};

/// Enum /Script/SubtitlesWidgets.ESubtitleDisplayBackgroundOpacity
/// Size: 0x06
enum class ESubtitleDisplayBackgroundOpacity : uint8_t
{
	ESubtitleDisplayBackgroundOpacity__Clear                                         = 0,
	ESubtitleDisplayBackgroundOpacity__Low                                           = 1,
	ESubtitleDisplayBackgroundOpacity__Medium                                        = 2,
	ESubtitleDisplayBackgroundOpacity__High                                          = 3,
	ESubtitleDisplayBackgroundOpacity__Solid                                         = 4,
	ESubtitleDisplayBackgroundOpacity__ESubtitleDisplayBackgroundOpacity_MAX         = 5
};

/// Class /Script/SubtitlesWidgets.SubtitleDisplayOptions
/// Size: 0x0170 (0x000030 - 0x0001A0)
class USubtitleDisplayOptions : public UDataAsset
{ 
public:
	FSlateFontInfo                                     Font;                                                       // 0x0030   (0x0058)  
	int32_t                                            DisplayTextSizes;                                           // 0x0088   (0x0014)  
	FLinearColor                                       DisplayTextColors;                                          // 0x009C   (0x0020)  
	float                                              DisplayBorderSize;                                          // 0x00BC   (0x000C)  
	float                                              DisplayBackgroundOpacity;                                   // 0x00C8   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x00E0   (0x00C0)  
};

/// Struct /Script/SubtitlesWidgets.SubtitleFormat
/// Size: 0x0004 (0x000000 - 0x000004)
struct FSubtitleFormat
{ 
	ESubtitleDisplayTextSize                           SubtitleTextSize;                                           // 0x0000   (0x0001)  
	ESubtitleDisplayTextColor                          SubtitleTextColor;                                          // 0x0001   (0x0001)  
	ESubtitleDisplayTextBorder                         SubtitleTextBorder;                                         // 0x0002   (0x0001)  
	ESubtitleDisplayBackgroundOpacity                  SubtitleBackgroundOpacity;                                  // 0x0003   (0x0001)  
};

/// Class /Script/SubtitlesWidgets.SubtitleDisplay
/// Size: 0x0418 (0x000178 - 0x000590)
class USubtitleDisplay : public UWidget
{ 
public:
	FSubtitleFormat                                    Format;                                                     // 0x0178   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	class USubtitleDisplayOptions*                     Options;                                                    // 0x0180   (0x0008)  
	float                                              WrapTextAt;                                                 // 0x0188   (0x0004)  
	bool                                               bPreviewMode;                                               // 0x018C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x018D   (0x0003)  MISSED
	SDK_UNDEFINED(24,2724) /* FText */                 __um(PreviewText);                                          // 0x0190   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x01A8   (0x0008)  MISSED
	FTextBlockStyle                                    GeneratedStyle;                                             // 0x01B0   (0x0310)  
	FSlateBrush                                        GeneratedBackgroundBorder;                                  // 0x04C0   (0x00C0)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0580   (0x0010)  MISSED


	/// Functions
	// Function /Script/SubtitlesWidgets.SubtitleDisplay.HasSubtitles
	// bool HasSubtitles();                                                                                                  // [0x7e4a1a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SubtitlesWidgets.SubtitleDisplayNative
/// Size: 0x03F8 (0x000028 - 0x000420)
class USubtitleDisplayNative : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class USubtitleDisplayOptions*                     Options;                                                    // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTextBlockStyle                                    GeneratedStyle;                                             // 0x0040   (0x0310)  
	FSlateBrush                                        GeneratedBackgroundBorder;                                  // 0x0350   (0x00C0)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0410   (0x0010)  MISSED
};

/// Class /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortMediaSubtitlesPlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UOverlays*                                   SourceSubtitles;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED


	/// Functions
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
	// void Stop();                                                                                                          // [0x7e4a290] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
	// void SetSubtitles(class UOverlays* Subtitles);                                                                        // [0x7e4a208] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
	// void Play();                                                                                                          // [0x7e4a1f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
	// void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                            // [0x7e4a0b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SubtitlesWidgets.SubtitleDisplaySubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class USubtitleDisplaySubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0030   (0x0018)  MISSED
	FSubtitleFormat                                    SubtitleFormat;                                             // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

