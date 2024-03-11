
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StructUtils
/// dependency: ZoneGraph

/// Enum /Script/ZoneGraphAnnotations.EZoneGraphObstacleDisturbanceAreaAction
/// Size: 0x03
enum class EZoneGraphObstacleDisturbanceAreaAction : uint8_t
{
	EZoneGraphObstacleDisturbanceAreaAction__Add                                     = 0,
	EZoneGraphObstacleDisturbanceAreaAction__Remove                                  = 1,
	EZoneGraphObstacleDisturbanceAreaAction__EZoneGraphObstacleDisturbanceAreaAction_MAX = 2
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationComponent
/// Size: 0x0020 (0x000550 - 0x000570)
class UZoneGraphAnnotationComponent : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0550   (0x0018)  MISSED
	bool                                               bEnableDebugDrawing;                                        // 0x0568   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0569   (0x0007)  MISSED
};

/// Struct /Script/ZoneGraphAnnotations.RegisteredZoneGraphAnnotation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRegisteredZoneGraphAnnotation
{ 
	class UZoneGraphAnnotationComponent*               AnnotationComponent;                                        // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationSubsystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UZoneGraphAnnotationSubsystem : public UTickableWorldSubsystem
{ 
public:
	TArray<FRegisteredZoneGraphAnnotation>             RegisteredComponents;                                       // 0x0040   (0x0010)  
	FInstancedStructContainer                          Events;                                                     // 0x0050   (0x0020)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0070   (0x0008)  MISSED
	TArray<class UZoneGraphAnnotationComponent*>       TagToAnnotationLookup;                                      // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0088   (0x0028)  MISSED
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTest
/// Size: 0x0008 (0x000028 - 0x000030)
class UZoneGraphAnnotationTest : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UZoneGraphAnnotationTestingComponent*        OwnerComponent;                                             // 0x0028   (0x0008)  
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingComponent
/// Size: 0x0010 (0x000550 - 0x000560)
class UZoneGraphAnnotationTestingComponent : public UDebugDrawComponent
{ 
public:
	TArray<class UZoneGraphAnnotationTest*>            Tests;                                                      // 0x0550   (0x0010)  
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AZoneGraphAnnotationTestingActor : public AActor
{ 
public:
	class UZoneGraphAnnotationTestingComponent*        TestingComp;                                                // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingActor.Trigger
	// void Trigger();                                                                                                       // [0xa0fdb20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotation
/// Size: 0x0070 (0x000570 - 0x0005E0)
class UZoneGraphDisturbanceAnnotation : public UZoneGraphAnnotationComponent
{ 
public:
	FZoneGraphTag                                      DangerAnnotationTag;                                        // 0x0570   (0x0001)  
	FZoneGraphTag                                      ObstacleAnnotationTag;                                      // 0x0571   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0572   (0x0002)  MISSED
	FZoneGraphTagFilter                                AffectedLaneTags;                                           // 0x0574   (0x000C)  
	FZoneGraphTagFilter                                EscapeLaneTags;                                             // 0x0580   (0x000C)  
	float                                              IdealSpanLength;                                            // 0x058C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x40];                                      // 0x0590   (0x0040)  MISSED
	class UZoneGraphSubsystem*                         ZoneGraphSubsystem;                                         // 0x05D0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x05D8   (0x0008)  MISSED
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationTest
/// Size: 0x0020 (0x000030 - 0x000050)
class UZoneGraphDisturbanceAnnotationTest : public UZoneGraphAnnotationTest
{ 
public:
	FVector                                            Offset;                                                     // 0x0030   (0x0018)  
	float                                              duration;                                                   // 0x0048   (0x0004)  
	float                                              DangerRadius;                                               // 0x004C   (0x0004)  
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UZoneGraphDisturbanceAnnotationBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationBPLibrary.TriggerDanger
	// void TriggerDanger(class UObject* WorldContextObject, class AActor* Instigator, FVector Position, float Radius, float duration); // [0xa0fdb7c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/ZoneGraphAnnotations.ZoneGraphAnnotationEventBase
/// Size: 0x0001 (0x000000 - 0x000001)
struct FZoneGraphAnnotationEventBase
{ 
};

/// Struct /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceArea
/// Size: 0x0027 (0x000001 - 0x000028)
struct FZoneGraphDisturbanceArea : FZoneGraphAnnotationEventBase
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	float                                              Radius;                                                     // 0x0018   (0x0004)  
	float                                              duration;                                                   // 0x001C   (0x0004)  
	uint32_t                                           InstigatorId;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ZoneGraphAnnotations.ZoneGraphObstacleDisturbanceArea
/// Size: 0x002F (0x000001 - 0x000030)
struct FZoneGraphObstacleDisturbanceArea : FZoneGraphAnnotationEventBase
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	float                                              Radius;                                                     // 0x0018   (0x0004)  
	float                                              ObstacleRadius;                                             // 0x001C   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0020   (0x0008)  MISSED
	EZoneGraphObstacleDisturbanceAreaAction            Action;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

