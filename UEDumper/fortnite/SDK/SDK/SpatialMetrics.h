
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: SpatialMetricsCore

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

/// Class /Script/SpatialMetrics.SpatialActorCountMetric
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class USpatialActorCountMetric : public USpatialMetricBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/SpatialMetrics.SpatialActorResourceSizeMetric
/// Size: 0x00E8 (0x000058 - 0x000140)
class USpatialActorResourceSizeMetric : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0xE0];                                      // 0x0058   (0x00E0)  MISSED
	float                                              UpdateTimeThresholdInMs;                                    // 0x0138   (0x0004)  
	EResourceSizeMemoryCategory                        MemoryCategoryFlags;                                        // 0x013C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x013D   (0x0003)  MISSED
};

/// Class /Script/SpatialMetrics.SpatialAvailableMemoryMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialAvailableMemoryMetric : public USpatialMetricBase
{ 
public:
};

/// Class /Script/SpatialMetrics.SpatialFrameTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialFrameTimeMetric : public USpatialMetricBase
{ 
public:
};

/// Class /Script/SpatialMetrics.SpatialGameUpdateTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialGameUpdateTimeMetric : public USpatialMetricBase
{ 
public:
};

/// Class /Script/SpatialMetrics.SpatialMemoryUsageMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialMemoryUsageMetric : public USpatialMetricBase
{ 
public:
};

/// Class /Script/SpatialMetrics.SpatialProxyMetric
/// Size: 0x0050 (0x000058 - 0x0000A8)
class USpatialProxyMetric : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0058   (0x0050)  MISSED
};

/// Class /Script/SpatialMetrics.SpatialRenderTimeMetric
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class USpatialRenderTimeMetric : public USpatialMetricBase
{ 
public:
};

