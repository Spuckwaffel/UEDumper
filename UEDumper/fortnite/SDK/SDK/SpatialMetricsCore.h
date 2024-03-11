
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorIndexerSubscriber : public UInterface
{ 
public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorTrackerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorTrackerSubscriber : public UInterface
{ 
public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystemExtension
/// Size: 0x0058 (0x000028 - 0x000080)
class USpatialMetricsSubsystemExtension : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Class /Script/SpatialMetricsCore.TestExtension
/// Size: 0x0018 (0x000080 - 0x000098)
class UTestExtension : public USpatialMetricsSubsystemExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0080   (0x0018)  MISSED
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricProperties
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSpatialMetricProperties
{ 
	SDK_UNDEFINED(24,11952) /* FText */                __um(Label);                                                // 0x0000   (0x0018)  
	int32_t                                            MinValue;                                                   // 0x0018   (0x0004)  
	int32_t                                            MaxValue;                                                   // 0x001C   (0x0004)  
	int32_t                                            ThresholdValue;                                             // 0x0020   (0x0004)  
	int32_t                                            SpatialPrecision;                                           // 0x0024   (0x0004)  
	EUnit                                              Unit;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/SpatialMetricsCore.SpatialMetricInterface
/// Size: 0x0030 (0x000028 - 0x000058)
class USpatialMetricInterface : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FSpatialMetricProperties                           Properties;                                                 // 0x0028   (0x0030)  
};

/// Class /Script/SpatialMetricsCore.SpatialMetricBase
/// Size: 0x0058 (0x000058 - 0x0000B0)
class USpatialMetricBase : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0058   (0x0058)  MISSED
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexer
/// Size: 0x0138 (0x000080 - 0x0001B8)
class USpatialMetricsActorIndexer : public USpatialMetricsSubsystemExtension
{ 
public:
	unsigned char                                      UnknownData00_3[0x134];                                     // 0x0080   (0x0134)  MISSED
	int32_t                                            IndexCacheSize;                                             // 0x01B4   (0x0004)  
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorTracker
/// Size: 0x0070 (0x000080 - 0x0000F0)
class USpatialMetricsActorTracker : public USpatialMetricsSubsystemExtension
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0080   (0x0070)  MISSED
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystem
/// Size: 0x0040 (0x000030 - 0x000070)
class USpatialMetricsSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0030   (0x0010)  MISSED
	TArray<class USpatialMetricInterface*>             Metrics;                                                    // 0x0040   (0x0010)  
	TArray<class USpatialMetricsSubsystemExtension*>   Extensions;                                                 // 0x0050   (0x0010)  
	float                                              UpdateRateInSeconds;                                        // 0x0060   (0x0004)  
	int32_t                                            WarmUpFrames;                                               // 0x0064   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Class /Script/SpatialMetricsCore.TestMetric
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UTestMetric : public USpatialMetricInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x74];                                      // 0x0058   (0x0074)  MISSED
	int32_t                                            SamplingDistance;                                           // 0x00CC   (0x0004)  
	float                                              WorldSamplingFactor;                                        // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/SpatialMetricsCore.SpatialValue
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpatialValue
{ 
	FIntVector                                         Location;                                                   // 0x0000   (0x000C)  
	int32_t                                            Value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricDescriptor
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpatialMetricDescriptor
{ 
	FName                                              IdName;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      Class;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSample
/// Size: 0x0070 (0x000000 - 0x000070)
struct FSpatialMetricSample
{ 
	FSpatialMetricDescriptor                           Source;                                                     // 0x0000   (0x0010)  
	FSpatialMetricProperties                           Properties;                                                 // 0x0010   (0x0030)  
	TArray<FSpatialValue>                              Values;                                                     // 0x0040   (0x0010)  
	FIntVector                                         BoundsMin;                                                  // 0x0050   (0x000C)  
	FIntVector                                         BoundsMax;                                                  // 0x005C   (0x000C)  
	FDateTime                                          Timestamp;                                                  // 0x0068   (0x0008)  
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSampleImageProperties
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSpatialMetricSampleImageProperties
{ 
	int32_t                                            ImageSize;                                                  // 0x0000   (0x0004)  
	int32_t                                            MinWorldUnitsPerPixel;                                      // 0x0004   (0x0004)  
	float                                              WorldColorSaturation;                                       // 0x0008   (0x0004)  
	float                                              SpatialValueAlpha;                                          // 0x000C   (0x0004)  
};

