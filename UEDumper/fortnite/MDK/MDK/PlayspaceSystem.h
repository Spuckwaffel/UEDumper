
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: GameplayTags
/// dependency: ModularGameplay
/// dependency: NetCore

/// Class /Script/PlayspaceSystem.OverlapComponent
/// Size: 0x0020 (0x0005C0 - 0x0005E0)
class UOverlapComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:


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
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_PlayerSpawning
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bQueueUserForSpawnWhenAdded                                 OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(float)                                     SpawnDelayMin                                               OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     SpawnDelayMax                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_VoiceManager
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceComponent_VoiceManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerQueuedToSpawn                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class ACameraActor*)                       SpawnCameraActor                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bClientReadyForSpawning                                     OFFSET(get<bool>, {0xB9, 1, 0, 0})
	SMember(FReplicatedSpawnInfo)                      ReplicatedSpawnInfo                                         OFFSET(getStruct<T>, {0xC0, 88, 0, 0})


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
	// void ServerMarkReadyForSpawning();                                                                                       // [0x776cbc8] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
	// void OnRep_ReplicatedSpawnInfo();                                                                                        // [0x776cb24] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
	// FReplicatedSpawnInfo GetSpawnInfo();                                                                                     // [0x776c254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ClientReplicatedSpawnInfo
	// void ClientReplicatedSpawnInfo(FReplicatedSpawnInfo InReplicatedSpawnInfo);                                              // [0x776c054] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/PlayspaceSystem.PlayspaceGameStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceGameStateComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UPlayspaceGameStateComponent_PlayerSpawningManager : public UPlayspaceGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FPlayspaceSpawningInfo>)            SpawningUsersArray                                          OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Class /Script/PlayspaceSystem.GameFeatureAction_AddPlayspaceComponent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddPlayspaceComponent : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FPlayspaceComponentConfiguration>)  PlayspaceComponentDataList                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/PlayspaceSystem.GameFeatureAction_CreatePlayspacesFromConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_CreatePlayspacesFromConfig : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FPlayspaceConfiguration>)           PlayspaceDataList                                           OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/PlayspaceSystem.GameplayVolume
/// Size: 0x00A0 (0x000290 - 0x000330)
class AGameplayVolume : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PlayspaceClassTemplate                                      OFFSET(get<T>, {0x290, 32, 0, 0})
	CMember(EPlayspaceCreationType)                    PlayspaceCreationType                                       OFFSET(get<T>, {0x2B0, 1, 0, 0})
	CMember(class UClass*)                             PlayspaceClass                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bDestroyPlayspaceOnEndPlay                                  OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	CMember(class APlayspace*)                         Playspace                                                   OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     VolumeTags                                                  OFFSET(getStruct<T>, {0x2D0, 32, 0, 0})
	CMember(class UOverlapComponent*)                  BoundsComponent                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/PlayspaceSystem.GameplayVolume.UpdateSize
	// void UpdateSize(FVector& NewScale);                                                                                      // [0x776cc14] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/PlayspaceSystem.GameplayVolume.OnRep_Playspace
	// void OnRep_Playspace();                                                                                                  // [0x776caf4] Final|Native|Protected 
	// Function /Script/PlayspaceSystem.GameplayVolume.OnOverlappedPawnControllerChanged
	// void OnOverlappedPawnControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController); // [0x776c730] Native|Protected     
	// Function /Script/PlayspaceSystem.GameplayVolume.InitializeBoundsComponent
	// void InitializeBoundsComponent(class UOverlapComponent* NewBoundsComponent);                                             // [0x776c2ac] Final|Native|Private|BlueprintCallable 
	// Function /Script/PlayspaceSystem.GameplayVolume.GetPlayspace
	// class APlayspace* GetPlayspace();                                                                                        // [0x3081300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayspaceSystem.Playspace
