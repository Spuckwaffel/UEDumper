
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent
/// Size: 0x0198 (0x0000A0 - 0x000238)
class UCreativeAudioComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	DMember(float)                                     StereoSpreadScaleFactor                                     OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     FadeInDuration                                              OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     FadeOutDuration                                             OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bSyncPlayerAudio                                            OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bRestartAudioOnPlay                                         OFFSET(get<bool>, {0xD9, 1, 0, 0})
	CMember(ECreativeAudioPlayerTargetListener)        CanBeHeardBy                                                OFFSET(get<T>, {0xDA, 1, 0, 0})
	CMember(ECreativeAudioPlayerTargetLocation)        PlayLocation                                                OFFSET(get<T>, {0xDB, 1, 0, 0})
	CMember(EAutoplayOptions)                          AutoplayOptions                                             OFFSET(get<T>, {0xDC, 1, 0, 0})
	CMember(class UFortMinigameProgressComponent*)     FortMinigameProgressComponent                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UCreativeProxyManagerComponent*)     CreativeProxyManager                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UCreativeRegisteredPlayersManagerComponent*) CreativeRegisteredPlayersManagerComponent           OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UAudioComponent*)                    AudioComponent                                              OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, UAudioComponent*>)  PlayerAudioComponents                                       OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(class ACreativeAudioPlayerReplicationProxy*) ClientCachedProxy                                         OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class USoundBase*)                         LastSoundPlayed                                             OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FCreativeAudioPlayerData)                  ServerInstigatorData                                        OFFSET(getStruct<T>, {0x160, 64, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(bool)                                      bAudioLoaded                                                OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	DMember(bool)                                      bAudioPrimed                                                OFFSET(get<bool>, {0x1C9, 1, 0, 0})
	SMember(FCreativeAudioPlayerData)                  CachedInstigatorData                                        OFFSET(getStruct<T>, {0x1D0, 64, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  RegisteredPlayerIds                                         OFFSET(get<T>, {0x210, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  NonRegisteredPlayerIds                                      OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(EAutoplayOptions)                          CurrentAutoplayState                                        OFFSET(get<T>, {0x230, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.StopAudio
	// void StopAudio(class AController* Player);                                                                               // [0x656aec4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.SetProperties
	// void SetProperties(TWeakObjectPtr<USoundBase*>& Audio, float Volume, float PlaybackSpeed, float NewFadeInDuration, float NewFadeOutDuration, bool bEnableVolumeAttenuation, bool bEnableSpatialization, float StereoSpread, EAttenuationDistanceModel DistanceModel, float AttenuationMinDistance, float AttenuationFalloffDistance, bool bNewSyncPlayerAudio, bool bNewRestartAudioOnPlay, int32_t NewCanBeHeardBy, int32_t NewPlayLocation, int32_t NewAutoplayOptions); // [0xc673420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryUpdateAutoplayStatusOnMinigameAdd
	// void RetryUpdateAutoplayStatusOnMinigameAdd(class AFortMinigame* Minigame);                                              // [0x656aec4] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryClientPlayAudio
	// void RetryClientPlayAudio(FCreativeAudioPlayerData& InstigatorData);                                                     // [0xc673350] Final|Native|Private|HasOutParms 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.ResetDevice
	// void ResetDevice();                                                                                                      // [0xc673100] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.PlayAudio
	// void PlayAudio(class AController* Player);                                                                               // [0x656aec4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_ServerInstigatorData
	// void OnRep_ServerInstigatorData();                                                                                       // [0xc6732cc] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_RegisteredPlayerIds
	// void OnRep_RegisteredPlayerIds();                                                                                        // [0xc6732b8] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnProxyDataChanged
	// void OnProxyDataChanged(class ACreativePlayerReplicationProxy* ProxyData);                                               // [0xc673238] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerUnregistered
	// void OnPlayerUnregistered(class AFortPlayerState* PlayerState);                                                          // [0x6f251e8] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRemoved
	// void OnPlayerRemoved(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                       // [0xc673114] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRegistered
	// void OnPlayerRegistered(class AFortPlayerState* PlayerState);                                                            // [0x6d5e974] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerAdded
	// void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                         // [0x8a1c1d8] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                         // [0x8fc9afc] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0x35cf850] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameEnded
	// void OnMinigameEnded();                                                                                                  // [0xc673100] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnEnabledStateChanged
	// void OnEnabledStateChanged(bool bIsEnabled);                                                                             // [0x654e370] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAudioLoadComplete
	// void OnAudioLoadComplete(FSoftObjectPath Audio);                                                                         // [0xc672a14] Final|Native|Private|HasDefaults 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAllPlayersUnregistered
	// void OnAllPlayersUnregistered();                                                                                         // [0x142d4d4] Final|Native|Private 
};

/// Class /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy
/// Size: 0x0040 (0x000298 - 0x0002D8)
class ACreativeAudioPlayerReplicationProxy : public ACreativePlayerReplicationProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FCreativeAudioPlayerData)                  InstigatorData                                              OFFSET(getStruct<T>, {0x298, 64, 0, 0})
};

/// Struct /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerData
/// Size: 0x0040 (0x000000 - 0x000040)
class FCreativeAudioPlayerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FUniqueNetIdRepl)                          NetId                                                       OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(class APawn*)                              Pawn                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     ServerAudioStartTime                                        OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Enum /Script/CRD_AudioPlayerRuntime.ECreativeAudioPlayerTargetListener
/// Size: 0x05
enum class ECreativeAudioPlayerTargetListener : uint8_t
{
	ECreativeAudioPlayerTargetListener__None                                         = 0,
	ECreativeAudioPlayerTargetListener__Instigator                                   = 1,
	ECreativeAudioPlayerTargetListener__RegisteredPlayers                            = 2,
	ECreativeAudioPlayerTargetListener__NonRegisteredPlayers                         = 4,
	ECreativeAudioPlayerTargetListener__Everyone                                     = 6
};

/// Enum /Script/CRD_AudioPlayerRuntime.ECreativeAudioPlayerTargetLocation
/// Size: 0x06
enum class ECreativeAudioPlayerTargetLocation : uint8_t
{
	ECreativeAudioPlayerTargetLocation__None                                         = 0,
	ECreativeAudioPlayerTargetLocation__Device                                       = 1,
	ECreativeAudioPlayerTargetLocation__LocalPlayer                                  = 2,
	ECreativeAudioPlayerTargetLocation__RegisteredPlayers                            = 4,
	ECreativeAudioPlayerTargetLocation__InstigatingPlayer                            = 8,
	ECreativeAudioPlayerTargetLocation__All                                          = 15
};

/// Enum /Script/CRD_AudioPlayerRuntime.EAutoplayOptions
/// Size: 0x07
enum class EAutoplayOptions : uint8_t
{
	EAutoplayOptions__None                                                           = 0,
	EAutoplayOptions__Create                                                         = 1,
	EAutoplayOptions__WaitingForPlayer                                               = 2,
	EAutoplayOptions__Countdown                                                      = 4,
	EAutoplayOptions__Gameplay                                                       = 8,
	EAutoplayOptions__RoundEnd                                                       = 16,
	EAutoplayOptions__GameEnd                                                        = 32
};

