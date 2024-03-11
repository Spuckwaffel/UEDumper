
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioShapes
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTags
/// dependency: TargetingSystem

/// Enum /Script/TrainRuntime.ETrainDynamicTickMode
/// Size: 0x05
enum class ETrainDynamicTickMode : uint8_t
{
	ETrainDynamicTickMode__Near                                                      = 0,
	ETrainDynamicTickMode__Mid                                                       = 1,
	ETrainDynamicTickMode__Far                                                       = 2,
	ETrainDynamicTickMode__None                                                      = 3,
	ETrainDynamicTickMode__ETrainDynamicTickMode_MAX                                 = 4
};

/// Class /Script/TrainRuntime.FortTrainCheatManager
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortTrainCheatManager : public UChildCheatManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED


	/// Functions
	// Function /Script/TrainRuntime.FortTrainCheatManager.TeleportTrainToTrainStartLocation
	// void TeleportTrainToTrainStartLocation();                                                                             // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.TeleportTrainToCursor
	// void TeleportTrainToCursor();                                                                                         // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.TeleportToTrainStartLocation
	// void TeleportToTrainStartLocation();                                                                                  // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.TeleportToTrain
	// void TeleportToTrain();                                                                                               // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.SetTrainStartLocationToCursor
	// void SetTrainStartLocationToCursor();                                                                                 // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.SetTrainMoveInPositiveRailDirection
	// void SetTrainMoveInPositiveRailDirection(bool bMoveInPositiveRailDirection);                                          // [0x63fe5cc] Final|BlueprintAuthorityOnly|Exec|Native|Private 
	// Function /Script/TrainRuntime.FortTrainCheatManager.PrintTrainDebug
	// void PrintTrainDebug();                                                                                               // [0x36203b0] Final|Exec|Native|Private|Const 
};

/// Class /Script/TrainRuntime.FortTrainSpawner
/// Size: 0x00A0 (0x000290 - 0x000330)
class AFortTrainSpawner : public AActor
{ 
public:
	class UTrainConfig*                                TrainConfig;                                                // 0x0290   (0x0008)  
	FScalableFloat                                     RandomizeSpawnLocation;                                     // 0x0298   (0x0028)  
	FScalableFloat                                     ReverseDirection;                                           // 0x02C0   (0x0028)  
	FScalableFloat                                     RandomizeDirection;                                         // 0x02E8   (0x0028)  
	SDK_UNDEFINED(32,15703) /* TWeakObjectPtr<AFortTrainRail*> */ __um(Rail);                                      // 0x0310   (0x0020)  
};

/// Class /Script/TrainRuntime.TrainCar
/// Size: 0x0188 (0x0002B8 - 0x000440)
class ATrainCar : public AFortGameplayTagActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x14];                                      // 0x02B8   (0x0014)  MISSED
	bool                                               bCanBeMarked : 1;                                           // 0x02CC:0 (0x0001)  
	bool                                               bBlockMarking : 1;                                          // 0x02CC:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x02CD   (0x0003)  MISSED
	FMarkedActorDisplayInfo                            MarkerDisplay;                                              // 0x02D0   (0x00A8)  
	FVector                                            MarkerPositionOffset;                                       // 0x0378   (0x0018)  
	float                                              Length;                                                     // 0x0390   (0x0004)  
	float                                              ConnectorLength;                                            // 0x0394   (0x0004)  
	class UTargetingPreset*                            DestructionTargetingPreset;                                 // 0x0398   (0x0008)  
	class UTargetingPreset*                            ImpulseTargetingPreset;                                     // 0x03A0   (0x0008)  
	FScalableFloat                                     DestroyBuildings;                                           // 0x03A8   (0x0028)  
	FScalableFloat                                     DestroyOnlyTargetPlayerBuilds;                              // 0x03D0   (0x0028)  
	FGameplayTagContainer                              DestructionActorTags;                                       // 0x03F8   (0x0020)  
	FGameplayTagContainer                              DestructionIgnoredActorTags;                                // 0x0418   (0x0020)  
	FTargetingRequestHandle                            DestructionAsyncTargetingHandle;                            // 0x0438   (0x0004)  
	FTargetingRequestHandle                            ImpulseAsyncTargetingHandle;                                // 0x043C   (0x0004)  


	/// Functions
	// Function /Script/TrainRuntime.TrainCar.OnPawnDebasedTrainCar
	// void OnPawnDebasedTrainCar(class AFortPawn* Pawn, class AActor* NewBase);                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TrainRuntime.TrainCar.OnPawnBasedOnTrainCar
	// void OnPawnBasedOnTrainCar(class AFortPawn* Pawn);                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/TrainRuntime.TrainCar.OnActorTargetedForImpulse
	// void OnActorTargetedForImpulse(class AActor* Actor);                                                                  // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/TrainRuntime.TrainCar.GetTransformAtServerTime
	// FTransform GetTransformAtServerTime(float ServerTime);                                                                // [0xa98e954] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TrainRuntime.TrainCar.GetTrainManager
	// class UFortTrainManager* GetTrainManager();                                                                           // [0xa98e930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TrainRuntime.TrainCar.GetCarIndex
	// int32_t GetCarIndex();                                                                                                // [0xa98e90c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TrainRuntime.TrainConfig
