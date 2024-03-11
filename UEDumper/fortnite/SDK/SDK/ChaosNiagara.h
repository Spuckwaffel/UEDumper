
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: GeometryCollectionEngine
/// dependency: Niagara
/// dependency: NiagaraCore

/// Enum /Script/ChaosNiagara.EDataSortTypeEnum
/// Size: 0x05
enum class EDataSortTypeEnum : uint8_t
{
	EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting                           = 0,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle                       = 1,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin                  = 2,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax                  = 3,
	EDataSortTypeEnum__ChaosNiagara_Max                                              = 4
};

/// Enum /Script/ChaosNiagara.ERandomVelocityGenerationTypeEnum
/// Size: 0x04
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max                              = 3
};

/// Enum /Script/ChaosNiagara.EDebugTypeEnum
/// Size: 0x04
enum class EDebugTypeEnum : uint8_t
{
	EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug                                   = 0,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver                             = 1,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex                      = 2,
	EDebugTypeEnum__ChaosNiagara_Max                                                 = 3
};

/// Enum /Script/ChaosNiagara.EDataSourceTypeEnum
/// Size: 0x04
enum class EDataSourceTypeEnum : uint8_t
{
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision                       = 0,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking                        = 1,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing                        = 2,
	EDataSourceTypeEnum__ChaosNiagara_Max                                            = 3
};

/// Enum /Script/ChaosNiagara.ELocationFilteringModeEnum
/// Size: 0x03
enum class ELocationFilteringModeEnum : uint8_t
{
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive         = 0,
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive         = 1,
	ELocationFilteringModeEnum__ChaosNiagara_Max                                     = 2
};

