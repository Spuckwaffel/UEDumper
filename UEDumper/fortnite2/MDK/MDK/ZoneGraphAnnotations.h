
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StructUtils
/// dependency: ZoneGraph

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationComponent
/// Size: 0x0020 (0x000550 - 0x000570)
class UZoneGraphAnnotationComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	DMember(bool)                                      bEnableDebugDrawing                                         OFFSET(get<bool>, {0x568, 1, 0, 0})
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationSubsystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UZoneGraphAnnotationSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FRegisteredZoneGraphAnnotation>)    RegisteredComponents                                        OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FInstancedStructContainer)                 Events                                                      OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(TArray<class UZoneGraphAnnotationComponent*>) TagToAnnotationLookup                                    OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTest
/// Size: 0x0008 (0x000028 - 0x000030)
class UZoneGraphAnnotationTest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UZoneGraphAnnotationTestingComponent*) OwnerComponent                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingComponent
/// Size: 0x0010 (0x000550 - 0x000560)
class UZoneGraphAnnotationTestingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(TArray<class UZoneGraphAnnotationTest*>)   Tests                                                       OFFSET(get<T>, {0x550, 16, 0, 0})
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AZoneGraphAnnotationTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UZoneGraphAnnotationTestingComponent*) TestingComp                                               OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Script/ZoneGraphAnnotations.ZoneGraphAnnotationTestingActor.Trigger
	// void Trigger();                                                                                                          // [0xb34b254] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotation
/// Size: 0x0070 (0x000570 - 0x0005E0)
class UZoneGraphDisturbanceAnnotation : public UZoneGraphAnnotationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FZoneGraphTag)                             DangerAnnotationTag                                         OFFSET(getStruct<T>, {0x570, 1, 0, 0})
	SMember(FZoneGraphTag)                             ObstacleAnnotationTag                                       OFFSET(getStruct<T>, {0x571, 1, 0, 0})
	SMember(FZoneGraphTagFilter)                       AffectedLaneTags                                            OFFSET(getStruct<T>, {0x574, 12, 0, 0})
	SMember(FZoneGraphTagFilter)                       EscapeLaneTags                                              OFFSET(getStruct<T>, {0x580, 12, 0, 0})
	DMember(float)                                     IdealSpanLength                                             OFFSET(get<float>, {0x58C, 4, 0, 0})
	CMember(class UZoneGraphSubsystem*)                ZoneGraphSubsystem                                          OFFSET(get<T>, {0x5D0, 8, 0, 0})
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationTest
/// Size: 0x0020 (0x000030 - 0x000050)
class UZoneGraphDisturbanceAnnotationTest : public UZoneGraphAnnotationTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DangerRadius                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationBPLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UZoneGraphDisturbanceAnnotationBPLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceAnnotationBPLibrary.TriggerDanger
	// void TriggerDanger(class UObject* WorldContextObject, class AActor* Instigator, FVector Position, float Radius, float duration); // [0xb34b2b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/ZoneGraphAnnotations.RegisteredZoneGraphAnnotation
/// Size: 0x0010 (0x000000 - 0x000010)
class FRegisteredZoneGraphAnnotation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UZoneGraphAnnotationComponent*)      AnnotationComponent                                         OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ZoneGraphAnnotations.ZoneGraphAnnotationEventBase
/// Size: 0x0001 (0x000000 - 0x000001)
class FZoneGraphAnnotationEventBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ZoneGraphAnnotations.ZoneGraphDisturbanceArea
/// Size: 0x0028 (0x000000 - 0x000028)
class FZoneGraphDisturbanceArea : public FZoneGraphAnnotationEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(uint32_t)                                  InstigatorId                                                OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/ZoneGraphAnnotations.ZoneGraphObstacleDisturbanceArea
/// Size: 0x0030 (0x000000 - 0x000030)
class FZoneGraphObstacleDisturbanceArea : public FZoneGraphAnnotationEventBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ObstacleRadius                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(EZoneGraphObstacleDisturbanceAreaAction)   Action                                                      OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Enum /Script/ZoneGraphAnnotations.EZoneGraphObstacleDisturbanceAreaAction
/// Size: 0x02
enum class EZoneGraphObstacleDisturbanceAreaAction : uint8_t
{
	EZoneGraphObstacleDisturbanceAreaAction__Add                                     = 0,
	EZoneGraphObstacleDisturbanceAreaAction__Remove                                  = 1
};