/// Size: 0x0068 (0x000030 - 0x000098)
class UTrainConfig : public UPrimaryDataAsset
{ 
public:
	class UClass*                                      TrainManagerClass;                                          // 0x0030   (0x0008)  
	TArray<class UClass*>                              Cars;                                                       // 0x0038   (0x0010)  
	FScalableFloat                                     MoveSpeed;                                                  // 0x0048   (0x0028)  
	FScalableFloat                                     DefaultConnectorLength;                                     // 0x0070   (0x0028)  
};

/// Struct /Script/TrainRuntime.TrainCarRuntimeData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FTrainCarRuntimeData
{ 
	class ATrainCar*                                   Actor;                                                      // 0x0000   (0x0008)  
	float                                              Length;                                                     // 0x0008   (0x0004)  
	float                                              ConnectorLength;                                            // 0x000C   (0x0004)  
	unsigned char                                      UnknownData00_6[0xD0];                                      // 0x0010   (0x00D0)  MISSED
};

/// Struct /Script/TrainRuntime.TrainMovementData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTrainMovementData
{ 
	float                                              Timestamp;                                                  // 0x0000   (0x0004)  
	float                                              DistanceAlongRail;                                          // 0x0004   (0x0004)  
	float                                              TimeAlongRail;                                              // 0x0008   (0x0004)  
	bool                                               bReverseDirection;                                          // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/TrainRuntime.FortTrainManager
/// Size: 0x0150 (0x000108 - 0x000258)
class UFortTrainManager : public UMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0108   (0x0010)  MISSED
	bool                                               bProceduralCarOrder;                                        // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	class UDataTable*                                  CarTable;                                                   // 0x0120   (0x0008)  
	TArray<FDataTableRowHandle>                        CarOrder;                                                   // 0x0128   (0x0010)  
	float                                              DefaultConnectorLength;                                     // 0x0138   (0x0004)  
	float                                              BaseMoveSpeed;                                              // 0x013C   (0x0004)  
	FScalableFloat                                     TruckLocationTolerance;                                     // 0x0140   (0x0028)  
	FScalableFloat                                     MaxIterations;                                              // 0x0168   (0x0028)  
	FScalableFloat                                     MaxErrorOffset;                                             // 0x0190   (0x0028)  
	FScalableFloat                                     ErrorCatchupSpeedModifier;                                  // 0x01B8   (0x0028)  
	class AFortTrainRail*                              Rail;                                                       // 0x01E0   (0x0008)  
	TArray<FTrainCarRuntimeData>                       Cars;                                                       // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x01F8   (0x0010)  MISSED
	FTrainMovementData                                 ReplicatedMovementData;                                     // 0x0208   (0x0010)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x0218   (0x0020)  MISSED
	class UAudioShapeLineListComponent*                CachedAudioShapeLineList;                                   // 0x0238   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0240   (0x0018)  MISSED


	/// Functions
	// Function /Script/TrainRuntime.FortTrainManager.PlaceOnRails
	// void PlaceOnRails();                                                                                                  // [0xa98eda8] Final|Native|Protected 
	// Function /Script/TrainRuntime.FortTrainManager.OnRep_ReplicatedMovementData
	// void OnRep_ReplicatedMovementData();                                                                                  // [0x3d8245c] Final|Native|Protected 
	// Function /Script/TrainRuntime.FortTrainManager.OnRep_Rail
	// void OnRep_Rail();                                                                                                    // [0x3aae954] Final|Native|Protected 
	// Function /Script/TrainRuntime.FortTrainManager.MoveToTimeAlongRail
	// void MoveToTimeAlongRail(float Time, bool bUpdateReplicatedMovementData);                                             // [0xa98ece0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TrainRuntime.FortTrainManager.MoveToPositionOnRailAtCurrentServerTime
	// void MoveToPositionOnRailAtCurrentServerTime(bool bUpdateReplicatedMovementData);                                     // [0xa98ec60] Final|Native|Public|BlueprintCallable 
	// Function /Script/TrainRuntime.FortTrainManager.MoveToPositionOnRail
	// void MoveToPositionOnRail(float RailDistance, bool bUpdateReplicatedMovementData);                                    // [0xa98eb98] Final|Native|Public|BlueprintCallable 
	// Function /Script/TrainRuntime.FortTrainManager.MoveAlongRail
	// void MoveAlongRail(float DeltaDistance, bool bUpdateReplicatedMovementData);                                          // [0xa98eac8] Final|Native|Public|BlueprintCallable 
	// Function /Script/TrainRuntime.FortTrainManager.GetWorldLocationAtServerTime
	// FVector GetWorldLocationAtServerTime(float ServerTime);                                                               // [0xa98ea24] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TrainRuntime.FortTrainStationComponent
/// Size: 0x00B0 (0x000220 - 0x0002D0)
class UFortTrainStationComponent : public USceneComponent
{ 
public:
	FGameplayTag                                       IdentifierTag;                                              // 0x0220   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0224   (0x0004)  MISSED
	FScalableFloat                                     EnterLength;                                                // 0x0228   (0x0028)  
	FScalableFloat                                     CoastLength;                                                // 0x0250   (0x0028)  
	FScalableFloat                                     ExitLength;                                                 // 0x0278   (0x0028)  
	FScalableFloat                                     SpeedMultiplier;                                            // 0x02A0   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Class /Script/TrainRuntime.FortTrainRail
/// Size: 0x0050 (0x000290 - 0x0002E0)
class AFortTrainRail : public AActor
{ 
public:
	SDK_UNDEFINED(32,15704) /* TWeakObjectPtr<ALandscapeSplineActor*> */ __um(LandscapeSplineActor);               // 0x0290   (0x0020)  
	class USplineComponent*                            SplineComponent;                                            // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x02B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/TrainRuntime.FortTrainRail.ValidateSpline
	// void ValidateSpline();                                                                                                // [0x36203b0] Final|Native|Private|Const 
	// Function /Script/TrainRuntime.FortTrainRail.GetTimeFromNextTrainArrival
	// float GetTimeFromNextTrainArrival(FGameplayTag& StationIdentifierTag);                                                // [0x2f7e758] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TrainRuntime.FortTrainRail.GenerateSpline
	// void GenerateSpline();                                                                                                // [0x36203b0] Final|Native|Private|Const 
};

/// Class /Script/TrainRuntime.FortTrainMovingPlatformComponent
/// Size: 0x0038 (0x0001E0 - 0x000218)
class UFortTrainMovingPlatformComponent : public UFortMovingPlatformComponent
{ 
public:
	class UCurveVector*                                PickupPushCurve;                                            // 0x01E0   (0x0008)  
	FScalableFloat                                     PickupTeleportDistance;                                     // 0x01E8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0210   (0x0008)  MISSED


	/// Functions
	// Function /Script/TrainRuntime.FortTrainMovingPlatformComponent.FindOrGetTrainManager
	// class UFortTrainManager* FindOrGetTrainManager();                                                                     // [0xa98e8e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TrainRuntime.TrainRailKeyframe
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTrainRailKeyframe
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

