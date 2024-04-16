
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: NetCore

/// Class /Script/IrisCore.DataStream
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataStream : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/IrisCore.DataStreamDefinitions
/// Size: 0x0018 (0x000028 - 0x000040)
class UDataStreamDefinitions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FDataStreamDefinition>)             DataStreamDefinitions                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IrisCore.DataStreamManager
/// Size: 0x0008 (0x000028 - 0x000030)
class UDataStreamManager : public UDataStream
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/IrisCore.NetObjectFilterConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UNetObjectFilterConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ENetFilterType)                            FilterType                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/IrisCore.FilterOutNetObjectFilterConfig
/// Size: 0x0000 (0x000030 - 0x000030)
class UFilterOutNetObjectFilterConfig : public UNetObjectFilterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/IrisCore.NetObjectFilter
/// Size: 0x0028 (0x000028 - 0x000050)
class UNetObjectFilter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/IrisCore.FilterOutNetObjectFilter
/// Size: 0x0000 (0x000050 - 0x000050)
class UFilterOutNetObjectFilter : public UNetObjectFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/IrisCore.IrisObjectReferencePackageMap
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UIrisObjectReferencePackageMap : public UPackageMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/IrisCore.NetObjectPrioritizer
/// Size: 0x0000 (0x000028 - 0x000028)
class UNetObjectPrioritizer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/IrisCore.LocationBasedNetObjectPrioritizer
/// Size: 0x0038 (0x000028 - 0x000060)
class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/IrisCore.NetBlobHandler
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetBlobHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/IrisCore.NetBlobHandlerDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetBlobHandlerDefinitions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetBlobHandlerDefinition>)         NetBlobHandlerDefinitions                                   OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IrisCore.NetObjectBlobHandler
/// Size: 0x0000 (0x000038 - 0x000038)
class UNetObjectBlobHandler : public UNetBlobHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/IrisCore.NetObjectConnectionFilterConfig
/// Size: 0x0008 (0x000030 - 0x000038)
class UNetObjectConnectionFilterConfig : public UNetObjectFilterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint16_t)                                  MaxObjectCount                                              OFFSET(get<uint16_t>, {0x30, 2, 0, 0})
};

/// Class /Script/IrisCore.NetObjectConnectionFilter
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UNetObjectConnectionFilter : public UNetObjectFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/IrisCore.NetObjectPrioritizerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class UNetObjectPrioritizerConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/IrisCore.NetObjectCountLimiterConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENetObjectCountLimiterMode)                Mode                                                        OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  MaxObjectCount                                              OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     OwningConnectionPriority                                    OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bEnableOwnedObjectsFastLane                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/IrisCore.NetObjectCountLimiter
/// Size: 0x0068 (0x000028 - 0x000090)
class UNetObjectCountLimiter : public UNetObjectPrioritizer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/IrisCore.NetObjectFilterDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetObjectFilterDefinitions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetObjectFilterDefinition>)        NetObjectFilterDefinitions                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IrisCore.NetObjectGridFilterConfig
/// Size: 0x0060 (0x000030 - 0x000090)
class UNetObjectGridFilterConfig : public UNetObjectFilterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(uint32_t)                                  ViewPosRelevancyFrameCount                                  OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(uint16_t)                                  DefaultFrameCountBeforeCulling                              OFFSET(get<uint16_t>, {0x34, 2, 0, 0})
	DMember(float)                                     CellSizeX                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     CellSizeY                                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxCullDistance                                             OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     DefaultCullDistance                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	SMember(FVector)                                   MinPos                                                      OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   MaxPos                                                      OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bUseExactCullDistance                                       OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(TArray<FNetObjectGridFilterProfile>)       FilterProfiles                                              OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/IrisCore.NetObjectGridFilter
