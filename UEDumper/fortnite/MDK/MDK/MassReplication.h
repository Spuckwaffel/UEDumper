
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
/// dependency: MassLOD
/// dependency: MassSpawner
/// dependency: NetCore

/// Class /Script/MassReplication.MassClientBubbleInfoBase
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AMassClientBubbleInfoBase : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/MassReplication.MassNetworkIDFragmentInitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassNetworkIDFragmentInitializer : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassReplication.MassReplicationGridProcessor
/// Size: 0x07E0 (0x0000C0 - 0x0008A0)
class UMassReplicationGridProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2208;

public:
};

/// Class /Script/MassReplication.MassReplicationGridRemoverProcessor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassReplicationGridRemoverProcessor : public UMassObserverProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/MassReplication.MassReplicationProcessor
/// Size: 0x0D30 (0x0000C0 - 0x000DF0)
class UMassReplicationProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3568;

public:
	CMember(class UMassReplicationSubsystem*)          ReplicationSubsystem                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MassReplication.MassReplicatorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassReplicatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassReplication.MassReplicationSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassReplicationSettings : public UMassModuleSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     ReplicationGridCellSize                                     OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/MassReplication.MassReplicationSubsystem
/// Size: 0x01B0 (0x000038 - 0x0001E8)
class UMassReplicationSubsystem : public UMassSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(TArray<FMassClientBubbleInfoData>)         BubbleInfoArray                                             OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UMassLODSubsystem*)                  MassLODSubsystem                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/MassReplication.MassReplicationTrait
/// Size: 0x0058 (0x000028 - 0x000080)
class UMassReplicationTrait : public UMassEntityTraitBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMassReplicationParameters)                Params                                                      OFFSET(getStruct<T>, {0x28, 88, 0, 0})
};

/// Struct /Script/MassReplication.MassFastArrayItemBase
/// Size: 0x0004 (0x00000C - 0x000010)
class FMassFastArrayItemBase : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMassReplicatedAgentHandle)                Handle                                                      OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/MassReplication.MassReplicatedAgentHandle
/// Size: 0x0000 (0x000004 - 0x000004)
class FMassReplicatedAgentHandle : public FCompactIndexedHandleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MassReplication.MassClientBubbleSerializerBase
/// Size: 0x0030 (0x000108 - 0x000138)
class FMassClientBubbleSerializerBase : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(class UWorld*)                             World                                                       OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UMassSpawnerSubsystem*)              SpawnerSubsystem                                            OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UMassReplicationSubsystem*)          ReplicationSubsystem                                        OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Struct /Script/MassReplication.MassNetworkIDFragment
/// Size: 0x0003 (0x000001 - 0x000004)
class FMassNetworkIDFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MassReplication.MassReplicatedAgentFragment
/// Size: 0x0017 (0x000001 - 0x000018)
class FMassReplicatedAgentFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MassReplication.MassReplicationViewerInfoFragment
/// Size: 0x0017 (0x000001 - 0x000018)
class FMassReplicationViewerInfoFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MassReplication.MassReplicationLODFragment
/// Size: 0x0001 (0x000001 - 0x000002)
class FMassReplicationLODFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
};

/// Struct /Script/MassReplication.MassReplicationParameters
/// Size: 0x0057 (0x000001 - 0x000058)
class FMassReplicationParameters : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     LODDistance                                                 OFFSET(get<float>, {0x0, 16, 0, 0})
	DMember(float)                                     BufferHysteresisOnDistancePercentage                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   LODMaxCount                                                 OFFSET(get<int32_t>, {0x14, 16, 0, 0})
	DMember(int32_t)                                   LODMaxCountPerViewer                                        OFFSET(get<int32_t>, {0x24, 16, 0, 0})
	DMember(float)                                     UpdateInterval                                              OFFSET(get<float>, {0x34, 16, 0, 0})
	CMember(class UClass*)                             BubbleInfoClass                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UClass*)                             ReplicatorClass                                             OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/MassReplication.MassReplicationSharedFragment
/// Size: 0x231F (0x000001 - 0x002320)
class FMassReplicationSharedFragment : public FMassSharedFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8992;

public:
	CMember(TArray<class AMassClientBubbleInfoBase*>)  BubbleInfos                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(class UMassReplicatorBase*)                CachedReplicator                                            OFFSET(get<T>, {0x2310, 8, 0, 0})
};

/// Struct /Script/MassReplication.MassReplicationGridCellLocationFragment
/// Size: 0x000B (0x000001 - 0x00000C)
class FMassReplicationGridCellLocationFragment : public FMassFragment
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/MassReplication.MassInReplicationGridTag
/// Size: 0x0000 (0x000001 - 0x000001)
class FMassInReplicationGridTag : public FMassTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassReplication.MassClientBubbleInfoData
/// Size: 0x0018 (0x000000 - 0x000018)
class FMassClientBubbleInfoData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<class AMassClientBubbleInfoBase*>)  Bubbles                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(class UClass*)                             BubbleClass                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/MassReplication.ReplicatedAgentPositionYawData
/// Size: 0x0020 (0x000000 - 0x000020)
class FReplicatedAgentPositionYawData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MassReplication.MassClientHandle
/// Size: 0x0000 (0x000008 - 0x000008)
class FMassClientHandle : public FIndexedHandleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MassReplication.MassBubbleInfoClassHandle
/// Size: 0x0000 (0x000004 - 0x000004)
class FMassBubbleInfoClassHandle : public FSimpleIndexedHandleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MassReplication.ReplicatedAgentBase
/// Size: 0x0028 (0x000000 - 0x000028)
class FReplicatedAgentBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FMassNetworkID)                            NetId                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMassEntityTemplateID)                     TemplateId                                                  OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

