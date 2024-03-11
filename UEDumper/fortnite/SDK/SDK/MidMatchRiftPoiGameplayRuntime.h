
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidmatchRiftPoiCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiNearestLocation
	// void SpawnMidmatchPoiNearestLocation(FVector& Location);                                                              // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiFurthestLocation
	// void SpawnMidmatchPoiFurthestLocation(FVector& Location);                                                             // [0x18a39e4] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnNearestToPawnLocation
	// void MidmatchRiftPoiSpawnNearestToPawnLocation();                                                                     // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnFurthestFromPawnLocation
	// void MidmatchRiftPoiSpawnFurthestFromPawnLocation();                                                                  // [0x36203b0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
};

/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor
/// Size: 0x00D8 (0x000290 - 0x000368)
class AMidMatchRiftPoiManagerActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	bool                                               bCanBeMarked : 1;                                           // 0x0298:0 (0x0001)  
	bool                                               bBlockMarking : 1;                                          // 0x0298:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0299   (0x0007)  MISSED
	FMarkedActorDisplayInfo                            MarkerDisplay;                                              // 0x02A0   (0x00A8)  
	FVector                                            MarkerPositionOffset;                                       // 0x0348   (0x0018)  
	bool                                               bDynamicLandBrushApplied;                                   // 0x0360   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0361   (0x0007)  MISSED


	/// Functions
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor.SetDynamicLandBrush
	// void SetDynamicLandBrush(FSlateBrush& LandIcon);                                                                      // [0x38521e4] Final|BlueprintCosmetic|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator
/// Size: 0x00D8 (0x000290 - 0x000368)
class AMidmatchRiftPoiSpawnIndicator : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0290   (0x0010)  MISSED
	bool                                               bCanBeMarked : 1;                                           // 0x02A0:0 (0x0001)  
	bool                                               bBlockMarking : 1;                                          // 0x02A0:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x02A1   (0x0007)  MISSED
	FMarkedActorDisplayInfo                            MarkerDisplay;                                              // 0x02A8   (0x00A8)  
	FVector                                            MarkerPositionOffset;                                       // 0x0350   (0x0018)  


	/// Functions
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.TeleportVehicleActor
	// void TeleportVehicleActor(class AActor* VehicleActor, FVector& TeleportLocation);                                     // [0x9010bf4] Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.IsActorInDataLayerInstance
	// bool IsActorInDataLayerInstance(class AActor* Actor, class UDataLayerInstance* DataLayerInstance);                    // [0x96b69b4] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

