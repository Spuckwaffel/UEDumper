
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Struct /Script/MediaUtils.MediaPlayerTrackOptions
/// Size: 0x001C (0x000000 - 0x00001C)
class FMediaPlayerTrackOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   Audio                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Caption                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MetaData                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Script                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Subtitle                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Text                                                        OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   Video                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/MediaUtils.MediaPlayerOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FMediaPlayerOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FMediaPlayerTrackOptions)                  Tracks                                                      OFFSET(getStruct<T>, {0x0, 28, 0, 0})
	SMember(FTimespan)                                 SeekTime                                                    OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	CMember(EMediaPlayerOptionBooleanOverride)         PlayOnOpen                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EMediaPlayerOptionBooleanOverride)         Loop                                                        OFFSET(get<T>, {0x29, 1, 0, 0})
};

/// Enum /Script/MediaUtils.EMediaPlayerOptionBooleanOverride
/// Size: 0x04
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting                         = 0,
	EMediaPlayerOptionBooleanOverride__Enabled                                       = 1,
	EMediaPlayerOptionBooleanOverride__Disabled                                      = 2,
	EMediaPlayerOptionBooleanOverride__EMediaPlayerOptionBooleanOverride_MAX         = 3
};

