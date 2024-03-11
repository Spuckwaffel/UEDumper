
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/Harmonix.ECalibratedMusicTimebase
/// Size: 0x04
enum class ECalibratedMusicTimebase : uint8_t
{
	ECalibratedMusicTimebase__AudioRenderTime                                        = 0,
	ECalibratedMusicTimebase__ExperiencedTime                                        = 1,
	ECalibratedMusicTimebase__VideoRenderTime                                        = 2,
	ECalibratedMusicTimebase__ECalibratedMusicTimebase_MAX                           = 3
};

/// Class /Script/Harmonix.HarmonixBlueprintUtil
/// Size: 0x0000 (0x000028 - 0x000028)
class UHarmonixBlueprintUtil : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Harmonix.HarmonixBlueprintUtil.SetMeasuredVideoToAudioRenderOffsetMs
	// void SetMeasuredVideoToAudioRenderOffsetMs(float Milliseconds);                                                       // [0xa3d8ec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Harmonix.HarmonixBlueprintUtil.SetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs
	// void SetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs(float Milliseconds);                                   // [0xa3d8e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Harmonix.HarmonixBlueprintUtil.GetMeasuredVideoToAudioRenderOffsetMs
	// float GetMeasuredVideoToAudioRenderOffsetMs();                                                                        // [0xa3d8e18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Harmonix.HarmonixBlueprintUtil.GetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs
	// float GetMeasuredUserExperienceAndReactionToAudioRenderOffsetMs();                                                    // [0xa3d8df0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Harmonix.HarmonixDeveloperSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UHarmonixDeveloperSettings : public UObject
{ 
public:
};

/// Class /Script/Harmonix.HarmonixPluginSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UHarmonixPluginSettings : public UDeveloperSettings
{ 
public:
};