/// Size: 0x00C0 (0x000050 - 0x000110)
class UNetObjectGridFilter : public UNetObjectFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/IrisCore.NetObjectGridWorldLocFilter
/// Size: 0x0008 (0x000110 - 0x000118)
class UNetObjectGridWorldLocFilter : public UNetObjectGridFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/IrisCore.NetObjectGridFragmentLocFilter
/// Size: 0x0050 (0x000110 - 0x000160)
class UNetObjectGridFragmentLocFilter : public UNetObjectGridFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/IrisCore.NetObjectPrioritizerDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetObjectPrioritizerDefinitions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetObjectPrioritizerDefinition>)   NetObjectPrioritizerDefinitions                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IrisCore.NetRPCHandler
/// Size: 0x0008 (0x000038 - 0x000040)
class UNetRPCHandler : public UNetBlobHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/IrisCore.NetTokenDataStream
/// Size: 0x0050 (0x000028 - 0x000078)
class UNetTokenDataStream : public UDataStream
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/IrisCore.NopNetObjectFilterConfig
/// Size: 0x0000 (0x000030 - 0x000030)
class UNopNetObjectFilterConfig : public UNetObjectFilterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/IrisCore.NopNetObjectFilter
/// Size: 0x0000 (0x000050 - 0x000050)
class UNopNetObjectFilter : public UNetObjectFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/IrisCore.ReplicationBridge
/// Size: 0x00E8 (0x000028 - 0x000110)
class UReplicationBridge : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/IrisCore.ObjectReplicationBridge
/// Size: 0x0440 (0x000110 - 0x000550)
class UObjectReplicationBridge : public UReplicationBridge
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
};

/// Class /Script/IrisCore.ObjectReplicationBridgeConfig
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UObjectReplicationBridgeConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<FObjectReplicationBridgePollConfig>) PollConfigs                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FObjectReplicationBridgeFilterConfig>) FilterConfigs                                            OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FObjectReplicationBridgePrioritizerConfig>) PrioritizerConfigs                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FObjectReplicationBridgeDeltaCompressionConfig>) DeltaCompressionConfigs                        OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FObjectReplicatedBridgeCriticalClassConfig>) CriticalClassConfigs                               OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bAllClassesCritical                                         OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(TArray<FObjectReplicationBridgeTypeStatsConfig>) TypeStatsConfigs                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FName)                                     DefaultSpatialFilterName                                    OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	SMember(FName)                                     RequiredNetDriverChannelClassName                           OFFSET(getStruct<T>, {0x94, 4, 0, 0})
	CMember(TArray<FName>)                             CriticalActorClasses                                        OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/IrisCore.SequentialPartialNetBlobHandlerConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class USequentialPartialNetBlobHandlerConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint32_t)                                  MaxPartBitCount                                             OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  MaxPartCount                                                OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/IrisCore.PartialNetObjectAttachmentHandlerConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UPartialNetObjectAttachmentHandlerConfig : public USequentialPartialNetBlobHandlerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  BitCountSplitThreshold                                      OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(uint32_t)                                  ClientUnreliableBitCountSplitThreshold                      OFFSET(get<uint32_t>, {0x34, 4, 0, 0})
	DMember(uint32_t)                                  ServerUnreliableBitCountSplitThreshold                      OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/IrisCore.SequentialPartialNetBlobHandler
/// Size: 0x0010 (0x000038 - 0x000048)
class USequentialPartialNetBlobHandler : public UNetBlobHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/IrisCore.PartialNetObjectAttachmentHandler
/// Size: 0x0000 (0x000048 - 0x000048)
class UPartialNetObjectAttachmentHandler : public USequentialPartialNetBlobHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/IrisCore.ReplicationDataStream
/// Size: 0x0010 (0x000028 - 0x000038)
class UReplicationDataStream : public UDataStream
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/IrisCore.ReplicationSystem
/// Size: 0x0030 (0x000028 - 0x000058)
class UReplicationSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UReplicationBridge*)                 ReplicationBridge                                           OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/IrisCore.SphereNetObjectPrioritizerConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     InnerRadius                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     OuterRadius                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     InnerPriority                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     OuterPriority                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     OutsidePriority                                             OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/IrisCore.SphereNetObjectPrioritizer
/// Size: 0x0008 (0x000060 - 0x000068)
class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
/// Size: 0x0008 (0x000040 - 0x000048)
class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     OwnerPriorityBoost                                          OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USphereWithOwnerBoostNetObjectPrioritizer : public USphereNetObjectPrioritizer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/IrisCore.ReplicationStateDescriptorConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UReplicationStateDescriptorConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FSupportsStructNetSerializerConfig>) SupportsStructNetSerializerList                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/IrisCore.DataStreamDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FDataStreamDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     DataStreamName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EDataStreamSendStatus)                     DefaultSendStatus                                           OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bAutoCreate                                                 OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/IrisCore.NetSerializerConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FNetSerializerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.DateTimeNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FDateTimeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.EnumInt8NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FEnumInt8NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int8_t)                                    LowerBound                                                  OFFSET(get<int8_t>, {0x10, 1, 0, 0})
	DMember(int8_t)                                    UpperBound                                                  OFFSET(get<int8_t>, {0x11, 1, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x12, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumInt16NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FEnumInt16NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int16_t)                                   LowerBound                                                  OFFSET(get<int16_t>, {0x10, 2, 0, 0})
	DMember(int16_t)                                   UpperBound                                                  OFFSET(get<int16_t>, {0x12, 2, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumInt32NetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FEnumInt32NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   LowerBound                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumInt64NetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
class FEnumInt64NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   LowerBound                                                  OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   UpperBound                                                  OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x20, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumUint8NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FEnumUint8NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(char)                                      LowerBound                                                  OFFSET(get<char>, {0x10, 1, 0, 0})
	DMember(char)                                      UpperBound                                                  OFFSET(get<char>, {0x11, 1, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x12, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumUint16NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FEnumUint16NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint16_t)                                  LowerBound                                                  OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  UpperBound                                                  OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumUint32NetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FEnumUint32NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(uint32_t)                                  LowerBound                                                  OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint32_t)                                  UpperBound                                                  OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumUint64NetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
class FEnumUint64NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint64_t)                                  LowerBound                                                  OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
	DMember(uint64_t)                                  UpperBound                                                  OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x20, 1, 0, 0})
};

