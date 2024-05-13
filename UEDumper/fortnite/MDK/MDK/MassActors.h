
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassCommon
/// dependency: MassEntity
/// dependency: MassReplication
/// dependency: MassSimulation
/// dependency: MassSpawner
/// dependency: StructUtils

/// Class /Script/MassActors.MassActorPoolableInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassActorPoolableInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MassActors.MassActorPoolableInterface.PrepareForPooling
	// void PrepareForPooling();                                                                                                // [0x303c8e8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MassActors.MassActorPoolableInterface.PrepareForGame
	// void PrepareForGame();                                                                                                   // [0x784ff50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MassActors.MassActorPoolableInterface.CanBePooled
	// bool CanBePooled();                                                                                                      // [0x1844930] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MassActors.MassActorSpawnerSubsystem
/// Size: 0x00B8 (0x000038 - 0x0000F0)
class UMassActorSpawnerSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<FInstancedStruct>)                  SpawnRequests                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class AActor*>)                     ActorsToDestroy                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<class AActor*>)                     DeactivatedActorsToDestroy                                  OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/MassActors.MassActorSubsystem
/// Size: 0x0010 (0x000038 - 0x000048)
class UMassActorSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/MassActors.MassAgentComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UMassAgentComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMassEntityConfig)                         EntityConfig                                                OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FMassNetworkID)                            NetId                                                       OFFSET(getStruct<T>, {0x17C, 4, 0, 0})


	/// Functions
	// Function /Script/MassActors.MassAgentComponent.OnRep_NetID
	// void OnRep_NetID();                                                                                                      // [0x6f2526c] Native|Public        
	// Function /Script/MassActors.MassAgentComponent.KillEntity
	// void KillEntity(bool bDestroyActor);                                                                                     // [0xb2afe7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassActors.MassAgentComponent.Enable
	// void Enable();                                                                                                           // [0xb2afe58] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassActors.MassAgentComponent.Disable
	// void Disable();                                                                                                          // [0xb2afe34] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MassActors.MassAgentSubsystem
/// Size: 0x0148 (0x000038 - 0x000180)
class UMassAgentSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class UMassSpawnerSubsystem*)              SpawnerSystem                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UMassSimulationSubsystem*)           SimulationSystem                                            OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TMap<FMassEntityTemplateID, FMassAgentInitializationQueue>) PendingAgentEntities                       OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FMassEntityTemplateID, FMassAgentInitializationQueue>) PendingPuppets                             OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(class UMassReplicationSubsystem*)          ReplicationSubsystem                                        OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TMap<FMassNetworkID, UMassAgentComponent*>) ReplicatedAgentComponents                                  OFFSET(get<T>, {0x100, 80, 0, 0})
};

