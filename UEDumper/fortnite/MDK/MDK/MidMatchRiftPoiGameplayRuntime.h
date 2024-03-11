
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidmatchRiftPoiCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiNearestLocation
	// void SpawnMidmatchPoiNearestLocation(FVector& Location);                                                                 // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiFurthestLocation
	// void SpawnMidmatchPoiFurthestLocation(FVector& Location);                                                                // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnNearestToPawnLocation
	// void MidmatchRiftPoiSpawnNearestToPawnLocation();                                                                        // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnFurthestFromPawnLocation
	// void MidmatchRiftPoiSpawnFurthestFromPawnLocation();                                                                     // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor
/// Size: 0x00D8 (0x000290 - 0x000368)
class AMidMatchRiftPoiManagerActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	DMember(bool)                                      bCanBeMarked                                                OFFSET(get<bool>, {0x298, 1, 1, 0})
	DMember(bool)                                      bBlockMarking                                               OFFSET(get<bool>, {0x298, 1, 1, 1})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               OFFSET(getStruct<T>, {0x2A0, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        OFFSET(getStruct<T>, {0x348, 24, 0, 0})
	DMember(bool)                                      bDynamicLandBrushApplied                                    OFFSET(get<bool>, {0x360, 1, 0, 0})


	/// Functions
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor.SetDynamicLandBrush
	// void SetDynamicLandBrush(FSlateBrush& LandIcon);                                                                         // [0x38521e4] Final|BlueprintCosmetic|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator
/// Size: 0x00D8 (0x000290 - 0x000368)
class AMidmatchRiftPoiSpawnIndicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	DMember(bool)                                      bCanBeMarked                                                OFFSET(get<bool>, {0x2A0, 1, 1, 0})
	DMember(bool)                                      bBlockMarking                                               OFFSET(get<bool>, {0x2A0, 1, 1, 1})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               OFFSET(getStruct<T>, {0x2A8, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        OFFSET(getStruct<T>, {0x350, 24, 0, 0})


	/// Functions
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.TeleportVehicleActor
	// void TeleportVehicleActor(class AActor* VehicleActor, FVector& TeleportLocation);                                        // [0x9010bf4] Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.IsActorInDataLayerInstance
	// bool IsActorInDataLayerInstance(class AActor* Actor, class UDataLayerInstance* DataLayerInstance);                       // [0x96b69b4] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