/// Struct /Script/IrisCore.FloatNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FFloatNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.DoubleNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FDoubleNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.GuidNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGuidNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.BitfieldNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FBitfieldNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      BitMask                                                     OFFSET(get<char>, {0x10, 1, 0, 0})
};

/// Struct /Script/IrisCore.ArrayPropertyNetSerializerConfig
/// Size: 0x0030 (0x000010 - 0x000040)
class FArrayPropertyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint16_t)                                  MaxElementCount                                             OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  ElementCountBitCount                                        OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/IrisCore.LastResortPropertyNetSerializerConfig
/// Size: 0x0028 (0x000010 - 0x000038)
class FLastResortPropertyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint32_t)                                  MaxAllowedObjectReferences                                  OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/IrisCore.NetRoleNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FNetRoleNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   RelativeInternalOffsetToOtherRole                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   RelativeExternalOffsetToOtherRole                           OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      LowerBound                                                  OFFSET(get<char>, {0x18, 1, 0, 0})
	DMember(char)                                      UpperBound                                                  OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x1A, 1, 0, 0})
	DMember(char)                                      AutonomousProxyValue                                        OFFSET(get<char>, {0x1B, 1, 0, 0})
	DMember(char)                                      SimulatedProxyValue                                         OFFSET(get<char>, {0x1C, 1, 0, 0})
};

/// Struct /Script/IrisCore.FieldPathNetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
class FFieldPathNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/IrisCore.FieldPathNetSerializerSerializationHelper
/// Size: 0x0018 (0x000000 - 0x000018)
class FFieldPathNetSerializerSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UStruct*>)                  Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FName>)                             PropertyPath                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/IrisCore.IntNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FIntNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x10, 1, 0, 0})
};

/// Struct /Script/IrisCore.Int8RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FInt8RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int8_t)                                    LowerBound                                                  OFFSET(get<int8_t>, {0x10, 1, 0, 0})
	DMember(int8_t)                                    UpperBound                                                  OFFSET(get<int8_t>, {0x11, 1, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x12, 1, 0, 0})
};

/// Struct /Script/IrisCore.Int16RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FInt16RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int16_t)                                   LowerBound                                                  OFFSET(get<int16_t>, {0x10, 2, 0, 0})
	DMember(int16_t)                                   UpperBound                                                  OFFSET(get<int16_t>, {0x12, 2, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/IrisCore.Int32RangeNetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FInt32RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   LowerBound                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/IrisCore.Int64RangeNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FInt64RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   LowerBound                                                  OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   UpperBound                                                  OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x20, 1, 0, 0})
};

/// Struct /Script/IrisCore.IrisFastArraySerializer
/// Size: 0x0018 (0x000108 - 0x000120)
class FIrisFastArraySerializer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(uint32_t)                                  ChangeMaskStorage                                           OFFSET(get<uint32_t>, {0x10C, 16, 0, 0})
};

