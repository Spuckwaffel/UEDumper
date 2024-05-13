
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LowMemoryFallbackRuntime.LowMemoryFallbackStrategy
/// Size: 0x0010 (0x000028 - 0x000038)
class ULowMemoryFallbackStrategy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   FriendlyNameForAnalytics                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LowMemoryFallbackRuntime.BootToFrontend_LowMemoryFallbackStrategy
/// Size: 0x0010 (0x000038 - 0x000048)
class UBootToFrontend_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FText)                                     Message                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/LowMemoryFallbackRuntime.LowMemoryFallbackWorldSubsystem
/// Size: 0x00E8 (0x000030 - 0x000118)
class ULowMemoryFallbackWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FString)                                   PluginName                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FLowMemoryFallbackThreshold>)       Thresholds                                                  OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FLowMemoryFallbackThresholdState>)  ThresholdStates                                             OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Class /Script/LowMemoryFallbackRuntime.Toast_LowMemoryFallbackStrategy
/// Size: 0x0040 (0x000038 - 0x000078)
class UToast_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     ToastTitle                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FText)                                     ToastDescription                                            OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ToastIcon                                                   OFFSET(get<T>, {0x58, 32, 0, 0})
};

/// Struct /Script/LowMemoryFallbackRuntime.LowMemoryFallbackThreshold
/// Size: 0x0028 (0x000000 - 0x000028)
class FLowMemoryFallbackThreshold : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFloatRange)                               EnterRangeMB                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FFloatRange)                               ExitRangeMB                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class UClass*)                             StrategyClass                                               OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/LowMemoryFallbackRuntime.LowMemoryFallbackThresholdState
/// Size: 0x0010 (0x000000 - 0x000010)
class FLowMemoryFallbackThresholdState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ULowMemoryFallbackStrategy*)         Strategy                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

