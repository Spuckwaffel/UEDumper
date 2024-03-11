
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EpicMediaUtilities.EpicMediaServerTime
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AEpicMediaServerTime : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0290   (0x0018)  MISSED


	/// Functions
	// Function /Script/EpicMediaUtilities.EpicMediaServerTime.ServerRequestServerTime
	// void ServerRequestServerTime(double requestUtcTime);                                                                  // [0x7d816d8] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/EpicMediaUtilities.EpicMediaServerTime.GetTimeUtc
	// bool GetTimeUtc(FDateTime& OutDateTime);                                                                              // [0x7d81640] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicMediaUtilities.EpicMediaServerTime.ClientReportServerTime
	// void ClientReportServerTime(double requestUtcTime, double serverUtcTime);                                             // [0x7d81568] Net|NetReliableNative|Event|Public|NetClient 
};

/// Struct /Script/EpicMediaUtilities.EpicMediaImageDataExt
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEpicMediaImageDataExt
{ 
	SDK_UNDEFINED(16,2010) /* FString */               __um(URL);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2011) /* FString */               __um(FullUrl);                                              // 0x0010   (0x0010)  
	int32_t                                            Width;                                                      // 0x0020   (0x0004)  
	int32_t                                            Height;                                                     // 0x0024   (0x0004)  
	float                                              AspectRatio;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioOnlyPeriodDataExt
/// Size: 0x0028 (0x000000 - 0x000028)
struct FEpicMediaAudioOnlyPeriodDataExt
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	bool                                               bColorSet;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	double                                             StartFrame;                                                 // 0x0018   (0x0008)  
	double                                             EndFrame;                                                   // 0x0020   (0x0008)  
};

/// Struct /Script/EpicMediaUtilities.EpicMediaVolumeChangeDataExt
/// Size: 0x0028 (0x000000 - 0x000028)
struct FEpicMediaVolumeChangeDataExt
{ 
	double                                             Frame;                                                      // 0x0000   (0x0008)  
	double                                             Level;                                                      // 0x0008   (0x0008)  
	double                                             Lerp;                                                       // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/EpicMediaUtilities.EpicMediaPlaylistExt
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FEpicMediaPlaylistExt
{ 
	SDK_UNDEFINED(16,2012) /* FString */               __um(Language);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2013) /* FString */               __um(Type);                                                 // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2014) /* FString */               __um(URL);                                                  // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,2015) /* FString */               __um(RelUrl);                                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2016) /* FString */               __um(Data);                                                 // 0x0040   (0x0010)  
	double                                             duration;                                                   // 0x0050   (0x0008)  
	double                                             FPS;                                                        // 0x0058   (0x0008)  
	TArray<FEpicMediaImageDataExt>                     Images;                                                     // 0x0060   (0x0010)  
	TArray<FEpicMediaAudioOnlyPeriodDataExt>           AudioOnlyPeriods;                                           // 0x0070   (0x0010)  
	TArray<FEpicMediaVolumeChangeDataExt>              VolumeChanges;                                              // 0x0080   (0x0010)  
	double                                             SkipBoundaryTime;                                           // 0x0090   (0x0008)  
	double                                             PreEndEventTime;                                            // 0x0098   (0x0008)  
};

