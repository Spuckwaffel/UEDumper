
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore

/// Class /Script/EntityFortnite.EntityFortniteInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEntityFortniteInterface : public UInterface
{ 
public:
};

/// Class /Script/EntityFortnite.EntityFortnitePlayerComponent
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UEntityFortnitePlayerComponent : public UEntityActorPlayerComponent
{ 
public:
};

/// Class /Script/EntityFortnite.EntityFortniteStormControllerComponent
/// Size: 0x0010 (0x000058 - 0x000068)
class UEntityFortniteStormControllerComponent : public UEntityComponent
{ 
public:
	class UClass*                                      StormSpawnerClass;                                          // 0x0058   (0x0008)  
	class AEntityFortniteStormSpawner*                 StormSpawner;                                               // 0x0060   (0x0008)  
};

/// Class /Script/EntityFortnite.EntityFortniteStormSpawner
/// Size: 0x0008 (0x000290 - 0x000298)
class AEntityFortniteStormSpawner : public AActor
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/EntityFortnite.EntityFortniteStormSpawner.Stop
	// void Stop();                                                                                                          // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EntityFortnite.EntityFortniteStormSpawner.Start
	// void Start(float StartRadius, float BoundsRadius, TArray<FEntityFortniteStormPhase>& Phases);                         // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/EntityFortnite.EntityFortniteStormSpawner.Pause
	// void Pause();                                                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/EntityFortnite.EntityFortniteStormSpawner.Exists
	// bool Exists();                                                                                                        // [0x18a39e4] Event|Public|BlueprintEvent|Const 
};

/// Struct /Script/EntityFortnite.EntityFortniteStormPhase
/// Size: 0x0050 (0x000000 - 0x000050)
struct FEntityFortniteStormPhase
{ 
	float                                              WaitTime;                                                   // 0x0000   (0x0004)  
	float                                              ShrinkTime;                                                 // 0x0004   (0x0004)  
	float                                              EndRadius;                                                  // 0x0008   (0x0004)  
	float                                              EndRadiusPercentage;                                        // 0x000C   (0x0004)  
	int32_t                                            DamageIndex;                                                // 0x0010   (0x0004)  
	bool                                               bMoves;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinMovementDistance;                                        // 0x0018   (0x0004)  
	float                                              MaxMovementDistance;                                        // 0x001C   (0x0004)  
	float                                              MinMovementDistancePercentage;                              // 0x0020   (0x0004)  
	float                                              MaxMovementDistancePercentage;                              // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector4                                           EndLocation;                                                // 0x0030   (0x0020)  
};

