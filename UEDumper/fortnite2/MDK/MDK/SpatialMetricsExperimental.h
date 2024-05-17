
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SpatialMetrics
/// dependency: SpatialMetricsCore
/// dependency: WorldMetricsCore

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyARDiskSizeMetric_Archive
/// Size: 0x02D8 (0x000050 - 0x000328)
class UActorPackageDependencyARDiskSizeMetric_Archive : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyCountMetric_Archive
/// Size: 0x02D0 (0x000050 - 0x000320)
class UActorPackageDependencyCountMetric_Archive : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyIoDispatcherSizeMetric_Archive
/// Size: 0x02E0 (0x000050 - 0x000330)
class UActorPackageDependencyIoDispatcherSizeMetric_Archive : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(EIoDispatcherChunkTypeFlags)               ChunkTypeFlags                                              OFFSET(get<T>, {0x328, 4, 0, 0})
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyResourceSizeMetric_Archive
/// Size: 0x02E0 (0x000050 - 0x000330)
class UActorPackageDependencyResourceSizeMetric_Archive : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(EResourceSizeMemoryCategory)               MemoryCategoryFlags                                         OFFSET(get<T>, {0x328, 1, 0, 0})
};

/// Class /Script/SpatialMetricsExperimental.LevelPackageDiskSizeMetric
/// Size: 0x03A0 (0x000050 - 0x0003F0)
class ULevelPackageDiskSizeMetric : public USpatialMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(class USpatialMetricsPackageMetadataProvider*) IoStorePackageHandler                                   OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(EIoDispatcherChunkTypeFlags)               ChunkTypeFlags                                              OFFSET(get<T>, {0x3E8, 4, 0, 0})
};

/// Class /Script/SpatialMetricsExperimental.SpatialMetricsPackageMetadataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class USpatialMetricsPackageMetadataProvider : public UWorldMetricsExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/SpatialMetricsExperimental.EIoDispatcherChunkTypeFlags
/// Size: 0x16
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
	EIoDispatcherChunkTypeFlags__All                                                 = 8191
};

