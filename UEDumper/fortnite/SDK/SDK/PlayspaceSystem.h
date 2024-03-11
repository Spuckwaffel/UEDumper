
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: NetCore

/// Enum /Script/PlayspaceSystem.EPlayspaceCreationType
/// Size: 0x05
enum class EPlayspaceCreationType : uint8_t
{
	EPlayspaceCreationType__ChildOfRoot                                              = 0,
	EPlayspaceCreationType__RootDestroy                                              = 1,
	EPlayspaceCreationType__RootInserted                                             = 2,
	EPlayspaceCreationType__RootDoNotClobber                                         = 3,
	EPlayspaceCreationType__EPlayspaceCreationType_MAX                               = 4
};

/// Enum /Script/PlayspaceSystem.EWithinBoundsEvaluationType
/// Size: 0x04
enum class EWithinBoundsEvaluationType : uint8_t
{
	EWithinBoundsEvaluationType__UseOverlaps                                         = 0,
	EWithinBoundsEvaluationType__UseBoxBounds                                        = 1,
	EWithinBoundsEvaluationType__UseSphereBounds                                     = 2,
	EWithinBoundsEvaluationType__EWithinBoundsEvaluationType_MAX                     = 3
};

/// Enum /Script/PlayspaceSystem.EPlayspaceComponentCreationType
/// Size: 0x04
enum class EPlayspaceComponentCreationType : uint8_t
{
	EPlayspaceComponentCreationType__Root                                            = 0,
	EPlayspaceComponentCreationType__ByLocation                                      = 1,
	EPlayspaceComponentCreationType__ByTags                                          = 2,
	EPlayspaceComponentCreationType__EPlayspaceComponentCreationType_MAX             = 3
};

/// Enum /Script/PlayspaceSystem.EPlayspaceRootType
/// Size: 0x03
enum class EPlayspaceRootType : uint8_t
{
	EPlayspaceRootType__ShouldBeRoot                                                 = 0,
	EPlayspaceRootType__ShouldBeClobbered                                            = 1,
	EPlayspaceRootType__EPlayspaceRootType_MAX                                       = 2
};

