
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: SpatialMetrics
/// dependency: SpatialMetricsCore

/// Enum /Script/SpatialMetricsExperimental.EIoDispatcherChunkTypeFlags
/// Size: 0x17
enum class EIoDispatcherChunkTypeFlags : uint32_t
{
	EIoDispatcherChunkTypeFlags__ExportBundleData                                    = 1,
	EIoDispatcherChunkTypeFlags__BulkData                                            = 2,
	EIoDispatcherChunkTypeFlags__OptionalBulkData                                    = 4,
	EIoDispatcherChunkTypeFlags__MemoryMappedBulkData                                = 8,
	EIoDispatcherChunkTypeFlags__ScriptObjects                                       = 16,
	EIoDispatcherChunkTypeFlags__ContainerHeader                                     = 32,
	EIoDispatcherChunkTypeFlags__ExternalFile                                        = 64,
	EIoDispatcherChunkTypeFlags__ShaderCodeLibrary                                   = 128,
	EIoDispatcherChunkTypeFlags__ShaderCode                                          = 256,
	EIoDispatcherChunkTypeFlags__PackageStoreEntry                                   = 512,
	EIoDispatcherChunkTypeFlags__DerivedData                                         = 1024,
	EIoDispatcherChunkTypeFlags__EditorDerivedData                                   = 2048,
	EIoDispatcherChunkTypeFlags__PackageResource                                     = 4096,
	EIoDispatcherChunkTypeFlags__None                                                = 0,
	EIoDispatcherChunkTypeFlags__Default                                             = 15,
	EIoDispatcherChunkTypeFlags__All                                                 = 8191,
	EIoDispatcherChunkTypeFlags__EIoDispatcherChunkTypeFlags_MAX                     = 8192
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyARDiskSizeMetric_Archive
/// Size: 0x02D8 (0x000058 - 0x000330)
class UActorPackageDependencyARDiskSizeMetric_Archive : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x2D8];                                     // 0x0058   (0x02D8)  MISSED
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyCountMetric_Archive
/// Size: 0x02D0 (0x000058 - 0x000328)
class UActorPackageDependencyCountMetric_Archive : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x2D0];                                     // 0x0058   (0x02D0)  MISSED
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyIoDispatcherSizeMetric_Archive
/// Size: 0x02E0 (0x000058 - 0x000338)
class UActorPackageDependencyIoDispatcherSizeMetric_Archive : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x2D8];                                     // 0x0058   (0x02D8)  MISSED
	EIoDispatcherChunkTypeFlags                        ChunkTypeFlags;                                             // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0334   (0x0004)  MISSED
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyResourceSizeMetric_Archive
/// Size: 0x02E0 (0x000058 - 0x000338)
class UActorPackageDependencyResourceSizeMetric_Archive : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x2D8];                                     // 0x0058   (0x02D8)  MISSED
	EResourceSizeMemoryCategory                        MemoryCategoryFlags;                                        // 0x0330   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0331   (0x0007)  MISSED
};

/// Class /Script/SpatialMetricsExperimental.LevelPackageDependencyIoDispatcherSizeMetric_IoStore
/// Size: 0x03A0 (0x000058 - 0x0003F8)
class ULevelPackageDependencyIoDispatcherSizeMetric_IoStore : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x390];                                     // 0x0058   (0x0390)  MISSED
	class USpatialMetricsPackageMetadataProvider*      IoStorePackageHandler;                                      // 0x03E8   (0x0008)  
	EIoDispatcherChunkTypeFlags                        ChunkTypeFlags;                                             // 0x03F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03F4   (0x0004)  MISSED
};

/// Class /Script/SpatialMetricsExperimental.SpatialMetricsPackageMetadataProvider
/// Size: 0x0008 (0x000080 - 0x000088)
class USpatialMetricsPackageMetadataProvider : public USpatialMetricsSubsystemExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

