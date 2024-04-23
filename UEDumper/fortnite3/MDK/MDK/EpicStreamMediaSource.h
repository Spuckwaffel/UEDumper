
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: EpicMediaCDNHostnames
/// dependency: EpicMediaLocalizedOverlays
/// dependency: EpicMediaMetadataResolver
/// dependency: MediaAssets

/// Class /Script/EpicStreamMediaSource.EpicStreamMediaSource
/// Size: 0x0750 (0x000098 - 0x0007E8)
class UEpicStreamMediaSource : public UStreamMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	SMember(FString)                                   VideoStreamSource                                           OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	DMember(float)                                     VideoStreamSourceAB                                         OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(TMap<FString, FString>)                    VideoId                                                     OFFSET(get<T>, {0xB0, 80, 0, 0})
	DMember(bool)                                      bIsLive                                                     OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bBlurlLive                                                  OFFSET(get<bool>, {0x101, 1, 0, 0})
	DMember(int32_t)                                   MaxResolution                                               OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	DMember(int32_t)                                   MaxBandwidth                                                OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(bool)                                      bSharelock                                                  OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bAudioOnly                                                  OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bPartySync                                                  OFFSET(get<bool>, {0x112, 1, 0, 0})
	DMember(float)                                     MediaDuration                                               OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FString)                                   MimeType                                                    OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FString)                                   StreamDenyHTTPCode                                          OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	CMember(class UEpicMediaMetadataResolver*)         MetadataResolver                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class UEpicMediaCDNHostnames*)             CDNHostNames                                                OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(bool)                                      bEnableBLURLRetries                                         OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      bEnableScrubOptimization                                    OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(int32_t)                                   SeekBitrate                                                 OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   CacheSizeKiB                                                OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   TimeToCacheMilliseconds                                     OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoUrlSuccess                                           OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoUrlFailed                                            OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaDataFailure                                           OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaLicensedAudioTreatmentChanged                        OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	CMember(class UEpicMediaDownloadLocalizedOverlays*) EpicMediaDownloadLocalizedOverlays                         OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(FString)                                   ProtectUserFromAVSettings                                   OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	SMember(FString)                                   StreamID                                                    OFFSET(getStruct<T>, {0x558, 16, 0, 0})
	SMember(FString)                                   StreamID_Development                                        OFFSET(getStruct<T>, {0x568, 16, 0, 0})
	CMember(class UMediaSource*)                       LocalFilePlaybackAsset                                      OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(double)                                    HighestFramerate                                            OFFSET(get<double>, {0x580, 8, 0, 0})


	/// Functions
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.UpdateStreamUrlArguments
	// void UpdateStreamUrlArguments();                                                                                         // [0x851772c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.UpdatePlayerOptions
	// FMediaPlayerOptions UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions);                                              // [0x8517610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ShouldStreamBePlaying
	// bool ShouldStreamBePlaying(class UObject* WorldContextObject, class UPrimitiveComponent* PrimitiveComponent, float CullRadius); // [0x851740c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ShouldProtectPlayerFromContent
	// UCPTypes ShouldProtectPlayerFromContent();                                                                               // [0x67ee3a0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetUrl
	// void SetUrl(FString& InURL);                                                                                             // [0x8516d24] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetSyncTimes
	// void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);     // [0x8516b8c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetPlaybackStartTime
	// void SetPlaybackStartTime(float StartTime);                                                                              // [0x8516b0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetMediaTimeWindowSeconds
	// void SetMediaTimeWindowSeconds(FTimespan InStartTime, FTimespan InEndTime);                                              // [0x8516a48] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetLocalizedOverlaysV2
	// void SetLocalizedOverlaysV2(class UEpicMediaDownloadLocalizedOverlays* InOverlays);                                      // [0x85169bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.RequestVideoUrl
	// void RequestVideoUrl(class APlayerController* FortPC);                                                                   // [0x8516940] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ReinstateSharing
	// void ReinstateSharing();                                                                                                 // [0x329b518] Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.MetadataResultHandler
	// void MetadataResultHandler(FEpicMediaMetadataExt& MetaData, bool bSuccess);                                              // [0x3880688] Final|Native|Public|HasOutParms 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.IsTimeWindowSet
	// bool IsTimeWindowSet();                                                                                                  // [0x851691c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.IsScreenRecordingInProgress
	// bool IsScreenRecordingInProgress();                                                                                      // [0x3128b98] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.HasLocalFilePlayback
	// bool HasLocalFilePlayback();                                                                                             // [0x85168a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ForceSegmentCaching
	// void ForceSegmentCaching(bool bForce);                                                                                   // [0x8516828] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.DisableSharing
	// void DisableSharing();                                                                                                   // [0x222c62c] Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ClearSyncTimes
	// void ClearSyncTimes();                                                                                                   // [0x8516814] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.CancelVideoUrlRequest
	// void CancelVideoUrlRequest(bool bInCancelled);                                                                           // [0x8516794] Final|Native|Public|BlueprintCallable 
};

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

