
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NavigationSystem

/// Class /Script/NavCorridor.NavCorridorTestingComponent
/// Size: 0x0120 (0x000550 - 0x000670)
class UNavCorridorTestingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FNavAgentProperties)                       NavAgentProps                                               OFFSET(getStruct<T>, {0x550, 48, 0, 0})
	CMember(class UClass*)                             FilterClass                                                 OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(bool)                                      bFindCorridorToGoal                                         OFFSET(get<bool>, {0x588, 1, 0, 0})
	DMember(bool)                                      bFollowPathOnGoalCorridor                                   OFFSET(get<bool>, {0x589, 1, 0, 0})
	DMember(float)                                     FollowLookAheadDistance                                     OFFSET(get<float>, {0x58C, 4, 0, 0})
	CMember(class AActor*)                             GoalActor                                                   OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(class ANavigationData*)                    NavData                                                     OFFSET(get<T>, {0x598, 8, 0, 0})
	SMember(FNavCorridorParams)                        CorridorParams                                              OFFSET(getStruct<T>, {0x5A0, 24, 0, 0})
	DMember(bool)                                      bUpdateParametersFromWidth                                  OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	DMember(float)                                     PathOffset                                                  OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(float)                                     PathfindingTimeUs                                           OFFSET(get<float>, {0x5C0, 4, 0, 0})
	DMember(float)                                     CorridorTimeUs                                              OFFSET(get<float>, {0x5C4, 4, 0, 0})
};

/// Class /Script/NavCorridor.NavCorridorTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ANavCorridorTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class UNavCorridorTestingComponent*)       DebugComp                                                   OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/NavCorridor.NavCorridorParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavCorridorParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ObstacleTaperAngle                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SmallSectorThreshold                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LargeSectorThreshold                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SimplifyEdgeThreshold                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bSimplifyFlipPortals                                        OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bSimplifyConvexPortals                                      OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(bool)                                      bSimplifyConcavePortals                                     OFFSET(get<bool>, {0x16, 1, 0, 0})
};

