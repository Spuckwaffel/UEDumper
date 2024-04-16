
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: AudioGameplay
/// dependency: ClientPilot
/// dependency: CommonInput
/// dependency: CoreUObject
/// dependency: CosmeticsFrameworkLoadouts
/// dependency: DelMarTrackRuntime
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: ItemizationCoreRuntime
/// dependency: LinkId
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: PlayspaceSystem
/// dependency: VehicleAudioRuntime
/// dependency: VehicleCosmeticsAudioRuntime
/// dependency: VehicleCosmeticsRuntime

/// Class /Script/DelMarCore.DelMarActorMover
/// Size: 0x0040 (0x000BD8 - 0x000C18)
class ADelMarActorMover : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3096;

public:
	CMember(class UClass*)                             ActorClass                                                  OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(class USplineComponent*)                   MovementSpline                                              OFFSET(get<T>, {0xBE0, 8, 0, 0})
	CMember(EDelMarSplineMovementType)                 MovementType                                                OFFSET(get<T>, {0xBE8, 1, 0, 0})
	CMember(class AActor*)                             ManagedActor                                                OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(class UDelMarSplineActorMovementComponent*) SplineMovementComponent                                    OFFSET(get<T>, {0xBF8, 8, 0, 0})
	DMember(float)                                     ServerMovementStartTime                                     OFFSET(get<float>, {0xC10, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarActorMover.OnRep_ServerStartTime
	// void OnRep_ServerStartTime();                                                                                            // [0xc3c09b8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarActorMover.InitializeMovement
	// void InitializeMovement();                                                                                               // [0xc3c0830] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarAIController
/// Size: 0x0228 (0x0003B8 - 0x0005E0)
class ADelMarAIController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FMulticastInlineDelegate)                  OnLoadoutChanged                                            OFFSET(getStruct<T>, {0x3D8, 16, 0, 0})
	SMember(FGameplayTag)                              DescriptorTag                                               OFFSET(getStruct<T>, {0x3E8, 4, 0, 0})
	SMember(FFortAthenaLoadout)                        CosmeticLoadoutBC                                           OFFSET(getStruct<T>, {0x3F0, 352, 0, 0})
	SMember(FCosmeticLoadout)                          VehicleCosmeticLoadout                                      OFFSET(getStruct<T>, {0x550, 16, 0, 0})
	CMember(EDelMarInvertSteerMethod)                  BotSteerMethod                                              OFFSET(get<T>, {0x560, 1, 0, 0})
	CMember(class UBehaviorTree*)                      BTAssetToRunOnPawnAISpawned                                 OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(TArray<class UBehaviorTree*>)              SkillLevelBehaviorTrees                                     OFFSET(get<T>, {0x570, 16, 0, 0})
	DMember(int32_t)                                   MinSkillLevelForRubberbanding                               OFFSET(get<int32_t>, {0x580, 4, 0, 0})
	CMember(class UClass*)                             OobTubePositionRenderingComponentClass                      OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           DelMarVehicle                                               OFFSET(get<T>, {0x590, 8, 0, 0})
	DMember(int32_t)                                   DelMarBotControllerUID                                      OFFSET(get<int32_t>, {0x5A8, 4, 0, 0})
	DMember(int32_t)                                   DelMarBotSkillLevel                                         OFFSET(get<int32_t>, {0x5AC, 4, 0, 0})
	SMember(FString)                                   DelMarBotPlayerName                                         OFFSET(getStruct<T>, {0x5B0, 16, 0, 0})
	CMember(class UDelMarAIService*)                   DelMarAIService                                             OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class AFortPlayerPawn*)                    PlayerBotPawn                                               OFFSET(get<T>, {0x5C8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarAIController.HandleGroundedStateChanged
	// void HandleGroundedStateChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                       // [0xc3c01dc] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarAIService
/// Size: 0x00F0 (0x000078 - 0x000168)
class UDelMarAIService : public UAthenaAIService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(class UClass*)                             CosmeticComponentClass                                      OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarAIVehicleCosmeticLibraryData*>) VehicleCosmeticLibrary                           OFFSET(get<T>, {0x80, 32, 0, 0})
	DMember(bool)                                      bBotsUniqueIDUseValidAccountID                              OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bUseRegionalNameList                                        OFFSET(get<bool>, {0xA1, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaAIBotNameDataAsset*>) BotNameDataAsset                                       OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(class UClass*)                             AIControllerClass                                           OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               MMRSpawnTablePtr                                            OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TArray<class ADelMarAIController*>)        DelMarAIControllers                                         OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarRespawnManagerComponent*>) RespawnManagerComponent                               OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TSet<FString>)                             ReservedPlayerNames                                         OFFSET(get<T>, {0x110, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarAIService.HandlePlayerUnregistered
	// void HandlePlayerUnregistered(class AFortPlayerState* UnregisteredPlayerState, bool bSetAsInactive);                     // [0xc3c0504] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarAIService.HandlePlayerRegistered
	// void HandlePlayerRegistered(class AFortPlayerState* RegisteredPlayerState);                                              // [0xc3c0370] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarAIService.GetRegisteredAIBotControllers
	// TArray<ADelMarAIController*> GetRegisteredAIBotControllers();                                                            // [0xc3bfaa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarAIService.GetMaxNumberOfPlayers
	// int32_t GetMaxNumberOfPlayers();                                                                                         // [0xc2a77e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarAIVehicleCosmeticLibraryData
/// Size: 0x0030 (0x000030 - 0x000060)
class UDelMarAIVehicleCosmeticLibraryData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               PredefineVehiclCosmeticSetsDataTable                        OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TArray<FDelMarAIVehicleCosmeticSlotDataTableInfo>) RandomizedVehicleSlotDataTables                     OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/DelMarCore.DriveHazardInfo
/// Size: 0x0050 (0x000028 - 0x000078)
class UDriveHazardInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarBTService_VehicleBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UDelMarBTService_VehicleBase : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    VehicleKey                                                  OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           DelMarVehicle                                               OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarBTService_FindDriveGoal
/// Size: 0x0430 (0x0000A0 - 0x0004D0)
class UDelMarBTService_FindDriveGoal : public UDelMarBTService_VehicleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FBlackboardKeySelector)                    DriveGoalLocationKey                                        OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    DriveGoalRotationKey                                        OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    IsAirDriveGoalKey                                           OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    HasUpcomingCollisionKey                                     OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	DMember(float)                                     GroundedDriveGoalVehicleForwardOffset                       OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     AirDriveGoalVehicleForwardOffset                            OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     PathNoiseAmplitude                                          OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     PathNoiseFrequency                                          OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfCheckedTrackSegments                             OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   NumberOfSideAvoidanceRaycasts                               OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	DMember(float)                                     DegreesBetweenRaycasts                                      OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     DriftPrimaryTraceRotationFactor                             OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     NonJumpableHazardMinHitNormalDegrees                        OFFSET(get<float>, {0x160, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            RaycastCollisionChannel                                     OFFSET(get<T>, {0x164, 1, 0, 0})
	CMember(TArray<class UClass*>)                     IgnoredActorClasses                                         OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FDelMarScaledCurve)                        RaycastDistanceCurve                                        OFFSET(getStruct<T>, {0x178, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        RayCastDistanceContributionCurve                            OFFSET(getStruct<T>, {0x208, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        VehicleDistanceAvoidanceCurve                               OFFSET(getStruct<T>, {0x298, 144, 0, 0})
	DMember(float)                                     DriveGoalOffsetCancelPadding                                OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(float)                                     DriveHazardOffsetCancelPadding                              OFFSET(get<float>, {0x32C, 4, 0, 0})
	DMember(float)                                     VehicleTrackOffsetCancelPadding                             OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(float)                                     DriveHazardMaxJumpDistanceFactor                            OFFSET(get<float>, {0x334, 4, 0, 0})
	DMember(float)                                     DriveHazardMinJumpDistanceFactor                            OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     BlockedJumpTracePadding                                     OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(float)                                     TrackGapJumpHeightThreshold                                 OFFSET(get<float>, {0x340, 4, 0, 0})
	CMember(TArray<class UClass*>)                     JumpableActorClasses                                        OFFSET(get<T>, {0x348, 16, 0, 0})
	SMember(FDelMarScaledCurve)                        PercentChanceToIgnoreJumpHazardCurve                        OFFSET(getStruct<T>, {0x358, 144, 0, 0})
	DMember(float)                                     PercentChanceToIgnoreDriveHazard                            OFFSET(get<float>, {0x3E8, 4, 0, 0})
	DMember(float)                                     PercentChanceToNotCheckForSafeLanding                       OFFSET(get<float>, {0x3EC, 4, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackPositionComponent*>) TrackPositionComponent                                 OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackOobTubePositionalRenderingComponent*>) OobTubePositionalRenderingComponent  OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(TMap<TWeakObjectPtr<AActor*>, UDriveHazardInfo*>) PrevFrameDriveHazardInfoMap                          OFFSET(get<T>, {0x400, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarBTService_ResetVehicle
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarBTService_ResetVehicle : public UDelMarBTService_VehicleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<UDelMarPlayerRaceDataComponent*>) PlayerRaceDataComponent                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackPositionComponent*>) TrackPositionComponent                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarBTTask_VehicleBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UDelMarBTTask_VehicleBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    VehicleKey                                                  OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           DelMarVehicle                                               OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarBTTask_DriveTrack
/// Size: 0x0750 (0x0000A0 - 0x0007F0)
class UDelMarBTTask_DriveTrack : public UDelMarBTTask_VehicleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	SMember(FBlackboardKeySelector)                    DriveGoalLocationKey                                        OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    DriveGoalRotationKey                                        OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    IsAirDriveGoalKey                                           OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    HasUpcomingCollisionKey                                     OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FDelMarScaledCurve)                        GroundedTrackHorizontalOffsetSteerCurve                     OFFSET(getStruct<T>, {0x140, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        AirTrackHorizontalOffsetSteerCurve                          OFFSET(getStruct<T>, {0x1D0, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        CollisionAvoidanceHorizontalOffsetSteerCurve                OFFSET(getStruct<T>, {0x260, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        GroundedTurnDegreesSteerDecisionCurve                       OFFSET(getStruct<T>, {0x2F0, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        AirTurnDegreesSteerDecisionCurve                            OFFSET(getStruct<T>, {0x380, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        CollisionTurnDegreesSteerDecisionCurve                      OFFSET(getStruct<T>, {0x410, 144, 0, 0})
	DMember(float)                                     DriveThrottle                                               OFFSET(get<float>, {0x4A0, 4, 0, 0})
	DMember(bool)                                      bCanKickDrift                                               OFFSET(get<bool>, {0x4A4, 1, 0, 0})
	DMember(int32_t)                                   NumberOfDriftCheckSamples                                   OFFSET(get<int32_t>, {0x4A8, 4, 0, 0})
	DMember(float)                                     MinDriftSampleDistanceScaleFactor                           OFFSET(get<float>, {0x4AC, 4, 0, 0})
	DMember(float)                                     MaxDriftSampleDistanceScaleFactor                           OFFSET(get<float>, {0x4B0, 4, 0, 0})
	DMember(float)                                     MinExitDriftSampleDistanceFromVehicle                       OFFSET(get<float>, {0x4B4, 4, 0, 0})
	DMember(float)                                     MaxExitDriftSampleDistanceFromVehicle                       OFFSET(get<float>, {0x4B8, 4, 0, 0})
	DMember(float)                                     MinRequiredDriftDegrees                                     OFFSET(get<float>, {0x4BC, 4, 0, 0})
	DMember(float)                                     MaxRequiredDriftDegrees                                     OFFSET(get<float>, {0x4C0, 4, 0, 0})
	DMember(float)                                     MinRequiredKickDriftDegrees                                 OFFSET(get<float>, {0x4C4, 4, 0, 0})
	DMember(float)                                     MaxRequiredKickDriftDegrees                                 OFFSET(get<float>, {0x4C8, 4, 0, 0})
	DMember(float)                                     MinSecondsToUpdateRandomDriftConfigValues                   OFFSET(get<float>, {0x4CC, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        PercentChanceToKickDriftCurve                               OFFSET(getStruct<T>, {0x4D0, 144, 0, 0})
	DMember(float)                                     MinDriftSlipRatioForExitKickDrift                           OFFSET(get<float>, {0x560, 4, 0, 0})
	DMember(float)                                     MinDriftSpeed                                               OFFSET(get<float>, {0x564, 4, 0, 0})
	DMember(float)                                     DriftKickUnderSteerDegreesThreshold                         OFFSET(get<float>, {0x568, 4, 0, 0})
	DMember(float)                                     DriftKickOverSteerDegreesThreshold                          OFFSET(get<float>, {0x56C, 4, 0, 0})
	DMember(float)                                     DriftTapUnderSteerDegreesThreshold                          OFFSET(get<float>, {0x570, 4, 0, 0})
	DMember(float)                                     DriftTapOverSteerDegreesThreshold                           OFFSET(get<float>, {0x574, 4, 0, 0})
	DMember(float)                                     DriftCounterSteerDegreesThreshold                           OFFSET(get<float>, {0x578, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        MinDriftSlipRatioCurve                                      OFFSET(getStruct<T>, {0x580, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        DistanceBetweenDriftSamplesCurve                            OFFSET(getStruct<T>, {0x610, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        DriftSampleDistanceFromVehicleCurve                         OFFSET(getStruct<T>, {0x6A0, 144, 0, 0})
	DMember(float)                                     DriveGoalJumpHeightThreshold                                OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     DriveGoalStopJumpEarlyHeightThreshold                       OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     StopJumpEarlyChance                                         OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     MinNumTurboChargesNeededToTurbo                             OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     MaxTurboTrackCutoffAngleInDegrees                           OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     TurboActivationBaseChance                                   OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     SecondaryTurboBoostChance                                   OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     MinTimeBetweenTurboCheck                                    OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     MaxTimeBetweenTurboCheck                                    OFFSET(get<float>, {0x750, 4, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackPositionComponent*>) TrackPositionComponent                                 OFFSET(get<T>, {0x754, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarBTTask_DriveTrack.TurboBonusZoneStateChanged
	// void TurboBonusZoneStateChanged(EDelMarTurboZoneState NewState);                                                         // [0xc3c09d0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarBTTask_DriveTrack.HandleVehicleGroundedStateChanged
	// void HandleVehicleGroundedStateChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                // [0xc3c069c] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarBTTask_DriveTrack.HandleTurboActivated
	// void HandleTurboActivated();                                                                                             // [0xc3c0688] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarBTTask_RaceCountdown
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarBTTask_RaceCountdown : public UDelMarBTTask_VehicleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     MaxReactionTime                                             OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MinReactionTime                                             OFFSET(get<float>, {0xA4, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarCameraModeOverrideComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UDelMarCameraModeOverrideComponent : public UFortCameraModeOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/DelMarCore.DelMarChallengeGhostSystemControllerComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UDelMarChallengeGhostSystemControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(class UClass*)                             GhostPlaybackSessionComponentClass                          OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UClass*)                             GhostRecordingSessionComponentClass                         OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(double)                                    BestRunTime                                                 OFFSET(get<double>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarGhostPlaybackSessionComponent*>) CachedPlaybackSession                           OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarGhostRecordingSessionComponent*>) CachedRecordingSession                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarChallengeRaceManager*>) CachedRaceManager                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarRaceManager
/// Size: 0x0218 (0x000290 - 0x0004A8)
class ADelMarRaceManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	SMember(FMulticastInlineDelegate)                  OnRaceFinished                                              OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRaceStarted                                               OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRaceCountdownStarted                                      OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRaceReset                                                 OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerFinishedRace                                        OFFSET(getStruct<T>, {0x360, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerLapComplete                                         OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerResetRun                                            OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	DMember(bool)                                      bRaceStarted                                                OFFSET(get<bool>, {0x390, 1, 0, 0})
	DMember(bool)                                      bRaceFinished                                               OFFSET(get<bool>, {0x391, 1, 0, 0})
	CMember(TArray<class AFortPlayerState*>)           SpectatorPlayerStates                                       OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(TArray<class AFortPlayerState*>)           ActiveRacerPlayerStates                                     OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(class UDelMarRaceConfigComponent*)         RaceConfig                                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceLevelConfig*>)   ActiveRaceLevelConfig                                       OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class UDelMarTimeManagerComponent*)        TimeManager                                                 OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UDelMarRespawnManagerComponent*)     RespawnManager                                              OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UDelMarCheckpointManagerComponent*)  CheckpointManager                                           OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class UDelMarRubberbandingManagerComponent*) RubberbandingManager                                      OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class UDelMarPositionalTrackerComponent*)  PositionalTracker                                           OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class UDelMarEliminationRaceManagerComponent*) EliminationManager                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class UDelMarGlobalInputDisabler*)         InputDisablerComponent                                      OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class UDelMarMatchEventSystemComponent*)   MatchEventSystemComponent                                   OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(TSet<AFortPlayerState*>)                   ManagedPlayerStates                                         OFFSET(get<T>, {0x408, 80, 0, 0})
	CMember(TSet<TWeakObjectPtr<AFortPlayerState*>>)   InactivePlayerStates                                        OFFSET(get<T>, {0x458, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceManager.UnregisterPlayerState
	// void UnregisterPlayerState(class AFortPlayerState* InPlayerState, bool bSetAsInactive);                                  // [0xc49e20c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.UnregisterPlayerController
	// void UnregisterPlayerController(class AController* InController, bool bSetAsInactive);                                   // [0xc49e0cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.UnregisterAllPlayers
	// void UnregisterAllPlayers(bool bSetAsInactive);                                                                          // [0xc49e008] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.SetSpectatorAsPlayer
	// void SetSpectatorAsPlayer(class AFortPlayerState* PlayerState);                                                          // [0x98150a4] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.SetPlayerAsSpectator
	// void SetPlayerAsSpectator(class AFortPlayerState* PlayerState);                                                          // [0xc49dd2c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.SetActiveRaceLevelConfig
	// void SetActiveRaceLevelConfig(class ADelMarRaceLevelConfig* InRaceLevelConfig);                                          // [0x9812f74] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.ResetRun
	// void ResetRun(class AFortPlayerState* PlayerState, bool bPlayerTriggered);                                               // [0xc49d460] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.ResetRace
	// void ResetRace(bool bIsRoundReset);                                                                                      // [0xc49d398] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.RequestStartRace
	// void RequestStartRace(bool bSkipCountdown);                                                                              // [0xc49d214] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.RequestCountdownForPlayer
	// void RequestCountdownForPlayer(class AFortPlayerState* PlayerState);                                                     // [0x980d780] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.RegisterPlayerState
	// void RegisterPlayerState(class AFortPlayerState* InPlayerState);                                                         // [0xc49cf8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.RegisterPlayerController
	// void RegisterPlayerController(class AController* InController);                                                          // [0xc49cecc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.OnRep_ActiveRaceLevelConfig
	// void OnRep_ActiveRaceLevelConfig();                                                                                      // [0xc49c858] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.NetMulticast_ResetRun
	// void NetMulticast_ResetRun(class AFortPlayerState* InPlayerState, bool bPlayerTriggered);                                // [0xc49c628] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.NetMulticast_ResetRace
	// void NetMulticast_ResetRace(bool bNextRound);                                                                            // [0xc49c560] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.NetMulticast_FinishRace
	// void NetMulticast_FinishRace(double RaceFinishedTime);                                                                   // [0x8301f44] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.IsSpectator
	// bool IsSpectator(class AFortPlayerState* PlayerState);                                                                   // [0xc49c3b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.IsActiveRacer
	// bool IsActiveRacer(class AFortPlayerState* PlayerState);                                                                 // [0xc49c284] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.HandleRegisteredPlayerPawnSet
	// void HandleRegisteredPlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);              // [0xc49c08c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarRaceManager.GetTimeManager
	// class UDelMarTimeManagerComponent* GetTimeManager();                                                                     // [0xb1c87e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetSpectators
	// TArray<AFortPlayerState*> GetSpectators();                                                                               // [0xc49be7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetRubberbandingManager
	// class UDelMarRubberbandingManagerComponent* GetRubberbandingManager();                                                   // [0xc49be64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetRespawnManagerComponent
	// class UDelMarRespawnManagerComponent* GetRespawnManagerComponent();                                                      // [0x760cdd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetRaceConfig
	// class UDelMarRaceConfigComponent* GetRaceConfig();                                                                       // [0xbacf330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetPositionalTracker
	// class UDelMarPositionalTrackerComponent* GetPositionalTracker();                                                         // [0xc49be24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetNumInactiveRacers
	// int32_t GetNumInactiveRacers();                                                                                          // [0xc49bde0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetNumberOfLapsForRace
	// int32_t GetNumberOfLapsForRace();                                                                                        // [0xc49be00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetManagedPlayerStatesArray
	// TArray<AFortPlayerState*> GetManagedPlayerStatesArray();                                                                 // [0xc49bda4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetEliminationManagerComponent
	// class UDelMarEliminationRaceManagerComponent* GetEliminationManagerComponent();                                          // [0xc49bd8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetCurrentSpawnMode
	// EDelMarRaceSpawnMode GetCurrentSpawnMode();                                                                              // [0xc49bd00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetCurrentRaceMode
	// EDelMarRaceMode GetCurrentRaceMode();                                                                                    // [0xc49bcdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetActiveRacers
	// TArray<AFortPlayerState*> GetActiveRacers();                                                                             // [0xc49bb88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.GetActiveRaceLevelConfig
	// class ADelMarRaceLevelConfig* GetActiveRaceLevelConfig();                                                                // [0xc49bb64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceManager.FinishRace
	// void FinishRace();                                                                                                       // [0x319bdc0] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceManager.FinalizeRegisteredPlayerInitialization
	// void FinalizeRegisteredPlayerInitialization(class AFortPlayerState* PlayerState);                                        // [0xc49baa0] Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarChallengeRaceManager
/// Size: 0x0010 (0x0004A8 - 0x0004B8)
class ADelMarChallengeRaceManager : public ADelMarRaceManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	DMember(bool)                                      bIsOvertime                                                 OFFSET(get<bool>, {0x4A8, 1, 0, 0})
	SMember(FTimerHandle)                              OvertimeTimer                                               OFFSET(getStruct<T>, {0x4B0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarChallengeRaceManager.NetMulticast_StartOvertime
	// void NetMulticast_StartOvertime(double RaceFinishTimestamp);                                                             // [0xc3c0844] Net|NetReliableNative|Event|NetMulticast|Protected 
};

/// Class /Script/DelMarCore.DelMarStateMachine
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UDelMarStateMachine : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TArray<FDelMarStateOverride>)              StateOverrides                                              OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TMap<FGameplayTag, UClass*>)               StateMappings                                               OFFSET(get<T>, {0xB0, 80, 0, 0})
	SMember(FGameplayTag)                              RequestedStateTag                                           OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	SMember(FGameplayTag)                              CurrentStateTag                                             OFFSET(getStruct<T>, {0x104, 4, 0, 0})
	SMember(FGameplayTag)                              DefaultStateTag                                             OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	CMember(TArray<class UDelMarState*>)               ActiveStates                                                OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<class UDelMarState*>)               ReplicatedStates                                            OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FGameplayTag)                              WaitingForStateReplicationTag                               OFFSET(getStruct<T>, {0x130, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarStateMachine.RequestState
	// void RequestState(FGameplayTag StateTag);                                                                                // [0xc49d2d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarStateMachine.OnRep_RequestedStateTag
	// void OnRep_RequestedStateTag();                                                                                          // [0xc49c984] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarStateMachine.GetRequestedStateTag
	// FGameplayTag GetRequestedStateTag();                                                                                     // [0x64a3bb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarStateMachine.GetCurrentStateTag
	// FGameplayTag GetCurrentStateTag();                                                                                       // [0xc49bd74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarStateMachine.GetCurrentState
	// class UDelMarState* GetCurrentState();                                                                                   // [0xc49bd20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarStateMachine.GetActiveStateByTag
	// class UDelMarState* GetActiveStateByTag(FGameplayTag GameplayTag);                                                       // [0xc49bbc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarState
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              StateTag                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarRacerState
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarRacerState : public UDelMarState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarRacerState_WithSpectatorTransitionBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarRacerState_WithSpectatorTransitionBase : public UDelMarRacerState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarChallengeRacerState_RunActive
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarChallengeRacerState_RunActive : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarRacerStateMachineComponent
/// Size: 0x0030 (0x0001A8 - 0x0001D8)
class UDelMarRacerStateMachineComponent : public UDelMarStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FGameplayTag)                              PreviousStateTag                                            OFFSET(getStruct<T>, {0x1B0, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarChallengeRacerStateMachineComponent
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UDelMarChallengeRacerStateMachineComponent : public UDelMarRacerStateMachineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
};

/// Class /Script/DelMarCore.DelMarSpectatorControllerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UDelMarSpectatorControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UInputAction*)                       SpectateNextPlayerAction                                    OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UInputAction*)                       SpectatePrevPlayerAction                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UInputAction*)                       ExitSpectateAction                                          OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(class UClass*)                             InputManagerClass                                           OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnhancedInputComponent*>)  InputComponent                                              OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarRequestComponent*>)  SpectatorRequestComponent                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         CurrentViewTarget                                           OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PrevValidViewTarget                                         OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         SpectatorPlayerState                                        OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerControllerZone*>) SpectatorController                                        OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bIsLateJoinSpectator                                        OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.SpectatePrevPlayer
	// void SpectatePrevPlayer();                                                                                               // [0xc4584c8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.SpectateNextPlayer
	// void SpectateNextPlayer();                                                                                               // [0xc4584b4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.SetSpectatorTarget
	// void SetSpectatorTarget(class AFortPlayerState* PlayerState);                                                            // [0x8f7d8d0] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.SetIsLateJoinSpectator
	// void SetIsLateJoinSpectator(bool bNewLateJoinSpectator);                                                                 // [0xc45826c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.ServerSetSpectatorTarget
	// void ServerSetSpectatorTarget(class AFortPlayerState* PlayerState);                                                      // [0x8788574] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.NetMulticast_FinishSpectating
	// void NetMulticast_FinishSpectating();                                                                                    // [0x1e6b5b0] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.NetMulticast_BeginSpectating
	// void NetMulticast_BeginSpectating();                                                                                     // [0x2dc2798] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.IsLateJoinSpectator
	// bool IsLateJoinSpectator();                                                                                              // [0x34fa950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarSpectatorControllerComponent.ExitSpectate
	// void ExitSpectate();                                                                                                     // [0xc4561d8] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarChallengeSpectatorControllerComponent
/// Size: 0x0000 (0x000100 - 0x000100)
class UDelMarChallengeSpectatorControllerComponent : public UDelMarSpectatorControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarChallengeSpectatorControllerComponent.ClientUpdateFinishedSpectatorTarget
	// void ClientUpdateFinishedSpectatorTarget();                                                                              // [0x3c52ffc] Net|NetReliableNative|Event|Protected|NetClient|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarRaceManagerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarRaceManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarTimeManagerComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UDelMarTimeManagerComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerCountdownStarted                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(double)                                    ServerRaceStartTime                                         OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(double)                                    ServerRaceFinishTime                                        OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    ServerCountdownIntervalTime                                 OFFSET(get<double>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarRaceConfigComponent*>) RaceConfig                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceLevelConfig*>)   RaceLevelConfig                                             OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TMap<TWeakObjectPtr<AFortPlayerState*>, double>) ActiveCountdownRunStartTimeMap                        OFFSET(get<T>, {0xE0, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.StartCountdownForRace
	// void StartCountdownForRace(double ServerCountdownStartTime, double ServerRunStartTime, double InServerCountdownIntervalTime); // [0xc3c97a8] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.StartCountdownForPlayer
	// void StartCountdownForPlayer(class AFortPlayerState* PlayerState, double ServerCountdownStartTime, double ServerRunStartTime); // [0xc3c95d8] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.ResetClocks
	// void ResetClocks();                                                                                                      // [0x1b55e98] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetServerRaceStartTime
	// double GetServerRaceStartTime();                                                                                         // [0x345dfb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetServerRaceFinishTime
	// double GetServerRaceFinishTime();                                                                                        // [0x8213bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetServerCountdownIntervalTime
	// double GetServerCountdownIntervalTime();                                                                                 // [0x6b18b7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetSecondsSinceRaceStart
	// double GetSecondsSinceRaceStart();                                                                                       // [0xc3c7d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetSecondsRemainingTillRaceStart
	// double GetSecondsRemainingTillRaceStart();                                                                               // [0xc3c7d24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeManagerComponent.GetRaceTimeRemaining
	// double GetRaceTimeRemaining();                                                                                           // [0xc3c7cfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarChallengeTimeManagerComponent
/// Size: 0x0050 (0x000130 - 0x000180)
class UDelMarChallengeTimeManagerComponent : public UDelMarTimeManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TSet<TWeakObjectPtr<AFortPlayerState*>>)   SubsequentRunStartSet                                       OFFSET(get<T>, {0x130, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarClientReplayRecordingComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarClientReplayRecordingComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarCompetitiveRaceManager
/// Size: 0x0018 (0x0004A8 - 0x0004C0)
class ADelMarCompetitiveRaceManager : public ADelMarRaceManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	DMember(float)                                     FinishRaceAfterFirstPlayerFinishedSeconds                   OFFSET(get<float>, {0x4A8, 4, 0, 0})
	DMember(double)                                    FirstPlayerFinishedTimestamp                                OFFSET(get<double>, {0x4B8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCompetitiveRaceManager.OnRep_FirstPlayerFinishedTimestamp
	// void OnRep_FirstPlayerFinishedTimestamp();                                                                               // [0xc3c0910] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCompetitiveRaceManager.HandleFinalRacePositionsUpdated
	// void HandleFinalRacePositionsUpdated(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarEvent_RunRecorded& RecordedRun); // [0xc3bfb18] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarCompetitiveRacerState_RunActive
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarCompetitiveRacerState_RunActive : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarCompetitiveRacerState_RunFinished
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarCompetitiveRacerState_RunFinished : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarCompetitiveRacerStateMachineComponent
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UDelMarCompetitiveRacerStateMachineComponent : public UDelMarRacerStateMachineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
};

/// Class /Script/DelMarCore.DelMarConnectedHintComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UDelMarConnectedHintComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bShouldShowHint                                             OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(class UClass*)                             VehicleActionClass                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(bool)                                      bAcceptMultipleTags                                         OFFSET(get<bool>, {0xB0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     MultipleTagContainer                                        OFFSET(getStruct<T>, {0xB8, 32, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedVehicle                                               OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UDelMarVehicleAction*)               VehicleAction                                               OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.PassNuxHintTypeToConnectedHintComponent
	// void PassNuxHintTypeToConnectedHintComponent(FGameplayTag HintTypeTag);                                                  // [0xc3c286c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.HandleVehicleActionPerformed
	// void HandleVehicleActionPerformed();                                                                                     // [0xc3c1fcc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.HandleActorEndOverlap
	// void HandleActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                     // [0xc3c1d78] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.HandleActorBeginOverlap
	// void HandleActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);                                   // [0xc3c1bc4] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarConnectedHintComponent.BeginPlay
	// void BeginPlay();                                                                                                        // [0xc3c1a88] Native|Public        
};

/// Class /Script/DelMarCore.DelMarCoreOobTubePositionalRenderingComponent
/// Size: 0x0008 (0x000110 - 0x000118)
class UDelMarCoreOobTubePositionalRenderingComponent : public UDelMarTrackOobTubePositionalRenderingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TWeakObjectPtr<APlayerState*>)             ViewTargetPlayerState                                       OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCoreOobTubePositionalRenderingComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* FortPC, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xc3c1fe4] Final|Native|Private 
};

/// Class /Script/DelMarCore.DelMarCoreSplineMeshComponent
/// Size: 0x0000 (0x000700 - 0x000700)
class UDelMarCoreSplineMeshComponent : public USplineMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarCoreSplineMeshComponent.OnBeginActorOverlap
	// void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xc3c24bc] Final|Native|Private|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarCosmeticsDatabase
/// Size: 0x0020 (0x000030 - 0x000050)
class UDelMarCosmeticsDatabase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<class UDelMarCosmeticItemDefinition*>) Items                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FDelMarCosmeticSlotInfo>)           SlotInfos                                                   OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCosmeticsDatabase.GetSlotInfos
	// TArray<FDelMarCosmeticSlotInfo> GetSlotInfos();                                                                          // [0xc3c1ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCosmeticsDatabase.GetItemsForSlot
	// TArray<UDelMarCosmeticItemDefinition*> GetItemsForSlot(FGameplayTag Slot);                                               // [0xc3c1aa0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarDeathRacerState_ActiveRace
/// Size: 0x0010 (0x000030 - 0x000040)
class UDelMarDeathRacerState_ActiveRace : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<ADelMarDeathRaceManager*>)  DeathRaceManager                                            OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bFinishedRound                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/DelMarCore.DelMarDeathRacerState_FinishedRace
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarDeathRacerState_FinishedRace : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarDeathRacerStateMachineComponent
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UDelMarDeathRacerStateMachineComponent : public UDelMarRacerStateMachineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
};

/// Class /Script/DelMarCore.DelMarDoubleTapInputTrigger
/// Size: 0x0010 (0x000050 - 0x000060)
class UDelMarDoubleTapInputTrigger : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     Delay                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPhysMatAttribute
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarPhysMatAttribute : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarDriveParticlesPhysMatAttribute
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarDriveParticlesPhysMatAttribute : public UDelMarPhysMatAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UNiagaraSystem*)                     DriveParticles                                              OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarDriverInteractionComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UDelMarDriverInteractionComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class AFortPlayerState*)                   ViewPlayerState                                             OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class ADelMarVehicle*)                     ViewVehicle                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(float)                                     PassEventSquareDistThreshold                                OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(class UDelMarPlayerRaceDataComponent*)     RaceData                                                    OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarDriverInteractionComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xc3c2214] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarEvent_FinalFirstPlaceChanged
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarEvent_FinalFirstPlaceChanged : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<AFortPlayerState*>)         NewFirstPlace                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PrevFirstPlace                                              OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardActive
/// Size: 0x0020 (0x000028 - 0x000048)
class UDelMarEvent_GlobalLeaderboardActive : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   LeaderboardEventId                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   LeaderboardWindowId                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarEvent_GlobalLeaderboardFocusedLeaderboardEntriesPopulated : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarEvent_GlobalLeaderboardTopLeaderboardEntriesPopulated : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarEvent_GlobalLeaderboardFriendLeaderboardEntriesPopulated : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarEvent_GlobalLeaderboardPersonalBestRetrieved
/// Size: 0x0040 (0x000028 - 0x000068)
class UDelMarEvent_GlobalLeaderboardPersonalBestRetrieved : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FDelMarGlobalLeaderboardEntry)             PersonalBest                                                OFFSET(getStruct<T>, {0x28, 64, 0, 0})
};

/// Class /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarFlowAnalyticsControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   FlowAnalyicsEventName                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    PlayerController                                            OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent.TutorialReplay
	// void TutorialReplay();                                                                                                   // [0xc3c4b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent.TutorialKeepTraining
	// void TutorialKeepTraining();                                                                                             // [0xc3c4b1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent.TutorialGoRace
	// void TutorialGoRace();                                                                                                   // [0xc3c4b08] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarFlowAnalyticsControllerComponent.TutorialComplete
	// void TutorialComplete();                                                                                                 // [0xc3c4af4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarGameplayState
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarGameplayState : public UDelMarState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarGameUserSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarGameUserSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   NuxLastViewedVideoVersion                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(bool)                                      bNuxHasPromptedToPlayTutorial                               OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bHasPromptedToPlaySpeedRun                                  OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bNuxHasShownDefaultMode                                     OFFSET(get<bool>, {0x2E, 1, 0, 0})
	SMember(FString)                                   LastPlayedDelMarMnemonic                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarGhostSessionComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarGhostSessionComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostSessionComponent.StopSession
	// void StopSession();                                                                                                      // [0x1e6b5b0] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarGhostSessionComponent.StartSession
	// void StartSession();                                                                                                     // [0x1b55e98] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarGhostSessionComponent.IsSessionActive
	// bool IsSessionActive();                                                                                                  // [0xacdec18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarGhostPlaybackSessionComponent
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class UDelMarGhostPlaybackSessionComponent : public UDelMarGhostSessionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(ETeleportType)                             TeleportSetting                                             OFFSET(get<T>, {0xD0, 1, 0, 0})
	CMember(class UClass*)                             PlaybackActorClass                                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(int32_t)                                   CurrentFrame                                                OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	CMember(class UDelMarGhostReplayLog*)              PlaybackLog                                                 OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class AFortPhysicsPawn*)                   PlaybackActor                                               OFFSET(get<T>, {0xF0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostPlaybackSessionComponent.SetPlaybackLog
	// void SetPlaybackLog(class UDelMarGhostReplayLog* InLog);                                                                 // [0xc3c4924] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarGhostPlaybackTrigger
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ADelMarGhostPlaybackTrigger : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(int32_t)                                   PreviewFrame                                                OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	DMember(int32_t)                                   StartFrame                                                  OFFSET(get<int32_t>, {0x294, 4, 0, 0})
	DMember(int32_t)                                   EndFrame                                                    OFFSET(get<int32_t>, {0x298, 4, 0, 0})
	DMember(int32_t)                                   MaxFrame                                                    OFFSET(get<int32_t>, {0x29C, 4, 0, 0})
	CMember(class UDelMarGhostReplayLog*)              PlaybackLog                                                 OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UBoxComponent*)                      BoxCollider                                                 OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UClass*)                             PlaybackSessionClassOverride                                OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UDelMarGhostPlaybackSessionComponent*) PlaybackSession                                           OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostPlaybackTrigger.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xc3c3898] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarGhostPlaybackTrigger.HandlePlaybackCompleted
	// void HandlePlaybackCompleted();                                                                                          // [0xc3c37c8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarGhostPlaybackTrigger.BP_HandlePlaybackCompleted
	// void BP_HandlePlaybackCompleted(FVector Location);                                                                       // [0x246f7d8] Event|Protected|HasDefaults|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarGhostRecordingSessionComponent
/// Size: 0x0050 (0x0000B0 - 0x000100)
class UDelMarGhostRecordingSessionComponent : public UDelMarGhostSessionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UDelMarGhostReplayLog*)              RecordLog                                                   OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bRecordOffPhysicsDelegate                                   OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(int32_t)                                   CurrentFrame                                                OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedDelMarVehicle                                         OFFSET(get<T>, {0xF8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostRecordingSessionComponent.SetRecordOffPhysicsDelegate
	// void SetRecordOffPhysicsDelegate(bool bEnabled);                                                                         // [0xc3c49e4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarGhostReplayLog
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarGhostReplayLog : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FGhostReplayFrame>)                 Frames                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UDelMarGlobalLeaderboardControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(bool)                                      bIsLeaderboardEnabled                                       OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(TArray<FDelMarGlobalLeaderboardEntry>)     TopLeaderboardEntries                                       OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FDelMarGlobalLeaderboardEntry>)     FocusedLeaderboardEntries                                   OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FDelMarGlobalLeaderboardEntry>)     FriendLeaderboardEntries                                    OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bHasRequestedLeaderboards                                   OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bHasPersonalBest                                            OFFSET(get<bool>, {0xD9, 1, 0, 0})
	SMember(FDelMarGlobalLeaderboardEntry)             PersonalBest                                                OFFSET(getStruct<T>, {0xE0, 64, 0, 0})
	CMember(class UDelMarEvent_GlobalLeaderboardActive*) GlobalLeaderboardActiveEvent                              OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FDelMarLeaderboardSettings)                LeaderboardSettings                                         OFFSET(getStruct<T>, {0x130, 32, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent.ServerNewPersonalBest
	// void ServerNewPersonalBest(FDelMarEvent_GlobalLeaderboardNewPersonalBest PersonalBestRetrievedEvent);                    // [0xc3c484c] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent.OnRep_LeaderboardSettings
	// void OnRep_LeaderboardSettings();                                                                                        // [0xc3c4838] Final|Native|Private 
	// Function /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent.ClientUpdateLeaderboards
	// void ClientUpdateLeaderboards();                                                                                         // [0x1b55e98] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/DelMarCore.DelMarGlobalLeaderboardControllerComponent.ClientNewPersonalBest
	// void ClientNewPersonalBest(FDelMarEvent_GlobalLeaderboardNewPersonalBest PersonalBestEvent);                             // [0xc3c36f0] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/DelMarCore.GuidedZoneRequirement
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Drift
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Drift : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_DriftKick
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_DriftKick : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Kickflip
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Kickflip : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Turbo
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Turbo : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_TurboBonusZone
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_TurboBonusZone : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Underthrust
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Underthrust : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_Jump
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_Jump : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_JumpOrUnderthrust
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_JumpOrUnderthrust : public UGuidedZoneRequirement_Jump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_DriftActive
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_DriftActive : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_DriftBoostActive
/// Size: 0x0000 (0x000028 - 0x000028)
class UGuidedZoneRequirement_DriftBoostActive : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.GuidedZoneRequirement_MidTutorial
/// Size: 0x0010 (0x000028 - 0x000038)
class UGuidedZoneRequirement_MidTutorial : public UGuidedZoneRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/DelMarCore.DelMarGuidedTutorialZoneActor
/// Size: 0x0118 (0x000290 - 0x0003A8)
class ADelMarGuidedTutorialZoneActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(class UBoxComponent*)                      BoxCollider                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(float)                                     FinalTimeDilation                                           OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     TransitionSeconds                                           OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     MaxTimeDilationSeconds                                      OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(bool)                                      bDemoVehicleOnFail                                          OFFSET(get<bool>, {0x2A4, 1, 0, 0})
	SMember(FDelMarEvent_SetTutorialAnnouncement)      ScreenMessage                                               OFFSET(getStruct<T>, {0x2A8, 64, 0, 0})
	DMember(float)                                     HintDelaySeconds                                            OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     HintRemovalDelaySeconds                                     OFFSET(get<float>, {0x2EC, 4, 0, 0})
	CMember(class UClass*)                             ZoneRequirementClass                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     InputTagsToRemoveOnZoneStart                                OFFSET(getStruct<T>, {0x2F8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     InputTagsToAddOnZoneStart                                   OFFSET(getStruct<T>, {0x318, 32, 0, 0})
	SMember(FGameplayTagContainer)                     InputTagsToRemoveOnZoneEnd                                  OFFSET(getStruct<T>, {0x338, 32, 0, 0})
	SMember(FGameplayTagContainer)                     InputTagsToAddOnZoneEnd                                     OFFSET(getStruct<T>, {0x358, 32, 0, 0})
	CMember(class UGuidedZoneRequirement*)             ZoneRequirement                                             OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           ActiveVehicle                                               OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    ActivePlayerController                                      OFFSET(get<T>, {0x390, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.OnEndOverlap
	// void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0xc3c4604] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xc3c3be0] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                                  // [0xc3c37dc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.BP_OnTutorialZoneStarted
	// void BP_OnTutorialZoneStarted();                                                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.BP_OnTutorialZoneFailed
	// void BP_OnTutorialZoneFailed();                                                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarGuidedTutorialZoneActor.BP_OnTutorialZoneComplete
	// void BP_OnTutorialZoneComplete();                                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarInputContextRedirectMap
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarInputContextRedirectMap : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UFortInputMappingContext*, UFortInputMappingContext*>) RedirectMap                                OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarInputModifierHazard
/// Size: 0x0040 (0x000290 - 0x0002D0)
class ADelMarInputModifierHazard : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(TArray<FDelMarActivatedInputFrame>)        ActivatedInputSequence                                      OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<FDelMarDisabledInputData>)          DisabledEffects                                             OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(class UBoxComponent*)                      BoxCollider                                                 OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class APlayerController*)                  LocalController                                             OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UEnhancedPlayerInput*)               LocalPlayerInput                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(float)                                     StartOverlapTime                                            OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     TotalActivationSequenceTime                                 OFFSET(get<float>, {0x2CC, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarInputModifierHazard.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xc3c40ac] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarInputModifierPitchInversion
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarInputModifierPitchInversion : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarInputModifierZeroOut
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarInputModifierZeroOut : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarInputModifierAlwaysOne
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarInputModifierAlwaysOne : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarInputModifierScalarBySign
/// Size: 0x0030 (0x000028 - 0x000058)
class UDelMarInputModifierScalarBySign : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   PositiveScalar                                              OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   NegativeScalar                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/DelMarCore.DelMarInputModifierClamp
/// Size: 0x0030 (0x000028 - 0x000058)
class UDelMarInputModifierClamp : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Minimum                                                     OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   Maximum                                                     OFFSET(getStruct<T>, {0x40, 24, 0, 0})
};

/// Class /Script/DelMarCore.DelMarLevelDataAsset
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UDelMarLevelDataAsset : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     LevelDescription                                            OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               LevelBackgroundImage                                        OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWorld*>>)           Levels                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FGameplayTagContainer)                     LevelDescriptionTags                                        OFFSET(getStruct<T>, {0x80, 32, 0, 0})
};

