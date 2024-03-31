
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMCoreRuntime
/// dependency: FortniteGame
/// dependency: HarmonixMetasound
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SparksCameraDirectorRuntime

/// Class /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnLipSyncAnimChanged                                        OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager.TryGetLipSyncAnimAssetForPlayer
	// TWeakObjectPtr<UAnimSequence*> TryGetLipSyncAnimAssetForPlayer(class APlayerState* PlayerState);                         // [0x25323ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager.LipSyncAnimDecidedDelegate__DelegateSignature
	// void LipSyncAnimDecidedDelegate__DelegateSignature(TWeakObjectPtr<UAnimSequence*> LipSyncAnimSequence, TArray<APlayerState*>& PlayerStates); // [0x186becc] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPlayspaceComponent_SparksPerfMem : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem.StopTrackingServerPerf
	// void StopTrackingServerPerf();                                                                                           // [0xb26b668] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem.StartTrackingServerPerf
	// void StartTrackingServerPerf(FSparksServerPerfMemSettings& Settings);                                                    // [0xb26b5cc] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksMusicPlayspaceInteractorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.ExitedSparksMusicPlayspace
	// void ExitedSparksMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                                 // [0x1731398] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.EnteredSparksMusicPlayspace
	// void EnteredSparksMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                                // [0x1731570] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.DoesSparksMusicPlayspaceInteratorHaveTag
	// bool DoesSparksMusicPlayspaceInteratorHaveTag(FGameplayTag& tag);                                                        // [0xb26ad64] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.AllowedToEnterMusicPlayspace
	// bool AllowedToEnterMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                               // [0x2607f40] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksMusicPlayerInterface : public USparksMusicPlayspaceInteractorInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.SparksMusicPlayerRemovedFromMusicPlayspace
	// void SparksMusicPlayerRemovedFromMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                 // [0x186becc] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.SparksMusicPlayerAddedToMusicPlayspace
	// void SparksMusicPlayerAddedToMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                     // [0x186becc] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.ShouldAutoRegister
	// bool ShouldAutoRegister();                                                                                               // [0xb26b5a8] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.IsSparksMusicPlayerPlayingWithKey
	// bool IsSparksMusicPlayerPlayingWithKey();                                                                                // [0xaf3a6cc] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.IsSparksMusicPlayerPlaying
	// bool IsSparksMusicPlayerPlaying();                                                                                       // [0xb26b434] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace
