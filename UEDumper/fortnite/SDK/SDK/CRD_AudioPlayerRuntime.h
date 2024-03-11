
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

/// Enum /Script/CRD_AudioPlayerRuntime.ECreativeAudioPlayerTargetListener
/// Size: 0x06
enum class ECreativeAudioPlayerTargetListener : uint8_t
{
	ECreativeAudioPlayerTargetListener__None                                         = 0,
	ECreativeAudioPlayerTargetListener__Instigator                                   = 1,
	ECreativeAudioPlayerTargetListener__RegisteredPlayers                            = 2,
	ECreativeAudioPlayerTargetListener__NonRegisteredPlayers                         = 4,
	ECreativeAudioPlayerTargetListener__Everyone                                     = 6,
	ECreativeAudioPlayerTargetListener__ECreativeAudioPlayerTargetListener_MAX       = 7
};

/// Enum /Script/CRD_AudioPlayerRuntime.ECreativeAudioPlayerTargetLocation
/// Size: 0x07
enum class ECreativeAudioPlayerTargetLocation : uint8_t
{
	ECreativeAudioPlayerTargetLocation__None                                         = 0,
	ECreativeAudioPlayerTargetLocation__Device                                       = 1,
	ECreativeAudioPlayerTargetLocation__LocalPlayer                                  = 2,
	ECreativeAudioPlayerTargetLocation__RegisteredPlayers                            = 4,
	ECreativeAudioPlayerTargetLocation__InstigatingPlayer                            = 8,
	ECreativeAudioPlayerTargetLocation__All                                          = 15,
	ECreativeAudioPlayerTargetLocation__ECreativeAudioPlayerTargetLocation_MAX       = 16
};

/// Enum /Script/CRD_AudioPlayerRuntime.EAutoplayOptions
/// Size: 0x08
enum class EAutoplayOptions : uint8_t
{
	EAutoplayOptions__None                                                           = 0,
	EAutoplayOptions__Create                                                         = 1,
	EAutoplayOptions__WaitingForPlayer                                               = 2,
	EAutoplayOptions__Countdown                                                      = 4,
	EAutoplayOptions__Gameplay                                                       = 8,
	EAutoplayOptions__RoundEnd                                                       = 16,
	EAutoplayOptions__GameEnd                                                        = 32,
	EAutoplayOptions__EAutoplayOptions_MAX                                           = 33
};

