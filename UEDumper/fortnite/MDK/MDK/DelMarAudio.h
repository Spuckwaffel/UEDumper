
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioModulation
/// dependency: CoreUObject
/// dependency: DelMarCore
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/DelMarAudio.DelMarAudioCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarAudioCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarStopMusic
	// void DelMarStopMusic();                                                                                                  // [0x3518b8c] Final|Exec|Native|Protected 
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarStartMusic
	// void DelMarStartMusic();                                                                                                 // [0x3518b8c] Final|Exec|Native|Protected 
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarSkipMusic
	// void DelMarSkipMusic();                                                                                                  // [0x3518b8c] Final|Exec|Native|Protected 
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarSetMusicTrigger
	// void DelMarSetMusicTrigger(FName TriggerName);                                                                           // [0x8c99a24] Final|Exec|Native|Protected 
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarPrintMusicTrackName
	// void DelMarPrintMusicTrackName();                                                                                        // [0x3518b8c] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarAudio.DelMarAudioProximityComponentBase
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDelMarAudioProximityComponentBase : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnProximityStart                                            OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProximityStop                                             OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bProximityActive                                            OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(class UDelMarAudioProximitySubsystem*)     Subsystem                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioProximityComponentBase.CreateSoundAttached
	// class UAudioComponent* CreateSoundAttached(class USoundBase* sound, class USceneComponent* AttachComponent, FName AttachPointName, float VolumeMultiplier, float PitchMultiplier, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy); // [0xc31a9ac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarAudioProximityComponentBase.BP_Update
	// void BP_Update(class APlayerCameraManager* Camera, class ADelMarVehicle* Vehicle);                                       // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarAudioProximityComponentBase.BP_StopProximity
	// void BP_StopProximity();                                                                                                 // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarAudioProximityComponentBase.BP_StartProximity
	// void BP_StartProximity();                                                                                                // [0x186becc] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarAudio.DelMarAudioProximityComponent