/// Class /Script/DelMarCore.DelMarLoadoutSave
/// Size: 0x0050 (0x000028 - 0x000078)
class UDelMarLoadoutSave : public USaveGame
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FGameplayTag, TWeakObjectPtr<UDelMarCosmeticItemDefinition*>>) EquippedLoadout                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarMatchEventSystemComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UDelMarMatchEventSystemComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TSet<FGameplayTag>)                        EnabledMatchEventTags                                       OFFSET(get<T>, {0xB8, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarMatchmakingFlowInjector
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarMatchmakingFlowInjector : public UInjectPreMatchmakingFlow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarMatchmakingGracefulUpgrader
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarMatchmakingGracefulUpgrader : public UGracefulUpgradeOverrider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarNetModelSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarNetModelSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/DelMarCore.DelMarMutator
/// Size: 0x0008 (0x000338 - 0x000340)
class ADelMarMutator : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Script/DelMarCore.DelMarNetworkPredictionMutator
/// Size: 0x0018 (0x000340 - 0x000358)
class ADelMarNetworkPredictionMutator : public ADelMarMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessorBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessorBase : public UFortObjectiveProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_BeatPlayers
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_BeatPlayers : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_BonusTurboActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_BonusTurboActivated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_BoostPadBonusSpeedEnded
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_BoostPadBonusSpeedEnded : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_BoostPadHit
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_BoostPadHit : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DistanceTraveled
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DistanceTraveled : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DraftActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DraftActivated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DriftBoostActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DriftBoostActivated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DriftBoostDeactivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DriftBoostDeactivated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_DriftComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_DriftComplete : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_HighestSpeedUpdated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_HighestSpeedUpdated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_InitialTurboActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_InitialTurboActivated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_Kickflipped
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_Kickflipped : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_LapComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_LapComplete : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_PlacementUpdated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_PlacementUpdated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_PlayedDelMarExperience
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_PlayedDelMarExperience : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_RaceFinished
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_RaceFinished : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_RankAchieved
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_RankAchieved : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_RunComplete
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_RunComplete : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_RunCompleteTest
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_RunCompleteTest : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_StartlineBoostActivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_StartlineBoostActivated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_UnderthrustDeactivated
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_UnderthrustDeactivated : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_UnderthrustPercentUsed
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_UnderthrustPercentUsed : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_VehicleJumped
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_VehicleJumped : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarObjectiveProcessor_VehicleLanded
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarObjectiveProcessor_VehicleLanded : public UDelMarObjectiveProcessorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarPhysicsRateDevice
/// Size: 0x0050 (0x000BD8 - 0x000C28)
class ADelMarPhysicsRateDevice : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3112;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarPhysicsRateDevice.SetPhysicsRate
	// void SetPhysicsRate(EDelMarPhysicsRate PhysicsRate);                                                                     // [0xc3c6494] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarPhysMatAttribute_SoundTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarPhysMatAttribute_SoundTag : public UDelMarPhysMatAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     SoundTag                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPhysMatAttribute_Terrain
/// Size: 0x0020 (0x000028 - 0x000048)
class UDelMarPhysMatAttribute_Terrain : public UDelMarPhysMatAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FDelMarTerrainData)                        TerrainData                                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bDriveableSurface                                           OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPlayerStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarPlayerStateComponent : public UPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarPlayerActiveRaceManagerComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class ADelMarRaceManager*)                 ActiveRaceManager                                           OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent.SetActiveRaceManager
	// void SetActiveRaceManager(class ADelMarRaceManager* RaceManager);                                                        // [0xc3c63d4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent.OnRep_ActiveRaceManager
	// void OnRep_ActiveRaceManager(class ADelMarRaceManager* PreviousRaceManager);                                             // [0xc3c6314] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerActiveRaceManagerComponent.GetActiveRaceManager
	// class ADelMarRaceManager* GetActiveRaceManager();                                                                        // [0x8213bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarPlayerAnalyticsComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UDelMarPlayerAnalyticsComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    CachedPlayerController                                      OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedVehicle                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPlayerRaceDataComponent*>) CachedPlayerRaceData                                  OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarRaceInfoComponent*>) CachedRaceInfo                                              OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPositionalTrackerComponent*>) CachedPositionalTracker                            OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelmarCompetitiveMatchmakeRatingComponent*>) MatchmakeRatingComponent                  OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FDelMarAnalyticsPlayerRaceData)            CurrentRaceData                                             OFFSET(getStruct<T>, {0xD8, 64, 0, 0})
	SMember(FDelMarAnalyticsPlayerRaceData)            CurrentRunData                                              OFFSET(getStruct<T>, {0x118, 64, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleWorldBonusSpeedStackGained
	// void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                              // [0xc3c61d8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleVehicleHitHazard
	// void HandleVehicleHitHazard();                                                                                           // [0xc3c61c4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                                  // [0xc3c6104] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleUnderthrustPercentChanged
	// void HandleUnderthrustPercentChanged(float PercentageUnderthrustRemaining);                                              // [0xc3c6044] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleUnderthrustDeactivated
	// void HandleUnderthrustDeactivated();                                                                                     // [0xc3c6030] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleUnderthrustActivated
	// void HandleUnderthrustActivated();                                                                                       // [0xc3c601c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                            // [0xc3c6008] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleTurboBonusZoneChanged
	// void HandleTurboBonusZoneChanged(EDelMarTurboZoneState BonusZoneState);                                                  // [0xc3c5f2c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleRaceStarted
	// void HandleRaceStarted();                                                                                                // [0xc3c5f18] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleRaceFinished
	// void HandleRaceFinished();                                                                                               // [0xc3c5f04] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandlePotentialDriftBoostChanged
	// void HandlePotentialDriftBoostChanged(float Percent);                                                                    // [0xc3c5e44] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandlePlayerResetRun
	// void HandlePlayerResetRun(class AFortPlayerState* PlayerState);                                                          // [0xc3c5d70] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleKickflipActivated
	// void HandleKickflipActivated(bool bLeft);                                                                                // [0xc3c5cb0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleDriftKickActivated
	// void HandleDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState);                                // [0xc3c5b60] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleDriftBoostDeactivated
	// void HandleDriftBoostDeactivated();                                                                                      // [0xc3c5b48] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerAnalyticsComponent.HandleDraftActivated
	// void HandleDraftActivated();                                                                                             // [0xc3c5b34] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPlayerRaceDataComponent
/// Size: 0x0188 (0x0000A0 - 0x000228)
class UDelMarPlayerRaceDataComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(TSet<int32_t>)                             VisitedCheckpoints                                          OFFSET(get<T>, {0xB8, 80, 0, 0})
	CMember(TSet<ADelMarCheckpoint*>)                  VisitedCheckpoints_ParallelPath                             OFFSET(get<T>, {0x108, 80, 0, 0})
	DMember(double)                                    RunStartTime                                                OFFSET(get<double>, {0x158, 8, 0, 0})
	DMember(double)                                    RunFinishTime                                               OFFSET(get<double>, {0x160, 8, 0, 0})
	DMember(double)                                    CheckpointStartTime                                         OFFSET(get<double>, {0x168, 8, 0, 0})
	DMember(double)                                    LapStartTime                                                OFFSET(get<double>, {0x170, 8, 0, 0})
	DMember(float)                                     DistanceToFinishLine                                        OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     LapDistance                                                 OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     PrimaryTrackDistance                                        OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(int32_t)                                   LapsCompleted                                               OFFSET(get<int32_t>, {0x184, 4, 0, 0})
	DMember(bool)                                      bHasStartedFirstLap                                         OFFSET(get<bool>, {0x188, 1, 0, 0})
	DMember(bool)                                      bFinishedRace                                               OFFSET(get<bool>, {0x189, 1, 0, 0})
	CMember(TArray<class APlayerState*>)               ViewingSpectators                                           OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(class ADelMarCheckpoint*)                  MostRecentlyVisitedCheckpoint                               OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarCheckpointManagerComponent*>) CachedCheckpointManager                            OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedDelMarVehicle                                         OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPositionalTrackerComponent*>) CachedPositionalTracker                            OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackPositionComponent*>) CachedLapTracker                                       OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(TSet<ADelMarCheckpoint*>)                  CheckpointsVisitedThisLap                                   OFFSET(get<T>, {0x1D0, 80, 0, 0})
	DMember(int32_t)                                   TimeTrialSectionIndex                                       OFFSET(get<int32_t>, {0x220, 4, 0, 0})
	DMember(int32_t)                                   CheckPointIndex                                             OFFSET(get<int32_t>, {0x224, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.OnRep_ViewingSpectators
	// void OnRep_ViewingSpectators();                                                                                          // [0xc4571a0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_TeleportEntered
	// void NetMulticast_TeleportEntered(FDelMarEvent_TeleportEnteredEvent InCheckpointTeleportingEvent);                       // [0xc456f6c] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_SectionCompleted_ParallelPath
	// void NetMulticast_SectionCompleted_ParallelPath(FDelMarEvent_SectionComplete_ParallelPath InSectionEvent);               // [0xc456d7c] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_RaceCompleted
	// void NetMulticast_RaceCompleted(double RunTime, bool bValidRun);                                                         // [0xc456b20] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_LapCompleted
	// void NetMulticast_LapCompleted(FDelMarEvent_LapComplete InLapEvent);                                                     // [0xc45695c] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_CheckpointPassedOutOfOrder_ParallelPath
	// void NetMulticast_CheckpointPassedOutOfOrder_ParallelPath(FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath InCheckpointPassedOutOfOrderEvent); // [0xc4567d0] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.NetMulticast_CheckpointPassed_ParallelPath
	// void NetMulticast_CheckpointPassed_ParallelPath(FDelMarEvent_CheckpointPassed_ParallelPath CheckpointEvent);             // [0xc456894] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.GetViewingSpectators
	// TArray<APlayerState*> GetViewingSpectators();                                                                            // [0xc4562e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerRaceDataComponent.GetNumViewingSpectator
	// int32_t GetNumViewingSpectator();                                                                                        // [0x67f8da0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarPlayerChallengeRaceDataComponent
/// Size: 0x0000 (0x000228 - 0x000228)
class UDelMarPlayerChallengeRaceDataComponent : public UDelMarPlayerRaceDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

/// Class /Script/DelMarCore.DelMarPlayerIdleComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UDelMarPlayerIdleComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedDelMarVehicle                                         OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerIdleComponent.OnPlayerDisconnected
	// void OnPlayerDisconnected(class AFortPlayerStateAthena* PlayerState, bool bIsDisconnected);                              // [0xc3c9194] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPlayerQuestDistanceTraveledComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UDelMarPlayerQuestDistanceTraveledComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedVehicle                                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         CachedPlayerState                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FTimerHandle)                              DistanceTraveledTimer                                       OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarObjectiveProcessor_DistanceTraveled*>) DistanceTravelledObjectiveProcessor       OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerQuestDistanceTraveledComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                                  // [0xc3c89c8] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarPlayerQuestMatchInfoComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedVehicle                                               OFFSET(get<T>, {0xA4, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xAC, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         CachedPlayerState                                           OFFSET(get<T>, {0xB4, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent.HandleVehicleHitHazard
	// void HandleVehicleHitHazard();                                                                                           // [0xc3c8b50] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                                  // [0xc3c8a88] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerQuestMatchInfoComponent.HandleRaceStarted
	// void HandleRaceStarted();                                                                                                // [0xc3c8970] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPlayerStart
/// Size: 0x0010 (0x000300 - 0x000310)
class ADelMarPlayerStart : public AFortPlayerStart
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	DMember(int32_t)                                   StartlinePriority                                           OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(float)                                     IsClaimedZDistanceCheck                                     OFFSET(get<float>, {0x304, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       DelMarRaceManager                                           OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPlayerWrongwayComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UDelMarPlayerWrongwayComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedDelMarVehicle                                         OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackPositionComponent*>) CachedTrackPositionComp                                OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPlayerRaceDataComponent*>) CachedRaceData                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarCheckpointManagerComponent*>) CachedCheckpointManager                            OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackManager*>)      CachedTrackManager                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPlayspaceComponent_ServerExpiration
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UDelMarPlayspaceComponent_ServerExpiration : public UPlayspaceComponent_ServerExpiration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Script/DelMarCore.DelMarProxyGhostVisualComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UDelMarProxyGhostVisualComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TWeakObjectPtr<AFortAthenaVehicle*>)       CachedVehicle                                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UVehicleCosmeticsAssembledMeshUserComponent*>) CachedVCAMUC                             OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 ProxyGhostMaterial                                          OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TMap<FGameplayTag, FDelMarProxyMeshMaterialInfo>) VehicleMaterialInfoMap                               OFFSET(get<T>, {0xB8, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarProxyGhostVisualComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xc3c8b68] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarProxyGhostVisualComponent.HandleVehicleCosmeticsFinished
	// void HandleVehicleCosmeticsFinished();                                                                                   // [0xc3c89b4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarProxyGhostVisualComponent.HandlePartCustomizationUpdated
	// void HandlePartCustomizationUpdated(int32_t MeshPartIndex);                                                              // [0xc3c875c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRaceInfoComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarRaceInfoComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   RaceGUID                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceInfoComponent.HandleRaceStarted
	// void HandleRaceStarted();                                                                                                // [0xc3c898c] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRaceLevelConfig
/// Size: 0x0080 (0x000BD8 - 0x000C58)
class ADelMarRaceLevelConfig : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3160;

public:
	CMember(EDelMarRaceMode)                           RaceMode                                                    OFFSET(get<T>, {0xBD8, 1, 0, 0})
	DMember(int32_t)                                   DefaultNumRequiredLaps                                      OFFSET(get<int32_t>, {0xBDC, 4, 0, 0})
	DMember(float)                                     ZKillOffsetDistanceFromLowestSplinePoint                    OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(bool)                                      bShouldRunAsADelMarExperience                               OFFSET(get<bool>, {0xBE4, 1, 0, 0})
	DMember(int32_t)                                   MatchTimeLimitSeconds                                       OFFSET(get<int32_t>, {0xBE8, 4, 0, 0})
	DMember(int32_t)                                   OvertimeSeconds                                             OFFSET(get<int32_t>, {0xBEC, 4, 0, 0})
	DMember(bool)                                      bOverrideTurboChargeRegenRateSeconds                        OFFSET(get<bool>, {0xBF0, 1, 0, 0})
	DMember(float)                                     TurboChargeRegenRateSeconds                                 OFFSET(get<float>, {0xBF4, 4, 0, 0})
	DMember(bool)                                      bOverrideTurboRaceStartCharges                              OFFSET(get<bool>, {0xBF8, 1, 0, 0})
	DMember(float)                                     TurboRaceStartCharges                                       OFFSET(get<float>, {0xBFC, 4, 0, 0})
	DMember(bool)                                      bOverrideTurboLapCompleteCharges                            OFFSET(get<bool>, {0xC00, 1, 0, 0})
	DMember(float)                                     TurboLapCompleteCharges                                     OFFSET(get<float>, {0xC04, 4, 0, 0})
	CMember(TMap<EDelMarRaceMode, UClass*>)            RaceManagerClassMap                                         OFFSET(get<T>, {0xC08, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceLevelConfig.SpawnRaceManager
	// class ADelMarRaceManager* SpawnRaceManager(bool bFireInitializationEvent);                                               // [0xc3c9508] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRaceLevelConfig.GetRaceModeTag
	// FGameplayTag GetRaceModeTag();                                                                                           // [0xc3c7cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarRaceLevelConfig.GetRaceManagerClass
	// class UClass* GetRaceManagerClass();                                                                                     // [0xc3c7c9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarRaceManagerVerbComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarRaceManagerVerbComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPositionalTrackerComponent*>) PositionalTracker                                  OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<class AFortPlayerState*>)           PrevRacePositions                                           OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandleRaceStarted
	// void HandleRaceStarted();                                                                                                // [0xc3c89a0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandleRaceFinished
	// void HandleRaceFinished();                                                                                               // [0xc3c895c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandlePlayerPositionsChanged
	// void HandlePlayerPositionsChanged(TArray<AFortPlayerState*>& RacePositions);                                             // [0xc3c88c0] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandlePlayerLapCompleted
	// void HandlePlayerLapCompleted(FDelMarEvent_LapComplete& LapCompleteEvent);                                               // [0xc3c881c] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandleFinalRacePositionsChanged
	// void HandleFinalRacePositionsChanged(TArray<FDelMarFinalRacePositionEntry>& FinalRacePositions, FDelMarEvent_RunRecorded& RecordedRun); // [0xc3c8098] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarRaceManagerVerbComponent.HandleCountdownStarted
	// void HandleCountdownStarted();                                                                                           // [0xc3c8084] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRaceMusicPlaylist
/// Size: 0x0010 (0x000030 - 0x000040)
class UDelMarRaceMusicPlaylist : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FDelMarMusicTrack>)                 Tracks                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarRaceMusicPlaylistComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarRaceMusicPlaylistComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceMusicPlaylistComponent.SetMusicPlaylist
	// void SetMusicPlaylist(class UDelMarRaceMusicPlaylist* SetPlaylist, bool bEnableMusic);                                   // [0xc3c92e8] Native|Protected|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarRacerState_Spectator
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarRacerState_Spectator : public UDelMarRacerState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarRacerState_Countdown
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarRacerState_Countdown : public UDelMarRacerState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           Vehicle                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarRacerState_RunFinished
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarRacerState_RunFinished : public UDelMarRacerState_WithSpectatorTransitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           Vehicle                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarSpeedUpDevice
/// Size: 0x0018 (0x000BD8 - 0x000BF0)
class ADelMarSpeedUpDevice : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
	DMember(float)                                     SpeedAmount                                                 OFFSET(get<float>, {0xBD8, 4, 0, 0})
	DMember(float)                                     SpeedEffectDuration                                         OFFSET(get<float>, {0xBDC, 4, 0, 0})
	DMember(float)                                     MinDotProductAngleValue                                     OFFSET(get<float>, {0xBE0, 4, 0, 0})
	SMember(FGameplayTag)                              SpeedSourceTag                                              OFFSET(getStruct<T>, {0xBE4, 4, 0, 0})
	CMember(class UStaticMeshComponent*)               Collider                                                    OFFSET(get<T>, {0xBE8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarSpeedUpDevice.ShouldGrantSpeedEffect
	// bool ShouldGrantSpeedEffect(class AActor* OtherActor);                                                                   // [0xc3c9430] Native|Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarSpeedUpDevice.OnBeginOverlap
	// void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xc3c8d8c] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarSpeedUpDevice.BP_HandleSpeedEffectGranted
	// void BP_HandleSpeedEffectGranted();                                                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarSplineActorMovementComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarSplineActorMovementComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<USplineComponent*>)         MovementSpline                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     MovementSpeed                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarStartLineActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ADelMarStartLineActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(class ADelMarCheckpoint*)                  Checkpoint                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarTutorialConfigComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarTutorialConfigComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FDelMarTutorialSection>)            Sections                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarTutorialInteractableSpline
/// Size: 0x0060 (0x000290 - 0x0002F0)
class ADelMarTutorialInteractableSpline : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bMustTriggerInOrder                                         OFFSET(get<bool>, {0x290, 1, 0, 0})
	SMember(FVector)                                   ChildActorScaleMultiplier                                   OFFSET(getStruct<T>, {0x298, 24, 0, 0})
	CMember(EDelMarSplineGenerationMode)               SplineGenerationMode                                        OFFSET(get<T>, {0x2B0, 1, 0, 0})
	DMember(int32_t)                                   ChildActorCount                                             OFFSET(get<int32_t>, {0x2B4, 4, 0, 0})
	DMember(bool)                                      bUseSplineRotationForActors                                 OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bShowDebugNumbers                                           OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	DMember(float)                                     DebugTextZOffset                                            OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(float)                                     DebugTextSize                                               OFFSET(get<float>, {0x2C0, 4, 0, 0})
	CMember(class UMaterial*)                          DebugTextMaterial                                           OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class USplineComponent*)                   SplineComponent                                             OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UClass*)                             ChildActorClass                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(TArray<class UChildActorComponent*>)       ChildActorComponents                                        OFFSET(get<T>, {0x2E0, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.ResetTriggers
	// void ResetTriggers();                                                                                                    // [0xc3c92d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.HandleColliderOverlap
	// void HandleColliderOverlap(class ADelMarTutorialTriggerActor* InTrigger);                                                // [0xc3c7fc4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.GetTriggerIndexAsRatio
	// float GetTriggerIndexAsRatio(class ADelMarTutorialTriggerActor* InTrigger);                                              // [0xc3c7e7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.GetTriggerIndex
	// int32_t GetTriggerIndex(class ADelMarTutorialTriggerActor* InTrigger);                                                   // [0xc3c7d74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.GetHaveAllTriggersCompleted
	// bool GetHaveAllTriggersCompleted();                                                                                      // [0xc3c7c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTutorialInteractableSpline.BP_HandleAllSplineTriggersCompleted
	// void BP_HandleAllSplineTriggersCompleted(class AActor* FinalCompletedTrigger);                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarTutorialRaceManager
/// Size: 0x0008 (0x0004A8 - 0x0004B0)
class ADelMarTutorialRaceManager : public ADelMarRaceManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	CMember(class UDelMarTutorialConfigComponent*)     TutorialConfigComponent                                     OFFSET(get<T>, {0x4A8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarTutorialRaceManager.SetCurrentTutorialSection
	// void SetCurrentTutorialSection(int32_t SectionIndex, class AFortPlayerState* PlayerState);                               // [0xc3cc604] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRaceManager.RequestPrevTutorialSection
	// void RequestPrevTutorialSection(class AFortPlayerState* PlayerState);                                                    // [0xc3cc504] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRaceManager.RequestNextTutorialSection
	// void RequestNextTutorialSection(class AFortPlayerState* PlayerState);                                                    // [0xc3cc418] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRaceManager.NetMulticast_TutorialSectionChanged
	// void NetMulticast_TutorialSectionChanged(class AFortPlayerState* PlayerState, int32_t SectionIndex, int32_t PrevSectionIndex); // [0xc3cbbf0] Net|NetReliableNative|Event|NetMulticast|Protected 
};

/// Class /Script/DelMarCore.DelMarTutorialTriggerActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ADelMarTutorialTriggerActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class UBoxComponent*)                      BoxCollider                                                 OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.ResetTrigger
	// void ResetTrigger();                                                                                                     // [0xc3cc5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.HandleColliderOverlap
	// void HandleColliderOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0xc3cb4f8] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.CanTriggerActor
	// bool CanTriggerActor(class AActor* OtherActor);                                                                          // [0xc3cac20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.BP_HandleColliderTriggered
	// void BP_HandleColliderTriggered();                                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.BP_HandleColliderReset
	// void BP_HandleColliderReset();                                                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarTutorialTriggerActor.BP_CanTriggerActor
	// bool BP_CanTriggerActor(class AActor* OtherActor);                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
};

/// Class /Script/DelMarCore.DelMarUIInputControllerComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UDelMarUIInputControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UInputAction*)                       HudWidgetExpandAction                                       OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(class UInputAction*)                       ToggleQuestListAction                                       OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(class UClass*)                             InputManagerClass                                           OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnhancedInputComponent*>)  InputComponent                                              OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    PlayerController                                            OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPlayerPreferencesComponent*>) PlayerPreferences                                  OFFSET(get<T>, {0x138, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarUIInputControllerComponent.HandleToggleQuestList
	// void HandleToggleQuestList();                                                                                            // [0x3508bf8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarUIInputControllerComponent.HandleHudWidgetExpandTriggered
	// void HandleHudWidgetExpandTriggered();                                                                                   // [0xc3cb9dc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarUIInputControllerComponent.HandleHudWidgetExpandCompleted
	// void HandleHudWidgetExpandCompleted();                                                                                   // [0xc3cb9c8] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarVehicleAction
/// Size: 0x0018 (0x000028 - 0x000040)
class UDelMarVehicleAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMulticastInlineDelegate)                  OnActionPerformed                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarVehicleAction_Jump
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_Jump : public UDelMarVehicleAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_Jump.HandleJump
	// void HandleJump();                                                                                                       // [0xc3cb9b0] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_Drift
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_Drift : public UDelMarVehicleAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_Drift.HandleDrift
	// void HandleDrift(float DriftDirection, EDelMarVehicleDriftState DriftState);                                             // [0xc3cb878] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_HazardHit
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_HazardHit : public UDelMarVehicleAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_HazardHit.HandleHazardHit
	// void HandleHazardHit();                                                                                                  // [0xc3cb9b0] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_KickFlip
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_KickFlip : public UDelMarVehicleAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_KickFlip.HandleKickflip
	// void HandleKickflip(bool bLeftSide);                                                                                     // [0xc3cb9f0] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_Turbo
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_Turbo : public UDelMarVehicleAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_Turbo.HandleTurbo
	// void HandleTurbo();                                                                                                      // [0xc3cb9b0] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAction_Underthrust
/// Size: 0x0000 (0x000040 - 0x000040)
class UDelMarVehicleAction_Underthrust : public UDelMarVehicleAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleAction_Underthrust.HandleUnderthrust
	// void HandleUnderthrust();                                                                                                // [0xc3cb9b0] Final|Native|Public  
};

/// Class /Script/DelMarCore.DelMarVehicleAutoInputComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarVehicleAutoInputComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/DelMarCore.DelMarVehicleBodySetup
/// Size: 0x0058 (0x000030 - 0x000088)
class UDelMarVehicleBodySetup : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FDelMarVehicleAxleConfig)                  FrontAxle                                                   OFFSET(getStruct<T>, {0x30, 44, 0, 0})
	SMember(FDelMarVehicleAxleConfig)                  BackAxle                                                    OFFSET(getStruct<T>, {0x5C, 44, 0, 0})
};

/// Class /Script/DelMarCore.DelMarVehicleBodySetupMap
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarVehicleBodySetupMap : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FName, UDelMarVehicleBodySetup*>)     BodySetupMap                                                OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarVehicleCameraMode_V2
/// Size: 0x3290 (0x000060 - 0x0032F0)
class UDelMarVehicleCameraMode_V2 : public UFortCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 13040;

