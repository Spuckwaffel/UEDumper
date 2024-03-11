
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C
/// Size: 0x0049 (0x0000A0 - 0x0000E9)
class UBPC_SparksSongPreviewer_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00A0   (0x0008)  
	class UFortBaseStreamingVideo*                     Streamer;                                                   // 0x00A8   (0x0008)  
	FName                                              CurrentSong;                                                // 0x00B0   (0x0004)  
	FName                                              PendingSong;                                                // 0x00B4   (0x0004)  
	double                                             FadeInDuration;                                             // 0x00B8   (0x0008)  
	double                                             FadeOutDuration;                                            // 0x00C0   (0x0008)  
	double                                             PreviewDuration;                                            // 0x00C8   (0x0008)  
	FTimerHandle                                       LoopPointFadeTimerHandle;                                   // 0x00D0   (0x0008)  
	double                                             LoopFadeOutDurationFromEnd;                                 // 0x00D8   (0x0008)  
	FTimerHandle                                       FadeOutForStopTimerHandle;                                  // 0x00E0   (0x0008)  
	bool                                               IsFadingOut;                                                // 0x00E8   (0x0001)  


	/// Functions
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.InitPreview
	// void InitPreview();                                                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.ForceStopPreviewImmediate
	// void ForceStopPreviewImmediate();                                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.StopPreviewingSong
	// void StopPreviewingSong(bool WithFadeout, FName SongShortName);                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.IsPlayingPreview
	// void IsPlayingPreview(FName Song, bool& Is Playing Or Pending, bool& Is Playing, bool& Is Pending);                   // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.StopPreview
	// void StopPreview(bool WithFadeout);                                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.Clear Current Preview and Start Pending Preview
	// void Clear Current Preview and Start Pending Preview();                                                               // [0x18a39e4] Protected|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.StartPreview
	// void StartPreview(FName SongShortName);                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.Fade Out And Stop
	// void Fade Out And Stop();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.VideoOnClosed_Event
	// void VideoOnClosed_Event();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.VideoOnSuccess_Event
	// void VideoOnSuccess_Event();                                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.OnPlaybackResumed_Event
	// void OnPlaybackResumed_Event();                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.FadeOutAtLoop
	// void FadeOutAtLoop();                                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.FadeInAfterLoop
	// void FadeInAfterLoop();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.VideoOnTerminalError_Event
	// void VideoOnTerminalError_Event(EBaseMediaTerminalErrorReason Reason);                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.OnVideoResumed
	// void OnVideoResumed();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.DoneFadingOutForStop
	// void DoneFadingOutForStop();                                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /SparksCore/Audio/BPC_SparksSongPreviewer.BPC_SparksSongPreviewer_C.ExecuteUbergraph_BPC_SparksSongPreviewer
	// void ExecuteUbergraph_BPC_SparksSongPreviewer(int32_t EntryPoint);                                                    // [0x18a39e4] Final|HasDefaults    
};

