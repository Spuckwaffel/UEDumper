
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/SoundCueTemplates.ESoundContainerType
/// Size: 0x04
enum class ESoundContainerType : uint8_t
{
	ESoundContainerType__Concatenate                                                 = 0,
	ESoundContainerType__Randomize                                                   = 1,
	ESoundContainerType__Mix                                                         = 2,
	ESoundContainerType__ESoundContainerType_MAX                                     = 3
};

/// Class /Script/SoundCueTemplates.SoundCueTemplate
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueTemplate : public USoundCue
{ 
public:
};

/// Class /Script/SoundCueTemplates.SoundCueContainer
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueContainer : public USoundCueTemplate
{ 
public:
};

/// Class /Script/SoundCueTemplates.SoundCueDistanceCrossfade
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueDistanceCrossfade : public USoundCueTemplate
{ 
public:
};

/// Class /Script/SoundCueTemplates.SoundCueTemplateSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class USoundCueTemplateSettings : public UDeveloperSettings
{ 
public:
};

/// Struct /Script/SoundCueTemplates.SoundCueCrossfadeInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSoundCueCrossfadeInfo
{ 
	FDistanceDatum                                     DistanceInfo;                                               // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class USoundWave*                                  sound;                                                      // 0x0018   (0x0008)  
};

/// Struct /Script/SoundCueTemplates.SoundCueTemplateQualitySettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSoundCueTemplateQualitySettings
{ 
	SDK_UNDEFINED(24,14021) /* FText */                __um(DisplayName);                                          // 0x0000   (0x0018)  
	int32_t                                            MaxConcatenatedVariations;                                  // 0x0018   (0x0004)  
	int32_t                                            MaxRandomizedVariations;                                    // 0x001C   (0x0004)  
	int32_t                                            MaxMixVariations;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