public:
	CMember(class UClass*)                             CameraInputControllerComponentClass                         OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(float)                                     FOV                                                         OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     TotalFOVInterpLambda                                        OFFSET(get<float>, {0x6C, 4, 0, 0})
	SMember(FFloatRange)                               TotalFOVClamp                                               OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     TotalDistanceInterpLambda                                   OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FFloatRange)                               TotalDistanceClamp                                          OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     TotalHeightInterpLambda                                     OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     HeightOffsetInterpLambda                                    OFFSET(get<float>, {0xA0, 4, 0, 0})
	SMember(FFloatRange)                               TotalHeightClamp                                            OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	DMember(float)                                     AngleToOriginDegrees                                        OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     AngleToOriginInterpLambda                                   OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FFloatRange)                               TotalAngleToOriginClamp                                     OFFSET(getStruct<T>, {0xBC, 16, 0, 0})
	DMember(float)                                     SwivelInterpLambda                                          OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     SwivelPitchMax                                              OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     SwivelYawMax                                                OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     GroundNormalInterpLambda                                    OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     ForwardInterpLambda                                         OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     CarPitchInterpLambda                                        OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     AerialCarPitchInterpLambda                                  OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     MaxAerialCarPitch                                           OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     PitchRotationAxisInterpLambda                               OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     VerticalDriftDegreeThreshold                                OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     MinDegreesVehicleWorldUpThreshold                           OFFSET(get<float>, {0xF4, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        MaxUpRotationPerSecondCurve                                 OFFSET(getStruct<T>, {0xF8, 144, 0, 0})
	DMember(float)                                     MaxUpRotationPerSecondStatic                                OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     WorldUpInterpRate                                           OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bPreventPenetration                                         OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bDoPredictiveAvoidance                                      OFFSET(get<bool>, {0x191, 1, 0, 0})
	DMember(float)                                     CollisionPushOutDistance                                    OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     PenetrationBlendOutTime                                     OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     PenetrationBlendInTime                                      OFFSET(get<float>, {0x19C, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            PenetrationTraceChannel                                     OFFSET(get<T>, {0x1A0, 1, 0, 0})
	CMember(TArray<FPenetrationAvoidanceFeeler>)       PenetrationAvoidanceFeelers                                 OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FDelMarScaledCurve)                        ForwardAirInterpLambdaCurve                                 OFFSET(getStruct<T>, {0x1B8, 144, 0, 0})
	SMember(FRuntimeFloatCurve)                        ForwardAirBlendCurve                                        OFFSET(getStruct<T>, {0x248, 136, 0, 0})
	DMember(float)                                     MinForwardSpeedForAerialBlend                               OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     MinTimeInAirBeforeUsingVehicleUp                            OFFSET(get<float>, {0x2D4, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        GroundNormalAirInterpLambdaCurve                            OFFSET(getStruct<T>, {0x2D8, 144, 0, 0})
	DMember(float)                                     AirFreestyleDeactivationExtendedSeconds                     OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(float)                                     AirFreestyleDeactivationLambdaSeconds                       OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(float)                                     AirFreestyleDeactivationForwardLambda                       OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     AirFreestyleDeactivationNormalLambda                        OFFSET(get<float>, {0x374, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        DriftForwardBlendCurve                                      OFFSET(getStruct<T>, {0x378, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AerialDriftForwardBlendCurve                                OFFSET(getStruct<T>, {0x400, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        DriftForwardInterpLambdaCurve                               OFFSET(getStruct<T>, {0x488, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        DriftOriginOffsetCurve                                      OFFSET(getStruct<T>, {0x510, 136, 0, 0})
	SMember(FDelMarScaledCurve)                        DriftOriginOffsetInterpLambdaCurve                          OFFSET(getStruct<T>, {0x598, 144, 0, 0})
	DMember(float)                                     DriftOriginOffsetInactiveLambda                             OFFSET(get<float>, {0x628, 4, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         DriftKickOffsetDistance                                     OFFSET(getStruct<T>, {0x630, 464, 0, 0})
	DMember(float)                                     DriftKickOffsetLambda                                       OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(float)                                     DriftKickOffsetInactiveLambda                               OFFSET(get<float>, {0x804, 4, 0, 0})
	DMember(bool)                                      bDeactivateKickOffsetOnKickEnd                              OFFSET(get<bool>, {0x808, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        DriftRollDegreesCurve                                       OFFSET(getStruct<T>, {0x810, 136, 0, 0})
	SMember(FDelMarScaledCurve)                        DriftRollDegreesInterpLambdaCurve                           OFFSET(getStruct<T>, {0x898, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        DriftScalarCurveCurve                                       OFFSET(getStruct<T>, {0x928, 144, 0, 0})
	DMember(float)                                     GroundMaxPitchForNormalBlend                                OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     GroundExtraPitchForNormalBlend                              OFFSET(get<float>, {0x9BC, 4, 0, 0})
	SMember(FDelMarCameraFloatProperty)                StableSpeedDistance                                         OFFSET(getStruct<T>, {0x9C0, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                StableSpeedFOV                                              OFFSET(getStruct<T>, {0xA70, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                StableSpeedHeight                                           OFFSET(getStruct<T>, {0xB20, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                StableSpeedAngleToOrigin                                    OFFSET(getStruct<T>, {0xBD0, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                AccelerationDistance                                        OFFSET(getStruct<T>, {0xC80, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                AccelerationFOV                                             OFFSET(getStruct<T>, {0xD30, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                AccelerationHeight                                          OFFSET(getStruct<T>, {0xDE0, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                AccelerationAngleToOrigin                                   OFFSET(getStruct<T>, {0xE90, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                BaseSpeedDistance                                           OFFSET(getStruct<T>, {0xF40, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                BaseSpeedFOV                                                OFFSET(getStruct<T>, {0xFF0, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                BaseSpeedHeight                                             OFFSET(getStruct<T>, {0x10A0, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                BaseSpeedAngleToOrigin                                      OFFSET(getStruct<T>, {0x1150, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                BaseAccelerationDistance                                    OFFSET(getStruct<T>, {0x1200, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                BaseAccelerationFOV                                         OFFSET(getStruct<T>, {0x12B0, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                BaseAccelerationHeight                                      OFFSET(getStruct<T>, {0x1360, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                BaseAccelerationAngleToOrigin                               OFFSET(getStruct<T>, {0x1410, 176, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         TurboDistance                                               OFFSET(getStruct<T>, {0x14C0, 464, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         TurboFOV                                                    OFFSET(getStruct<T>, {0x1690, 464, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         TurboBonusZoneSuccessDistance                               OFFSET(getStruct<T>, {0x1860, 464, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         TurboBonusZoneSuccessFOV                                    OFFSET(getStruct<T>, {0x1A30, 464, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         DriftBonusDistance                                          OFFSET(getStruct<T>, {0x1C00, 464, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         DriftBonusFOV                                               OFFSET(getStruct<T>, {0x1DD0, 464, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         StartlineDistance                                           OFFSET(getStruct<T>, {0x1FA0, 464, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         StartlineFOV                                                OFFSET(getStruct<T>, {0x2170, 464, 0, 0})
	SMember(FDelMarCameraFloatProperty)                DraftDistance                                               OFFSET(getStruct<T>, {0x2340, 176, 0, 0})
	SMember(FDelMarCameraFloatProperty)                DraftFOV                                                    OFFSET(getStruct<T>, {0x23F0, 176, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         WorldBonusSpeedDistance                                     OFFSET(getStruct<T>, {0x24A0, 464, 0, 0})
	SMember(FDelMarCameraFloatBlendedProperty)         WorldBonusSpeedFOV                                          OFFSET(getStruct<T>, {0x2670, 464, 0, 0})
	SMember(FDelMarCameraFloatProperty)                AerialDivingBonusSpeedDistance                              OFFSET(getStruct<T>, {0x2840, 176, 0, 0})
	DMember(float)                                     NonSkydivingDistanceScalar                                  OFFSET(get<float>, {0x28F0, 4, 0, 0})
	SMember(FDelMarCameraFloatProperty)                AerialDivingBonusSpeedFOV                                   OFFSET(getStruct<T>, {0x28F8, 176, 0, 0})
	DMember(float)                                     NonSkydivingFOVScalar                                       OFFSET(get<float>, {0x29A8, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           VehicleTarget                                               OFFSET(get<T>, {0x29AC, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarCameraInputControllerComponent*>) CameraInputControllerComponent                 OFFSET(get<T>, {0x29B4, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnWorldBonusSpeedStackLost
	// void OnWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks);                                                    // [0xc3cc2cc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnWorldBonusSpeedStackGained
	// void OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                                  // [0xc3cc190] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnTurboDeactivated
	// void OnTurboDeactivated();                                                                                               // [0xc3cc160] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnTurboBonusZoneStateChanged
	// void OnTurboBonusZoneStateChanged(EDelMarTurboZoneState ZoneState);                                                      // [0xc3cc068] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnTurboActivated
	// void OnTurboActivated();                                                                                                 // [0xc3cc054] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnStartlineBoostDeactivated
	// void OnStartlineBoostDeactivated();                                                                                      // [0xc3cc034] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnStartlineBoostActivated
	// void OnStartlineBoostActivated(float StartlineBoostPerc);                                                                // [0xc3cbf70] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnDriftKickDeactivated
	// void OnDriftKickDeactivated();                                                                                           // [0xc3cbf4c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnDriftKickActivated
	// void OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState);                                    // [0xc3cbe0c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnDriftBonusDeactivated
	// void OnDriftBonusDeactivated();                                                                                          // [0xc3cbdec] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnDriftBonusActivated
	// void OnDriftBonusActivated();                                                                                            // [0xc3cbdd8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnAppliedTeleportRotation
	// void OnAppliedTeleportRotation();                                                                                        // [0xc3cbdc4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleCameraMode_V2.OnAirFreestyleDeactivated
	// void OnAirFreestyleDeactivated();                                                                                        // [0xc3cbdac] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarVehicleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarVehicleInterface : public UVehicleCosmeticsInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleInterface.WheelsOnGround
	// bool WheelsOnGround();                                                                                                   // [0x9617a74] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsStrafeLeft
	// bool IsStrafeLeft();                                                                                                     // [0xc3cbbc8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsStrafeDisabled
	// bool IsStrafeDisabled();                                                                                                 // [0x96ef82c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsStrafeActive
	// bool IsStrafeActive();                                                                                                   // [0x96ee854] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsSkyDiving
	// bool IsSkyDiving();                                                                                                      // [0x5e6df2c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsReattaching
	// bool IsReattaching();                                                                                                    // [0x96ea96c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsLosingAppliedBonusSpeed
	// bool IsLosingAppliedBonusSpeed();                                                                                        // [0xc3cbba0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsKickingWheels
	// bool IsKickingWheels();                                                                                                  // [0xc3cbb78] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsKickflipSuctionActive
	// bool IsKickflipSuctionActive();                                                                                          // [0x7d30510] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsInvulnerabilityActive
	// bool IsInvulnerabilityActive();                                                                                          // [0x9e4641c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsDriftControlled
	// bool IsDriftControlled();                                                                                                // [0xc3cbb50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsBraking
	// bool IsBraking();                                                                                                        // [0xc3cbb28] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsAllVehicleInputDisabled
	// bool IsAllVehicleInputDisabled();                                                                                        // [0xc3cbb00] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsAirFreestyling
	// bool IsAirFreestyling();                                                                                                 // [0x86331fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.IsAccelerating
	// bool IsAccelerating();                                                                                                   // [0xc3cbad8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.InDriftBoostRange
	// bool InDriftBoostRange();                                                                                                // [0xc3cbab0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.HasValidDraftingTarget
	// bool HasValidDraftingTarget();                                                                                           // [0xb7a4840] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetWorldAppliedBonusSpeed
	// float GetWorldAppliedBonusSpeed();                                                                                       // [0xc3cb4cc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetVelocity
	// FVector GetVelocity();                                                                                                   // [0xc3cb490] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetVehicleForwardState
	// EDelMarVehicleForwardState GetVehicleForwardState();                                                                     // [0xc3cb468] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetUnderthrustPercentageTankRemaining
	// float GetUnderthrustPercentageTankRemaining();                                                                           // [0xc3cb43c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetUnderthrustActiveDuration
	// float GetUnderthrustActiveDuration();                                                                                    // [0x681cb50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTurboBonusZoneBonusSpeed
	// float GetTurboBonusZoneBonusSpeed();                                                                                     // [0xc3cb410] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTurboAppliedBonusSpeed
	// float GetTurboAppliedBonusSpeed();                                                                                       // [0xc3cb3e4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTurboAdditionalActiveSeconds
	// float GetTurboAdditionalActiveSeconds();                                                                                 // [0x66d8af0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTrackPositionComponent
	// class UDelMarTrackPositionComponent* GetTrackPositionComponent();                                                        // [0x3e93944] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTotalTimeSkydiving
	// float GetTotalTimeSkydiving();                                                                                           // [0xc3cb3b8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetThrottle
	// float GetThrottle();                                                                                                     // [0xc3cb38c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTargetSpeed
	// float GetTargetSpeed();                                                                                                  // [0xc3cb360] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetTargetDriftSide
	// float GetTargetDriftSide();                                                                                              // [0xc3cb334] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStrafeCooldownPercentage
	// float GetStrafeCooldownPercentage();                                                                                     // [0xc3cb308] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSteeringAngle
	// float GetSteeringAngle();                                                                                                // [0xc3cb2dc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSteering
	// float GetSteering();                                                                                                     // [0xc3cb2b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStartlinePercentageMaxBonusSpeedEarned
	// float GetStartlinePercentageMaxBonusSpeedEarned();                                                                       // [0xc3cb284] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStartlineMaxEarnedBonusSpeed
	// float GetStartlineMaxEarnedBonusSpeed();                                                                                 // [0xc3cb258] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStartlineAppliedBonusSpeed
	// float GetStartlineAppliedBonusSpeed();                                                                                   // [0xc3cb22c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetStableSpeed
	// float GetStableSpeed();                                                                                                  // [0xc3cb200] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSpeedometerSpeed
	// float GetSpeedometerSpeed();                                                                                             // [0xc3cb1d4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSkeletalMeshComponent
	// class USkeletalMeshComponent* GetSkeletalMeshComponent();                                                                // [0xc3cb1ac] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetSideSpeed
	// float GetSideSpeed();                                                                                                    // [0xc3cb180] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetRemainingTurboActiveSeconds
	// float GetRemainingTurboActiveSeconds();                                                                                  // [0xc3cb154] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetReattachmentDirection
	// FVector GetReattachmentDirection();                                                                                      // [0xc3cb118] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetQueuedBonusSpeed
	// float GetQueuedBonusSpeed();                                                                                             // [0xc3cb0ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetPotentialDriftBoostPercentage
	// float GetPotentialDriftBoostPercentage();                                                                                // [0xc3cb0c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetPostProcessComponent
	// class UPostProcessComponent* GetPostProcessComponent();                                                                  // [0xc3cb098] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetPercentageTurboActiveTimeRemaining
	// float GetPercentageTurboActiveTimeRemaining();                                                                           // [0xc3cb06c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetOversteerAccumulationPercentage
	// float GetOversteerAccumulationPercentage();                                                                              // [0xc3cb040] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetNormalizedForwardSpeed
	// float GetNormalizedForwardSpeed();                                                                                       // [0xc3cb014] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetNormalizedBonusSpeed
	// float GetNormalizedBonusSpeed();                                                                                         // [0xc3cafe8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetMaxNumTurboCharges
	// float GetMaxNumTurboCharges();                                                                                           // [0xc3cafbc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetLandingData
	// FDelMarVehicleLandingData GetLandingData();                                                                              // [0xc3caf84] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetKickflipDuration
	// float GetKickflipDuration();                                                                                             // [0xc3caf58] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetKickflipDistanceToSuctionSurface
	// float GetKickflipDistanceToSuctionSurface();                                                                             // [0x6bfe6b4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetKickflipActivationCharges
	// int32_t GetKickflipActivationCharges();                                                                                  // [0xc3caf30] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetForwardSpeed
	// float GetForwardSpeed();                                                                                                 // [0xc3caf04] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDriftSlipAngleRatio
	// float GetDriftSlipAngleRatio();                                                                                          // [0xc3caed8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDriftDuration
	// float GetDriftDuration();                                                                                                // [0xc3caeac] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDriftBoostAppliedBonusSpeed
	// float GetDriftBoostAppliedBonusSpeed();                                                                                  // [0xc3cae80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDriftAngle
	// float GetDriftAngle();                                                                                                   // [0xc3cae54] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDraftingState
	// EDelmarDraftingState GetDraftingState();                                                                                 // [0x6912b9c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetDraftingMaxBonusSpeedPercentage
	// float GetDraftingMaxBonusSpeedPercentage();                                                                              // [0xaf6e398] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetCurrentTurboBonusZoneState
	// EDelMarTurboZoneState GetCurrentTurboBonusZoneState();                                                                   // [0x9357a98] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetCurrentNumTurboCharges
	// float GetCurrentNumTurboCharges();                                                                                       // [0xc3cae28] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetCosmeticComponent
	// class UDelMarVehicleCosmeticComponent* GetCosmeticComponent();                                                           // [0xc3cae00] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetBonusSpeed
	// float GetBonusSpeed();                                                                                                   // [0xc3cadd4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetBaseTargetSpeed
	// float GetBaseTargetSpeed();                                                                                              // [0xc3cada8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetBaseForwardSpeed
	// float GetBaseForwardSpeed();                                                                                             // [0xc3cad7c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.GetAcceleration
	// float GetAcceleration();                                                                                                 // [0xc3cad50] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.CanStrafeBeActivated
	// bool CanStrafeBeActivated();                                                                                             // [0xc3cabf8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleInterface.AnyWheelsOnGround
	// bool AnyWheelsOnGround();                                                                                                // [0x9617a4c] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarVehicleLoadoutSetup
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarVehicleLoadoutSetup : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FDelMarLoadout)                            Loadout                                                     OFFSET(getStruct<T>, {0x30, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarVehicleManager
/// Size: 0x0170 (0x000030 - 0x0001A0)
class UDelMarVehicleManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleManager.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* InController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xc3d2a2c] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarVehicleManager.HandlePawnPlayerStateSet
	// void HandlePawnPlayerStateSet(class AFortPlayerPawn* Pawn);                                                              // [0xc3d22e8] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarVehicleManager.HandlePawnExitedVehicle
	// void HandlePawnExitedVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* Pawn, int32_t SeatIndex);                // [0xc3d207c] Final|Native|Public|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleManager.HandlePawnEnteredVehicle
	// void HandlePawnEnteredVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* Pawn, int32_t SeatIndex);               // [0xc3d1e10] Final|Native|Public|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleManager.BP_GetVehiclesInRange
	// void BP_GetVehiclesInRange(FVector& SourcePosition, float Range, bool bDo2DCheck, TArray<ADelMarVehicle*>& OutVehicles); // [0xc3d10e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicleManager.BP_GetAllVehicles
	// void BP_GetAllVehicles(TArray<ADelMarVehicle*>& OutVehicles);                                                            // [0xc3d0aa8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarVehicle
/// Size: 0x0E10 (0x001F20 - 0x002D30)
class ADelMarVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 11568;

public:
	CMember(TArray<class UClass*>)                     DelMarCameraModes                                           OFFSET(get<T>, {0x1F70, 16, 0, 0})
	DMember(bool)                                      bLocalDriverHasReplicatedVehicle                            OFFSET(get<bool>, {0x1F80, 1, 0, 0})
	SMember(FFortAthenaVehicleInputState)              PendingDriverInputState                                     OFFSET(getStruct<T>, {0x1F90, 64, 0, 0})
	CMember(ECommonInputType)                          CurrentInputType                                            OFFSET(get<T>, {0x1FD0, 1, 0, 0})
	DMember(float)                                     DistanceToPack                                              OFFSET(get<float>, {0x1FD4, 4, 0, 0})
	DMember(float)                                     DistanceFromTrackFinish                                     OFFSET(get<float>, {0x1FD8, 4, 0, 0})
	DMember(bool)                                      ATTR_bVehicleThrottleDisabled                               OFFSET(get<bool>, {0x1FDC, 1, 0, 0})
	SMember(FDelMarInputAction)                        ThrottleAction                                              OFFSET(getStruct<T>, {0x1FE0, 16, 0, 0})
	SMember(FDelMarInputAction)                        BrakeAction                                                 OFFSET(getStruct<T>, {0x1FF0, 16, 0, 0})
	SMember(FDelMarInputAction)                        SteerAction                                                 OFFSET(getStruct<T>, {0x2000, 16, 0, 0})
	SMember(FDelMarInputAction)                        SteerLeftAction                                             OFFSET(getStruct<T>, {0x2010, 16, 0, 0})
	SMember(FDelMarInputAction)                        SteerRightAction                                            OFFSET(getStruct<T>, {0x2020, 16, 0, 0})
	SMember(FDelMarInputAction)                        PitchAction                                                 OFFSET(getStruct<T>, {0x2030, 16, 0, 0})
	SMember(FDelMarInputAction)                        PitchUpAction                                               OFFSET(getStruct<T>, {0x2040, 16, 0, 0})
	SMember(FDelMarInputAction)                        PitchDownAction                                             OFFSET(getStruct<T>, {0x2050, 16, 0, 0})
	SMember(FDelMarInputAction)                        RollAction                                                  OFFSET(getStruct<T>, {0x2060, 16, 0, 0})
	SMember(FDelMarInputAction)                        YawAction                                                   OFFSET(getStruct<T>, {0x2070, 16, 0, 0})
	SMember(FDelMarInputAction)                        DriftAction                                                 OFFSET(getStruct<T>, {0x2080, 16, 0, 0})
	SMember(FDelMarInputAction)                        JumpAction                                                  OFFSET(getStruct<T>, {0x2090, 16, 0, 0})
	SMember(FDelMarInputAction)                        KickFlipAction                                              OFFSET(getStruct<T>, {0x20A0, 16, 0, 0})
	SMember(FDelMarInputAction)                        UnderthrustAction                                           OFFSET(getStruct<T>, {0x20B0, 16, 0, 0})
	SMember(FDelMarInputAction)                        TurboAction                                                 OFFSET(getStruct<T>, {0x20C0, 16, 0, 0})
	SMember(FDelMarInputAction)                        DelMarExitAction                                            OFFSET(getStruct<T>, {0x20D0, 16, 0, 0})
	SMember(FDelMarInputAction)                        ResetRunAction                                              OFFSET(getStruct<T>, {0x20E0, 16, 0, 0})
	SMember(FDelMarInputAction)                        AirFreestyleAction                                          OFFSET(getStruct<T>, {0x20F0, 16, 0, 0})
	SMember(FDelMarInputAction)                        StrafeAction                                                OFFSET(getStruct<T>, {0x2100, 16, 0, 0})
	SMember(FDelMarInputAction)                        AerialPitchAction                                           OFFSET(getStruct<T>, {0x2110, 16, 0, 0})
	SMember(FDelMarInputAction)                        DemolishAction                                              OFFSET(getStruct<T>, {0x2120, 16, 0, 0})
	CMember(class UClass*)                             InputManagerClass                                           OFFSET(get<T>, {0x2130, 8, 0, 0})
	DMember(float)                                     IdleVelocityLengthThreshold                                 OFFSET(get<float>, {0x2150, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0x2154, 8, 0, 0})
	CMember(class UDelMarVehicleNetworkPhysicsComponent*) NetworkPhysicsComponent                                  OFFSET(get<T>, {0x2160, 8, 0, 0})
	CMember(class UDelMarVehicleCosmeticComponent*)    CosmeticComponent                                           OFFSET(get<T>, {0x2168, 8, 0, 0})
	CMember(class UDelMarVehicleMovementSet*)          DelMarVehicleMovementSet                                    OFFSET(get<T>, {0x2178, 8, 0, 0})
	CMember(class UFortClientSettingsRecord*)          FortSettings                                                OFFSET(get<T>, {0x2180, 8, 0, 0})
	CMember(class UClass*)                             TrackPositionComponentClass                                 OFFSET(get<T>, {0x2188, 8, 0, 0})
	CMember(class UDelMarTrackPositionComponent*)      TrackPositionComponent                                      OFFSET(get<T>, {0x2190, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<USkeletalMeshComponent*>>) WheelSkeletalMeshComps                                OFFSET(get<T>, {0x21A0, 16, 0, 0})
	CMember(TArray<FDelMarVehicleCachedContact>)       CachedContacts                                              OFFSET(get<T>, {0x21B0, 16, 0, 0})
	DMember(float)                                     NearbyTrackDistanceThreshold                                OFFSET(get<float>, {0x21C0, 4, 0, 0})
	SMember(FDelMarVehicleConfigOverrides)             ConfigOverrides                                             OFFSET(getStruct<T>, {0x2230, 152, 0, 0})
	DMember(float)                                     VisualSteerAngleInterpRate                                  OFFSET(get<float>, {0x230C, 4, 0, 0})
	DMember(float)                                     DriftVisualSteerAngleInterpRate                             OFFSET(get<float>, {0x2310, 4, 0, 0})
	DMember(bool)                                      bOverrideVisualSteeringAngle                                OFFSET(get<bool>, {0x2314, 1, 0, 0})
	DMember(float)                                     DrivingVisualSteeringDegrees                                OFFSET(get<float>, {0x2318, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        DriftSteeringDegreesCurve                                   OFFSET(getStruct<T>, {0x2320, 144, 0, 0})
	DMember(bool)                                      bShowVisualSteerAngleInAir                                  OFFSET(get<bool>, {0x23B0, 1, 0, 0})
	CMember(class UDelMarVehicleBodySetup*)            BodySetup                                                   OFFSET(get<T>, {0x23B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarRaceConfigComponent*>) ActiveRaceConfig                                          OFFSET(get<T>, {0x23C0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTimeManagerComponent*>) RaceTimeManager                                          OFFSET(get<T>, {0x23C8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarGlobalInputDisabler*>) GlobalInputDisabler                                       OFFSET(get<T>, {0x23D0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleWheelsLeftGround                                   OFFSET(getStruct<T>, {0x23E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpeedometerSpeedChanged                                   OFFSET(getStruct<T>, {0x23F8, 16, 0, 0})
	DMember(float)                                     MinNoThrottleSpeed                                          OFFSET(get<float>, {0x2408, 4, 0, 0})
	DMember(float)                                     SpeedSlowdownSpeedometerSeconds                             OFFSET(get<float>, {0x240C, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      SpeedSlowdownTags                                           OFFSET(get<T>, {0x2410, 16, 0, 0})
	CMember(EDelMarInvertSteerMethod)                  InvertSteerMethod                                           OFFSET(get<T>, {0x2420, 1, 0, 0})
	DMember(bool)                                      bPitchInverted                                              OFFSET(get<bool>, {0x2421, 1, 0, 0})
	DMember(bool)                                      bVerticalKickflipInverted                                   OFFSET(get<bool>, {0x2422, 1, 0, 0})
	DMember(bool)                                      bAerialPitchActivationEnabled                               OFFSET(get<bool>, {0x2423, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBonusSpeedActivated                                       OFFSET(getStruct<T>, {0x2458, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBonusSpeedDeactivated                                     OFFSET(getStruct<T>, {0x2468, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBonusSpeedChanged                                         OFFSET(getStruct<T>, {0x2478, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnyWheelsOnGroundChanged                                  OFFSET(getStruct<T>, {0x2488, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWheelsOnGroundChanged                                     OFFSET(getStruct<T>, {0x2498, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleForwardStateChanged                                OFFSET(getStruct<T>, {0x24A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDelMarVehicleHitWall                                      OFFSET(getStruct<T>, {0x2578, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDelMarVehicleHitVehicle                                   OFFSET(getStruct<T>, {0x2588, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDelMarVehicleHitByVehicle                                 OFFSET(getStruct<T>, {0x2598, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleLanded                                             OFFSET(getStruct<T>, {0x25A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWorldBonusSpeedStackGained                                OFFSET(getStruct<T>, {0x25C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWorldBonusSpeedStackLost                                  OFFSET(getStruct<T>, {0x25D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleStartedSkydiving                                   OFFSET(getStruct<T>, {0x2658, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleStoppedSkydiving                                   OFFSET(getStruct<T>, {0x2668, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftActivated                                            OFFSET(getStruct<T>, {0x2688, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftDeactivated                                          OFFSET(getStruct<T>, {0x2698, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftSlipAngleRatioChanged                                OFFSET(getStruct<T>, {0x26A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftKickActivated                                        OFFSET(getStruct<T>, {0x26B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftKickDeactivated                                      OFFSET(getStruct<T>, {0x26C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftControlChanged                                       OFFSET(getStruct<T>, {0x26D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftDurationChanged                                      OFFSET(getStruct<T>, {0x26E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnteredDriftBoostRange                                    OFFSET(getStruct<T>, {0x2738, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExitedDriftBoostRange                                     OFFSET(getStruct<T>, {0x2748, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartedLosingAppliedDriftBoost                            OFFSET(getStruct<T>, {0x2758, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftBoostActivated                                       OFFSET(getStruct<T>, {0x2768, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDriftBoostDeactivated                                     OFFSET(getStruct<T>, {0x2778, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMaxPotentialReached                                       OFFSET(getStruct<T>, {0x2788, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMaxPotentialLost                                          OFFSET(getStruct<T>, {0x2798, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllPotentialLost                                          OFFSET(getStruct<T>, {0x27A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEarnedDriftBoost                                          OFFSET(getStruct<T>, {0x27B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPotentialDriftBoostChanged                                OFFSET(getStruct<T>, {0x27C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDraftActivated                                            OFFSET(getStruct<T>, {0x2810, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDraftDeactivated                                          OFFSET(getStruct<T>, {0x2820, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDraftStateChanged                                         OFFSET(getStruct<T>, {0x2830, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReachedMaxBonusSpeed                                      OFFSET(getStruct<T>, {0x2840, 16, 0, 0})
	SMember(FDelMarRubberbandingConfig)                RubberbandingConfig                                         OFFSET(getStruct<T>, {0x287C, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartlineBoostActivated                                   OFFSET(getStruct<T>, {0x28D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartlineBoostDeactivated                                 OFFSET(getStruct<T>, {0x28E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartlineBoostFailed                                      OFFSET(getStruct<T>, {0x28F8, 16, 0, 0})
	SMember(FDelMarStartlineBoostData)                 StartlineBoostData                                          OFFSET(getStruct<T>, {0x2908, 20, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStrafeActivated                                           OFFSET(getStruct<T>, {0x2938, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStrafeDeactivated                                         OFFSET(getStruct<T>, {0x2948, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStrafeCooldownChanged                                     OFFSET(getStruct<T>, {0x2958, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStrafeUsabilityChanged                                    OFFSET(getStruct<T>, {0x2968, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStrafeDisabledChanged                                     OFFSET(getStruct<T>, {0x2978, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTurboActivated                                            OFFSET(getStruct<T>, {0x29A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTurboDeactivated                                          OFFSET(getStruct<T>, {0x29B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTurboChargesUpdated                                       OFFSET(getStruct<T>, {0x29C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTurboBonusZoneStateChanged                                OFFSET(getStruct<T>, {0x29D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTurboChargeUsed                                           OFFSET(getStruct<T>, {0x29E8, 16, 0, 0})
	DMember(float)                                     TurboCharges                                                OFFSET(get<float>, {0x29F8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKickflipActivated                                         OFFSET(getStruct<T>, {0x2A40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKickflipDeactivated                                       OFFSET(getStruct<T>, {0x2A50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKickflipSuctionActivated                                  OFFSET(getStruct<T>, {0x2A60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKickflipSuctionDeactivated                                OFFSET(getStruct<T>, {0x2A70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKickflipDistanceToSuctionSurfaceChanged                   OFFSET(getStruct<T>, {0x2A80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKickflipDurationChanged                                   OFFSET(getStruct<T>, {0x2A90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKickflipActivationChargesChanged                          OFFSET(getStruct<T>, {0x2AA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReattachmentActivated                                     OFFSET(getStruct<T>, {0x2B38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReattachmentDeactivated                                   OFFSET(getStruct<T>, {0x2B48, 16, 0, 0})
	SMember(FVector)                                   ForcedReattachmentDirection                                 OFFSET(getStruct<T>, {0x2B58, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnderthrustActivated                                      OFFSET(getStruct<T>, {0x2B98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnderthrustDeactivated                                    OFFSET(getStruct<T>, {0x2BA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnderthrustPercentChanged                                 OFFSET(getStruct<T>, {0x2BB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJumpActivated                                             OFFSET(getStruct<T>, {0x2BD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJumpDeactivated                                           OFFSET(getStruct<T>, {0x2BE8, 16, 0, 0})
	DMember(float)                                     DemolitionRespawnSeconds                                    OFFSET(get<float>, {0x2C00, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleDemolished                                         OFFSET(getStruct<T>, {0x2C08, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDemolishPressDurationUpdated                              OFFSET(getStruct<T>, {0x2C18, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHazardHit                                                 OFFSET(getStruct<T>, {0x2C40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInvulnerabilityActivated                                  OFFSET(getStruct<T>, {0x2C50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInvulnerabilityDeactivated                                OFFSET(getStruct<T>, {0x2C60, 16, 0, 0})
	DMember(float)                                     MaxSpawnBroadcastSeconds                                    OFFSET(get<float>, {0x2C74, 4, 0, 0})
	SMember(FDelMarVehicleSpawnInfo)                   SpawnInfo                                                   OFFSET(getStruct<T>, {0x2C78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDelMarVehicleSpawned                                      OFFSET(getStruct<T>, {0x2C88, 16, 0, 0})
	DMember(bool)                                      bAllowExitingVehicle                                        OFFSET(get<bool>, {0x2C98, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleTeleportEntered                                    OFFSET(getStruct<T>, {0x2CA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleTeleportExit                                       OFFSET(getStruct<T>, {0x2CB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVehicleAppliedTeleportRotation                            OFFSET(getStruct<T>, {0x2CC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAirFreestyleActivated                                     OFFSET(getStruct<T>, {0x2CD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAirFreestyleDeactivated                                   OFFSET(getStruct<T>, {0x2CE0, 16, 0, 0})
	CMember(class ADelMarAudioController*)             CachedVehicleAudioController                                OFFSET(get<T>, {0x2CF8, 8, 0, 0})
	DMember(bool)                                      bVehicleCollisionsEnabled                                   OFFSET(get<bool>, {0x2D00, 1, 0, 0})
	DMember(bool)                                      bPawnCollisionsEnabled                                      OFFSET(get<bool>, {0x2D01, 1, 0, 0})
	DMember(bool)                                      bUsePredictiveInterpolation                                 OFFSET(get<bool>, {0x2D10, 1, 0, 0})
	CMember(class UPostProcessComponent*)              PostProcessComp                                             OFFSET(get<T>, {0x2D18, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicle.VehicleHasTag
	// bool VehicleHasTag(FGameplayTag InTag);                                                                                  // [0xc49e34c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.TryGetFortClientSettings
	// void TryGetFortClientSettings();                                                                                         // [0xc49dff4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.TeleportVehicleExited
	// void TeleportVehicleExited();                                                                                            // [0xb0e273c] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarVehicle.TeleportVehicleEntered
	// void TeleportVehicleEntered();                                                                                           // [0xb0e12d8] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarVehicle.SetVehicleMesh
	// void SetVehicleMesh(class USkeletalMesh* NewMesh, class UPhysicsAsset* PhysicsAsset);                                    // [0xc49deac] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.SetTeleportRotation
	// void SetTeleportRotation(FRotator DestRotation);                                                                         // [0xc49ddec] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
	// Function /Script/DelMarCore.DelMarVehicle.SetConfigOverrides
	// void SetConfigOverrides(FDelMarVehicleConfigOverrides InConfigOverrides);                                                // [0xc49dbf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.ServerTeleportVehicleExited
	// void ServerTeleportVehicleExited();                                                                                      // [0x9d50b68] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.ServerTeleportVehicleEntered
	// void ServerTeleportVehicleEntered();                                                                                     // [0x9d5ebfc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.ServerSetLocalDriverHasReplicatedTheVehicle
	// void ServerSetLocalDriverHasReplicatedTheVehicle(bool bNewValue);                                                        // [0xc49db30] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerRemoveReplicatedGameplayTags
	// void ServerRemoveReplicatedGameplayTags(FGameplayTagContainer InTags);                                                   // [0xc49da40] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerRemoveReplicatedGameplayTag
	// void ServerRemoveReplicatedGameplayTag(FGameplayTag InTag);                                                              // [0xc49d97c] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerNotifyTurboActivated
	// void ServerNotifyTurboActivated();                                                                                       // [0x3975da4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerDemolishVehicle
	// void ServerDemolishVehicle(FGameplayTag InCausedByTag);                                                                  // [0xc49d8b8] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.ServerAddReplicatedGameplayTags
	// void ServerAddReplicatedGameplayTags(FGameplayTagContainer InTags);                                                      // [0xc49d7c8] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ServerAddReplicatedGameplayTag
	// void ServerAddReplicatedGameplayTag(FGameplayTag InTag);                                                                 // [0xc49d704] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.ResetTrackPosition
	// void ResetTrackPosition(class ADelMarTrackBase* Track, int32_t TrackSegment);                                            // [0xc49d5c0] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarVehicle.ResetRunPressed
	// void ResetRunPressed();                                                                                                  // [0xc49d5a8] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_TurboCharges
	// void OnRep_TurboCharges();                                                                                               // [0xc49ca14] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_StartlineBoostData
	// void OnRep_StartlineBoostData();                                                                                         // [0xc49c9fc] Final|Native|Private 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_SpawnInfo
	// void OnRep_SpawnInfo();                                                                                                  // [0xc49c9e8] Final|Native|Private 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_ConfigOverrides
	// void OnRep_ConfigOverrides();                                                                                            // [0xc49c86c] Final|Native|Private|Const 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_bVehicleCollisionsEnabled
	// void OnRep_bVehicleCollisionsEnabled();                                                                                  // [0xc49ca48] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.OnRep_bPawnCollisionsEnabled
	// void OnRep_bPawnCollisionsEnabled();                                                                                     // [0xc49ca30] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.OnApplyOverlapFilter
	// void OnApplyOverlapFilter();                                                                                             // [0x9d60d68] Native|Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarVehicle.IsWheelOnGround
	// bool IsWheelOnGround(EDelMarVehicleWheelIndex WheelIndex);                                                               // [0xc49c488] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.IsRespawnEffectSignificant
	// bool IsRespawnEffectSignificant();                                                                                       // [0xc49c384] Final|Native|Private|BlueprintCallable|Const 
	// Function /Script/DelMarCore.DelMarVehicle.IsInvulnerabilityActive
	// bool IsInvulnerabilityActive();                                                                                          // [0xc49c354] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.HandleThrottleToggleChanged
	// void HandleThrottleToggleChanged();                                                                                      // [0xc49c270] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleThrottleDeadzoneChanged
	// void HandleThrottleDeadzoneChanged();                                                                                    // [0xc49c25c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleSteerDeadzoneChanged
	// void HandleSteerDeadzoneChanged();                                                                                       // [0xc49c248] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandlePitchDeadzoneChanged
	// void HandlePitchDeadzoneChanged();                                                                                       // [0xc49c078] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleOnVehicleCosmeticsFinished
	// void HandleOnVehicleCosmeticsFinished();                                                                                 // [0xc49c064] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleFinishedCharacterCustomization
	// void HandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn);                                            // [0xc49befc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.HandleAerialThrottleBrakeChanged
	// void HandleAerialThrottleBrakeChanged();                                                                                 // [0xc49bee8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicle.GetTrackPositionComponent
	// class UDelMarTrackPositionComponent* GetTrackPositionComponent();                                                        // [0xc49beb8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.GetRaceManager
	// class ADelMarRaceManager* GetRaceManager();                                                                              // [0xc49be3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.GetCosmeticComponent
	// class UDelMarVehicleCosmeticComponent* GetCosmeticComponent();                                                           // [0xc49bcac] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.GetAudioComponentGroup
	// class UDelMarAudioComponentGroup* GetAudioComponentGroup();                                                              // [0xc49bc94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicle.DemolishVehicle
	// void DemolishVehicle(FGameplayTag InCausedByTag);                                                                        // [0xc49b9dc] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/DelMarCore.DelMarVehicle.ClearConfigOverrides
	// void ClearConfigOverrides();                                                                                             // [0xc49b9c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.AddWorldBonusSpeedStack
	// void AddWorldBonusSpeedStack(FDelMarWorldBonusSpeedStack& BonusSpeedStack);                                              // [0xc49b910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicle.AddTargetSpeedAdjustment
	// void AddTargetSpeedAdjustment(FName Source, float Value);                                                                // [0xc49b7cc] Net|NetReliableNative|Event|NetMulticast|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarVehicleNetworkPhysicsComponent
/// Size: 0x0540 (0x0000A0 - 0x0005E0)
class UDelMarVehicleNetworkPhysicsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FDelMarVehicleReplicatedState)             ReplicatedState                                             OFFSET(getStruct<T>, {0xB0, 656, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleNetworkPhysicsComponent.OnRep_ReplicatedState
	// void OnRep_ReplicatedState(FDelMarVehicleReplicatedState& PrevReplicatedState);                                          // [0xc3d3218] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleNetworkPhysicsComponent.OnPhysicsStateChanged
	// void OnPhysicsStateChanged(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);       // [0xc3d30d8] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarVehicleStateTagManagerComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarVehicleStateTagManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedVehicle                                               OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  CachedASC                                                   OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleWorldBonusSpeedStackLost
	// void HandleWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks);                                                // [0xc3d2e60] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleWorldBonusSpeedStackGained
	// void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                              // [0xc3d2be8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleTurboDeactivated
	// void HandleTurboDeactivated();                                                                                           // [0xc3d2804] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                            // [0xc3d27dc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDriftDeactivated
	// void HandleDriftDeactivated();                                                                                           // [0xc3d1c44] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDriftBoostDeactivated
	// void HandleDriftBoostDeactivated();                                                                                      // [0xc3d1c1c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDriftBoostActivated
	// void HandleDriftBoostActivated();                                                                                        // [0xc3d1bf4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDriftActivated
	// void HandleDriftActivated();                                                                                             // [0xc3d1be0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDraftDeactivated
	// void HandleDraftDeactivated();                                                                                           // [0xc3d1bcc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleDraftActivated
	// void HandleDraftActivated();                                                                                             // [0xc3d1ba4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleStateTagManagerComponent.HandleAnyWheelsOnGroundChanged
	// void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& Vehicle, bool bWheelsOnGround);                             // [0xc3d187c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarVehicleVerbComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UDelMarVehicleVerbComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleWorldBonusSpeedStackLost
	// void HandleWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks);                                                // [0xc3d2f9c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleWorldBonusSpeedStackGained
	// void HandleWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                              // [0xc3d2d24] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleVehicleLanded
	// void HandleVehicleLanded(float LandingForce, bool bLandedKickflip);                                                      // [0xc3d28ec] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleUnderthrustPercentChanged
	// void HandleUnderthrustPercentChanged(float PercentageUnderthrustRemaining);                                              // [0xc3d282c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleUnderthrustDeactivated
	// void HandleUnderthrustDeactivated();                                                                                     // [0xc3d2818] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                            // [0xc3d27f0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleTurboBonusZoneChanged
	// void HandleTurboBonusZoneChanged(EDelMarTurboZoneState BonusZoneState);                                                  // [0xc3d25fc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleStartlineBoostActivated
	// void HandleStartlineBoostActivated(float BoostPercent);                                                                  // [0xc3d2538] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleSpeedometerSpeedChanged
	// void HandleSpeedometerSpeedChanged(float UpdatedSpeedometerSpeed);                                                       // [0xc3d2474] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandlePotentialDriftBoostChanged
	// void HandlePotentialDriftBoostChanged(float Percent);                                                                    // [0xc3d23a8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleKickflipped
	// void HandleKickflipped(bool bLeft);                                                                                      // [0xc3d1d4c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleJumpActivated
	// void HandleJumpActivated();                                                                                              // [0xc3d1d38] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDriftDurationChanged
	// void HandleDriftDurationChanged(float duration);                                                                         // [0xc3d1c6c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDriftDeactivated
	// void HandleDriftDeactivated();                                                                                           // [0xc3d1c58] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDriftBoostDeactivated
	// void HandleDriftBoostDeactivated();                                                                                      // [0xc3d1c30] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDriftBoostActivated
	// void HandleDriftBoostActivated();                                                                                        // [0xc3d1c08] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleDraftActivated
	// void HandleDraftActivated();                                                                                             // [0xc3d1bb8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleVerbComponent.HandleAnyWheelsOnGroundChanged
	// void HandleAnyWheelsOnGroundChanged(TScriptInterface<Class>& Vehicle, bool bWheelsOnGround);                             // [0xc3d1a10] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.GameFeatureAction_MergeRankedDisplayData
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameFeatureAction_MergeRankedDisplayData : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UFortHabaneroDisplayData*)           MergeSource                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UFortHabaneroDisplayData*)           MergeDestination                                            OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/DelMarCore.GameFeatureAction_OverrideGameModeAISettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameFeatureAction_OverrideGameModeAISettings : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UAthenaAISettings*>)        AISettings                                                  OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/DelMarCore.UDelMarPlayerSuspendComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UUDelMarPlayerSuspendComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarAudioComponentGroup
/// Size: 0x0010 (0x0003D0 - 0x0003E0)
class UDelMarAudioComponentGroup : public UAudioComponentGroup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(class UDelMarAudioMixModifierExtension*)   MixModifierExtension                                        OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UDelMarSubmixSendExtension*)         SubmixSendExtension                                         OFFSET(get<T>, {0x3D0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarAudioComponentGroup.GetSubmixSends
	// class UDelMarSubmixSendExtension* GetSubmixSends();                                                                      // [0x760cdd0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarAudioComponentGroup.GetMixModifiers
	// class UDelMarAudioMixModifierExtension* GetMixModifiers();                                                               // [0xb1c87e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarAudioController
/// Size: 0x00A0 (0x000340 - 0x0003E0)
class ADelMarAudioController : public AVehicleCosmeticsAudioController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FMulticastInlineDelegate)                  OnBigAirStarted                                             OFFSET(getStruct<T>, {0x358, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBigAirStopped                                             OFFSET(getStruct<T>, {0x368, 16, 0, 0})
	CMember(class UDelMarAudioComponentGroup*)         ComponentGroup                                              OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(bool)                                      bIsLocal                                                    OFFSET(get<bool>, {0x380, 1, 0, 0})
	DMember(float)                                     FinishLineDistanceThreshold                                 OFFSET(get<float>, {0x384, 4, 0, 0})
	DMember(float)                                     ApproachingFinishLineMinTime                                OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     BigAirLandingDistanceThreshold                              OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     BigAirTimeThreshold                                         OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     BigAirDownSpeedThreshold                                    OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     NonLocalVelocityInterpSpeed                                 OFFSET(get<float>, {0x398, 4, 0, 0})
	DMember(float)                                     MaxAcceleration                                             OFFSET(get<float>, {0x39C, 4, 0, 0})
	DMember(bool)                                      bInBigAir                                                   OFFSET(get<bool>, {0x3A0, 1, 0, 0})
	CMember(class ADelMarVehicle*)                     CachedVehicle                                               OFFSET(get<T>, {0x3A8, 8, 0, 0})
	DMember(bool)                                      bCanShift                                                   OFFSET(get<bool>, {0x3B0, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarAudioController.PlaySound
	// class UAudioComponent* PlaySound(class USoundBase* sound, float InFadeInTime, float InTargetVolume, bool bDisableAttenuation, EAudioFaderCurve InFadeCurve); // [0xc3ee7a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarAudioController.IsVirtualized
	// bool IsVirtualized();                                                                                                    // [0xc3ee784] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarAudioController.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                                  // [0xc3ee450] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarAudioController.GetComponentGroup
	// class UDelMarAudioComponentGroup* GetComponentGroup();                                                                   // [0x725178c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarAudioMixModifierExtension
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UDelMarAudioMixModifierExtension : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarAudioMixModifierExtension.RemoveMixGroupByName
	// void RemoveMixGroupByName(FName InName);                                                                                 // [0xc3eecb8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarAudioMixModifierExtension.RemoveMixGroup
	// void RemoveMixGroup(FAudioMixModifierGroup& InMixModifier);                                                              // [0xc3eec18] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarAudioMixModifierExtension.AddMixGroup
	// void AddMixGroup(FAudioMixModifierGroup& InMixModifier);                                                                 // [0xc3eccdc] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarAudioReverbComponent
/// Size: 0x0288 (0x0000A0 - 0x000328)
class UDelMarAudioReverbComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(class USoundSubmixBase*)                   ReverbSend                                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   EarlyReflectionSend                                         OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        EnclosureReverbBlendCurve                                   OFFSET(getStruct<T>, {0xB0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        WallDistanceBlendCurve                                      OFFSET(getStruct<T>, {0x138, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        EnclosureSendLevelCurve                                     OFFSET(getStruct<T>, {0x1C0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        WallDistanceSendLevelCurve                                  OFFSET(getStruct<T>, {0x248, 136, 0, 0})
	DMember(int32_t)                                   NumPoints                                                   OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(float)                                     TraceRadius                                                 OFFSET(get<float>, {0x2D4, 4, 0, 0})
	SMember(FVector)                                   TraceOrigin                                                 OFFSET(getStruct<T>, {0x2D8, 24, 0, 0})
	DMember(int32_t)                                   NumTracesPerFrame                                           OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	CMember(class ADelMarVehicle*)                     CachedVehicleOwner                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarSubmixSendExtension
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarSubmixSendExtension : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     SendInterpTime                                              OFFSET(get<float>, {0xA8, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarSubmixSendExtension.SetSend
	// void SetSend(class USoundSubmixBase* InSubmix, float InLevel, bool bTrackCount);                                         // [0xc3ef150] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarSubmixSendExtension.RemoveSend
	// void RemoveSend(class USoundSubmixBase* InSubmix);                                                                       // [0xc3eed7c] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarNuxBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarNuxBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarNuxBlueprintFunctionLibrary.GetCurrentRankedInfoForVehicle
	// FDelMarRankedInfo GetCurrentRankedInfoForVehicle(class ADelMarVehicle* Vehicle);                                         // [0xc3ed6ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarNuxBlueprintFunctionLibrary.GetCurrentLapNumber
	// int32_t GetCurrentLapNumber(class ADelMarVehicle* Vehicle);                                                              // [0xc3ed5e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarCheckpoint
/// Size: 0x0198 (0x000BD8 - 0x000D70)
class ADelMarCheckpoint : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3440;

public:
	SMember(FMulticastInlineDelegate)                  OnCheckpointTirggeredEvent                                  OFFSET(getStruct<T>, {0xBD8, 16, 0, 0})
	DMember(bool)                                      bIsFinishLine                                               OFFSET(get<bool>, {0xBE8, 1, 1, 0})
	DMember(bool)                                      bIsStartingLine                                             OFFSET(get<bool>, {0xBE8, 1, 1, 1})
	DMember(bool)                                      bIsTimeTrialSectionEnd                                      OFFSET(get<bool>, {0xBE8, 1, 1, 2})
	DMember(bool)                                      bIsTeleportEnabled                                          OFFSET(get<bool>, {0xBE8, 1, 1, 3})
	CMember(TSet<ADelMarCheckpoint*>)                  NextCheckpoints                                             OFFSET(get<T>, {0xBF0, 80, 0, 0})
	DMember(float)                                     DynamicSpawnOffset                                          OFFSET(get<float>, {0xC40, 4, 0, 0})
	DMember(float)                                     SpawnDistanceBeforeOrAfterSplineLocation                    OFFSET(get<float>, {0xC44, 4, 0, 0})
	DMember(float)                                     BaseRadius                                                  OFFSET(get<float>, {0xC48, 4, 0, 0})
	DMember(int32_t)                                   CheckpointId                                                OFFSET(get<int32_t>, {0xC4C, 4, 0, 0})
	DMember(int32_t)                                   SplinePointIndex                                            OFFSET(get<int32_t>, {0xC50, 4, 0, 0})
	CMember(class ADelMarPlayerStart*)                 SpawnPoint                                                  OFFSET(get<T>, {0xC58, 8, 0, 0})
	CMember(class UDelMarTrackSnapToComponent*)        SnapToComponent                                             OFFSET(get<T>, {0xC60, 8, 0, 0})
	CMember(TSet<ADelMarCheckpoint*>)                  PreviousCheckpoints                                         OFFSET(get<T>, {0xC68, 80, 0, 0})
	SMember(FCheckpointTrackDistance)                  NearestTrack                                                OFFSET(getStruct<T>, {0xCB8, 24, 0, 0})
	CMember(TArray<FCheckpointTrackDistance>)          AssociatedTracks                                            OFFSET(get<T>, {0xCD0, 16, 0, 0})
	DMember(int32_t)                                   ComputedCheckpointIndex                                     OFFSET(get<int32_t>, {0xCE0, 4, 0, 0})
	CMember(class UStaticMeshComponent*)               ColliderVolume                                              OFFSET(get<T>, {0xCE8, 8, 0, 0})
	CMember(class ADelMarCheckpoint*)                  CheckpointToTeleportTo                                      OFFSET(get<T>, {0xD60, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCheckpoint.UpdateCheckpointMesh
	// void UpdateCheckpointMesh(EDelMarCheckpointMeshType MeshType);                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.OnTriggered
	// void OnTriggered(class ADelMarVehicle* InDelMarVehicle);                                                                 // [0x8f39620] Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarCheckpoint.IsAssociatedWithTrack
	// bool IsAssociatedWithTrack(class ADelMarTrackBase* InTrack);                                                             // [0xc3ee510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.HandlePawnEnteredVehicle
	// void HandlePawnEnteredVehicle(TScriptInterface<Class>& Vehicle, class AFortPawn* Pawn, int32_t SeatIndex);               // [0xc3ee1e4] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetTrackDistanceDataForTrack
	// FCheckpointTrackDistance GetTrackDistanceDataForTrack(class ADelMarTrackBase* InTrack, bool bEnsureAssociated);          // [0xc3ee090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetSpawnTransform
	// FTransform GetSpawnTransform();                                                                                          // [0xc3edd9c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetNearestTrackData
	// FCheckpointTrackDistance GetNearestTrackData();                                                                          // [0xc3eda6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetFurthestBehindTrackDistance
	// FCheckpointTrackDistance GetFurthestBehindTrackDistance();                                                               // [0xc3eda00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetFurthestAheadTrackDistance
	// FCheckpointTrackDistance GetFurthestAheadTrackDistance();                                                                // [0xc3ed9d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.GetCheckpointMeshType
	// EDelMarCheckpointMeshType GetCheckpointMeshType();                                                                       // [0xc3ed4dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCheckpoint.ClientSetCheckpointInactive
	// void ClientSetCheckpointInactive();                                                                                      // [0x246f7d8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.ClientSetCheckpointActive
	// void ClientSetCheckpointActive(int32_t CurrentLap, int32_t TotalLaps);                                                   // [0x246f7d8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_RaceReset
	// void BP_RaceReset();                                                                                                     // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_RaceFinished
	// void BP_RaceFinished();                                                                                                  // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_LapFinished
	// void BP_LapFinished(int32_t CompletedLap, int32_t CurrentLap, int32_t TotalLaps);                                        // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_FirstPlaceChanged
	// void BP_FirstPlaceChanged(bool bValidPrevFirstPlace);                                                                    // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_DeactivateRift
	// void BP_DeactivateRift();                                                                                                // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCheckpoint.BP_ActivateRift
	// void BP_ActivateRift();                                                                                                  // [0x246f7d8] Event|Public|BlueprintEvent 
};

/// Class /Script/DelMarCore.FortClientPilot_QuickSmokeDelMar
/// Size: 0x0010 (0x000310 - 0x000320)
class UFortClientPilot_QuickSmokeDelMar : public UFortClientPilot_GameplayBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/DelMarCore.DelMarBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.SetDelMarTutorialHint
	// void SetDelMarTutorialHint(class APlayerController* PlayerController, FDelMarEvent_SetTutorialHint& Event);              // [0xc3ef000] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.SetDelMarControlsText
	// void SetDelMarControlsText(class APlayerController* PlayerController, FDelMarEvent_SetControlsText& Event);              // [0xc3eee78] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.IsDelMarPlaylist
	// bool IsDelMarPlaylist(class UObject* ContextObject);                                                                     // [0xc3ee6c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.IsDelMarGFSActive
	// bool IsDelMarGFSActive();                                                                                                // [0xc3ee6a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.IsDelMarExperience
	// bool IsDelMarExperience(bool bEnableCaching);                                                                            // [0xc3ee5e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetTimerDeltaFromServerTime
	// double GetTimerDeltaFromServerTime(double TimestampSeconds, EDelMarTimerDirection Direction, bool bCapAtZero, bool& bIsPositive, class UObject* WorldContextObject); // [0xc3eddf8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetPrimaryPlayerState
	// class AFortPlayerState* GetPrimaryPlayerState(class UObject* WorldContextObject);                                        // [0xc3edcdc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetPrimaryPlayerController
	// class AFortPlayerController* GetPrimaryPlayerController(class UObject* WorldContextObject);                              // [0xc3edbdc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetNetModel
	// EDelMarNetModel GetNetModel(class UObject* WorldContextObject);                                                          // [0xc3eda88] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetDelMarVehicle
	// class ADelMarVehicle* GetDelMarVehicle(class APlayerController* PlayerController);                                       // [0xc3ed89c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetDelMarPlayspace
	// class ADelMarPlayspace* GetDelMarPlayspace(class UObject* WorldContextObject);                                           // [0xc3ed7cc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.GetClientWorldTimeSeconds
	// double GetClientWorldTimeSeconds(class UObject* WorldContextObject);                                                     // [0xc3ed4fc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.DelMarFormatTime
	// FText DelMarFormatTime(double TimeSeconds, bool bIncludeMilliseconds);                                                   // [0xc3ecff0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.BP_KillAndRespawnVehicle
	// bool BP_KillAndRespawnVehicle(class AController* Controller, FGameplayTag CausedByTag);                                  // [0xc3ecda4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarBlueprintLibrary.AreAllLeaderboardFiltersEnabled
	// bool AreAllLeaderboardFiltersEnabled();                                                                                  // [0xc3ecd78] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DelMarCore.DelMarCheatManager
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           SafePlayerNames                                             OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarUsePredictiveInterpolation
	// void DelMarUsePredictiveInterpolation(bool bEnabled, bool bEveryOther);                                                  // [0xaca69f8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarTeleportToPreviousCheckpoint_ParallelPath
	// void DelMarTeleportToPreviousCheckpoint_ParallelPath(int32_t ParallelPathIndex);                                         // [0x69a71e8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarTeleportToNextCheckpoint_ParallelPath
	// void DelMarTeleportToNextCheckpoint_ParallelPath(int32_t ParallelPathIndex);                                             // [0x69a71e8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarStartTrackScrubberWithViewTarget
	// void DelMarStartTrackScrubberWithViewTarget(bool bRunCsvProfilerDuringScrub);                                            // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarStartRace
	// void DelMarStartRace();                                                                                                  // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarStartQueuedAutoInput
	// void DelMarStartQueuedAutoInput();                                                                                       // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarStartFollowTrack
	// void DelMarStartFollowTrack(float Throttle);                                                                             // [0x674d700] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSpectate
	// void DelMarSpectate();                                                                                                   // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSpawnVehicleForSelf
	// void DelMarSpawnVehicleForSelf();                                                                                        // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSpawnBotsAtSkillLevel
	// void DelMarSpawnBotsAtSkillLevel(int32_t NumberOfBotsToSpawn, int32_t SkillLevel);                                       // [0x66a8668] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSpawnBots
	// void DelMarSpawnBots(int32_t NumberOfBotsToSpawn);                                                                       // [0x69a71e8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSkipWaitingForPlayers
	// void DelMarSkipWaitingForPlayers();                                                                                      // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetVerticalKickflipInverted
	// void DelMarSetVerticalKickflipInverted(bool InbVerticalKickflipInverted);                                                // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetVehicleCollisionsOverrideGlobal
	// void DelMarSetVehicleCollisionsOverrideGlobal(EDelMarVehicleCollisionOverrideSetting NewValue);                          // [0x876c600] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetVehicleCollisionsOverrideForSelf
	// void DelMarSetVehicleCollisionsOverrideForSelf(EDelMarVehicleCollisionOverrideSetting NewValue);                         // [0x876c600] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetTutorialSection
	// void DelMarSetTutorialSection(int32_t Index);                                                                            // [0x69a71e8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetTurboCharges
	// void DelMarSetTurboCharges(float Amount, bool bGrantToEveryone);                                                         // [0x9e1d5d8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetStrafeEnabled
	// void DelMarSetStrafeEnabled(bool bEnabled);                                                                              // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetStartlineBoostPotentialOverride
	// void DelMarSetStartlineBoostPotentialOverride(float PotentialOverride);                                                  // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetStartlineBoostEnabled
	// void DelMarSetStartlineBoostEnabled(bool bEnabled);                                                                      // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetSpawnMode
	// void DelMarSetSpawnMode(EDelMarRaceSpawnMode SpawnMode);                                                                 // [0x876c600] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingNumPlayersForPackDistance
	// void DelMarSetRubberbandingNumPlayersForPackDistance(int32_t InNumPlayersForPackDistance);                               // [0x69a71e8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMMR
	// void DelMarSetRubberbandingMMR(int32_t InMMR);                                                                           // [0x69a71e8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMinPackDistance
	// void DelMarSetRubberbandingMinPackDistance(float InMinPackDistance);                                                     // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMinDistanceFromPack
	// void DelMarSetRubberbandingMinDistanceFromPack(float InMinDistanceFromPack);                                             // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxPackDistanceLostPerSecond
	// void DelMarSetRubberbandingMaxPackDistanceLostPerSecond(float InMaxPackDistanceLostPerSecond);                           // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxPackDistanceGainedPerSecond
	// void DelMarSetRubberbandingMaxPackDistanceGainedPerSecond(float InMaxPackDistanceGainedPerSecond);                       // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxPackDistance
	// void DelMarSetRubberbandingMaxPackDistance(float InMaxPackDistance);                                                     // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxDistanceFromPack
	// void DelMarSetRubberbandingMaxDistanceFromPack(float InMaxDistanceFromPack);                                             // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingMaxBonusSpeedScalar
	// void DelMarSetRubberbandingMaxBonusSpeedScalar(float InMaxBonusSpeedScalar);                                             // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRubberbandingEnabled
	// void DelMarSetRubberbandingEnabled(bool bEnabled);                                                                       // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnTracesEnabled
	// void DelMarSetRespawnTracesEnabled(bool bEnabled);                                                                       // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnInvulnerabilitySeconds
	// void DelMarSetRespawnInvulnerabilitySeconds(float Seconds);                                                              // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnInvulnerabilityEnabled
	// void DelMarSetRespawnInvulnerabilityEnabled(bool bEnabled);                                                              // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnCollisionProtectionSeconds
	// void DelMarSetRespawnCollisionProtectionSeconds(float Seconds);                                                          // [0x674d700] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetRespawnCollisionProtectionEnabled
	// void DelMarSetRespawnCollisionProtectionEnabled(bool bEnabled);                                                          // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetReplicatedTagEnabledOnSelf
	// void DelMarSetReplicatedTagEnabledOnSelf(FString InputTag, bool bEnabled);                                               // [0x90a86bc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetLoadingScreenVisibility
	// void DelMarSetLoadingScreenVisibility(bool bShouldBeVisible);                                                            // [0xc3ed3d8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetLapTotal
	// void DelMarSetLapTotal(int32_t NewTotal);                                                                                // [0x69a71e8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetLap
	// void DelMarSetLap(int32_t LapNum);                                                                                       // [0x69a71e8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetInvertSteerMethod
	// void DelMarSetInvertSteerMethod(EDelMarInvertSteerMethod InInvertSteerMethod);                                           // [0x876c600] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetInputMappingContextEnabled
	// void DelMarSetInputMappingContextEnabled(FString InputTag, bool bEnableInput);                                           // [0x90a86bc] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetInfiniteUnderthrustEnabled
	// void DelMarSetInfiniteUnderthrustEnabled(bool bEnabled);                                                                 // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetGlobalInputEnabled
	// void DelMarSetGlobalInputEnabled(FString InputTag, bool bEnableInput);                                                   // [0x90a86bc] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetDraftingEnabled
	// void DelMarSetDraftingEnabled(bool bEnabled);                                                                            // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetDemoModeEnabled
	// void DelMarSetDemoModeEnabled(bool bEnabled);                                                                            // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetCollisionDemosEnabled
	// void DelMarSetCollisionDemosEnabled(bool bEnabled);                                                                      // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarSetAirFreestyleEnabled
	// void DelMarSetAirFreestyleEnabled(bool bEnabled);                                                                        // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarReturnToLobby
	// void DelMarReturnToLobby();                                                                                              // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarResumeAllBots
	// void DelMarResumeAllBots();                                                                                              // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRespawnPointLocked
	// void DelMarRespawnPointLocked(bool bLocked);                                                                             // [0x62ffeb0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRespawnAtLastCheckpoint_ParallelPath
	// void DelMarRespawnAtLastCheckpoint_ParallelPath();                                                                       // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRespawnAtLastCheckpoint
	// void DelMarRespawnAtLastCheckpoint();                                                                                    // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarResetTutorialSplines
	// void DelMarResetTutorialSplines();                                                                                       // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarResetRace
	// void DelMarResetRace();                                                                                                  // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarResetPreRaceViewTarget
	// void DelMarResetPreRaceViewTarget();                                                                                     // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRenamePlayers
	// void DelMarRenamePlayers();                                                                                              // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRemoveNumberOfBots
	// void DelMarRemoveNumberOfBots(int32_t NumberOfBotsToRemove);                                                             // [0x69a71e8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRemoveBotByName
	// void DelMarRemoveBotByName(FString& BotName);                                                                            // [0x8c82d9c] Final|Exec|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarRemoveAllBots
	// void DelMarRemoveAllBots();                                                                                              // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarQueueAutoInputThrottle
	// void DelMarQueueAutoInputThrottle(float Throttle, float duration);                                                       // [0x876d0d4] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarQueueAutoInputJump
	// void DelMarQueueAutoInputJump(int32_t Repeat, float Delay);                                                              // [0xbb0eea4] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarQueueAutoInputDriveThenTurn
	// void DelMarQueueAutoInputDriveThenTurn(int32_t Repeat, float Throttle, float StraightDuration, float Steer, float TurnDuration); // [0xc3ed14c] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarPrintQuestProgress
	// void DelMarPrintQuestProgress();                                                                                         // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarPrintLogsToDiagnoseSpinout
	// void DelMarPrintLogsToDiagnoseSpinout();                                                                                 // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarPrevTutorialSection
	// void DelMarPrevTutorialSection();                                                                                        // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarPauseAllBots
	// void DelMarPauseAllBots();                                                                                               // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarNextTutorialSection
	// void DelMarNextTutorialSection();                                                                                        // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarInitiateReturnToTrackDemoCountdown
	// void DelMarInitiateReturnToTrackDemoCountdown(float SecondsUntilDemo);                                                   // [0x674d700] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarInitiateMissedCheckpointDemoCountdown
	// void DelMarInitiateMissedCheckpointDemoCountdown(float SecondsUntilDemo);                                                // [0x674d700] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGrantTurboCharges
	// void DelMarGrantTurboCharges(float Amount, bool bGrantToEveryone);                                                       // [0x9e1d5d8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGrantQuestsInDir
	// void DelMarGrantQuestsInDir(FString Dir);                                                                                // [0x6b78618] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGiveSelfSomeCompetitiveMMRStats
	// void DelMarGiveSelfSomeCompetitiveMMRStats(int32_t MyPosition, int32_t TotalNumberOfPlayers, int32_t NumberOfTimesToSendMMRUpdate); // [0x7e478e0] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostStopPlayerRecording
	// void DelMarGhostStopPlayerRecording();                                                                                   // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostStartPlayerRecording
	// void DelMarGhostStartPlayerRecording(FString SaveFileName, bool bSaveToFile);                                            // [0x90a86bc] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostStartPlayerPlayback
	// void DelMarGhostStartPlayerPlayback();                                                                                   // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostSetReplayEnabled
	// void DelMarGhostSetReplayEnabled(bool bEnabled);                                                                         // [0x62ffeb0] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostSetRecordOffPhysics
	// void DelMarGhostSetRecordOffPhysics(bool bEnabled);                                                                      // [0x62ffeb0] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostForcePlayAllTriggers
	// void DelMarGhostForcePlayAllTriggers();                                                                                  // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarGhostClearPlaybackFile
	// void DelMarGhostClearPlaybackFile();                                                                                     // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarForceLoadUEFNIsland
	// void DelMarForceLoadUEFNIsland(FString IslandCode);                                                                      // [0x6b78618] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarForceLoadLevel
	// void DelMarForceLoadLevel(FString LevelName);                                                                            // [0x93017c4] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarForceEveryoneToReadyUp
	// void DelMarForceEveryoneToReadyUp();                                                                                     // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarFinishRaceSelf
	// void DelMarFinishRaceSelf();                                                                                             // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarFinishRace
	// void DelMarFinishRace();                                                                                                 // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarFetchGlobalLeaderboard
	// void DelMarFetchGlobalLeaderboard();                                                                                     // [0xc3ecfc4] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarFetchFriendsLeaderboard
	// void DelMarFetchFriendsLeaderboard();                                                                                    // [0xc3ecf98] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarFetchFocusedLeaderboard
	// void DelMarFetchFocusedLeaderboard();                                                                                    // [0xc3ecf58] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarExitVehicle
	// void DelMarExitVehicle();                                                                                                // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarEndSpectate
	// void DelMarEndSpectate();                                                                                                // [0xc3ecf44] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarDestroyTrackScrubbers
	// void DelMarDestroyTrackScrubbers();                                                                                      // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarDemolishSelfWithTag
	// void DelMarDemolishSelfWithTag(FString DemolishTagString);                                                               // [0x6b78618] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarDemolishSelf
	// void DelMarDemolishSelf();                                                                                               // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarCreateTrackScrubberForProfiling
	// void DelMarCreateTrackScrubberForProfiling();                                                                            // [0x3508bf8] Final|BlueprintAuthorityOnly|Exec|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarClearQueuedAutoInput
	// void DelMarClearQueuedAutoInput();                                                                                       // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarClearActiveAutoInput
	// void DelMarClearActiveAutoInput();                                                                                       // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarCancelReturnToTrackDemoCountdown
	// void DelMarCancelReturnToTrackDemoCountdown();                                                                           // [0x3508bf8] Final|Exec|Native|Protected 
	// Function /Script/DelMarCore.DelMarCheatManager.DelMarCancelMissedCheckpointDemoCountdown
	// void DelMarCancelMissedCheckpointDemoCountdown();                                                                        // [0x3508bf8] Final|Exec|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarVehicleCameraMode
/// Size: 0x0620 (0x001CF0 - 0x002310)
class UDelMarVehicleCameraMode : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8976;

public:
	SMember(FDelMarVehicleCameraSettings)              CameraSettings                                              OFFSET(getStruct<T>, {0x1CE8, 28, 0, 0})
	SMember(FRuntimeFloatCurve)                        VelocityViewDistance                                        OFFSET(getStruct<T>, {0x1D08, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        VelocityFOV                                                 OFFSET(getStruct<T>, {0x1D90, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AerialViewDistance                                          OFFSET(getStruct<T>, {0x1E18, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AerialFocusOffset                                           OFFSET(getStruct<T>, {0x1EA0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AerialPitch                                                 OFFSET(getStruct<T>, {0x1F28, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AccelViewDistance                                           OFFSET(getStruct<T>, {0x1FB0, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AccelPitch                                                  OFFSET(getStruct<T>, {0x2038, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AirRotationInterpRate                                       OFFSET(getStruct<T>, {0x20C0, 136, 0, 0})
	DMember(float)                                     DriftSwivelSpeed                                            OFFSET(get<float>, {0x2148, 4, 0, 0})
	DMember(float)                                     ViewDistanceInterpSpeed                                     OFFSET(get<float>, {0x214C, 4, 0, 0})
	DMember(float)                                     FOVInterpSpeed                                              OFFSET(get<float>, {0x2150, 4, 0, 0})
	DMember(float)                                     AccelerationViewDistanceDecayRate                           OFFSET(get<float>, {0x2154, 4, 0, 0})
	DMember(float)                                     MaxAccumulatedAccelViewDistance                             OFFSET(get<float>, {0x2158, 4, 0, 0})
	DMember(float)                                     MinAccumulatedAccelViewDistance                             OFFSET(get<float>, {0x215C, 4, 0, 0})
	DMember(float)                                     AerialOffsetInterpSpeed                                     OFFSET(get<float>, {0x2160, 4, 0, 0})
	DMember(float)                                     MaximumDownwardAerialPitch                                  OFFSET(get<float>, {0x2164, 4, 0, 0})
	DMember(float)                                     MaximumUpwardAerialPitch                                    OFFSET(get<float>, {0x2168, 4, 0, 0})
	DMember(float)                                     AccelerationPitchDecayRate                                  OFFSET(get<float>, {0x216C, 4, 0, 0})
	DMember(float)                                     MaxAccumulatedAccelPitch                                    OFFSET(get<float>, {0x2170, 4, 0, 0})
	DMember(float)                                     MinAccumulatedAccelPitch                                    OFFSET(get<float>, {0x2174, 4, 0, 0})
	DMember(bool)                                      bPreventSpeedIncreaseInAir                                  OFFSET(get<bool>, {0x2178, 1, 0, 0})
	DMember(float)                                     SpeedInputScalar                                            OFFSET(get<float>, {0x217C, 4, 0, 0})
	DMember(float)                                     SwivelPitchMax                                              OFFSET(get<float>, {0x2180, 4, 0, 0})
	DMember(float)                                     SwivelYawMax                                                OFFSET(get<float>, {0x2184, 4, 0, 0})
	DMember(float)                                     GroundPitchInterpRate                                       OFFSET(get<float>, {0x2188, 4, 0, 0})
	DMember(float)                                     GroundMaxPitchForNormalBlend                                OFFSET(get<float>, {0x218C, 4, 0, 0})
	DMember(float)                                     GroundNormalInterpRate                                      OFFSET(get<float>, {0x2190, 4, 0, 0})
	DMember(float)                                     GroundNormalAirInterpRate                                   OFFSET(get<float>, {0x2194, 4, 0, 0})
	DMember(float)                                     GroundYawRateMin                                            OFFSET(get<float>, {0x2198, 4, 0, 0})
	DMember(float)                                     GroundYawRateMax                                            OFFSET(get<float>, {0x219C, 4, 0, 0})
	DMember(float)                                     WallYawRateMin                                              OFFSET(get<float>, {0x21A0, 4, 0, 0})
	DMember(float)                                     WallYawRateMax                                              OFFSET(get<float>, {0x21A4, 4, 0, 0})
	DMember(float)                                     InterpToGroundTime                                          OFFSET(get<float>, {0x21A8, 4, 0, 0})
	DMember(float)                                     InterpToAirTime                                             OFFSET(get<float>, {0x21AC, 4, 0, 0})
	DMember(float)                                     AverageVelocityInterpRate                                   OFFSET(get<float>, {0x21B0, 4, 0, 0})
	DMember(float)                                     FocusOffsetInterpRate                                       OFFSET(get<float>, {0x21B4, 4, 0, 0})
	DMember(float)                                     DistanceSpeedScale                                          OFFSET(get<float>, {0x21B8, 4, 0, 0})
	DMember(float)                                     DistanceOffsetMin                                           OFFSET(get<float>, {0x21BC, 4, 0, 0})
	DMember(float)                                     DistanceOffsetMax                                           OFFSET(get<float>, {0x21C0, 4, 0, 0})
	DMember(float)                                     DistanceInterpRate                                          OFFSET(get<float>, {0x21C4, 4, 0, 0})
	DMember(float)                                     MaxSpeedFOVOffset                                           OFFSET(get<float>, {0x21C8, 4, 0, 0})
	DMember(float)                                     SupersonicFOVOffset                                         OFFSET(get<float>, {0x21CC, 4, 0, 0})
	DMember(float)                                     FOVInterpRate                                               OFFSET(get<float>, {0x21D0, 4, 0, 0})
	CMember(class ADelMarVehicle*)                     VehicleTarget                                               OFFSET(get<T>, {0x21D8, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarEliminationRaceManagerComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UDelMarEliminationRaceManagerComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FDelMarEliminationMMRCountPair>)    EliminationsConfig                                          OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(int32_t)                                   ParsedNumberOfPlayersToEliminate                            OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarStateSequencerFXComponent
/// Size: 0x0128 (0x0000A0 - 0x0001C8)
class UDelMarStateSequencerFXComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	DMember(float)                                     FXSizeScalar                                                OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(TMap<FGameplayTag, UNiagaraSystem*>)       ParticleClassMap                                            OFFSET(get<T>, {0xA8, 80, 0, 0})
	SMember(FFXSystemSpawnParameters)                  SpawnParams                                                 OFFSET(getStruct<T>, {0x100, 112, 0, 0})
	CMember(class ADelMarTimeDelayedStateSequencer*)   ParentRef                                                   OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(TMap<FGameplayTag, UNiagaraComponent*>)    ParticleComponentMap                                        OFFSET(get<T>, {0x178, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarStateSequencerFXComponent.HandleEnabledChanged
	// void HandleEnabledChanged(bool bEnabled);                                                                                // [0xc42327c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarStateSequencerFXComponent.HandleCurrentStateChanged
	// void HandleCurrentStateChanged(FGameplayTag NewState);                                                                   // [0xc4231bc] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarTimeDelayedStateSequencer
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ADelMarTimeDelayedStateSequencer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FMulticastInlineDelegate)                  OnCurrentStateChanged                                       OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnabledChanged                                            OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(bool)                                      bEnableOnSpawn                                              OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      bLoopSpecificAmount                                         OFFSET(get<bool>, {0x2B1, 1, 0, 0})
	DMember(int32_t)                                   TotalLoopCount                                              OFFSET(get<int32_t>, {0x2B4, 4, 0, 0})
	CMember(TArray<FDelMarTimeDelayedState>)           StateArray                                                  OFFSET(get<T>, {0x2B8, 16, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x2D4, 1, 0, 0})
	DMember(int32_t)                                   CurrentStateIndex                                           OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.SetEnabled
	// void SetEnabled(bool bEnabled);                                                                                          // [0xc423994] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.OnRep_CurrentStateIndex
	// void OnRep_CurrentStateIndex();                                                                                          // [0xc42380c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.OnRep_bIsEnabled
	// void OnRep_bIsEnabled();                                                                                                 // [0xc423864] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.GetStateTagAtIndex
	// FGameplayTag GetStateTagAtIndex(int32_t Index);                                                                          // [0xc423050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.GetStateCount
	// int32_t GetStateCount();                                                                                                 // [0x6381914] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarTimeDelayedStateSequencer.GetCurrentStateTag
	// FGameplayTag GetCurrentStateTag();                                                                                       // [0xc423028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.GameFeatureAction_AddInputContextMappingPlatformOverrides
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UGameFeatureAction_AddInputContextMappingPlatformOverrides : public UGameFeatureAction_AddInputContextMapping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(class UDelMarInputContextRedirectMap*)     DigitalRedirectMap                                          OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarGhostVehicle
/// Size: 0x0010 (0x001E90 - 0x001EA0)
class ADelMarGhostVehicle : public AFortAthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7840;

public:
	CMember(class UMaterial*)                          GhostMaterial                                               OFFSET(get<T>, {0x1E90, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarGhostVehicle.HandleVehicleCosmeticsFinished
	// void HandleVehicleCosmeticsFinished();                                                                                   // [0xc4233f8] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarGlobalInputDisabler
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UDelMarGlobalInputDisabler : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FGameplayTagContainer)                     DisabledInputTags                                           OFFSET(getStruct<T>, {0xB8, 32, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarGlobalInputDisabler.SetGlobalInputsEnabled
	// void SetGlobalInputsEnabled(FGameplayTagContainer InputTags, bool bEnable);                                              // [0xc423a58] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarCosmeticActorSpawnLogic
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelMarCosmeticActorSpawnLogic : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DelMarCore.DelMarCosmeticActorSpawnLogic_AttachTo
/// Size: 0x0008 (0x000028 - 0x000030)
class UDelMarCosmeticActorSpawnLogic_AttachTo : public UDelMarCosmeticActorSpawnLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     AttachSocket                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarCosmeticActorSpawnLogic_AttachToEach
/// Size: 0x0010 (0x000028 - 0x000038)
class UDelMarCosmeticActorSpawnLogic_AttachToEach : public UDelMarCosmeticActorSpawnLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FName>)                             AttachSockets                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarCosmeticActor
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ADelMarCosmeticActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(class UDelMarCosmeticActorSpawnLogic*)     SpawnLogic                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<class UClass*>)                     CosmeticDependencies                                        OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   Vehicle                                                     OFFSET(get<T>, {0x2A8, 16, 0, 0})
	CMember(class UDelMarVehicleConfigs*)              VehicleConfig                                               OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UDelMarVehicleCosmeticComponent*)    VehicleCosmeticComponent                                    OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCosmeticActor.IsLocallyViewed
	// bool IsLocallyViewed();                                                                                                  // [0xc423790] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCosmeticActor.GetBodyMeshComponent
	// class USkeletalMeshComponent* GetBodyMeshComponent();                                                                    // [0xc423004] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnWorldBonusSpeedStackLost
	// void BP_OnWorldBonusSpeedStackLost(FGameplayTag Source, int32_t Stacks);                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnWorldBonusSpeedStackGained
	// void BP_OnWorldBonusSpeedStackGained(FGameplayTag Source, int32_t Stacks);                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnWheelsOnGroundChanged
	// void BP_OnWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                       // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleWheelsLeftGround
	// void BP_OnVehicleWheelsLeftGround();                                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleStoppedSkydiving
	// void BP_OnVehicleStoppedSkydiving();                                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleStartedSkydiving
	// void BP_OnVehicleStartedSkydiving();                                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleLanded
	// void BP_OnVehicleLanded(float LandingForced, bool bLandedKickflip);                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleForwardStateChanged
	// void BP_OnVehicleForwardStateChanged(EDelMarVehicleForwardState NewForwardState);                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnVehicleDemolished
	// void BP_OnVehicleDemolished(FGameplayTag CausedByTag);                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnUnderthrustDeactivated
	// void BP_OnUnderthrustDeactivated();                                                                                      // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnUnderthrustActivated
	// void BP_OnUnderthrustActivated();                                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnTurboDeactivated
	// void BP_OnTurboDeactivated();                                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnTurboBonusStateChanged
	// void BP_OnTurboBonusStateChanged(EDelMarTurboZoneState NewState);                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnTurboActivated
	// void BP_OnTurboActivated();                                                                                              // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeUsabilityChanged
	// void BP_OnStrafeUsabilityChanged(bool bCanActivate);                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeDisabledChanged
	// void BP_OnStrafeDisabledChanged(bool bDisabled);                                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeDeactivated
	// void BP_OnStrafeDeactivated();                                                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeCooldownChanged
	// void BP_OnStrafeCooldownChanged(float CooldownPercentage);                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStrafeActivated
	// void BP_OnStrafeActivated(bool bLeftSide);                                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStartlineBoostFailed
	// void BP_OnStartlineBoostFailed();                                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStartlineBoostDeactivated
	// void BP_OnStartlineBoostDeactivated();                                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnStartlineBoostActivated
	// void BP_OnStartlineBoostActivated(float PercentageMaxBonusSpeedEarned);                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnReattachmentDeactivated
	// void BP_OnReattachmentDeactivated();                                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnReattachmentActivated
	// void BP_OnReattachmentActivated();                                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnReachedMaxDraftBonusSpeed
	// void BP_OnReachedMaxDraftBonusSpeed();                                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipSuctionDeactivated
	// void BP_OnKickflipSuctionDeactivated();                                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipSuctionActivated
	// void BP_OnKickflipSuctionActivated();                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipDurationChanged
	// void BP_OnKickflipDurationChanged(float duration);                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipDistanceToSuctionSurfaceChanged
	// void BP_OnKickflipDistanceToSuctionSurfaceChanged(float Distance);                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipDeactivated
	// void BP_OnKickflipDeactivated();                                                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipActivationChargesChanged
	// void BP_OnKickflipActivationChargesChanged(int32_t ActivationCharges);                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnKickflipActivated
	// void BP_OnKickflipActivated(bool bLeftSide);                                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnJumpDeactivated
	// void BP_OnJumpDeactivated();                                                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnJumpActivated
	// void BP_OnJumpActivated();                                                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnInvulnerabilityDeactivated
	// void BP_OnInvulnerabilityDeactivated();                                                                                  // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnInvulnerabilityActivated
	// void BP_OnInvulnerabilityActivated();                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftKickDeactivated
	// void BP_OnDriftKickDeactivated();                                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftKickActivated
	// void BP_OnDriftKickActivated(float DriftDirection, EDelMarVehicleDriftState DriftState);                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftDurationChanged
	// void BP_OnDriftDurationChanged(float duration);                                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftDeactivated
	// void BP_OnDriftDeactivated();                                                                                            // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftControlChanged
	// void BP_OnDriftControlChanged(bool bIsDriftingControlled);                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftBoostDeactivated
	// void BP_OnDriftBoostDeactivated();                                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftBoostActivated
	// void BP_OnDriftBoostActivated();                                                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDriftActivated
	// void BP_OnDriftActivated();                                                                                              // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDraftStateChanged
	// void BP_OnDraftStateChanged(EDelmarDraftingState CurrentState);                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDelMarVehicleSpawned
	// void BP_OnDelMarVehicleSpawned(bool bFirstVehicleForPlayer, bool bPrevVehicleDemolished);                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDelMarTeleportExited
	// void BP_OnDelMarTeleportExited();                                                                                        // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDelMarTeleportEntered
	// void BP_OnDelMarTeleportEntered();                                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnDelMarAppliedTeleportRotation
	// void BP_OnDelMarAppliedTeleportRotation();                                                                               // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnCosmeticApplied
	// void BP_OnCosmeticApplied();                                                                                             // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnBonusSpeedDeactivated
	// void BP_OnBonusSpeedDeactivated();                                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnBonusSpeedChanged
	// void BP_OnBonusSpeedChanged(float BonusSpeed);                                                                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnBonusSpeedActivated
	// void BP_OnBonusSpeedActivated();                                                                                         // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.BP_OnAnyWheelsOnGroundChanged
	// void BP_OnAnyWheelsOnGroundChanged(TScriptInterface<Class>& VehicleRef, bool bValue);                                    // [0x246f7d8] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DelMarCore.DelMarCosmeticActor.ApplyCosmetic
	// void ApplyCosmetic();                                                                                                    // [0x264efa8] Native|Public        
};

/// Class /Script/DelMarCore.DelMarCosmeticItemDefinition
/// Size: 0x0018 (0x000228 - 0x000240)
class UDelMarCosmeticItemDefinition : public UFortAccountItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FGameplayTag)                              Slot                                                        OFFSET(getStruct<T>, {0x228, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           CosmeticActorClasses                                        OFFSET(get<T>, {0x230, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarVehicleBodyItemDefinition
/// Size: 0x0000 (0x000240 - 0x000240)
class UDelMarVehicleBodyItemDefinition : public UDelMarCosmeticItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Script/DelMarCore.DelMarLeaderboardManager
/// Size: 0x01C8 (0x0000A0 - 0x000268)
class UDelMarLeaderboardManager : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FString)                                   CurrentSeasonIdentifier                                     OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(class UDelMarEvent_GlobalLeaderboardPersonalBestRetrieved*) PersonalBestRetrievedEvent                 OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FDelMarLeaderboardConfig)                  LeaderboardConfig                                           OFFSET(getStruct<T>, {0x128, 32, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarLeaderboardManager.OnRep_LeaderboardConfig
	// void OnRep_LeaderboardConfig();                                                                                          // [0xc423820] Final|Native|Private 
};

/// Class /Script/DelMarCore.DelMarMatchmakingComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarMatchmakingComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarMatchmakingComponent.ClientStartMatchmaking
	// void ClientStartMatchmaking(FOnlineLinkId LinkId);                                                                       // [0xc422f30] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/DelMarCore.DelMarMutator_AllowSpectateOtherTeams
/// Size: 0x0000 (0x000340 - 0x000340)
class ADelMarMutator_AllowSpectateOtherTeams : public AFortAthenaMutator_AllowSpectateOtherTeams
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Script/DelMarCore.DelMarAsyncPhysicsTickMutator
/// Size: 0x0010 (0x000340 - 0x000350)
class ADelMarAsyncPhysicsTickMutator : public ADelMarMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	DMember(float)                                     AsyncTickRate                                               OFFSET(get<float>, {0x340, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarAsyncPhysicsTickMutator.TryToApplySolverOverrides
	// void TryToApplySolverOverrides();                                                                                        // [0xc423bdc] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarConsoleVariableMutator
/// Size: 0x0030 (0x000340 - 0x000370)
class ADelMarConsoleVariableMutator : public ADelMarMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FString)                                   VariableName                                                OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x350, 16, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPhysMatAttributeMap
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarPhysMatAttributeMap : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UPhysicalMaterial*, FPhysicalMaterialAttributes_X>) MaterialAttributesMap                         OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarCameraComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UDelMarCameraComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<UDelMarVehicleManager*>)    VehicleManager                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarCameraInputControllerComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UDelMarCameraInputControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FDelMarInputAction)                        TurnCameraAction                                            OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FDelMarInputAction)                        LookUpCameraAction                                          OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FDelMarInputAction)                        ReverseCameraAction                                         OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(class UClass*)                             InputManagerClass                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnhancedInputComponent*>)  InputComponent                                              OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortClientSettingsRecord*>) FortSettings                                               OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCameraInputControllerComponent.HandleInputSettingsChanged
	// void HandleInputSettingsChanged();                                                                                       // [0xc423340] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCameraInputControllerComponent.HandleCameraSwivelDeadzoneChanged
	// void HandleCameraSwivelDeadzoneChanged();                                                                                // [0xc423118] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarContextualHintComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UDelMarContextualHintComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FDelMarEvent_SetTutorialHint)              HazardHitHint                                               OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	CMember(TMap<FGameplayTag, FDelMarEvent_SetTutorialHint>) DemolishedByHints                                    OFFSET(get<T>, {0xE8, 80, 0, 0})
	SMember(FDelMarEvent_SetTutorialHint)              SlowerTerrainHint                                           OFFSET(getStruct<T>, {0x138, 72, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           Vehicle                                                     OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(TWeakObjectPtr<APlayerController*>)        CachedPlayerController                                      OFFSET(get<T>, {0x188, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarContextualHintComponent.HandleVehicleHazardHit
	// void HandleVehicleHazardHit();                                                                                           // [0xc4234cc] Final|Native|Private 
	// Function /Script/DelMarCore.DelMarContextualHintComponent.HandleVehicleDemolished
	// void HandleVehicleDemolished(FGameplayTag CausedByTag);                                                                  // [0xc42340c] Final|Native|Private 
};

/// Class /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UDelMarLocalCheckpointVisibilityControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarCheckpointManagerComponent*>) CachedCheckpointManager                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         ViewTargetPlayerState                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TSet<ADelMarCheckpoint*>)                  CurrentlyActiveCheckpoints                                  OFFSET(get<T>, {0xB8, 80, 0, 0})
	DMember(bool)                                      bVisitedStartingCheckpoint                                  OFFSET(get<bool>, {0x108, 1, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget); // [0xc4234e0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent.HandleLapComplete
	// void HandleLapComplete(FDelMarEvent_LapComplete& LapEvent);                                                              // [0xc423354] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarLocalCheckpointVisibilityControllerComponent.HandleCheckpointPassed
	// void HandleCheckpointPassed(FDelMarEvent_CheckpointPassed_ParallelPath& CheckpointEvent);                                // [0xc42312c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarNetworkInputComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UDelMarNetworkInputComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:


	/// Functions
	// Function /Script/DelMarCore.DelMarNetworkInputComponent.ServerSendInputs
	// void ServerSendInputs(FDelMarNetworkInputPacket InputPacket);                                                            // [0xc423878] Final|Net|Native|Event|Private|NetServer|NetValidate 
};

/// Class /Script/DelMarCore.DelMarPlayerDeathRaceDataComponent
/// Size: 0x0008 (0x000228 - 0x000230)
class UDelMarPlayerDeathRaceDataComponent : public UDelMarPlayerRaceDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(int32_t)                                   Score                                                       OFFSET(get<int32_t>, {0x228, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPlayerInputManagerComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UDelMarPlayerInputManagerComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TMap<FGameplayTag, FDelMarInputMappingContextData>) InputMappingContextMap                             OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(class UDelMarInputContextRedirectMap*)     PlatformDigitalRedirect                                     OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    CachedController                                            OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedVehicle                                               OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPlayerPreferencesComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UDelMarPlayerPreferencesComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FMulticastInlineDelegate)                  OnUseToggleOnExpandableHudWidgetChanged                     OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUseIconOnlyPlayerNameplatesChanged                        OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTouchControlsLayoutChanged                                OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(EDelMarInvertSteerMethod)                  InvertSteerMethod                                           OFFSET(get<T>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bPitchInverted                                              OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(bool)                                      bVerticalKickflipInverted                                   OFFSET(get<bool>, {0xD2, 1, 0, 0})
	DMember(bool)                                      bAerialPitchActivationEnabled                               OFFSET(get<bool>, {0xD3, 1, 0, 0})
	DMember(bool)                                      bUseToggleOnExpandableHudWidget                             OFFSET(get<bool>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bUseIconOnlyPlayerNameplates                                OFFSET(get<bool>, {0xD5, 1, 0, 0})
	SMember(FGameplayTag)                              TouchControlsLayout                                         OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedDelMarVehicle                                         OFFSET(get<T>, {0xDC, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortClientSettingsRecord*>) FortSettings                                               OFFSET(get<T>, {0xE4, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.TryGetFortClientSettings
	// void TryGetFortClientSettings();                                                                                         // [0xc4584dc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.ServerUpdatePitchInverted
	// void ServerUpdatePitchInverted(bool bInPitchInverted);                                                                   // [0x8789008] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.ServerUpdateAerialPitchActivation
	// void ServerUpdateAerialPitchActivation(bool bInAerialPitchActivationEnabled);                                            // [0xb1ca018] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.ServerSetInvertSteerMethod
	// void ServerSetInvertSteerMethod(EDelMarInvertSteerMethod InInvertSteerMethod);                                           // [0x760eb64] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleTouchControlsSettingsChanged
	// void HandleTouchControlsSettingsChanged();                                                                               // [0xc4565fc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleLocalFortInputSettingsChanged
	// void HandleLocalFortInputSettingsChanged();                                                                              // [0xc4564cc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleInvertSteerSettingChanged
	// void HandleInvertSteerSettingChanged();                                                                                  // [0xc456408] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleIconOnlyNameplatesSettingChanged
	// void HandleIconOnlyNameplatesSettingChanged();                                                                           // [0xc4563f4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.HandleAerialPitchActivationSettingChanged
	// void HandleAerialPitchActivationSettingChanged();                                                                        // [0xc4563e0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.GetUseToggleOnExpandableHudWidget
	// bool GetUseToggleOnExpandableHudWidget();                                                                                // [0xc4562d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.GetUseIconOnlyPlayerNameplates
	// bool GetUseIconOnlyPlayerNameplates();                                                                                   // [0xa412938] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarPlayerPreferencesComponent.GetTouchControlsLayout
	// FGameplayTag GetTouchControlsLayout();                                                                                   // [0x6cdc7ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarPlayerRespawnComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UDelMarPlayerRespawnComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(float)                                     TeleportEnterPhaseSeconds                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     RespawnBackwardsRangeDistance                               OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     RespawnForwardRangeDistance                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     RespawnHeightStartDistance                                  OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     RespawnHeightPenetrationDistance                            OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     RespawnValidTrackRadius                                     OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bCheckForObstacles                                          OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(float)                                     OppositeSideThreshold                                       OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FVector)                                   ObstacleAreaBounds                                          OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	CMember(TArray<class UClass*>)                     ObstacleActorClasses                                        OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ObstacleActorIgnoreClasses                                  OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           DelMarVehicle                                               OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarCheckpointManagerComponent*>) CheckpointManager                                  OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPlayerRaceDataComponent*>) PlayerRaceData                                        OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarRaceConfigComponent*>) RaceConfig                                                OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarTrack*>)             LastActiveTrack                                             OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarTrackPositionComponent*>) TrackPosition                                          OFFSET(get<T>, {0x128, 8, 0, 0})
	DMember(int32_t)                                   LastValidSegmentIndex                                       OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(float)                                     LastValidDistanceAlongSpline                                OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(bool)                                      bSpawnOnOppositeSide                                        OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(bool)                                      bPreviousVehicleDemolished                                  OFFSET(get<bool>, {0x139, 1, 0, 0})
	DMember(bool)                                      bFirstVehicleForPlayer                                      OFFSET(get<bool>, {0x13A, 1, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPlayerStartlineComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UDelMarPlayerStartlineComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     FailBufferSeconds                                           OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           DelMarVehicle                                               OFFSET(get<T>, {0xA4, 8, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPlayerTurboManagerComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UDelMarPlayerTurboManagerComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     TurboCharges                                                OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     RechargeRateSeconds                                         OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     LapCompleteCharges                                          OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     RaceStartCharges                                            OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     MaxCharges                                                  OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarVehicle*>)           CachedDelMarVehicle                                         OFFSET(get<T>, {0xB4, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xBC, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayerTurboManagerComponent.SetTurboCharges
	// void SetTurboCharges(float TurboChargeAmount);                                                                           // [0xc4583f0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerTurboManagerComponent.ModifyTurboCharges_Delayed
	// void ModifyTurboCharges_Delayed(float TurboChargeAmount);                                                                // [0xc456704] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerTurboManagerComponent.ModifyTurboCharges
	// void ModifyTurboCharges(float TurboChargeAmount);                                                                        // [0xc456640] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayerTurboManagerComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                            // [0xc456610] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRemoveAthenaMarkerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarRemoveAthenaMarkerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelMarRequestComponent
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UDelMarRequestComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FGameplayTagContainer)                     MapChoice                                                   OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	DMember(bool)                                      bIsReadyToStartRace                                         OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bIsReadyToJoinRace                                          OFFSET(get<bool>, {0x109, 1, 0, 0})
	CMember(EDelMarPostRaceVote)                       PostRaceVote                                                OFFSET(get<T>, {0x10A, 1, 0, 0})
	DMember(bool)                                      bVotedPostRace                                              OFFSET(get<bool>, {0x10B, 1, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0x10C, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarRespawnManagerComponent*>) CachedRespawnManager                                  OFFSET(get<T>, {0x114, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0x11C, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerSetPostRaceVote
	// void ServerSetPostRaceVote(EDelMarPostRaceVote NewVote);                                                                 // [0xa7fa514] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerSetJoinNextRace
	// void ServerSetJoinNextRace(bool bInReadyToJoinRace);                                                                     // [0xc4580e0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestVehicleSpawn
	// void ServerRequestVehicleSpawn();                                                                                        // [0x8f7d7cc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestSpectatorBecomePlayer
	// void ServerRequestSpectatorBecomePlayer();                                                                               // [0x3c52ffc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestResetRun
	// void ServerRequestResetRun();                                                                                            // [0x3c42494] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestRacerCountdown
	// void ServerRequestRacerCountdown();                                                                                      // [0x3c4244c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestMapFromGameplay
	// void ServerRequestMapFromGameplay(FGameplayTagContainer InMapChoice);                                                    // [0xc457dec] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestMap
	// void ServerRequestMap(FGameplayTagContainer InMapChoice);                                                                // [0xc457ce4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestIdleKickExtension
	// void ServerRequestIdleKickExtension();                                                                                   // [0x2dc2798] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestFinalInitialization
	// void ServerRequestFinalInitialization();                                                                                 // [0xa194d3c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerRequestBecomeSpectator
	// void ServerRequestBecomeSpectator();                                                                                     // [0x38301ec] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerReadyUp
	// void ServerReadyUp(bool bInReadyUp);                                                                                     // [0xa5626f4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerPostRaceReturnToLobbySelected
	// void ServerPostRaceReturnToLobbySelected();                                                                              // [0x1e6b5b0] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.ServerPostRaceNextRaceSelected
	// void ServerPostRaceNextRaceSelected();                                                                                   // [0x1b55e98] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.PostRaceReturnToLobbySelected
	// void PostRaceReturnToLobbySelected();                                                                                    // [0xc4571fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.PostRaceNextRaceSelected
	// void PostRaceNextRaceSelected();                                                                                         // [0xc4571e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRequestComponent.OnRep_PostRaceVote
	// void OnRep_PostRaceVote();                                                                                               // [0xc4570e0] Final|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarRequestComponent.OnRep_bIsReadyToStartRace
	// void OnRep_bIsReadyToStartRace();                                                                                        // [0xc4571d4] Final|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarRequestComponent.OnRep_bIsReadyToJoinRace
	// void OnRep_bIsReadyToJoinRace();                                                                                         // [0xc4571c0] Final|Native|Protected|Const 
	// Function /Script/DelMarCore.DelMarRequestComponent.HandleLoadoutsChangedOnServer
	// void HandleLoadoutsChangedOnServer(FCosmeticLoadout& CosmeticLoadout);                                                   // [0xc45641c] Final|Native|Public|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarRunRecordPlayerComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UDelMarRunRecordPlayerComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FDelMarRunRecord)                          CurrentRunRecord                                            OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	SMember(FDelMarRunRecord)                          BestRunRecord                                               OFFSET(getStruct<T>, {0xC0, 32, 0, 0})
	SMember(FDelMarRunRecord)                          BestSectionsRecord                                          OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
	DMember(double)                                    BestSingleLapTime                                           OFFSET(get<double>, {0x100, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0x108, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRunRecordPlayerComponent.PrintRecords
	// void PrintRecords(FDelMarRunRecord& RunRecord, FString Name);                                                            // [0xc457210] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DelMarCore.DelMarRunRecordPlayerComponent.NetMulticast_SectionRecorded
	// void NetMulticast_SectionRecorded(FDelMarEvent_SectionRecorded InSectionRecordedEvent);                                  // [0xc456e58] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRunRecordPlayerComponent.NetMulticast_RunRecorded
	// void NetMulticast_RunRecorded(FDelMarEvent_RunRecorded InRunRecordedEvent);                                              // [0xc456c6c] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/DelMarCore.DelMarRunRecordPlayerComponent.NetMulticast_LapRecorded
	// void NetMulticast_LapRecorded(FDelMarEvent_LapRecorded InLapRecordedEvent);                                              // [0xc456a38] Net|NetReliableNative|Event|NetMulticast|Protected 
};

/// Class /Script/DelMarCore.DelMarTutorialPlayerRaceDataComponent
/// Size: 0x0008 (0x000228 - 0x000230)
class UDelMarTutorialPlayerRaceDataComponent : public UDelMarPlayerRaceDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(int32_t)                                   CurrentTutorialSectionIndex                                 OFFSET(get<int32_t>, {0x228, 4, 0, 0})
};

/// Class /Script/DelMarCore.DelMarTutorialRequestComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UDelMarTutorialRequestComponent : public UDelMarPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarTutorialRaceManager*>) TutorialRaceManager                                       OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.TutorialComplete
	// void TutorialComplete();                                                                                                 // [0xc456378] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_RequestStartRace
	// void Server_RequestStartRace(bool bSkipCountdown);                                                                       // [0x8789008] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_RequestSection
	// void Server_RequestSection(int32_t SectionIndex);                                                                        // [0xc4581a8] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_RequestPrevSection
	// void Server_RequestPrevSection();                                                                                        // [0xa194d3c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_RequestNextSection
	// void Server_RequestNextSection();                                                                                        // [0x8f7d7cc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Server_KeepTraining
	// void Server_KeepTraining();                                                                                              // [0x1b55e98] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|Const 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.Replay
	// void Replay();                                                                                                           // [0xc457954] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.KeepTraining
	// void KeepTraining();                                                                                                     // [0xc45662c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/DelMarCore.DelMarTutorialRequestComponent.GoRace
	// void GoRace();                                                                                                           // [0xc456378] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DelMarCore.DelMarLevelManagerComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UDelMarLevelManagerComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TWeakObjectPtr<UDelMarLevelDataAsset*>)    CurrentLevelData                                            OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FOnlineLinkId)                             CurrentLevelLinkId                                          OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FGameplayTagContainer)                     DesiredMapDescription                                       OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	SMember(FOnlineLinkId)                             DesiredLinkId                                               OFFSET(getStruct<T>, {0x110, 24, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarLevelManagerComponent.ServerRequestLevel
	// void ServerRequestLevel(FGameplayTagContainer DesiredMap);                                                               // [0xc457a20] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarLevelManagerComponent.RequestLevelLoad
	// void RequestLevelLoad(FGameplayTagContainer& DesiredMap);                                                                // [0xc457968] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarLoadingScreenMutator
/// Size: 0x0010 (0x000338 - 0x000348)
class ADelMarLoadingScreenMutator : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Script/DelMarCore.DelMarPlayspace
/// Size: 0x0148 (0x000740 - 0x000888)
class ADelMarPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2184;

public:
	CMember(TWeakObjectPtr<UFortPlaylistAthena*>)      MRSPlaylistData                                             OFFSET(get<T>, {0x788, 8, 0, 0})
	SMember(FString)                                   MRSLinkId                                                   OFFSET(getStruct<T>, {0x790, 16, 0, 0})
	CMember(class UDelMarGameStateMachine*)            PrimaryStateMachine                                         OFFSET(get<T>, {0x7B0, 8, 0, 0})
	DMember(bool)                                      bShouldShowLoadingScreen                                    OFFSET(get<bool>, {0x7B8, 1, 0, 0})
	CMember(TMap<EDelMarRaceMode, TWeakObjectPtr<UClass*>>) DefaultRaceLevelConfigs                                OFFSET(get<T>, {0x7C0, 80, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       ActiveRaceManager                                           OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortPlaylistAthena*>)      PlaylistData                                                OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarLevelManagerComponent*>) LevelManager                                            OFFSET(get<T>, {0x820, 8, 0, 0})
	CMember(class UFortLevelStreamComponent*)          LevelStreamComponent                                        OFFSET(get<T>, {0x828, 8, 0, 0})
	SMember(FDelMarMapSet)                             MapSet                                                      OFFSET(getStruct<T>, {0x830, 24, 0, 0})
	SMember(FGameplayTagContainer)                     PlaylistDefinedMapTags                                      OFFSET(getStruct<T>, {0x848, 32, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPlayspace.ShouldShowLoadingScreen
	// bool ShouldShowLoadingScreen();                                                                                          // [0x3da1da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayspace.SetLoadingScreenVisibiliy
	// void SetLoadingScreenVisibiliy(bool bInShouldShowLoadingScreen);                                                         // [0xc45832c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarPlayspace.ServerReturnToSetupWithLinkCode
	// void ServerReturnToSetupWithLinkCode(FOnlineLinkId OptionalMapToForceLoad);                                              // [0xc457ffc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.ServerReturnToSetup
	// void ServerReturnToSetup(FGameplayTagContainer OptionalMapToForceLoad);                                                  // [0xc457ef4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.ServerRequestLoadingLevelWithLinkCode
	// void ServerRequestLoadingLevelWithLinkCode(FOnlineLinkId DesiredMap);                                                    // [0xc457c00] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.ServerRequestLoadingLevel
	// void ServerRequestLoadingLevel(FGameplayTagContainer DesiredMap);                                                        // [0xc457b10] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.RequestNextMapFromMapSet
	// void RequestNextMapFromMapSet();                                                                                         // [0x2e785b0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/DelMarCore.DelMarPlayspace.OnRep_MRSLinkId
	// void OnRep_MRSLinkId();                                                                                                  // [0xc4570cc] Final|Native|Public  
	// Function /Script/DelMarCore.DelMarPlayspace.OnRep_ActiveRaceManagerUpdated
	// void OnRep_ActiveRaceManagerUpdated();                                                                                   // [0xc457034] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarPreRaceControllerComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UDelMarPreRaceControllerComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(class UInputAction*)                       NavigateAction                                              OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FViewTargetTransitionParams)               ViewTargetTransitionParams                                  OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     NavigateInputDeadzone                                       OFFSET(get<float>, {0xD0, 4, 0, 0})
	CMember(class UClass*)                             InputManagerClass                                           OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPlayerInputManagerComponent*>) InputManager                                      OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnhancedInputComponent*>)  InputComponent                                              OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TWeakObjectPtr<UDelMarPositionalTrackerComponent*>) PositionTracker                                    OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerState*>)         CurrentViewTarget                                           OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(float)                                     CellDistThreshold                                           OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MaxGridDim                                                  OFFSET(get<float>, {0x104, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPreRaceControllerComponent.ServerSetViewTarget
	// void ServerSetViewTarget(class AFortPlayerState* PlayerState);                                                           // [0x8788574] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarCheckpointManagerComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UDelMarCheckpointManagerComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bPromptFirstPlaceEvent                                      OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(class ADelMarCheckpoint*)                  StartingLineCheckpoint                                      OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class ADelMarCheckpoint*)                  FinishLineCheckpoint                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TSet<ADelMarCheckpoint*>)                  LevelCheckpoints                                            OFFSET(get<T>, {0xB8, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCheckpointManagerComponent.HandleResetRace
	// void HandleResetRace(FDelMarEvent_ResetRace& Event);                                                                     // [0xc456570] Final|Native|Private|HasOutParms 
	// Function /Script/DelMarCore.DelMarCheckpointManagerComponent.HandleRaceFinished
	// void HandleRaceFinished(FDelMarEvent_RaceFinished& Event);                                                               // [0xc4564e0] Final|Native|Private|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarDeathRaceManager
/// Size: 0x0030 (0x0004A8 - 0x0004D8)
class ADelMarDeathRaceManager : public ADelMarRaceManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	DMember(float)                                     NextRoundSeconds                                            OFFSET(get<float>, {0x4A8, 4, 0, 0})
	SMember(FDelMarDeathRaceConfig)                    DeathRaceConfigData                                         OFFSET(getStruct<T>, {0x4B0, 24, 0, 0})
	DMember(int32_t)                                   NumPlayersFinished                                          OFFSET(get<int32_t>, {0x4D0, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarDeathRaceManager.GetScoreThresholdToEndMatch
	// int32_t GetScoreThresholdToEndMatch();                                                                                   // [0xc4562b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarDeathRaceManager.GetPointsAwardForPlacement
	// int32_t GetPointsAwardForPlacement(int32_t InPlacement);                                                                 // [0xc4561ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DelMarCore.DelMarMatchmakeRatingComponentBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UDelMarMatchmakeRatingComponentBase : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DelMarCore.DelmarCompetitiveMatchmakeRatingComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UDelmarCompetitiveMatchmakeRatingComponent : public UDelMarMatchmakeRatingComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TMap<AFortPlayerState*, int32_t>)          CachedPlayerRankMap                                         OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TSet<FString>)                             PlayerUniqueIdsGivenMMR                                     OFFSET(get<T>, {0xF0, 80, 0, 0})
	CMember(TSet<FString>)                             PlayerUniqueIds                                             OFFSET(get<T>, {0x140, 80, 0, 0})
};

/// Class /Script/DelMarCore.DelMarPositionalTrackerComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UDelMarPositionalTrackerComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     TargetUpdateRateInSeconds                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(TMap<AFortPlayerState*, FDelMarPositionValue>) SplinePositions                                         OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TArray<class AFortPlayerState*>)           RacePositions                                               OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FDelMarFinalRacePositionEntry>)     FinalRacePositions                                          OFFSET(get<T>, {0x138, 16, 0, 0})
	DMember(float)                                     TimeSinceLastUpdate                                         OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   NumLapsInRace                                               OFFSET(get<int32_t>, {0x14C, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarPositionalTrackerComponent.OnRep_FinalRacePositions
	// void OnRep_FinalRacePositions();                                                                                         // [0xc457048] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRaceConfigComponent
/// Size: 0x0160 (0x0000A0 - 0x000200)
class UDelMarRaceConfigComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bGhostReplayEnabled                                         OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bAllowExitingVehicles                                       OFFSET(get<bool>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bResetPlayerRunOnUnregister                                 OFFSET(get<bool>, {0xA2, 1, 0, 0})
	DMember(float)                                     SecondsBeforeWrongwayWarning                                OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     SecondsBeforeDemoWarningsAppear                             OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SecondsBeforeMissedCheckpointDemo                           OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     SecondsBeforeReturnToTrackDemo                              OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(double)                                    DistanceFromTrackBeforeDemoWarning                          OFFSET(get<double>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultVehicleClass                                         OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(TArray<class UClass*>)                     ServerPlayerStateComponents                                 OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ClientPlayerStateComponents                                 OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ServerControllerComponents                                  OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ClientControllerComponents                                  OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(class UClass*)                             SpectatorControllerComponentClass                           OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FDelMarMatchmakingConfig)                  MatchmakingConfig                                           OFFSET(getStruct<T>, {0x128, 20, 0, 0})
	SMember(FDelMarStartlineConfig)                    StartlineConfig                                             OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FDelMarVehicleRuntimeConfig)               VehicleRuntimeConfig                                        OFFSET(getStruct<T>, {0x168, 20, 0, 0})
	SMember(FDelMarVehicleAbilityConfig)               VehicleAbilityConfig                                        OFFSET(getStruct<T>, {0x17C, 17, 0, 0})
	SMember(FDelMarRespawnConfig)                      RespawnConfig                                               OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	SMember(FDelMarRubberbandingConfig)                DefaultRubberbandingConfig                                  OFFSET(getStruct<T>, {0x1A0, 40, 0, 0})
	CMember(TArray<FDelMarRubberbandingMMRConfig>)     RubberbandingMMRConfigs                                     OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<FDelMarRubberbandingMMRConfig>)     RubberbandingMMROverrideConfigs                             OFFSET(get<T>, {0x1D8, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRaceConfigComponent.OnRep_VehicleAbilityConfig
	// void OnRep_VehicleAbilityConfig(FDelMarVehicleAbilityConfig& OldConfig);                                                 // [0xc457104] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarRaceConfigComponent.BroadcastVehicleAbilityConfigUpdated
	// void BroadcastVehicleAbilityConfigUpdated();                                                                             // [0xc4561b4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarRequestTrackerComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarRequestTrackerComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FDelMarEvent_TrackedPlayerReadyStates)     PlayerReadyStates                                           OFFSET(getStruct<T>, {0xA0, 32, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRequestTrackerComponent.OnRep_PlayerReadyStates
	// void OnRep_PlayerReadyStates();                                                                                          // [0xc49c908] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarRespawnManagerComponent
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UDelMarRespawnManagerComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     RespawnRetrySeconds                                         OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(TWeakObjectPtr<UDelMarCheckpointManagerComponent*>) CachedCheckpointManager                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarPlayerStart*>)       CachedChallengeStartSpawnPoint                              OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<AController*>>)      RespawnRetryQueue                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TMap<TWeakObjectPtr<AFortPlayerState*>, TWeakObjectPtr<ADelMarVehicle*>>) LastSpawnedVehicleMap        OFFSET(get<T>, {0xE0, 80, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRespawnManagerComponent.RequestRespawnVehicleForPawn
	// class ADelMarVehicle* RequestRespawnVehicleForPawn(class AFortPlayerPawn* InPlayerPawn);                                 // [0xc49d144] Final|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarRespawnManagerComponent.RequestRespawnPawnAndVehicle
	// class ADelMarVehicle* RequestRespawnPawnAndVehicle(class AController* InController);                                     // [0xc49d04c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DelMarCore.DelMarRubberbandingManagerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UDelMarRubberbandingManagerComponent : public UDelMarRaceManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     PackDistance                                                OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FDelMarRubberbandingConfig)                RubberbandingConfig                                         OFFSET(getStruct<T>, {0xBC, 40, 0, 0})
	DMember(int32_t)                                   MMRUsed                                                     OFFSET(get<int32_t>, {0xE4, 4, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarRubberbandingManagerComponent.OnRep_RubberbandingConfig
	// void OnRep_RubberbandingConfig();                                                                                        // [0xc49c998] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarGameStateMachine
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UDelMarGameStateMachine : public UDelMarStateMachine
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/DelMarCore.DelMarState_Gameplay
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarState_Gameplay : public UDelMarState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarState_Gameplay_ActiveRace
/// Size: 0x0000 (0x000030 - 0x000030)
class UDelMarState_Gameplay_ActiveRace : public UDelMarGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DelMarCore.DelMarState_Gameplay_Postrace
/// Size: 0x0280 (0x000030 - 0x0002B0)
class UDelMarState_Gameplay_Postrace : public UDelMarGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	DMember(float)                                     PostRaceDuration                                            OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(double)                                    PostRaceEndServerTime                                       OFFSET(get<double>, {0x38, 8, 0, 0})
	CMember(TSet<TWeakObjectPtr<AFortPlayerState*>>)   ReadyPlayers                                                OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TWeakObjectPtr<ADelMarPlayspace*>)         CachedPlayspace                                             OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       CachedRaceManager                                           OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FString)                                   EliminationList                                             OFFSET(getStruct<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarState_Gameplay_Postrace.OnRep_PostRaceEndServerTime
	// void OnRep_PostRaceEndServerTime();                                                                                      // [0xc49c95c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarState_Gameplay_Postrace.OnRep_EliminationList
	// void OnRep_EliminationList();                                                                                            // [0xc49c888] Final|Native|Private 
};

/// Class /Script/DelMarCore.DelMarState_Gameplay_Prerace
/// Size: 0x0018 (0x000030 - 0x000048)
class UDelMarState_Gameplay_Prerace : public UDelMarGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(double)                                    PreRaceCountdownFinishServerTime                            OFFSET(get<double>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarState_Gameplay_Prerace.OnRep_PreRaceCountdownFinishServerTime
	// void OnRep_PreRaceCountdownFinishServerTime();                                                                           // [0xc49c970] Final|Native|Private 
};

/// Class /Script/DelMarCore.DelMarState_Gameplay_WaitingForPlayers
/// Size: 0x0030 (0x000030 - 0x000060)
class UDelMarState_Gameplay_WaitingForPlayers : public UDelMarGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   MinPlayers                                                  OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TWeakObjectPtr<ADelMarRaceManager*>)       RaceManager                                                 OFFSET(get<T>, {0x34, 8, 0, 0})
	SMember(FDelMarEvent_LoadedPlayerStates)           LoadedPlayerStates                                          OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPartyBeaconHost*>)     FortPartyBeacon                                             OFFSET(get<T>, {0x44, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarState_Gameplay_WaitingForPlayers.OnRep_LoadedPlayerStates
	// void OnRep_LoadedPlayerStates();                                                                                         // [0xc49c8a4] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarState_LevelSetup
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarState_LevelSetup : public UDelMarGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bVehiclesReady                                              OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bVehiclesSpawned                                            OFFSET(get<bool>, {0x31, 1, 0, 0})
};

/// Class /Script/DelMarCore.DelMarState_Loading
/// Size: 0x0038 (0x000030 - 0x000068)
class UDelMarState_Loading : public UDelMarGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     DelayBeforeLoadingActuallyStarts                            OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DesiredMap                                                  OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Class /Script/DelMarCore.DelMarState_Lobby
/// Size: 0x0008 (0x000030 - 0x000038)
class UDelMarState_Lobby : public UDelMarGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bLevelLoadRequested                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/DelMarCore.DelMarState_Setup
/// Size: 0x0050 (0x000030 - 0x000080)
class UDelMarState_Setup : public UDelMarGameplayState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bHasRequestedLink                                           OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bHasRecievedMatchAssignment                                 OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bRequiresMatchAssignmentToProceed                           OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bCalledMapRotationService                                   OFFSET(get<bool>, {0x33, 1, 0, 0})
	SMember(FGameplayTagContainer)                     DebugMapToLoad                                              OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FOnlineLinkId)                             DebugIslandCodeToLoad                                       OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

/// Class /Script/DelMarCore.DelMarCameraShakeComponent
/// Size: 0x04D0 (0x0000A0 - 0x000570)
class UDelMarCameraShakeComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(TMap<EBrelmarCameraShake, float>)          ShakeIntensitySettingMap                                    OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(class UClass*)                             JumpShakeEffect                                             OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UClass*)                             HazardShakeEffect                                           OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bUseVehicleLandedKickflipShake                              OFFSET(get<bool>, {0x100, 1, 0, 0})
	CMember(class UClass*)                             VehicleLandedKickflipShake                                  OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FDelMarScaledCurve)                        VehicleLandedKickflipShakeIntensityCurve                    OFFSET(getStruct<T>, {0x110, 144, 0, 0})
	CMember(class UClass*)                             VehicleLandedCameraShakeEffect                              OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(FDelMarScaledCurve)                        VehicleLandedShakeIntensityCurve                            OFFSET(getStruct<T>, {0x1A8, 144, 0, 0})
	DMember(float)                                     MaxSecondsToDampenVehicleHit                                OFFSET(get<float>, {0x238, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        VehicleHitShakeIntensityCurve                               OFFSET(getStruct<T>, {0x240, 144, 0, 0})
	SMember(FDelMarDynamicCameraShakeEffect)           VehicleImpactShakeEffect                                    OFFSET(getStruct<T>, {0x2D0, 160, 0, 0})
	SMember(FDelMarDynamicCameraShakeEffect)           WallImpactShakeEffect                                       OFFSET(getStruct<T>, {0x370, 160, 0, 0})
	SMember(FDelMarDynamicCameraShakeEffect)           WallNoRedirectImpactShakeEffect                             OFFSET(getStruct<T>, {0x410, 160, 0, 0})
	SMember(FDelMarDynamicCameraShakeEffect)           BaseAccelerationShakeEffect                                 OFFSET(getStruct<T>, {0x4B0, 160, 0, 0})
	CMember(TScriptInterface<Class>)                   Vehicle                                                     OFFSET(get<T>, {0x550, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    CachedPlayerController                                      OFFSET(get<T>, {0x560, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnVehicleLanded
	// void OnVehicleLanded(float LandingForce, bool bLandedKickflip);                                                          // [0xc49cd8c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnVehicleHitWall
	// void OnVehicleHitWall(float Magnitude, FVector WorldLocation, float ForwardRotationDegrees);                             // [0xc49cbc0] Final|Native|Protected|HasDefaults 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnVehicleHitVehicle
	// void OnVehicleHitVehicle(float Magnitude, FVector WorldLocation);                                                        // [0xc49ca60] Final|Native|Protected|HasDefaults 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnJumpActivated
	// void OnJumpActivated();                                                                                                  // [0xc49c844] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnHazardHit
	// void OnHazardHit();                                                                                                      // [0xc49c830] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarCameraShakeComponent.OnCameraShakeIntensitySettingsChanged
	// void OnCameraShakeIntensitySettingsChanged(class UFortClientSettingsRecord* Settings);                                   // [0xc49c770] Final|Native|Private 
};

/// Class /Script/DelMarCore.DelMarVehicleConfigs
/// Size: 0x18E8 (0x000930 - 0x002218)
class UDelMarVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8728;

public:
	SMember(FDelMarVehicleCollisionConfig)             Collision                                                   OFFSET(getStruct<T>, {0x930, 536, 0, 0})
	CMember(class UDelMarVehicleBodySetup*)            DefaultBodySetup                                            OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(class UDelMarVehicleBodySetupMap*)         BodySetupMap                                                OFFSET(get<T>, {0xB50, 8, 0, 0})
	SMember(FDelMarVehicleDriveSetup)                  DriveSetup                                                  OFFSET(getStruct<T>, {0xB58, 864, 0, 0})
	CMember(class UDelMarPhysMatAttributeMap*)         PhysMatAttributeMap                                         OFFSET(get<T>, {0xEB8, 8, 0, 0})
	SMember(FDelMarVehicleRigidBodyConfig)             RigidBody                                                   OFFSET(getStruct<T>, {0xEC0, 64, 0, 0})
	SMember(FDelMarVehicleConfig_Terrain)              Terrain                                                     OFFSET(getStruct<T>, {0xF00, 48, 0, 0})
	SMember(FDelMarVehicleConfig_WorldBonusSpeed)      WorldBonusSpeed                                             OFFSET(getStruct<T>, {0xF30, 40, 0, 0})
	SMember(FDelMarVehicleConfig_AutoAerialRotation)   AerialRotation                                              OFFSET(getStruct<T>, {0xF58, 168, 0, 0})
	SMember(FDelMarVehicleConfig_AirControl)           AirControl                                                  OFFSET(getStruct<T>, {0x1000, 208, 0, 0})
	SMember(FDelMarVehicleConfig_AirFreestyle)         AirFreestyle                                                OFFSET(getStruct<T>, {0x10D0, 48, 0, 0})
	SMember(FDelMarVehicleConfig_AirThrottle)          AirThrottle                                                 OFFSET(getStruct<T>, {0x1100, 160, 0, 0})
	SMember(FDelMarVehicleConfig_AutoUpright)          AutoUpright                                                 OFFSET(getStruct<T>, {0x11A0, 36, 0, 0})
	SMember(FDelMarVehicleDraftingConfig)              Drafting                                                    OFFSET(getStruct<T>, {0x11C4, 48, 0, 0})
	SMember(FDelMarVehicleDriftConfig)                 Drift                                                       OFFSET(getStruct<T>, {0x11F8, 1816, 0, 0})
	SMember(FDelMarVehicleDriftBoostConfig)            DriftBoost                                                  OFFSET(getStruct<T>, {0x1910, 472, 0, 0})
	SMember(FDelMarVehicleConfig_Gravity)              Gravity                                                     OFFSET(getStruct<T>, {0x1AE8, 32, 0, 0})
	SMember(FDelMarVehicleConfig_Jump)                 Jump                                                        OFFSET(getStruct<T>, {0x1B08, 24, 0, 0})
	SMember(FDelMarVehicleConfig_Kickflip)             Kickflip                                                    OFFSET(getStruct<T>, {0x1B20, 344, 0, 0})
	SMember(FDelMarVehicleOversteerConfig)             Oversteer                                                   OFFSET(getStruct<T>, {0x1C78, 312, 0, 0})
	SMember(FDelMarVehicleConfig_Reattachment)         Reattachment                                                OFFSET(getStruct<T>, {0x1DB0, 160, 0, 0})
	SMember(FDelMarVehicleConfig_Rubberbanding)        Rubberbanding                                               OFFSET(getStruct<T>, {0x1E50, 440, 0, 0})
	SMember(FDelMarVehicleConfig_StartlineBoost)       StartlineBoost                                              OFFSET(getStruct<T>, {0x2008, 168, 0, 0})
	SMember(FDelMarVehicleConfig_Strafe)               Strafe                                                      OFFSET(getStruct<T>, {0x20B0, 28, 0, 0})
	SMember(FDelMarVehicleTurboConfig)                 Turbo                                                       OFFSET(getStruct<T>, {0x20D0, 112, 0, 0})
	SMember(FDelMarVehicleConfig_Underthrust)          Underthrust                                                 OFFSET(getStruct<T>, {0x2140, 216, 0, 0})
};

/// Class /Script/DelMarCore.DelMarVehicleCosmeticComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UDelMarVehicleCosmeticComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMulticastInlineDelegate)                  OnCosmeticActorSpawned                                      OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllCosmeticActorsSpawned                                  OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           StaticCosmeticActorClasses                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class UClass*>)                     AllowedServerCosmeticActorClasses                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<class ADelMarCosmeticActor*>)       SpawnedCosmeticActors                                       OFFSET(get<T>, {0xE0, 16, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleCosmeticComponent.GetCosmeticActors
	// TArray<ADelMarCosmeticActor*> GetCosmeticActors(class UClass* CosmeticClass, bool bLookForChildClasses);                 // [0xc4d4b9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleCosmeticComponent.GetCosmeticActor
	// class ADelMarCosmeticActor* GetCosmeticActor(class UClass* CosmeticClass, bool bLookForChildClasses);                    // [0xc4d4a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DelMarCore.DelMarVehicleCosmeticComponent.DelMarOnCosmeticItemSpawned__DelegateSignature
	// void DelMarOnCosmeticItemSpawned__DelegateSignature(class ADelMarCosmeticActor* CosmeticActor);                          // [0x246f7d8] MulticastDelegate|Public|Delegate 
	// Function /Script/DelMarCore.DelMarVehicleCosmeticComponent.DelMarOnAllCosmeticActorsSpawned__DelegateSignature
	// void DelMarOnAllCosmeticActorsSpawned__DelegateSignature();                                                              // [0x246f7d8] MulticastDelegate|Public|Delegate 
};

/// Class /Script/DelMarCore.DelMarVehicleForceFeedbackComponent
/// Size: 0x0358 (0x0000A0 - 0x0003F8)
class UDelMarVehicleForceFeedbackComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FDelMarDynamicForceFeedbackEffect)         DrivingForceFeedback                                        OFFSET(getStruct<T>, {0xA0, 296, 0, 0})
	CMember(class UForceFeedbackEffect*)               JumpForceFeedbackEffect                                     OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(class UForceFeedbackEffect*)               OversteerLeftForceFeedbackEffect                            OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(class UForceFeedbackEffect*)               OversteerRightForceFeedbackEffect                           OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(TArray<class UForceFeedbackEffect*>)       LandingForceFeedbackEffects                                 OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FRuntimeFloatCurve)                        LandingForceLevelLookupCurve                                OFFSET(getStruct<T>, {0x1F0, 136, 0, 0})
	CMember(class UForceFeedbackEffect*)               TurboForceFeedbackEffect                                    OFFSET(get<T>, {0x278, 8, 0, 0})
	SMember(FDelMarDynamicForceFeedbackEffect)         DriftForceFeedback                                          OFFSET(getStruct<T>, {0x280, 296, 0, 0})
	CMember(class UForceFeedbackEffect*)               DriftUncontrolledForceFeedbackEffect                        OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class UForceFeedbackEffect*)               DriftBoostForceFeedbackEffect                               OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UForceFeedbackEffect*)               DriftTractionForceFeedback                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(float)                                     MaxTractionDriftShakeAngle                                  OFFSET(get<float>, {0x3C0, 4, 0, 0})
	CMember(class UForceFeedbackEffect*)               HazardHitForceFeedback                                      OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   Vehicle                                                     OFFSET(get<T>, {0x3D0, 16, 0, 0})
	CMember(TWeakObjectPtr<APlayerController*>)        CachedPlayerController                                      OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(TWeakObjectPtr<UForceFeedbackEffect*>)     CurrentOversteerForceFeedbackEffect                         OFFSET(get<T>, {0x3E8, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnVehicleLanded
	// void OnVehicleLanded(float LandingForce, bool bLandedKickflip);                                                          // [0xc4d51dc] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnUnderthrustDeactivated
	// void OnUnderthrustDeactivated();                                                                                         // [0xc4d51c8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnUnderthrustActivated
	// void OnUnderthrustActivated();                                                                                           // [0xc4d51b4] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnTurboDeactivated
	// void OnTurboDeactivated();                                                                                               // [0xc4d51a0] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnTurboActivated
	// void OnTurboActivated();                                                                                                 // [0xc4d518c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnJumpActivated
	// void OnJumpActivated();                                                                                                  // [0xc4d4f2c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnHazardHit
	// void OnHazardHit();                                                                                                      // [0xc4d4f18] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftDeactivated
	// void OnDriftDeactivated();                                                                                               // [0xc4d4f04] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftControlChanged
	// void OnDriftControlChanged(bool bIsDriftControlled);                                                                     // [0xc4d4e40] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftBoostDeactivated
	// void OnDriftBoostDeactivated();                                                                                          // [0xc4d4e2c] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftBoostActivated
	// void OnDriftBoostActivated();                                                                                            // [0xc4d4e18] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.OnDriftActivated
	// void OnDriftActivated();                                                                                                 // [0xc4d4e04] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleForceFeedbackComponent.HandleLoadingScreenVisibilityChanged
	// void HandleLoadingScreenVisibilityChanged(bool bVisibility);                                                             // [0xc4d4d40] Final|Native|Protected 
};

/// Class /Script/DelMarCore.DelMarVehicleMovementSet
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UDelMarVehicleMovementSet : public UFortAttributeSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FFortGameplayAttributeData)                AccelMultiplier                                             OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                bVehicleThrottleDisabled                                    OFFSET(getStruct<T>, {0x58, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                BonusSpeed                                                  OFFSET(getStruct<T>, {0x80, 40, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleMovementSet.OnRep_VehicleThrottleDisabled
	// void OnRep_VehicleThrottleDisabled(FFortGameplayAttributeData& OldInputDisabled);                                        // [0xc4d50c8] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleMovementSet.OnRep_BonusSpeed
	// void OnRep_BonusSpeed(FFortGameplayAttributeData& OldBonusSpeed);                                                        // [0xc4d5004] Final|Native|Protected|HasOutParms 
	// Function /Script/DelMarCore.DelMarVehicleMovementSet.OnRep_AccelMultiplier
	// void OnRep_AccelMultiplier(FFortGameplayAttributeData& OldSpeedMultiplier);                                              // [0xc4d4f40] Final|Native|Protected|HasOutParms 
};

/// Class /Script/DelMarCore.DelMarVehicleTurboManagerComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UDelMarVehicleTurboManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     TurboCharges                                                OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     RechargeRateSeconds                                         OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     MaxCharges                                                  OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(class ADelMarVehicle*)                     OwnerVehicle                                                OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/DelMarCore.DelMarVehicleTurboManagerComponent.SetTurboCharges
	// void SetTurboCharges(float TurboChargeAmount);                                                                           // [0xc4e3aec] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicleTurboManagerComponent.OnConfigOverridesSet
	// void OnConfigOverridesSet();                                                                                             // [0xc4e3ad8] Final|Native|Protected 
	// Function /Script/DelMarCore.DelMarVehicleTurboManagerComponent.ModifyTurboCharges_Delayed
	// void ModifyTurboCharges_Delayed(float TurboChargeAmount);                                                                // [0xc4e3a0c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicleTurboManagerComponent.ModifyTurboCharges
	// void ModifyTurboCharges(float TurboChargeAmount);                                                                        // [0xc4e3948] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DelMarCore.DelMarVehicleTurboManagerComponent.HandleTurboChargeUsed
	// void HandleTurboChargeUsed();                                                                                            // [0xc4e392c] Final|Native|Protected 
};

/// Struct /Script/DelMarCore.DelMarAIDifficultySpawnInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarAIDifficultySpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SkillLevel                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     BotFillPercentage                                           OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarAIMMRSpawnDataTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FDelMarAIMMRSpawnDataTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   MMRBracketLow                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MMRBracketHigh                                              OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   FallbackSkillLevel                                          OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FDelMarAIDifficultySpawnInfo>)      BotSpawnInfo                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarAIVehicleCosmeticSlotDataTableInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FDelMarAIVehicleCosmeticSlotDataTableInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UCosmeticLoadoutSlotTemplate*>) SlotTemplate                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               VehicleSlotCosmeticDataTable                                OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarCosmeticLoadoutSlotData
/// Size: 0x0040 (0x000000 - 0x000040)
class FDelMarCosmeticLoadoutSlotData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UCosmeticLoadoutSlotTemplate*>) SlotTemplate                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  EquippedItemDefinitionObject                                OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarAIVehicleCosmeticLoadoutSetDataTableRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FDelMarAIVehicleCosmeticLoadoutSetDataTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FDelMarCosmeticLoadoutSlotData>)    LoadoutSlots                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarAIVehicleCosmeticSlotDataTableRow
/// Size: 0x0028 (0x000008 - 0x000030)
class FDelMarAIVehicleCosmeticSlotDataTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UObject*>)                  EquippedItemDefinitionObject                                OFFSET(get<T>, {0x8, 32, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/DelMarCore.AvoidanceInfo
/// Size: 0x0080 (0x000000 - 0x000080)
class FAvoidanceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<TWeakObjectPtr<AActor*>, UDriveHazardInfo*>) DriveHazardInfoMap                                   OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<class UDriveHazardInfo*>)           NonJumpableDriveHazardInfos                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<class UDriveHazardInfo*>)           JumpableDriveHazardInfos                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarCosmeticSlotInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FDelMarCosmeticSlotInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              SlotTag                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     SlotName                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     ShortDescription                                            OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bCanBeEmpty                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               UnassignedPreviewImage                                      OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_DriverInteractionAdded
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_DriverInteractionAdded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEventRouterExt
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarEventRouterExt : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bWorldIsTearingDown                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UGameplayEventRouterComponent*)      EventRouter                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UObject*)                            EventRouterContextObject                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarGameplayStateChangedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarGameplayStateChangedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              PrevStateId                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              NewStateId                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_ResetRace
/// Size: 0x0001 (0x000000 - 0x000001)
class FDelMarEvent_ResetRace : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_ResetRun
/// Size: 0x0001 (0x000000 - 0x000001)
class FDelMarEvent_ResetRun : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_RaceFinished
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_RaceFinished : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_FirstPlayerFinishedCountdown
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarEvent_FirstPlayerFinishedCountdown : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_RaceActive
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_RaceActive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_RunActive
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarEvent_RunActive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_OvertimeActive
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_OvertimeActive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_CountdownActive
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarEvent_CountdownActive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_PlayerFinishedRace
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarEvent_PlayerFinishedRace : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_RacerStateChanged
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarEvent_RacerStateChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              PrevStateId                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              NewStateId                                                  OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_PlayerBecomeSpectator
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_PlayerBecomeSpectator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_RaceManagerInitialized
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_RaceManagerInitialized : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_VehicleAssignedToPawn
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_VehicleAssignedToPawn : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_ServerRaceStartCountdownTime
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_ServerRaceStartCountdownTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(double)                                    ServerTime                                                  OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_ServerPostRaceEndTime
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_ServerPostRaceEndTime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(double)                                    ServerTime                                                  OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_VehicleDemolished
/// Size: 0x000C (0x000000 - 0x00000C)
class FDelMarEvent_VehicleDemolished : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              CausedByTag                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_VehicleWrongwayStatus
/// Size: 0x0001 (0x000000 - 0x000001)
class FDelMarEvent_VehicleWrongwayStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_MissedCheckpointDemoCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_MissedCheckpointDemoCountdown : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_ReturnToTrackDemoCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_ReturnToTrackDemoCountdown : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_TrackedPlayerReadyStates
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarEvent_TrackedPlayerReadyStates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<TWeakObjectPtr<AFortPlayerState*>>) ReadyPlayers                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AFortPlayerState*>>) UnreadyPlayers                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_LoadedPlayerStates
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_LoadedPlayerStates : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumLoadedPlayers                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalPlayers                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_LoadingScreenData
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarEvent_LoadingScreenData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UDelMarLevelDataAsset*)              LevelData                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              RaceMode                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_DialogRequest
/// Size: 0x0004 (0x000000 - 0x000004)
class FDelMarEvent_DialogRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              DialogTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_SetTutorialHint
/// Size: 0x0048 (0x000000 - 0x000048)
class FDelMarEvent_SetTutorialHint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FText)                                     KBMText                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     GamepadText                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     TouchText                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     DisplayTime                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	CMember(TArray<class UInputAction*>)               AssociatedInputActions                                      OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_SetTutorialAnnouncement
/// Size: 0x0040 (0x000000 - 0x000040)
class FDelMarEvent_SetTutorialAnnouncement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     KBMText                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     GamepadText                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     TouchText                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UInputAction*>)               AssociatedInputActions                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_MidTutorialModal
/// Size: 0x0001 (0x000000 - 0x000001)
class FDelMarEvent_MidTutorialModal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_SetControlsText
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarEvent_SetControlsText : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     KBMText                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     GamepadText                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_CheckpointPassed_ParallelPath
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarEvent_CheckpointPassed_ParallelPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ADelMarCheckpoint*)                  CurrentCheckPoint                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   CheckpointIndexForLap                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_CheckpointPassedOutOfOrder_ParallelPath
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_CheckpointPassedOutOfOrder_ParallelPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class ADelMarCheckpoint*)                  CurrentCheckPoint                                           OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_TeleportEnteredEvent
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarEvent_TeleportEnteredEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ADelMarCheckpoint*)                  CheckpointEntered                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bEnteredInFinalLap                                          OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_TeleportExitedEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_TeleportExitedEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class ADelMarCheckpoint*)                  CheckpointExited                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_SectionComplete_ParallelPath
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarEvent_SectionComplete_ParallelPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   ActiveLap                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SectionIndex                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(class ADelMarCheckpoint*)                  CompletedCheckpoint                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class ADelMarCheckpoint*)                  CurrentCheckPoint                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(double)                                    CompletedSectionTime                                        OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_LapComplete
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarEvent_LapComplete : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class AFortPlayerState*)                   PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   CompletedLap                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   CurrentLap                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   TotalLaps                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(double)                                    CompletedLapTime                                            OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_LapRecorded
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarEvent_LapRecorded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   CompletedLap                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FDelMarRunRecord)                          CurrentRunRecord                                            OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	DMember(float)                                     BestSingleLapTime                                           OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bIsNewLapRecord                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarRunRecord
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarRunRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    RunDuration                                                 OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    RunStartTimestamp                                           OFFSET(get<double>, {0x8, 8, 0, 0})
	CMember(TArray<FDelMarLapRecord>)                  LapRecords                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarLapRecord
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarLapRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    LapDuration                                                 OFFSET(get<double>, {0x0, 8, 0, 0})
	CMember(TArray<double>)                            SectionTimes                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_SectionRecorded
/// Size: 0x0050 (0x000000 - 0x000050)
class FDelMarEvent_SectionRecorded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   ActiveLap                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SectionIndex                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FDelMarRunRecord)                          BestSectionsRunRecord                                       OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FDelMarRunRecord)                          CurrentRunRecord                                            OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	DMember(bool)                                      bIsNewSectionRecord                                         OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_RunRecorded
/// Size: 0x0050 (0x000000 - 0x000050)
class FDelMarEvent_RunRecorded : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class AFortPlayerState*)                   PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FDelMarRunRecord)                          CurrentRunRecord                                            OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FDelMarRunRecord)                          BestRunRecord                                               OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	DMember(bool)                                      bIsNewBestRun                                               OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_NuxConnectedHintActionPerformed
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEvent_NuxConnectedHintActionPerformed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              HintTypeTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bDidPerformAction                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_RaceModeSet
/// Size: 0x0004 (0x000000 - 0x000004)
class FDelMarEvent_RaceModeSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              RaceModeTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_GlobalLeaderboardNewPersonalBest
/// Size: 0x0048 (0x000000 - 0x000048)
class FDelMarEvent_GlobalLeaderboardNewPersonalBest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<AFortPlayerState*>)         Player                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FDelMarGlobalLeaderboardEntry)             PersonalBest                                                OFFSET(getStruct<T>, {0x8, 64, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarGlobalLeaderboardEntry
/// Size: 0x0040 (0x000000 - 0x000040)
class FDelMarGlobalLeaderboardEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   PlayerAccountId                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PlayerName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(double)                                    RunDuration                                                 OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   Rank                                                        OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	DMember(double)                                    Percentile                                                  OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(bool)                                      bIsLocalPlayer                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_MatchmakingStateChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FDelMarEvent_MatchmakingStateChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      NewPostMatchState                                           OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_PostRaceReturnToLobbySelected
/// Size: 0x0001 (0x000000 - 0x000001)
class FDelMarEvent_PostRaceReturnToLobbySelected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DelMarCore.DelMarEvent_PostRaceNextRaceSelected
/// Size: 0x0001 (0x000000 - 0x000001)
class FDelMarEvent_PostRaceNextRaceSelected : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DelMarCore.DelMarFloatModifier
/// Size: 0x0014 (0x000000 - 0x000014)
class FDelMarFloatModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     Category                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<EDelMarFloatOperation>)        Operation                                                   OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TEnumAsByte<EDelMarModifierStackingPolicy>) StackingPolicy                                             OFFSET(get<T>, {0xD, 1, 0, 0})
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarFloatAttribute
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarFloatAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     BaseValue                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FinalValue                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bClampMin                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bClampMax                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<FDelMarFloatModifier>)              Modifiers                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   CurrentHandleIdx                                            OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/DelMarCore.GhostReplayFrame
/// Size: 0x0050 (0x000000 - 0x000050)
class FGhostReplayFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	DMember(double)                                    Time                                                        OFFSET(get<double>, {0x40, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarLeaderboardSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarLeaderboardSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EventId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   WindowId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarInputAction
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarInputAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UInputAction*)                       Action                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              DisabledTag                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarInputMappingContextData
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarInputMappingContextData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UFortInputMappingContext*)           MappingContext                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarActivatedInput
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarActivatedInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UInputAction*)                       Action                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarActivatedInputFrame
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarActivatedInputFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FDelMarActivatedInput>)             Inputs                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarDisabledInputData
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarDisabledInputData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class UClass*)                             EffectClass                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilterBase
/// Size: 0x00F0 (0x0000A0 - 0x000190)
class FDelMarObjectiveFilterBase : public FObjectiveFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FObjectiveSubjectTags)                     LevelDescriptionId                                          OFFSET(getStruct<T>, {0xA0, 72, 0, 0})
	SMember(FObjectiveSubjectTags)                     GameModeId                                                  OFFSET(getStruct<T>, {0xE8, 72, 0, 0})
	SMember(FObjectiveSubjectTags)                     VehicleTags                                                 OFFSET(getStruct<T>, {0x130, 72, 0, 0})
	CMember(EDelMarPlaylistTypeInfo)                   RequiredPlaylistTypeInfo                                    OFFSET(get<T>, {0x178, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UDelMarCosmeticItemDefinition*>>) RequiredCosmetics                              OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_BeatPlayers
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_BeatPlayers : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_BonusTurboActivated
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_BonusTurboActivated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_BoostPadBonusSpeedEnded
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_BoostPadBonusSpeedEnded : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_BoostPadHit
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_BoostPadHit : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DistanceTraveled
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_DistanceTraveled : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DraftActivated
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_DraftActivated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DriftBoostActivated
/// Size: 0x0020 (0x000190 - 0x0001B0)
class FDelMarObjectiveFilter_DriftBoostActivated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FDoubleRange)                              RequiredDriftBoostPercent                                   OFFSET(getStruct<T>, {0x190, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DriftBoostDeactivated
/// Size: 0x0020 (0x000190 - 0x0001B0)
class FDelMarObjectiveFilter_DriftBoostDeactivated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FDoubleRange)                              RequiredTotalDistance                                       OFFSET(getStruct<T>, {0x190, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_DriftComplete
/// Size: 0x0020 (0x000190 - 0x0001B0)
class FDelMarObjectiveFilter_DriftComplete : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FDoubleRange)                              RequiredDriftDuration                                       OFFSET(getStruct<T>, {0x190, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_HighestSpeedUpdated
/// Size: 0x0020 (0x000190 - 0x0001B0)
class FDelMarObjectiveFilter_HighestSpeedUpdated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FDoubleRange)                              RequiredHighestSpeed                                        OFFSET(getStruct<T>, {0x190, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_InitialTurboActivated
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_InitialTurboActivated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_Kickflipped
/// Size: 0x0008 (0x000190 - 0x000198)
class FDelMarObjectiveFilter_Kickflipped : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(EDelMarKickflipDirection)                  RequiredKickflipDirection                                   OFFSET(get<T>, {0x190, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_LapComplete
/// Size: 0x0040 (0x000190 - 0x0001D0)
class FDelMarObjectiveFilter_LapComplete : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FDoubleRange)                              RequiredLapCompleteTime                                     OFFSET(getStruct<T>, {0x190, 32, 0, 0})
	SMember(FInt32Range)                               RequiredLapCount                                            OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredLapPlacement                                        OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_PlacementUpdated
/// Size: 0x0018 (0x000190 - 0x0001A8)
class FDelMarObjectiveFilter_PlacementUpdated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FInt32Range)                               RequiredCurrentPosition                                     OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	CMember(EDelMarPositionChangeInfo)                 RequiredPositionChangeInfo                                  OFFSET(get<T>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_PlayedDelMarExperience
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_PlayedDelMarExperience : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_RaceFinished
/// Size: 0x0048 (0x000190 - 0x0001D8)
class FDelMarObjectiveFilter_RaceFinished : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FDoubleRange)                              RequiredFinishTime                                          OFFSET(getStruct<T>, {0x190, 32, 0, 0})
	SMember(FInt32Range)                               RequiredFinalPlacement                                      OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	SMember(FInt32Range)                               RequiredPlayerCompetitiveRank                               OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	CMember(EDelMarJellyHazardProcessorInfo)           RequiredJellyHazardInfo                                     OFFSET(get<T>, {0x1D0, 4, 0, 0})
	CMember(EDelMarDemolishedProcessorInfo)            RequiredDemolishedInfo                                      OFFSET(get<T>, {0x1D4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_RankAchieved
/// Size: 0x0010 (0x000190 - 0x0001A0)
class FDelMarObjectiveFilter_RankAchieved : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FInt32Range)                               RequiredRank                                                OFFSET(getStruct<T>, {0x190, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_RunComplete
/// Size: 0x0038 (0x000190 - 0x0001C8)
class FDelMarObjectiveFilter_RunComplete : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FDoubleRange)                              RequiredFinishTime                                          OFFSET(getStruct<T>, {0x190, 32, 0, 0})
	SMember(FInt32Range)                               RequiredFinalPlacement                                      OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	CMember(EDelMarJellyHazardProcessorInfo)           RequiredJellyHazardInfo                                     OFFSET(get<T>, {0x1C0, 4, 0, 0})
	CMember(EDelMarDemolishedProcessorInfo)            RequiredDemolishedInfo                                      OFFSET(get<T>, {0x1C4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_RunCompleteTest
/// Size: 0x0038 (0x000190 - 0x0001C8)
class FDelMarObjectiveFilter_RunCompleteTest : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FDoubleRange)                              RequiredFinishTime                                          OFFSET(getStruct<T>, {0x190, 32, 0, 0})
	SMember(FInt32Range)                               RequiredFinalPlacement                                      OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	CMember(EDelMarJellyHazardProcessorInfo)           RequiredJellyHazardInfo                                     OFFSET(get<T>, {0x1C0, 4, 0, 0})
	CMember(EDelMarDemolishedProcessorInfo)            RequiredDemolishedInfo                                      OFFSET(get<T>, {0x1C4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_StartlineBoostActivated
/// Size: 0x0020 (0x000190 - 0x0001B0)
class FDelMarObjectiveFilter_StartlineBoostActivated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FDoubleRange)                              RequiredStartlineBoostPercent                               OFFSET(getStruct<T>, {0x190, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_UnderthrustDeactivated
/// Size: 0x0020 (0x000190 - 0x0001B0)
class FDelMarObjectiveFilter_UnderthrustDeactivated : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FDoubleRange)                              RequiredPercentUsed                                         OFFSET(getStruct<T>, {0x190, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_UnderthrustPercentUsed
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_UnderthrustPercentUsed : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_VehicleJumped
/// Size: 0x0000 (0x000190 - 0x000190)
class FDelMarObjectiveFilter_VehicleJumped : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/DelMarCore.DelMarObjectiveFilter_VehicleLanded
/// Size: 0x0020 (0x000190 - 0x0001B0)
class FDelMarObjectiveFilter_VehicleLanded : public FDelMarObjectiveFilterBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FDoubleRange)                              RequiredTimeInAir                                           OFFSET(getStruct<T>, {0x190, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarAnalyticsPlayerRaceData
/// Size: 0x0040 (0x000000 - 0x000040)
class FDelMarAnalyticsPlayerRaceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class AFortPlayerController*)              DriverPC                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarProxyMeshMaterialInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarProxyMeshMaterialInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UMaterialInstanceDynamic*>)   MaterialArray                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarMusicTrack
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarMusicTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class USoundWave*)                         StartLineIntro                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class USoundWave*)                         MainTrack                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class USoundWave*)                         MainTrack_LowSpec                                           OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     BPM                                                         OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_MusicPlaylistUpdated
/// Size: 0x001C (0x000000 - 0x00001C)
class FDelMarEvent_MusicPlaylistUpdated : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TWeakObjectPtr<USoundBase*>)               PreRaceMusic                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               PostRaceMusic                                               OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarTutorialSection
/// Size: 0x0098 (0x000000 - 0x000098)
class FDelMarTutorialSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     FinishTargetTime                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(class ADelMarStartLineActor*)              StartLine                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class ADelMarStartLineActor*)              FinishLine                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<class AActor*>)                     DisabledActors                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FGameplayTagContainer)                     InputDisabledTags                                           OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FDelMarVehicleAbilityConfig)               VehicleAbilityConfig                                        OFFSET(getStruct<T>, {0x48, 17, 0, 0})
	DMember(float)                                     StartingTurboCharges                                        OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FDelMarEvent_SetControlsText)              ControlsText                                                OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FGameplayTag)                              DialogTag                                                   OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	DMember(bool)                                      bSkipCountdown                                              OFFSET(get<bool>, {0x94, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleAbilityConfig
/// Size: 0x0011 (0x000000 - 0x000011)
class FDelMarVehicleAbilityConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 17;

public:
	DMember(bool)                                      bAirControlEnabled                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAirFreestyleEnabled                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAirThrottleEnabled                                         OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bAutoAerialRotationEnabled                                  OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bAutoUprightEnabled                                         OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bDraftingEnabled                                            OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bDriftEnabled                                               OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(bool)                                      bDriftBoostEnabled                                          OFFSET(get<bool>, {0x7, 1, 0, 0})
	DMember(bool)                                      bInfiniteUnderthrustEnabled                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bJumpEnabled                                                OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bKickflipEnabled                                            OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bOversteerEnabled                                           OFFSET(get<bool>, {0xB, 1, 0, 0})
	DMember(bool)                                      bReattachmentEnabled                                        OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bStartlineBoostEnabled                                      OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      bStrafeEnabled                                              OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(bool)                                      bTurboEnabled                                               OFFSET(get<bool>, {0xF, 1, 0, 0})
	DMember(bool)                                      bUnderthrustEnabled                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEvent_TutorialSectionChanged
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FDelMarEvent_TutorialSectionChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FDelMarTutorialSection)                    CurrentSection                                              OFFSET(getStruct<T>, {0x0, 152, 0, 0})
	DMember(int32_t)                                   CurrentSectionIndex                                         OFFSET(get<int32_t>, {0x98, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarScaledCurve
/// Size: 0x0090 (0x000000 - 0x000090)
class FDelMarScaledCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        Curve                                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarHintText
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarHintText : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     KBMText                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     GamepadText                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FText)                                     TouchText                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleSuspensionConfig
/// Size: 0x0014 (0x000000 - 0x000014)
class FDelMarVehicleSuspensionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     MaxRaise                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxDrop                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DampingCompression                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DampingRelaxation                                           OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleAxleConfig
/// Size: 0x002C (0x000000 - 0x00002C)
class FDelMarVehicleAxleConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     TranslateX                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TranslateY                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TranslateZ                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WheelRadius                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     VehicleHitboxHeight                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     RestDistanceZ                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FDelMarVehicleSuspensionConfig)            Suspension                                                  OFFSET(getStruct<T>, {0x18, 20, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarCameraFloatProperty
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FDelMarCameraFloatProperty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bEvaluateInputOnCurve                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAccumulateInput                                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        Curve                                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	DMember(float)                                     InterpLambda                                                OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     DecayLambda                                                 OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FFloatRange)                               ClampedRange                                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarCameraFloatBlendedProperty
/// Size: 0x01D0 (0x000000 - 0x0001D0)
class FDelMarCameraFloatBlendedProperty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(bool)                                      bEvaluateInputOnCurve                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        InputCurve                                                  OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	DMember(float)                                     ActiveValue                                                 OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bRemapOutputValue                                           OFFSET(get<bool>, {0x94, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        RemapCurve                                                  OFFSET(getStruct<T>, {0x98, 136, 0, 0})
	DMember(float)                                     BlendInLambda                                               OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     BlendOutLambda                                              OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bUseBlendOutCurve                                           OFFSET(get<bool>, {0x128, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        BlendOutLambdaCurve                                         OFFSET(getStruct<T>, {0x130, 136, 0, 0})
	DMember(float)                                     Tolerance                                                   OFFSET(get<float>, {0x1B8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplay_FrameData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FDelMarVehicleReplay_FrameData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(int32_t)                                   FrameCaptureIndex                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(double)                                    SecondsSinceCountdownFinished                               OFFSET(get<double>, {0x8, 8, 0, 0})
	SMember(FDelMarVehicleReplay_InputState_RL)        Input                                                       OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FDelMarVehicleReplay_InputState_DM)        Input_DM                                                    OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FDelMarVehicleReplay_RigidBodyState)       PreSimRBState                                               OFFSET(getStruct<T>, {0x40, 112, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplay_RigidBodyState
/// Size: 0x0070 (0x000000 - 0x000070)
class FDelMarVehicleReplay_RigidBodyState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplay_InputState_DM
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleReplay_InputState_DM : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     AerialPitch                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bDrift                                                      OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bGroundedFlip                                               OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bKickflip                                                   OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(bool)                                      bShunt                                                      OFFSET(get<bool>, {0x7, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplay_InputState_RL
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarVehicleReplay_InputState_RL : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Throttle                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Steer                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     pitch                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DodgeForward                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     DodgeRight                                                  OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bHandbrake                                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bJump                                                       OFFSET(get<bool>, {0x1D, 1, 0, 0})
	DMember(bool)                                      bBoost                                                      OFFSET(get<bool>, {0x1E, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleCachedContact
/// Size: 0x0070 (0x000000 - 0x000070)
class FDelMarVehicleCachedContact : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Impulse                                                     OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   DeltaVelocity                                               OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bVehicleContact                                             OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bDriveableContact                                           OFFSET(get<bool>, {0x61, 1, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   OFFSET(get<T>, {0x64, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarWorldBonusSpeedStack
/// Size: 0x0028 (0x000000 - 0x000028)
class FDelMarWorldBonusSpeedStack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              Source                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     BonusSpeed                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bApplyForce                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   GroupId                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ActorSource                                                 OFFSET(get<T>, {0x14, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarWorldBonusSpeedGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarWorldBonusSpeedGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/DelMarCore.DelMarVehicleLandingData
/// Size: 0x000C (0x000000 - 0x00000C)
class FDelMarVehicleLandingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/DelMarCore.DelMarVehicleSkydivingData
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleSkydivingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/DelMarCore.DelMarStartlineBoostData
/// Size: 0x0014 (0x000000 - 0x000014)
class FDelMarStartlineBoostData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bFailed                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     ReactionSeconds                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RunStartTime                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     IntervalSeconds                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     EarnedPotential                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarKickflipSimulationResult
/// Size: 0x0120 (0x000000 - 0x000120)
class FDelMarKickflipSimulationResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FHitResult)                                Hit                                                         OFFSET(getStruct<T>, {0x0, 240, 0, 0})
	SMember(FQuat)                                     VehicleLandingRotation                                      OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	DMember(bool)                                      bValidLandingRotation                                       OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bDriveableSurfaceHit                                        OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(float)                                     SuctionVelocityUsed                                         OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     ElapsedTime                                                 OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     DistanceTravelled                                           OFFSET(get<float>, {0x11C, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Ability
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleReplicatedState_Ability : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bActive                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_BonusSpeedAbility
/// Size: 0x0004 (0x000008 - 0x00000C)
class FDelMarVehicleReplicatedState_BonusSpeedAbility : public FDelMarVehicleReplicatedState_Ability
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     AppliedBonusSpeed                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_AutoUpright
/// Size: 0x0018 (0x000008 - 0x000020)
class FDelMarVehicleReplicatedState_AutoUpright : public FDelMarVehicleReplicatedState_Ability
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector_NetQuantizeNormal)                 TargetVehicleUp                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Drafting
/// Size: 0x000C (0x00000C - 0x000018)
class FDelMarVehicleReplicatedState_Drafting : public FDelMarVehicleReplicatedState_BonusSpeedAbility
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     AccumulatedLosingSpeedSeconds                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AccumulatedStartDraftingSeconds                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TotalEarnedBonusSpeed                                       OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Drift
/// Size: 0x0028 (0x000008 - 0x000030)
class FDelMarVehicleReplicatedState_Drift : public FDelMarVehicleReplicatedState_Ability
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     CurrentRotationAngle                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EDelMarVehicleDriftState)                  DriftState                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     TargetDriftSide                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FVector_NetQuantize100)                    InitialImpulseTorque                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_DriftBoost
/// Size: 0x0014 (0x00000C - 0x000020)
class FDelMarVehicleReplicatedState_DriftBoost : public FDelMarVehicleReplicatedState_BonusSpeedAbility
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     AccumulatedDriftBoostSeconds                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AccumulatedWaitingPeriodSeconds                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TotalEarnedBonusSpeed                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     QueuedBonusSpeed                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     QueuedBoostExtraSeconds                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Drive
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarVehicleReplicatedState_Drive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     BaseTargetSpeed                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bInvertedSteeringActive                                     OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   bDisableDriveForces                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   bDisableWheelFriction                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 LastAverageWheelWorldContactNormal                          OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     MinimumLandingSpeed                                         OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Kickflip
/// Size: 0x0058 (0x000008 - 0x000060)
class FDelMarVehicleReplicatedState_Kickflip : public FDelMarVehicleReplicatedState_Ability
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector_NetQuantizeNormal)                 RelativeUpDirection                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 KickDirection                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bLeftSide                                                   OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bTakeLongestRoll                                            OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      bRotateTowardsVelocity                                      OFFSET(get<bool>, {0x3A, 1, 0, 0})
	DMember(bool)                                      bCanStartLongRoll                                           OFFSET(get<bool>, {0x3B, 1, 0, 0})
	DMember(int32_t)                                   StartingRollSign                                            OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     KickflipKeybindPressTime                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   ActivationCharges                                           OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 StartingPrimaryDirection                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Oversteer
/// Size: 0x0004 (0x000000 - 0x000004)
class FDelMarVehicleReplicatedState_Oversteer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     AccumulatedSteer                                            OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Reattachment
/// Size: 0x0020 (0x000008 - 0x000028)
class FDelMarVehicleReplicatedState_Reattachment : public FDelMarVehicleReplicatedState_Ability
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector_NetQuantizeNormal)                 AttachmentDirection                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bCanActivate                                                OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Rubberbanding
/// Size: 0x0004 (0x000000 - 0x000004)
class FDelMarVehicleReplicatedState_Rubberbanding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     AppliedBonusSpeed                                           OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_StartlineBoost
/// Size: 0x0008 (0x00000C - 0x000014)
class FDelMarVehicleReplicatedState_StartlineBoost : public FDelMarVehicleReplicatedState_BonusSpeedAbility
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     PercentageMaxBonusSpeedEarned                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bFailedAttempt                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Turbo
/// Size: 0x000C (0x00000C - 0x000018)
class FDelMarVehicleReplicatedState_Turbo : public FDelMarVehicleReplicatedState_BonusSpeedAbility
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   LastBonusZoneInteractionIndex                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bSuccessfulBonusZone                                        OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     AdditionalActiveSeconds                                     OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Underthrust
/// Size: 0x0004 (0x000008 - 0x00000C)
class FDelMarVehicleReplicatedState_Underthrust : public FDelMarVehicleReplicatedState_Ability
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     RemainingThrustSeconds                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_Strafe
/// Size: 0x0008 (0x000008 - 0x000010)
class FDelMarVehicleReplicatedState_Strafe : public FDelMarVehicleReplicatedState_Ability
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bLeftSide                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     StrafeKeybindPressTime                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState_AirControl
/// Size: 0x0004 (0x000008 - 0x00000C)
class FDelMarVehicleReplicatedState_AirControl : public FDelMarVehicleReplicatedState_Ability
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     AerialDivingBonusSpeed                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarInputBufferData
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarInputBufferData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/DelMarCore.DelMarVehicleInContinuous
/// Size: 0x0000 (0x000040 - 0x000040)
class FDelMarVehicleInContinuous : public FFortAthenaVehicleInputState
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/DelMarCore.DelMarVehicleReplicatedState
/// Size: 0x0290 (0x000000 - 0x000290)
class FDelMarVehicleReplicatedState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	DMember(int32_t)                                   FrameNum                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FDelMarVehicleInContinuous)                Input                                                       OFFSET(getStruct<T>, {0x8, 64, 0, 0})
	SMember(FRigidBodyState)                           RBState                                                     OFFSET(getStruct<T>, {0x50, 128, 0, 0})
	SMember(FDelMarVehicleReplicatedState_AutoUpright) AutoUpright                                                 OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Drafting)    Drafting                                                    OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Drift)       Drift                                                       OFFSET(getStruct<T>, {0x108, 48, 0, 0})
	SMember(FDelMarVehicleReplicatedState_DriftBoost)  DriftBoost                                                  OFFSET(getStruct<T>, {0x138, 32, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Drive)       Drive                                                       OFFSET(getStruct<T>, {0x158, 48, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Ability)     Jump                                                        OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Kickflip)    Kickflip                                                    OFFSET(getStruct<T>, {0x190, 96, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Oversteer)   Oversteer                                                   OFFSET(getStruct<T>, {0x1F0, 4, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Reattachment) Reattachment                                               OFFSET(getStruct<T>, {0x1F8, 40, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Rubberbanding) Rubberbanding                                             OFFSET(getStruct<T>, {0x220, 4, 0, 0})
	SMember(FDelMarVehicleReplicatedState_StartlineBoost) StartlineBoost                                           OFFSET(getStruct<T>, {0x224, 20, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Strafe)      Strafe                                                      OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Turbo)       Turbo                                                       OFFSET(getStruct<T>, {0x248, 24, 0, 0})
	SMember(FDelMarVehicleReplicatedState_Underthrust) Underthrust                                                 OFFSET(getStruct<T>, {0x260, 12, 0, 0})
	SMember(FDelMarVehicleReplicatedState_AirControl)  AirControl                                                  OFFSET(getStruct<T>, {0x26C, 12, 0, 0})
	SMember(FDelMarInputBufferData)                    BufferData                                                  OFFSET(getStruct<T>, {0x278, 24, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleInPersistent
/// Size: 0x08A0 (0x0001A0 - 0x000A40)
class FDelMarVehicleInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2624;

public:
};

/// Struct /Script/DelMarCore.DelMarVehicleInternalPersistent
/// Size: 0x0A40 (0x0000E0 - 0x000B20)
class FDelMarVehicleInternalPersistent : public FFortVehicleInternalPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
};

/// Struct /Script/DelMarCore.DelMarVehicleOutContinuous
/// Size: 0x0160 (0x000050 - 0x0001B0)
class FDelMarVehicleOutContinuous : public FFortVehicleOutContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Struct /Script/DelMarCore.DelMarVehicleOutPersistent
/// Size: 0x0A18 (0x000028 - 0x000A40)
class FDelMarVehicleOutPersistent : public FFortVehicleOutPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2624;

public:
};

/// Struct /Script/DelMarCore.DelMarVehicleNetworkInput
/// Size: 0x0048 (0x000000 - 0x000048)
class FDelMarVehicleNetworkInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   FrameNum                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FDelMarVehicleInContinuous)                Input                                                       OFFSET(getStruct<T>, {0x8, 64, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarVehicleSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bFirstVehicleForPlayer                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bPreviousVehicleDemolished                                  OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(double)                                    ServerSpawnTime                                             OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessageBase
/// Size: 0x00C0 (0x000078 - 0x000138)
class FDelMarVerbMessageBase : public FVerbMessage
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FSubjectTagsPair)                          LevelDescriptionId                                          OFFSET(getStruct<T>, {0x78, 56, 0, 0})
	SMember(FSubjectTagsPair)                          GameModeId                                                  OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
	SMember(FSubjectTagsPair)                          VehicleTags                                                 OFFSET(getStruct<T>, {0xE8, 56, 0, 0})
	CMember(EDelMarPlaylistTypeInfo)                   RankedPlaylistInfo                                          OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(TArray<FFortVerb_ObjectWrapper>)           Cosmetics                                                   OFFSET(get<T>, {0x128, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_BeatPlayers
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_BeatPlayers : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(char)                                      AmountOfPlayersBeat                                         OFFSET(get<char>, {0x138, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_BonusTurboActivated
/// Size: 0x0000 (0x000138 - 0x000138)
class FDelMarVerbMessage_BonusTurboActivated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_BoostPadBonusSpeedEnded
/// Size: 0x0000 (0x000138 - 0x000138)
class FDelMarVerbMessage_BoostPadBonusSpeedEnded : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_BoostPadHit
/// Size: 0x0000 (0x000138 - 0x000138)
class FDelMarVerbMessage_BoostPadHit : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DistanceTraveled
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_DistanceTraveled : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     TotalDistance                                               OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DraftActivated
/// Size: 0x0000 (0x000138 - 0x000138)
class FDelMarVerbMessage_DraftActivated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DriftBoostActivated
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_DriftBoostActivated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     DriftBoostPercent                                           OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DriftBoostDeactivated
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_DriftBoostDeactivated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     TotalDistance                                               OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_DriftComplete
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_DriftComplete : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     DriftDuration                                               OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_HighestSpeedUpdated
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_HighestSpeedUpdated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     HighestSpeed                                                OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_InitialTurboActivated
/// Size: 0x0000 (0x000138 - 0x000138)
class FDelMarVerbMessage_InitialTurboActivated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_Kickflipped
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_Kickflipped : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(EDelMarKickflipDirection)                  Direction                                                   OFFSET(get<T>, {0x138, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_LapComplete
/// Size: 0x0010 (0x000138 - 0x000148)
class FDelMarVerbMessage_LapComplete : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(double)                                    LapCompleteTime                                             OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(char)                                      LapCount                                                    OFFSET(get<char>, {0x140, 1, 0, 0})
	DMember(char)                                      LapPlacement                                                OFFSET(get<char>, {0x141, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_PlacementUpdated
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_PlacementUpdated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(char)                                      CurrentPosition                                             OFFSET(get<char>, {0x138, 1, 0, 0})
	CMember(EDelMarPositionChangeInfo)                 PositionChangeInfo                                          OFFSET(get<T>, {0x139, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_PlayedDelMarExperience
/// Size: 0x0000 (0x000138 - 0x000138)
class FDelMarVerbMessage_PlayedDelMarExperience : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_RaceFinished
/// Size: 0x0018 (0x000138 - 0x000150)
class FDelMarVerbMessage_RaceFinished : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(double)                                    FinishTime                                                  OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(char)                                      FinalPlacement                                              OFFSET(get<char>, {0x140, 1, 0, 0})
	DMember(char)                                      PlayerRank                                                  OFFSET(get<char>, {0x141, 1, 0, 0})
	CMember(EDelMarJellyHazardProcessorInfo)           JellyHazardInfo                                             OFFSET(get<T>, {0x144, 4, 0, 0})
	CMember(EDelMarDemolishedProcessorInfo)            DemolishedInfo                                              OFFSET(get<T>, {0x148, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_RankAchieved
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_RankAchieved : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(int32_t)                                   RankAchieved                                                OFFSET(get<int32_t>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_RunComplete
/// Size: 0x0018 (0x000138 - 0x000150)
class FDelMarVerbMessage_RunComplete : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(double)                                    FinishTime                                                  OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(char)                                      FinalPlacement                                              OFFSET(get<char>, {0x140, 1, 0, 0})
	CMember(EDelMarJellyHazardProcessorInfo)           JellyHazardInfo                                             OFFSET(get<T>, {0x144, 4, 0, 0})
	CMember(EDelMarDemolishedProcessorInfo)            DemolishedInfo                                              OFFSET(get<T>, {0x148, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_RunCompleteTest
/// Size: 0x0018 (0x000138 - 0x000150)
class FDelMarVerbMessage_RunCompleteTest : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(double)                                    FinishTime                                                  OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(char)                                      FinalPlacement                                              OFFSET(get<char>, {0x140, 1, 0, 0})
	CMember(EDelMarJellyHazardProcessorInfo)           JellyHazardInfo                                             OFFSET(get<T>, {0x144, 4, 0, 0})
	CMember(EDelMarDemolishedProcessorInfo)            DemolishedInfo                                              OFFSET(get<T>, {0x148, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_StartlineBoostActivated
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_StartlineBoostActivated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     StartLineBoostPercent                                       OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_UnderthrustDeactivated
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_UnderthrustDeactivated : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     PercentUsed                                                 OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_UnderthrustPercentUsed
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_UnderthrustPercentUsed : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     PercentUsed                                                 OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_VehicleJumped
/// Size: 0x0000 (0x000138 - 0x000138)
class FDelMarVerbMessage_VehicleJumped : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/DelMarCore.DelMarVerbMessage_VehicleLanded
/// Size: 0x0008 (0x000138 - 0x000140)
class FDelMarVerbMessage_VehicleLanded : public FDelMarVerbMessageBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     TimeInAir                                                   OFFSET(get<float>, {0x138, 4, 0, 0})
};

/// Struct /Script/DelMarCore.AudioMixModifier
/// Size: 0x0098 (0x000000 - 0x000098)
class FAudioMixModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EMixModifierTarget)                        Target                                                      OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        Curve                                                       OFFSET(getStruct<T>, {0x10, 136, 0, 0})
};

/// Struct /Script/DelMarCore.AudioMixModifierGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FAudioMixModifierGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FAudioMixModifier>)                 Modifiers                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarRankedInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarRankedInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   RankType                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   CurrentRank                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarCore.CheckpointTrackDistance
/// Size: 0x0018 (0x000000 - 0x000018)
class FCheckpointTrackDistance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class ADelMarTrack*)                       Track                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PrimaryDistance                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LocalDistance                                               OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarTerrainData
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarTerrainData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     MaxForwardSpeedPercentage                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AccelerationMultiplier                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DecelerationMultiplier                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SteerMultiplier                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SlipMultiplier                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TargetSpeedPenalty                                          OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleCameraSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FDelMarVehicleCameraSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     FOV                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     pitch                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SwivelSpeed                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     TransitionSpeed                                             OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarEliminationMMRCountPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarEliminationMMRCountPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   MaxMmr                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PlayersToEliminate                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarTimeDelayedState
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarTimeDelayedState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     duration                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarReplicatedLoadout
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarReplicatedLoadout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UDelMarCosmeticItemDefinition*>) Items                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarLoadout
/// Size: 0x0050 (0x000000 - 0x000050)
class FDelMarLoadout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGameplayTag, UDelMarCosmeticItemDefinition*>) Items                                              OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarLeaderboardConfig
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarLeaderboardConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EventId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   WindowId                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/DelMarCore.PhysicalMaterialAttributes_X
/// Size: 0x0010 (0x000000 - 0x000010)
class FPhysicalMaterialAttributes_X : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<class UDelMarPhysMatAttribute*>)    Attributes                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarNetworkInputPacket
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarNetworkInputPacket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/DelMarCore.DelMarMapStatus
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarMapStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UDelMarLevelDataAsset*)              MapAsset                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bHasBeenPlayed                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarMapSet
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarMapSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bShouldConsiderValid                                        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bPlayLevelsRandomly                                         OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bShouldRepeat                                               OFFSET(get<bool>, {0x2, 1, 0, 0})
	CMember(TArray<FDelMarMapStatus>)                  Levels                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarDeathRaceConfig
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarDeathRaceConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<int32_t>)                           PlacementPointsMap                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ScoreThresholdToEndMatch                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarPositionValue
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarPositionValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/DelMarCore.DelMarFinalRacePositionEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarFinalRacePositionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AFortPlayerState*>)         PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    RunTime                                                     OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleRuntimeConfig
/// Size: 0x0014 (0x000000 - 0x000014)
class FDelMarVehicleRuntimeConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bCollisionDemosEnabled                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bDemolishActionEnabled                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     RequiredDemolishActionDuration                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIdleDisablesVehicleCollision                               OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     SecondsToSetIdle                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EDelMarVehicleCollisionOverrideSetting)    VehicleCollisionsGlobalOverride                             OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bApplyOverlapFilter                                         OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarRespawnConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarRespawnConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EDelMarRaceSpawnMode)                      SpawnMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseTracesToDetermineRespawn                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bRespawnInvulnerabilityEnabled                              OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(float)                                     RespawnInvulnerabilitySeconds                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bRespawnCollisionProtectionEnabled                          OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     RespawnCollisionProtectionSeconds                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarRubberbandingConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FDelMarRubberbandingConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bRubberbandingEnabled                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinPackDistance                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxPackDistance                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PackDistanceOffset                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinDistanceFromPack                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxDistanceFromPack                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumPlayersForPackDistance                                   OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxPackDistanceGainedPerSecond                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MaxPackDistanceLostPerSecond                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxBonusSpeedScalar                                         OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarRubberbandingMMRConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarRubberbandingMMRConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     MinMmr                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxMmr                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FDelMarRubberbandingConfig)                RubberbandingConfig                                         OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarMatchmakingConfig
/// Size: 0x0014 (0x000000 - 0x000014)
class FDelMarMatchmakingConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     MaxLoadWaitSeconds                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LoadWaitBufferSeconds                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MatchStartDelaySeconds                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bMatchInProgressBackFillEnabled                             OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     MinSecondsRemainingForBackfill                              OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarRandomRange
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarRandomRange : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarStartlineConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FDelMarStartlineConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bEnableDynamicStartline                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     InitialCountdownDelayTime                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RequestCountdownDelayTime                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DefaultIntervalSeconds                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(TArray<FDelMarRandomRange>)                IntervalRanges                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   CountdownIntervalNum                                        OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarStateOverride
/// Size: 0x0028 (0x000000 - 0x000028)
class FDelMarStateOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              StateTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   StateClass                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarStateMachineConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FDelMarStateMachineConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FDelMarStateOverride>)              StateOverrides                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarDynamicCameraShakeEffect
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FDelMarDynamicCameraShakeEffect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UClass*)                             CameraShakeClass                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UCameraShakeBase*>)         CameraShakeInstance                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        ShakeIntensityCurve                                         OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	DMember(float)                                     CurrentShakeIntensity                                       OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarThrottledValue
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarThrottledValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     RiseRate                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FallRate                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleLandingLevel
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleLandingLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MinForce                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SpeedChange                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarTurboBonusZone
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarTurboBonusZone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     ZoneStartTime                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ZoneEndTime                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarWorldBonusSpeedSourceCap
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarWorldBonusSpeedSourceCap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              Source                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   StackCap                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleRigidBodyConfig
/// Size: 0x0040 (0x000000 - 0x000040)
class FDelMarVehicleRigidBodyConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bApplyGlobalBodySettings                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     LinearDamping                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AngularDamping                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     VehicleMass                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bNotifyRigidBodyCollisions                                  OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bSmoothEdgeCollisionsEnabled                                OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bUseCCD                                                     OFFSET(get<bool>, {0x12, 1, 0, 0})
	SMember(FVector)                                   CenterOfMassOffset                                          OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bSuspensionIgnoresBodyCollision                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     MaxLinearSpeed                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxAngularSpeed                                             OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleDriveSetup
/// Size: 0x0360 (0x000000 - 0x000360)
class FDelMarVehicleDriveSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	DMember(float)                                     MaxBaseForwardSpeed                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        DriveAccel                                                  OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        TargetSpeedMaxAccelCurve                                    OFFSET(getStruct<T>, {0x98, 144, 0, 0})
	DMember(float)                                     TargetSpeedAerialFriction                                   OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(bool)                                      bAllowBrakingInAir                                          OFFSET(get<bool>, {0x12C, 1, 0, 0})
	DMember(float)                                     BrakeAccel                                                  OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     StopSpeed                                                   OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     IdleBrakeFactor                                             OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     MaxSpeedToResetTargetSpeedDirection                         OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SteerAngleCurve                                             OFFSET(getStruct<T>, {0x140, 136, 0, 0})
	CMember(TArray<FRuntimeFloatCurve>)                SteerAngleCurveOverrides                                    OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FDelMarScaledCurve)                        LatFrictionCurve                                            OFFSET(getStruct<T>, {0x1D8, 144, 0, 0})
	SMember(FRuntimeFloatCurve)                        WheelsGroundedFrictionCurve                                 OFFSET(getStruct<T>, {0x268, 136, 0, 0})
	DMember(float)                                     MaxForwardSpeedToIgnoreLandingSpeed                         OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     MaxKickflipLandingSeconds                                   OFFSET(get<float>, {0x2F4, 4, 0, 0})
	DMember(float)                                     MinSlipAngle                                                OFFSET(get<float>, {0x2F8, 4, 0, 0})
	DMember(float)                                     SkydiveVerticalVelocitySensitivity                          OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     SkydiveVerticalPitchSensitivity                             OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     StableSpeedMinGroundedTime                                  OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     MinInAirTimeStableLanding                                   OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(int32_t)                                   NumWheelsForActivelyLanding                                 OFFSET(get<int32_t>, {0x30C, 4, 0, 0})
	DMember(float)                                     MinAerialSpeedForPrimaryDirection                           OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     ForwardMaxSpeed                                             OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     UpwardMaxLandingSpeed                                       OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     UpwardMaxSpeed                                              OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     MaxLandingAngularVelocity                                   OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     MinCeilingDegrees                                           OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     MaxCeilingDegrees                                           OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(float)                                     AerialCeilingDegrees                                        OFFSET(get<float>, {0x32C, 4, 0, 0})
	DMember(float)                                     MaxInvertedControlSteering                                  OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(float)                                     MinCeilingSecondsToInvertControls                           OFFSET(get<float>, {0x334, 4, 0, 0})
	DMember(float)                                     WheelPushForce                                              OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     MinSpeedForVelocityDirection                                OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(float)                                     MinZSpeedForUpwardDirection                                 OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     VerticalOrientationSensitivity                              OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     MaxInactiveLandedFlipTime                                   OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(int32_t)                                   NumWheelsForWheelsOnGround                                  OFFSET(get<int32_t>, {0x34C, 4, 0, 0})
	DMember(float)                                     MaxLandingSpeedSpringVarianceDegrees                        OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(float)                                     MinDownDegreesForForwardDirection                           OFFSET(get<float>, {0x354, 4, 0, 0})
	DMember(float)                                     MaxNormalizedForwardSpeed                                   OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(float)                                     MaxNormalizedBonusSpeed                                     OFFSET(get<float>, {0x35C, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleCollisionConfig
/// Size: 0x0218 (0x000000 - 0x000218)
class FDelMarVehicleCollisionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	DMember(float)                                     MinWallAngleDegrees                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinTimeBetweenSpeedLossHits                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeedForTargetSpeedReduction                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ActiveBumpTime                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        SpeedReductionPercentageCurve                               OFFSET(getStruct<T>, {0x10, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        AerialSpeedReductionPercentageCurve                         OFFSET(getStruct<T>, {0xA0, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        WallTargetRedirectAngleDegreesCurve                         OFFSET(getStruct<T>, {0x130, 144, 0, 0})
	DMember(float)                                     WallTargetRedirectPercent                                   OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     WallTargetRedirectDriftPercent                              OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     WallDriftHeadOnThresholdDegrees                             OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     WallHeadOnDriftRedirectAngleDegrees                         OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     WallTargetRedirectHeadOnDriftPercent                        OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     DriftTargetAngleDegrees                                     OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     DrivingTargetAngleDegrees                                   OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     MinGroundedDemolitionSpeed                                  OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     MinAerialDemolitionSpeed                                    OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(float)                                     MaxGroundedDemolitionAngleDegrees                           OFFSET(get<float>, {0x1E4, 4, 0, 0})
	DMember(float)                                     MaxAerialDemolitionAngleDegrees                             OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(float)                                     ParallelCollisionThresholdDegrees                           OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     HeadOnCollisionThresholdDegrees                             OFFSET(get<float>, {0x1F0, 4, 0, 0})
	DMember(float)                                     BumperToBumperThresholdDegrees                              OFFSET(get<float>, {0x1F4, 4, 0, 0})
	DMember(float)                                     BumpToBumperSpeedPenalty                                    OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     ContactNormalToVehicleRightThresholdDegrees                 OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     TrackDirectionThresholdDegrees                              OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     TrackTraceLength                                            OFFSET(get<float>, {0x204, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TrackTraceChannel                                           OFFSET(get<T>, {0x208, 1, 0, 0})
	DMember(bool)                                      bCounterWorldHitImpulses                                    OFFSET(get<bool>, {0x209, 1, 0, 0})
	DMember(bool)                                      bCounterVehicleHitImpulses                                  OFFSET(get<bool>, {0x20A, 1, 0, 0})
	DMember(float)                                     VehicleHitImpulseScalar                                     OFFSET(get<float>, {0x20C, 4, 0, 0})
	DMember(float)                                     VehicleHitDriftImpulseScalar                                OFFSET(get<float>, {0x210, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleDriftConfig
/// Size: 0x0718 (0x000000 - 0x000718)
class FDelMarVehicleDriftConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinDirectedDriftTime                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinInAirTime                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AerialDriftNoKeybindGracePeriod                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxForcedDriftTime                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MinKickDriftActiveSeconds                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bForceSteerWhenKicking                                      OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     MinForcedSteerWhenKicking                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     KickCooldownSeconds                                         OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bActivateDriftOnStrafeEnd                                   OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bActivateDriftOnLanding                                     OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bActivateDriftOnKickflipLanding                             OFFSET(get<bool>, {0x26, 1, 0, 0})
	DMember(float)                                     ActivateExitDriftTime                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MinSteerInput                                               OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MinFullThrottleInput                                        OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MinFullSteerInput                                           OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MinFullDriftInput                                           OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ForcedDriftSteer                                            OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     InitialTorqueImpulse                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SwapDirectionImpulse                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TorqueAccelInDriftDir                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     TorqueAccelNoSteer                                          OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     TorqueAccelNotInDriftDir                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     TorqueAccelChangeDir                                        OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     TorqueAccelDampening                                        OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     TorqueAccelWithKick                                         OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     TorqueAccelWithKickV2                                       OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     TorqueAccelForcedDrift                                      OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     TorqueAgainstExit                                           OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     MaxRotationSpeedWithThrottle                                OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     MaxRotationSpeedNoThrottle                                  OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MaxRotationSpeedWithKick                                    OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     MaxRotationSpeedSwapDirections                              OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     MinDriftDegrees                                             OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     MaxDriftDegrees                                             OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     ExitDriftDegrees                                            OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     ApproachDistance                                            OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     PeakForwardSpeedDegrees                                     OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     KickRedirectRate                                            OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     KickRedirectRateV2                                          OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     ForcedDriftRedirectRate                                     OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     MinSteerRedirectInput                                       OFFSET(get<float>, {0x9C, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        NonKickRedirectRateCurve                                    OFFSET(getStruct<T>, {0xA0, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        VelocityRedirectAngleCurveControlled                        OFFSET(getStruct<T>, {0x130, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        VelocityRedirectAgainstAngleCurveControlled                 OFFSET(getStruct<T>, {0x1C0, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        VelocityRedirectAngleCurveNoSteer                           OFFSET(getStruct<T>, {0x250, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        VelocityRedirectAngleCurveUncontrolled                      OFFSET(getStruct<T>, {0x2E0, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        VelocityRedirectAngleCurveKickback                          OFFSET(getStruct<T>, {0x370, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        VelocityRedirectAngleCurveKickbackV2                        OFFSET(getStruct<T>, {0x400, 144, 0, 0})
	DMember(float)                                     PeakSpeedIncreaseDegrees                                    OFFSET(get<float>, {0x490, 4, 0, 0})
	DMember(float)                                     MaxAccelSpeed                                               OFFSET(get<float>, {0x494, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        AccelerationScalarCurve                                     OFFSET(getStruct<T>, {0x498, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        AdditionalSpeedLossNoThrottle                               OFFSET(getStruct<T>, {0x528, 144, 0, 0})
	DMember(float)                                     MaxControlledDriftRatio                                     OFFSET(get<float>, {0x5B8, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        ControlledSpeedCapBySlipAngle                               OFFSET(getStruct<T>, {0x5C0, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        ControlledSpeedCapDecelRate                                 OFFSET(getStruct<T>, {0x650, 144, 0, 0})
	DMember(float)                                     UncontrolledSpeedCap                                        OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(float)                                     UncontrolledSpeedLoss                                       OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(float)                                     ExitVelocityMaxDegrees                                      OFFSET(get<float>, {0x6E8, 4, 0, 0})
	DMember(float)                                     ExitKickEndMaxDegrees                                       OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(float)                                     ExitVelocityTorqueAccel                                     OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     ExitVelocityMaxRotationSpeed                                OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     ExitForwardMaxDegrees                                       OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     ExitForwardTorqueSteer                                      OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     ExitForwardMaxRotation                                      OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     ExitForwardTargetRedirectRate                               OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     ExitForwardRedirectRate                                     OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     MaxExitForwardLandingSpeed                                  OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(bool)                                      bEnforceThrottleForControlledDrift                          OFFSET(get<bool>, {0x710, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleDriftBoostConfig
/// Size: 0x01D8 (0x000000 - 0x0001D8)
class FDelMarVehicleDriftBoostConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(float)                                     MaxDriftBoostRatio                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxBonusSpeed                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        BonusSpeedPercentageCurve                                   OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	DMember(float)                                     WaitingPeriodSeconds                                        OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     MaxDriftBoostSeconds                                        OFFSET(get<float>, {0x9C, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        PotentialDriftBoostPercentageCurve                          OFFSET(getStruct<T>, {0xA0, 144, 0, 0})
	DMember(float)                                     MaxNumActiveBonusSpeedSeconds                               OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        DriftBoostDurationCurve                                     OFFSET(getStruct<T>, {0x138, 144, 0, 0})
	DMember(float)                                     BonusSpeedDecaySeconds                                      OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     PotentialRemovalRate                                        OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(bool)                                      bEnforceThrottleForDriftBoost                               OFFSET(get<bool>, {0x1D0, 1, 0, 0})
	DMember(float)                                     QueuedBoostImpulseScalar                                    OFFSET(get<float>, {0x1D4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleDraftingConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarVehicleDraftingConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     TraceDistance                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinEligibleDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxHorizontalDegreesToDraftTarget                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxVerticalDegreesToDraftTarget                             OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            LineOfSightChannel                                          OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     MinSpeedToStartDrafting                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     NumSecondsToActivateDrafting                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     NumForgivenessSeconds                                       OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     NumGracePeriodSeconds                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     NumSecondsToMaxBonusSpeed                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MaxBonusSpeed                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     NumSpeedRemovalSeconds                                      OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleOversteerConfig
/// Size: 0x0138 (0x000000 - 0x000138)
class FDelMarVehicleOversteerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     MinInput                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxAccumulatedSteer                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        CappedAccumulatedSteerCurve                                 OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        AccumulatedSteerRateCurve                                   OFFSET(getStruct<T>, {0x98, 144, 0, 0})
	DMember(float)                                     AccumulatedSteerDecayRate                                   OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     DriftImpulseForce                                           OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(bool)                                      bDecayAccumulatedSteer                                      OFFSET(get<bool>, {0x134, 1, 0, 0})
	DMember(bool)                                      bClearAccumulatedSteerOnDrift                               OFFSET(get<bool>, {0x135, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Terrain
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarVehicleConfig_Terrain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     TargetSpeedPenaltyCooldownSeconds                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumWheelsTargetSpeedPenalty                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     NoGripBrakeFactorWithThrottle                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedPercentage                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bDemolishInWater                                            OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     MaxWaterDepth                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     WaterDestructionDelay                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TArray<class UClass*>)                     NonDriveableActorClasses                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleTurboConfig
/// Size: 0x0070 (0x000000 - 0x000070)
class FDelMarVehicleTurboConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     MaxActiveTimeSeconds                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CooldownSeconds                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     InitialImpulseForce                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinBaseTargetSpeed                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FDelMarFloatModifier)                      TargetSpeedModifier                                         OFFSET(getStruct<T>, {0x10, 20, 0, 0})
	CMember(TArray<FDelMarTurboBonusZone>)             BonusZones                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     BonusZoneImpulseForce                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BonusZoneSpeedDecaySeconds                                  OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SuccessfulBonusZoneHitSeconds                               OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     ApproachingBonusZoneSeconds                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaxMissingZoneSeconds                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaxNumCharges                                               OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     ChargeRegenRateSeconds                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     RaceStartCharges                                            OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     LapCompleteCharges                                          OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     TurboGainedForDriftBoostPotential                           OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     TurboGainedPerSecondAtMaxDriftPotential                     OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MaxTurboChargesFromDrift                                    OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bTerrainInvulnerabilityDuringTurbo                          OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Rubberbanding
/// Size: 0x01B8 (0x000000 - 0x0001B8)
class FDelMarVehicleConfig_Rubberbanding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxBonusSpeedLostPerSecond                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        MaxBonusSpeedGainedPerSecond                                OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        MaxBonusSpeed                                               OFFSET(getStruct<T>, {0x98, 144, 0, 0})
	SMember(FDelMarScaledCurve)                        MaxSpeed                                                    OFFSET(getStruct<T>, {0x128, 144, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_StartlineBoost
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FDelMarVehicleConfig_StartlineBoost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     MaxBonusSpeed                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        PercentageMaxBonusSpeedEarned                               OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	DMember(float)                                     BoostGainSeconds                                            OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     BoostDurationSeconds                                        OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bEnforceForwardThrottle                                     OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Strafe
/// Size: 0x001C (0x000000 - 0x00001C)
class FDelMarVehicleConfig_Strafe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     InitialVelocityForce                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bVelocityRelative                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     MinSteerInput                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     KeybindPressLandedBufferSeconds                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxActiveSeconds                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     RaceStartCooldownSeconds                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CooldownSeconds                                             OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Underthrust
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FDelMarVehicleConfig_Underthrust : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     UpwardAccel                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForwardAccel                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxUpwardSpeed                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxForwardSpeed                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     EndThrustForce                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     StartingTankPercentage                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxThrustSeconds                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ForwardSpeedCap                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MaxSpeedReduction                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     SpeedCapSecondsBuffer                                       OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MinJumpActiveSecondsBeforeActivating                        OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        FallingUpsideDownThrustDampeningPercentage                  OFFSET(getStruct<T>, {0x30, 144, 0, 0})
	DMember(bool)                                      bVehicleRelativeWithFreestyle                               OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(float)                                     MinUpwardAccel                                              OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     LateralRelativeAccel                                        OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bReplenishTankOnLanding                                     OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bReplenishTankOverTime                                      OFFSET(get<bool>, {0xCD, 1, 0, 0})
	DMember(float)                                     TankReplenishDelaySeconds                                   OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     TankReplenishRatePerSecond                                  OFFSET(get<float>, {0xD4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AirControl
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FDelMarVehicleConfig_AirControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     MaxPitchAdjustmentForwardSpeed                              OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        LateralTurnRateCurve                                        OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	DMember(float)                                     UnderthrustTurnRate                                         OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(bool)                                      bAllowRedirectDuringKickflip                                OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(bool)                                      bAllowVerticalRedirectDuringVerticalKickflip                OFFSET(get<bool>, {0x9D, 1, 0, 0})
	DMember(float)                                     LateralKickflipScalar                                       OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     VerticalTurnRate                                            OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     VerticalTurnRateAboveHorizon                                OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     MinSteerInput                                               OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     MinPitchVerticalDegreesFromWorldDown                        OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     MaxPitchVerticalDegreesFromWorldDown                        OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bAerialDivingBonusEnabled                                   OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(float)                                     MinPitchForAerialDivingBonus                                OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     MaxAerialDivingBonusSpeed                                   OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MinAerialDivingBonusSpeed                                   OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     AerialDivingBonusSpeedChangeRate                            OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     AerialDivingBonusSpeedDecayRate                             OFFSET(get<float>, {0xCC, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AirFreestyle
/// Size: 0x0030 (0x000000 - 0x000030)
class FDelMarVehicleConfig_AirFreestyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   TorqueAccel                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   TorqueDamping                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AirThrottle
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FDelMarVehicleConfig_AirThrottle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FDelMarScaledCurve)                        AccelerationScalarCurve                                     OFFSET(getStruct<T>, {0x0, 144, 0, 0})
	DMember(float)                                     AerialSpeedCap                                              OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     OverCapSpeedLossPerSecond                                   OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     AerialSlowdownImmunitySeconds                               OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(bool)                                      bApplyNoThrottleSlowdown                                    OFFSET(get<bool>, {0x9C, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AutoAerialRotation
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FDelMarVehicleConfig_AutoAerialRotation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVector)                                   StabilizationDampingFactor                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   StabilizationFactor                                         OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     MaxUpsideDownDegreesForForcedRoll                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     IdleRotationThreshold                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     UpsideDownRollTorque                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UpsideDownRollDamping                                       OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MinRollInput                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SteerRollOffsetDegrees                                      OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MinPitchInput                                               OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaxUserPitchOffsetDegrees                                   OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LateralPitchOffsetDegrees                                   OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     UnderthrustPitchDegrees                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     MinThrottleInput                                            OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MaxUserThrottleOffsetDegrees                                OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     YawTorque                                                   OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FVector)                                   MaxRotationSpeed                                            OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(float)                                     MinApproachTargetScalar                                     OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedForYawRotation                               OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     MinSteerInputForForwardStateTurning                         OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     ForwardStateTurnRate                                        OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      bLandingAssistanceEnabled                                   OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            LandingCollisionChannel                                     OFFSET(get<T>, {0x91, 1, 0, 0})
	DMember(float)                                     LandingDetectionSeconds                                     OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     MinLandingDetectionDistance                                 OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     LandingSurfaceNormalMaxDegrees                              OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     LandingRotationAmplifier                                    OFFSET(get<float>, {0xA0, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_AutoUpright
/// Size: 0x0024 (0x000000 - 0x000024)
class FDelMarVehicleConfig_AutoUpright : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     RotationTorque                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RotationDamping                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinActiveSeconds                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinActiveSecondsGrounded                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WheelsOnGroundChangedDelaySeconds                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bClearAngularVelocity                                       OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     MinDegreesFromVehicleUpThreshold                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MinThrottleForWheelRotation                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bAllowActiveStateOnGround                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Jump
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarVehicleConfig_Jump : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     MinJumpTime                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxJumpTime                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     JumpVelocity                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ForwardVelocity                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PitchTorque                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     EndThrustForce                                              OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Kickflip
/// Size: 0x0158 (0x000000 - 0x000158)
class FDelMarVehicleConfig_Kickflip : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     DirectionalSensitivity                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SecondaryDirectionalSensitivity                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bAllowDiagonalKickDirection                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   NumWheelsForLanding                                         OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   NumActivationCharges                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bResetChargesOnLanding                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     MinActiveSecondsToReactivate                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MinActiveTime                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MaxActiveLateralTime                                        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxActiveUpwardTime                                         OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MaxActiveDownwardTime                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     CooldownSeconds                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bAllowGroundedKickflips                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     GroundedKickflipForce                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     LateralVelocity                                             OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        LateralVelocityScalarCurve                                  OFFSET(getStruct<T>, {0x40, 144, 0, 0})
	DMember(float)                                     MinForwardSpeedForLateralScalar                             OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     MaxLateralVelocityCancelled                                 OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     UpwardVerticalVelocity                                      OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     DownwardVerticalVelocity                                    OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     LateralVerticalForce                                        OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     RotationDamping                                             OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     RotationTorque                                              OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     RotationTorqueIncomingCollision                             OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     MinSpeedToRotateYaw                                         OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     MaxVerticalYawLandingDegrees                                OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     MaxLateralYawLandingDegrees                                 OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     MaxVerticalNormalLandingDegrees                             OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     MaxLateralNormalLandingDegrees                              OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MinLongRollTimeCheck                                        OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     MinLongRollTimeCheckDownwardKick                            OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MaxLongRollDegrees                                          OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     MinDegreesToCompleteRoll                                    OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     FastTorqueDistanceCheck                                     OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(bool)                                      bUseStartingDirectionWhenLanding                            OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(int32_t)                                   PredictionTickInterval                                      OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	DMember(float)                                     MaxSimulationRedirectSeconds                                OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     MaxSimulationDistanceLateral                                OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     MaxSimulationDistanceUpward                                 OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     MaxSimulationDistanceDownward                               OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bApplySuctionToSurfaces                                     OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(float)                                     SuctionVelocity                                             OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     MaxSuctionPerSecond                                         OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     SuctionDistanceCheck                                        OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     MaxAdditionalVelocitySuctionDistance                        OFFSET(get<float>, {0x140, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            SuctionChannel                                              OFFSET(get<T>, {0x144, 1, 0, 0})
	DMember(float)                                     MaxForwardVelocityDegreeDifference                          OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     MinSpeedForPrimaryForwardRotation                           OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     MaxGroundedDirectionDegrees                                 OFFSET(get<float>, {0x150, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Gravity
/// Size: 0x0020 (0x000000 - 0x000020)
class FDelMarVehicleConfig_Gravity : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     ForceScaleCeiling                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForceScaleWall                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForceScaleGround                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AerialGravityForceMultiplier                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CoyoteTimeDuration                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   MinWheelsForCounterGravityMeasures                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxCounterGravitySpringVarianceDegrees                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bCounterGravityInKickflipSuctionDirection                   OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_Reattachment
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FDelMarVehicleConfig_Reattachment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     SurfaceTraceDistance                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ReattachmentForceAmount                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FDelMarScaledCurve)                        ReattachmentForceScalarCurve                                OFFSET(getStruct<T>, {0x8, 144, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            ReattachmentChannel                                         OFFSET(get<T>, {0x98, 1, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfig_WorldBonusSpeed
/// Size: 0x0028 (0x000000 - 0x000028)
class FDelMarVehicleConfig_WorldBonusSpeed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FDelMarWorldBonusSpeedSourceCap>)   BonusSpeedSourceCaps                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     MaxBonusSpeedPerStack                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxStackDuration                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<class UClass*>)                     WorldBonusSpeedActors                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_AutoUpright
/// Size: 0x0004 (0x000000 - 0x000004)
class FDelMarVehicleConfigOverride_AutoUpright : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     MaxWorldContactDegreeThreshold                              OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Collision
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleConfigOverride_Collision : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bCollisionDemosEnabled                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bWallRicochetEnabled                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     DemoSpeedScalar                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Drift
/// Size: 0x000C (0x000000 - 0x00000C)
class FDelMarVehicleConfigOverride_Drift : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     SpeedCapScalar                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AccelerationRateScalar                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DecelerationRateScalar                                      OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_DriftBoost
/// Size: 0x000C (0x000000 - 0x00000C)
class FDelMarVehicleConfigOverride_DriftBoost : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MaxBonusSpeedScalar                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DurationScalar                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PotentialRateScalar                                         OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Drive
/// Size: 0x0014 (0x000000 - 0x000014)
class FDelMarVehicleConfigOverride_Drive : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     MaxBaseForwardSpeedScalar                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AccelerationScalar                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DecelerationScalar                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     BrakeScalar                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxAerialSpeedScalar                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Gravity
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleConfigOverride_Gravity : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     CounterGravityContactDegreeThreshold                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AerialGravityScalar                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Jump
/// Size: 0x0004 (0x000000 - 0x000004)
class FDelMarVehicleConfigOverride_Jump : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     JumpImpulseScalar                                           OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Kickflip
/// Size: 0x000C (0x000000 - 0x00000C)
class FDelMarVehicleConfigOverride_Kickflip : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bResetChargesOnLanding                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   NumActivationCharges                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     CooldownSeconds                                             OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Oversteer
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleConfigOverride_Oversteer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     AccumulatedSteerThresholdScalar                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Terrain
/// Size: 0x0008 (0x000000 - 0x000008)
class FDelMarVehicleConfigOverride_Terrain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bDemolishInWater                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     WaterDestructionDelay                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Turbo
/// Size: 0x0018 (0x000000 - 0x000018)
class FDelMarVehicleConfigOverride_Turbo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     StartingVehicleCharges                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ChargeRegenRateScalar                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DriftBoostTurboGenerationScalar                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TurboSpeedScalar                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxActiveTimeSeconds                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SuccessfulBonusZoneHitSeconds                               OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverride_Underthrust
/// Size: 0x001C (0x000000 - 0x00001C)
class FDelMarVehicleConfigOverride_Underthrust : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     StartingTankPercentage                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ConsumptionRateMultiplier                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bReplenishTankOnLanding                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bReplenishTankOverTime                                      OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(float)                                     TankReplenishDelaySeconds                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TankReplenishRateMultiplier                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AccelScalar                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxUpwardSpeedScalar                                        OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarVehicleConfigOverrides
/// Size: 0x0098 (0x000000 - 0x000098)
class FDelMarVehicleConfigOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FDelMarVehicleConfigOverride_AutoUpright)  AutoUpright                                                 OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Collision)    Collision                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Drift)        Drift                                                       OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FDelMarVehicleConfigOverride_DriftBoost)   DriftBoost                                                  OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Drive)        Drive                                                       OFFSET(getStruct<T>, {0x28, 20, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Gravity)      Gravity                                                     OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Jump)         Jump                                                        OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Kickflip)     Kickflip                                                    OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Oversteer)    Oversteer                                                   OFFSET(getStruct<T>, {0x54, 8, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Terrain)      Terrain                                                     OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Turbo)        Turbo                                                       OFFSET(getStruct<T>, {0x64, 24, 0, 0})
	SMember(FDelMarVehicleConfigOverride_Underthrust)  Underthrust                                                 OFFSET(getStruct<T>, {0x7C, 28, 0, 0})
};

/// Struct /Script/DelMarCore.DelMarDynamicForceFeedbackEffect
/// Size: 0x0128 (0x000000 - 0x000128)
class FDelMarDynamicForceFeedbackEffect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FForceFeedbackChannelDetails)              Effect                                                      OFFSET(getStruct<T>, {0x0, 144, 0, 0})
	SMember(FRuntimeFloatCurve)                        IntensityAmplifierCurve                                     OFFSET(getStruct<T>, {0x90, 136, 0, 0})
};

/// Enum /Script/DelMarCore.EDelmarDraftingState
/// Size: 0x06
enum class EDelmarDraftingState : uint8_t
{
	EDelmarDraftingState__NotActive                                                  = 0,
	EDelmarDraftingState__HasTarget                                                  = 1,
	EDelmarDraftingState__GainingSpeed                                               = 2,
	EDelmarDraftingState__GracePeriod                                                = 3,
	EDelmarDraftingState__LosingSpeed                                                = 4,
	EDelmarDraftingState__EDelmarDraftingState_MAX                                   = 5
};

/// Enum /Script/DelMarCore.EDelMarVehicleDriftState
/// Size: 0x08
enum class EDelMarVehicleDriftState : uint8_t
{
	EDelMarVehicleDriftState__NotDrifting                                            = 0,
	EDelMarVehicleDriftState__Drifting                                               = 1,
	EDelMarVehicleDriftState__InitialKick                                            = 2,
	EDelMarVehicleDriftState__SwapKick                                               = 3,
	EDelMarVehicleDriftState__ExitVelocity                                           = 4,
	EDelMarVehicleDriftState__ExitForward                                            = 5,
	EDelMarVehicleDriftState__ForcedDrift                                            = 6,
	EDelMarVehicleDriftState__EDelMarVehicleDriftState_MAX                           = 7
};

/// Enum /Script/DelMarCore.EDelMarTurboZoneState
/// Size: 0x07
enum class EDelMarTurboZoneState : uint8_t
{
	EDelMarTurboZoneState__None                                                      = 0,
	EDelMarTurboZoneState__Visible                                                   = 1,
	EDelMarTurboZoneState__Failed                                                    = 2,
	EDelMarTurboZoneState__Active                                                    = 3,
	EDelMarTurboZoneState__Success                                                   = 4,
	EDelMarTurboZoneState__Missed                                                    = 5,
	EDelMarTurboZoneState__EDelMarTurboZoneState_MAX                                 = 6
};

/// Enum /Script/DelMarCore.EDelMarVehicleForwardState
/// Size: 0x05
enum class EDelMarVehicleForwardState : uint8_t
{
	EDelMarVehicleForwardState__None                                                 = 0,
	EDelMarVehicleForwardState__ForwardAccel                                         = 1,
	EDelMarVehicleForwardState__Braking                                              = 2,
	EDelMarVehicleForwardState__Reversing                                            = 3,
	EDelMarVehicleForwardState__EDelMarVehicleForwardState_MAX                       = 4
};

/// Enum /Script/DelMarCore.EDelMarSplineMovementType
/// Size: 0x04
enum class EDelMarSplineMovementType : uint8_t
{
	EDelMarSplineMovementType__OneShot                                               = 0,
	EDelMarSplineMovementType__Repeat                                                = 1,
	EDelMarSplineMovementType__PingPong                                              = 2,
	EDelMarSplineMovementType__EDelMarSplineMovementType_MAX                         = 3
};

/// Enum /Script/DelMarCore.EDelMarFloatOperation
/// Size: 0x08
enum class EDelMarFloatOperation : uint8_t
{
	DMFO_Set                                                                         = 0,
	DMFO_Add                                                                         = 1,
	DMFO_Subtract                                                                    = 2,
	DMFO_Multiply                                                                    = 3,
	DMFO_BaseMultiply                                                                = 4,
	DMFO_Divide                                                                      = 5,
	DMFO_Min                                                                         = 6,
	DMFO_Max                                                                         = 7
};

/// Enum /Script/DelMarCore.EDelMarModifierStackingPolicy
/// Size: 0x04
enum class EDelMarModifierStackingPolicy : uint8_t
{
	DMSP_Allow                                                                       = 0,
	DMSP_DontAdd                                                                     = 1,
	DMSP_ClearOthers                                                                 = 2,
	DMSP_MAX                                                                         = 3
};

/// Enum /Script/DelMarCore.EDelMarGlobalLeaderboardType
/// Size: 0x04
enum class EDelMarGlobalLeaderboardType : uint8_t
{
	EDelMarGlobalLeaderboardType__Top                                                = 0,
	EDelMarGlobalLeaderboardType__Focused                                            = 1,
	EDelMarGlobalLeaderboardType__Friend                                             = 2,
	EDelMarGlobalLeaderboardType__EDelMarGlobalLeaderboardType_MAX                   = 3
};

/// Enum /Script/DelMarCore.EDelMarNetModel
/// Size: 0x03
enum class EDelMarNetModel : uint8_t
{
	EDelMarNetModel__ClientAuthoritative                                             = 0,
	EDelMarNetModel__ChaosRollback                                                   = 1,
	EDelMarNetModel__EDelMarNetModel_MAX                                             = 2
};

/// Enum /Script/DelMarCore.EDelMarJellyHazardProcessorInfo
/// Size: 0x04
enum class EDelMarJellyHazardProcessorInfo : uint32_t
{
	EDelMarJellyHazardProcessorInfo__None                                            = 0,
	EDelMarJellyHazardProcessorInfo__WithoutJellyHazardHit                           = 1,
	EDelMarJellyHazardProcessorInfo__WithJellyHazardHit                              = 2,
	EDelMarJellyHazardProcessorInfo__EDelMarJellyHazardProcessorInfo_MAX             = 3
};

/// Enum /Script/DelMarCore.EDelMarDemolishedProcessorInfo
/// Size: 0x04
enum class EDelMarDemolishedProcessorInfo : uint32_t
{
	EDelMarDemolishedProcessorInfo__None                                             = 0,
	EDelMarDemolishedProcessorInfo__WithoutDemolish                                  = 1,
	EDelMarDemolishedProcessorInfo__WithDemolish                                     = 2,
	EDelMarDemolishedProcessorInfo__EDelMarDemolishedProcessorInfo_MAX               = 3
};

/// Enum /Script/DelMarCore.EDelMarPositionChangeInfo
/// Size: 0x04
enum class EDelMarPositionChangeInfo : uint8_t
{
	EDelMarPositionChangeInfo__None                                                  = 0,
	EDelMarPositionChangeInfo__PassPlayer                                            = 1,
	EDelMarPositionChangeInfo__PassedByPlayer                                        = 2,
	EDelMarPositionChangeInfo__EDelMarPositionChangeInfo_MAX                         = 3
};

/// Enum /Script/DelMarCore.EDelMarPlaylistTypeInfo
/// Size: 0x04
enum class EDelMarPlaylistTypeInfo : uint8_t
{
	EDelMarPlaylistTypeInfo__Any                                                     = 0,
	EDelMarPlaylistTypeInfo__Casual                                                  = 1,
	EDelMarPlaylistTypeInfo__Ranked                                                  = 2,
	EDelMarPlaylistTypeInfo__EDelMarPlaylistTypeInfo_MAX                             = 3
};

/// Enum /Script/DelMarCore.EDelMarPhysicsRate
/// Size: 0x04
enum class EDelMarPhysicsRate : uint8_t
{
	EDelMarPhysicsRate__ThirtyHz                                                     = 0,
	EDelMarPhysicsRate__SixtyHz                                                      = 1,
	EDelMarPhysicsRate__OneHundredTwentyHz                                           = 2,
	EDelMarPhysicsRate__EDelMarPhysicsRate_MAX                                       = 3
};

/// Enum /Script/DelMarCore.EDelMarSplineGenerationMode
/// Size: 0x03
enum class EDelMarSplineGenerationMode : uint8_t
{
	EDelMarSplineGenerationMode__PerSplinePoint                                      = 0,
	EDelMarSplineGenerationMode__UserAmount                                          = 1,
	EDelMarSplineGenerationMode__EDelMarSplineGenerationMode_MAX                     = 2
};

/// Enum /Script/DelMarCore.EDelMarRaceMode
/// Size: 0x06
enum class EDelMarRaceMode : uint8_t
{
	EDelMarRaceMode__ChallengeMode                                                   = 0,
	EDelMarRaceMode__CompetitiveMode                                                 = 1,
	EDelMarRaceMode__DeathRaceMode                                                   = 2,
	EDelMarRaceMode__TutorialRaceMode                                                = 3,
	EDelMarRaceMode__Invalid                                                         = 4,
	EDelMarRaceMode__EDelMarRaceMode_MAX                                             = 5
};

/// Enum /Script/DelMarCore.EDelMarInvertSteerMethod
/// Size: 0x06
enum class EDelMarInvertSteerMethod : uint8_t
{
	EDelMarInvertSteerMethod__CeilingAngle                                           = 0,
	EDelMarInvertSteerMethod__CeilingTimeDelay                                       = 1,
	EDelMarInvertSteerMethod__CeilingReleaseInput                                    = 2,
	EDelMarInvertSteerMethod__Never                                                  = 3,
	EDelMarInvertSteerMethod__Always                                                 = 4,
	EDelMarInvertSteerMethod__EDelMarInvertSteerMethod_MAX                           = 5
};

/// Enum /Script/DelMarCore.EDelMarKickflipDirection
/// Size: 0x10
enum class EDelMarKickflipDirection : uint8_t
{
	EDelMarKickflipDirection__None                                                   = 0,
	EDelMarKickflipDirection__Up                                                     = 1,
	EDelMarKickflipDirection__Down                                                   = 2,
	EDelMarKickflipDirection__Left                                                   = 3,
	EDelMarKickflipDirection__Right                                                  = 4,
	EDelMarKickflipDirection__UpLeft                                                 = 5,
	EDelMarKickflipDirection__DownLeft                                               = 6,
	EDelMarKickflipDirection__UpRight                                                = 7,
	EDelMarKickflipDirection__DownRight                                              = 8,
	EDelMarKickflipDirection__EDelMarKickflipDirection_MAX                           = 9
};

/// Enum /Script/DelMarCore.EDelMarVehicleWheelIndex
/// Size: 0x06
enum class EDelMarVehicleWheelIndex : uint8_t
{
	EDelMarVehicleWheelIndex__FrontLeft                                              = 0,
	EDelMarVehicleWheelIndex__FrontRight                                             = 1,
	EDelMarVehicleWheelIndex__BackLeft                                               = 2,
	EDelMarVehicleWheelIndex__BackRight                                              = 3,
	EDelMarVehicleWheelIndex__Num                                                    = 4,
	EDelMarVehicleWheelIndex__EDelMarVehicleWheelIndex_MAX                           = 5
};

/// Enum /Script/DelMarCore.EMixModifierTarget
/// Size: 0x04
enum class EMixModifierTarget : uint8_t
{
	EMixModifierTarget__Volume                                                       = 0,
	EMixModifierTarget__Pitch                                                        = 1,
	EMixModifierTarget__LowpassFrequency                                             = 2,
	EMixModifierTarget__EMixModifierTarget_MAX                                       = 3
};

/// Enum /Script/DelMarCore.EDelMarCheckpointMeshType
/// Size: 0x04
enum class EDelMarCheckpointMeshType : uint8_t
{
	EDelMarCheckpointMeshType__Default                                               = 0,
	EDelMarCheckpointMeshType__StartLine                                             = 1,
	EDelMarCheckpointMeshType__FinishLine                                            = 2,
	EDelMarCheckpointMeshType__EDelMarCheckpointMeshType_MAX                         = 3
};

/// Enum /Script/DelMarCore.EDelMarTimerDirection
/// Size: 0x03
enum class EDelMarTimerDirection : uint8_t
{
	EDelMarTimerDirection__CountUp                                                   = 0,
	EDelMarTimerDirection__CountDown                                                 = 1,
	EDelMarTimerDirection__EDelMarTimerDirection_MAX                                 = 2
};

/// Enum /Script/DelMarCore.EDelMarPostRaceVote
/// Size: 0x04
enum class EDelMarPostRaceVote : uint8_t
{
	EDelMarPostRaceVote__Unset                                                       = 0,
	EDelMarPostRaceVote__PlayAgain                                                   = 1,
	EDelMarPostRaceVote__NextMap                                                     = 2,
	EDelMarPostRaceVote__MAX                                                         = 3
};

/// Enum /Script/DelMarCore.EDelMarVehicleCollisionOverrideSetting
/// Size: 0x04
enum class EDelMarVehicleCollisionOverrideSetting : uint8_t
{
	EDelMarVehicleCollisionOverrideSetting__Disabled                                 = 0,
	EDelMarVehicleCollisionOverrideSetting__Enabled                                  = 1,
	EDelMarVehicleCollisionOverrideSetting__Unset                                    = 2,
	EDelMarVehicleCollisionOverrideSetting__Max                                      = 3
};

/// Enum /Script/DelMarCore.EDelMarRaceSpawnMode
/// Size: 0x05
enum class EDelMarRaceSpawnMode : uint8_t
{
	EDelMarRaceSpawnMode__SpawnAtMostRecentSplinePoint                               = 0,
	EDelMarRaceSpawnMode__SpawnAtMostRecentCheckpoint                                = 1,
	EDelMarRaceSpawnMode__SpawnAtRaceStart                                           = 2,
	EDelMarRaceSpawnMode__NoAutomaticRespawn                                         = 3,
	EDelMarRaceSpawnMode__EDelMarRaceSpawnMode_MAX                                   = 4
};

/// Enum /Script/DelMarCore.EDelMarPostMatchFlows
/// Size: 0x03
enum class EDelMarPostMatchFlows : uint8_t
{
	EDelMarPostMatchFlows__PlayTogetherFlow                                          = 0,
	EDelMarPostMatchFlows__PlayTrackFlow                                             = 1,
	EDelMarPostMatchFlows__EDelMarPostMatchFlows_MAX                                 = 2
};

/// Enum /Script/DelMarCore.EDelMarPostMatchState
/// Size: 0x12
enum class EDelMarPostMatchState : uint8_t
{
	EDelMarPostMatchState__WaitingForParty                                           = 0,
	EDelMarPostMatchState__WaitingForLobby                                           = 1,
	EDelMarPostMatchState__StartingNextRace                                          = 2,
	EDelMarPostMatchState__MatchmakingStarted                                        = 3,
	EDelMarPostMatchState__MatchmakingSucceeded                                      = 4,
	EDelMarPostMatchState__MatchmakingFailed                                         = 5,
	EDelMarPostMatchState__MatchmakingCancelled                                      = 6,
	EDelMarPostMatchState__Idle                                                      = 7,
	EDelMarPostMatchState__Failed                                                    = 8,
	EDelMarPostMatchState__Completed                                                 = 9,
	EDelMarPostMatchState__INVALID                                                   = 10,
	EDelMarPostMatchState__EDelMarPostMatchState_MAX                                 = 11
};

