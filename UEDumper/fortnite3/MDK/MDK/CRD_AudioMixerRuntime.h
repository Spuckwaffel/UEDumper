
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioModulation
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice
/// Size: 0x0090 (0x000BE0 - 0x000C70)
class ACreativeAudioMixerDevice : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3184;

public:
	CMember(class USoundControlBusMix*)                Mix                                                         OFFSET(get<T>, {0xBE8, 8, 0, 0})
	CMember(class USoundControlBus*)                   Bus                                                         OFFSET(get<T>, {0xBF0, 8, 0, 0})
	DMember(float)                                     FaderValue                                                  OFFSET(get<float>, {0xBF8, 4, 0, 0})
	CMember(ECreativeRegisteredPlayerGroups)           CanBeHeardBy                                                OFFSET(get<T>, {0xBFC, 1, 0, 0})
	DMember(bool)                                      bActivateInEditMode                                         OFFSET(get<bool>, {0xBFD, 1, 0, 0})
	DMember(bool)                                      bActivateOnGameStart                                        OFFSET(get<bool>, {0xBFE, 1, 0, 0})
	CMember(class UCreativeProxyManagerComponent*)     CreativeProxyManagerComponent                               OFFSET(get<T>, {0xC00, 8, 0, 0})
	CMember(class UFortMinigameProgressComponent*)     FortMinigameProgressComponent                               OFFSET(get<T>, {0xC08, 8, 0, 0})
	CMember(class UCreativeRegisteredPlayersManagerComponent*) CreativeRegisteredPlayersManagerComponent           OFFSET(get<T>, {0xC10, 8, 0, 0})
	CMember(class UFortActorOptionsComponent*)         FortActorOptionsComponent                                   OFFSET(get<T>, {0xC18, 8, 0, 0})
	DMember(bool)                                      bCachedIsActive                                             OFFSET(get<bool>, {0xC20, 1, 0, 0})
	CMember(class AController*)                        CachedInstigator                                            OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(class ACreativeAudioMixerReplicationProxy*) ClientCachedProxy                                          OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(class USoundControlBusMix*)                CachedBusMix                                                OFFSET(get<T>, {0xC38, 8, 0, 0})
	SMember(FName)                                     CachedBusMixName                                            OFFSET(getStruct<T>, {0xC40, 4, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  RegisteredPlayerIds                                         OFFSET(get<T>, {0xC48, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  NonRegisteredPlayerIds                                      OFFSET(get<T>, {0xC58, 16, 0, 0})
	DMember(bool)                                      bHasUpdatedStateInEditMode                                  OFFSET(get<bool>, {0xC68, 1, 0, 0})
	DMember(bool)                                      bHasUpdatedStateInGameplay                                  OFFSET(get<bool>, {0xC69, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnProxyDataChanged
	// void OnProxyDataChanged(class ACreativePlayerReplicationProxy* ProxyData);                                               // [0xc5fa074] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPreAnyPropertyChanged
	// void OnPreAnyPropertyChanged();                                                                                          // [0xc5fa060] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerUnregistered
	// void OnPlayerUnregistered(class AFortPlayerState* PlayerState);                                                          // [0xc5f9fdc] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerRegistered
	// void OnPlayerRegistered(class AFortPlayerState* PlayerState);                                                            // [0xc5f9f58] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerAdded
	// void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                         // [0xc5f9e30] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0xc5f9e14] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnMinigameEnded
	// void OnMinigameEnded();                                                                                                  // [0xc5f9df8] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnAllPlayersUnregistered
	// void OnAllPlayersUnregistered();                                                                                         // [0xc5f9ddc] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.DeactivateMix
	// void DeactivateMix();                                                                                                    // [0x35e6228] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.ActivateMix
	// void ActivateMix();                                                                                                      // [0x35e6228] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CRD_AudioMixerRuntime.CreativeAudioMixerReplicationProxy
/// Size: 0x0008 (0x000298 - 0x0002A0)
class ACreativeAudioMixerReplicationProxy : public ACreativePlayerReplicationProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x298, 1, 0, 0})
};

