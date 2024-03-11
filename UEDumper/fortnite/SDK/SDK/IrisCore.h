
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: NetCore

/// Enum /Script/IrisCore.EDataStreamSendStatus
/// Size: 0x03
enum class EDataStreamSendStatus : uint8_t
{
	EDataStreamSendStatus__Send                                                      = 0,
	EDataStreamSendStatus__Pause                                                     = 1,
	EDataStreamSendStatus__EDataStreamSendStatus_MAX                                 = 2
};

/// Enum /Script/IrisCore.ENetObjectCountLimiterMode
/// Size: 0x03
enum class ENetObjectCountLimiterMode : uint32_t
{
	ENetObjectCountLimiterMode__RoundRobin                                           = 0,
	ENetObjectCountLimiterMode__Fill                                                 = 1,
	ENetObjectCountLimiterMode__ENetObjectCountLimiterMode_MAX                       = 2
};

/// Enum /Script/IrisCore.ENetFilterType
/// Size: 0x03
enum class ENetFilterType : uint8_t
{
	ENetFilterType__PrePoll_Raw                                                      = 0,
	ENetFilterType__PostPoll_FragmentBased                                           = 1,
	ENetFilterType__ENetFilterType_MAX                                               = 2
};

/// Class /Script/IrisCore.DataStream
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataStream : public UObject
{ 
public:
};

/// Struct /Script/IrisCore.DataStreamDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDataStreamDefinition
{ 
	FName                                              DataStreamName;                                             // 0x0000   (0x0004)  
	FName                                              ClassName;                                                  // 0x0004   (0x0004)  
	class UClass*                                      Class;                                                      // 0x0008   (0x0008)  
	EDataStreamSendStatus                              DefaultSendStatus;                                          // 0x0010   (0x0001)  
	bool                                               bAutoCreate;                                                // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Class /Script/IrisCore.DataStreamDefinitions
/// Size: 0x0018 (0x000028 - 0x000040)
class UDataStreamDefinitions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FDataStreamDefinition>                      DataStreamDefinitions;                                      // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/IrisCore.DataStreamManager
/// Size: 0x0008 (0x000028 - 0x000030)
class UDataStreamManager : public UDataStream
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/IrisCore.NetObjectFilterConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UNetObjectFilterConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	ENetFilterType                                     FilterType;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/IrisCore.FilterOutNetObjectFilterConfig
/// Size: 0x0000 (0x000030 - 0x000030)
class UFilterOutNetObjectFilterConfig : public UNetObjectFilterConfig
{ 
public:
};

/// Class /Script/IrisCore.NetObjectFilter
/// Size: 0x0028 (0x000028 - 0x000050)
class UNetObjectFilter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Class /Script/IrisCore.FilterOutNetObjectFilter
/// Size: 0x0000 (0x000050 - 0x000050)
class UFilterOutNetObjectFilter : public UNetObjectFilter
{ 
public:
};

/// Class /Script/IrisCore.IrisObjectReferencePackageMap
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UIrisObjectReferencePackageMap : public UPackageMap
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Class /Script/IrisCore.NetObjectPrioritizer
/// Size: 0x0000 (0x000028 - 0x000028)
class UNetObjectPrioritizer : public UObject
{ 
public:
};

/// Class /Script/IrisCore.LocationBasedNetObjectPrioritizer
/// Size: 0x0038 (0x000028 - 0x000060)
class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0028   (0x0038)  MISSED
};

/// Class /Script/IrisCore.NetBlobHandler
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetBlobHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/IrisCore.NetBlobHandlerDefinition
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNetBlobHandlerDefinition
{ 
	FName                                              ClassName;                                                  // 0x0000   (0x0004)  
};

/// Class /Script/IrisCore.NetBlobHandlerDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetBlobHandlerDefinitions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FNetBlobHandlerDefinition>                  NetBlobHandlerDefinitions;                                  // 0x0028   (0x0010)  
};

/// Class /Script/IrisCore.NetObjectBlobHandler
/// Size: 0x0000 (0x000038 - 0x000038)
class UNetObjectBlobHandler : public UNetBlobHandler
{ 
public:
};

