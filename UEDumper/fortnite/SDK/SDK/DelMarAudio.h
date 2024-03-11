
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarStopMusic
	// void DelMarStopMusic();                                                                                               // [0x36203b0] Final|Exec|Native|Protected 
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarStartMusic
	// void DelMarStartMusic();                                                                                              // [0x36203b0] Final|Exec|Native|Protected 
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarSkipMusic
	// void DelMarSkipMusic();                                                                                               // [0x36203b0] Final|Exec|Native|Protected 
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarSetMusicTrigger
	// void DelMarSetMusicTrigger(FName TriggerName);                                                                        // [0x86efbbc] Final|Exec|Native|Protected 
	// Function /Script/DelMarAudio.DelMarAudioCheatManager.DelMarPrintMusicTrackName
	// void DelMarPrintMusicTrackName();                                                                                     // [0x36203b0] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarAudio.DelMarAudioProximityComponentBase
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDelMarAudioProximityComponentBase : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,13160) /* FMulticastInlineDelegate */ __um(OnProximityStart);                                 // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,13161) /* FMulticastInlineDelegate */ __um(OnProximityStop);                                  // 0x00B0   (0x0010)  
	bool                                               bProximityActive;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x00C1   (0x000F)  MISSED
	class UDelMarAudioProximitySubsystem*              Subsystem;                                                  // 0x00D0   (0x0008)  


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioProximityComponentBase.CreateSoundAttached
	// class UAudioComponent* CreateSoundAttached(class USoundBase* sound, class USceneComponent* AttachComponent, FName AttachPointName, float VolumeMultiplier, float PitchMultiplier, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy); // [0xb054490] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarAudioProximityComponentBase.BP_Update
	// void BP_Update(class APlayerCameraManager* Camera, class ADelMarVehicle* Vehicle);                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarAudioProximityComponentBase.BP_StopProximity
	// void BP_StopProximity();                                                                                              // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarAudioProximityComponentBase.BP_StartProximity
	// void BP_StartProximity();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarAudio.DelMarAudioProximityComponent
