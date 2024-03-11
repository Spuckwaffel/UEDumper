
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: EpicMediaCDNHostnames
/// dependency: EpicMediaLocalizedOverlays
/// dependency: EpicMediaMetadataResolver
/// dependency: MediaAssets

/// Enum /Script/EpicStreamMediaSource.UCPTypes
/// Size: 0x05
enum class UCPTypes : uint8_t
{
	UCPTypes__UCPAudio                                                               = 0,
	UCPTypes__UCPVideo                                                               = 1,
	UCPTypes__UCPBoth                                                                = 2,
	UCPTypes__UCPNone                                                                = 3,
	UCPTypes__UCPTypes_MAX                                                           = 4
};

/// Enum /Script/EpicStreamMediaSource.EStreamMediaContainerType
/// Size: 0x05
enum class EStreamMediaContainerType : uint8_t
{
	EStreamMediaContainerType__DASH                                                  = 0,
	EStreamMediaContainerType__HLS                                                   = 1,
	EStreamMediaContainerType__MP4                                                   = 2,
	EStreamMediaContainerType__UNKNOWN                                               = 3,
	EStreamMediaContainerType__EStreamMediaContainerType_MAX                         = 4
};

/// Class /Script/EpicStreamMediaSource.EpicStreamMediaSource
/// Size: 0x0728 (0x000098 - 0x0007C0)
class UEpicStreamMediaSource : public UStreamMediaSource
{ 
public:
	SDK_UNDEFINED(16,1993) /* FString */               __um(VideoStreamSource);                                    // 0x0098   (0x0010)  
	float                                              VideoStreamSourceAB;                                        // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	SDK_UNDEFINED(80,1994) /* TMap<FString, FString> */ __um(VideoId);                                             // 0x00B0   (0x0050)  
	bool                                               bIsLive;                                                    // 0x0100   (0x0001)  
	bool                                               bBlurlLive;                                                 // 0x0101   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0102   (0x0002)  MISSED
	int32_t                                            MaxResolution;                                              // 0x0104   (0x0004)  
	int32_t                                            MaxBandwidth;                                               // 0x0108   (0x0004)  
	float                                              AspectRatio;                                                // 0x010C   (0x0004)  
	bool                                               bSharelock;                                                 // 0x0110   (0x0001)  
	bool                                               bAudioOnly;                                                 // 0x0111   (0x0001)  
	bool                                               bPartySync;                                                 // 0x0112   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0113   (0x0001)  MISSED
	float                                              MediaDuration;                                              // 0x0114   (0x0004)  
	SDK_UNDEFINED(16,1995) /* FString */               __um(MimeType);                                             // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,1996) /* FString */               __um(StreamDenyHTTPCode);                                   // 0x0128   (0x0010)  
	class UEpicMediaMetadataResolver*                  MetadataResolver;                                           // 0x0138   (0x0008)  
	class UEpicMediaCDNHostnames*                      CDNHostNames;                                               // 0x0140   (0x0008)  
	bool                                               bEnableBLURLRetries;                                        // 0x0148   (0x0001)  
	bool                                               bEnableScrubOptimization;                                   // 0x0149   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x014A   (0x0002)  MISSED
	int32_t                                            SeekBitrate;                                                // 0x014C   (0x0004)  
	int32_t                                            CacheSizeKiB;                                               // 0x0150   (0x0004)  
	int32_t                                            TimeToCacheMilliseconds;                                    // 0x0154   (0x0004)  
	unsigned char                                      UnknownData04_5[0x388];                                     // 0x0158   (0x0388)  MISSED
	SDK_UNDEFINED(16,1997) /* FMulticastInlineDelegate */ __um(OnVideoUrlSuccess);                                 // 0x04E0   (0x0010)  
	SDK_UNDEFINED(16,1998) /* FMulticastInlineDelegate */ __um(OnVideoUrlFailed);                                  // 0x04F0   (0x0010)  
	SDK_UNDEFINED(16,1999) /* FMulticastInlineDelegate */ __um(OnMetaDataFailure);                                 // 0x0500   (0x0010)  
	SDK_UNDEFINED(16,2000) /* FMulticastInlineDelegate */ __um(OnMediaLicensedAudioTreatmentChanged);              // 0x0510   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0520   (0x0010)  MISSED
	class UEpicMediaDownloadLocalizedOverlays*         EpicMediaDownloadLocalizedOverlays;                         // 0x0530   (0x0008)  
	SDK_UNDEFINED(16,2001) /* FString */               __um(ProtectUserFromAVSettings);                            // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,2002) /* FString */               __um(StreamID);                                             // 0x0548   (0x0010)  
	SDK_UNDEFINED(16,2003) /* FString */               __um(StreamID_Development);                                 // 0x0558   (0x0010)  
	class UMediaSource*                                LocalFilePlaybackAsset;                                     // 0x0568   (0x0008)  
	double                                             HighestFramerate;                                           // 0x0570   (0x0008)  
	unsigned char                                      UnknownData06_6[0x248];                                     // 0x0578   (0x0248)  MISSED


	/// Functions
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.UpdateStreamUrlArguments
	// void UpdateStreamUrlArguments();                                                                                      // [0x7d975b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.UpdatePlayerOptions
	// FMediaPlayerOptions UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions);                                           // [0x7d97430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ShouldStreamBePlaying
	// bool ShouldStreamBePlaying(class UObject* WorldContextObject, class UPrimitiveComponent* PrimitiveComponent, float CullRadius); // [0x7d9707c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ShouldProtectPlayerFromContent
	// UCPTypes ShouldProtectPlayerFromContent();                                                                            // [0x66f629c] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetUrl
	// void SetUrl(FString& InURL);                                                                                          // [0x7d96f0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetSyncTimes
	// void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);  // [0x7d96a74] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetPlaybackStartTime
	// void SetPlaybackStartTime(float StartTime);                                                                           // [0x7d969f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetLocalizedOverlaysV2
	// void SetLocalizedOverlaysV2(class UEpicMediaDownloadLocalizedOverlays* InOverlays);                                   // [0x7d96968] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.RequestVideoUrl
	// void RequestVideoUrl(class APlayerController* FortPC);                                                                // [0x7d968ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ReinstateSharing
	// void ReinstateSharing();                                                                                              // [0x35bd900] Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.MetadataResultHandler
	// void MetadataResultHandler(FEpicMediaMetadataExt& MetaData, bool bSuccess);                                           // [0x7d9672c] Final|Native|Public|HasOutParms 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.IsScreenRecordingInProgress
	// bool IsScreenRecordingInProgress();                                                                                   // [0x3219f08] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.HasLocalFilePlayback
	// bool HasLocalFilePlayback();                                                                                          // [0x7d966b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ForceSegmentCaching
	// void ForceSegmentCaching(bool bForce);                                                                                // [0x7d96638] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.DisableSharing
	// void DisableSharing();                                                                                                // [0x1b102a0] Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ClearSyncTimes
	// void ClearSyncTimes();                                                                                                // [0x7d96624] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.CancelVideoUrlRequest
	// void CancelVideoUrlRequest(bool bInCancelled);                                                                        // [0x7d965a4] Final|Native|Public|BlueprintCallable 
};

