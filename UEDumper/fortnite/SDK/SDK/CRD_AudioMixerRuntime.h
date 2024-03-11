
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioModulation
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice
/// Size: 0x0090 (0x000BD8 - 0x000C68)
class ACreativeAudioMixerDevice : public AFortCreativeDeviceProp
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0BD8   (0x0008)  MISSED
	class USoundControlBusMix*                         Mix;                                                        // 0x0BE0   (0x0008)  
	class USoundControlBus*                            Bus;                                                        // 0x0BE8   (0x0008)  
	float                                              FaderValue;                                                 // 0x0BF0   (0x0004)  
	ECreativeRegisteredPlayerGroups                    CanBeHeardBy;                                               // 0x0BF4   (0x0001)  
	bool                                               bActivateInEditMode;                                        // 0x0BF5   (0x0001)  
	bool                                               bActivateOnGameStart;                                       // 0x0BF6   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0BF7   (0x0001)  MISSED
	class UCreativeProxyManagerComponent*              CreativeProxyManagerComponent;                              // 0x0BF8   (0x0008)  
	class UFortMinigameProgressComponent*              FortMinigameProgressComponent;                              // 0x0C00   (0x0008)  
	class UCreativeRegisteredPlayersManagerComponent*  CreativeRegisteredPlayersManagerComponent;                  // 0x0C08   (0x0008)  
	class UFortActorOptionsComponent*                  FortActorOptionsComponent;                                  // 0x0C10   (0x0008)  
	bool                                               bCachedIsActive;                                            // 0x0C18   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0C19   (0x0007)  MISSED
	class AController*                                 CachedInstigator;                                           // 0x0C20   (0x0008)  
	class ACreativeAudioMixerReplicationProxy*         ClientCachedProxy;                                          // 0x0C28   (0x0008)  
	class USoundControlBusMix*                         CachedBusMix;                                               // 0x0C30   (0x0008)  
	FName                                              CachedBusMixName;                                           // 0x0C38   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0C3C   (0x0004)  MISSED
	TArray<FUniqueNetIdRepl>                           RegisteredPlayerIds;                                        // 0x0C40   (0x0010)  
	TArray<FUniqueNetIdRepl>                           NonRegisteredPlayerIds;                                     // 0x0C50   (0x0010)  
	bool                                               bHasUpdatedStateInEditMode;                                 // 0x0C60   (0x0001)  
	bool                                               bHasUpdatedStateInGameplay;                                 // 0x0C61   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x0C62   (0x0006)  MISSED


	/// Functions
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnProxyDataChanged
	// void OnProxyDataChanged(class ACreativePlayerReplicationProxy* ProxyData);                                            // [0xad0f43c] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPreAnyPropertyChanged
	// void OnPreAnyPropertyChanged();                                                                                       // [0xad0f428] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerUnregistered
	// void OnPlayerUnregistered(class AFortPlayerState* PlayerState);                                                       // [0xad0f3a4] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerRegistered
	// void OnPlayerRegistered(class AFortPlayerState* PlayerState);                                                         // [0xad0f320] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerAdded
	// void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                      // [0xad0f0ac] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnMinigameStarted
	// void OnMinigameStarted();                                                                                             // [0xad0f090] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnMinigameEnded
	// void OnMinigameEnded();                                                                                               // [0xad0f074] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnAllPlayersUnregistered
	// void OnAllPlayersUnregistered();                                                                                      // [0xad0f058] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.DeactivateMix
	// void DeactivateMix();                                                                                                 // [0x36203b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.ActivateMix
	// void ActivateMix();                                                                                                   // [0x36203b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CRD_AudioMixerRuntime.CreativeAudioMixerReplicationProxy
/// Size: 0x0008 (0x000298 - 0x0002A0)
class ACreativeAudioMixerReplicationProxy : public ACreativePlayerReplicationProxy
{ 
public:
	bool                                               bIsActive;                                                  // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED
};