/// Class /Script/IrisCore.NetObjectConnectionFilterConfig
/// Size: 0x0008 (0x000030 - 0x000038)
class UNetObjectConnectionFilterConfig : public UNetObjectFilterConfig
{ 
public:
	uint16_t                                           MaxObjectCount;                                             // 0x0030   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Class /Script/IrisCore.NetObjectConnectionFilter
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UNetObjectConnectionFilter : public UNetObjectFilter
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0050   (0x0050)  MISSED
};

/// Class /Script/IrisCore.NetObjectPrioritizerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class UNetObjectPrioritizerConfig : public UObject
{ 
public:
};

/// Class /Script/IrisCore.NetObjectCountLimiterConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{ 
public:
	ENetObjectCountLimiterMode                         Mode;                                                       // 0x0028   (0x0004)  
	uint32_t                                           MaxObjectCount;                                             // 0x002C   (0x0004)  
	float                                              Priority;                                                   // 0x0030   (0x0004)  
	float                                              OwningConnectionPriority;                                   // 0x0034   (0x0004)  
	bool                                               bEnableOwnedObjectsFastLane;                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/IrisCore.NetObjectCountLimiter
/// Size: 0x0068 (0x000028 - 0x000090)
class UNetObjectCountLimiter : public UNetObjectPrioritizer
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED
};

/// Struct /Script/IrisCore.NetObjectFilterDefinition
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNetObjectFilterDefinition
{ 
	FName                                              FilterName;                                                 // 0x0000   (0x0004)  
	FName                                              ClassName;                                                  // 0x0004   (0x0004)  
	FName                                              ConfigClassName;                                            // 0x0008   (0x0004)  
};

/// Class /Script/IrisCore.NetObjectFilterDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetObjectFilterDefinitions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FNetObjectFilterDefinition>                 NetObjectFilterDefinitions;                                 // 0x0028   (0x0010)  
};

/// Class /Script/IrisCore.NetObjectGridFilterConfig
/// Size: 0x0050 (0x000030 - 0x000080)
class UNetObjectGridFilterConfig : public UNetObjectFilterConfig
{ 
public:
	uint32_t                                           ViewPosRelevancyFrameCount;                                 // 0x0030   (0x0004)  
	float                                              CellSizeX;                                                  // 0x0034   (0x0004)  
	float                                              CellSizeY;                                                  // 0x0038   (0x0004)  
	float                                              MaxCullDistance;                                            // 0x003C   (0x0004)  
	float                                              DefaultCullDistance;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            MinPos;                                                     // 0x0048   (0x0018)  
	FVector                                            MaxPos;                                                     // 0x0060   (0x0018)  
	bool                                               bUseExactCullDistance;                                      // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/IrisCore.NetObjectGridFilter
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class UNetObjectGridFilter : public UNetObjectFilter
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0050   (0x00A8)  MISSED
};

/// Class /Script/IrisCore.NetObjectGridWorldLocFilter
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UNetObjectGridWorldLocFilter : public UNetObjectGridFilter
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/IrisCore.NetObjectGridFragmentLocFilter
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UNetObjectGridFragmentLocFilter : public UNetObjectGridFilter
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00F8   (0x0050)  MISSED
};

/// Struct /Script/IrisCore.NetObjectPrioritizerDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNetObjectPrioritizerDefinition
{ 
	FName                                              PrioritizerName;                                            // 0x0000   (0x0004)  
	FName                                              ClassName;                                                  // 0x0004   (0x0004)  
	class UClass*                                      Class;                                                      // 0x0008   (0x0008)  
	FName                                              ConfigClassName;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      ConfigClass;                                                // 0x0018   (0x0008)  
};

/// Class /Script/IrisCore.NetObjectPrioritizerDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetObjectPrioritizerDefinitions : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FNetObjectPrioritizerDefinition>            NetObjectPrioritizerDefinitions;                            // 0x0028   (0x0010)  
};

/// Class /Script/IrisCore.NetRPCHandler
/// Size: 0x0008 (0x000038 - 0x000040)
class UNetRPCHandler : public UNetBlobHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/IrisCore.NetTokenDataStream
/// Size: 0x0050 (0x000028 - 0x000078)
class UNetTokenDataStream : public UDataStream
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/IrisCore.NopNetObjectFilterConfig
/// Size: 0x0000 (0x000030 - 0x000030)
class UNopNetObjectFilterConfig : public UNetObjectFilterConfig
{ 
public:
};

/// Class /Script/IrisCore.NopNetObjectFilter
/// Size: 0x0000 (0x000050 - 0x000050)
class UNopNetObjectFilter : public UNetObjectFilter
{ 
public:
};

