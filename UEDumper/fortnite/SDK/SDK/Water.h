
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore
/// dependency: PhysicsCore

/// Enum /Script/Water.EBuoyancyEvent
/// Size: 0x03
enum class EBuoyancyEvent : uint8_t
{
	EBuoyancyEvent__EnteredWaterBody                                                 = 0,
	EBuoyancyEvent__ExitedWaterBody                                                  = 1,
	EBuoyancyEvent__EBuoyancyEvent_MAX                                               = 2
};

/// Enum /Script/Water.EWaveSpectrumType
/// Size: 0x04
enum class EWaveSpectrumType : uint8_t
{
	EWaveSpectrumType__Phillips                                                      = 0,
	EWaveSpectrumType__PiersonMoskowitz                                              = 1,
	EWaveSpectrumType__JONSWAP                                                       = 2,
	EWaveSpectrumType__EWaveSpectrumType_MAX                                         = 3
};

/// Enum /Script/Water.EWaterExclusionMode
/// Size: 0x03
enum class EWaterExclusionMode : uint32_t
{
	EWaterExclusionMode__AddWaterBodiesListToExclusion                               = 0,
	EWaterExclusionMode__RemoveWaterBodiesListFromExclusion                          = 1,
	EWaterExclusionMode__EWaterExclusionMode_MAX                                     = 2
};

/// Enum /Script/Water.EWaterBrushBlendType
/// Size: 0x04
enum class EWaterBrushBlendType : uint8_t
{
	EWaterBrushBlendType__AlphaBlend                                                 = 0,
	EWaterBrushBlendType__Min                                                        = 1,
	EWaterBrushBlendType__Max                                                        = 2,
	EWaterBrushBlendType__Additive                                                   = 3
};

/// Enum /Script/Water.EWaterBodyType
/// Size: 0x06
enum class EWaterBodyType : uint8_t
{
	EWaterBodyType__River                                                            = 0,
	EWaterBodyType__Lake                                                             = 1,
	EWaterBodyType__Ocean                                                            = 2,
	EWaterBodyType__Transition                                                       = 3,
	EWaterBodyType__Num                                                              = 4,
	EWaterBodyType__EWaterBodyType_MAX                                               = 5
};

/// Enum /Script/Water.EWaterBrushFalloffMode
/// Size: 0x03
enum class EWaterBrushFalloffMode : uint8_t
{
	EWaterBrushFalloffMode__Angle                                                    = 0,
	EWaterBrushFalloffMode__Width                                                    = 1,
	EWaterBrushFalloffMode__EWaterBrushFalloffMode_MAX                               = 2
};

/// Class /Script/Water.WaterBodyMeshComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class UWaterBodyMeshComponent : public UStaticMeshComponent
{ 
public:
};

/// Class /Script/Water.WaterBodyStaticMeshComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class UWaterBodyStaticMeshComponent : public UWaterBodyMeshComponent
{ 
public:
};

/// Struct /Script/Water.SphericalPontoon
/// Size: 0x02D0 (0x000000 - 0x0002D0)
struct FSphericalPontoon
{ 
	FName                                              CenterSocket;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            RelativeLocation;                                           // 0x0008   (0x0018)  
	float                                              Radius;                                                     // 0x0020   (0x0004)  
	bool                                               bFXEnabled;                                                 // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            LocalForce;                                                 // 0x0028   (0x0018)  
	FVector                                            CenterLocation;                                             // 0x0040   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FQuat                                              SocketRotation;                                             // 0x0060   (0x0020)  
	FVector                                            Offset;                                                     // 0x0080   (0x0018)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0098   (0x0004)  MISSED
	float                                              WaterHeight;                                                // 0x009C   (0x0004)  
	float                                              WaterDepth;                                                 // 0x00A0   (0x0004)  
	float                                              ImmersionDepth;                                             // 0x00A4   (0x0004)  
	FVector                                            WaterPlaneLocation;                                         // 0x00A8   (0x0018)  
	FVector                                            WaterPlaneNormal;                                           // 0x00C0   (0x0018)  
	FVector                                            WaterSurfacePosition;                                       // 0x00D8   (0x0018)  
	FVector                                            WaterVelocity;                                              // 0x00F0   (0x0018)  
	int32_t                                            WaterBodyIndex;                                             // 0x0108   (0x0004)  
	bool                                               bIsInWater;                                                 // 0x010C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1AB];                                     // 0x010D   (0x01AB)  MISSED
	class UWaterBodyComponent*                         CurrentWaterBodyComponent;                                  // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x02C0   (0x0010)  MISSED
};

