
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
/// dependency: MassLOD
/// dependency: MassSpawner
/// dependency: NetCore

/// Class /Script/MassReplication.MassClientBubbleInfoBase
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AMassClientBubbleInfoBase : public AInfo
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0290   (0x0018)  MISSED
};

/// Class /Script/MassReplication.MassNetworkIDFragmentInitializer
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassNetworkIDFragmentInitializer : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassReplication.MassReplicationGridProcessor
/// Size: 0x07E0 (0x0000C0 - 0x0008A0)
class UMassReplicationGridProcessor : public UMassProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x7E0];                                     // 0x00C0   (0x07E0)  MISSED
};

/// Class /Script/MassReplication.MassReplicationGridRemoverProcessor
/// Size: 0x02A8 (0x0000D8 - 0x000380)
class UMassReplicationGridRemoverProcessor : public UMassObserverProcessor
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x00D8   (0x02A8)  MISSED
};

/// Class /Script/MassReplication.MassReplicationProcessor
/// Size: 0x0D30 (0x0000C0 - 0x000DF0)
class UMassReplicationProcessor : public UMassProcessor
{ 
public:
	class UMassReplicationSubsystem*                   ReplicationSubsystem;                                       // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0xD28];                                     // 0x00C8   (0x0D28)  MISSED
};

/// Class /Script/MassReplication.MassReplicatorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassReplicatorBase : public UObject
{ 
public:
};

/// Class /Script/MassReplication.MassReplicationSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UMassReplicationSettings : public UMassModuleSettings
{ 
public:
	float                                              ReplicationGridCellSize;                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/MassReplication.MassClientBubbleInfoData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMassClientBubbleInfoData
{ 
	TArray<class AMassClientBubbleInfoBase*>           Bubbles;                                                    // 0x0000   (0x0010)  
	class UClass*                                      BubbleClass;                                                // 0x0010   (0x0008)  
};

/// Class /Script/MassReplication.MassReplicationSubsystem
/// Size: 0x01B0 (0x000038 - 0x0001E8)
class UMassReplicationSubsystem : public UMassSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0038   (0x0030)  MISSED
	TArray<FMassClientBubbleInfoData>                  BubbleInfoArray;                                            // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0078   (0x0030)  MISSED
	class UWorld*                                      World;                                                      // 0x00A8   (0x0008)  
	class UMassLODSubsystem*                           MassLODSubsystem;                                           // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x130];                                     // 0x00B8   (0x0130)  MISSED
};

/// Struct /Script/MassReplication.MassReplicationParameters
/// Size: 0x0057 (0x000001 - 0x000058)
struct FMassReplicationParameters : FMassSharedFragment
{ 
	float                                              LODDistance;                                                // 0x0000   (0x0010)  
	float                                              BufferHysteresisOnDistancePercentage;                       // 0x0010   (0x0004)  
	int32_t                                            LODMaxCount;                                                // 0x0014   (0x0010)  
	int32_t                                            LODMaxCountPerViewer;                                       // 0x0024   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0034   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UClass*                                      BubbleInfoClass;                                            // 0x0048   (0x0008)  
	class UClass*                                      ReplicatorClass;                                            // 0x0050   (0x0008)  
};

/// Class /Script/MassReplication.MassReplicationTrait
/// Size: 0x0058 (0x000028 - 0x000080)
class UMassReplicationTrait : public UMassEntityTraitBase
{ 
public:
	FMassReplicationParameters                         Params;                                                     // 0x0028   (0x0058)  
};

/// Struct /Script/MassReplication.MassReplicatedAgentHandle
/// Size: 0x0000 (0x000004 - 0x000004)
struct FMassReplicatedAgentHandle : FCompactIndexedHandleBase
{ 
};

/// Struct /Script/MassReplication.MassFastArrayItemBase
/// Size: 0x0004 (0x00000C - 0x000010)
struct FMassFastArrayItemBase : FFastArraySerializerItem
{ 
	FMassReplicatedAgentHandle                         Handle;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/MassReplication.MassClientBubbleSerializerBase
/// Size: 0x0030 (0x000108 - 0x000138)
struct FMassClientBubbleSerializerBase : FFastArraySerializer
{ 
	class UWorld*                                      World;                                                      // 0x0108   (0x0008)  
	class UMassSpawnerSubsystem*                       SpawnerSubsystem;                                           // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0118   (0x0010)  MISSED
	class UMassReplicationSubsystem*                   ReplicationSubsystem;                                       // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0130   (0x0008)  MISSED
};

/// Struct /Script/MassReplication.MassNetworkIDFragment
/// Size: 0x0003 (0x000001 - 0x000004)
struct FMassNetworkIDFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/MassReplication.MassReplicatedAgentFragment
/// Size: 0x0017 (0x000001 - 0x000018)
struct FMassReplicatedAgentFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MassReplication.MassReplicationViewerInfoFragment
/// Size: 0x0017 (0x000001 - 0x000018)
struct FMassReplicationViewerInfoFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MassReplication.MassReplicationLODFragment
/// Size: 0x0001 (0x000001 - 0x000002)
struct FMassReplicationLODFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0x2];                                       // 0x0000   (0x0002)  MISSED
};

/// Struct /Script/MassReplication.MassReplicationSharedFragment
/// Size: 0x231F (0x000001 - 0x002320)
struct FMassReplicationSharedFragment : FMassSharedFragment
{ 
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<class AMassClientBubbleInfoBase*>           BubbleInfos;                                                // 0x0020   (0x0010)  
	unsigned char                                      UnknownData01_5[0x22E0];                                    // 0x0030   (0x22E0)  MISSED
	class UMassReplicatorBase*                         CachedReplicator;                                           // 0x2310   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x2318   (0x0008)  MISSED
};

/// Struct /Script/MassReplication.MassReplicationGridCellLocationFragment
/// Size: 0x000B (0x000001 - 0x00000C)
struct FMassReplicationGridCellLocationFragment : FMassFragment
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/MassReplication.MassInReplicationGridTag
/// Size: 0x0000 (0x000001 - 0x000001)
struct FMassInReplicationGridTag : FMassTag
{ 
};

/// Struct /Script/MassReplication.ReplicatedAgentPositionYawData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FReplicatedAgentPositionYawData
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	float                                              Yaw;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MassReplication.MassClientHandle
/// Size: 0x0000 (0x000008 - 0x000008)
struct FMassClientHandle : FIndexedHandleBase
{ 
};

/// Struct /Script/MassReplication.MassBubbleInfoClassHandle
/// Size: 0x0000 (0x000004 - 0x000004)
struct FMassBubbleInfoClassHandle : FSimpleIndexedHandleBase
{ 
};

/// Struct /Script/MassReplication.ReplicatedAgentBase
/// Size: 0x0028 (0x000000 - 0x000028)
struct FReplicatedAgentBase
{ 
	FMassNetworkID                                     NetId;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMassEntityTemplateID                              TemplateId;                                                 // 0x0008   (0x0020)  
};

