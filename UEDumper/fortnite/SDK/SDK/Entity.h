
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Execution
/// dependency: NetCore

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

/// Class /Script/Entity.BaseEntity
/// Size: 0x0060 (0x000028 - 0x000088)
class UBaseEntity : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,9278) /* TMap<UClass*, UObject*> */ __um(Components);                                         // 0x0028   (0x0050)  
	TArray<class UObject*>                             OwnedEntities;                                              // 0x0078   (0x0010)  
};

/// Class /Script/Entity.CoreEntityPrefabBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UCoreEntityPrefabBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/Entity.CoreEntityReplicationSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UCoreEntityReplicationSupport : public UInterface
{ 
public:
};

/// Struct /Script/Entity.FastCoreEntityComponentArrayItem
/// Size: 0x0024 (0x00000C - 0x000030)
struct FFastCoreEntityComponentArrayItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(32,9279) /* TWeakObjectPtr<UObject*> */ __um(Component);                                         // 0x0010   (0x0020)  
};

/// Struct /Script/Entity.FastCoreEntityComponentArray
/// Size: 0x0010 (0x000108 - 0x000118)
struct FFastCoreEntityComponentArray : FFastArraySerializer
{ 
	TArray<FFastCoreEntityComponentArrayItem>          Components;                                                 // 0x0108   (0x0010)  
};

/// Class /Script/Entity.CoreEntityReplicator
/// Size: 0x0180 (0x000290 - 0x000410)
class ACoreEntityReplicator : public AActor
{ 
public:
	bool                                               bIsNetInitialized;                                          // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0291   (0x0007)  MISSED
	SDK_UNDEFINED(32,9280) /* TWeakObjectPtr<UObject*> */ __um(EntityPtr);                                         // 0x0298   (0x0020)  
	SDK_UNDEFINED(32,9281) /* TWeakObjectPtr<UObject*> */ __um(EntityOwnerPtr);                                    // 0x02B8   (0x0020)  
	FFastCoreEntityComponentArray                      NonDynamicEntityComponents;                                 // 0x02D8   (0x0118)  
	class UObject*                                     EntityPendingInitialization;                                // 0x03F0   (0x0008)  
	TArray<class UObject*>                             EntityComponentsPendingInitialization;                      // 0x03F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0408   (0x0008)  MISSED
};

/// Class /Script/Entity.WorldExecutionSubsystem
/// Size: 0x0220 (0x000030 - 0x000250)
class UWorldExecutionSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UExecutionSubsystem*                         ExecutionSystem;                                            // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x210];                                     // 0x0040   (0x0210)  MISSED
};

/// Class /Script/Entity.CoreEntityRegistryBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreEntityRegistryBase : public UWorldSubsystem
{ 
public:
};

/// Class /Script/Entity.CoreEntityVerseEngineSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UCoreEntityVerseEngineSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/Entity.WorldExecutionPhase
/// Size: 0x0030 (0x000028 - 0x000058)
struct FWorldExecutionPhase : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Struct /Script/Entity.ReplicatedDataEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FReplicatedDataEntry
{ 
	class UObject*                                     ReplicatedData;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/Entity.ReplicatedDataRegistry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FReplicatedDataRegistry
{ 
	TArray<FReplicatedDataEntry>                       Registry;                                                   // 0x0000   (0x0010)  
};

