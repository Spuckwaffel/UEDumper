
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EpicMediaUtilities.EpicMediaServerTime
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AEpicMediaServerTime : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:


	/// Functions
	// Function /Script/EpicMediaUtilities.EpicMediaServerTime.ServerRequestServerTime
	// void ServerRequestServerTime(double requestUtcTime);                                                                     // [0x8163c30] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/EpicMediaUtilities.EpicMediaServerTime.GetTimeUtc
	// bool GetTimeUtc(FDateTime& OutDateTime);                                                                                 // [0x8163b98] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicMediaUtilities.EpicMediaServerTime.ClientReportServerTime
	// void ClientReportServerTime(double requestUtcTime, double serverUtcTime);                                                // [0x8163a44] Net|NetReliableNative|Event|Public|NetClient 
};

/// Struct /Script/EpicMediaUtilities.EpicMediaImageDataExt
/// Size: 0x0030 (0x000000 - 0x000030)
class FEpicMediaImageDataExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   FullUrl                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioOnlyPeriodDataExt
/// Size: 0x0028 (0x000000 - 0x000028)
class FEpicMediaAudioOnlyPeriodDataExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bColorSet                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(double)                                    StartFrame                                                  OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    EndFrame                                                    OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaVolumeChangeDataExt
/// Size: 0x0028 (0x000000 - 0x000028)
class FEpicMediaVolumeChangeDataExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    Frame                                                       OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Level                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Lerp                                                        OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaPlaylistExt
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FEpicMediaPlaylistExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   Language                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Type                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   RelUrl                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Data                                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(double)                                    duration                                                    OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    FPS                                                         OFFSET(get<double>, {0x58, 8, 0, 0})
	CMember(TArray<FEpicMediaImageDataExt>)            Images                                                      OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FEpicMediaAudioOnlyPeriodDataExt>)  AudioOnlyPeriods                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FEpicMediaVolumeChangeDataExt>)     VolumeChanges                                               OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(double)                                    SkipBoundaryTime                                            OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(double)                                    PreEndEventTime                                             OFFSET(get<double>, {0x98, 8, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaRegionLockExt
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FEpicMediaRegionLockExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      AllowOnError                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Type                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FString>)                           AllowList                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FString>)                           DenyList                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Limits                                                      OFFSET(get<T>, {0x38, 80, 0, 0})
	SMember(FString)                                   ContentId                                                   OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataTrackIndicesExt
/// Size: 0x0010 (0x000000 - 0x000010)
class FEpicMediaAudioMetadataTrackIndicesExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           Indices                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataTrackExt
/// Size: 0x0050 (0x000000 - 0x000050)
class FEpicMediaAudioMetadataTrackExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FEpicMediaAudioMetadataTrackIndicesExt>) TrackData                                       OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataDataExt
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FEpicMediaAudioMetadataDataExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   ShortName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SongID                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Artist                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Album                                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   Genre                                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   Year                                                        OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(TMap<FString, int32_t>)                    Difficulty                                                  OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataExt
/// Size: 0x0130 (0x000000 - 0x000130)
class FEpicMediaAudioMetadataExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TMap<FString, FEpicMediaAudioMetadataTrackIndicesExt>) Tracks                                          OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<float>)                             Pans                                                        OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<float>)                             Volumes                                                     OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<char>)                              Midi                                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FEpicMediaAudioMetadataDataExt)            MetadataData                                                OFFSET(getStruct<T>, {0x80, 176, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaExtraMetadataExt
/// Size: 0x0068 (0x000000 - 0x000068)
class FEpicMediaExtraMetadataExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   AssetId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           BaseURLs                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   BaseURL                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(int64_t)                                   Version                                                     OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	DMember(int64_t)                                   ExpiresAt                                                   OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	DMember(bool)                                      bSupportsCaching                                            OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bSharelock                                                  OFFSET(get<bool>, {0x41, 1, 0, 0})
	SMember(FString)                                   UserContentProtection                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   Limits                                                      OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaMetadataExt
/// Size: 0x02F8 (0x000000 - 0x0002F8)
class FEpicMediaMetadataExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FEpicMediaPlaylistExt>)             Playlists                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FEpicMediaPlaylistExt>)             StateStreamPlaylists                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FEpicMediaPlaylistExt>)             SelectedPlaylists                                           OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Type                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Envelope                                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   Limits                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   Subtitles                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   UserContentProtection                                       OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      Sharelock                                                   OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      AudioOnly                                                   OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      PartySync                                                   OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      Live                                                        OFFSET(get<bool>, {0x89, 1, 0, 0})
	SMember(FString)                                   DenyHTTPCode                                                OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FEpicMediaRegionLockExt)                   RegionLockData                                              OFFSET(getStruct<T>, {0xA0, 168, 0, 0})
	SMember(FEpicMediaAudioMetadataExt)                AudioMetadata                                               OFFSET(getStruct<T>, {0x148, 304, 0, 0})
	DMember(bool)                                      bQuicksilverEP                                              OFFSET(get<bool>, {0x278, 1, 0, 0})
	SMember(FEpicMediaExtraMetadataExt)                ExtraMetadata                                               OFFSET(getStruct<T>, {0x280, 104, 0, 0})
};

