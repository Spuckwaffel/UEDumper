
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C
/// Size: 0x0049 (0x0000A0 - 0x0000E9)
class UBPC_SparksSongPreviewer_C : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 233;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	CMember(class UFortBaseStreamingVideo*)            Streamer                                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FName)                                     CurrentSong                                                 OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     PendingSong                                                 OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	DMember(double)                                    FadeInDuration                                              OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    FadeOutDuration                                             OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(double)                                    PreviewDuration                                             OFFSET(get<double>, {0xC8, 8, 0, 0})
	SMember(FTimerHandle)                              LoopPointFadeTimerHandle                                    OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
	DMember(double)                                    LoopFadeOutDurationFromEnd                                  OFFSET(get<double>, {0xD8, 8, 0, 0})
	SMember(FTimerHandle)                              FadeOutForStopTimerHandle                                   OFFSET(getStruct<T>, {0xE0, 8, 0, 0})
	DMember(bool)                                      IsFadingOut                                                 OFFSET(get<bool>, {0xE8, 1, 0, 0})


	/// Functions
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.InitPreview
	// void InitPreview();                                                                                                      // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.ForceStopPreviewImmediate
	// void ForceStopPreviewImmediate();                                                                                        // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.StopPreviewingSong
	// void StopPreviewingSong(bool WithFadeout, FName SongShortName);                                                          // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.IsPlayingPreview
	// void IsPlayingPreview(FName Song, bool& Is Playing Or Pending, bool& Is Playing, bool& Is Pending);                      // [0x246f7d8] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.StopPreview
	// void StopPreview(bool WithFadeout);                                                                                      // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.Clear Current Preview and Start Pending Preview
	// void Clear Current Preview and Start Pending Preview();                                                                  // [0x246f7d8] Protected|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.StartPreview
	// void StartPreview(FName SongShortName);                                                                                  // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.Fade Out And Stop
	// void Fade Out And Stop();                                                                                                // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.VideoOnClosed_Event
	// void VideoOnClosed_Event();                                                                                              // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.VideoOnSuccess_Event
	// void VideoOnSuccess_Event();                                                                                             // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.OnPlaybackResumed_Event
	// void OnPlaybackResumed_Event();                                                                                          // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.FadeOutAtLoop
	// void FadeOutAtLoop();                                                                                                    // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.FadeInAfterLoop
	// void FadeInAfterLoop();                                                                                                  // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.VideoOnTerminalError_Event
	// void VideoOnTerminalError_Event(EBaseMediaTerminalErrorReason Reason);                                                   // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.OnVideoResumed
	// void OnVideoResumed();                                                                                                   // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.DoneFadingOutForStop
	// void DoneFadingOutForStop();                                                                                             // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.ExecuteUbergraph_BPC_SparksSongPreviewer
	// void ExecuteUbergraph_BPC_SparksSongPreviewer(int32_t EntryPoint);                                                       // [0x246f7d8] Final|HasDefaults    
};

