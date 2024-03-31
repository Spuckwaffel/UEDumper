
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: WorldMetricsCore

/// Class /Script/CsvMetrics.CsvActorCountMetric
/// Size: 0x0060 (0x000028 - 0x000088)
class UCsvActorCountMetric : public UWorldMetricInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/CsvMetrics.CsvMetricsSubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class UCsvMetricsSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UClass*>)                     Metrics                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