/// Struct /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCreativeAudioPlayerData
{ 
	FUniqueNetIdRepl                                   NetId;                                                      // 0x0000   (0x0030)  
	class APawn*                                       Pawn;                                                       // 0x0030   (0x0008)  
	float                                              ServerAudioStartTime;                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent
/// Size: 0x0198 (0x0000A0 - 0x000238)
class UCreativeAudioComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x00A0   (0x0008)  MISSED
	float                                              StereoSpreadScaleFactor;                                    // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x24];                                      // 0x00AC   (0x0024)  MISSED
	float                                              FadeInDuration;                                             // 0x00D0   (0x0004)  
	float                                              FadeOutDuration;                                            // 0x00D4   (0x0004)  
	bool                                               bSyncPlayerAudio;                                           // 0x00D8   (0x0001)  
	bool                                               bRestartAudioOnPlay;                                        // 0x00D9   (0x0001)  
	ECreativeAudioPlayerTargetListener                 CanBeHeardBy;                                               // 0x00DA   (0x0001)  
	ECreativeAudioPlayerTargetLocation                 PlayLocation;                                               // 0x00DB   (0x0001)  
	EAutoplayOptions                                   AutoplayOptions;                                            // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	class UFortMinigameProgressComponent*              FortMinigameProgressComponent;                              // 0x00E0   (0x0008)  
	class UCreativeProxyManagerComponent*              CreativeProxyManager;                                       // 0x00E8   (0x0008)  
	class UCreativeRegisteredPlayersManagerComponent*  CreativeRegisteredPlayersManagerComponent;                  // 0x00F0   (0x0008)  
	class UAudioComponent*                             AudioComponent;                                             // 0x00F8   (0x0008)  
	SDK_UNDEFINED(80,12581) /* TMap<FUniqueNetIdRepl, UAudioComponent*> */ __um(PlayerAudioComponents);            // 0x0100   (0x0050)  
	class ACreativeAudioPlayerReplicationProxy*        ClientCachedProxy;                                          // 0x0150   (0x0008)  
	class USoundBase*                                  LastSoundPlayed;                                            // 0x0158   (0x0008)  
	FCreativeAudioPlayerData                           ServerInstigatorData;                                       // 0x0160   (0x0040)  
	bool                                               bEnabled;                                                   // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x27];                                      // 0x01A1   (0x0027)  MISSED
	bool                                               bAudioLoaded;                                               // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FCreativeAudioPlayerData                           CachedInstigatorData;                                       // 0x01D0   (0x0040)  
	TArray<FUniqueNetIdRepl>                           RegisteredPlayerIds;                                        // 0x0210   (0x0010)  
	TArray<FUniqueNetIdRepl>                           NonRegisteredPlayerIds;                                     // 0x0220   (0x0010)  
	EAutoplayOptions                                   CurrentAutoplayState;                                       // 0x0230   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0231   (0x0007)  MISSED


	/// Functions
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.StopAudio
	// void StopAudio(class AController* Player);                                                                            // [0x6414600] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.SetProperties
	// void SetProperties(TWeakObjectPtr<USoundBase*>& Audio, float Volume, float PlaybackSpeed, float NewFadeInDuration, float NewFadeOutDuration, bool bEnableVolumeAttenuation, bool bEnableSpatialization, float StereoSpread, EAttenuationDistanceModel DistanceModel, float AttenuationMinDistance, float AttenuationFalloffDistance, bool bNewSyncPlayerAudio, bool bNewRestartAudioOnPlay, int32_t NewCanBeHeardBy, int32_t NewPlayLocation, int32_t NewAutoplayOptions); // [0xab784c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryUpdateAutoplayStatusOnMinigameAdd
	// void RetryUpdateAutoplayStatusOnMinigameAdd(class AFortMinigame* Minigame);                                           // [0x6414600] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.RetryClientPlayAudio
	// void RetryClientPlayAudio(FCreativeAudioPlayerData& InstigatorData);                                                  // [0xab783f8] Final|Native|Private|HasOutParms 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.ResetDevice
	// void ResetDevice();                                                                                                   // [0xab7805c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.PlayAudio
	// void PlayAudio(class AController* Player);                                                                            // [0x6414600] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_ServerInstigatorData
	// void OnRep_ServerInstigatorData();                                                                                    // [0xab78374] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnRep_RegisteredPlayerIds
	// void OnRep_RegisteredPlayerIds();                                                                                     // [0xab78360] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnProxyDataChanged
	// void OnProxyDataChanged(class ACreativePlayerReplicationProxy* ProxyData);                                            // [0xab782e0] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerUnregistered
	// void OnPlayerUnregistered(class AFortPlayerState* PlayerState);                                                       // [0x6cb20f4] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRemoved
	// void OnPlayerRemoved(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                    // [0xab78070] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerRegistered
	// void OnPlayerRegistered(class AFortPlayerState* PlayerState);                                                         // [0x6b2e50c] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnPlayerAdded
	// void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                      // [0x81d3528] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                      // [0x8684d5c] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                             // [0x36203b0] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnMinigameEnded
	// void OnMinigameEnded();                                                                                               // [0xab7805c] Final|Native|Private 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnEnabledStateChanged
	// void OnEnabledStateChanged(bool bIsEnabled);                                                                          // [0x63fe5cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAudioLoadComplete
	// void OnAudioLoadComplete(FSoftObjectPath Audio);                                                                      // [0xab77e34] Final|Native|Private|HasDefaults 
	// Function /Script/CRD_AudioPlayerRuntime.CreativeAudioComponent.OnAllPlayersUnregistered
	// void OnAllPlayersUnregistered();                                                                                      // [0x248ecf4] Final|Native|Private 
};

/// Class /Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy
/// Size: 0x0040 (0x000298 - 0x0002D8)
class ACreativeAudioPlayerReplicationProxy : public ACreativePlayerReplicationProxy
{ 
public:
	FCreativeAudioPlayerData                           InstigatorData;                                             // 0x0298   (0x0040)  
};