/// Class /Script/PlayspaceSystem.OverlapComponent
/// Size: 0x0020 (0x0005C0 - 0x0005E0)
class UOverlapComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x05C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/PlayspaceSystem.OverlapComponent.OnEndActorOverlap
	// void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x776c5f0] Native|Protected     
	// Function /Script/PlayspaceSystem.OverlapComponent.OnBeginActorOverlap
	// void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x776c3b8] Native|Protected|HasOutParms 
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceComponent : public UGameFrameworkComponent
{ 
public:
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_PlayerSpawning
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent
{ 
public:
	bool                                               bQueueUserForSpawnWhenAdded;                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              SpawnDelayMin;                                              // 0x00A4   (0x0004)  
	float                                              SpawnDelayMax;                                              // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_VoiceManager
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceComponent_VoiceManager : public UPlayspaceComponent
{ 
public:
};

/// Struct /Script/PlayspaceSystem.ReplicatedSpawnInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FReplicatedSpawnInfo
{ 
	FVector                                            SpawnLocation;                                              // 0x0000   (0x0018)  
	FRotator                                           SpawnRotation;                                              // 0x0018   (0x0018)  
	float                                              ServerSpawnTime;                                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FVector                                            LastLocation;                                               // 0x0038   (0x0018)  
	float                                              MinTimeForCameraFadeTransition;                             // 0x0050   (0x0004)  
	bool                                               bIsPlayerRespawning;                                        // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent
{ 
public:
	SDK_UNDEFINED(16,2680) /* FMulticastInlineDelegate */ __um(OnPlayerQueuedToSpawn);                             // 0x00A0   (0x0010)  
	class ACameraActor*                                SpawnCameraActor;                                           // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00B8   (0x0001)  MISSED
	bool                                               bClientReadyForSpawning;                                    // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00BA   (0x0006)  MISSED
	FReplicatedSpawnInfo                               ReplicatedSpawnInfo;                                        // 0x00C0   (0x0058)  


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
	// void ServerMarkReadyForSpawning();                                                                                    // [0x776cbc8] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
	// void OnRep_ReplicatedSpawnInfo();                                                                                     // [0x776cb24] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
	// FReplicatedSpawnInfo GetSpawnInfo();                                                                                  // [0x776c254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ClientReplicatedSpawnInfo
	// void ClientReplicatedSpawnInfo(FReplicatedSpawnInfo InReplicatedSpawnInfo);                                           // [0x776c054] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/PlayspaceSystem.PlayspaceGameStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceGameStateComponent : public UGameStateComponent
{ 
public:
};

/// Struct /Script/PlayspaceSystem.PlayspaceSpawningInfo
/// Size: 0x0098 (0x000000 - 0x000098)
struct FPlayspaceSpawningInfo
{ 
	FUniqueNetIdRepl                                   UserId;                                                     // 0x0000   (0x0030)  
	SDK_UNDEFINED(8,2681) /* TWeakObjectPtr<APlayspace*> */ __um(RequestingPlayspace);                             // 0x0030   (0x0008)  
	class AActor*                                      SpawnLocationActor;                                         // 0x0038   (0x0008)  
	FVector                                            SpawnLocation;                                              // 0x0040   (0x0018)  
	FRotator                                           SpawnRotation;                                              // 0x0058   (0x0018)  
	float                                              SpawnTimeServer;                                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FVector                                            LastLocation;                                               // 0x0078   (0x0018)  
	float                                              MinTimeForCameraFadeTransition;                             // 0x0090   (0x0004)  
	bool                                               bIsRespawnFromDeath;                                        // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0095   (0x0003)  MISSED
};

/// Class /Script/PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x00A0   (0x0048)  MISSED
	TArray<FPlayspaceSpawningInfo>                     SpawningUsersArray;                                         // 0x00E8   (0x0010)  
};

/// Struct /Script/PlayspaceSystem.PlayspaceComponentConfiguration
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPlayspaceComponentConfiguration
{ 
	SDK_UNDEFINED(32,2682) /* TWeakObjectPtr<UClass*> */ __um(PlayspaceComponentClass);                            // 0x0000   (0x0020)  
	EPlayspaceComponentCreationType                    CreationType;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FGameplayTagQuery                                  TagQuery;                                                   // 0x0028   (0x0048)  
	FVector                                            Location;                                                   // 0x0070   (0x0018)  
};

/// Class /Script/PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddPlayspaceComponent : public UGameFeatureAction
{ 
public:
	TArray<FPlayspaceComponentConfiguration>           PlayspaceComponentDataList;                                 // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/PlayspaceSystem.PlayspaceConfiguration
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPlayspaceConfiguration
{ 
	SDK_UNDEFINED(32,2683) /* TWeakObjectPtr<UClass*> */ __um(PlayspaceClass);                                     // 0x0000   (0x0020)  
	EPlayspaceCreationType                             CreationType;                                               // 0x0020   (0x0001)  
	bool                                               bForceSyncLoad;                                             // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Class /Script/PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_CreatePlayspacesFromConfig : public UGameFeatureAction
{ 
public:
	TArray<FPlayspaceConfiguration>                    PlayspaceDataList;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/PlayspaceSystem.GameplayVolume
/// Size: 0x00A0 (0x000290 - 0x000330)
class AGameplayVolume : public AActor
{ 
public:
	SDK_UNDEFINED(32,2684) /* TWeakObjectPtr<UClass*> */ __um(PlayspaceClassTemplate);                             // 0x0290   (0x0020)  
	EPlayspaceCreationType                             PlayspaceCreationType;                                      // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02B1   (0x0007)  MISSED
	class UClass*                                      PlayspaceClass;                                             // 0x02B8   (0x0008)  
	bool                                               bDestroyPlayspaceOnEndPlay;                                 // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class APlayspace*                                  Playspace;                                                  // 0x02C8   (0x0008)  
	FGameplayTagContainer                              VolumeTags;                                                 // 0x02D0   (0x0020)  
	class UOverlapComponent*                           BoundsComponent;                                            // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x02F8   (0x0038)  MISSED


	/// Functions
	// Function /Script/PlayspaceSystem.GameplayVolume.UpdateSize
	// void UpdateSize(FVector& NewScale);                                                                                   // [0x776cc14] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/PlayspaceSystem.GameplayVolume.OnRep_Playspace
	// void OnRep_Playspace();                                                                                               // [0x776caf4] Final|Native|Protected 
	// Function /Script/PlayspaceSystem.GameplayVolume.OnOverlappedPawnControllerChanged
	// void OnOverlappedPawnControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController); // [0x776c730] Native|Protected     
	// Function /Script/PlayspaceSystem.GameplayVolume.InitializeBoundsComponent
	// void InitializeBoundsComponent(class UOverlapComponent* NewBoundsComponent);                                          // [0x776c2ac] Final|Native|Private|BlueprintCallable 
	// Function /Script/PlayspaceSystem.GameplayVolume.GetPlayspace
	// class APlayspace* GetPlayspace();                                                                                     // [0x3081300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/PlayspaceSystem.PlayspaceUser
/// Size: 0x004C (0x00000C - 0x000058)
struct FPlayspaceUser : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	FUniqueNetIdRepl                                   UserId;                                                     // 0x0010   (0x0030)  
	class APlayspace*                                  LeafPlayspace;                                              // 0x0040   (0x0008)  
	class APlayerState*                                PlayerStateCached;                                          // 0x0048   (0x0008)  
	class AController*                                 ControllerCached;                                           // 0x0050   (0x0008)  
};

/// Struct /Script/PlayspaceSystem.PlayspaceUserList
/// Size: 0x0070 (0x000108 - 0x000178)
struct FPlayspaceUserList : FFastArraySerializer
{ 
	TArray<FPlayspaceUser>                             PlayspaceUsers;                                             // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_5[0x54];                                      // 0x0118   (0x0054)  MISSED
	bool                                               bIsInitialized;                                             // 0x016C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x016D   (0x0003)  MISSED
	class APlayspace*                                  Playspace;                                                  // 0x0170   (0x0008)  
};

/// Class /Script/PlayspaceSystem.Playspace
/// Size: 0x0340 (0x000290 - 0x0005D0)
class APlayspace : public AInfo
{ 
public:
	SDK_UNDEFINED(16,2685) /* FMulticastInlineDelegate */ __um(NotifyPlayspaceUserAdded);                          // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x02A0   (0x0018)  MISSED
	SDK_UNDEFINED(16,2686) /* FMulticastInlineDelegate */ __um(NotifyPlayspaceUserRemoved);                        // 0x02B8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x02C8   (0x0018)  MISSED
	SDK_UNDEFINED(16,2687) /* FMulticastInlineDelegate */ __um(NotifyPlayspaceInitialized);                        // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x02F0   (0x0018)  MISSED
	SDK_UNDEFINED(16,2688) /* FMulticastInlineDelegate */ __um(NotifyPlayspaceCreatedAndReady);                    // 0x0308   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x0318   (0x0018)  MISSED
	SDK_UNDEFINED(16,2689) /* FMulticastInlineDelegate */ __um(NotifyBoundGameplayVolumeSet);                      // 0x0330   (0x0010)  
	unsigned char                                      UnknownData04_5[0x30];                                      // 0x0340   (0x0030)  MISSED
	SDK_UNDEFINED(16,2690) /* FMulticastInlineDelegate */ __um(NotifyStartMatch);                                  // 0x0370   (0x0010)  
	unsigned char                                      UnknownData05_5[0x18];                                      // 0x0380   (0x0018)  MISSED
	SDK_UNDEFINED(16,2691) /* FMulticastInlineDelegate */ __um(NotifyEndMatch);                                    // 0x0398   (0x0010)  
	unsigned char                                      UnknownData06_5[0x18];                                      // 0x03A8   (0x0018)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x03C0   (0x0020)  
	FGameplayTag                                       RequestedPlayspaceParentTag;                                // 0x03E0   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x03E4   (0x0004)  MISSED
	TArray<class UClass*>                              ChildPlayspaceClasses;                                      // 0x03E8   (0x0010)  
	FPlayspaceUserList                                 PlayspaceUsers;                                             // 0x03F8   (0x0178)  
	TArray<class APlayspace*>                          ChildPlayspaces;                                            // 0x0570   (0x0010)  
	TArray<FUniqueNetIdRepl>                           PendingUsers;                                               // 0x0580   (0x0010)  
	bool                                               bAutoStartMatchOnServerStart;                               // 0x0590   (0x0001)  
	EWithinBoundsEvaluationType                        BoundsEvaluationType;                                       // 0x0591   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x0592   (0x0006)  MISSED
	class UPlayspaceManagerComponent*                  PlayspaceManagerCached;                                     // 0x0598   (0x0008)  
	class AGameplayVolume*                             BoundGameplayVolume;                                        // 0x05A0   (0x0008)  
	bool                                               bIsInitialized;                                             // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData09_5[0x1];                                       // 0x05A9   (0x0001)  MISSED
	bool                                               bMatchHasEnded;                                             // 0x05AA   (0x0001)  
	unsigned char                                      UnknownData10_5[0x1];                                       // 0x05AB   (0x0001)  MISSED
	float                                              MatchStartTime;                                             // 0x05AC   (0x0004)  
	unsigned char                                      UnknownData11_6[0x20];                                      // 0x05B0   (0x0020)  MISSED


	/// Functions
	// Function /Script/PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
	// void OnRep_PlayspaceUsers();                                                                                          // [0x2927f8c] Final|RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_MatchStartTime
	// void OnRep_MatchStartTime();                                                                                          // [0x3eab63c] RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_BoundGameplayVolume
	// void OnRep_BoundGameplayVolume();                                                                                     // [0x776cab4] Final|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
	// void OnRep_bMatchHasEnded();                                                                                          // [0x3e5b89c] Final|RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_bIsInitialized
	// void OnRep_bIsInitialized();                                                                                          // [0x6b2e03c] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_Logic
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceComponent_Logic : public UGameFrameworkComponent
{ 
public:
};

/// Struct /Script/PlayspaceSystem.Playspace_ComponentInfo_Base
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPlayspace_ComponentInfo_Base
{ 
	bool                                               bCreateOnClient;                                            // 0x0008   (0x0001)  
	bool                                               bCreateOnServer;                                            // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/PlayspaceSystem.Playspace_ControllerComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
struct FPlayspace_ControllerComponentInfo : FPlayspace_ComponentInfo_Base
{ 
	class UClass*                                      ComponentClass;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/PlayspaceSystem.Playspace_PlayerStateComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
struct FPlayspace_PlayerStateComponentInfo : FPlayspace_ComponentInfo_Base
{ 
	class UClass*                                      ComponentClass;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/PlayspaceSystem.Playspace_ActorComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
struct FPlayspace_ActorComponentInfo : FPlayspace_ComponentInfo_Base
{ 
	class UClass*                                      ComponentClass;                                             // 0x0010   (0x0008)  
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_PlayerManager
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UPlayspaceComponent_PlayerManager : public UPlayspaceComponent
{ 
public:
	TArray<FPlayspace_ControllerComponentInfo>         ControllerComponents;                                       // 0x00A0   (0x0010)  
	TArray<FPlayspace_PlayerStateComponentInfo>        PlayerStateComponents;                                      // 0x00B0   (0x0010)  
	TArray<FPlayspace_ActorComponentInfo>              ActorComponents;                                            // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0xF0];                                      // 0x00D0   (0x00F0)  MISSED


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceComponent_PlayerManager.OnPlayerPawnSet
	// void OnPlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                         // [0x776c9b4] Final|Native|Protected 
};

/// Class /Script/PlayspaceSystem.PlayspaceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlayspaceLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceLibrary.GetPlayspaceForActor
	// class APlayspace* GetPlayspaceForActor(class UObject* WorldContextObject, class AActor* InActor);                     // [0x37c9658] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayspaceSystem.PlayspaceLibrary.DestroyPlayspace
	// void DestroyPlayspace(class APlayspace* PlayspaceToDestroy);                                                          // [0x776c1d8] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PlayspaceSystem.PlayspaceLogic
/// Size: 0x0010 (0x000290 - 0x0002A0)
class APlayspaceLogic : public AActor
{ 
public:
	class APlayspace*                                  Playspace;                                                  // 0x0290   (0x0008)  
	bool                                               bAutoStartMatchOnServerStart;                               // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0299   (0x0001)  MISSED
	bool                                               bMatchHasEnded;                                             // 0x029A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x029B   (0x0001)  MISSED
	float                                              MatchStartTime;                                             // 0x029C   (0x0004)  


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime
	// void OnRep_MatchStartTime();                                                                                          // [0x342c5dc] Native|Protected     
	// Function /Script/PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded
	// void OnRep_bMatchHasEnded();                                                                                          // [0x21dbe0c] Final|Native|Private 
};

/// Struct /Script/PlayspaceSystem.ActorOverlapEvent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FActorOverlapEvent
{ 
	class APlayerState*                                PlayerState;                                                // 0x0000   (0x0008)  
	class AGameplayVolume*                             Volume;                                                     // 0x0008   (0x0008)  
};

/// Class /Script/PlayspaceSystem.PlayspaceManagerComponent
/// Size: 0x01C0 (0x0000A0 - 0x000260)
class UPlayspaceManagerComponent : public UGameStateComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x00A0   (0x0018)  MISSED
	class APlayspace*                                  RootPlayspace;                                              // 0x00B8   (0x0008)  
	EPlayspaceRootType                                 PlayspaceRootType;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x11F];                                     // 0x00C1   (0x011F)  MISSED
	TArray<FActorOverlapEvent>                         UnhandledEnterEvents;                                       // 0x01E0   (0x0010)  
	TArray<FActorOverlapEvent>                         UnhandledExitEvents;                                        // 0x01F0   (0x0010)  
	SDK_UNDEFINED(80,2692) /* TSet<APlayerController*> */ __um(UnassignedPlayers);                                 // 0x0200   (0x0050)  
	bool                                               bAssumeChildPlayspacesAreNested;                            // 0x0250   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0251   (0x000F)  MISSED


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
	// bool ProcessOverlapEvents(float DeltaTime);                                                                           // [0x776cb38] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace
	// void OnRep_RootPlayspace();                                                                                           // [0x29ffb38] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
	// void OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);                // [0x776c8f0] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
	// void OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);              // [0x776c82c] Final|Native|Private 
};

/// Class /Script/PlayspaceSystem.PlayspaceSpawnActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APlayspaceSpawnActor : public AActor
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x0290   (0x0008)  
};

