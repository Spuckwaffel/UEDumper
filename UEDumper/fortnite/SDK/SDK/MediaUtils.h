
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/MediaUtils.EMediaPlayerOptionBooleanOverride
/// Size: 0x04
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting                         = 0,
	EMediaPlayerOptionBooleanOverride__Enabled                                       = 1,
	EMediaPlayerOptionBooleanOverride__Disabled                                      = 2,
	EMediaPlayerOptionBooleanOverride__EMediaPlayerOptionBooleanOverride_MAX         = 3
};

/// Struct /Script/MediaUtils.MediaPlayerTrackOptions
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMediaPlayerTrackOptions
{ 
	int32_t                                            Audio;                                                      // 0x0000   (0x0004)  
	int32_t                                            Caption;                                                    // 0x0004   (0x0004)  
	int32_t                                            MetaData;                                                   // 0x0008   (0x0004)  
	int32_t                                            Script;                                                     // 0x000C   (0x0004)  
	int32_t                                            Subtitle;                                                   // 0x0010   (0x0004)  
	int32_t                                            Text;                                                       // 0x0014   (0x0004)  
	int32_t                                            Video;                                                      // 0x0018   (0x0004)  
};

/// Struct /Script/MediaUtils.MediaPlayerOptions
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMediaPlayerOptions
{ 
	FMediaPlayerTrackOptions                           Tracks;                                                     // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FTimespan                                          SeekTime;                                                   // 0x0020   (0x0008)  
	EMediaPlayerOptionBooleanOverride                  PlayOnOpen;                                                 // 0x0028   (0x0001)  
	EMediaPlayerOptionBooleanOverride                  Loop;                                                       // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x002A   (0x0006)  MISSED
};

