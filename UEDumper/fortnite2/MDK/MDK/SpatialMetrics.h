
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SpatialMetricsCore
/// dependency: WorldMetricsCore

/// Class /Script/SpatialMetrics.SpatialActorCountMetric
/// Size: 0x0008 (0x000080 - 0x000088)
class USpatialActorCountMetric : public UPlayerBasedSpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/SpatialMetrics.SpatialActorResourceSizeMetric
/// Size: 0x00E8 (0x000050 - 0x000138)
class USpatialActorResourceSizeMetric : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     UpdateTimeThresholdInMs                                     OFFSET(get<float>, {0x130, 4, 0, 0})
	CMember(EResourceSizeMemoryCategory)               MemoryCategoryFlags                                         OFFSET(get<T>, {0x134, 1, 0, 0})
};

/// Class /Script/SpatialMetrics.SpatialAvailableMemoryMetric
/// Size: 0x0000 (0x000080 - 0x000080)
class USpatialAvailableMemoryMetric : public UPlayerBasedSpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SpatialMetrics.SpatialFrameTimeMetric
/// Size: 0x0000 (0x000080 - 0x000080)
class USpatialFrameTimeMetric : public UPlayerBasedSpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SpatialMetrics.SpatialGameUpdateTimeMetric
/// Size: 0x0000 (0x000080 - 0x000080)
class USpatialGameUpdateTimeMetric : public UPlayerBasedSpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SpatialMetrics.SpatialMemoryUsageMetric
/// Size: 0x0000 (0x000080 - 0x000080)
class USpatialMemoryUsageMetric : public UPlayerBasedSpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SpatialMetrics.SpatialProxyMetric
/// Size: 0x0050 (0x000050 - 0x0000A0)
class USpatialProxyMetric : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/SpatialMetrics.SpatialRenderTimeMetric
/// Size: 0x0000 (0x000080 - 0x000080)
class USpatialRenderTimeMetric : public UPlayerBasedSpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Enum /Script/SpatialMetrics.EResourceSizeMemoryCategory
/// Size: 0x05
enum class EResourceSizeMemoryCategory : uint8_t
{
	EResourceSizeMemoryCategory__None                                                = 0,
	EResourceSizeMemoryCategory__System                                              = 1,
	EResourceSizeMemoryCategory__Video                                               = 2,
	EResourceSizeMemoryCategory__Other                                               = 4,
	EResourceSizeMemoryCategory__All                                                 = 7
};