/// Size: 0x0340 (0x000290 - 0x0005D0)
class APlayspace : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	SMember(FMulticastInlineDelegate)                  NotifyPlayspaceUserAdded                                    OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyPlayspaceUserRemoved                                  OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyPlayspaceInitialized                                  OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyPlayspaceCreatedAndReady                              OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyBoundGameplayVolumeSet                                OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyStartMatch                                            OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyEndMatch                                              OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x3C0, 32, 0, 0})
	SMember(FGameplayTag)                              RequestedPlayspaceParentTag                                 OFFSET(getStruct<T>, {0x3E0, 4, 0, 0})
	CMember(TArray<class UClass*>)                     ChildPlayspaceClasses                                       OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FPlayspaceUserList)                        PlayspaceUsers                                              OFFSET(getStruct<T>, {0x3F8, 376, 0, 0})
	CMember(TArray<class APlayspace*>)                 ChildPlayspaces                                             OFFSET(get<T>, {0x570, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  PendingUsers                                                OFFSET(get<T>, {0x580, 16, 0, 0})
	DMember(bool)                                      bAutoStartMatchOnServerStart                                OFFSET(get<bool>, {0x590, 1, 0, 0})
	CMember(EWithinBoundsEvaluationType)               BoundsEvaluationType                                        OFFSET(get<T>, {0x591, 1, 0, 0})
	CMember(class UPlayspaceManagerComponent*)         PlayspaceManagerCached                                      OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(class AGameplayVolume*)                    BoundGameplayVolume                                         OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	DMember(bool)                                      bMatchHasEnded                                              OFFSET(get<bool>, {0x5AA, 1, 0, 0})
	DMember(float)                                     MatchStartTime                                              OFFSET(get<float>, {0x5AC, 4, 0, 0})


	/// Functions
	// Function /Script/PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
	// void OnRep_PlayspaceUsers();                                                                                             // [0x2927f8c] Final|RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_MatchStartTime
	// void OnRep_MatchStartTime();                                                                                             // [0x3eab63c] RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_BoundGameplayVolume
	// void OnRep_BoundGameplayVolume();                                                                                        // [0x776cab4] Final|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
	// void OnRep_bMatchHasEnded();                                                                                             // [0x3e5b89c] Final|RequiredAPI|Native|Protected 
	// Function /Script/PlayspaceSystem.Playspace.OnRep_bIsInitialized
	// void OnRep_bIsInitialized();                                                                                             // [0x6b2e03c] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_Logic
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayspaceComponent_Logic : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/PlayspaceSystem.PlayspaceComponent_PlayerManager
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UPlayspaceComponent_PlayerManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<FPlayspace_ControllerComponentInfo>) ControllerComponents                                       OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FPlayspace_PlayerStateComponentInfo>) PlayerStateComponents                                     OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FPlayspace_ActorComponentInfo>)     ActorComponents                                             OFFSET(get<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceComponent_PlayerManager.OnPlayerPawnSet
	// void OnPlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);                            // [0x776c9b4] Final|Native|Protected 
};

/// Class /Script/PlayspaceSystem.PlayspaceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlayspaceLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceLibrary.GetPlayspaceForActor
	// class APlayspace* GetPlayspaceForActor(class UObject* WorldContextObject, class AActor* InActor);                        // [0x37c9658] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayspaceSystem.PlayspaceLibrary.DestroyPlayspace
	// void DestroyPlayspace(class APlayspace* PlayspaceToDestroy);                                                             // [0x776c1d8] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PlayspaceSystem.PlayspaceLogic
/// Size: 0x0010 (0x000290 - 0x0002A0)
class APlayspaceLogic : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class APlayspace*)                         Playspace                                                   OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bAutoStartMatchOnServerStart                                OFFSET(get<bool>, {0x298, 1, 0, 0})
	DMember(bool)                                      bMatchHasEnded                                              OFFSET(get<bool>, {0x29A, 1, 0, 0})
	DMember(float)                                     MatchStartTime                                              OFFSET(get<float>, {0x29C, 4, 0, 0})


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime
	// void OnRep_MatchStartTime();                                                                                             // [0x342c5dc] Native|Protected     
	// Function /Script/PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded
	// void OnRep_bMatchHasEnded();                                                                                             // [0x21dbe0c] Final|Native|Private 
};

