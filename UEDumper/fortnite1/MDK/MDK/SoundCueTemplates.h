
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/SoundCueTemplates.SoundCueTemplate
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueTemplate : public USoundCue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SoundCueTemplates.SoundCueContainer
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueContainer : public USoundCueTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SoundCueTemplates.SoundCueDistanceCrossfade
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueDistanceCrossfade : public USoundCueTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SoundCueTemplates.SoundCueTemplateSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class USoundCueTemplateSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/SoundCueTemplates.SoundCueCrossfadeInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundCueCrossfadeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDistanceDatum)                            DistanceInfo                                                OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	CMember(class USoundWave*)                         sound                                                       OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/SoundCueTemplates.SoundCueTemplateQualitySettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundCueTemplateQualitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   MaxConcatenatedVariations                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MaxRandomizedVariations                                     OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   MaxMixVariations                                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Enum /Script/SoundCueTemplates.ESoundContainerType
/// Size: 0x04
enum class ESoundContainerType : uint8_t
{
	ESoundContainerType__Concatenate                                                 = 0,
	ESoundContainerType__Randomize                                                   = 1,
	ESoundContainerType__Mix                                                         = 2,
	ESoundContainerType__ESoundContainerType_MAX                                     = 3
};

