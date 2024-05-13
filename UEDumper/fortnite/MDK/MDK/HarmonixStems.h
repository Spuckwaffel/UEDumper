
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HarmonixMidi
/// dependency: MediaAssets

/// Class /Script/HarmonixStems.StemConfiguration
/// Size: 0x0010 (0x000028 - 0x000038)
class UStemConfiguration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FStemConfigurationAudioBus>)        Stems                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/HarmonixStems.StemmedMusicAsset
/// Size: 0x0018 (0x000028 - 0x000040)
class UStemmedMusicAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UMidiFile*)                          MidiFile                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UStemConfiguration*)                 StemConfiguration                                           OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/HarmonixStems.StemmedWavesAsset
/// Size: 0x0018 (0x000040 - 0x000058)
class UStemmedWavesAsset : public UStemmedMusicAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FWavesAssetStem>)                   WavesStems                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/HarmonixStems.StemmedMediaStreamAsset
/// Size: 0x0018 (0x000040 - 0x000058)
class UStemmedMediaStreamAsset : public UStemmedMusicAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TArray<FMediaStreamAssetStem>)             StreamStems                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/HarmonixStems.StemConfigurationAudioBus
/// Size: 0x0010 (0x000000 - 0x000010)
class FStemConfigurationAudioBus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     StemName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UAudioBus*)                          AudioBus                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/HarmonixStems.MusicAssetStemChannel
/// Size: 0x0008 (0x000000 - 0x000008)
class FMusicAssetStemChannel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SourceIndex                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LevelInDecibels                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixStems.WavesAssetStem
/// Size: 0x0020 (0x000000 - 0x000020)
class FWavesAssetStem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     StemName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class USoundWave*)                         SoundWave                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<float>)                             ChannelLevelsInDecibels                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/HarmonixStems.MediaStreamAssetStem
/// Size: 0x0018 (0x000000 - 0x000018)
class FMediaStreamAssetStem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     StemName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FMusicAssetStemChannel>)            Channels                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