/// Class /Script/PlayspaceSystem.PlayspaceManagerComponent
/// Size: 0x01C0 (0x0000A0 - 0x000260)
class UPlayspaceManagerComponent : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(class APlayspace*)                         RootPlayspace                                               OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(EPlayspaceRootType)                        PlayspaceRootType                                           OFFSET(get<T>, {0xC0, 1, 0, 0})
	CMember(TArray<FActorOverlapEvent>)                UnhandledEnterEvents                                        OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<FActorOverlapEvent>)                UnhandledExitEvents                                         OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(TSet<APlayerController*>)                  UnassignedPlayers                                           OFFSET(get<T>, {0x200, 80, 0, 0})
	DMember(bool)                                      bAssumeChildPlayspacesAreNested                             OFFSET(get<bool>, {0x250, 1, 0, 0})


	/// Functions
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
	// bool ProcessOverlapEvents(float DeltaTime);                                                                              // [0x776cb38] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace
	// void OnRep_RootPlayspace();                                                                                              // [0x29ffb38] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
	// void OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);                   // [0x776c8f0] Final|Native|Private 
	// Function /Script/PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
	// void OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);                 // [0x776c82c] Final|Native|Private 
};

/// Class /Script/PlayspaceSystem.PlayspaceSpawnActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APlayspaceSpawnActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceUser
/// Size: 0x004C (0x00000C - 0x000058)
class FPlayspaceUser : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FUniqueNetIdRepl)                          UserId                                                      OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(class APlayspace*)                         LeafPlayspace                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class APlayerState*)                       PlayerStateCached                                           OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class AController*)                        ControllerCached                                            OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.ReplicatedSpawnInfo
/// Size: 0x0058 (0x000000 - 0x000058)
class FReplicatedSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   SpawnLocation                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  SpawnRotation                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     ServerSpawnTime                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FVector)                                   LastLocation                                                OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(float)                                     MinTimeForCameraFadeTransition                              OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bIsPlayerRespawning                                         OFFSET(get<bool>, {0x54, 1, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceSpawningInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FPlayspaceSpawningInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FUniqueNetIdRepl)                          UserId                                                      OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(TWeakObjectPtr<APlayspace*>)               RequestingPlayspace                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class AActor*)                             SpawnLocationActor                                          OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FVector)                                   SpawnLocation                                               OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FRotator)                                  SpawnRotation                                               OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	DMember(float)                                     SpawnTimeServer                                             OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVector)                                   LastLocation                                                OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	DMember(float)                                     MinTimeForCameraFadeTransition                              OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bIsRespawnFromDeath                                         OFFSET(get<bool>, {0x94, 1, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceComponentConfiguration
/// Size: 0x0088 (0x000000 - 0x000088)
class FPlayspaceComponentConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PlayspaceComponentClass                                     OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EPlayspaceComponentCreationType)           CreationType                                                OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x28, 72, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceConfiguration
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayspaceConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PlayspaceClass                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EPlayspaceCreationType)                    CreationType                                                OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bForceSyncLoad                                              OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/PlayspaceSystem.Playspace_ComponentInfo_Base
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlayspace_ComponentInfo_Base : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bCreateOnClient                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bCreateOnServer                                             OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/PlayspaceSystem.Playspace_ControllerComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
class FPlayspace_ControllerComponentInfo : public FPlayspace_ComponentInfo_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             ComponentClass                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.Playspace_PlayerStateComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
class FPlayspace_PlayerStateComponentInfo : public FPlayspace_ComponentInfo_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             ComponentClass                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.Playspace_ActorComponentInfo
/// Size: 0x0008 (0x000010 - 0x000018)
class FPlayspace_ActorComponentInfo : public FPlayspace_ComponentInfo_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             ComponentClass                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.ActorOverlapEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FActorOverlapEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class APlayerState*)                       PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class AGameplayVolume*)                    Volume                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/PlayspaceSystem.PlayspaceUserList
/// Size: 0x0070 (0x000108 - 0x000178)
class FPlayspaceUserList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TArray<FPlayspaceUser>)                    PlayspaceUsers                                              OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x16C, 1, 0, 0})
	CMember(class APlayspace*)                         Playspace                                                   OFFSET(get<T>, {0x170, 8, 0, 0})
};

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

