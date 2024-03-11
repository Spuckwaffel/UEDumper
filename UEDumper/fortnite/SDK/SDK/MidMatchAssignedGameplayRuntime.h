
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: MidMatchObjectivesGameplayRuntime
/// dependency: ModularGameplay

/// Struct /Script/MidMatchAssignedGameplayRuntime.FortAssignedObjectiveSquadData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFortAssignedObjectiveSquadData
{ 
	char                                               SquadId;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            CachedSquadAvgLocation;                                     // 0x0008   (0x0018)  
};

/// Struct /Script/MidMatchAssignedGameplayRuntime.FortAssignedObjectiveData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFortAssignedObjectiveData
{ 
	TArray<FFortAssignedObjectiveSquadData>            AssignedSquadDataArray;                                     // 0x0000   (0x0010)  
	FVector                                            ObjectiveLocation;                                          // 0x0010   (0x0018)  
};

/// Class /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective
/// Size: 0x0128 (0x0000A8 - 0x0001D0)
class UFortGameStateComponent_AssignedObjective : public UFortGameStateComponent_MidMatchObjectiveParent
{ 
public:
	FScalableFloat                                     IdealNumSquadsPerObjective;                                 // 0x00A8   (0x0028)  
	FScalableFloat                                     bAllowUnopposedSquads;                                      // 0x00D0   (0x0028)  
	FScalableFloat                                     MinPairedSquadDistForUnopposed;                             // 0x00F8   (0x0028)  
	FScalableFloat                                     UnopposedSquad_FakeSquadMaxSafeZonePct;                     // 0x0120   (0x0028)  
	FScalableFloat                                     UnopposedSquad_FakeSquadMinDistToSquad;                     // 0x0148   (0x0028)  
	FScalableFloat                                     SpawnObjectivesInsideSafeZonePct;                           // 0x0170   (0x0028)  
	SDK_UNDEFINED(32,15061) /* TWeakObjectPtr<UEnvQuery*> */ __um(AssignedObjectiveLocationEnvQuery);              // 0x0198   (0x0020)  
	TArray<FFortAssignedObjectiveData>                 AssignedObjectives;                                         // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.StartAssignedObjectives
	// void StartAssignedObjectives();                                                                                       // [0x36203b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.OnAssignedObjectiveReady
	// void OnAssignedObjectiveReady(FFortAssignedObjectiveData& ObjectiveData);                                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MidMatchAssignedGameplayRuntime.FortGameStateComponent_AssignedObjective.CalculateSquadAvgLocation
	// FVector CalculateSquadAvgLocation(char SquadId, class UObject* WorldContextObject);                                   // [0xa993e8c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MidMatchAssignedGameplayRuntime.FortQueryContext_SpawnedObjectiveLocations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_SpawnedObjectiveLocations : public UEnvQueryContext
{ 
public:
};

/// Class /Script/MidMatchAssignedGameplayRuntime.FortQueryContext_SquadAvgLocationsForObjective
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_SquadAvgLocationsForObjective : public UEnvQueryContext
{ 
public:
};

/// Class /Script/MidMatchAssignedGameplayRuntime.FortQueryTest_ClosestPlayersToObjectiveDeltaDistance
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance : public UEnvQueryTest
{ 
public:
	bool                                               bUseDistance2D;                                             // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

