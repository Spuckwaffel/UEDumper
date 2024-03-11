
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricRuntime
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UJamFabricBridgePlayspaceComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(class UClass*)                             DeviceCableManagerClass                                     OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UClass*)                             FabricPatchWrapperClass                                     OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FGameplayTag)                              FabricMusicEventTag                                         OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FGameplayTag)                              FabricControlsJamTag                                        OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	CMember(class UJamFabricPatchWrapper*)             FabricPatchWrapperInstance                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(EJamFabricSyncType)                        SyncType                                                    OFFSET(get<T>, {0xC8, 1, 0, 0})


	/// Functions
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnRep_SyncType
	// void OnRep_SyncType();                                                                                                   // [0xacb6ce4] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnPlayspaceVolumeReplicated
	// void OnPlayspaceVolumeReplicated(class APlayspace* Playspace);                                                           // [0xacb6c64] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricTempoChanged
	// void OnFabricTempoChanged(int32_t CurrentTempo);                                                                         // [0xacb6be4] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricPlayStateChanged
	// void OnFabricPlayStateChanged(EFabricMetasoundPlayState CurrentState);                                                   // [0xacb6b60] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricMusicEventPriorityChanged
	// void OnFabricMusicEventPriorityChanged(EFabricMetasoundMusicEventPriority CurrentMusicEventPriority);                    // [0xacb6ae4] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricMusicEventGroupChanged
	// void OnFabricMusicEventGroupChanged(FName& CurrentMusicEventGroup);                                                      // [0xacb6a68] Final|Native|Protected|HasOutParms 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricModeChanged
	// void OnFabricModeChanged(EMusicKeyMode CurrentMode);                                                                     // [0xacb69e8] Final|Native|Protected 
	// Function /Script/JamFabricRuntime.JamFabricBridgePlayspaceComponent.OnFabricKeyChanged
	// void OnFabricKeyChanged(EMusicKey CurrentKey);                                                                           // [0xacb6968] Final|Native|Protected 
};

/// Class /Script/JamFabricRuntime.JamFabricPatchWrapper
/// Size: 0x0000 (0x0006A8 - 0x0006A8)
class UJamFabricPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1704;

public:
};

