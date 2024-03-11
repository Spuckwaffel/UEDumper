
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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

/// Enum /Script/MassActors.ESpawnRequestStatus
/// Size: 0x07
enum class ESpawnRequestStatus : uint8_t
{
	ESpawnRequestStatus__None                                                        = 0,
	ESpawnRequestStatus__Pending                                                     = 1,
	ESpawnRequestStatus__Processing                                                  = 2,
	ESpawnRequestStatus__Succeeded                                                   = 3,
	ESpawnRequestStatus__Failed                                                      = 4,
	ESpawnRequestStatus__RetryPending                                                = 5,
	ESpawnRequestStatus__ESpawnRequestStatus_MAX                                     = 6
};

/// Enum /Script/MassActors.EAgentComponentState
/// Size: 0x09
enum class EAgentComponentState : uint8_t
{
	EAgentComponentState__None                                                       = 0,
	EAgentComponentState__EntityPendingCreation                                      = 1,
	EAgentComponentState__EntityCreated                                              = 2,
	EAgentComponentState__PuppetPendingInitialization                                = 3,
	EAgentComponentState__PuppetInitialized                                          = 4,
	EAgentComponentState__PuppetPaused                                               = 5,
	EAgentComponentState__PuppetPendingReplication                                   = 6,
	EAgentComponentState__PuppetReplicatedOrphan                                     = 7,
	EAgentComponentState__EAgentComponentState_MAX                                   = 8
};

/// Class /Script/MassActors.MassActorPoolableInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassActorPoolableInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MassActors.MassActorPoolableInterface.PrepareForPooling
	// void PrepareForPooling();                                                                                             // [0x326a61c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MassActors.MassActorPoolableInterface.PrepareForGame
	// void PrepareForGame();                                                                                                // [0x7270338] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MassActors.MassActorPoolableInterface.CanBePooled
	// bool CanBePooled();                                                                                                   // [0x284fe1c] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MassActors.MassActorSpawnerSubsystem
/// Size: 0x00B8 (0x000038 - 0x0000F0)
class UMassActorSpawnerSubsystem : public UMassSubsystemBase
{ 
public:
	TArray<FInstancedStruct>                           SpawnRequests;                                              // 0x0038   (0x0010)  
	TArray<class AActor*>                              ActorsToDestroy;                                            // 0x0048   (0x0010)  
	TArray<class AActor*>                              DeactivatedActorsToDestroy;                                 // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x0068   (0x0088)  MISSED
};

/// Class /Script/MassActors.MassActorSubsystem
/// Size: 0x0010 (0x000038 - 0x000048)
class UMassActorSubsystem : public UMassSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/MassActors.MassAgentComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UMassAgentComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x80];                                      // 0x00A0   (0x0080)  MISSED
	FMassEntityConfig                                  EntityConfig;                                               // 0x0120   (0x0030)  
	unsigned char                                      UnknownData01_5[0x2C];                                      // 0x0150   (0x002C)  MISSED
	FMassNetworkID                                     NetId;                                                      // 0x017C   (0x0004)  


	/// Functions
	// Function /Script/MassActors.MassAgentComponent.OnRep_NetID
	// void OnRep_NetID();                                                                                                   // [0x6cb2178] Native|Public        
	// Function /Script/MassActors.MassAgentComponent.KillEntity
	// void KillEntity(bool bDestroyActor);                                                                                  // [0xa1076a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassActors.MassAgentComponent.Enable
	// void Enable();                                                                                                        // [0xa10767c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MassActors.MassAgentComponent.Disable
	// void Disable();                                                                                                       // [0xa107658] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MassActors.MassAgentSubsystem
/// Size: 0x0148 (0x000038 - 0x000180)
class UMassAgentSubsystem : public UMassSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0038   (0x0010)  MISSED
	class UMassSpawnerSubsystem*                       SpawnerSystem;                                              // 0x0048   (0x0008)  
	class UMassSimulationSubsystem*                    SimulationSystem;                                           // 0x0050   (0x0008)  
	SDK_UNDEFINED(80,14519) /* TMap<FMassEntityTemplateID, FMassAgentInitializationQueue> */ __um(PendingAgentEntities); // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,14520) /* TMap<FMassEntityTemplateID, FMassAgentInitializationQueue> */ __um(PendingPuppets); // 0x00A8   (0x0050)  
	class UMassReplicationSubsystem*                   ReplicationSubsystem;                                       // 0x00F8   (0x0008)  
	SDK_UNDEFINED(80,14521) /* TMap<FMassNetworkID, UMassAgentComponent*> */ __um(ReplicatedAgentComponents);      // 0x0100   (0x0050)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0150   (0x0030)  MISSED
};