/// Struct /Script/Water.BuoyancyData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FBuoyancyData
{ 
	TArray<FSphericalPontoon>                          Pontoons;                                                   // 0x0000   (0x0010)  
	bool                                               bCenterPontoonsOnCOM;                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              BuoyancyCoefficient;                                        // 0x0014   (0x0004)  
	float                                              BuoyancyDamp;                                               // 0x0018   (0x0004)  
	float                                              BuoyancyDamp2;                                              // 0x001C   (0x0004)  
	float                                              BuoyancyRampMinVelocity;                                    // 0x0020   (0x0004)  
	float                                              BuoyancyRampMaxVelocity;                                    // 0x0024   (0x0004)  
	float                                              BuoyancyRampMax;                                            // 0x0028   (0x0004)  
	float                                              MaxBuoyantForce;                                            // 0x002C   (0x0004)  
	bool                                               bApplyDragForcesInWater;                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              DragCoefficient;                                            // 0x0034   (0x0004)  
	float                                              DragCoefficient2;                                           // 0x0038   (0x0004)  
	float                                              AngularDragCoefficient;                                     // 0x003C   (0x0004)  
	float                                              MaxDragSpeed;                                               // 0x0040   (0x0004)  
	bool                                               bApplyRiverForces;                                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	int32_t                                            RiverPontoonIndex;                                          // 0x0048   (0x0004)  
	float                                              WaterShorePushFactor;                                       // 0x004C   (0x0004)  
	float                                              RiverTraversalPathWidth;                                    // 0x0050   (0x0004)  
	float                                              MaxShorePushForce;                                          // 0x0054   (0x0004)  
	float                                              WaterVelocityStrength;                                      // 0x0058   (0x0004)  
	float                                              MaxWaterForce;                                              // 0x005C   (0x0004)  
	bool                                               bAlwaysAllowLateralPush;                                    // 0x0060   (0x0001)  
	bool                                               bAllowCurrentWhenMovingFastUpstream;                        // 0x0061   (0x0001)  
	bool                                               bApplyDownstreamAngularRotation;                            // 0x0062   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x0063   (0x0005)  MISSED
	FVector                                            DownstreamAxisOfRotation;                                   // 0x0068   (0x0018)  
	float                                              DownstreamRotationStrength;                                 // 0x0080   (0x0004)  
	float                                              DownstreamRotationStiffness;                                // 0x0084   (0x0004)  
	float                                              DownstreamRotationAngularDamping;                           // 0x0088   (0x0004)  
	float                                              DownstreamMaxAcceleration;                                  // 0x008C   (0x0004)  
};

