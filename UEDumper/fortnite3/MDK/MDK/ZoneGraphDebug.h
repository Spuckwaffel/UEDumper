
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ZoneGraph

/// Class /Script/ZoneGraphDebug.ZoneLaneTest
/// Size: 0x0008 (0x000028 - 0x000030)
class UZoneLaneTest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UZoneGraphTestingComponent*)         OwnerComponent                                              OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/ZoneGraphDebug.ZoneGraphTestingComponent
/// Size: 0x02E0 (0x000500 - 0x0007E0)
class UZoneGraphTestingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	CMember(class UZoneGraphSubsystem*)                ZoneGraph                                                   OFFSET(get<T>, {0x510, 8, 0, 0})
	SMember(FZoneGraphLaneLocation)                    LaneLocation                                                OFFSET(getStruct<T>, {0x518, 112, 0, 0})
	SMember(FZoneGraphLaneLocation)                    NextLaneLocation                                            OFFSET(getStruct<T>, {0x588, 112, 0, 0})
	SMember(FZoneGraphLaneLocation)                    NearestLaneLocation                                         OFFSET(getStruct<T>, {0x5F8, 112, 0, 0})
	SMember(FVector)                                   SearchExtent                                                OFFSET(getStruct<T>, {0x668, 24, 0, 0})
	DMember(float)                                     AdvanceDistance                                             OFFSET(get<float>, {0x680, 4, 0, 0})
	SMember(FVector)                                   NearestTestOffset                                           OFFSET(getStruct<T>, {0x688, 24, 0, 0})
	SMember(FZoneGraphTagFilter)                       QueryFilter                                                 OFFSET(getStruct<T>, {0x6A0, 12, 0, 0})
	DMember(bool)                                      bDrawLinkedLanes                                            OFFSET(get<bool>, {0x6AC, 1, 0, 0})
	DMember(bool)                                      bDrawLaneTangentVectors                                     OFFSET(get<bool>, {0x6AD, 1, 0, 0})
	DMember(bool)                                      bDrawLaneSmoothing                                          OFFSET(get<bool>, {0x6AE, 1, 0, 0})
	DMember(bool)                                      bDrawBVTreeQuery                                            OFFSET(get<bool>, {0x6AF, 1, 0, 0})
	DMember(bool)                                      bDrawLanePath                                               OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	CMember(class AZoneGraphTestingActor*)             OtherActor                                                  OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(TArray<class UZoneLaneTest*>)              CustomTests                                                 OFFSET(get<T>, {0x7C0, 16, 0, 0})


	/// Functions
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingComponent.EnableCustomTests
	// void EnableCustomTests();                                                                                                // [0xb21a508] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingComponent.DisableCustomTests
	// void DisableCustomTests();                                                                                               // [0xb21a4cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ZoneGraphDebug.ZoneGraphTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AZoneGraphTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UZoneGraphTestingComponent*)         DebugComp                                                   OFFSET(get<T>, {0x290, 8, 0, 0})


	/// Functions
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingActor.EnableCustomTests
	// void EnableCustomTests();                                                                                                // [0xb21a4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingActor.DisableCustomTests
	// void DisableCustomTests();                                                                                               // [0xb21a4a4] Final|Native|Public|BlueprintCallable 
};

