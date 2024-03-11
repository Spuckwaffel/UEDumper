
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SpatialMetricsCore

/// Class /Script/SpatialMetrics.SpatialActorCountMetric
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class USpatialActorCountMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/SpatialMetrics.SpatialActorResourceSizeMetric
/// Size: 0x00E8 (0x000058 - 0x000140)
class USpatialActorResourceSizeMetric : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     UpdateTimeThresholdInMs                                     OFFSET(get<float>, {0x138, 4, 0, 0})
	CMember(EResourceSizeMemoryCategory)               MemoryCategoryFlags                                         OFFSET(get<T>, {0x13C, 1, 0, 0})
};

/// Class /Script/SpatialMetrics.SpatialAvailableMemoryMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialAvailableMemoryMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.SpatialFrameTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialFrameTimeMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.SpatialGameUpdateTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialGameUpdateTimeMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.SpatialMemoryUsageMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialMemoryUsageMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/SpatialMetrics.SpatialProxyMetric
/// Size: 0x0050 (0x000058 - 0x0000A8)
class USpatialProxyMetric : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/SpatialMetrics.SpatialRenderTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialRenderTimeMetric : public USpatialMetricBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Enum /Script/SpatialMetrics.EResourceSizeMemoryCategory
/// Size: 0x06
enum class EResourceSizeMemoryCategory : uint8_t
{
	EResourceSizeMemoryCategory__None                                                = 0,
	EResourceSizeMemoryCategory__System                                              = 1,
	EResourceSizeMemoryCategory__Video                                               = 2,
	EResourceSizeMemoryCategory__Other                                               = 4,
	EResourceSizeMemoryCategory__All                                                 = 7,
	EResourceSizeMemoryCategory__EResourceSizeMemoryCategory_MAX                     = 8
};

