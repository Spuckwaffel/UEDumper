
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorIndexerSubscriber : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorTrackerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorTrackerSubscriber : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystemExtension
/// Size: 0x0058 (0x000028 - 0x000080)
class USpatialMetricsSubsystemExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SpatialMetricsCore.TestExtension
/// Size: 0x0018 (0x000080 - 0x000098)
class UTestExtension : public USpatialMetricsSubsystemExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricInterface
/// Size: 0x0030 (0x000028 - 0x000058)
class USpatialMetricInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSpatialMetricProperties)                  Properties                                                  OFFSET(getStruct<T>, {0x28, 48, 0, 0})
};

/// Class /Script/SpatialMetricsCore.SpatialMetricBase
/// Size: 0x0058 (0x000058 - 0x0000B0)
class USpatialMetricBase : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexer
/// Size: 0x0138 (0x000080 - 0x0001B8)
class USpatialMetricsActorIndexer : public USpatialMetricsSubsystemExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	DMember(int32_t)                                   IndexCacheSize                                              OFFSET(get<int32_t>, {0x1B4, 4, 0, 0})
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorTracker
/// Size: 0x0070 (0x000080 - 0x0000F0)
class USpatialMetricsActorTracker : public USpatialMetricsSubsystemExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystem
/// Size: 0x0040 (0x000030 - 0x000070)
class USpatialMetricsSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<class USpatialMetricInterface*>)    Metrics                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class USpatialMetricsSubsystemExtension*>) Extensions                                           OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     UpdateRateInSeconds                                         OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   WarmUpFrames                                                OFFSET(get<int32_t>, {0x64, 4, 0, 0})
};

/// Class /Script/SpatialMetricsCore.TestMetric
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UTestMetric : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(int32_t)                                   SamplingDistance                                            OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	DMember(float)                                     WorldSamplingFactor                                         OFFSET(get<float>, {0xD0, 4, 0, 0})
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

/// Struct /Script/SpatialMetricsCore.SpatialMetricDescriptor
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialMetricDescriptor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     IdName                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricProperties
/// Size: 0x0030 (0x000000 - 0x000030)
class FSpatialMetricProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     Label                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   MinValue                                                    OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxValue                                                    OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   ThresholdValue                                              OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   SpatialPrecision                                            OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	CMember(EUnit)                                     Unit                                                        OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSample
/// Size: 0x0070 (0x000000 - 0x000070)
class FSpatialMetricSample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FSpatialMetricDescriptor)                  Source                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSpatialMetricProperties)                  Properties                                                  OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(TArray<FSpatialValue>)                     Values                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FIntVector)                                BoundsMin                                                   OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	SMember(FIntVector)                                BoundsMax                                                   OFFSET(getStruct<T>, {0x5C, 12, 0, 0})
	SMember(FDateTime)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
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

