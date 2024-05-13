
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlatformRuntimeAudioCompressionOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bOverrideCompressionTimes                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     DurationThreshold                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxNumRandomBranches                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SoundCueQualityIndex                                        OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Enum /Script/AudioPlatformConfiguration.ESoundwaveSampleRateSettings
/// Size: 0x06
enum class ESoundwaveSampleRateSettings : uint8_t
{
	ESoundwaveSampleRateSettings__Max                                                = 0,
	ESoundwaveSampleRateSettings__High                                               = 1,
	ESoundwaveSampleRateSettings__Medium                                             = 2,
	ESoundwaveSampleRateSettings__Low                                                = 3,
	ESoundwaveSampleRateSettings__Min                                                = 4,
	ESoundwaveSampleRateSettings__MatchDevice_DEPRECATED                             = 5
};