/// Struct /Script/IrisCore.NetBlobHandlerDefinition
/// Size: 0x0004 (0x000000 - 0x000004)
class FNetBlobHandlerDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/IrisCore.NetObjectFilterDefinition
/// Size: 0x000C (0x000000 - 0x00000C)
class FNetObjectFilterDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     FilterName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     ConfigClassName                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/IrisCore.NetObjectGridFilterProfile
/// Size: 0x0008 (0x000000 - 0x000008)
class FNetObjectGridFilterProfile : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     FilterProfileName                                           OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  FrameCountBeforeCulling                                     OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/IrisCore.NetObjectPrioritizerDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
class FNetObjectPrioritizerDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     PrioritizerName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     ConfigClassName                                             OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(class UClass*)                             ConfigClass                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/IrisCore.BoolNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FBoolNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.StructNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FStructNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/IrisCore.NopNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FNopNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.ObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FObjectNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.WeakObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FWeakObjectNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.ScriptInterfaceNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FScriptInterfaceNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UClass*)                             InterfaceClass                                              OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgePollConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FObjectReplicationBridgePollConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     PollFrequency                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIncludeSubclasses                                          OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgeFilterConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FObjectReplicationBridgeFilterConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     DynamicFilterName                                           OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     FilterProfile                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bForceEnableOnAllInstances                                  OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgePrioritizerConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FObjectReplicationBridgePrioritizerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     PrioritizerName                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bForceEnableOnAllInstances                                  OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FObjectReplicationBridgeDeltaCompressionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnableDeltaCompression                                     OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicatedBridgeCriticalClassConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FObjectReplicatedBridgeCriticalClassConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bDisconnectOnProtocolMismatch                               OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgeTypeStatsConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FObjectReplicationBridgeTypeStatsConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ClassName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TypeStatsName                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIncludeInMinimalCSVStats                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/IrisCore.PackedInt64NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPackedInt64NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.PackedUint64NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPackedUint64NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.PackedInt32NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPackedInt32NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.PackedUint32NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPackedUint32NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.VectorNetQuantizeNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetQuantizeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.VectorNetQuantize10NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetQuantize10NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.VectorNetQuantize100NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetQuantize100NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.VectorNetQuantizeNormalNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetQuantizeNormalNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.PolymorphicStructNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/IrisCore.PolymorphicArrayStructNetSerializerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class FPolymorphicArrayStructNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/IrisCore.UnitQuatNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FUnitQuatNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.UnitQuat4fNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FUnitQuat4fNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.UnitQuat4dNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FUnitQuat4dNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.RotatorNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FRotatorNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.RotatorAsByteNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FRotatorAsByteNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.RotatorAsShortNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FRotatorAsShortNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.Rotator3fNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FRotator3fNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.Rotator3dNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FRotator3dNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.SoftObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FSoftObjectNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.SoftObjectPathNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FSoftObjectPathNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.SoftClassPathNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FSoftClassPathNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.NameNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FNameNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.StringNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FStringNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.UintNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FUintNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x10, 1, 0, 0})
};

/// Struct /Script/IrisCore.Uint8RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FUint8RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      LowerBound                                                  OFFSET(get<char>, {0x10, 1, 0, 0})
	DMember(char)                                      UpperBound                                                  OFFSET(get<char>, {0x11, 1, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x12, 1, 0, 0})
};

/// Struct /Script/IrisCore.Uint16RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FUint16RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint16_t)                                  LowerBound                                                  OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  UpperBound                                                  OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/IrisCore.Uint32RangeNetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FUint32RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint32_t)                                  LowerBound                                                  OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint32_t)                                  UpperBound                                                  OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/IrisCore.Uint64RangeNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FUint64RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(uint64_t)                                  LowerBound                                                  OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
	DMember(uint64_t)                                  UpperBound                                                  OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(char)                                      BitCount                                                    OFFSET(get<char>, {0x20, 1, 0, 0})
};

/// Struct /Script/IrisCore.VectorNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.Vector3fNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVector3fNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.Vector3dNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVector3dNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.SupportsStructNetSerializerConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FSupportsStructNetSerializerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     StructName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bCanUseStructNetSerializer                                  OFFSET(get<bool>, {0x4, 1, 0, 0})
};

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

