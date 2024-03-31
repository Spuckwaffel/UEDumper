
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/REVRuntime.REVComponent
/// Size: 0x0030 (0x000880 - 0x0008B0)
class UREVComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	CMember(class UREVModel*)                          Model                                                       OFFSET(get<T>, {0x888, 8, 0, 0})
	CMember(class URevSettings*)                       SimSettings                                                 OFFSET(get<T>, {0x890, 8, 0, 0})
	DMember(float)                                     PitchMultiplier                                             OFFSET(get<float>, {0x898, 4, 0, 0})


	/// Functions
	// Function /Script/REVRuntime.REVComponent.UpdateSimSettings
	// void UpdateSimSettings();                                                                                                // [0xae8b0f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/REVRuntime.REVComponent.UpdateParameters
	// void UpdateParameters(float InPitch, float InRPM, float InThrottle, float InVelocity, int32_t InGear, bool bInEnableShifting); // [0xae8adac] Final|Native|Public|BlueprintCallable 
	// Function /Script/REVRuntime.REVComponent.SetSettings
	// void SetSettings(class URevSettings* InSettings);                                                                        // [0xae8acd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/REVRuntime.REVComponent.SetRevModel
	// void SetRevModel(class UREVModel* InModel);                                                                              // [0x42a87a8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/REVRuntime.REVModel
/// Size: 0x0048 (0x000028 - 0x000070)
class UREVModel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     SampleRate                                                  OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   NumChannels                                                 OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Class /Script/REVRuntime.RevSettings
/// Size: 0x0058 (0x000028 - 0x000080)
class URevSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     UpShiftDuration                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     UpShiftAttackDuration                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     UpShiftAttackVolumeSpike                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UpShiftAttackRPM                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     UpShiftAttackThrottleTime                                   OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     UpShiftWobblePitchFreq                                      OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     UpShiftWobblePitchAmp                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      UpShiftWobbleEnabled                                        OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     UpShiftWobbleVolFreq                                        OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     UpShiftWobbleVolAmp                                         OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     UpShiftWobbleDuration                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     DownShiftDuration                                           OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     PopDuration                                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     ClutchRPMSpike                                              OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     ClutchRPMSpikeDuration                                      OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     ClutchRPMMergeTime                                          OFFSET(get<float>, {0x6C, 4, 0, 0})


	/// Functions
	// Function /Script/REVRuntime.RevSettings.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0xae8b0e4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

