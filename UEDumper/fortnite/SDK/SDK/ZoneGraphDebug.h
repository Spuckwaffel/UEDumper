
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ZoneGraph

/// Class /Script/ZoneGraphDebug.ZoneLaneTest
/// Size: 0x0008 (0x000028 - 0x000030)
class UZoneLaneTest : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UZoneGraphTestingComponent*                  OwnerComponent;                                             // 0x0028   (0x0008)  
};

/// Class /Script/ZoneGraphDebug.ZoneGraphTestingComponent
/// Size: 0x02E0 (0x000500 - 0x0007E0)
class UZoneGraphTestingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x10];                                      // 0x0500   (0x0010)  MISSED
	class UZoneGraphSubsystem*                         ZoneGraph;                                                  // 0x0510   (0x0008)  
	FZoneGraphLaneLocation                             LaneLocation;                                               // 0x0518   (0x0070)  
	FZoneGraphLaneLocation                             NextLaneLocation;                                           // 0x0588   (0x0070)  
	FZoneGraphLaneLocation                             NearestLaneLocation;                                        // 0x05F8   (0x0070)  
	FVector                                            SearchExtent;                                               // 0x0668   (0x0018)  
	float                                              AdvanceDistance;                                            // 0x0680   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0684   (0x0004)  MISSED
	FVector                                            NearestTestOffset;                                          // 0x0688   (0x0018)  
	FZoneGraphTagFilter                                QueryFilter;                                                // 0x06A0   (0x000C)  
	bool                                               bDrawLinkedLanes;                                           // 0x06AC   (0x0001)  
	bool                                               bDrawLaneTangentVectors;                                    // 0x06AD   (0x0001)  
	bool                                               bDrawLaneSmoothing;                                         // 0x06AE   (0x0001)  
	bool                                               bDrawBVTreeQuery;                                           // 0x06AF   (0x0001)  
	bool                                               bDrawLanePath;                                              // 0x06B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x06B1   (0x0007)  MISSED
	class AZoneGraphTestingActor*                      OtherActor;                                                 // 0x06B8   (0x0008)  
	unsigned char                                      UnknownData03_5[0x100];                                     // 0x06C0   (0x0100)  MISSED
	TArray<class UZoneLaneTest*>                       CustomTests;                                                // 0x07C0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x07D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingComponent.EnableCustomTests
	// void EnableCustomTests();                                                                                             // [0xa0fa164] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingComponent.DisableCustomTests
	// void DisableCustomTests();                                                                                            // [0xa0fa128] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ZoneGraphDebug.ZoneGraphTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AZoneGraphTestingActor : public AActor
{ 
public:
	class UZoneGraphTestingComponent*                  DebugComp;                                                  // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingActor.EnableCustomTests
	// void EnableCustomTests();                                                                                             // [0xa0fa13c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ZoneGraphDebug.ZoneGraphTestingActor.DisableCustomTests
	// void DisableCustomTests();                                                                                            // [0xa0fa100] Final|Native|Public|BlueprintCallable 
};

