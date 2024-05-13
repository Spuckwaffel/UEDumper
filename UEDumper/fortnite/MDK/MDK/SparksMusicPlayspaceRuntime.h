
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
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: HarmonixMetasound
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SparksCameraDirectorRuntime
/// dependency: SparksCoreRuntime
/// dependency: SparksMidiParser

/// Class /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMulticastInlineDelegate)                  OnLipSyncAnimChanged                                        OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager.TryGetLipSyncAnimAssetForPlayer
	// TWeakObjectPtr<UAnimSequence*> TryGetLipSyncAnimAssetForPlayer(class APlayerState* PlayerState);                         // [0xb7af6f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager.LipSyncAnimDecidedDelegate__DelegateSignature
	// void LipSyncAnimDecidedDelegate__DelegateSignature(TWeakObjectPtr<UAnimSequence*> LipSyncAnimSequence, TArray<APlayerState*>& PlayerStates); // [0x20c3f9c] MulticastDelegate|Public|Delegate|HasOutParms 
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
	// void StopTrackingServerPerf();                                                                                           // [0xb7af51c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem.StartTrackingServerPerf
	// void StartTrackingServerPerf(FSparksServerPerfMemSettings& Settings);                                                    // [0xb7af480] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
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
	// void ExitedSparksMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                                 // [0x8a1c034] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.EnteredSparksMusicPlayspace
	// void EnteredSparksMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                                // [0x8a4e928] Native|Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.DoesSparksMusicPlayspaceInteratorHaveTag
	// bool DoesSparksMusicPlayspaceInteratorHaveTag(FGameplayTag& tag);                                                        // [0xb7ae690] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface.AllowedToEnterMusicPlayspace
	// bool AllowedToEnterMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                               // [0x96ac90c] Native|Event|Public|BlueprintEvent|Const 
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
	// void SparksMusicPlayerRemovedFromMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                 // [0x20c3f9c] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.SparksMusicPlayerAddedToMusicPlayspace
	// void SparksMusicPlayerAddedToMusicPlayspace(class ASparksMusicPlayspace* Playspace);                                     // [0x20c3f9c] Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.ShouldAutoRegister
	// bool ShouldAutoRegister();                                                                                               // [0xb7af45c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.IsSparksMusicPlayerPlayingWithKey
	// bool IsSparksMusicPlayerPlayingWithKey();                                                                                // [0xb7af0d8] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface.IsSparksMusicPlayerPlaying
	// bool IsSparksMusicPlayerPlaying();                                                                                       // [0xb7af0b4] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace
