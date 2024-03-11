
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioAnalyzer.AudioAnalyzerAssetBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerAssetBase : public UObject
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzer
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UAudioAnalyzer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UAudioBus*                                   AudioBus;                                                   // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UAudioAnalyzerSubsystem*                     AudioAnalyzerSubsystem;                                     // 0x0038   (0x0008)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x0040   (0x0060)  MISSED


	/// Functions
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StopAnalyzing
	// void StopAnalyzing(class UObject* WorldContextObject);                                                                // [0xa1a83b0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StartAnalyzing
	// void StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);                           // [0xa1a81e8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0050 (0x000028 - 0x000078)
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{ 
public:
	class USoundWave*                                  sound;                                                      // 0x0028   (0x0008)  
	float                                              DurationInSeconds;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x44];                                      // 0x0034   (0x0044)  MISSED
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{ 
public:
	TArray<class UAudioAnalyzer*>                      AudioAnalyzers;                                             // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