/// Struct /Script/EpicMediaUtilities.EpicMediaRegionLockExt
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FEpicMediaRegionLockExt
{ 
	bool                                               AllowOnError;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2017) /* FString */               __um(Type);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2018) /* TArray<FString> */       __um(AllowList);                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2019) /* TArray<FString> */       __um(DenyList);                                             // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,2020) /* TMap<FString, FString> */ __um(Limits);                                              // 0x0038   (0x0050)  
	SDK_UNDEFINED(16,2021) /* FString */               __um(ContentId);                                            // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0098   (0x0010)  MISSED
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataTrackIndicesExt
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEpicMediaAudioMetadataTrackIndicesExt
{ 
	TArray<int32_t>                                    Indices;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataTrackExt
/// Size: 0x0050 (0x000000 - 0x000050)
struct FEpicMediaAudioMetadataTrackExt
{ 
	SDK_UNDEFINED(80,2022) /* TMap<FString, FEpicMediaAudioMetadataTrackIndicesExt> */ __um(TrackData);            // 0x0000   (0x0050)  
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataDataExt
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FEpicMediaAudioMetadataDataExt
{ 
	SDK_UNDEFINED(16,2023) /* FString */               __um(ShortName);                                            // 0x0000   (0x0010)  
	int32_t                                            SongID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2024) /* FString */               __um(Title);                                                // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2025) /* FString */               __um(Artist);                                               // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2026) /* FString */               __um(Album);                                                // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,2027) /* FString */               __um(Genre);                                                // 0x0048   (0x0010)  
	int32_t                                            Year;                                                       // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(80,2028) /* TMap<FString, int32_t> */ __um(Difficulty);                                          // 0x0060   (0x0050)  
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataExt
/// Size: 0x0130 (0x000000 - 0x000130)
struct FEpicMediaAudioMetadataExt
{ 
	SDK_UNDEFINED(80,2029) /* TMap<FString, FEpicMediaAudioMetadataTrackIndicesExt> */ __um(Tracks);               // 0x0000   (0x0050)  
	TArray<float>                                      Pans;                                                       // 0x0050   (0x0010)  
	TArray<float>                                      Volumes;                                                    // 0x0060   (0x0010)  
	TArray<char>                                       Midi;                                                       // 0x0070   (0x0010)  
	FEpicMediaAudioMetadataDataExt                     MetadataData;                                               // 0x0080   (0x00B0)  
};

/// Struct /Script/EpicMediaUtilities.EpicMediaExtraMetadataExt
/// Size: 0x0058 (0x000000 - 0x000058)
struct FEpicMediaExtraMetadataExt
{ 
	SDK_UNDEFINED(16,2030) /* FString */               __um(AssetId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,2031) /* TArray<FString> */       __um(BaseURLs);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2032) /* FString */               __um(BaseURL);                                              // 0x0020   (0x0010)  
	int64_t                                            Version;                                                    // 0x0030   (0x0008)  
	int64_t                                            ExpiresAt;                                                  // 0x0038   (0x0008)  
	bool                                               bSupportsCaching;                                           // 0x0040   (0x0001)  
	bool                                               bSharelock;                                                 // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	SDK_UNDEFINED(16,2033) /* FString */               __um(UserContentProtection);                                // 0x0048   (0x0010)  
};

/// Struct /Script/EpicMediaUtilities.EpicMediaMetadataExt
/// Size: 0x02E8 (0x000000 - 0x0002E8)
struct FEpicMediaMetadataExt
{ 
	TArray<FEpicMediaPlaylistExt>                      Playlists;                                                  // 0x0000   (0x0010)  
	TArray<FEpicMediaPlaylistExt>                      StateStreamPlaylists;                                       // 0x0010   (0x0010)  
	TArray<FEpicMediaPlaylistExt>                      SelectedPlaylists;                                          // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,2034) /* FString */               __um(Type);                                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2035) /* FString */               __um(Envelope);                                             // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,2036) /* FString */               __um(Limits);                                               // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,2037) /* FString */               __um(Subtitles);                                            // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,2038) /* FString */               __um(UserContentProtection);                                // 0x0070   (0x0010)  
	bool                                               Sharelock;                                                  // 0x0080   (0x0001)  
	bool                                               AudioOnly;                                                  // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	float                                              AspectRatio;                                                // 0x0084   (0x0004)  
	bool                                               PartySync;                                                  // 0x0088   (0x0001)  
	bool                                               Live;                                                       // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x008A   (0x0006)  MISSED
	SDK_UNDEFINED(16,2039) /* FString */               __um(DenyHTTPCode);                                         // 0x0090   (0x0010)  
	FEpicMediaRegionLockExt                            RegionLockData;                                             // 0x00A0   (0x00A8)  
	FEpicMediaAudioMetadataExt                         AudioMetadata;                                              // 0x0148   (0x0130)  
	bool                                               bQuicksilverEP;                                             // 0x0278   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0279   (0x0007)  MISSED
	FEpicMediaExtraMetadataExt                         ExtraMetadata;                                              // 0x0280   (0x0058)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x02D8   (0x0010)  MISSED
};

