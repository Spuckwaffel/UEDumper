
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: WorldMetricsCore

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorIndexerSubscriber : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsContextInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsContextInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsLocationIndexerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsLocationIndexerSubscriber : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricInterface
/// Size: 0x0028 (0x000028 - 0x000050)
class USpatialMetricInterface : public UWorldMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSpatialMetricProperties)                  Properties                                                  OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/SpatialMetricsCore.SpatialMetricBase
/// Size: 0x0030 (0x000050 - 0x000080)
class USpatialMetricBase : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SpatialMetricsCore.PlayerBasedSpatialMetricBase
/// Size: 0x0000 (0x000080 - 0x000080)
class UPlayerBasedSpatialMetricBase : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexer
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class USpatialMetricsActorIndexer : public UWorldMetricsExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	DMember(int32_t)                                   IndexCacheSize                                              OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsLocationIndexer
/// Size: 0x0120 (0x000028 - 0x000148)
class USpatialMetricsLocationIndexer : public UWorldMetricsExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsPlayerContext
/// Size: 0x0018 (0x000028 - 0x000040)
class USpatialMetricsPlayerContext : public UWorldMetricsExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   SpatialPrecision                                            OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class USpatialMetricsSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<class USpatialMetricInterface*>)    Metrics                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FSoftClassPath>)                    AllowedMetricClasses                                        OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FSoftClassPath>)                    BlockedMetricClasses                                        OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bAutoCreateConnectorServer                                  OFFSET(get<bool>, {0x61, 1, 0, 0})
};

