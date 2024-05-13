
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/Harmonix.HarmonixBlueprintUtil
/// Size: 0x0000 (0x000028 - 0x000028)
class UHarmonixBlueprintUtil : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Harmonix.HarmonixBlueprintUtil.SetMeasuredVideoToAudioRenderOffsetMs
	// void SetMeasuredVideoToAudioRenderOffsetMs(float Milliseconds);                                                          // [0xb653c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Harmonix.HarmonixBlueprintUtil.SetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs
	// void SetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs(float Milliseconds);                                      // [0xb653be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Harmonix.HarmonixBlueprintUtil.GetMeasuredVideoToAudioRenderOffsetMs
	// float GetMeasuredVideoToAudioRenderOffsetMs();                                                                           // [0xb653bb8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Harmonix.HarmonixBlueprintUtil.GetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs
	// float GetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs();                                                       // [0xb653b90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Harmonix.HarmonixDeveloperSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UHarmonixDeveloperSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Harmonix.HarmonixPluginSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UHarmonixPluginSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/Harmonix.ECalibratedMusicTimebase
/// Size: 0x03
enum class ECalibratedMusicTimebase : uint8_t
{
	ECalibratedMusicTimebase__AudioRenderTime                                        = 0,
	ECalibratedMusicTimebase__ExperiencedTime                                        = 1,
	ECalibratedMusicTimebase__VideoRenderTime                                        = 2
};

