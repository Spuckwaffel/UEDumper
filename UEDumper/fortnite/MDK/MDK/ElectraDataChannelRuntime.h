
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AElectraDataChannelPlayer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FMulticastInlineDelegate)                  OnTerminalError                                             OFFSET(getStruct<T>, {0x290, 16, 0, 0})


	/// Functions
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer
	// void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                          // [0xaba3578] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer
	// void PlayFromStateStreamServer(FString InStatePlaylistURL);                                                              // [0xaba3144] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer
	// void PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                             // [0xaba30c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile
	// void PlayFromFile(FString InFilename);                                                                                   // [0xaba2f64] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
	// void EndPlayback();                                                                                                      // [0xaba2ed0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AElectraDataChannelRecorder : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.UseTimeFromMediaPlayer
	// void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                          // [0xaba35f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
	// void StartRecording();                                                                                                   // [0xaba3564] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
	// void RecordToFile(FString InFilename);                                                                                   // [0xaba32a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
	// void EndRecording();                                                                                                     // [0xaba2ee4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget
/// Size: 0x0078 (0x000290 - 0x000308)
class AElectraDataChannelTarget : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:


	/// Functions
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget.SetTargetAlias
	// void SetTargetAlias(FString InAlias);                                                                                    // [0xaba3404] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias
	// FString GetTargetAlias();                                                                                                // [0xaba2f48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

