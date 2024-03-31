
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/ORS.ORSIsReplicated
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSIsReplicated : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ORS.ORSNetSerializable
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSNetSerializable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ORS.ORSNotify
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSNotify : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ORS.ORSSetNetAddressable
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSSetNetAddressable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ORS.ORSSystemNotify
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSSystemNotify : public UORSNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ORS.ORSActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AORSActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class UORSGroupComponent*)                 GroupComponent                                              OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/ORS.ORSActorComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UORSActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:


	/// Functions
	// Function /Script/ORS.ORSActorComponent.OnOwnerAdded
	// void OnOwnerAdded(class AActor* Actor);                                                                                  // [0xc1ba7b0] Final|Native|Private 
};

/// Class /Script/ORS.ORSCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ORS.ORSCheatManager.ORSListObjects
	// void ORSListObjects();                                                                                                   // [0x3518b8c] Final|Exec|Native|Protected 
	// Function /Script/ORS.ORSCheatManager.ORSDebug
	// void ORSDebug(FName& Path);                                                                                              // [0xc1ba748] Final|Exec|Native|Protected|HasOutParms 
};

/// Class /Script/ORS.ORSClassTuple
/// Size: 0x0060 (0x000028 - 0x000088)
class UORSClassTuple : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FClassTuple)                               Tuple                                                       OFFSET(getStruct<T>, {0x28, 64, 0, 0})
};

/// Class /Script/ORS.ORSClassTupleCollection
/// Size: 0x0060 (0x000028 - 0x000088)
class UORSClassTupleCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<class UORSClassTuple*>)             ClassTuples                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<UClass*, FORSClassTupleList>)         ClassMap                                                    OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Class /Script/ORS.ORSConfig
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UORSConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<FName>)                             HighPriority                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             LowPriority                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             Optional                                                    OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/ORS.ORSGlobal
/// Size: 0x0010 (0x000028 - 0x000038)
class UORSGlobal : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UORSInstance*>)               Instances                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ORS.ORSGroup
/// Size: 0x0138 (0x000028 - 0x000160)
class UORSGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UORSGroupComponent*)                 GroupComponent                                              OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UORSGroup*)                          Parent                                                      OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<class UORSGroup*>)                  Children                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/ORS.ORSGroupComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UORSGroupComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(bool)                                      bGlobal                                                     OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(TArray<class UObject*>)                    RegisteredObjects                                           OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class UObject*>)                    ReplicatedObjectInstances                                   OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<class UObject*>)                    ReplicatedObjectReferences                                  OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<class UObject*>)                    OldReplicatedObjectReferences                               OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FORSNetSerializableReplicationProxy>) ReplicatedNetSerializeObjects                             OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<class UObject*>)                    ReplayNetSerializeObjects                                   OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<class UObject*>)                    OldReplicatedNetSerializeObjects                            OFFSET(get<T>, {0x108, 16, 0, 0})


	/// Functions
	// Function /Script/ORS.ORSGroupComponent.OnRep_ReplicatedObjectReferences
	// void OnRep_ReplicatedObjectReferences();                                                                                 // [0xc1ba898] Final|Native|Protected 
	// Function /Script/ORS.ORSGroupComponent.OnRep_ReplicatedNetSerializeObjects
	// void OnRep_ReplicatedNetSerializeObjects();                                                                              // [0xc1ba884] Final|Native|Protected 
	// Function /Script/ORS.ORSGroupComponent.OnRep_ReplayNetSerializeObjects
	// void OnRep_ReplayNetSerializeObjects();                                                                                  // [0xc1ba870] Final|Native|Protected 
};

/// Class /Script/ORS.ORSInstance
/// Size: 0x0158 (0x000028 - 0x000180)
class UORSInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class UGameInstance*)                      GameInstance                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UORSGroup*)                          GlobalGroup                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UORSClassTupleCollection*)           ClassTuples                                                 OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UORSSubscriptionCollection*)         Subscriptions                                               OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/ORS.ORSReplicatedObject
/// Size: 0x0018 (0x000028 - 0x000040)
class UORSReplicatedObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bReplicated                                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/ORS.ORSObject
/// Size: 0x0000 (0x000040 - 0x000040)
class UORSObject : public UORSReplicatedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ORS.ORSSubscriptionCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UORSSubscriptionCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/ORS.ORSSubsystemShutdown
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSSubsystemShutdown : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ORS.ORSSubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UORSSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FORSInstanceRef)                           ORSInstance                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UWorld*)                             GameWorld                                                   OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class AORSWorldActor*)                     WorldActor                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UGameFrameworkComponentManager*)     ComponentManager                                            OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/ORS.ORSSubsystem.OnActorDestroyed
	// void OnActorDestroyed(class AActor* Actor);                                                                              // [0x1e31db4] Final|Native|Protected 
};

/// Class /Script/ORS.ORSSystemActor
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AORSSystemActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FORSGroupObjectList)                       SystemObjects                                               OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
};

/// Class /Script/ORS.ORSPlaceableSystemActor
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class AORSPlaceableSystemActor : public AORSSystemActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/ORS.ORSActorsInitialized
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSActorsInitialized : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ORS.ORSWorldActor
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class AORSWorldActor : public AORSActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Struct /Script/ORS.ClassTuple
/// Size: 0x0040 (0x000000 - 0x000040)
class FClassTuple : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UClass*)                             _Classes                                                    OFFSET(get<T>, {0x0, 56, 0, 0})
};

/// Struct /Script/ORS.ORSClassTupleList
/// Size: 0x0010 (0x000000 - 0x000010)
class FORSClassTupleList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UORSClassTuple*>)             ClassTuples                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ORS.ORSGroupObjectList
/// Size: 0x0010 (0x000000 - 0x000010)
class FORSGroupObjectList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UObject*>)                    BuiltObjects                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ORS.ORSGroupRef
/// Size: 0x0018 (0x000000 - 0x000018)
class FORSGroupRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ORS.ORSInstanceRef
/// Size: 0x0010 (0x000000 - 0x000010)
class FORSInstanceRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ORS.ORSNetSerializableReplicationProxy
/// Size: 0x0038 (0x000000 - 0x000038)
class FORSNetSerializableReplicationProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TScriptInterface<Class>)                   Object                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UClass*)                             ObjectClass                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<char>)                              ObjectData                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(class UPackageMap*)                        ClientPackageMap                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/ORS.ORSObjectArray
/// Size: 0x0038 (0x000000 - 0x000038)
class FORSObjectArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UObject*)                            _Objects                                                    OFFSET(get<T>, {0x0, 56, 0, 0})
};

/// Struct /Script/ORS.ORSObjectTuple
/// Size: 0x0040 (0x000000 - 0x000040)
class FORSObjectTuple : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FORSObjectArray)                           _Objects                                                    OFFSET(getStruct<T>, {0x0, 56, 0, 0})
};

/// Struct /Script/ORS.ORSTransactionCache
/// Size: 0x0028 (0x000000 - 0x000028)
class FORSTransactionCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UORSInstance*)                       Instance                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

