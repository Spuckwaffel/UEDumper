
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
/// dependency: ModularGameplay

/// Class /Script/ORS.ORSIsReplicated
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSIsReplicated : public UInterface
{ 
public:
};

/// Class /Script/ORS.ORSNetSerializable
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSNetSerializable : public UInterface
{ 
public:
};

/// Class /Script/ORS.ORSNotify
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSNotify : public UInterface
{ 
public:
};

/// Class /Script/ORS.ORSSetNetAddressable
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSSetNetAddressable : public UInterface
{ 
public:
};

/// Class /Script/ORS.ORSSystemNotify
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSSystemNotify : public UORSNotify
{ 
public:
};

/// Class /Script/ORS.ORSActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AORSActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0290   (0x0020)  MISSED
	class UORSGroupComponent*                          GroupComponent;                                             // 0x02B0   (0x0008)  
};

/// Class /Script/ORS.ORSActorComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UORSActorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/ORS.ORSActorComponent.OnOwnerAdded
	// void OnOwnerAdded(class AActor* Actor);                                                                               // [0xaecacd0] Final|Native|Private 
};

/// Class /Script/ORS.ORSCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/ORS.ORSCheatManager.ORSListObjects
	// void ORSListObjects();                                                                                                // [0x36203b0] Final|Exec|Native|Protected 
	// Function /Script/ORS.ORSCheatManager.ORSDebug
	// void ORSDebug(FName& Path);                                                                                           // [0xaecac68] Final|Exec|Native|Protected|HasOutParms 
};

/// Struct /Script/ORS.ClassTuple
/// Size: 0x0040 (0x000000 - 0x000040)
struct FClassTuple
{ 
	class UClass*                                      _Classes;                                                   // 0x0000   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/ORS.ORSClassTuple
/// Size: 0x0060 (0x000028 - 0x000088)
class UORSClassTuple : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FClassTuple                                        Tuple;                                                      // 0x0028   (0x0040)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0068   (0x0020)  MISSED
};

/// Class /Script/ORS.ORSClassTupleCollection
/// Size: 0x0060 (0x000028 - 0x000088)
class UORSClassTupleCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UORSClassTuple*>                      ClassTuples;                                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(80,15133) /* TMap<UClass*, FORSClassTupleList> */ __um(ClassMap);                                // 0x0038   (0x0050)  
};

/// Class /Script/ORS.ORSConfig
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UORSConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FName>                                      HighPriority;                                               // 0x0028   (0x0010)  
	TArray<FName>                                      LowPriority;                                                // 0x0038   (0x0010)  
	TArray<FName>                                      Optional;                                                   // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0058   (0x0050)  MISSED
};

/// Class /Script/ORS.ORSGlobal
/// Size: 0x0010 (0x000028 - 0x000038)
class UORSGlobal : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<class UORSInstance*>                        Instances;                                                  // 0x0028   (0x0010)  
};

/// Class /Script/ORS.ORSGroup
/// Size: 0x0138 (0x000028 - 0x000160)
class UORSGroup : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UObject*                                     Owner;                                                      // 0x0028   (0x0008)  
	class UORSGroupComponent*                          GroupComponent;                                             // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0038   (0x0020)  MISSED
	class UORSGroup*                                   Parent;                                                     // 0x0058   (0x0008)  
	TArray<class UORSGroup*>                           Children;                                                   // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_6[0xF0];                                      // 0x0070   (0x00F0)  MISSED
};

/// Struct /Script/ORS.ORSNetSerializableReplicationProxy
/// Size: 0x0038 (0x000000 - 0x000038)
struct FORSNetSerializableReplicationProxy
{ 
	SDK_UNDEFINED(16,15134) /* TScriptInterface<Class> */ __um(Object);                                            // 0x0000   (0x0010)  
	class UClass*                                      ObjectClass;                                                // 0x0010   (0x0008)  
	TArray<char>                                       ObjectData;                                                 // 0x0018   (0x0010)  
	class UPackageMap*                                 ClientPackageMap;                                           // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/ORS.ORSGroupComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UORSGroupComponent : public UActorComponent
{ 
public:
	bool                                               bGlobal;                                                    // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<class UObject*>                             RegisteredObjects;                                          // 0x00A8   (0x0010)  
	TArray<class UObject*>                             ReplicatedObjectInstances;                                  // 0x00B8   (0x0010)  
	TArray<class UObject*>                             ReplicatedObjectReferences;                                 // 0x00C8   (0x0010)  
	TArray<class UObject*>                             OldReplicatedObjectReferences;                              // 0x00D8   (0x0010)  
	TArray<FORSNetSerializableReplicationProxy>        ReplicatedNetSerializeObjects;                              // 0x00E8   (0x0010)  
	TArray<class UObject*>                             ReplayNetSerializeObjects;                                  // 0x00F8   (0x0010)  
	TArray<class UObject*>                             OldReplicatedNetSerializeObjects;                           // 0x0108   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0118   (0x0008)  MISSED


