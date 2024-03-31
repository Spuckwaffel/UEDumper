
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/DeploymentConsole.DeploymentConsoleComponent
/// Size: 0x0198 (0x0000A0 - 0x000238)
class UDeploymentConsoleComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(TArray<FDeploymentConsoleAircraftData>)    Aircrafts                                                   OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FScalableFloat)                            RadiusPercentForRespawnMin                                  OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            RadiusPercentForRespawnMax                                  OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRespawnRadius                                            OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            TeamMemberSpread                                            OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            TraceForGroundStart                                         OFFSET(getStruct<T>, {0x178, 40, 0, 0})
	SMember(FScalableFloat)                            TraceForGroundEnd                                           OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	SMember(FScalableFloat)                            MinHeightFromGround                                         OFFSET(getStruct<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            MinHeightFromZero                                           OFFSET(getStruct<T>, {0x1F0, 40, 0, 0})
	CMember(TArray<FVector2D>)                         SpawnPoints                                                 OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<FDeploymentConsoleTeamData>)        TeamSpawnData                                               OFFSET(get<T>, {0x228, 16, 0, 0})


	/// Functions
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SpawnAircrafts
	// TArray<FDeploymentConsoleAircraftData> SpawnAircrafts(bool bSpawnAircraftForEachTeam);                                   // [0xc0733ec] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SpawnAircraft
	// class AFortAthenaAircraft* SpawnAircraft(int32_t FlightIndex);                                                           // [0x6cfe83c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetupTeamSpawnPoints
	// void SetupTeamSpawnPoints(bool bGroupTeams);                                                                             // [0x63958fc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetPlayerIsWaiting
	// void SetPlayerIsWaiting(class AController* InController, bool bInPlayerIsWaiting);                                       // [0xc073298] Final|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetAircraftLock
	// void SetAircraftLock(bool bIsLocked);                                                                                    // [0x63958fc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.SetAircraftDropZone
	// void SetAircraftDropZone(FBox2D& InDropZone);                                                                            // [0xc073234] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.RetrievePlayerSpawnLocation
	// FVector2D RetrievePlayerSpawnLocation(bool bIsGameInProgress, bool bGroupTeams, char InTeam);                            // [0xc07308c] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ResetSpawnPoints
	// void ResetSpawnPoints();                                                                                                 // [0x3518b8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.MoveBoxTo
	// FBox2D MoveBoxTo(FBox2D& InBox, FVector2D& VectorToMoveTo);                                                              // [0xc072f8c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.InitializeFlightPath
	// void InitializeFlightPath(class AFortGameStateAthena* GSA, FAircraftFlightConstructionInfo& FlightPathConstructionInfo); // [0xc072e88] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetTeamSpawnData
	// TArray<FDeploymentConsoleTeamData> GetTeamSpawnData();                                                                   // [0xc072e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetSpawnPoints
	// TArray<FVector2D> GetSpawnPoints();                                                                                      // [0xc072df4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetMinigameTeamsWithPlayers
	// TArray<char> GetMinigameTeamsWithPlayers(class AFortMinigame* InMinigame);                                               // [0xc072d20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetMapInfo
	// class AFortAthenaMapInfo* GetMapInfo();                                                                                  // [0xc072cfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetDefaultFlightPathConstructionInfo
	// FAircraftFlightConstructionInfo GetDefaultFlightPathConstructionInfo(class AFortGameStateAthena* GameStateAthena, EAirCraftBehavior AirCraftBehavior); // [0xc072ac0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.GetCachedAircraftSpawnZone
	// FBox2D GetCachedAircraftSpawnZone();                                                                                     // [0xc072a34] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ForcePlayerEnterAircraft
	// void ForcePlayerEnterAircraft(class AFortPlayerControllerAthena* InController, class AFortAthenaAircraft* InAircraft);   // [0xc0728cc] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ConstructInventoryOnController
	// void ConstructInventoryOnController(class AFortPlayerControllerAthena* InController);                                    // [0x63b1a60] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.ClearFlightInfos
	// void ClearFlightInfos();                                                                                                 // [0xc072878] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.CalculateSpawnRotationFromLocation
	// FRotator CalculateSpawnRotationFromLocation(FVector& InSpawnLocation);                                                   // [0xc072794] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DeploymentConsole.DeploymentConsoleComponent.AdjustLocationToValidHeight
	// FVector AdjustLocationToValidHeight(FVector& RespawnLocation);                                                           // [0xc0726b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DeploymentConsole.FortAthenaMutator_CR_Respawn
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CR_Respawn : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Struct /Script/DeploymentConsole.DeploymentConsoleAircraftData
/// Size: 0x0010 (0x000000 - 0x000010)
class FDeploymentConsoleAircraftData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(char)                                      Team                                                        OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(class AFortAthenaAircraft*)                Aircraft                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/DeploymentConsole.DeploymentConsoleTeamData
/// Size: 0x0018 (0x000000 - 0x000018)
class FDeploymentConsoleTeamData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      Team                                                        OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(TArray<FVector2D>)                         SpawnLocations                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

