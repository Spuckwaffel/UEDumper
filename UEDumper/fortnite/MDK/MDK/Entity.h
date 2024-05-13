
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Execution
/// dependency: NetCore

/// Class /Script/Entity.BaseEntity
/// Size: 0x0020 (0x000028 - 0x000048)
class UBaseEntity : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UObject*>)                    Components                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UObject*>)                    OwnedEntities                                               OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Entity.EntityPrefab
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UEntityPrefab : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/Entity.EntityReplicationSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UEntityReplicationSupport : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Entity.EntityReplicator
/// Size: 0x01B8 (0x000290 - 0x000448)
class AEntityReplicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	DMember(bool)                                      bIsNetInitialized                                           OFFSET(get<bool>, {0x290, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  EntityPtr                                                   OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  EntityOwnerPtr                                              OFFSET(get<T>, {0x2C0, 32, 0, 0})
	SMember(FSoftObjectPath)                           EntityServerPath                                            OFFSET(getStruct<T>, {0x2E0, 24, 0, 0})
	SMember(FSoftObjectPath)                           EntityOwnerServerPath                                       OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
	SMember(FFastEntityComponentArray)                 NonDynamicEntityComponents                                  OFFSET(getStruct<T>, {0x310, 280, 0, 0})
	CMember(class UObject*)                            EntityPendingInitialization                                 OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(TArray<class UObject*>)                    EntityComponentsPendingInitialization                       OFFSET(get<T>, {0x430, 16, 0, 0})
};

/// Class /Script/Entity.WorldExecutionSubsystem
/// Size: 0x0220 (0x000030 - 0x000250)
class UWorldExecutionSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UExecutionSubsystem*)                ExecutionSystem                                             OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Entity.EntityRegistryBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UEntityRegistryBase : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Entity.EntityVerseEngineSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UEntityVerseEngineSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/Entity.FastEntityComponentArrayItem
/// Size: 0x0004 (0x00000C - 0x000010)
class FFastEntityComponentArrayItem : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ComponentName                                               OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/Entity.FastEntityComponentArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FFastEntityComponentArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FFastEntityComponentArrayItem>)     Components                                                  OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/Entity.WorldExecutionPhase
/// Size: 0x0030 (0x000028 - 0x000058)
class FWorldExecutionPhase : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/Entity.ReplicatedDataEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FReplicatedDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UObject*)                            ReplicatedData                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Entity.ReplicatedDataRegistry
/// Size: 0x0010 (0x000000 - 0x000010)
class FReplicatedDataRegistry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FReplicatedDataEntry>)              Registry                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/Entity.EEntityNotificationState
/// Size: 0x19
enum class EEntityNotificationState : uint8_t
{
	EEntityNotificationState__Created                                                = 0,
	EEntityNotificationState__Initializing                                           = 1,
	EEntityNotificationState__Initialized                                            = 2,
	EEntityNotificationState__AddingToScene                                          = 3,
	EEntityNotificationState__AddedToScene                                           = 4,
	EEntityNotificationState__BeginningSimulation                                    = 5,
	EEntityNotificationState__BeganSimulation                                        = 6,
	EEntityNotificationState__EndingSimulation                                       = 7,
	EEntityNotificationState__EndedSimulation                                        = 8,
	EEntityNotificationState__RemovingFromScene                                      = 9,
	EEntityNotificationState__RemovedFromScene                                       = 10,
	EEntityNotificationState__Uninitializing                                         = 11,
	EEntityNotificationState__Uninitialized                                          = 12,
	EEntityNotificationState__TearingDown                                            = 13,
	EEntityNotificationState__TearedDown                                             = 14,
	EEntityNotificationState__ClientDenied                                           = 15,
	EEntityNotificationState__Disposing                                              = 16,
	EEntityNotificationState__Disposed                                               = 17,
	EEntityNotificationState__ReInstantiated                                         = 18
};

/// Enum /Script/Entity.EEntityEndPlayReason
/// Size: 0x03
enum class EEntityEndPlayReason : uint8_t
{
	EEntityEndPlayReason__RemoveFromWorld                                            = 0,
	EEntityEndPlayReason__RemoveFromEntity                                           = 1,
	EEntityEndPlayReason__Destroy                                                    = 2
};