/// Size: 0x00B0 (0x000740 - 0x0007F0)
class ASparksMusicPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	SMember(FMulticastInlineDelegate)                  OnMidiEventDriverChanged                                    OFFSET(getStruct<T>, {0x740, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMidiEventDataParsed                                       OFFSET(getStruct<T>, {0x768, 16, 0, 0})
	CMember(TArray<FSparksPlayspaceInteractor>)        Interactors                                                 OFFSET(get<T>, {0x790, 16, 0, 0})
	CMember(class UAudioComponent*)                    MetasoundPlayer                                             OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class UAudioComponent*)                    MetasoundMixer                                              OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(TArray<FSparksPlayspaceMusicPlayer>)       MusicPlayers                                                OFFSET(get<T>, {0x7B8, 16, 0, 0})
	CMember(class USparksMusicPlayspaceAudioState*)    AudioState                                                  OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(class USparksCameraDirectorComponent*)     CameraDirector                                              OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(class UPlayspaceComponent_PlayerManager*)  PlayerManagerComp                                           OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(class UPlayspaceComponent_LipSyncAssetManager*) LipSyncManager                                         OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(class UPlayspaceComponent_SparksPerfMem*)  PerfMemComp                                                 OFFSET(get<T>, {0x7E8, 8, 0, 0})


	/// Functions
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMusicKeyAndMode
	// bool TryGetMusicKeyAndMode(EMusicKey& OutMusicKey, EMusicKeyMode& OutMusicKeyMode);                                      // [0xb7af8b4] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMidiEventDrivers
	// TArray<TScriptInterface<Class>> TryGetMidiEventDrivers();                                                                // [0xb7af844] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.TryGetMidiEventDriverForPlayerState
	// TScriptInterface<Class> TryGetMidiEventDriverForPlayerState(class APlayerState* PlayerState);                            // [0xb7af7a4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.RemoveMusicPlayer
	// bool RemoveMusicPlayer(class UObject* MusicPlayer, class AActor* ForActor);                                              // [0xb7af398] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.RemoveInteractor
	// bool RemoveInteractor(class UObject* Interactor, class AActor* ForActor);                                                // [0xb7af2d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.OnMeasureEvent
	// void OnMeasureEvent(int32_t MeasureNumber);                                                                              // [0xb7af1c0] Native|Protected     
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.OnBeatEvent
	// void OnBeatEvent(int32_t BeatNumber, int32_t BeatInBar);                                                                 // [0xb7af0fc] Native|Protected     
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.MidiEventDriverChangedDelegate__DelegateSignature
	// void MidiEventDriverChangedDelegate__DelegateSignature(TScriptInterface<Class> MidiEventDriver);                         // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.MidiEventDataParsedDelegate__DelegateSignature
	// void MidiEventDataParsedDelegate__DelegateSignature(TScriptInterface<Class> MidiEventDriver, class UParsedMidiEventData* ParsedMidiEventData); // [0x20c3f9c] MulticastDelegate|Public|Delegate 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.IsAnyMusicPlayingWithKey
	// bool IsAnyMusicPlayingWithKey();                                                                                         // [0xb7af08c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.IsAnyMusicPlaying
	// bool IsAnyMusicPlaying();                                                                                                // [0xb7af064] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetSparksMusicPlayspaceOfClassByLocation
	// class ASparksMusicPlayspace* GetSparksMusicPlayspaceOfClassByLocation(class UClass* PlayspaceType, class UObject* WorldContextObject, FVector& Location, bool bMatchChildTypes); // [0xb7aeda8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetSparksMusicPlayspaceOfClass
	// class ASparksMusicPlayspace* GetSparksMusicPlayspaceOfClass(class UClass* PlayspaceType, class UObject* WorldContextObject, class AActor* Actor, bool bMatchChildTypes); // [0xb7ae9f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetMusicPlayers
	// TArray<UObject*> GetMusicPlayers();                                                                                      // [0xb7ae9b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xb7ae7a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.GetAllPlayerControllers
	// TArray<AController*> GetAllPlayerControllers();                                                                          // [0xb7ae768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.DoesPlayerHaveInstrument
	// bool DoesPlayerHaveInstrument(class APlayerState* PlayerState, ESparksInstrumentType InstrumentType);                    // [0xb7ae5c4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnUserRemoved
	// void BPEvent_OnUserRemoved(FPlayspaceUser& User, class APlayerState* PlayerState);                                       // [0x20c3f9c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnUserAdded
	// void BPEvent_OnUserAdded(FPlayspaceUser& User, class APlayerState* PlayerState);                                         // [0x20c3f9c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BPEvent_OnIntialized
	// void BPEvent_OnIntialized();                                                                                             // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BP_RemovePlayspaceUser
	// void BP_RemovePlayspaceUser(class AController* Controller);                                                              // [0xb7ae528] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BP_GetOwnedEventRouter
	// class UGameplayEventRouterComponent* BP_GetOwnedEventRouter();                                                           // [0xb7ae4fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.BP_GetAllPlayerStates
	// TArray<APlayerState*> BP_GetAllPlayerStates();                                                                           // [0xb7ae4b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.AddMusicPlayer
	// bool AddMusicPlayer(class UObject* Interactor, class AActor* ForActor);                                                  // [0xb7ae3ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace.AddInteractor
	// bool AddInteractor(class UObject* Interactor, class AActor* ForActor);                                                   // [0xb7ae328] Final|Native|Public|BlueprintCallable 
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
	// void TriggerTempoChange(int32_t BPM);                                                                                    // [0xb7af670] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.TriggerModeChange
	// void TriggerModeChange(EMusicKeyMode InMode);                                                                            // [0xb7af5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.TriggerKeyChange
	// void TriggerKeyChange(EMusicKey InKey);                                                                                  // [0xb7af570] Final|Native|Public|BlueprintCallable 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnTempoChanged
	// void OnRep_OnTempoChanged();                                                                                             // [0xb7af2a4] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnModeChanged
	// void OnRep_OnModeChanged();                                                                                              // [0xb7af274] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.OnRep_OnKeyChanged
	// void OnRep_OnKeyChanged();                                                                                               // [0xb7af244] Final|Native|Protected 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                               // [0xa67829c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentKeyMode
	// EMusicKeyMode GetCurrentKeyMode();                                                                                       // [0xb7ae99c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                               // [0x8a35688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState.GetCurrentAudioState
	// void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo);                              // [0xb7ae7e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
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

