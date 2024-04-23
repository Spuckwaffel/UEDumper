
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: MidMatchObjectivesGameplayRuntime
/// dependency: ModularGameplay

/// Class /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective
/// Size: 0x0128 (0x0000A8 - 0x0001D0)
class UFortGameStateComponent_AssignedObjective : public UFortGameStateComponent_MidMatchObjectiveParent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FScalableFloat)                            IdealNumSquadsPerObjective                                  OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            bAllowUnopposedSquads                                       OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            MinPairedSquadDistForUnopposed                              OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            UnopposedSquad_FakeSquadMaxSafeZonePct                      OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            UnopposedSquad_FakeSquadMinDistToSquad                      OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            SpawnObjectivesInsideSafeZonePct                            OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	CMember(TWeakObjectPtr<UEnvQuery*>)                AssignedObjectiveLocationEnvQuery                           OFFSET(get<T>, {0x198, 32, 0, 0})
	CMember(TArray<FFortAssignedObjectiveData>)        AssignedObjectives                                          OFFSET(get<T>, {0x1B8, 16, 0, 0})


	/// Functions
	// Function /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.StartAssignedObjectives
	// void StartAssignedObjectives();                                                                                          // [0x35e6228] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.OnAssignedObjectiveReady
	// void OnAssignedObjectiveReady(FFortAssignedObjectiveData& ObjectiveData);                                                // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.CalculateSquadAvgLocation
	// FVector CalculateSquadAvgLocation(char SquadID, class UObject* WorldContextObject);                                      // [0xbd15574] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MidMatchAssignedGameplayRuntime.FortQueryContext_SpawnedObjectiveLocations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_SpawnedObjectiveLocations : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MidMatchAssignedGameplayRuntime.FortQueryContext_SquadAvgLocationsForObjective
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_SquadAvgLocationsForObjective : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MidMatchAssignedGameplayRuntime.FortQueryTest_ClosestPlayersToObjectiveDeltaDistance
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bUseDistance2D                                              OFFSET(get<bool>, {0x1F8, 1, 0, 0})
};

/// Struct /Script/MidMatchAssignedGameplayRuntime.FortAssignedObjectiveSquadData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAssignedObjectiveSquadData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(char)                                      SquadID                                                     OFFSET(get<char>, {0x0, 1, 0, 0})
	SMember(FVector)                                   CachedSquadAvgLocation                                      OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/MidMatchAssignedGameplayRuntime.FortAssignedObjectiveData
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortAssignedObjectiveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FFortAssignedObjectiveSquadData>)   AssignedSquadDataArray                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   ObjectiveLocation                                           OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