/// Size: 0x0020 (0x0000D8 - 0x0000F8)
class UDelMarAudioProximityComponent : public UDelMarAudioProximityComponentBase
{ 
public:
	class USoundBase*                                  ProximitySound;                                             // 0x00D8   (0x0008)  
	class UAudioComponent*                             ProximityComponent;                                         // 0x00E0   (0x0008)  
	float                                              ObjectScaleAttenuationModifier;                             // 0x00E8   (0x0004)  
	float                                              FadeOutDuration;                                            // 0x00EC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioProximityComponent.GetObjectScale
	// float GetObjectScale();                                                                                               // [0x844c560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarAudio.DelMarAudioPassbyComponent
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UDelMarAudioPassbyComponent : public UDelMarAudioProximityComponent
{ 
public:
	class USoundBase*                                  PassBySound;                                                // 0x00F8   (0x0008)  
	class UAudioComponent*                             PassbyComponent;                                            // 0x0100   (0x0008)  
	SDK_UNDEFINED(16,13162) /* FMulticastInlineDelegate */ __um(OnPassbyStart);                                    // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,13163) /* FMulticastInlineDelegate */ __um(OnPassbyStop);                                     // 0x0118   (0x0010)  
	float                                              MinRelativeSpeed;                                           // 0x0128   (0x0004)  
	float                                              MinSpeedStopThresholdOffset;                                // 0x012C   (0x0004)  
	float                                              PassbyStartRadiusMax;                                       // 0x0130   (0x0004)  
	float                                              PassbyStartRadiusMin;                                       // 0x0134   (0x0004)  
	float                                              MinRelativeDirection;                                       // 0x0138   (0x0004)  
	float                                              PassbyCooldown;                                             // 0x013C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0140   (0x0008)  MISSED


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioPassbyComponent.IsPlayingPassby
	// bool IsPlayingPassby();                                                                                               // [0x8108030] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarAudio.DelMarAudioPassbyComponent.HandlePassbyFinished
	// void HandlePassbyFinished();                                                                                          // [0xb05472c] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioPassbyComponent.BP_StopPassby
	// void BP_StopPassby();                                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarAudioPassbyComponent.BP_StartPassby
	// void BP_StartPassby(class AActor* Instigator, float PassbySpeed);                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarAudio.DelMarAudioProximitySubsystem
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class UDelMarAudioProximitySubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0040   (0x00A0)  MISSED
};

/// Struct /Script/DelMarAudio.DelMarStateMix
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDelMarStateMix
{ 
	FGameplayTag                                       MixStateTag;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FAudioMixModifierGroup                             ActorMixModifiers;                                          // 0x0008   (0x0018)  
	class USoundControlBusMix*                         ControlBusMix;                                              // 0x0020   (0x0008)  
	bool                                               bAutoDeactivate;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              duration;                                                   // 0x002C   (0x0004)  
	FGameplayTag                                       FallbackState;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/DelMarAudio.DelMarStateMixCollection
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDelMarStateMixCollection
{ 
	FName                                              Group;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FDelMarStateMix>                            Mixes;                                                      // 0x0008   (0x0010)  
};

/// Class /Script/DelMarAudio.DelMarAudioStateMixerSubsystem
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UDelMarAudioStateMixerSubsystem : public UTickableWorldSubsystem
{ 
public:
	TArray<FDelMarStateMixCollection>                  AvailableMixes;                                             // 0x0040   (0x0010)  
	SDK_UNDEFINED(80,13164) /* TMap<FGameplayTag, FDelMarStateMix> */ __um(ActiveMixes);                           // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,13165) /* TMap<FGameplayTag, FDelMarStateMix> */ __um(TemporaryMixes);                        // 0x00A0   (0x0050)  


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.SetMixState
	// bool SetMixState(FGameplayTag& MixState, bool bFallBackToNearestParent, bool bDeactivateChildren);                    // [0xb054b5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.RemoveMixes
	// void RemoveMixes(FName GroupName);                                                                                    // [0xb054a5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.GetActiveMixes
	// TMap<FGameplayTag, FDelMarStateMix> GetActiveMixes();                                                                 // [0xb05469c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.ClearMixState
	// void ClearMixState(FGameplayTag& MixState, bool bDeactivateChildren);                                                 // [0xb05433c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarAudioStateMixerSubsystem.AddMixes
	// void AddMixes(FName GroupName, TArray<FDelMarStateMix>& Mixes);                                                       // [0xb054260] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UDelMarAudioStatePlayspaceComponent : public UPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xC0];                                      // 0x00A0   (0x00C0)  MISSED
	FName                                              MixGroupName;                                               // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	TArray<FDelMarStateMix>                            Mixes;                                                      // 0x0168   (0x0010)  
	float                                              CloseVehicleDistanceThreshold;                              // 0x0178   (0x0004)  
	int32_t                                            CloseVehiclesPackRacingThreshold;                           // 0x017C   (0x0004)  
	class USoundControlBus*                            UserMusicSettingBus;                                        // 0x0180   (0x0008)  
	class USoundControlBusMix*                         UserMusicMix;                                               // 0x0188   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0190   (0x0008)  MISSED
	class UDelMarAudioStateMixerSubsystem*             MixSubsystem;                                               // 0x0198   (0x0008)  
	class UDelMarVehicleManager*                       VehicleManager;                                             // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x01A8   (0x0038)  MISSED


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleTurboStopped
	// void HandleVehicleTurboStopped();                                                                                     // [0xb054a48] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleTurboStarted
	// void HandleVehicleTurboStarted();                                                                                     // [0xb054a34] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleHitHazard
	// void HandleVehicleHitHazard();                                                                                        // [0xb054a20] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                               // [0xb0548f0] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleBigAirStopped
	// void HandleVehicleBigAirStopped();                                                                                    // [0xb0548dc] Final|Native|Public  
	// Function /Script/DelMarAudio.DelMarAudioStatePlayspaceComponent.HandleVehicleBigAirStarted
	// void HandleVehicleBigAirStarted();                                                                                    // [0xb0548c8] Final|Native|Public  
};

/// Class /Script/DelMarAudio.DelMarCrowdAudioManager
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarCrowdAudioManager : public UPlayspaceComponent
{ 
public:
	class UDelMarAudioStatePlayspaceComponent*         CachedStateComponent;                                       // 0x00A0   (0x0008)  
	FGameplayTag                                       RaceModeTag;                                                // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnVehicleDemolished
	// void BP_OnVehicleDemolished();                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnRacerStateChanged
	// void BP_OnRacerStateChanged(FGameplayTag NewStateTag);                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnRaceModeChanged
	// void BP_OnRaceModeChanged(FGameplayTag NewRaceModeTag);                                                               // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnPlayerFinishedRace
	// void BP_OnPlayerFinishedRace();                                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnGameplayStateChanged
	// void BP_OnGameplayStateChanged(FGameplayTag NewStateTag);                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarCrowdAudioManager.BP_OnApproachingFinishLine
	// void BP_OnApproachingFinishLine();                                                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarAudio.DelMarRaceMusicManager
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UDelMarRaceMusicManager : public UPlayspaceComponent
{ 
public:
	FGameplayTag                                       RaceModeTag;                                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class USoundBase*                                  MusicPlayer;                                                // 0x00A8   (0x0008)  
	class USoundBase*                                  MusicPlayer_LowSpec;                                        // 0x00B0   (0x0008)  
	FGameplayTag                                       MusicEventSystemTag;                                        // 0x00B8   (0x0004)  
	float                                              FadeInDuration;                                             // 0x00BC   (0x0004)  
	float                                              FadeOutDuration;                                            // 0x00C0   (0x0004)  
	float                                              StartLineFadeOutDurtation;                                  // 0x00C4   (0x0004)  
	class UAudioComponent*                             MainMusicComponent;                                         // 0x00C8   (0x0008)  
	class UAudioComponent*                             StartLineComponent;                                         // 0x00D0   (0x0008)  
	SDK_UNDEFINED(32,13166) /* TWeakObjectPtr<UDelMarRaceMusicPlaylist*> */ __um(DefaultPlaylist);                 // 0x00D8   (0x0020)  
	class UDelMarRaceMusicPlaylist*                    Playlist;                                                   // 0x00F8   (0x0008)  
	TArray<FDelMarMusicTrack>                          Songs;                                                      // 0x0100   (0x0010)  
	FDelMarMusicTrack                                  PlayingSong;                                                // 0x0110   (0x0020)  
	class UDelMarAudioStatePlayspaceComponent*         CachedStateComponent;                                       // 0x0130   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0138   (0x0028)  MISSED


	/// Functions
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.StopMusic
	// void StopMusic();                                                                                                     // [0xb054e78] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.StartStartLineMusic
	// void StartStartLineMusic(float CountdownLength);                                                                      // [0xb054df8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.StartRaceMusic
	// void StartRaceMusic();                                                                                                // [0xb054de4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.SkipTrack
	// void SkipTrack();                                                                                                     // [0xb054db8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.SetPlaylist
	// void SetPlaylist(class UDelMarRaceMusicPlaylist* InPlaylist);                                                         // [0xb054d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.SetAudioTrigger
	// void SetAudioTrigger(FName InTrigger);                                                                                // [0xb054adc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.HandleSpectatorViewTargetChange
	// void HandleSpectatorViewTargetChange(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xb0547d0] Final|Native|Protected 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnRacerStateChanged
	// void BP_OnRacerStateChanged(FGameplayTag NewStateTag);                                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnRaceModeChanged
	// void BP_OnRaceModeChanged(FGameplayTag NewModeTag);                                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnPlayerFinishedRace
	// void BP_OnPlayerFinishedRace();                                                                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnGameplayStateChanged
	// void BP_OnGameplayStateChanged(FGameplayTag NewStateTag);                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/DelMarAudio.DelMarRaceMusicManager.BP_OnCountdownTimeSet
	// void BP_OnCountdownTimeSet(float TimeUntilRunStart);                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarAudio.DelMarRaceMusicSettingsActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ADelMarRaceMusicSettingsActor : public AActor
{ 
public:
	class UDelMarRaceMusicPlaylist*                    Playlist;                                                   // 0x0290   (0x0008)  
	bool                                               bEnableMusic;                                               // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED
};

/// Class /Script/DelMarAudio.DelMarAudioVirtualizationSubsystem
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UDelMarAudioVirtualizationSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0040   (0x0010)  MISSED
	SDK_UNDEFINED(80,13167) /* TMap<FGameplayTag, FDelmarAudioVirtualizationSettings> */ __um(PlayerNumMap);       // 0x0050   (0x0050)  
	int32_t                                            MaxNumPlayers;                                              // 0x00A0   (0x0004)  
	int32_t                                            MaxDistantPlayers;                                          // 0x00A4   (0x0004)  
	int32_t                                            DistantPlayerThreshold;                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UDelMarVehicleManager*                       VehicleManager;                                             // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/DelMarAudio.DelMarAudioVirtualizationSubsystem.HandleRaceModeChanged
	// void HandleRaceModeChanged(FDelMarEvent_RaceModeSet& Event);                                                          // [0xb054744] Final|Native|Public|HasOutParms 
};

/// Struct /Script/DelMarAudio.DelMarEvent_AudioStateComponent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDelMarEvent_AudioStateComponent
{ 
	class UDelMarAudioStatePlayspaceComponent*         StateComponent;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/DelMarAudio.DelmarAudioVirtualizationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDelmarAudioVirtualizationSettings
{ 
	int32_t                                            MaxNumPlayers;                                              // 0x0000   (0x0004)  
	int32_t                                            MaxNumDistantPlayers;                                       // 0x0004   (0x0004)  
	float                                              DistantPlayerThreshold;                                     // 0x0008   (0x0004)  
};

