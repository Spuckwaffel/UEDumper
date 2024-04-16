
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
	// void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                          // [0xc2371ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer
	// void PlayFromStateStreamServer(FString InStatePlaylistURL);                                                              // [0xc235e54] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer
	// void PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                             // [0xc235d94] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile
	// void PlayFromFile(FString InFilename);                                                                                   // [0xc235728] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
	// void EndPlayback();                                                                                                      // [0xc235694] Final|Native|Public|BlueprintCallable 
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
	// void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                          // [0xc23726c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
	// void StartRecording();                                                                                                   // [0xc237198] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
	// void RecordToFile(FString InFilename);                                                                                   // [0xc2364c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
	// void EndRecording();                                                                                                     // [0xc2356a8] Final|Native|Public|BlueprintCallable 
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
	// void SetTargetAlias(FString InAlias);                                                                                    // [0xc236b2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias
	// FString GetTargetAlias();                                                                                                // [0xc23570c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

