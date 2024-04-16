
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/WorldMetricsCore.WorldMetricsSubsystem
/// Size: 0x2850 (0x000030 - 0x002880)
class UWorldMetricsSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 10368;

public:
	CMember(TArray<class UWorldMetricInterface*>)      Metrics                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<class UWorldMetricsExtension*>)     Extensions                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     UpdateRateInSeconds                                         OFFSET(get<float>, {0x2870, 4, 0, 0})
	DMember(int32_t)                                   WarmUpFrames                                                OFFSET(get<int32_t>, {0x2874, 4, 0, 0})
};

/// Class /Script/WorldMetricsCore.WorldMetricInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UWorldMetricInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/WorldMetricsCore.WorldMetricsActorTrackerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class UWorldMetricsActorTrackerSubscriber : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/WorldMetricsCore.WorldMetricsExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UWorldMetricsExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/WorldMetricsCore.WorldMetricsActorTracker
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UWorldMetricsActorTracker : public UWorldMetricsExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