	/// Functions
	// Function /Script/ORS.ORSGroupComponent.OnRep_ReplicatedObjectReferences
	// void OnRep_ReplicatedObjectReferences();                                                                              // [0xaecad78] Final|Native|Protected 
	// Function /Script/ORS.ORSGroupComponent.OnRep_ReplicatedNetSerializeObjects
	// void OnRep_ReplicatedNetSerializeObjects();                                                                           // [0xaecad64] Final|Native|Protected 
	// Function /Script/ORS.ORSGroupComponent.OnRep_ReplayNetSerializeObjects
	// void OnRep_ReplayNetSerializeObjects();                                                                               // [0xaecad50] Final|Native|Protected 
};

/// Class /Script/ORS.ORSInstance
/// Size: 0x0158 (0x000028 - 0x000180)
class UORSInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UGameInstance*                               GameInstance;                                               // 0x0028   (0x0008)  
	class UORSGroup*                                   GlobalGroup;                                                // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0038   (0x0050)  MISSED
	class UORSClassTupleCollection*                    ClassTuples;                                                // 0x0088   (0x0008)  
	class UORSSubscriptionCollection*                  Subscriptions;                                              // 0x0090   (0x0008)  
	unsigned char                                      UnknownData02_6[0xE8];                                      // 0x0098   (0x00E8)  MISSED
};

/// Class /Script/ORS.ORSReplicatedObject
/// Size: 0x0018 (0x000028 - 0x000040)
class UORSReplicatedObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	bool                                               bReplicated;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/ORS.ORSObject
/// Size: 0x0000 (0x000040 - 0x000040)
class UORSObject : public UORSReplicatedObject
{ 
public:
};

/// Class /Script/ORS.ORSSubscriptionCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UORSSubscriptionCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Class /Script/ORS.ORSSubsystemShutdown
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSSubsystemShutdown : public UObject
{ 
public:
};

/// Struct /Script/ORS.ORSInstanceRef
/// Size: 0x0010 (0x000000 - 0x000010)
struct FORSInstanceRef
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/ORS.ORSSubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UORSSubsystem : public UGameInstanceSubsystem
{ 
public:
	FORSInstanceRef                                    ORSInstance;                                                // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0040   (0x0020)  MISSED
	class UWorld*                                      GameWorld;                                                  // 0x0060   (0x0008)  
	class AORSWorldActor*                              WorldActor;                                                 // 0x0068   (0x0008)  
	class UGameFrameworkComponentManager*              ComponentManager;                                           // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0078   (0x0010)  MISSED


	/// Functions
	// Function /Script/ORS.ORSSubsystem.OnActorDestroyed
	// void OnActorDestroyed(class AActor* Actor);                                                                           // [0x1c32298] Final|Native|Protected 
};

/// Struct /Script/ORS.ORSGroupObjectList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FORSGroupObjectList
{ 
	TArray<class UObject*>                             BuiltObjects;                                               // 0x0000   (0x0010)  
};

/// Class /Script/ORS.ORSSystemActor
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AORSSystemActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0290   (0x0020)  MISSED
	FORSGroupObjectList                                SystemObjects;                                              // 0x02B0   (0x0010)  
};

/// Class /Script/ORS.ORSPlaceableSystemActor
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class AORSPlaceableSystemActor : public AORSSystemActor
{ 
public:
};

/// Class /Script/ORS.ORSActorsInitialized
/// Size: 0x0000 (0x000028 - 0x000028)
class UORSActorsInitialized : public UObject
{ 
public:
};

/// Class /Script/ORS.ORSWorldActor
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class AORSWorldActor : public AORSActor
{ 
public:
};

/// Struct /Script/ORS.ORSClassTupleList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FORSClassTupleList
{ 
	TArray<class UORSClassTuple*>                      ClassTuples;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/ORS.ORSGroupRef
/// Size: 0x0018 (0x000000 - 0x000018)
struct FORSGroupRef
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/ORS.ORSObjectArray
/// Size: 0x0038 (0x000000 - 0x000038)
struct FORSObjectArray
{ 
	class UObject*                                     _Objects;                                                   // 0x0000   (0x0038)  
};

/// Struct /Script/ORS.ORSObjectTuple
/// Size: 0x0040 (0x000000 - 0x000040)
struct FORSObjectTuple
{ 
	FORSObjectArray                                    _Objects;                                                   // 0x0000   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ORS.ORSTransactionCache
/// Size: 0x0028 (0x000000 - 0x000028)
struct FORSTransactionCache
{ 
	class UORSInstance*                                Instance;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
};