/// Enum /Script/ChaosNiagara.ELocationXToSpawnEnum
/// Size: 0x05
enum class ELocationXToSpawnEnum : uint8_t
{
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None                        = 0,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min                         = 1,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max                         = 2,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax                      = 3,
	ELocationXToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationYToSpawnEnum
/// Size: 0x05
enum class ELocationYToSpawnEnum : uint8_t
{
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None                        = 0,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min                         = 1,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max                         = 2,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax                      = 3,
	ELocationYToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Enum /Script/ChaosNiagara.ELocationZToSpawnEnum
/// Size: 0x05
enum class ELocationZToSpawnEnum : uint8_t
{
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None                        = 0,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min                         = 1,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max                         = 2,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax                      = 3,
	ELocationZToSpawnEnum__ChaosNiagara_Max                                          = 4
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction
/// Size: 0x0310 (0x000038 - 0x000348)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{ 
public:
	SDK_UNDEFINED(80,12388) /* TSet<AChaosSolverActor*> */ __um(ChaosSolverActorSet);                              // 0x0038   (0x0050)  
	EDataSourceTypeEnum                                DataSourceType;                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            DataProcessFrequency;                                       // 0x008C   (0x0004)  
	int32_t                                            MaxNumberOfDataEntriesToSpawn;                              // 0x0090   (0x0004)  
	bool                                               DoSpawn;                                                    // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	FVector2D                                          SpawnMultiplierMinMax;                                      // 0x0098   (0x0010)  
	float                                              SpawnChance;                                                // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FVector2D                                          ImpulseToSpawnMinMax;                                       // 0x00B0   (0x0010)  
	FVector2D                                          SpeedToSpawnMinMax;                                         // 0x00C0   (0x0010)  
	FVector2D                                          MassToSpawnMinMax;                                          // 0x00D0   (0x0010)  
	FVector2D                                          ExtentMinToSpawnMinMax;                                     // 0x00E0   (0x0010)  
	FVector2D                                          ExtentMaxToSpawnMinMax;                                     // 0x00F0   (0x0010)  
	FVector2D                                          VolumeToSpawnMinMax;                                        // 0x0100   (0x0010)  
	FVector2D                                          SolverTimeToSpawnMinMax;                                    // 0x0110   (0x0010)  
	int32_t                                            SurfaceTypeToSpawn;                                         // 0x0120   (0x0004)  
	ELocationFilteringModeEnum                         LocationFilteringMode;                                      // 0x0124   (0x0001)  
	ELocationXToSpawnEnum                              LocationXToSpawn;                                           // 0x0125   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0126   (0x0002)  MISSED
	FVector2D                                          LocationXToSpawnMinMax;                                     // 0x0128   (0x0010)  
	ELocationYToSpawnEnum                              LocationYToSpawn;                                           // 0x0138   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	FVector2D                                          LocationYToSpawnMinMax;                                     // 0x0140   (0x0010)  
	ELocationZToSpawnEnum                              LocationZToSpawn;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	FVector2D                                          LocationZToSpawnMinMax;                                     // 0x0158   (0x0010)  
	float                                              TrailMinSpeedToSpawn;                                       // 0x0168   (0x0004)  
	EDataSortTypeEnum                                  DataSortingType;                                            // 0x016C   (0x0001)  
	bool                                               bGetExternalCollisionData;                                  // 0x016D   (0x0001)  
	bool                                               DoSpatialHash;                                              // 0x016E   (0x0001)  
	unsigned char                                      UnknownData06_5[0x1];                                       // 0x016F   (0x0001)  MISSED
	FVector                                            SpatialHashVolumeMin;                                       // 0x0170   (0x0018)  
	FVector                                            SpatialHashVolumeMax;                                       // 0x0188   (0x0018)  
	FVector                                            SpatialHashVolumeCellSize;                                  // 0x01A0   (0x0018)  
	int32_t                                            MaxDataPerCell;                                             // 0x01B8   (0x0004)  
	bool                                               bApplyMaterialsFilter;                                      // 0x01BC   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x01BD   (0x0003)  MISSED
	SDK_UNDEFINED(80,12389) /* TSet<UPhysicalMaterial*> */ __um(ChaosBreakingMaterialSet);                         // 0x01C0   (0x0050)  
	bool                                               bGetExternalBreakingData;                                   // 0x0210   (0x0001)  
	bool                                               bGetExternalTrailingData;                                   // 0x0211   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x0212   (0x0006)  MISSED
	FVector2D                                          RandomPositionMagnitudeMinMax;                              // 0x0218   (0x0010)  
	float                                              InheritedVelocityMultiplier;                                // 0x0228   (0x0004)  
	ERandomVelocityGenerationTypeEnum                  RandomVelocityGenerationType;                               // 0x022C   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x022D   (0x0003)  MISSED
	FVector2D                                          RandomVelocityMagnitudeMinMax;                              // 0x0230   (0x0010)  
	float                                              SpreadAngleMax;                                             // 0x0240   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	FVector                                            VelocityOffsetMin;                                          // 0x0248   (0x0018)  
	FVector                                            VelocityOffsetMax;                                          // 0x0260   (0x0018)  
	FVector2D                                          FinalVelocityMagnitudeMinMax;                               // 0x0278   (0x0010)  
	float                                              MaxLatency;                                                 // 0x0288   (0x0004)  
	EDebugTypeEnum                                     DebugType;                                                  // 0x028C   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x028D   (0x0003)  MISSED
	int32_t                                            LastSpawnedPointID;                                         // 0x0290   (0x0004)  
	float                                              LastSpawnTime;                                              // 0x0294   (0x0004)  
	unsigned char                                      UnknownData12_5[0x10];                                      // 0x0298   (0x0010)  MISSED
	float                                              SolverTime;                                                 // 0x02A8   (0x0004)  
	float                                              TimeStampOfLastProcessedData;                               // 0x02AC   (0x0004)  
	unsigned char                                      UnknownData13_6[0x98];                                      // 0x02B0   (0x0098)  MISSED
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfaceGeometryCollection
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceGeometryCollection : public UNiagaraDataInterface
{ 
public:
	class AGeometryCollectionActor*                    GeometryCollectionActor;                                    // 0x0038   (0x0008)  
};

/// Class /Script/ChaosNiagara.NiagaraDataInterfacePhysicsField
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{ 
public:
};

/// Struct /Script/ChaosNiagara.ChaosDestructionEvent
/// Size: 0x0078 (0x000000 - 0x000078)
struct FChaosDestructionEvent
{ 
	FVector                                            Position;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0030   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0048   (0x0018)  
	float                                              ExtentMin;                                                  // 0x0060   (0x0004)  
	float                                              ExtentMax;                                                  // 0x0064   (0x0004)  
	int32_t                                            ParticleID;                                                 // 0x0068   (0x0004)  
	float                                              Time;                                                       // 0x006C   (0x0004)  
	int32_t                                            Type;                                                       // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

