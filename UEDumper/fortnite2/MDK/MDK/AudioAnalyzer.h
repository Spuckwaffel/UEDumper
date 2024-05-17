
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioAnalyzer.AudioAnalyzerAssetBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerAssetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzer
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UAudioAnalyzer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UAudioBus*)                          AudioBus                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UAudioAnalyzerSubsystem*)            AudioAnalyzerSubsystem                                      OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StopAnalyzing
	// void StopAnalyzing(class UObject* WorldContextObject);                                                                   // [0xb414868] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StartAnalyzing
	// void StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);                              // [0xb414734] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0050 (0x000028 - 0x000078)
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class USoundWave*)                         sound                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     DurationInSeconds                                           OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UAudioAnalyzer*>)             AudioAnalyzers                                              OFFSET(get<T>, {0x30, 16, 0, 0})
};