/// Size: 0x00A8 (0x0006E8 - 0x000790)
class ASparksMusicPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	SMember(FMulticastInlineDelegate)                  OnMidiEventDriverChanged                                    OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMidiEventDataParsed                                       OFFSET(getStruct<T>, {0x710, 16, 0, 0})
	CMember(TArray<FSparksPlayspaceInteractor>)        Interactors                                                 OFFSET(get<T>, {0x738, 16, 0, 0})
	CMember(class UAudioComponent*)                    MetasoundPlayer                                             OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class UAudioComponent*)                    MetasoundMixer                                              OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(TArray<FSparksPlayspaceMusicPlayer>)       MusicPlayers                                                OFFSET(get<T>, {0x760, 16, 0, 0})
	CMember(class USparksMusicPlayspaceAudioState*)    AudioState                                                  OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class USparksCameraDirectorComponent*)     CameraDirector                                              OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class UPlayspaceComponent_PlayerManager*)  PlayerManagerComp                                           OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class UPlayspaceComponent_SparksPerfMem*)  PerfMemComp                                                 OFFSET(get<T>, {0x788, 8, 0, 0})


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMusicKeyAndMode
	// bool TryGetMusicKeyAndMode(EMusicKey& OutMusicKey, EMusicKeyMode& OutMusicKeyMode);                                      // [0xb26b96c] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMidiEventDrivers
	// TArray<TScriptInterface<Class>> TryGetMidiEventDrivers();                                                                // [0xb26b8fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMidiEventDriverForPlayerState
	// TScriptInterface<Class> TryGetMidiEventDriverForPlayerState(class APlayerState* PlayerState);                            // [0x3ce9e24] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.RemoveMusicPlayer
	// bool RemoveMusicPlayer(class UObject* MusicPlayer, class AActor* ForActor);                                              // [0xb26b458] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.RemoveInteractor
	// bool RemoveInteractor(class UObject* Interactor, class AActor* ForActor);                                                // [0x3ad4220] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.OnMeasureEvent
	// void OnMeasureEvent(int32_t MeasureNumber);                                                                              // [0x34ead3c] Native|Protected     
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.OnBeatEvent
	// void OnBeatEvent(int32_t BeatNumber, int32_t BeatInBar);                                                                 // [0x22a258c] Native|Protected     
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.MidiEventDriverChangedDelegate__DelegateSignature
	// void MidiEventDriverChangedDelegate__DelegateSignature(TScriptInterface<Class> MidiEventDriver);                         // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.MidiEventDataParsedDelegate__DelegateSignature
	// void MidiEventDataParsedDelegate__DelegateSignature(TScriptInterface<Class> MidiEventDriver, class UParsedMidiEventData* ParsedMidiEventData); // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.IsAnyMusicPlayingWithKey
	// bool IsAnyMusicPlayingWithKey();                                                                                         // [0xb26b40c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.IsAnyMusicPlaying
	// bool IsAnyMusicPlaying();                                                                                                // [0x22a2480] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetSparksMusicPlayspaceOfClassByLocation
	// class ASparksMusicPlayspace* GetSparksMusicPlayspaceOfClassByLocation(class UClass* PlayspaceType, class UObject* WorldContextObject, FVector& Location, bool bMatchChildTypes); // [0xb26b0d8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetSparksMusicPlayspaceOfClass
	// class ASparksMusicPlayspace* GetSparksMusicPlayspaceOfClass(class UClass* PlayspaceType, class UObject* WorldContextObject, class AActor* Actor, bool bMatchChildTypes); // [0x26080c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetMusicPlayers
	// TArray<UObject*> GetMusicPlayers();                                                                                      // [0xb26b098] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xb26ae78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetAllPlayerControllers
	// TArray<AController*> GetAllPlayerControllers();                                                                          // [0xb26ae3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.DoesPlayerHaveInstrument
	// bool DoesPlayerHaveInstrument(class APlayerState* PlayerState, ESparksInstrumentType InstrumentType);                    // [0xb26ac0c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnUserRemoved
	// void BPEvent_OnUserRemoved(FPlayspaceUser& User, class APlayerState* PlayerState);                                       // [0x186becc] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnUserAdded
	// void BPEvent_OnUserAdded(FPlayspaceUser& User, class APlayerState* PlayerState);                                         // [0x186becc] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnIntialized
	// void BPEvent_OnIntialized();                                                                                             // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BP_RemovePlayspaceUser
	// void BP_RemovePlayspaceUser(class AController* Controller);                                                              // [0xb26ab08] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BP_GetOwnedEventRouter
	// class UGameplayEventRouterComponent* BP_GetOwnedEventRouter();                                                           // [0x3491430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BP_GetAllPlayerStates
	// TArray<APlayerState*> BP_GetAllPlayerStates();                                                                           // [0xb26aabc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.AddMusicPlayer
	// bool AddMusicPlayer(class UObject* Interactor, class AActor* ForActor);                                                  // [0xb26a96c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.AddInteractor
	// bool AddInteractor(class UObject* Interactor, class AActor* ForActor);                                                   // [0x396e860] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USparksMusicPlayspaceAudioState : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(EMusicKey)                                 CurrentKey                                                  OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(EMusicKeyMode)                             CurrentMode                                                 OFFSET(get<T>, {0xA1, 1, 0, 0})
	DMember(int32_t)                                   CurrentTempo                                                OFFSET(get<int32_t>, {0xA4, 4, 0, 0})


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.TriggerTempoChange
	// void TriggerTempoChange(int32_t BPM);                                                                                    // [0xb26b83c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.TriggerModeChange
	// void TriggerModeChange(EMusicKeyMode InMode);                                                                            // [0xb26b77c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.TriggerKeyChange
	// void TriggerKeyChange(EMusicKey InKey);                                                                                  // [0xb26b6bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnTempoChanged
	// void OnRep_OnTempoChanged();                                                                                             // [0x22a1e7c] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnModeChanged
	// void OnRep_OnModeChanged();                                                                                              // [0x306ab28] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnKeyChanged
	// void OnRep_OnKeyChanged();                                                                                               // [0x1d2dd60] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                               // [0xa273294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentKeyMode
	// EMusicKeyMode GetCurrentKeyMode();                                                                                       // [0xb26b080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                               // [0x86883e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentAudioState
	// void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo);                              // [0xb26aeb4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceInteractor
/// Size: 0x0020 (0x000000 - 0x000020)
class FSparksPlayspaceInteractor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bIsValidInteractor                                          OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class AActor*)                             AddedForActor                                               OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceMusicPlayer
/// Size: 0x0008 (0x000020 - 0x000028)
class FSparksPlayspaceMusicPlayer : public FSparksPlayspaceInteractor
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsValidMusicPlayer                                         OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksServerPerfMemSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSparksServerPerfMemSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   GamePhaseName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bPeriodicCaptures                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   PeriodicCaptureCount                                        OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   PeriodicCapturePeriodInSeconds                              OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   PeriodicCaptureMinDelayInSeconds                            OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_KeyChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksPlayspaceEvent_KeyChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EMusicKey)                                 Key                                                         OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_KeyModeChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FSparksPlayspaceEvent_KeyModeChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EMusicKeyMode)                             KeyMode                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_TempoChanged
/// Size: 0x0004 (0x000000 - 0x000004)
class FSparksPlayspaceEvent_TempoChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Tempo                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_OnBeat
/// Size: 0x0008 (0x000000 - 0x000008)
class FSparksPlayspaceEvent_OnBeat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   BeatNumber                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   BeatInBar                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/SparksMusicPlayspaceRuntime.SparksPlayspaceEvent_OnMeasure
/// Size: 0x0004 (0x000000 - 0x000004)
class FSparksPlayspaceEvent_OnMeasure : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   MeasureNumber                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