/// Class /Script/Water.BuoyancyComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UBuoyancyComponent : public UActorComponent
{ 
public:
	TArray<FSphericalPontoon>                          Pontoons;                                                   // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,2905) /* FMulticastInlineDelegate */ __um(OnEnteredWaterDelegate);                            // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,2906) /* FMulticastInlineDelegate */ __um(OnExitedWaterDelegate);                             // 0x00C0   (0x0010)  
	FBuoyancyData                                      BuoyancyData;                                               // 0x00D0   (0x0090)  
	TArray<class UWaterBodyComponent*>                 CurrentWaterBodyComponents;                                 // 0x0160   (0x0010)  
	class UPrimitiveComponent*                         SimulatingComponent;                                        // 0x0170   (0x0008)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0178   (0x0090)  MISSED


	/// Functions
	// Function /Script/Water.BuoyancyComponent.OnPontoonExitedWater
	// void OnPontoonExitedWater(FSphericalPontoon& Pontoon);                                                                // [0x7a5ae5c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.OnPontoonEnteredWater
	// void OnPontoonEnteredWater(FSphericalPontoon& Pontoon);                                                               // [0x7a5ad98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.IsOverlappingWaterBody
	// bool IsOverlappingWaterBody();                                                                                        // [0x7a5ad7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.BuoyancyComponent.IsInWaterBody
	// bool IsInWaterBody();                                                                                                 // [0x7a5ad60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	// void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, FVector& OutWaterVelocity); // [0x7a5a34c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.GetCurrentWaterBodyComponents
	// TArray<UWaterBodyComponent*> GetCurrentWaterBodyComponents();                                                         // [0x7a5a224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.BuoyancyManager
/// Size: 0x00C8 (0x000290 - 0x000358)
class ABuoyancyManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x50];                                      // 0x0290   (0x0050)  MISSED
	TArray<class UBuoyancyComponent*>                  BuoyancyComponents;                                         // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x02F0   (0x0068)  MISSED


	/// Functions
	// Function /Script/Water.BuoyancyManager.GetBuoyancyComponentManager
	// bool GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager*& Manager);                // [0x7a5a078] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Water.EnvQueryTest_InsideWaterBody
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{ 
public:
	bool                                               bIncludeWaves;                                              // 0x01F8   (0x0001)  
	bool                                               bSimpleWaves;                                               // 0x01F9   (0x0001)  
	bool                                               bIgnoreExclusionVolumes;                                    // 0x01FA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x01FB   (0x0005)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UGerstnerWaterWaveGeneratorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
	// void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves);                                                          // [0x7a59f40] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSimple
/// Size: 0x0038 (0x000028 - 0x000060)
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{ 
public:
	int32_t                                            NumWaves;                                                   // 0x0028   (0x0004)  
	int32_t                                            Seed;                                                       // 0x002C   (0x0004)  
	float                                              Randomness;                                                 // 0x0030   (0x0004)  
	float                                              MinWavelength;                                              // 0x0034   (0x0004)  
	float                                              MaxWavelength;                                              // 0x0038   (0x0004)  
	float                                              WavelengthFalloff;                                          // 0x003C   (0x0004)  
	float                                              MinAmplitude;                                               // 0x0040   (0x0004)  
	float                                              MaxAmplitude;                                               // 0x0044   (0x0004)  
	float                                              AmplitudeFalloff;                                           // 0x0048   (0x0004)  
	float                                              WindAngleDeg;                                               // 0x004C   (0x0004)  
	float                                              DirectionAngularSpreadDeg;                                  // 0x0050   (0x0004)  
	float                                              SmallWaveSteepness;                                         // 0x0054   (0x0004)  
	float                                              LargeWaveSteepness;                                         // 0x0058   (0x0004)  
	float                                              SteepnessFalloff;                                           // 0x005C   (0x0004)  
};

/// Struct /Script/Water.GerstnerWaveOctave
/// Size: 0x0014 (0x000000 - 0x000014)
struct FGerstnerWaveOctave
{ 
	int32_t                                            NumWaves;                                                   // 0x0000   (0x0004)  
	float                                              AmplitudeScale;                                             // 0x0004   (0x0004)  
	float                                              MainDirection;                                              // 0x0008   (0x0004)  
	float                                              SpreadAngle;                                                // 0x000C   (0x0004)  
	bool                                               bUniformSpread;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSpectrum
/// Size: 0x0018 (0x000028 - 0x000040)
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{ 
public:
	EWaveSpectrumType                                  SpectrumType;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FGerstnerWaveOctave>                        Octaves;                                                    // 0x0030   (0x0010)  
};

/// Class /Script/Water.WaterWavesBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterWavesBase : public UObject
{ 
public:
};

/// Class /Script/Water.WaterWaves
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterWaves : public UWaterWavesBase
{ 
public:
};

/// Struct /Script/Water.GerstnerWave
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGerstnerWave
{ 
	float                                              WaveLength;                                                 // 0x0000   (0x0004)  
	float                                              Amplitude;                                                  // 0x0004   (0x0004)  
	float                                              Steepness;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Direction;                                                  // 0x0010   (0x0018)  
	FVector2D                                          WaveVector;                                                 // 0x0028   (0x0010)  
	float                                              WaveSpeed;                                                  // 0x0038   (0x0004)  
	float                                              WKA;                                                        // 0x003C   (0x0004)  
	float                                              Q;                                                          // 0x0040   (0x0004)  
	float                                              PhaseOffset;                                                // 0x0044   (0x0004)  
};

/// Class /Script/Water.GerstnerWaterWaves
/// Size: 0x0020 (0x000028 - 0x000048)
class UGerstnerWaterWaves : public UWaterWaves
{ 
public:
	class UGerstnerWaterWaveGeneratorBase*             GerstnerWaveGenerator;                                      // 0x0028   (0x0008)  
	TArray<FGerstnerWave>                              GerstnerWaves;                                              // 0x0030   (0x0010)  
	float                                              MaxWaveHeight;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/Water.LakeCollisionComponent
/// Size: 0x0020 (0x000500 - 0x000520)
class ULakeCollisionComponent : public UPrimitiveComponent
{ 
public:
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0500   (0x0008)  
	FVector                                            BoxExtent;                                                  // 0x0508   (0x0018)  
};

/// Class /Script/Water.NiagaraDataInterfaceWater
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{ 
public:
	class UWaterBodyComponent*                         SourceBodyComponent;                                        // 0x0038   (0x0008)  
};

/// Class /Script/Water.NiagaraWaterFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent
	// void SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UWaterBodyComponent* WaterBodyComponent); // [0x7a5b46c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Water.NiagaraWaterFunctionLibrary.SetWaterBody
	// void SetWaterBody(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class AWaterBody* WaterBody);         // [0x7a5b2ac] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/Water.OceanCollisionComponent
/// Size: 0x0040 (0x000500 - 0x000540)
class UOceanCollisionComponent : public UPrimitiveComponent
{ 
public:
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0500   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0508   (0x0038)  MISSED
};

/// Class /Script/Water.OceanBoxCollisionComponent
/// Size: 0x0000 (0x000540 - 0x000540)
class UOceanBoxCollisionComponent : public UBoxComponent
{ 
public:
};

/// Class /Script/Water.WaterBody
/// Size: 0x0070 (0x000290 - 0x000300)
class AWaterBody : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UWaterSplineComponent*                       SplineComp;                                                 // 0x0298   (0x0008)  
	class UWaterSplineMetadata*                        WaterSplineMetadata;                                        // 0x02A0   (0x0008)  
	class UWaterBodyComponent*                         WaterBodyComponent;                                         // 0x02A8   (0x0008)  
	int32_t                                            WaterBodyIndex;                                             // 0x02B0   (0x0004)  
	EWaterBodyType                                     WaterBodyType;                                              // 0x02B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02B5   (0x0003)  MISSED
	class UWaterWavesBase*                             WaterWaves;                                                 // 0x02B8   (0x0008)  
	class UWaterBodyInfoMeshComponent*                 WaterInfoMeshComponent;                                     // 0x02C0   (0x0008)  
	class UWaterBodyInfoMeshComponent*                 DilatedWaterInfoMeshComponent;                              // 0x02C8   (0x0008)  
	TArray<class UWaterBodyStaticMeshComponent*>       WaterBodyStaticMeshComponents;                              // 0x02D0   (0x0010)  
	class UClass*                                      WaterBodyRiverComponentClass;                               // 0x02E0   (0x0008)  
	class UClass*                                      WaterBodyLakeComponentClass;                                // 0x02E8   (0x0008)  
	class UClass*                                      WaterBodyOceanComponentClass;                               // 0x02F0   (0x0008)  
	class UClass*                                      WaterBodyCustomComponentClass;                              // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBody.SetWaterWaves
	// void SetWaterWaves(class UWaterWavesBase* InWaterWaves);                                                              // [0x7a5b764] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.SetWaterMaterial
	// void SetWaterMaterial(class UMaterialInterface* InMaterial);                                                          // [0x7a5b640] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.OnWaterBodyChanged
	// void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);                                // [0x7a5af20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
	// FVector GetWaterVelocityVectorAtSplineInputKey(float InKey);                                                          // [0x7a5ac94] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterVelocityAtSplineInputKey
	// float GetWaterVelocityAtSplineInputKey(float InKey);                                                                  // [0x7a5ab64] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                        // [0x66ee684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterMaterialInstance();                                                           // [0x7a5a7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterBodyType
	// EWaterBodyType GetWaterBodyType();                                                                                    // [0x7a5a7a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterBodyComponent
	// class UWaterBodyComponent* GetWaterBodyComponent();                                                                   // [0x7a5a788] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();                                          // [0x7a5a6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();                                           // [0x7a5a698] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetIslands
	// TArray<AWaterBodyIsland*> GetIslands();                                                                               // [0x7a5a2cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetExclusionVolumes
	// TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes();                                                             // [0x7a5a240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetAudioIntensityAtSplineInputKey
	// float GetAudioIntensityAtSplineInputKey(float InKey);                                                                 // [0x7a59fe0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterBodyGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBodyGenerator : public UObject
{ 
public:
};

/// Struct /Script/Water.UnderwaterPostProcessSettings
/// Size: 0x0710 (0x000000 - 0x000710)
struct FUnderwaterPostProcessSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Priority;                                                   // 0x0004   (0x0004)  
	float                                              BlendRadius;                                                // 0x0008   (0x0004)  
	float                                              BlendWeight;                                                // 0x000C   (0x0004)  
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0010   (0x06F0)  
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                              // 0x0700   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0708   (0x0008)  MISSED
};

/// Struct /Script/Water.WaterCurveSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWaterCurveSettings
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterFalloffSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FWaterFalloffSettings
{ 
	EWaterBrushFalloffMode                             FalloffMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FalloffAngle;                                               // 0x0004   (0x0004)  
	float                                              FalloffWidth;                                               // 0x0008   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x000C   (0x0004)  
	float                                              ZOffset;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectBlurring
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWaterBrushEffectBlurring
{ 
	bool                                               bBlurShape;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Radius;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectCurlNoise
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWaterBrushEffectCurlNoise
{ 
	float                                              Curl1Amount;                                                // 0x0000   (0x0004)  
	float                                              Curl2Amount;                                                // 0x0004   (0x0004)  
	float                                              Curl1Tiling;                                                // 0x0008   (0x0004)  
	float                                              Curl2Tiling;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectDisplacement
/// Size: 0x0028 (0x000000 - 0x000028)
struct FWaterBrushEffectDisplacement
{ 
	float                                              DisplacementHeight;                                         // 0x0000   (0x0004)  
	float                                              DisplacementTiling;                                         // 0x0004   (0x0004)  
	class UTexture2D*                                  Texture;                                                    // 0x0008   (0x0008)  
	float                                              Midpoint;                                                   // 0x0010   (0x0004)  
	FLinearColor                                       Channel;                                                    // 0x0014   (0x0010)  
	float                                              WeightmapInfluence;                                         // 0x0024   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectSmoothBlending
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWaterBrushEffectSmoothBlending
{ 
	float                                              InnerSmoothDistance;                                        // 0x0000   (0x0004)  
	float                                              OuterSmoothDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectTerracing
/// Size: 0x0014 (0x000000 - 0x000014)
struct FWaterBrushEffectTerracing
{ 
	float                                              TerraceAlpha;                                               // 0x0000   (0x0004)  
	float                                              TerraceSpacing;                                             // 0x0004   (0x0004)  
	float                                              TerraceSmoothness;                                          // 0x0008   (0x0004)  
	float                                              MaskLength;                                                 // 0x000C   (0x0004)  
	float                                              MaskStartOffset;                                            // 0x0010   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffects
/// Size: 0x0060 (0x000000 - 0x000060)
struct FWaterBrushEffects
{ 
	FWaterBrushEffectBlurring                          Blurring;                                                   // 0x0000   (0x0008)  
	FWaterBrushEffectCurlNoise                         CurlNoise;                                                  // 0x0008   (0x0010)  
	FWaterBrushEffectDisplacement                      displacement;                                               // 0x0018   (0x0028)  
	FWaterBrushEffectSmoothBlending                    SmoothBlending;                                             // 0x0040   (0x0008)  
	FWaterBrushEffectTerracing                         Terracing;                                                  // 0x0048   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterBodyHeightmapSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FWaterBodyHeightmapSettings
{ 
	EWaterBrushBlendType                               BlendMode;                                                  // 0x0000   (0x0001)  
	bool                                               bInvertShape;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FWaterFalloffSettings                              FalloffSettings;                                            // 0x0004   (0x0014)  
	FWaterBrushEffects                                 Effects;                                                    // 0x0018   (0x0060)  
	int32_t                                            Priority;                                                   // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterBodyStaticMeshSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWaterBodyStaticMeshSettings
{ 
	bool                                               bEnableWaterBodyStaticMesh;                                 // 0x0000   (0x0001)  
	bool                                               bSectionWaterBodyStaticMesh;                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	double                                             SectionSize;                                                // 0x0008   (0x0008)  
};

/// Class /Script/Water.WaterBodyComponent
/// Size: 0x0FB0 (0x000500 - 0x0014B0)
class UWaterBodyComponent : public UPrimitiveComponent
{ 
public:
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0500   (0x0008)  
	float                                              TargetWaveMaskDepth;                                        // 0x0508   (0x0004)  
	float                                              MaxWaveHeightOffset;                                        // 0x050C   (0x0004)  
	FUnderwaterPostProcessSettings                     UnderwaterPostProcessSettings;                              // 0x0510   (0x0710)  
	FWaterCurveSettings                                CurveSettings;                                              // 0x0C20   (0x0020)  
	class UMaterialInterface*                          WaterMaterial;                                              // 0x0C40   (0x0008)  
	class UMaterialInterface*                          WaterHLODMaterial;                                          // 0x0C48   (0x0008)  
	class UMaterialInterface*                          WaterStaticMeshMaterial;                                    // 0x0C50   (0x0008)  
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                              // 0x0C58   (0x0008)  
	class UMaterialInterface*                          WaterInfoMaterial;                                          // 0x0C60   (0x0008)  
	FWaterBodyHeightmapSettings                        WaterHeightmapSettings;                                     // 0x0C68   (0x0080)  
	float                                              ShapeDilation;                                              // 0x0CE8   (0x0004)  
	float                                              CollisionHeightOffset;                                      // 0x0CEC   (0x0004)  
	bool                                               bAffectsLandscape;                                          // 0x0CF0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0CF1   (0x0007)  MISSED
	FWaterBodyStaticMeshSettings                       StaticMeshSettings;                                         // 0x0CF8   (0x0010)  
	int32_t                                            WaterBodyIndex;                                             // 0x0D08   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0D0C   (0x0004)  MISSED
	class UStaticMesh*                                 WaterMeshOverride;                                          // 0x0D10   (0x0008)  
	bool                                               bAlwaysGenerateWaterMeshTiles;                              // 0x0D18   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0D19   (0x0003)  MISSED
	int32_t                                            OverlapMaterialPriority;                                    // 0x0D1C   (0x0004)  
	class UWaterSplineMetadata*                        WaterSplineMetadata;                                        // 0x0D20   (0x0008)  
	class UMaterialInstanceDynamic*                    WaterMID;                                                   // 0x0D28   (0x0008)  
	class UMaterialInstanceDynamic*                    WaterStaticMeshMID;                                         // 0x0D30   (0x0008)  
	class UMaterialInstanceDynamic*                    UnderwaterPostProcessMID;                                   // 0x0D38   (0x0008)  
	class UMaterialInstanceDynamic*                    WaterInfoMID;                                               // 0x0D40   (0x0008)  
	SDK_UNDEFINED(16,2907) /* TArray<TWeakObjectPtr<AWaterBodyIsland*>> */ __um(WaterBodyIslands);                 // 0x0D48   (0x0010)  
	SDK_UNDEFINED(16,2908) /* TArray<TWeakObjectPtr<AWaterBodyExclusionVolume*>> */ __um(WaterBodyExclusionVolumes); // 0x0D58   (0x0010)  
	SDK_UNDEFINED(8,2909) /* TWeakObjectPtr<ALandscapeProxy*> */ __um(Landscape);                                  // 0x0D68   (0x0008)  
	SDK_UNDEFINED(32,2910) /* TWeakObjectPtr<AWaterZone*> */ __um(OwningWaterZone);                                // 0x0D70   (0x0020)  
	SDK_UNDEFINED(32,2911) /* TWeakObjectPtr<AWaterZone*> */ __um(WaterZoneOverride);                              // 0x0D90   (0x0020)  
	FPostProcessSettings                               CurrentPostProcessSettings;                                 // 0x0DB0   (0x06F0)  
	class UClass*                                      WaterNavAreaClass;                                          // 0x14A0   (0x0008)  
	double                                             FixedWaterDepth;                                            // 0x14A8   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBodyComponent.SetWaterZoneOverride
	// void SetWaterZoneOverride(TWeakObjectPtr<AWaterZone*>& InWaterZoneOverride);                                          // [0x7a5b7e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.SetWaterStaticMeshMaterial
	// void SetWaterStaticMeshMaterial(class UMaterialInterface* InMaterial);                                                // [0x7a5b6c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.SetWaterMaterial
	// void SetWaterMaterial(class UMaterialInterface* InMaterial);                                                          // [0x367e58c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial
	// void SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial); // [0x7a5b188] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.SetUnderwaterPostProcessMaterial
	// void SetUnderwaterPostProcessMaterial(class UMaterialInterface* InMaterial);                                          // [0x7a5b0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.OnWaterBodyChanged
	// void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged, bool bUserTriggeredChanged);    // [0x7a5afe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterWaves
	// class UWaterWavesBase* GetWaterWaves();                                                                               // [0x7a5ad3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
	// float GetWaterVelocityAtSplineInputKey(float InKey);                                                                  // [0x7a5abfc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
	// void GetWaterSurfaceInfoAtLocation(FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth); // [0x7a5a830] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterStaticMeshMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterStaticMeshMaterialInstance();                                                 // [0x3d35da4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                        // [0x7a5a80c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterMaterialInstance();                                                           // [0x178df64] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterMaterial
	// class UMaterialInterface* GetWaterMaterial();                                                                         // [0x7a5a7c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterLODMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterLODMaterialInstance();                                                        // [0x3d35da4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterInfoMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();                                                       // [0x3b551ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterBodyActor
	// class AWaterBody* GetWaterBodyActor();                                                                                // [0x7a5a764] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
	// class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();                                           // [0x3e41c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetStandardRenderableComponents
	// TArray<UPrimitiveComponent*> GetStandardRenderableComponents();                                                       // [0x7a5a720] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();                                          // [0x35d4460] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetRiverToOceanTransitionMaterial
	// class UMaterialInterface* GetRiverToOceanTransitionMaterial();                                                        // [0x7a5a6c8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();                                           // [0x35d4488] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetRiverToLakeTransitionMaterial
	// class UMaterialInterface* GetRiverToLakeTransitionMaterial();                                                         // [0x7a5a670] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetMaxWaveHeight
	// float GetMaxWaveHeight();                                                                                             // [0x7a5a648] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetIslands
	// TArray<AWaterBodyIsland*> GetIslands();                                                                               // [0x7a5a310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetExclusionVolumes
	// TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes();                                                             // [0x7a5a28c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetCollisionComponents
	// TArray<UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents);                                   // [0x7a5a178] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.CustomMeshGenerator
/// Size: 0x0008 (0x000028 - 0x000030)
class UCustomMeshGenerator : public UWaterBodyGenerator
{ 
public:
	class UStaticMeshComponent*                        MeshComp;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/Water.WaterBodyCustom
/// Size: 0x0000 (0x000300 - 0x000300)
class AWaterBodyCustom : public AWaterBody
{ 
public:
};

/// Class /Script/Water.WaterBodyCustomComponent
/// Size: 0x0010 (0x0014B0 - 0x0014C0)
#pragma pack(push, 0x1)
class alignas(0x10) UWaterBodyCustomComponent : public UWaterBodyComponent
{ 
public:
	class UStaticMeshComponent*                        MeshComp;                                                   // 0x14B0   (0x0008)  
};
#pragma pack(pop)

/// Class /Script/Water.WaterBodyExclusionVolume
/// Size: 0x0018 (0x0002D8 - 0x0002F0)
class AWaterBodyExclusionVolume : public APhysicsVolume
{ 
public:
	EWaterExclusionMode                                ExclusionMode;                                              // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02DC   (0x0004)  MISSED
	SDK_UNDEFINED(16,2912) /* TArray<TWeakObjectPtr<AWaterBody*>> */ __um(WaterBodies);                            // 0x02E0   (0x0010)  
};

/// Class /Script/Water.WaterBodyHLODBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBodyHLODBuilder : public UHLODBuilder
{ 
public:
};

/// Class /Script/Water.WaterBodyInfoMeshComponent
/// Size: 0x0010 (0x0005C0 - 0x0005D0)
class UWaterBodyInfoMeshComponent : public UWaterBodyMeshComponent
{ 
public:
	bool                                               bIsDilatedMesh;                                             // 0x05C0   (0x0001)  
	bool                                               bIsConservativeRasterCompatible;                            // 0x05C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x05C2   (0x000E)  MISSED
};

/// Class /Script/Water.WaterBodyIsland
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AWaterBodyIsland : public AActor
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0290   (0x0008)  MISSED
	class UWaterSplineComponent*                       SplineComp;                                                 // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBodyIsland.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                        // [0x66ee684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.LakeGenerator
/// Size: 0x0018 (0x000028 - 0x000040)
class ULakeGenerator : public UWaterBodyGenerator
{ 
public:
	class UStaticMeshComponent*                        LakeMeshComp;                                               // 0x0028   (0x0008)  
	class UBoxComponent*                               LakeCollisionComp;                                          // 0x0030   (0x0008)  
	class ULakeCollisionComponent*                     LakeCollision;                                              // 0x0038   (0x0008)  
};

/// Class /Script/Water.WaterBodyLake
/// Size: 0x0000 (0x000300 - 0x000300)
class AWaterBodyLake : public AWaterBody
{ 
public:
};

/// Class /Script/Water.WaterBodyLakeComponent
/// Size: 0x0010 (0x0014B0 - 0x0014C0)
class UWaterBodyLakeComponent : public UWaterBodyComponent
{ 
public:
	class UStaticMeshComponent*                        LakeMeshComp;                                               // 0x14B0   (0x0008)  
	class ULakeCollisionComponent*                     LakeCollision;                                              // 0x14B8   (0x0008)  
};

/// Class /Script/Water.OceanGenerator
/// Size: 0x0020 (0x000028 - 0x000048)
class UOceanGenerator : public UWaterBodyGenerator
{ 
public:
	TArray<class UOceanBoxCollisionComponent*>         CollisionBoxes;                                             // 0x0028   (0x0010)  
	TArray<class UOceanCollisionComponent*>            CollisionHullSets;                                          // 0x0038   (0x0010)  
};

/// Class /Script/Water.WaterBodyOcean
/// Size: 0x0000 (0x000300 - 0x000300)
class AWaterBodyOcean : public AWaterBody
{ 
public:
};

/// Class /Script/Water.WaterBodyOceanComponent
/// Size: 0x0060 (0x0014B0 - 0x001510)
class UWaterBodyOceanComponent : public UWaterBodyComponent
{ 
public:
	TArray<class UOceanBoxCollisionComponent*>         CollisionBoxes;                                             // 0x14B0   (0x0010)  
	TArray<class UOceanCollisionComponent*>            CollisionHullSets;                                          // 0x14C0   (0x0010)  
	FVector                                            CollisionExtents;                                           // 0x14D0   (0x0018)  
	FVector2D                                          OceanExtents;                                               // 0x14E8   (0x0010)  
	FVector2D                                          SavedZoneLocation;                                          // 0x14F8   (0x0010)  
	bool                                               bCenterOnWaterZone;                                         // 0x1508   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x1509   (0x0003)  MISSED
	float                                              HeightOffset;                                               // 0x150C   (0x0004)  
};

/// Class /Script/Water.RiverGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class URiverGenerator : public UWaterBodyGenerator
{ 
public:
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                       // 0x0028   (0x0010)  
};

/// Class /Script/Water.WaterBodyRiver
/// Size: 0x0000 (0x000300 - 0x000300)
class AWaterBodyRiver : public AWaterBody
{ 
public:
};

/// Class /Script/Water.WaterBodyRiverComponent
/// Size: 0x0030 (0x0014B0 - 0x0014E0)
class UWaterBodyRiverComponent : public UWaterBodyComponent
{ 
public:
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                       // 0x14B0   (0x0010)  
	class UMaterialInterface*                          LakeTransitionMaterial;                                     // 0x14C0   (0x0008)  
	class UMaterialInstanceDynamic*                    LakeTransitionMID;                                          // 0x14C8   (0x0008)  
	class UMaterialInterface*                          OceanTransitionMaterial;                                    // 0x14D0   (0x0008)  
	class UMaterialInstanceDynamic*                    OceanTransitionMID;                                         // 0x14D8   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBodyRiverComponent.SetOceanTransitionMaterial
	// void SetOceanTransitionMaterial(class UMaterialInterface* InMat);                                                     // [0x7a74864] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyRiverComponent.SetLakeTransitionMaterial
	// void SetLakeTransitionMaterial(class UMaterialInterface* InMat);                                                      // [0x7a7474c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyRiverComponent.SetLakeAndOceanTransitionMaterials
	// void SetLakeAndOceanTransitionMaterials(class UMaterialInterface* InLakeTransition, class UMaterialInterface* InOceanTransition); // [0x37c611c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Water.WaterBrushActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBrushActorInterface : public UInterface
{ 
public:
};

/// Class /Script/Water.WaterMeshComponent
/// Size: 0x01D0 (0x000540 - 0x000710)
class UWaterMeshComponent : public UMeshComponent
{ 
public:
	int32_t                                            ForceCollapseDensityLevel;                                  // 0x0538   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x053C   (0x0004)  MISSED
	class UMaterialInterface*                          FarDistanceMaterial;                                        // 0x0540   (0x0008)  
	float                                              FarDistanceMeshExtent;                                      // 0x0548   (0x0004)  
	float                                              TileSize;                                                   // 0x054C   (0x0004)  
	FIntPoint                                          QuadTreeResolution;                                         // 0x0550   (0x0008)  
	unsigned char                                      UnknownData01_5[0x100];                                     // 0x0558   (0x0100)  MISSED
	SDK_UNDEFINED(80,2913) /* TSet<UMaterialInterface*> */ __um(UsedMaterials);                                    // 0x0658   (0x0050)  
	SDK_UNDEFINED(80,2914) /* TMap<UMaterialInterface*, UMaterialInstanceDynamic*> */ __um(MaterialToMID);         // 0x06A8   (0x0050)  
	bool                                               bUseFarMeshWithoutOcean;                                    // 0x06F8   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x06F9   (0x000F)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x0708   (0x0004)  
	float                                              LODScale;                                                   // 0x070C   (0x0004)  


	/// Functions
	// Function /Script/Water.WaterMeshComponent.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x7a74524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterRuntimeSettings
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UWaterRuntimeSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(1,2915) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannelForWaterTraces);               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(32,2916) /* TWeakObjectPtr<UMaterialParameterCollection*> */ __um(MaterialParameterCollection);  // 0x0038   (0x0020)  
	float                                              WaterBodyIconWorldZOffset;                                  // 0x0058   (0x0004)  
	FName                                              DefaultWaterCollisionProfileName;                           // 0x005C   (0x0004)  
	SDK_UNDEFINED(32,2917) /* TWeakObjectPtr<UMaterialInterface*> */ __um(DefaultWaterInfoMaterial);               // 0x0060   (0x0020)  
	class UClass*                                      WaterBodyRiverComponentClass;                               // 0x0080   (0x0008)  
	class UClass*                                      WaterBodyLakeComponentClass;                                // 0x0088   (0x0008)  
	class UClass*                                      WaterBodyOceanComponentClass;                               // 0x0090   (0x0008)  
	class UClass*                                      WaterBodyCustomComponentClass;                              // 0x0098   (0x0008)  
	bool                                               bWarnOnMismatchOceanExtent;                                 // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Struct /Script/Water.WaterSplineCurveDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWaterSplineCurveDefaults
{ 
	float                                              DefaultDepth;                                               // 0x0000   (0x0004)  
	float                                              DefaultWidth;                                               // 0x0004   (0x0004)  
	float                                              DefaultVelocity;                                            // 0x0008   (0x0004)  
	float                                              DefaultAudioIntensity;                                      // 0x000C   (0x0004)  
};

/// Class /Script/Water.WaterSplineComponent
/// Size: 0x0020 (0x000600 - 0x000620)
class UWaterSplineComponent : public USplineComponent
{ 
public:
	FWaterSplineCurveDefaults                          WaterSplineDefaults;                                        // 0x0600   (0x0010)  
	FWaterSplineCurveDefaults                          PreviousWaterSplineDefaults;                                // 0x0610   (0x0010)  


	/// Functions
	// Function /Script/Water.WaterSplineComponent.K2_SynchronizeAndBroadcastDataChange
	// void K2_SynchronizeAndBroadcastDataChange();                                                                          // [0x36203b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Water.WaterSplineMetadata
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UWaterSplineMetadata : public USplineMetadata
{ 
public:
	FInterpCurveFloat                                  Depth;                                                      // 0x0028   (0x0018)  
	FInterpCurveFloat                                  WaterVelocityScalar;                                        // 0x0040   (0x0018)  
	FInterpCurveFloat                                  RiverWidth;                                                 // 0x0058   (0x0018)  
	FInterpCurveFloat                                  AudioIntensity;                                             // 0x0070   (0x0018)  
	FInterpCurveVector                                 WaterVelocity;                                              // 0x0088   (0x0018)  
};

/// Class /Script/Water.WaterSubsystem
/// Size: 0x0140 (0x000040 - 0x000180)
class UWaterSubsystem : public UTickableWorldSubsystem
{ 
public:
	class ABuoyancyManager*                            BuoyancyManager;                                            // 0x0040   (0x0008)  
	SDK_UNDEFINED(16,2918) /* FMulticastInlineDelegate */ __um(OnCameraUnderwaterStateChanged);                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,2919) /* FMulticastInlineDelegate */ __um(OnWaterScalabilityChanged);                         // 0x0058   (0x0010)  
	class UStaticMesh*                                 DefaultRiverMesh;                                           // 0x0068   (0x0008)  
	class UStaticMesh*                                 DefaultLakeMesh;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0078   (0x0028)  MISSED
	class UMaterialParameterCollection*                MaterialParameterCollection;                                // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0xD8];                                      // 0x00A8   (0x00D8)  MISSED


	/// Functions
	// Function /Script/Water.WaterSubsystem.SetOceanFloodHeight
	// void SetOceanFloodHeight(float InFloodHeight);                                                                        // [0x7a747e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.PrintToWaterLog
	// void PrintToWaterLog(FString Message, bool bWarning);                                                                 // [0x7a74578] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.IsWaterRenderingEnabled
	// bool IsWaterRenderingEnabled();                                                                                       // [0x7a74558] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	// bool IsUnderwaterPostProcessEnabled();                                                                                // [0x7a7453c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	// bool IsShallowWaterSimulationEnabled();                                                                               // [0x3f540b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetWaterTimeSeconds
	// float GetWaterTimeSeconds();                                                                                          // [0x7a744fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	// float GetSmoothedWorldTimeSeconds();                                                                                  // [0x7a744dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	// int32_t GetShallowWaterSimulationRenderTargetSize();                                                                  // [0x7a744c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	// int32_t GetShallowWaterMaxImpulseForces();                                                                            // [0x399a4c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	// int32_t GetShallowWaterMaxDynamicForces();                                                                            // [0x7a744ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetOceanTotalHeight
	// float GetOceanTotalHeight();                                                                                          // [0x7a74488] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanFloodHeight
	// float GetOceanFloodHeight();                                                                                          // [0x7a74470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanBaseHeight
	// float GetOceanBaseHeight();                                                                                           // [0x7a7444c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetCameraUnderwaterDepth
	// float GetCameraUnderwaterDepth();                                                                                     // [0x5f95008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterWavesAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UWaterWavesAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UWaterWaves*                                 WaterWaves;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/Water.WaterWavesAssetReference
/// Size: 0x0008 (0x000028 - 0x000030)
class UWaterWavesAssetReference : public UWaterWavesBase
{ 
public:
	class UWaterWavesAsset*                            WaterWavesAsset;                                            // 0x0028   (0x0008)  
};

/// Class /Script/Water.WaterZone
/// Size: 0x00A8 (0x000290 - 0x000338)
class AWaterZone : public AActor
{ 
public:
	class UTextureRenderTarget2D*                      WaterInfoTexture;                                           // 0x0290   (0x0008)  
	SDK_UNDEFINED(16,2920) /* TArray<TWeakObjectPtr<UWaterBodyComponent*>> */ __um(OwnedWaterBodies);              // 0x0298   (0x0010)  
	FIntPoint                                          RenderTargetResolution;                                     // 0x02A8   (0x0008)  
	class UWaterMeshComponent*                         WaterMesh;                                                  // 0x02B0   (0x0008)  
	FVector2D                                          ZoneExtent;                                                 // 0x02B8   (0x0010)  
	float                                              CaptureZOffset;                                             // 0x02C8   (0x0004)  
	bool                                               bHalfPrecisionTexture;                                      // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02CD   (0x0003)  MISSED
	int32_t                                            VelocityBlurRadius;                                         // 0x02D0   (0x0004)  
	int32_t                                            OverlapPriority;                                            // 0x02D4   (0x0004)  
	bool                                               bEnableLocalOnlyTessellation;                               // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02D9   (0x0007)  MISSED
	FVector                                            LocalTessellationExtent;                                    // 0x02E0   (0x0018)  
	unsigned char                                      UnknownData02_5[0x28];                                      // 0x02F8   (0x0028)  MISSED
	int32_t                                            WaterZoneIndex;                                             // 0x0320   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0324   (0x0004)  MISSED
	SDK_UNDEFINED(16,2921) /* FMulticastInlineDelegate */ __um(OnWaterInfoTextureCreated);                         // 0x0328   (0x0010)  


	/// Functions
	// Function /Script/Water.WaterZone.SetFarMeshMaterial
	// void SetFarMeshMaterial(class UMaterialInterface* InFarMaterial);                                                     // [0x2efac44] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterZone.GetWaterZoneIndex
	// int32_t GetWaterZoneIndex();                                                                                          // [0x7a758dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Water.WaterBodyWeightmapSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWaterBodyWeightmapSettings
{ 
	float                                              FalloffWidth;                                               // 0x0000   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x0004   (0x0004)  
	class UTexture2D*                                  ModulationTexture;                                          // 0x0008   (0x0008)  
	float                                              TextureTiling;                                              // 0x0010   (0x0004)  
	float                                              TextureInfluence;                                           // 0x0014   (0x0004)  
	float                                              Midpoint;                                                   // 0x0018   (0x0004)  
	float                                              FinalOpacity;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectCurves
/// Size: 0x0020 (0x000000 - 0x000020)
struct FWaterBrushEffectCurves
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