/// Class /Script/IrisCore.ReplicationBridge
/// Size: 0x00E8 (0x000028 - 0x000110)
class UReplicationBridge : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x110];                                     // 0x0000   (0x0110)  MISSED
};

/// Class /Script/IrisCore.ObjectReplicationBridge
/// Size: 0x0440 (0x000110 - 0x000550)
class UObjectReplicationBridge : public UReplicationBridge
{ 
public:
	unsigned char                                      UnknownData00_1[0x440];                                     // 0x0110   (0x0440)  MISSED
};

/// Struct /Script/IrisCore.ObjectReplicationBridgePollConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FObjectReplicationBridgePollConfig
{ 
	FName                                              ClassName;                                                  // 0x0000   (0x0004)  
	float                                              PollFrequency;                                              // 0x0004   (0x0004)  
	bool                                               bIncludeSubclasses;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/IrisCore.ObjectReplicationBridgeFilterConfig
/// Size: 0x0008 (0x000000 - 0x000008)
struct FObjectReplicationBridgeFilterConfig
{ 
	FName                                              ClassName;                                                  // 0x0000   (0x0004)  
	FName                                              DynamicFilterName;                                          // 0x0004   (0x0004)  
};

/// Struct /Script/IrisCore.ObjectReplicationBridgePrioritizerConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FObjectReplicationBridgePrioritizerConfig
{ 
	FName                                              ClassName;                                                  // 0x0000   (0x0004)  
	FName                                              PrioritizerName;                                            // 0x0004   (0x0004)  
	bool                                               bForceEnableOnAllInstances;                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
/// Size: 0x0008 (0x000000 - 0x000008)
struct FObjectReplicationBridgeDeltaCompressionConfig
{ 
	FName                                              ClassName;                                                  // 0x0000   (0x0004)  
	bool                                               bEnableDeltaCompression;                                    // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/IrisCore.ObjectReplicatedBridgeCriticalClassConfig
/// Size: 0x0008 (0x000000 - 0x000008)
struct FObjectReplicatedBridgeCriticalClassConfig
{ 
	FName                                              ClassName;                                                  // 0x0000   (0x0004)  
	bool                                               bDisconnectOnProtocolMismatch;                              // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/IrisCore.ObjectReplicationBridgeTypeStatsConfig
/// Size: 0x000C (0x000000 - 0x00000C)
struct FObjectReplicationBridgeTypeStatsConfig
{ 
	FName                                              ClassName;                                                  // 0x0000   (0x0004)  
	FName                                              TypeStatsName;                                              // 0x0004   (0x0004)  
	bool                                               bIncludeInMinimalCSVStats;                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/IrisCore.ObjectReplicationBridgeConfig
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UObjectReplicationBridgeConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FObjectReplicationBridgePollConfig>         PollConfigs;                                                // 0x0028   (0x0010)  
	TArray<FObjectReplicationBridgeFilterConfig>       FilterConfigs;                                              // 0x0038   (0x0010)  
	TArray<FObjectReplicationBridgePrioritizerConfig>  PrioritizerConfigs;                                         // 0x0048   (0x0010)  
	TArray<FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs;                                // 0x0058   (0x0010)  
	TArray<FObjectReplicatedBridgeCriticalClassConfig> CriticalClassConfigs;                                       // 0x0068   (0x0010)  
	bool                                               bAllClassesCritical;                                        // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FObjectReplicationBridgeTypeStatsConfig>    TypeStatsConfigs;                                           // 0x0080   (0x0010)  
	FName                                              DefaultSpatialFilterName;                                   // 0x0090   (0x0004)  
	FName                                              RequiredNetDriverChannelClassName;                          // 0x0094   (0x0004)  
	TArray<FName>                                      CriticalActorClasses;                                       // 0x0098   (0x0010)  
};

/// Class /Script/IrisCore.SequentialPartialNetBlobHandlerConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class USequentialPartialNetBlobHandlerConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	uint32_t                                           MaxPartBitCount;                                            // 0x0028   (0x0004)  
	uint32_t                                           MaxPartCount;                                               // 0x002C   (0x0004)  
};

/// Class /Script/IrisCore.PartialNetObjectAttachmentHandlerConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UPartialNetObjectAttachmentHandlerConfig : public USequentialPartialNetBlobHandlerConfig
{ 
public:
	uint32_t                                           BitCountSplitThreshold;                                     // 0x0030   (0x0004)  
	uint32_t                                           ClientUnreliableBitCountSplitThreshold;                     // 0x0034   (0x0004)  
	uint32_t                                           ServerUnreliableBitCountSplitThreshold;                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/IrisCore.SequentialPartialNetBlobHandler
/// Size: 0x0010 (0x000038 - 0x000048)
class USequentialPartialNetBlobHandler : public UNetBlobHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/IrisCore.PartialNetObjectAttachmentHandler
/// Size: 0x0000 (0x000048 - 0x000048)
class UPartialNetObjectAttachmentHandler : public USequentialPartialNetBlobHandler
{ 
public:
};

/// Class /Script/IrisCore.ReplicationDataStream
/// Size: 0x0010 (0x000028 - 0x000038)
class UReplicationDataStream : public UDataStream
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/IrisCore.ReplicationSystem
/// Size: 0x0030 (0x000028 - 0x000058)
class UReplicationSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	class UReplicationBridge*                          ReplicationBridge;                                          // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/IrisCore.SphereNetObjectPrioritizerConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{ 
public:
	float                                              InnerRadius;                                                // 0x0028   (0x0004)  
	float                                              OuterRadius;                                                // 0x002C   (0x0004)  
	float                                              InnerPriority;                                              // 0x0030   (0x0004)  
	float                                              OuterPriority;                                              // 0x0034   (0x0004)  
	float                                              OutsidePriority;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/IrisCore.SphereNetObjectPrioritizer
/// Size: 0x0008 (0x000060 - 0x000068)
class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
/// Size: 0x0008 (0x000040 - 0x000048)
class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig
{ 
public:
	float                                              OwnerPriorityBoost;                                         // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USphereWithOwnerBoostNetObjectPrioritizer : public USphereNetObjectPrioritizer
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0068   (0x0038)  MISSED
};

/// Struct /Script/IrisCore.SupportsStructNetSerializerConfig
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSupportsStructNetSerializerConfig
{ 
	FName                                              StructName;                                                 // 0x0000   (0x0004)  
	bool                                               bCanUseStructNetSerializer;                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Class /Script/IrisCore.ReplicationStateDescriptorConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UReplicationStateDescriptorConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FSupportsStructNetSerializerConfig>         SupportsStructNetSerializerList;                            // 0x0028   (0x0010)  
};

/// Struct /Script/IrisCore.NetSerializerConfig
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNetSerializerConfig
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/IrisCore.DateTimeNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FDateTimeNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.EnumInt8NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEnumInt8NetSerializerConfig : FNetSerializerConfig
{ 
	int8_t                                             LowerBound;                                                 // 0x0010   (0x0001)  
	int8_t                                             UpperBound;                                                 // 0x0011   (0x0001)  
	char                                               BitCount;                                                   // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x0013   (0x000D)  MISSED
};

/// Struct /Script/IrisCore.EnumInt16NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEnumInt16NetSerializerConfig : FNetSerializerConfig
{ 
	int16_t                                            LowerBound;                                                 // 0x0010   (0x0002)  
	int16_t                                            UpperBound;                                                 // 0x0012   (0x0002)  
	char                                               BitCount;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
};

/// Struct /Script/IrisCore.EnumInt32NetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
struct FEnumInt32NetSerializerConfig : FNetSerializerConfig
{ 
	int32_t                                            LowerBound;                                                 // 0x0010   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0014   (0x0004)  
	char                                               BitCount;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0019   (0x000F)  MISSED
};

/// Struct /Script/IrisCore.EnumInt64NetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
struct FEnumInt64NetSerializerConfig : FNetSerializerConfig
{ 
	int64_t                                            LowerBound;                                                 // 0x0010   (0x0008)  
	int64_t                                            UpperBound;                                                 // 0x0018   (0x0008)  
	char                                               BitCount;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0021   (0x000F)  MISSED
};

/// Struct /Script/IrisCore.EnumUint8NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEnumUint8NetSerializerConfig : FNetSerializerConfig
{ 
	char                                               LowerBound;                                                 // 0x0010   (0x0001)  
	char                                               UpperBound;                                                 // 0x0011   (0x0001)  
	char                                               BitCount;                                                   // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD];                                       // 0x0013   (0x000D)  MISSED
};

/// Struct /Script/IrisCore.EnumUint16NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
struct FEnumUint16NetSerializerConfig : FNetSerializerConfig
{ 
	uint16_t                                           LowerBound;                                                 // 0x0010   (0x0002)  
	uint16_t                                           UpperBound;                                                 // 0x0012   (0x0002)  
	char                                               BitCount;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
};

/// Struct /Script/IrisCore.EnumUint32NetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
struct FEnumUint32NetSerializerConfig : FNetSerializerConfig
{ 
	uint32_t                                           LowerBound;                                                 // 0x0010   (0x0004)  
	uint32_t                                           UpperBound;                                                 // 0x0014   (0x0004)  
	char                                               BitCount;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0019   (0x000F)  MISSED
};

/// Struct /Script/IrisCore.EnumUint64NetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
struct FEnumUint64NetSerializerConfig : FNetSerializerConfig
{ 
	uint64_t                                           LowerBound;                                                 // 0x0010   (0x0008)  
	uint64_t                                           UpperBound;                                                 // 0x0018   (0x0008)  
	char                                               BitCount;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0021   (0x000F)  MISSED
};

/// Struct /Script/IrisCore.FloatNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FFloatNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.DoubleNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FDoubleNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.GuidNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FGuidNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.BitfieldNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FBitfieldNetSerializerConfig : FNetSerializerConfig
{ 
	char                                               BitMask;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/IrisCore.ArrayPropertyNetSerializerConfig
/// Size: 0x0030 (0x000010 - 0x000040)
struct FArrayPropertyNetSerializerConfig : FNetSerializerConfig
{ 
	uint16_t                                           MaxElementCount;                                            // 0x0010   (0x0002)  
	uint16_t                                           ElementCountBitCount;                                       // 0x0012   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x0014   (0x002C)  MISSED
};

/// Struct /Script/IrisCore.LastResortPropertyNetSerializerConfig
/// Size: 0x0028 (0x000010 - 0x000038)
struct FLastResortPropertyNetSerializerConfig : FNetSerializerConfig
{ 
	unsigned char                                      UnknownData00_3[0x20];                                      // 0x0010   (0x0020)  MISSED
	uint32_t                                           MaxAllowedObjectReferences;                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/IrisCore.NetRoleNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
struct FNetRoleNetSerializerConfig : FNetSerializerConfig
{ 
	int32_t                                            RelativeInternalOffsetToOtherRole;                          // 0x0010   (0x0004)  
	int32_t                                            RelativeExternalOffsetToOtherRole;                          // 0x0014   (0x0004)  
	char                                               LowerBound;                                                 // 0x0018   (0x0001)  
	char                                               UpperBound;                                                 // 0x0019   (0x0001)  
	char                                               BitCount;                                                   // 0x001A   (0x0001)  
	char                                               AutonomousProxyValue;                                       // 0x001B   (0x0001)  
	char                                               SimulatedProxyValue;                                        // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x001D   (0x000B)  MISSED
};

/// Struct /Script/IrisCore.FieldPathNetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
struct FFieldPathNetSerializerConfig : FNetSerializerConfig
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Struct /Script/IrisCore.FieldPathNetSerializerSerializationHelper
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFieldPathNetSerializerSerializationHelper
{ 
	SDK_UNDEFINED(8,45) /* TWeakObjectPtr<UStruct*> */ __um(Owner);                                                // 0x0000   (0x0008)  
	TArray<FName>                                      PropertyPath;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/IrisCore.IntNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FIntNetSerializerConfig : FNetSerializerConfig
{ 
	char                                               BitCount;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/IrisCore.Int8RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FInt8RangeNetSerializerConfig : FNetSerializerConfig
{ 
	int8_t                                             LowerBound;                                                 // 0x0010   (0x0001)  
	int8_t                                             UpperBound;                                                 // 0x0011   (0x0001)  
	char                                               BitCount;                                                   // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0013   (0x0005)  MISSED
};

/// Struct /Script/IrisCore.Int16RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FInt16RangeNetSerializerConfig : FNetSerializerConfig
{ 
	int16_t                                            LowerBound;                                                 // 0x0010   (0x0002)  
	int16_t                                            UpperBound;                                                 // 0x0012   (0x0002)  
	char                                               BitCount;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/IrisCore.Int32RangeNetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
struct FInt32RangeNetSerializerConfig : FNetSerializerConfig
{ 
	int32_t                                            LowerBound;                                                 // 0x0010   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0014   (0x0004)  
	char                                               BitCount;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/IrisCore.Int64RangeNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
struct FInt64RangeNetSerializerConfig : FNetSerializerConfig
{ 
	int64_t                                            LowerBound;                                                 // 0x0010   (0x0008)  
	int64_t                                            UpperBound;                                                 // 0x0018   (0x0008)  
	char                                               BitCount;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/IrisCore.IrisFastArraySerializer
/// Size: 0x0018 (0x000108 - 0x000120)
struct FIrisFastArraySerializer : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x0108   (0x0004)  MISSED
	uint32_t                                           ChangeMaskStorage;                                          // 0x010C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Struct /Script/IrisCore.BoolNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FBoolNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.StructNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FStructNetSerializerConfig : FNetSerializerConfig
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/IrisCore.NopNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FNopNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.ObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FObjectNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.WeakObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FWeakObjectNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.ScriptInterfaceNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FScriptInterfaceNetSerializerConfig : FNetSerializerConfig
{ 
	class UClass*                                      InterfaceClass;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/IrisCore.PackedInt64NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPackedInt64NetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.PackedUint64NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPackedUint64NetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.PackedInt32NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPackedInt32NetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.PackedUint32NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FPackedUint32NetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.VectorNetQuantizeNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVectorNetQuantizeNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.VectorNetQuantize10NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVectorNetQuantize10NetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.VectorNetQuantize100NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVectorNetQuantize100NetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.VectorNetQuantizeNormalNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVectorNetQuantizeNormalNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.PolymorphicStructNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
struct FPolymorphicStructNetSerializerConfig : FNetSerializerConfig
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0010   (0x0018)  MISSED
};

/// Struct /Script/IrisCore.PolymorphicArrayStructNetSerializerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
struct FPolymorphicArrayStructNetSerializerConfig : FPolymorphicStructNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.UnitQuatNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FUnitQuatNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.UnitQuat4fNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FUnitQuat4fNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.UnitQuat4dNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FUnitQuat4dNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.RotatorNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRotatorNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.RotatorAsByteNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRotatorAsByteNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.RotatorAsShortNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRotatorAsShortNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.Rotator3fNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRotator3fNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.Rotator3dNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRotator3dNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.SoftObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FSoftObjectNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.SoftObjectPathNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FSoftObjectPathNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.SoftClassPathNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FSoftClassPathNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.NameNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FNameNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.StringNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FStringNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.UintNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FUintNetSerializerConfig : FNetSerializerConfig
{ 
	char                                               BitCount;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/IrisCore.Uint8RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FUint8RangeNetSerializerConfig : FNetSerializerConfig
{ 
	char                                               LowerBound;                                                 // 0x0010   (0x0001)  
	char                                               UpperBound;                                                 // 0x0011   (0x0001)  
	char                                               BitCount;                                                   // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0013   (0x0005)  MISSED
};

/// Struct /Script/IrisCore.Uint16RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
struct FUint16RangeNetSerializerConfig : FNetSerializerConfig
{ 
	uint16_t                                           LowerBound;                                                 // 0x0010   (0x0002)  
	uint16_t                                           UpperBound;                                                 // 0x0012   (0x0002)  
	char                                               BitCount;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/IrisCore.Uint32RangeNetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
struct FUint32RangeNetSerializerConfig : FNetSerializerConfig
{ 
	uint32_t                                           LowerBound;                                                 // 0x0010   (0x0004)  
	uint32_t                                           UpperBound;                                                 // 0x0014   (0x0004)  
	char                                               BitCount;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/IrisCore.Uint64RangeNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
struct FUint64RangeNetSerializerConfig : FNetSerializerConfig
{ 
	uint64_t                                           LowerBound;                                                 // 0x0010   (0x0008)  
	uint64_t                                           UpperBound;                                                 // 0x0018   (0x0008)  
	char                                               BitCount;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/IrisCore.VectorNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVectorNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.Vector3fNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVector3fNetSerializerConfig : FNetSerializerConfig
{ 
};

/// Struct /Script/IrisCore.Vector3dNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
struct FVector3dNetSerializerConfig : FNetSerializerConfig
{ 
};