/// Class /Script/SpatialMetricsCore.TestMetric
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UTestMetric : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(int32_t)                                   SamplingDistance                                            OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     WorldSamplingFactor                                         OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialMetricsConnectorMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGuid)                                     MessageId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorRequest
/// Size: 0x0000 (0x000010 - 0x000010)
class FSpatialMetricsConnectorRequest : public FSpatialMetricsConnectorMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorResponse
/// Size: 0x0028 (0x000010 - 0x000038)
class FSpatialMetricsConnectorResponse : public FSpatialMetricsConnectorMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGuid)                                     RequestMessageId                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(ESpatialMetricsConnectorResponseCode)      ResponseCode                                                OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FText)                                     Reason                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorClientPing
/// Size: 0x0000 (0x000010 - 0x000010)
class FSpatialMetricsConnectorClientPing : public FSpatialMetricsConnectorMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorPlayerViewPoint
/// Size: 0x0030 (0x000000 - 0x000030)
class FSpatialMetricsConnectorPlayerViewPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorClientPong
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FSpatialMetricsConnectorClientPong : public FSpatialMetricsConnectorMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGuid)                                     ServerId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   CurrentLevel                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   InstanceType                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TMap<FName, FString>)                      MetaData                                                    OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorClassRequest
/// Size: 0x0018 (0x000010 - 0x000028)
class FSpatialMetricsConnectorClassRequest : public FSpatialMetricsConnectorRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftClassPath)                            Class                                                       OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorBoolRequest
/// Size: 0x0004 (0x000010 - 0x000014)
class FSpatialMetricsConnectorBoolRequest : public FSpatialMetricsConnectorRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bValue                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorBoolResponse
/// Size: 0x0008 (0x000038 - 0x000040)
class FSpatialMetricsConnectorBoolResponse : public FSpatialMetricsConnectorResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bResult                                                     OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricsConnectorClassListResponse
/// Size: 0x0010 (0x000038 - 0x000048)
class FSpatialMetricsConnectorClassListResponse : public FSpatialMetricsConnectorResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FSoftClassPath>)                    Classes                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.AddSpatialMetricRequest
/// Size: 0x0000 (0x000028 - 0x000028)
class FAddSpatialMetricRequest : public FSpatialMetricsConnectorClassRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SpatialMetricsCore.AddSpatialMetricResponse
/// Size: 0x0000 (0x000040 - 0x000040)
class FAddSpatialMetricResponse : public FSpatialMetricsConnectorBoolResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SpatialMetricsCore.RemoveSpatialMetricRequest
/// Size: 0x0000 (0x000028 - 0x000028)
class FRemoveSpatialMetricRequest : public FSpatialMetricsConnectorClassRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SpatialMetricsCore.RemoveSpatialMetricResponse
/// Size: 0x0000 (0x000040 - 0x000040)
class FRemoveSpatialMetricResponse : public FSpatialMetricsConnectorBoolResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SpatialMetricsCore.ContainsSpatialMetricRequest
/// Size: 0x0000 (0x000028 - 0x000028)
class FContainsSpatialMetricRequest : public FSpatialMetricsConnectorClassRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SpatialMetricsCore.ContainsSpatialMetricResponse
/// Size: 0x0000 (0x000040 - 0x000040)
class FContainsSpatialMetricResponse : public FSpatialMetricsConnectorBoolResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SpatialMetricsCore.SampleSpatialMetricRequest
/// Size: 0x0000 (0x000028 - 0x000028)
class FSampleSpatialMetricRequest : public FSpatialMetricsConnectorClassRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SpatialMetricsCore.SampleSpatialMetricResponse
/// Size: 0x0070 (0x000038 - 0x0000A8)
class FSampleSpatialMetricResponse : public FSpatialMetricsConnectorResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSpatialMetricSample)                      Sample                                                      OFFSET(getStruct<T>, {0x38, 112, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSample
/// Size: 0x0070 (0x000000 - 0x000070)
class FSpatialMetricSample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FSoftClassPath)                            Class                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSpatialMetricProperties)                  Properties                                                  OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	CMember(TArray<FSpatialValue>)                     Values                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FIntVector)                                BoundsMin                                                   OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	SMember(FIntVector)                                BoundsMax                                                   OFFSET(getStruct<T>, {0x5C, 12, 0, 0})
	SMember(FDateTime)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialValue
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FIntVector)                                Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FSpatialMetricProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     Label                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   MinValue                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MaxValue                                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   ThresholdValue                                              OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   SpatialPrecision                                            OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(EUnit)                                     Unit                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.ListSpatialMetricsRequest
/// Size: 0x0000 (0x000010 - 0x000010)
class FListSpatialMetricsRequest : public FSpatialMetricsConnectorRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SpatialMetricsCore.ListSpatialMetricsResponse
/// Size: 0x0000 (0x000048 - 0x000048)
class FListSpatialMetricsResponse : public FSpatialMetricsConnectorClassListResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/SpatialMetricsCore.ListAvailableSpatialMetricsRequest
/// Size: 0x0000 (0x000010 - 0x000010)
class FListAvailableSpatialMetricsRequest : public FSpatialMetricsConnectorRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SpatialMetricsCore.ListAvailableSpatialMetricsResponse
/// Size: 0x0000 (0x000048 - 0x000048)
class FListAvailableSpatialMetricsResponse : public FSpatialMetricsConnectorClassListResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/SpatialMetricsCore.EnableSpatialMetricsRequest
/// Size: 0x0000 (0x000014 - 0x000014)
class FEnableSpatialMetricsRequest : public FSpatialMetricsConnectorBoolRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/SpatialMetricsCore.EnableSpatialMetricsResponse
/// Size: 0x0000 (0x000040 - 0x000040)
class FEnableSpatialMetricsResponse : public FSpatialMetricsConnectorBoolResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SpatialMetricsCore.IsSpatialMetricsEnabledRequest
/// Size: 0x0000 (0x000010 - 0x000010)
class FIsSpatialMetricsEnabledRequest : public FSpatialMetricsConnectorRequest
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SpatialMetricsCore.IsSpatialMetricsEnabledResponse
/// Size: 0x0000 (0x000040 - 0x000040)
class FIsSpatialMetricsEnabledResponse : public FSpatialMetricsConnectorBoolResponse
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSampleImageProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialMetricSampleImageProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   ImageSize                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinWorldUnitsPerPixel                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     WorldColorSaturation                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpatialValueAlpha                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricHeatmapColorProperties
/// Size: 0x001C (0x000000 - 0x00001C)
class FSpatialMetricHeatmapColorProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FColor)                                    MinValueColor                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FColor)                                    MaxValueColor                                               OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FColor)                                    ThresholdValueColor                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FColor)                                    SampleBoundsColor                                           OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(float)                                     MinAlpha                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxAlpha                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AlphaFactor                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Enum /Script/SpatialMetricsCore.ESpatialMetricsConnectorResponseCode
/// Size: 0x06
enum class ESpatialMetricsConnectorResponseCode : uint8_t
{
	ESpatialMetricsConnectorResponseCode__Pending                                    = 0,
	ESpatialMetricsConnectorResponseCode__Success                                    = 1,
	ESpatialMetricsConnectorResponseCode__Failed                                     = 2,
	ESpatialMetricsConnectorResponseCode__InvalidRequest                             = 3,
	ESpatialMetricsConnectorResponseCode__UnknownRequest                             = 4,
	ESpatialMetricsConnectorResponseCode__TimedOut                                   = 5
};