/// Class /Script/MassActors.MassAgentSyncTrait
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassAgentSyncTrait : public UMassEntityTraitBase
{ 
public:
	EMassTranslationDirection                          SyncDirection;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/MassActors.MassAgentCapsuleCollisionSyncTrait
/// Size: 0x0008 (0x000030 - 0x000038)
class UMassAgentCapsuleCollisionSyncTrait : public UMassAgentSyncTrait
{ 
public:
	bool                                               bSyncTransform;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MassActors.MassAgentMovementSyncTrait
/// Size: 0x0000 (0x000030 - 0x000030)
class UMassAgentMovementSyncTrait : public UMassAgentSyncTrait
{ 
public:
};

/// Class /Script/MassActors.MassAgentOrientationSyncTrait
/// Size: 0x0000 (0x000030 - 0x000030)
class UMassAgentOrientationSyncTrait : public UMassAgentSyncTrait
{ 
public:
};

/// Class /Script/MassActors.MassAgentFeetLocationSyncTrait
/// Size: 0x0000 (0x000030 - 0x000030)
class UMassAgentFeetLocationSyncTrait : public UMassAgentSyncTrait
{ 
public:
};

/// Class /Script/MassActors.MassCapsuleTransformToMassTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCapsuleTransformToMassTranslator : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Class /Script/MassActors.MassTransformToActorCapsuleTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassTransformToActorCapsuleTranslator : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Class /Script/MassActors.MassCharacterMovementToMassTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCharacterMovementToMassTranslator : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Class /Script/MassActors.MassCharacterMovementToActorTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCharacterMovementToActorTranslator : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Class /Script/MassActors.MassCharacterOrientationToMassTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCharacterOrientationToMassTranslator : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Class /Script/MassActors.MassCharacterOrientationToActorTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassCharacterOrientationToActorTranslator : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Class /Script/MassActors.MassSceneComponentLocationToMassTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassSceneComponentLocationToMassTranslator : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Class /Script/MassActors.MassSceneComponentLocationToActorTranslator
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassSceneComponentLocationToActorTranslator : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Class /Script/MassActors.MassTranslator_BehaviorTree
/// Size: 0x02A0 (0x0000E0 - 0x000380)
class UMassTranslator_BehaviorTree : public UMassTranslator
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x00E0   (0x02A0)  MISSED
};

/// Struct /Script/MassActors.MassActorSpawnRequestHandle
/// Size: 0x0000 (0x000008 - 0x000008)
struct FMassActorSpawnRequestHandle : FIndexedHandleBase
{ 
};

/// Struct /Script/MassActors.MassActorSpawnRequest
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FMassActorSpawnRequest
{ 
	class UClass*                                      Template;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_5[0x90];                                      // 0x0010   (0x0090)  MISSED
	class AActor*                                      SpawnedActor;                                               // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00A8   (0x0028)  MISSED
};

/// Struct /Script/MassActors.MassGuidFragment
/// Size: 0x000F (0x000001 - 0x000010)
struct FMassGuidFragment : FObjectWrapperFragment
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MassActors.MassActorFragment
/// Size: 0x000B (0x000001 - 0x00000C)
struct FMassActorFragment : FObjectWrapperFragment
{ 
	SDK_UNDEFINED(8,14522) /* TWeakObjectPtr<AActor*> */ __um(Actor);                                              // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0008   (0x0004)  MISSED
};

/// Struct /Script/MassActors.MassAgentInitializationQueue
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMassAgentInitializationQueue
{ 
	TArray<class UMassAgentComponent*>                 AgentComponents;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/MassActors.CapsuleComponentWrapperFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FCapsuleComponentWrapperFragment : FObjectWrapperFragment
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MassActors.MassCapsuleTransformCopyToMassTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassCapsuleTransformCopyToMassTag : FMassTag
{ 
};

/// Struct /Script/MassActors.MassCapsuleTransformCopyToActorTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassCapsuleTransformCopyToActorTag : FMassTag
{ 
};

/// Struct /Script/MassActors.CharacterMovementComponentWrapperFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FCharacterMovementComponentWrapperFragment : FObjectWrapperFragment
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MassActors.MassCharacterMovementCopyToMassTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassCharacterMovementCopyToMassTag : FMassTag
{ 
};

/// Struct /Script/MassActors.MassCharacterMovementCopyToActorTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassCharacterMovementCopyToActorTag : FMassTag
{ 
};

/// Struct /Script/MassActors.MassCharacterOrientationCopyToMassTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassCharacterOrientationCopyToMassTag : FMassTag
{ 
};

/// Struct /Script/MassActors.MassCharacterOrientationCopyToActorTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassCharacterOrientationCopyToActorTag : FMassTag
{ 
};

/// Struct /Script/MassActors.MassSceneComponentWrapperFragment
/// Size: 0x0007 (0x000001 - 0x000008)
struct FMassSceneComponentWrapperFragment : FObjectWrapperFragment
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/MassActors.MassSceneComponentLocationCopyToMassTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassSceneComponentLocationCopyToMassTag : FMassTag
{ 
};

/// Struct /Script/MassActors.MassSceneComponentLocationCopyToActorTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassSceneComponentLocationCopyToActorTag : FMassTag
{ 
};

/// Struct /Script/MassActors.DataFragment_BehaviorTreeComponentWrapper
/// Size: 0x0007 (0x000001 - 0x000008)
struct FDataFragment_BehaviorTreeComponentWrapper : FObjectWrapperFragment
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