/// Size: 0x0020 (0x0000D8 - 0x0000F8)
class UDelMarAudioProximityComponent : public UDelMarAudioProximityComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class USoundBase*)                         ProximitySound                                              OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UAudioComponent*)                    ProximityComponent                                          OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(float)                                     ObjectScaleAttenuationModifier                              OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     FadeOutDuration                                             OFFSET(get<float>, {0xEC, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioProximityComponent.GetObjectScale
	// float GetObjectScale();                                                                                                  // [0x896f4d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarAudio.DelMarAudioPassbyComponent
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UDelMarAudioPassbyComponent : public UDelMarAudioProximityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(class USoundBase*)                         PassBySound                                                 OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UAudioComponent*)                    PassbyComponent                                             OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPassbyStart                                               OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPassbyStop                                                OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	DMember(float)                                     MinRelativeSpeed                                            OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     MinSpeedStopThresholdOffset                                 OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     PassbyStartRadiusMax                                        OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     PassbyStartRadiusMin                                        OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     MinRelativeDirection                                        OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     PassbyCooldown                                              OFFSET(get<float>, {0x13C, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioPassbyComponent.IsPlayingPassby
	// bool IsPlayingPassby();                                                                                                  // [0x858e420] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarAudio.DelMarAudioPassbyComponent.HandlePassbyFinished
	// void HandlePassbyFinished();                                                                                             // [0xc31adf0] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioPassbyComponent.BP_StopPassby
	// void BP_StopPassby();                                                                                                    // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarAudioPassbyComponent.BP_StartPassby
	// void BP_StartPassby(class AActor* Instigator, float PassbySpeed);                                                        // [0x186becc] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarAudio.DelMarAudioProximitySubsystem
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class UDelMarAudioProximitySubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/DelMarAudio.DelMarAudioStateMixerSubsystem
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UDelMarAudioStateMixerSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FDelMarStateMixCollection>)         AvailableMixes                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TMap<FGameplayTag, FDelMarStateMix>)       ActiveMixes                                                 OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FGameplayTag, FDelMarStateMix>)       TemporaryMixes                                              OFFSET(get<T>, {0xA0, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.SetMixState
	// bool SetMixState(FGameplayTag& MixState, bool bFallBackToNearestParent, bool bDeactivateChildren);                       // [0xc31b2f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.RemoveMixes
	// void RemoveMixes(FName GroupName);                                                                                       // [0xc31b174] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.GetActiveMixes
	// TMap<FGameplayTag, FDelMarStateMix> GetActiveMixes();                                                                    // [0xc31ad60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.ClearMixState
	// void ClearMixState(FGameplayTag& MixState, bool bDeactivateChildren);                                                    // [0xc31a858] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.AddMixes
	// void AddMixes(FName GroupName, TArray<FDelMarStateMix>& Mixes);                                                          // [0xc31a734] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UDelMarAudioStatePlayspaceComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     MixGroupName                                                OFFSET(getStruct<T>, {0x160, 4, 0, 0})
	CMember(TArray<FDelMarStateMix>)                   Mixes                                                       OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(float)                                     CloseVehicleDistanceThreshold                               OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(int32_t)                                   CloseVehiclesPackRacingThreshold                            OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
	CMember(class USoundControlBus*)                   UserMusicSettingBus                                         OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(class USoundControlBusMix*)                UserMusicMix                                                OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UDelMarAudioStateMixerSubsystem*)    MixSubsystem                                                OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(class UDelMarVehicleManager*)              VehicleManager                                              OFFSET(get<T>, {0x1A0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleTurboStopped
	// void HandleVehicleTurboStopped();                                                                                        // [0xc31b160] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleTurboStarted
	// void HandleVehicleTurboStarted();                                                                                        // [0xc31b14c] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleHitHazard
	// void HandleVehicleHitHazard();                                                                                           // [0xc31b138] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                                  // [0xc31b078] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleBigAirStopped
	// void HandleVehicleBigAirStopped();                                                                                       // [0xc31b064] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleBigAirStarted
	// void HandleVehicleBigAirStarted();                                                                                       // [0xc31b050] Final|Native|Public  
};

/// Class /Script/DelMarAudio.DelMarCrowdAudioManager
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarCrowdAudioManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UDelMarAudioStatePlayspaceComponent*) CachedStateComponent                                       OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FGameplayTag)                              RaceModeTag                                                 OFFSET(getStruct<T>, {0xA8, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnVehicleDemolished
	// void BP_OnVehicleDemolished();                                                                                           // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnRacerStateChanged
	// void BP_OnRacerStateChanged(FGameplayTag NewStateTag);                                                                   // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnRaceModeChanged
	// void BP_OnRaceModeChanged(FGameplayTag NewRaceModeTag);                                                                  // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnPlayerFinishedRace
	// void BP_OnPlayerFinishedRace();                                                                                          // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnGameplayStateChanged
	// void BP_OnGameplayStateChanged(FGameplayTag NewStateTag);                                                                // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnApproachingFinishLine
	// void BP_OnApproachingFinishLine();                                                                                       // [0x186becc] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarAudio.DelMarRaceMusicManager
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UDelMarRaceMusicManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FGameplayTag)                              RaceModeTag                                                 OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	CMember(class USoundBase*)                         MusicPlayer                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class USoundBase*)                         MusicPlayer_LowSpec                                         OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FGameplayTag)                              MusicEventSystemTag                                         OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	DMember(float)                                     FadeInDuration                                              OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     FadeOutDuration                                             OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     StartLineFadeOutDurtation                                   OFFSET(get<float>, {0xC4, 4, 0, 0})
	CMember(class UAudioComponent*)                    MainMusicComponent                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UAudioComponent*)                    StartLineComponent                                          OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarRaceMusicPlaylist*>) DefaultPlaylist                                             OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(class UDelMarRaceMusicPlaylist*)           Playlist                                                    OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TArray<FDelMarMusicTrack>)                 Songs                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FDelMarMusicTrack)                         PlayingSong                                                 OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	CMember(class UDelMarAudioStatePlayspaceComponent*) CachedStateComponent                                       OFFSET(get<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.StopMusic
	// void StopMusic();                                                                                                        // [0xc31b694] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.StartStartLineMusic
	// void StartStartLineMusic(float CountdownLength);                                                                         // [0xc31b5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.StartRaceMusic
	// void StartRaceMusic();                                                                                                   // [0xc31b5bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.SkipTrack
	// void SkipTrack();                                                                                                        // [0xc31b590] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.SetPlaylist
	// void SetPlaylist(class UDelMarRaceMusicPlaylist* InPlaylist);                                                            // [0xc31b4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.SetAudioTrigger
	// void SetAudioTrigger(FName InTrigger);                                                                                   // [0xc31b234] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.HandleSpectatorViewTargetChange
	// void HandleSpectatorViewTargetChange(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xc31ae94] Final|Native|Protected 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnRacerStateChanged
	// void BP_OnRacerStateChanged(FGameplayTag NewStateTag);                                                                   // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnRaceModeChanged
	// void BP_OnRaceModeChanged(FGameplayTag NewModeTag);                                                                      // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnPlayerFinishedRace
	// void BP_OnPlayerFinishedRace();                                                                                          // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnGameplayStateChanged
	// void BP_OnGameplayStateChanged(FGameplayTag NewStateTag);                                                                // [0x186becc] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnCountdownTimeSet
	// void BP_OnCountdownTimeSet(float TimeUntilRunStart);                                                                     // [0x186becc] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarAudio.DelMarRaceMusicSettingsActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ADelMarRaceMusicSettingsActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UDelMarRaceMusicPlaylist*)           Playlist                                                    OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bEnableMusic                                                OFFSET(get<bool>, {0x298, 1, 0, 0})
};

/// Class /Script/DelMarAudio.DelMarAudioVirtualizationSubsystem
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UDelMarAudioVirtualizationSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TMap<FGameplayTag, FDelmarAudioVirtualizationSettings>) PlayerNumMap                                   OFFSET(get<T>, {0x50, 80, 0, 0})
	DMember(int32_t)                                   MaxNumPlayers                                               OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   MaxDistantPlayers                                           OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(int32_t)                                   DistantPlayerThreshold                                      OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(class UDelMarVehicleManager*)              VehicleManager                                              OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioVirtualizationSubsystem.HandleRaceModeChanged
	// void HandleRaceModeChanged(FDelMarEvent_RaceModeSet& Event);                                                             // [0xc31ae08] Final|Native|Public|HasOutParms 
};

/// Struct /Script/DelMarAudio.DelMarStateMix
/// Size: 0x0038 (0x000000 - 0x000038)
class FDelMarStateMix : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              MixStateTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FAudioMixModifierGroup)                    ActorMixModifiers                                           OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(class USoundControlBusMix*)                ControlBusMix                                               OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bAutoDeactivate                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FGameplayTag)                              FallbackState                                               OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Struct /Script/DelMarAudio.DelMarStateMixCollection
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarStateMixCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Group                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FDelMarStateMix>)                   Mixes                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/DelMarAudio.DelMarEvent_AudioStateComponent
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_AudioStateComponent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UDelMarAudioStatePlayspaceComponent*) StateComponent                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/DelMarAudio.DelmarAudioVirtualizationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FDelmarAudioVirtualizationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   MaxNumPlayers                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxNumDistantPlayers                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     DistantPlayerThreshold                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

