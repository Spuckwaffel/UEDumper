
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

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
	// void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                          // [0xc770328] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer
	// void PlayFromStateStreamServer(FString InStatePlaylistURL);                                                              // [0xc76ee68] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer
	// void PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                             // [0xc76ede8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile
	// void PlayFromFile(FString InFilename);                                                                                   // [0xc76e704] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback
	// void EndPlayback();                                                                                                      // [0xc76e670] Final|Native|Public|BlueprintCallable 
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
	// void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);                                                          // [0xc7703a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.StartRecording
	// void StartRecording();                                                                                                   // [0xc770314] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.RecordToFile
	// void RecordToFile(FString InFilename);                                                                                   // [0xc76f54c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelRecorder.EndRecording
	// void EndRecording();                                                                                                     // [0xc76e684] Final|Native|Public|BlueprintCallable 
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
	// void SetTargetAlias(FString InAlias);                                                                                    // [0xc76fc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelTarget.GetTargetAlias
	// FString GetTargetAlias();                                                                                                // [0xc76e6e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

