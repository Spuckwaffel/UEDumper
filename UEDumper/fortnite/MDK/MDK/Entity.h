
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
/// Size: 0x0060 (0x000028 - 0x000088)
class UBaseEntity : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<UClass*, UObject*>)                   Components                                                  OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TArray<class UObject*>)                    OwnedEntities                                               OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/Entity.CoreEntityPrefabBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UCoreEntityPrefabBlueprint : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/Entity.CoreEntityReplicationSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UCoreEntityReplicationSupport : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Entity.CoreEntityReplicator
/// Size: 0x0180 (0x000290 - 0x000410)
class ACoreEntityReplicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	DMember(bool)                                      bIsNetInitialized                                           OFFSET(get<bool>, {0x290, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  EntityPtr                                                   OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  EntityOwnerPtr                                              OFFSET(get<T>, {0x2B8, 32, 0, 0})
	SMember(FFastCoreEntityComponentArray)             NonDynamicEntityComponents                                  OFFSET(getStruct<T>, {0x2D8, 280, 0, 0})
	CMember(class UObject*)                            EntityPendingInitialization                                 OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(TArray<class UObject*>)                    EntityComponentsPendingInitialization                       OFFSET(get<T>, {0x3F8, 16, 0, 0})
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

/// Class /Script/Entity.CoreEntityRegistryBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreEntityRegistryBase : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Entity.CoreEntityVerseEngineSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UCoreEntityVerseEngineSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/Entity.FastCoreEntityComponentArrayItem
/// Size: 0x0024 (0x00000C - 0x000030)
class FFastCoreEntityComponentArrayItem : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Component                                                   OFFSET(get<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/Entity.FastCoreEntityComponentArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FFastCoreEntityComponentArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FFastCoreEntityComponentArrayItem>) Components                                                  OFFSET(get<T>, {0x108, 16, 0, 0})
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
/// Size: 0x20
enum class EEntityNotificationState : uint8_t
{
	EEntityNotificationState__Created                                                = 0,
	EEntityNotificationState__Initializing                                           = 1,
	EEntityNotificationState__Initialized                                            = 2,
	EEntityNotificationState__AddingToWorld                                          = 3,
	EEntityNotificationState__AddedToWorld                                           = 4,
	EEntityNotificationState__BeginningPlay                                          = 5,
	EEntityNotificationState__BeganPlay                                              = 6,
	EEntityNotificationState__EndingPlay                                             = 7,
	EEntityNotificationState__EndedPlay                                              = 8,
	EEntityNotificationState__RemovingFromWorld                                      = 9,
	EEntityNotificationState__RemovedFromWorld                                       = 10,
	EEntityNotificationState__Uninitializing                                         = 11,
	EEntityNotificationState__Uninitialized                                          = 12,
	EEntityNotificationState__TearingDown                                            = 13,
	EEntityNotificationState__TearedDown                                             = 14,
	EEntityNotificationState__ClientDenied                                           = 15,
	EEntityNotificationState__Disposing                                              = 16,
	EEntityNotificationState__Disposed                                               = 17,
	EEntityNotificationState__ReInstantiated                                         = 18,
	EEntityNotificationState__EEntityNotificationState_MAX                           = 19
};

/// Enum /Script/Entity.EEntityEndPlayReason
/// Size: 0x04
enum class EEntityEndPlayReason : uint8_t
{
	EEntityEndPlayReason__RemoveFromWorld                                            = 0,
	EEntityEndPlayReason__RemoveFromEntity                                           = 1,
	EEntityEndPlayReason__Destroy                                                    = 2,
	EEntityEndPlayReason__EEntityEndPlayReason_MAX                                   = 3
};

