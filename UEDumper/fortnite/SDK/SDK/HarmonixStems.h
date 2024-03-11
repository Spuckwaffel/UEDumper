
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HarmonixMidi
/// dependency: MediaAssets

/// Struct /Script/HarmonixStems.StemConfigurationAudioBus
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStemConfigurationAudioBus
{ 
	FName                                              StemName;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UAudioBus*                                   AudioBus;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/HarmonixStems.StemConfiguration
/// Size: 0x0010 (0x000028 - 0x000038)
class UStemConfiguration : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FStemConfigurationAudioBus>                 Stems;                                                      // 0x0028   (0x0010)  
};

/// Class /Script/HarmonixStems.StemmedMusicAsset
/// Size: 0x0018 (0x000028 - 0x000040)
class UStemmedMusicAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class UMidiFile*                                   MidiFile;                                                   // 0x0030   (0x0008)  
	class UStemConfiguration*                          StemConfiguration;                                          // 0x0038   (0x0008)  
};

/// Struct /Script/HarmonixStems.WavesAssetStem
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWavesAssetStem
{ 
	FName                                              StemName;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class USoundWave*                                  SoundWave;                                                  // 0x0008   (0x0008)  
	TArray<float>                                      ChannelLevelsInDecibels;                                    // 0x0010   (0x0010)  
};

/// Class /Script/HarmonixStems.StemmedWavesAsset
/// Size: 0x0018 (0x000040 - 0x000058)
class UStemmedWavesAsset : public UStemmedMusicAsset
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0040   (0x0008)  MISSED
	TArray<FWavesAssetStem>                            WavesStems;                                                 // 0x0048   (0x0010)  
};

/// Struct /Script/HarmonixStems.MusicAssetStemChannel
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMusicAssetStemChannel
{ 
	int32_t                                            SourceIndex;                                                // 0x0000   (0x0004)  
	float                                              LevelInDecibels;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/HarmonixStems.MediaStreamAssetStem
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMediaStreamAssetStem
{ 
	FName                                              StemName;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMusicAssetStemChannel>                     Channels;                                                   // 0x0008   (0x0010)  
};

/// Class /Script/HarmonixStems.StemmedMediaStreamAsset
/// Size: 0x0018 (0x000040 - 0x000058)
class UStemmedMediaStreamAsset : public UStemmedMusicAsset
{ 
public:
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0040   (0x0008)  
	TArray<FMediaStreamAssetStem>                      StreamStems;                                                // 0x0048   (0x0010)  
};

