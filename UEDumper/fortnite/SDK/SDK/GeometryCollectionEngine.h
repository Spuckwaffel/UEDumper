
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: DataflowEngine
/// dependency: Engine
/// dependency: PhysicsCore

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x04
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x02
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1
};

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x06
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX                           = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x07
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone                                              = 0,
	EChaosCollisionSortMethod__SortByHighestMass                                     = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed                                    = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse                                  = 3,
	EChaosCollisionSortMethod__SortByNearestFirst                                    = 4,
	EChaosCollisionSortMethod__Count                                                 = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX                         = 6
};

/// Enum /Script/GeometryCollectionEngine.EChaosRemovalSortMethod
/// Size: 0x05
enum class EChaosRemovalSortMethod : uint8_t
{
	EChaosRemovalSortMethod__SortNone                                                = 0,
	EChaosRemovalSortMethod__SortByHighestMass                                       = 1,
	EChaosRemovalSortMethod__SortByNearestFirst                                      = 2,
	EChaosRemovalSortMethod__Count                                                   = 3,
	EChaosRemovalSortMethod__EChaosRemovalSortMethod_MAX                             = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x06
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX                           = 5
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x06
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryCollectionExternalRenderInterface : public UInterface
{ 
public:
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem.OnActorEndPlay
	// void OnActorEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                      // [0x64b88c8] Final|Native|Protected 
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosCollisionEventRequestSettings
{ 
	int32_t                                            MaxNumberResults;                                           // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosCollisionSortMethod                          SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosBreakingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinRadius;                                                  // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinMass;                                                    // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosBreakingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosTrailingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinAngularSpeed;                                            // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosTrailingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FChaosRemovalEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MaxDistance;                                                // 0x0008   (0x0004)  
	EChaosRemovalSortMethod                            SortMethod;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x02B0 (0x000220 - 0x0004D0)
class UChaosDestructionListener : public USceneComponent
{ 
public:
	bool                                               bIsCollisionEventListeningEnabled : 1;                      // 0x0220:0 (0x0001)  
	bool                                               bIsBreakingEventListeningEnabled : 1;                       // 0x0220:1 (0x0001)  
	bool                                               bIsTrailingEventListeningEnabled : 1;                       // 0x0220:2 (0x0001)  
	bool                                               bIsRemovalEventListeningEnabled : 1;                        // 0x0220:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0221   (0x0003)  MISSED
	FChaosCollisionEventRequestSettings                CollisionEventRequestSettings;                              // 0x0224   (0x0018)  
	FChaosBreakingEventRequestSettings                 BreakingEventRequestSettings;                               // 0x023C   (0x0018)  
	FChaosTrailingEventRequestSettings                 TrailingEventRequestSettings;                               // 0x0254   (0x0018)  
	FChaosRemovalEventRequestSettings                  RemovalEventRequestSettings;                                // 0x026C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x027C   (0x0004)  MISSED
	SDK_UNDEFINED(80,2409) /* TSet<AChaosSolverActor*> */ __um(ChaosSolverActors);                                 // 0x0280   (0x0050)  
	SDK_UNDEFINED(80,2410) /* TSet<AGeometryCollectionActor*> */ __um(GeometryCollectionActors);                   // 0x02D0   (0x0050)  
	SDK_UNDEFINED(16,2411) /* FMulticastInlineDelegate */ __um(OnCollisionEvents);                                 // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,2412) /* FMulticastInlineDelegate */ __um(OnBreakingEvents);                                  // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,2413) /* FMulticastInlineDelegate */ __um(OnTrailingEvents);                                  // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,2414) /* FMulticastInlineDelegate */ __um(OnRemovalEvents);                                   // 0x0350   (0x0010)  
	unsigned char                                      UnknownData02_6[0x170];                                     // 0x0360   (0x0170)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);        // [0x64bb560] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	// void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);            // [0x64bb2e8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);    // [0x64bb070] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);        // [0x64badf8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                 // [0x64bac2c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                        // [0x64bab98] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	// void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings);                                   // [0x64ba7e4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	// void SetRemovalEventEnabled(bool bIsEnabled);                                                                         // [0x64ba750] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                               // [0x64b98b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                       // [0x64b9820] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                 // [0x64b9774] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                        // [0x64b96e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                          // [0x64b8d14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                               // [0x6414600] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// bool IsEventListening();                                                                                              // [0x64b8894] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                             // [0x64b7138] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                  // [0x6414600] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionActor : public AActor
{ 
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                                // 0x0290   (0x0008)  
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                       // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                   // [0x64b89c8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (0x000028 - 0x000050)
class UGeometryCollectionCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FRecordedTransformTrack                            RecordedData;                                               // 0x0028   (0x0010)  
	class UGeometryCollection*                         SupportedCollection;                                        // 0x0038   (0x0008)  
	FGuid                                              CompatibleCollectionState;                                  // 0x0040   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGeometryCollectionDamagePropagationData
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BreakDamagePropagationFactor;                               // 0x0004   (0x0004)  
	float                                              ShockDamagePropagationFactor;                               // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGeomComponentCacheParameters
{ 
	EGeometryCollectionCacheType                       CacheMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UGeometryCollectionCache*                    TargetCache;                                                // 0x0008   (0x0008)  
	float                                              ReverseCacheBeginTime;                                      // 0x0010   (0x0004)  
	bool                                               SaveCollisionData;                                          // 0x0014   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            CollisionDataSizeMax;                                       // 0x0018   (0x0004)  
	bool                                               DoCollisionDataSpatialHash;                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              CollisionDataSpatialHashRadius;                             // 0x0020   (0x0004)  
	int32_t                                            MaxCollisionPerCell;                                        // 0x0024   (0x0004)  
	bool                                               SaveBreakingData;                                           // 0x0028   (0x0001)  
	bool                                               DoGenerateBreakingData;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            BreakingDataSizeMax;                                        // 0x002C   (0x0004)  
	bool                                               DoBreakingDataSpatialHash;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              BreakingDataSpatialHashRadius;                              // 0x0034   (0x0004)  
	int32_t                                            MaxBreakingPerCell;                                         // 0x0038   (0x0004)  
	bool                                               SaveTrailingData;                                           // 0x003C   (0x0001)  
	bool                                               DoGenerateTrailingData;                                     // 0x003D   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            TrailingDataSizeMax;                                        // 0x0040   (0x0004)  
	float                                              TrailingMinSpeedThreshold;                                  // 0x0044   (0x0004)  
	float                                              TrailingMinVolumeThreshold;                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGeometryCollectionRepData
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepStateData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGeometryCollectionRepStateData
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepDynamicData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGeometryCollectionRepDynamicData
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x04C0 (0x000540 - 0x000A00)
class UGeometryCollectionComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0538   (0x0008)  MISSED
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x0540   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0548   (0x0008)  MISSED
	class UGeometryCollection*                         RestCollection;                                             // 0x0550   (0x0008)  
	TArray<class AFieldSystemActor*>                   InitializationFields;                                       // 0x0558   (0x0010)  
	bool                                               Simulating;                                                 // 0x0568   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0569   (0x0001)  MISSED
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x056A   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x056B   (0x0001)  MISSED
	int32_t                                            GravityGroupIndex;                                          // 0x056C   (0x0004)  
	int32_t                                            OneWayInteractionLevel;                                     // 0x0570   (0x0004)  
	bool                                               bDensityFromPhysicsMaterial;                                // 0x0574   (0x0001)  
	bool                                               bForceMotionBlur;                                           // 0x0575   (0x0001)  
	bool                                               EnableClustering;                                           // 0x0576   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0577   (0x0001)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x0578   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x057C   (0x0004)  
	int32_t                                            MaxSimulatedLevel;                                          // 0x0580   (0x0004)  
	EDamageModelTypeEnum                               DamageModel;                                                // 0x0584   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0585   (0x0003)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x0588   (0x0010)  
	bool                                               bUseSizeSpecificDamageThreshold;                            // 0x0598   (0x0001)  
	bool                                               bUseMaterialDamageModifiers;                                // 0x0599   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x059A   (0x0002)  MISSED
	FGeometryCollectionDamagePropagationData           DamagePropagationData;                                      // 0x059C   (0x000C)  
	bool                                               bEnableDamageFromCollision;                                 // 0x05A8   (0x0001)  
	bool                                               bAllowRemovalOnSleep;                                       // 0x05A9   (0x0001)  
	bool                                               bAllowRemovalOnBreak;                                       // 0x05AA   (0x0001)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x05AB   (0x0001)  
	int32_t                                            CollisionGroup;                                             // 0x05AC   (0x0004)  
	float                                              CollisionSampleFraction;                                    // 0x05B0   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x05B4   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x05BC   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x05C0   (0x0008)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x05C9   (0x0007)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x05D0   (0x0018)  
	FVector                                            InitialAngularVelocity;                                     // 0x05E8   (0x0018)  
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                   // 0x0600   (0x0008)  
	FGeomComponentCacheParameters                      CacheParameters;                                            // 0x0608   (0x0050)  
	TArray<FTransform>                                 RestTransforms;                                             // 0x0658   (0x0010)  
	SDK_UNDEFINED(16,2415) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsStateChange);        // 0x0668   (0x0010)  
	SDK_UNDEFINED(16,2416) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsLoadingStateChange); // 0x0678   (0x0010)  
	unsigned char                                      UnknownData09_5[0x18];                                      // 0x0688   (0x0018)  MISSED
	SDK_UNDEFINED(16,2417) /* FMulticastInlineDelegate */ __um(OnChaosBreakEvent);                                 // 0x06A0   (0x0010)  
	SDK_UNDEFINED(16,2418) /* FMulticastInlineDelegate */ __um(OnChaosRemovalEvent);                               // 0x06B0   (0x0010)  
	SDK_UNDEFINED(16,2419) /* FMulticastInlineDelegate */ __um(OnChaosCrumblingEvent);                             // 0x06C0   (0x0010)  
	unsigned char                                      UnknownData10_5[0x48];                                      // 0x06D0   (0x0048)  MISSED
	float                                              DesiredCacheTime;                                           // 0x0718   (0x0004)  
	bool                                               CachePlayback;                                              // 0x071C   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x071D   (0x0003)  MISSED
	SDK_UNDEFINED(16,2420) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                           // 0x0720   (0x0010)  
	bool                                               bNotifyBreaks;                                              // 0x0730   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x0731   (0x0001)  
	bool                                               bNotifyTrailing;                                            // 0x0732   (0x0001)  
	bool                                               bNotifyRemovals;                                            // 0x0733   (0x0001)  
	bool                                               bNotifyCrumblings;                                          // 0x0734   (0x0001)  
	bool                                               bCrumblingEventIncludesChildren;                            // 0x0735   (0x0001)  
	bool                                               bNotifyGlobalBreaks;                                        // 0x0736   (0x0001)  
	bool                                               bNotifyGlobalCollisions;                                    // 0x0737   (0x0001)  
	bool                                               bNotifyGlobalRemovals;                                      // 0x0738   (0x0001)  
	bool                                               bNotifyGlobalCrumblings;                                    // 0x0739   (0x0001)  
	bool                                               bGlobalCrumblingEventIncludesChildren;                      // 0x073A   (0x0001)  
	bool                                               bStoreVelocities;                                           // 0x073B   (0x0001)  
	bool                                               bIsCurrentlyNavigationRelevant;                             // 0x073C   (0x0001)  
	bool                                               bShowBoneColors;                                            // 0x073D   (0x0001)  
	bool                                               bUpdateComponentTransformToRootBone;                        // 0x073E   (0x0001)  
	bool                                               bUseRootProxyForNavigation;                                 // 0x073F   (0x0001)  
	bool                                               bUpdateNavigationInTick;                                    // 0x0740   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x0741   (0x0007)  MISSED
	class AGeometryCollectionISMPoolActor*             ISMPool;                                                    // 0x0748   (0x0008)  
	bool                                               bAutoAssignISMPool;                                         // 0x0750   (0x0001)  
	bool                                               bOverrideCustomRenderer;                                    // 0x0751   (0x0001)  
	unsigned char                                      UnknownData13_5[0x6];                                       // 0x0752   (0x0006)  MISSED
	class UClass*                                      CustomRendererType;                                         // 0x0758   (0x0008)  
	bool                                               bEnableRootProxyForCustomRenderer;                          // 0x0760   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x0761   (0x0007)  MISSED
	SDK_UNDEFINED(16,2421) /* TScriptInterface<Class> */ __um(CustomRenderer);                                     // 0x0768   (0x0010)  
	bool                                               bEnableReplication;                                         // 0x0778   (0x0001)  
	bool                                               bEnableAbandonAfterLevel;                                   // 0x0779   (0x0001)  
	unsigned char                                      UnknownData15_5[0x2];                                       // 0x077A   (0x0002)  MISSED
	FName                                              AbandonedCollisionProfileName;                              // 0x077C   (0x0004)  
	TArray<FName>                                      CollisionProfilePerLevel;                                   // 0x0780   (0x0010)  
	unsigned char                                      UnknownData16_5[0x10];                                      // 0x0790   (0x0010)  MISSED
	int32_t                                            ReplicationAbandonClusterLevel;                             // 0x07A0   (0x0004)  
	int32_t                                            ReplicationAbandonAfterLevel;                               // 0x07A4   (0x0004)  
	int32_t                                            ReplicationMaxPositionAndVelocityCorrectionLevel;           // 0x07A8   (0x0004)  
	unsigned char                                      UnknownData17_5[0x4];                                       // 0x07AC   (0x0004)  MISSED
	FGeometryCollectionRepData                         RepData;                                                    // 0x07B0   (0x0038)  
	FGeometryCollectionRepStateData                    RepStateData;                                               // 0x07E8   (0x0040)  
	FGeometryCollectionRepDynamicData                  RepDynamicData;                                             // 0x0828   (0x0018)  
	unsigned char                                      UnknownData18_5[0x120];                                     // 0x0840   (0x0120)  MISSED
	class UBodySetup*                                  DummyBodySetup;                                             // 0x0960   (0x0008)  
	class UChaosGameplayEventDispatcher*               EventDispatcher;                                            // 0x0968   (0x0008)  
	TArray<class UInstancedStaticMeshComponent*>       EmbeddedGeometryComponents;                                 // 0x0970   (0x0010)  
	bool                                               bUseStaticMeshCollisionForTraces;                           // 0x0980   (0x0001)  
	unsigned char                                      UnknownData19_6[0x7F];                                      // 0x0981   (0x007F)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetUseStaticMeshCollisionForTraces
	// void SetUseStaticMeshCollisionForTraces(bool bInUseStaticMeshCollisionForTraces);                                     // [0x64bad58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetUseMaterialDamageModifiers
	// void SetUseMaterialDamageModifiers(bool bInUseMaterialDamageModifiers);                                               // [0x64bacd8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	// void SetRestCollection(class UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults);                        // [0x64ba884] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetPerParticleCollisionProfileName
	// void SetPerParticleCollisionProfileName(TArray<int32_t>& BoneIds, FName ProfileName);                                 // [0x64ba5a4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetPerLevelCollisionProfileNames
	// void SetPerLevelCollisionProfileNames(TArray<FName>& ProfileNames);                                                   // [0x64ba508] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetOneWayInteractionLevel
	// void SetOneWayInteractionLevel(int32_t InOneWayInteractionLevel);                                                     // [0x64ba488] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	// void SetNotifyRemovals(bool bNewNotifyRemovals);                                                                      // [0x64ba3f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalRemovals
	// void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals);                                                          // [0x64ba348] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCrumblings
	// void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren);       // [0x64ba244] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCollision
	// void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions);                                                       // [0x64ba194] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalBreaks
	// void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks);                                                              // [0x64ba114] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	// void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);                         // [0x64ba050] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                          // [0x64b9f94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetLocalRestTransforms
	// void SetLocalRestTransforms(TArray<FTransform>& Transforms, bool bOnlyLeaves);                                        // [0x64b9dfc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetGravityGroupIndex
	// void SetGravityGroupIndex(int32_t InGravityGroupIndex);                                                               // [0x64b9d60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	// void SetEnableDamageFromCollision(bool bValue);                                                                       // [0x64b9c58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDensityFromPhysicsMaterial
	// void SetDensityFromPhysicsMaterial(bool bInDensityFromPhysicsMaterial);                                               // [0x64b9bd8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamageThreshold
	// void SetDamageThreshold(TArray<float>& InDamageThreshold);                                                            // [0x64b9afc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamagePropagationData
	// void SetDamagePropagationData(FGeometryCollectionDamagePropagationData& InDamagePropagationData);                     // [0x64b9a64] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamageModel
	// void SetDamageModel(EDamageModelTypeEnum InDamageModel);                                                              // [0x64b99e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	// void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel);                   // [0x64b924c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	// void SetAnchoredByIndex(int32_t Index, bool bAnchored);                                                               // [0x64b9164] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	// void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel);                                          // [0x64b8e54] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAbandonedParticleCollisionProfileName
	// void SetAbandonedParticleCollisionProfileName(FName CollisionProfile);                                                // [0x64b8dc8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	// void RemoveAllAnchors();                                                                                              // [0x64b8d00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                              // [0x18a39e4] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepStateData
	// void OnRep_RepStateData();                                                                                            // [0x64b89b4] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepDynamicData
	// void OnRep_RepDynamicData();                                                                                          // [0x64b89a0] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	// void OnRep_RepData();                                                                                                 // [0x64b898c] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x18a39e4] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.IsRootBroken
	// bool IsRootBroken();                                                                                                  // [0x64b88b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetUseStaticMeshCollisionForTraces
	// bool GetUseStaticMeshCollisionForTraces();                                                                            // [0x64b887c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootInitialTransform
	// FTransform GetRootInitialTransform();                                                                                 // [0x64b8820] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	// int32_t GetRootIndex();                                                                                               // [0x64b8800] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootCurrentTransform
	// FTransform GetRootCurrentTransform();                                                                                 // [0x64b87a4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	// void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents);                                          // [0x64b8684] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	// FBox GetLocalBounds();                                                                                                // [0x64b8644] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLocalRestTransforms
	// TArray<FTransform> GetInitialLocalRestTransforms();                                                                   // [0x64b8604] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	// int32_t GetInitialLevel(int32_t ItemIndex);                                                                           // [0x64b8578] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	// FString GetDebugInfo();                                                                                               // [0x64b8538] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDamageThreshold
	// TArray<float> GetDamageThreshold();                                                                                   // [0x64b84a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.EnableRootProxyForCustomRenderer
	// void EnableRootProxyForCustomRenderer(bool bEnable);                                                                  // [0x64b8420] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	// void CrumbleCluster(int32_t ItemIndex);                                                                               // [0x64b83a0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	// void CrumbleActiveClusters();                                                                                         // [0x64b838c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x64b7f4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	// void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                                 // [0x64b7e14] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// void ApplyKinematicField(float Radius, FVector Position);                                                             // [0x64b7c90] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	// void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x64b795c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	// void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x64b7628] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	// void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                         // [0x64b74ec] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	// void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                       // [0x64b73b0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAssetDefaults
	// void ApplyAssetDefaults();                                                                                            // [0x64b739c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	// void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                               // [0x64b7264] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGeometryCollectionDebugDrawWarningMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AChaosSolverActor*                           Solver;                                                     // 0x0008   (0x0008)  
	class AGeometryCollectionActor*                    GeometryCollection;                                         // 0x0010   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00C0 (0x000290 - 0x000350)
class AGeometryCollectionDebugDrawActor : public AActor
{ 
public:
	FGeometryCollectionDebugDrawWarningMessage         WarningMessage;                                             // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0291   (0x0007)  MISSED
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                          // 0x0298   (0x0018)  
	bool                                               bDebugDrawWholeCollection;                                  // 0x02B0   (0x0001)  
	bool                                               bDebugDrawHierarchy;                                        // 0x02B1   (0x0001)  
	bool                                               bDebugDrawClustering;                                       // 0x02B2   (0x0001)  
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                               // 0x02B3   (0x0001)  
	bool                                               bShowRigidBodyId;                                           // 0x02B4   (0x0001)  
	bool                                               bShowRigidBodyCollision;                                    // 0x02B5   (0x0001)  
	bool                                               bCollisionAtOrigin;                                         // 0x02B6   (0x0001)  
	bool                                               bShowRigidBodyTransform;                                    // 0x02B7   (0x0001)  
	bool                                               bShowRigidBodyInertia;                                      // 0x02B8   (0x0001)  
	bool                                               bShowRigidBodyVelocity;                                     // 0x02B9   (0x0001)  
	bool                                               bShowRigidBodyForce;                                        // 0x02BA   (0x0001)  
	bool                                               bShowRigidBodyInfos;                                        // 0x02BB   (0x0001)  
	bool                                               bShowTransformIndex;                                        // 0x02BC   (0x0001)  
	bool                                               bShowTransform;                                             // 0x02BD   (0x0001)  
	bool                                               bShowParent;                                                // 0x02BE   (0x0001)  
	bool                                               bShowLevel;                                                 // 0x02BF   (0x0001)  
	bool                                               bShowConnectivityEdges;                                     // 0x02C0   (0x0001)  
	bool                                               bShowGeometryIndex;                                         // 0x02C1   (0x0001)  
	bool                                               bShowGeometryTransform;                                     // 0x02C2   (0x0001)  
	bool                                               bShowBoundingBox;                                           // 0x02C3   (0x0001)  
	bool                                               bShowFaces;                                                 // 0x02C4   (0x0001)  
	bool                                               bShowFaceIndices;                                           // 0x02C5   (0x0001)  
	bool                                               bShowFaceNormals;                                           // 0x02C6   (0x0001)  
	bool                                               bShowSingleFace;                                            // 0x02C7   (0x0001)  
	int32_t                                            SingleFaceIndex;                                            // 0x02C8   (0x0004)  
	bool                                               bShowVertices;                                              // 0x02CC   (0x0001)  
	bool                                               bShowVertexIndices;                                         // 0x02CD   (0x0001)  
	bool                                               bShowVertexNormals;                                         // 0x02CE   (0x0001)  
	bool                                               bUseActiveVisualization;                                    // 0x02CF   (0x0001)  
	float                                              PointThickness;                                             // 0x02D0   (0x0004)  
	float                                              LineThickness;                                              // 0x02D4   (0x0004)  
	bool                                               bTextShadow;                                                // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02D9   (0x0003)  MISSED
	float                                              TextScale;                                                  // 0x02DC   (0x0004)  
	float                                              NormalScale;                                                // 0x02E0   (0x0004)  
	float                                              AxisScale;                                                  // 0x02E4   (0x0004)  
	float                                              ArrowScale;                                                 // 0x02E8   (0x0004)  
	FColor                                             RigidBodyIdColor;                                           // 0x02EC   (0x0004)  
	float                                              RigidBodyTransformScale;                                    // 0x02F0   (0x0004)  
	FColor                                             RigidBodyCollisionColor;                                    // 0x02F4   (0x0004)  
	FColor                                             RigidBodyInertiaColor;                                      // 0x02F8   (0x0004)  
	FColor                                             RigidBodyVelocityColor;                                     // 0x02FC   (0x0004)  
	FColor                                             RigidBodyForceColor;                                        // 0x0300   (0x0004)  
	FColor                                             RigidBodyInfoColor;                                         // 0x0304   (0x0004)  
	FColor                                             TransformIndexColor;                                        // 0x0308   (0x0004)  
	float                                              TransformScale;                                             // 0x030C   (0x0004)  
	FColor                                             LevelColor;                                                 // 0x0310   (0x0004)  
	FColor                                             ParentColor;                                                // 0x0314   (0x0004)  
	float                                              ConnectivityEdgeThickness;                                  // 0x0318   (0x0004)  
	FColor                                             GeometryIndexColor;                                         // 0x031C   (0x0004)  
	float                                              GeometryTransformScale;                                     // 0x0320   (0x0004)  
	FColor                                             BoundingBoxColor;                                           // 0x0324   (0x0004)  
	FColor                                             FaceColor;                                                  // 0x0328   (0x0004)  
	FColor                                             FaceIndexColor;                                             // 0x032C   (0x0004)  
	FColor                                             FaceNormalColor;                                            // 0x0330   (0x0004)  
	FColor                                             SingleFaceColor;                                            // 0x0334   (0x0004)  
	FColor                                             VertexColor;                                                // 0x0338   (0x0004)  
	FColor                                             VertexIndexColor;                                           // 0x033C   (0x0004)  
	FColor                                             VertexNormalColor;                                          // 0x0340   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0348   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                           // 0x00A0   (0x0008)  
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                      // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionISMPoolActor : public AActor
{ 
public:
	class UGeometryCollectionISMPoolComponent*         ISMPoolComp;                                                // 0x0290   (0x0008)  
	class UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp;                                      // 0x0298   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent
/// Size: 0x0130 (0x000220 - 0x000350)
class UGeometryCollectionISMPoolComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x130];                                     // 0x0220   (0x0130)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UGeometryCollectionISMPoolRenderer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x30];                                      // 0x0000   (0x0030)  MISSED
	class AGeometryCollectionISMPoolActor*             ISMPoolActor;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0xA8];                                      // 0x0038   (0x00A8)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGeometryCollectionEmbeddedExemplar
{ 
	FSoftObjectPath                                    StaticMeshExemplar;                                         // 0x0000   (0x0018)  
	float                                              StartCullDistance;                                          // 0x0018   (0x0004)  
	float                                              EndCullDistance;                                            // 0x001C   (0x0004)  
	int32_t                                            InstanceCount;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionProxyMeshData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGeometryCollectionProxyMeshData
{ 
	TArray<class UStaticMesh*>                         ProxyMeshes;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGeometryCollectionAutoInstanceMesh
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0008   (0x0010)  
	int32_t                                            NumInstances;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      CustomData;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGeometryCollectionLevelSetData
{ 
	int32_t                                            MinLevelSetResolution;                                      // 0x0000   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0004   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x0008   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x000C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGeometryCollectionCollisionParticleData
{ 
	float                                              CollisionParticlesFraction;                                 // 0x0000   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FGeometryCollectionCollisionTypeData
{ 
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0000   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FGeometryCollectionLevelSetData                    LevelSet;                                                   // 0x0004   (0x0010)  
	FGeometryCollectionCollisionParticleData           CollisionParticles;                                         // 0x0014   (0x0008)  
	float                                              CollisionObjectReductionPercentage;                         // 0x001C   (0x0004)  
	float                                              CollisionMarginFraction;                                    // 0x0020   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGeometryCollectionSizeSpecificData
{ 
	float                                              MaxSize;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGeometryCollectionCollisionTypeData>       CollisionShapes;                                            // 0x0008   (0x0010)  
	int32_t                                            DamageThreshold;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x01F0 (0x000028 - 0x000218)
class UGeometryCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0000   (0x0038)  MISSED
	bool                                               EnableClustering;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x003C   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x0040   (0x0004)  
	EDamageModelTypeEnum                               DamageModel;                                                // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x0048   (0x0010)  
	bool                                               bUseSizeSpecificDamageThreshold;                            // 0x0058   (0x0001)  
	bool                                               bUseMaterialDamageModifiers;                                // 0x0059   (0x0001)  
	bool                                               PerClusterOnlyDamageThreshold;                              // 0x005A   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x005B   (0x0001)  MISSED
	FGeometryCollectionDamagePropagationData           DamagePropagationData;                                      // 0x005C   (0x000C)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              ConnectionGraphBoundsFilteringMargin;                       // 0x006C   (0x0004)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0070   (0x0010)  
	TArray<FGeometryCollectionEmbeddedExemplar>        EmbeddedGeometryExemplar;                                   // 0x0080   (0x0010)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0090   (0x0001)  
	bool                                               bStripOnCook;                                               // 0x0091   (0x0001)  
	bool                                               bStripRenderDataOnCook;                                     // 0x0092   (0x0001)  
	unsigned char                                      UnknownData05_5[0x5];                                       // 0x0093   (0x0005)  MISSED
	class UClass*                                      CustomRendererType;                                         // 0x0098   (0x0008)  
	FGeometryCollectionProxyMeshData                   RootProxyData;                                              // 0x00A0   (0x0010)  
	TArray<FGeometryCollectionAutoInstanceMesh>        AutoInstanceMeshes;                                         // 0x00B0   (0x0010)  
	bool                                               EnableNanite;                                               // 0x00C0   (0x0001)  
	bool                                               bConvertVertexColorsToSRGB;                                 // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData06_5[0x6];                                       // 0x00C2   (0x0006)  MISSED
	class UPhysicalMaterial*                           PhysicsMaterial;                                            // 0x00C8   (0x0008)  
	bool                                               bDensityFromPhysicsMaterial;                                // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              CachedDensityFromPhysicsMaterialInGCm3;                     // 0x00D4   (0x0004)  
	bool                                               bMassAsDensity;                                             // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	float                                              Mass;                                                       // 0x00DC   (0x0004)  
	float                                              MinimumMassClamp;                                           // 0x00E0   (0x0004)  
	bool                                               bImportCollisionFromSource;                                 // 0x00E4   (0x0001)  
	bool                                               bScaleOnRemoval;                                            // 0x00E5   (0x0001)  
	bool                                               bRemoveOnMaxSleep;                                          // 0x00E6   (0x0001)  
	unsigned char                                      UnknownData09_5[0x1];                                       // 0x00E7   (0x0001)  MISSED
	FVector2D                                          MaximumSleepTime;                                           // 0x00E8   (0x0010)  
	FVector2D                                          RemovalDuration;                                            // 0x00F8   (0x0010)  
	bool                                               bSlowMovingAsSleeping;                                      // 0x0108   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              SlowMovingVelocityThreshold;                                // 0x010C   (0x0004)  
	TArray<FGeometryCollectionSizeSpecificData>        SizeSpecificData;                                           // 0x0110   (0x0010)  
	bool                                               EnableRemovePiecesOnFracture;                               // 0x0120   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                  // 0x0128   (0x0010)  
	class UDataflow*                                   DataflowAsset;                                              // 0x0138   (0x0008)  
	SDK_UNDEFINED(16,2422) /* FString */               __um(DataflowTerminal);                                     // 0x0140   (0x0010)  
	SDK_UNDEFINED(80,2423) /* TMap<FString, FString> */ __um(Overrides);                                           // 0x0150   (0x0050)  
	FGuid                                              PersistentGuid;                                             // 0x01A0   (0x0010)  
	FGuid                                              StateGuid;                                                  // 0x01B0   (0x0010)  
	int32_t                                            RootIndex;                                                  // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData12_5[0x4];                                       // 0x01C4   (0x0004)  MISSED
	TArray<int32_t>                                    BreadthFirstTransformIndices;                               // 0x01C8   (0x0010)  
	TArray<int32_t>                                    AutoInstanceTransformRemapIndices;                          // 0x01D8   (0x0010)  
	int32_t                                            BoneSelectedMaterialIndex;                                  // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x01EC   (0x0004)  MISSED
	class UMaterialInterface*                          BoneSelectedMaterial;                                       // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData14_5[0x10];                                      // 0x01F8   (0x0010)  MISSED
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0208   (0x0010)  


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollection.SetEnableNanite
	// void SetEnableNanite(bool bValue);                                                                                    // [0x64b9cd8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollection.SetConvertVertexColorsToSRGB
	// void SetConvertVertexColorsToSRGB(bool bValue);                                                                       // [0x64b995c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x00F0 (0x000290 - 0x000380)
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                        // 0x0290   (0x0008)  
	class UMaterial*                                   RayMarchMaterial;                                           // 0x0298   (0x0008)  
	float                                              SurfaceTolerance;                                           // 0x02A0   (0x0004)  
	float                                              Isovalue;                                                   // 0x02A4   (0x0004)  
	bool                                               Enabled;                                                    // 0x02A8   (0x0001)  
	bool                                               RenderVolumeBoundingBox;                                    // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0xD6];                                      // 0x02AA   (0x00D6)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
/// Size: 0x0020 (0x000550 - 0x000570)
class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{ 
public:
	bool                                               bShowGlobalStats;                                           // 0x0550   (0x0001)  
	bool                                               bShowStats;                                                 // 0x0551   (0x0001)  
	bool                                               bShowBounds;                                                // 0x0552   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0553   (0x0005)  MISSED
	class UInstancedStaticMeshComponent*               SelectedComponent;                                          // 0x0558   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0560   (0x0010)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FChaosBreakingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	float                                              Mass;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FChaosCollisionEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FVector                                            Velocity1;                                                  // 0x0030   (0x0018)  
	FVector                                            Velocity2;                                                  // 0x0048   (0x0018)  
	float                                              Mass1;                                                      // 0x0060   (0x0004)  
	float                                              Mass2;                                                      // 0x0064   (0x0004)  
	FVector                                            Impulse;                                                    // 0x0068   (0x0018)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FChaosRemovalEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x001C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FChaosTrailingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x004C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FGeometryCollectionSource
{ 
	FSoftObjectPath                                    SourceGeometryObject;                                       // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0020   (0x0060)  
	TArray<class UMaterialInterface*>                  SourceMaterial;                                             // 0x0080   (0x0010)  
	TArray<float>                                      InstanceCustomData;                                         // 0x0090   (0x0010)  
	bool                                               bAddInternalMaterials;                                      // 0x00A0   (0x0001)  
	bool                                               bSplitComponents;                                           // 0x00A1   (0x0001)  
	bool                                               bSetInternalFromMaterialIndex;                              // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData01_6[0xD];                                       // 0x00A3   (0x000D)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRenderResourceSizeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGeometryCollectionRenderResourceSizeInfo
{ 
	uint64_t                                           MeshResourcesSize;                                          // 0x0000   (0x0008)  
	uint64_t                                           NaniteResourcesSize;                                        // 0x0008   (0x0008)  
};

