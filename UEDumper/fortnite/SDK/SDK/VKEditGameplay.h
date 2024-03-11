
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
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/VKEditGameplay.VKEditGameplayAssetsToCook
/// Size: 0x0010 (0x000030 - 0x000040)
class UVKEditGameplayAssetsToCook : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(16,15747) /* TArray<TWeakObjectPtr<UObject*>> */ __um(Assets);                                   // 0x0030   (0x0010)  
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_PlaysetRootSpawner
/// Size: 0x0048 (0x0000F8 - 0x000140)
class UPlayspaceComponent_PlaysetRootSpawner : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x00F8   (0x0048)  MISSED
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission
/// Size: 0x0000 (0x000218 - 0x000218)
class UPlayspaceComponent_VKEditCreativeToolsPermission : public UPlayspaceComponent_CreativeToolsPermission
{ 
public:
};

/// Class /Script/VKEditGameplay.VKEditPlayspace
/// Size: 0x0128 (0x0006E8 - 0x000810)
class AVKEditPlayspace : public AFortPlayspace
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x06E8   (0x0050)  MISSED
	SDK_UNDEFINED(32,15748) /* TWeakObjectPtr<UClass*> */ __um(EditorOnlyMinigameSettingsMachineClassToSpawn);     // 0x0738   (0x0020)  
	SDK_UNDEFINED(32,15749) /* TWeakObjectPtr<UClass*> */ __um(EditorOnlyWorldManagerClassToSpawn);                // 0x0758   (0x0020)  
	class UFortLevelStreamComponent*                   LevelStreamComponent;                                       // 0x0778   (0x0008)  
	class UFortProjectEditComponent*                   ProjectEditComponent;                                       // 0x0780   (0x0008)  
	class UPlayspaceComponent_PlayStopPauseManager*    PlayStopPauseManager;                                       // 0x0788   (0x0008)  
	class UPlayspaceComponent_EditConnectionManager*   EditConnectionManager;                                      // 0x0790   (0x0008)  
	class UPlayspaceComponent_LiveEdit*                LiveEditComponent;                                          // 0x0798   (0x0008)  
	class UPlayspaceComponent_VKEditCreativeToolsPermission* CreativeToolsPermission;                              // 0x07A0   (0x0008)  
	class UPlayspaceComponent_CreativeLoadingStateProxy* CreativeLoadingStateProxy;                                // 0x07A8   (0x0008)  
	class UPlayspaceComponent_SpatialGameplay*         SpatialGameplayComponent;                                   // 0x07B0   (0x0008)  
	class UFortVolumeObjectTrackingComponent*          ObjectTrackingComponent;                                    // 0x07B8   (0x0008)  
	class UPlayspaceComponent_DeviceTracking*          DeviceTrackerComponent;                                     // 0x07C0   (0x0008)  
	class UPlayspaceComponent_CreativeInventory*       CreativeInventoryComponent;                                 // 0x07C8   (0x0008)  
	class UPlayspaceComponent_ActorMemoryTracker*      ActorMemoryTrackerComponent;                                // 0x07D0   (0x0008)  
	class UPlayspaceComponent_GlobalMemoryTracker*     GlobalMemoryTrackerComponent;                               // 0x07D8   (0x0008)  
	class UFortCreativeDynamicXpComponent*             FortCreativeDynamicXp;                                      // 0x07E0   (0x0008)  
	class UPlayspaceComponent_CreativeModifyEmotes*    CreativeModifyEmotesComponent;                              // 0x07E8   (0x0008)  
	class UFortPlayspaceComponent_WorldTimeOfDayOverride* WorldTimeOfDayOverrideComponent;                         // 0x07F0   (0x0008)  
	class UFortPlayspaceComponent_NaniteSettingsOverride* NaniteSettingsOverrideComponent;                         // 0x07F8   (0x0008)  
	class UPlayspaceComponent_PlaysetRootSpawner*      PlaysetRootSpawnerComponent;                                // 0x0800   (0x0008)  
	class UPlayspaceComponent_PlayerPawnOverrides*     PlayerPawnOverridesComponent;                               // 0x0808   (0x0008)  


	/// Functions
	// Function /Script/VKEditGameplay.VKEditPlayspace.OnClientActivatedContent
	// void OnClientActivatedContent(FUniqueNetIdRepl& ClientNetId);                                                         // [0xad00b28] Final|Native|Private|HasOutParms|Const 
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager
/// Size: 0x00E8 (0x0000F8 - 0x0001E0)
class UPlayspaceComponent_EditConnectionManager : public UFortPlayspaceComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0xC0];                                      // 0x00F8   (0x00C0)  MISSED
	int32_t                                            EditConnections;                                            // 0x01B8   (0x0004)  
	EVkEditStatus                                      VkEditStatus;                                               // 0x01BC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01BD   (0x0003)  MISSED
	FGameplayTagContainer                              UITagsToHide;                                               // 0x01C0   (0x0020)  


	/// Functions
	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus
	// void OnRep_VkEditStatus();                                                                                            // [0xad00c3c] Final|Native|Protected|Const 
	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections
	// void OnRep_EditConnections();                                                                                         // [0xad00bf8] Final|Native|Protected|Const 
};