/// Class /Script/MassActors.MassAgentSyncTrait
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassAgentSyncTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EMassTranslationDirection)                 SyncDirection                                               OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/MassActors.MassAgentCapsuleCollisionSyncTrait
/// Size: 0x0008 (0x000030 - 0x000038)
class UMassAgentCapsuleCollisionSyncTrait : public UMassAgentSyncTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bSyncTransform                                              OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/MassActors.MassAgentMovementSyncTrait
/// Size: 0x0000 (0x000030 - 0x000030)
class UMassAgentMovementSyncTrait : public UMassAgentSyncTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MassActors.MassAgentOrientationSyncTrait
/// Size: 0x0000 (0x000030 - 0x000030)
class UMassAgentOrientationSyncTrait : public UMassAgentSyncTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MassActors.MassAgentFeetLocationSyncTrait
/// Size: 0x0000 (0x000030 - 0x000030)
class UMassAgentFeetLocationSyncTrait : public UMassAgentSyncTrait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MassActors.MassCapsuleTransformToMassTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCapsuleTransformToMassTranslator : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassActors.MassTransformToActorCapsuleTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassTransformToActorCapsuleTranslator : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassActors.MassCharacterMovementToMassTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCharacterMovementToMassTranslator : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassActors.MassCharacterMovementToActorTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCharacterMovementToActorTranslator : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassActors.MassCharacterOrientationToMassTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCharacterOrientationToMassTranslator : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassActors.MassCharacterOrientationToActorTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCharacterOrientationToActorTranslator : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassActors.MassSceneComponentLocationToMassTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassSceneComponentLocationToMassTranslator : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassActors.MassSceneComponentLocationToActorTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassSceneComponentLocationToActorTranslator : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassActors.MassTranslator_BehaviorTree
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassTranslator_BehaviorTree : public UMassTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Struct /Script/MassActors.MassActorSpawnRequestHandle
/// Size: 0x0000 (0x000008 - 0x000008)
class FMassActorSpawnRequestHandle : public FIndexedHandleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassActors.MassActorSpawnRequest
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FMassActorSpawnRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UClass*)                             Template                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AActor*)                             SpawnedActor                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/MassActors.MassGuidFragment
/// Size: 0x0010 (0x000000 - 0x000010)
class FMassGuidFragment : public FObjectWrapperFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MassActors.MassActorInstanceFragment
/// Size: 0x0020 (0x000000 - 0x000020)
class FMassActorInstanceFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FActorInstanceHandle)                      Handle                                                      OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/MassActors.MassActorFragment
/// Size: 0x000C (0x000000 - 0x00000C)
class FMassActorFragment : public FObjectWrapperFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MassActors.MassAgentInitializationQueue
/// Size: 0x0010 (0x000000 - 0x000010)
class FMassAgentInitializationQueue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UMassAgentComponent*>)        AgentComponents                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MassActors.CapsuleComponentWrapperFragment
/// Size: 0x0008 (0x000000 - 0x000008)
class FCapsuleComponentWrapperFragment : public FObjectWrapperFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassActors.MassCapsuleTransformCopyToMassTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassCapsuleTransformCopyToMassTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassActors.MassCapsuleTransformCopyToActorTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassCapsuleTransformCopyToActorTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassActors.CharacterMovementComponentWrapperFragment
/// Size: 0x0008 (0x000000 - 0x000008)
class FCharacterMovementComponentWrapperFragment : public FObjectWrapperFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassActors.MassCharacterMovementCopyToMassTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassCharacterMovementCopyToMassTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassActors.MassCharacterMovementCopyToActorTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassCharacterMovementCopyToActorTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassActors.MassCharacterOrientationCopyToMassTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassCharacterOrientationCopyToMassTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassActors.MassCharacterOrientationCopyToActorTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassCharacterOrientationCopyToActorTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassActors.MassSceneComponentWrapperFragment
/// Size: 0x0008 (0x000000 - 0x000008)
class FMassSceneComponentWrapperFragment : public FObjectWrapperFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassActors.MassSceneComponentLocationCopyToMassTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassSceneComponentLocationCopyToMassTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassActors.MassSceneComponentLocationCopyToActorTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassSceneComponentLocationCopyToActorTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassActors.DataFragment_BehaviorTreeComponentWrapper
/// Size: 0x0008 (0x000000 - 0x000008)
class FDataFragment_BehaviorTreeComponentWrapper : public FObjectWrapperFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Enum /Script/MassActors.ESpawnRequestStatus
/// Size: 0x06
enum class ESpawnRequestStatus : uint8_t
{
	ESpawnRequestStatus__None                                                        = 0,
	ESpawnRequestStatus__Pending                                                     = 1,
	ESpawnRequestStatus__Processing                                                  = 2,
	ESpawnRequestStatus__Succeeded                                                   = 3,
	ESpawnRequestStatus__Failed                                                      = 4,
	ESpawnRequestStatus__RetryPending                                                = 5
};

/// Enum /Script/MassActors.EAgentComponentState
/// Size: 0x08
enum class EAgentComponentState : uint8_t
{
	EAgentComponentState__None                                                       = 0,
	EAgentComponentState__EntityPendingCreation                                      = 1,
	EAgentComponentState__EntityCreated                                              = 2,
	EAgentComponentState__PuppetPendingInitialization                                = 3,
	EAgentComponentState__PuppetInitialized                                          = 4,
	EAgentComponentState__PuppetPaused                                               = 5,
	EAgentComponentState__PuppetPendingReplication                                   = 6,
	EAgentComponentState__PuppetReplicatedOrphan                                     = 7
};

