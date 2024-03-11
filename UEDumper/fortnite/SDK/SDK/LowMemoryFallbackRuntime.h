
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LowMemoryFallbackRuntime.LowMemoryFallbackStrategy
/// Size: 0x0010 (0x000028 - 0x000038)
class ULowMemoryFallbackStrategy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,14465) /* FString */              __um(FriendlyNameForAnalytics);                             // 0x0028   (0x0010)  
};

/// Class /Script/LowMemoryFallbackRuntime.BootToFrontend_LowMemoryFallbackStrategy
/// Size: 0x0018 (0x000038 - 0x000050)
class UBootToFrontend_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
public:
	SDK_UNDEFINED(24,14466) /* FText */                __um(Message);                                              // 0x0038   (0x0018)  
};

/// Struct /Script/LowMemoryFallbackRuntime.LowMemoryFallbackThreshold
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLowMemoryFallbackThreshold
{ 
	FFloatRange                                        EnterRangeMB;                                               // 0x0000   (0x0010)  
	FFloatRange                                        ExitRangeMB;                                                // 0x0010   (0x0010)  
	class UClass*                                      StrategyClass;                                              // 0x0020   (0x0008)  
};

/// Struct /Script/LowMemoryFallbackRuntime.LowMemoryFallbackThresholdState
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLowMemoryFallbackThresholdState
{ 
	class ULowMemoryFallbackStrategy*                  Strategy;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/LowMemoryFallbackRuntime.LowMemoryFallbackWorldSubsystem
/// Size: 0x00E8 (0x000030 - 0x000118)
class ULowMemoryFallbackWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x98];                                      // 0x0030   (0x0098)  MISSED
	SDK_UNDEFINED(16,14467) /* FString */              __um(PluginName);                                           // 0x00C8   (0x0010)  
	TArray<FLowMemoryFallbackThreshold>                Thresholds;                                                 // 0x00D8   (0x0010)  
	TArray<FLowMemoryFallbackThresholdState>           ThresholdStates;                                            // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00F8   (0x0020)  MISSED
};

/// Class /Script/LowMemoryFallbackRuntime.Toast_LowMemoryFallbackStrategy
/// Size: 0x0050 (0x000038 - 0x000088)
class UToast_LowMemoryFallbackStrategy : public ULowMemoryFallbackStrategy
{ 
public:
	SDK_UNDEFINED(24,14468) /* FText */                __um(ToastTitle);                                           // 0x0038   (0x0018)  
	SDK_UNDEFINED(24,14469) /* FText */                __um(ToastDescription);                                     // 0x0050   (0x0018)  
	SDK_UNDEFINED(32,14470) /* TWeakObjectPtr<UObject*> */ __um(ToastIcon);                                        // 0x0068   (0x0020)  
};

