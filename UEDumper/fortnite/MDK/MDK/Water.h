
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore
/// dependency: PhysicsCore

/// Class /Script/Water.WaterBodyMeshComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class UWaterBodyMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/Water.WaterBodyStaticMeshComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class UWaterBodyStaticMeshComponent : public UWaterBodyMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/Water.BuoyancyComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UBuoyancyComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TArray<FSphericalPontoon>)                 Pontoons                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnteredWaterDelegate                                      OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExitedWaterDelegate                                       OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FBuoyancyData)                             BuoyancyData                                                OFFSET(getStruct<T>, {0xD0, 144, 0, 0})
	CMember(TArray<class UWaterBodyComponent*>)        CurrentWaterBodyComponents                                  OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(class UPrimitiveComponent*)                SimulatingComponent                                         OFFSET(get<T>, {0x170, 8, 0, 0})


	/// Functions
	// Function /Script/Water.BuoyancyComponent.OnPontoonExitedWater
	// void OnPontoonExitedWater(FSphericalPontoon& Pontoon);                                                                   // [0x82ac1e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.OnPontoonEnteredWater
	// void OnPontoonEnteredWater(FSphericalPontoon& Pontoon);                                                                  // [0x82ac124] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.IsOverlappingWaterBody
	// bool IsOverlappingWaterBody();                                                                                           // [0x82ac108] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.BuoyancyComponent.IsInWaterBody
	// bool IsInWaterBody();                                                                                                    // [0x82ac0ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	// void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, FVector& OutWaterVelocity); // [0x82ab69c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.GetCurrentWaterBodyComponents
	// TArray<UWaterBodyComponent*> GetCurrentWaterBodyComponents();                                                            // [0x82ab574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.BuoyancyManager
/// Size: 0x00C8 (0x000290 - 0x000358)
class ABuoyancyManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(TArray<class UBuoyancyComponent*>)         BuoyancyComponents                                          OFFSET(get<T>, {0x2E0, 16, 0, 0})


	/// Functions
	// Function /Script/Water.BuoyancyManager.GetBuoyancyComponentManager
	// bool GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager*& Manager);                   // [0x82ab3c8] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Water.EnvQueryTest_InsideWaterBody
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bIncludeWaves                                               OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(bool)                                      bSimpleWaves                                                OFFSET(get<bool>, {0x1F9, 1, 0, 0})
	DMember(bool)                                      bIgnoreExclusionVolumes                                     OFFSET(get<bool>, {0x1FA, 1, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UGerstnerWaterWaveGeneratorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
	// void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves);                                                             // [0x82ab290] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSimple
/// Size: 0x0038 (0x000028 - 0x000060)
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   NumWaves                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     Randomness                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MinWavelength                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxWavelength                                               OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WavelengthFalloff                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MinAmplitude                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxAmplitude                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     AmplitudeFalloff                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     WindAngleDeg                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     DirectionAngularSpreadDeg                                   OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     SmallWaveSteepness                                          OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     LargeWaveSteepness                                          OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     SteepnessFalloff                                            OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSpectrum
/// Size: 0x0018 (0x000028 - 0x000040)
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EWaveSpectrumType)                         SpectrumType                                                OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TArray<FGerstnerWaveOctave>)               Octaves                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Water.WaterWavesBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterWavesBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.WaterWaves
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterWaves : public UWaterWavesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.GerstnerWaterWaves
/// Size: 0x0020 (0x000028 - 0x000048)
class UGerstnerWaterWaves : public UWaterWaves
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UGerstnerWaterWaveGeneratorBase*)    GerstnerWaveGenerator                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FGerstnerWave>)                     GerstnerWaves                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     MaxWaveHeight                                               OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/Water.GerstnerWaterWaveSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Water.LakeCollisionComponent
/// Size: 0x0020 (0x000500 - 0x000520)
class ULakeCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(class UBodySetup*)                         CachedBodySetup                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(FVector)                                   BoxExtent                                                   OFFSET(getStruct<T>, {0x508, 24, 0, 0})
};

/// Class /Script/Water.NiagaraDataInterfaceWater
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UWaterBodyComponent*)                SourceBodyComponent                                         OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Water.NiagaraWaterFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Water.NiagaraWaterFunctionLibrary.SetWaterBodyComponent
	// void SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UWaterBodyComponent* WaterBodyComponent); // [0x82acd0c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Water.NiagaraWaterFunctionLibrary.SetWaterBody
	// void SetWaterBody(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class AWaterBody* WaterBody);            // [0x82ac5d8] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/Water.OceanCollisionComponent
/// Size: 0x0040 (0x000500 - 0x000540)
class UOceanCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(class UBodySetup*)                         CachedBodySetup                                             OFFSET(get<T>, {0x500, 8, 0, 0})
};

/// Class /Script/Water.OceanBoxCollisionComponent
/// Size: 0x0000 (0x000540 - 0x000540)
class UOceanBoxCollisionComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
};

/// Class /Script/Water.WaterBody
/// Size: 0x0070 (0x000290 - 0x000300)
class AWaterBody : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class UWaterSplineComponent*)              SplineComp                                                  OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class UWaterSplineMetadata*)               WaterSplineMetadata                                         OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UWaterBodyComponent*)                WaterBodyComponent                                          OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int32_t)                                   WaterBodyIndex                                              OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
	CMember(EWaterBodyType)                            WaterBodyType                                               OFFSET(get<T>, {0x2B4, 1, 0, 0})
	CMember(class UWaterWavesBase*)                    WaterWaves                                                  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UWaterBodyInfoMeshComponent*)        WaterInfoMeshComponent                                      OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UWaterBodyInfoMeshComponent*)        DilatedWaterInfoMeshComponent                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<class UWaterBodyStaticMeshComponent*>) WaterBodyStaticMeshComponents                            OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(class UClass*)                             WaterBodyRiverComponentClass                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UClass*)                             WaterBodyLakeComponentClass                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class UClass*)                             WaterBodyOceanComponentClass                                OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class UClass*)                             WaterBodyCustomComponentClass                               OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/Water.WaterBody.SetWaterWaves
	// void SetWaterWaves(class UWaterWavesBase* InWaterWaves);                                                                 // [0x82ad608] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.SetWaterMaterial
	// void SetWaterMaterial(class UMaterialInterface* InMaterial);                                                             // [0x82ad450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.OnWaterBodyChanged
	// void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);                                   // [0x82ac2ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterVelocityVectorAtSplineInputKey
	// FVector GetWaterVelocityVectorAtSplineInputKey(float InKey);                                                             // [0x82ac020] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterVelocityAtSplineInputKey
	// float GetWaterVelocityAtSplineInputKey(float InKey);                                                                     // [0x82abef0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0x6888d1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterMaterialInstance();                                                              // [0x82abb6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterBodyType
	// EWaterBodyType GetWaterBodyType();                                                                                       // [0x82abb2c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterBodyComponent
	// class UWaterBodyComponent* GetWaterBodyComponent();                                                                      // [0x82abb14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();                                             // [0x82aba7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();                                              // [0x82aba24] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetIslands
	// TArray<AWaterBodyIsland*> GetIslands();                                                                                  // [0x82ab61c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetExclusionVolumes
	// TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes();                                                                // [0x82ab590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetAudioIntensityAtSplineInputKey
	// float GetAudioIntensityAtSplineInputKey(float InKey);                                                                    // [0x82ab330] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterBodyGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBodyGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.WaterBodyComponent
/// Size: 0x0FB0 (0x000500 - 0x0014B0)
class UWaterBodyComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	CMember(class UPhysicalMaterial*)                  PhysicalMaterial                                            OFFSET(get<T>, {0x500, 8, 0, 0})
	DMember(float)                                     TargetWaveMaskDepth                                         OFFSET(get<float>, {0x508, 4, 0, 0})
	DMember(float)                                     MaxWaveHeightOffset                                         OFFSET(get<float>, {0x50C, 4, 0, 0})
	SMember(FUnderwaterPostProcessSettings)            UnderwaterPostProcessSettings                               OFFSET(getStruct<T>, {0x510, 1808, 0, 0})
	SMember(FWaterCurveSettings)                       CurveSettings                                               OFFSET(getStruct<T>, {0xC20, 32, 0, 0})
	CMember(class UMaterialInterface*)                 WaterMaterial                                               OFFSET(get<T>, {0xC40, 8, 0, 0})
	CMember(class UMaterialInterface*)                 WaterHLODMaterial                                           OFFSET(get<T>, {0xC48, 8, 0, 0})
	CMember(class UMaterialInterface*)                 WaterStaticMeshMaterial                                     OFFSET(get<T>, {0xC50, 8, 0, 0})
	CMember(class UMaterialInterface*)                 UnderwaterPostProcessMaterial                               OFFSET(get<T>, {0xC58, 8, 0, 0})
	CMember(class UMaterialInterface*)                 WaterInfoMaterial                                           OFFSET(get<T>, {0xC60, 8, 0, 0})
	SMember(FWaterBodyHeightmapSettings)               WaterHeightmapSettings                                      OFFSET(getStruct<T>, {0xC68, 128, 0, 0})
	DMember(float)                                     ShapeDilation                                               OFFSET(get<float>, {0xCE8, 4, 0, 0})
	DMember(float)                                     CollisionHeightOffset                                       OFFSET(get<float>, {0xCEC, 4, 0, 0})
	DMember(bool)                                      bAffectsLandscape                                           OFFSET(get<bool>, {0xCF0, 1, 0, 0})
	SMember(FWaterBodyStaticMeshSettings)              StaticMeshSettings                                          OFFSET(getStruct<T>, {0xCF8, 16, 0, 0})
	DMember(int32_t)                                   WaterBodyIndex                                              OFFSET(get<int32_t>, {0xD08, 4, 0, 0})
	CMember(class UStaticMesh*)                        WaterMeshOverride                                           OFFSET(get<T>, {0xD10, 8, 0, 0})
	DMember(bool)                                      bAlwaysGenerateWaterMeshTiles                               OFFSET(get<bool>, {0xD18, 1, 0, 0})
	DMember(int32_t)                                   OverlapMaterialPriority                                     OFFSET(get<int32_t>, {0xD1C, 4, 0, 0})
	CMember(class UWaterSplineMetadata*)               WaterSplineMetadata                                         OFFSET(get<T>, {0xD20, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           WaterMID                                                    OFFSET(get<T>, {0xD28, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           WaterStaticMeshMID                                          OFFSET(get<T>, {0xD30, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           UnderwaterPostProcessMID                                    OFFSET(get<T>, {0xD38, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           WaterInfoMID                                                OFFSET(get<T>, {0xD40, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<AWaterBodyIsland*>>) WaterBodyIslands                                            OFFSET(get<T>, {0xD48, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr<AWaterBodyExclusionVolume*>>) WaterBodyExclusionVolumes                          OFFSET(get<T>, {0xD58, 16, 0, 0})
	CMember(TWeakObjectPtr<ALandscapeProxy*>)          Landscape                                                   OFFSET(get<T>, {0xD68, 8, 0, 0})
	CMember(TWeakObjectPtr<AWaterZone*>)               OwningWaterZone                                             OFFSET(get<T>, {0xD70, 32, 0, 0})
	CMember(TWeakObjectPtr<AWaterZone*>)               WaterZoneOverride                                           OFFSET(get<T>, {0xD90, 32, 0, 0})
	SMember(FPostProcessSettings)                      CurrentPostProcessSettings                                  OFFSET(getStruct<T>, {0xDB0, 1776, 0, 0})
	CMember(class UClass*)                             WaterNavAreaClass                                           OFFSET(get<T>, {0x14A0, 8, 0, 0})
	DMember(double)                                    FixedWaterDepth                                             OFFSET(get<double>, {0x14A8, 8, 0, 0})


	/// Functions
	// Function /Script/Water.WaterBodyComponent.SetWaterZoneOverride
	// void SetWaterZoneOverride(TWeakObjectPtr<AWaterZone*>& InWaterZoneOverride);                                             // [0x82ad688] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.SetWaterStaticMeshMaterial
	// void SetWaterStaticMeshMaterial(class UMaterialInterface* InMaterial);                                                   // [0x82ad554] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.SetWaterMaterial
	// void SetWaterMaterial(class UMaterialInterface* InMaterial);                                                             // [0x82ad4d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.SetWaterAndUnderWaterPostProcessMaterial
	// void SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial); // [0x82ac514] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.SetUnderwaterPostProcessMaterial
	// void SetUnderwaterPostProcessMaterial(class UMaterialInterface* InMaterial);                                             // [0x82ac47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.OnWaterBodyChanged
	// void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged, bool bUserTriggeredChanged);       // [0x82ac370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterWaves
	// class UWaterWavesBase* GetWaterWaves();                                                                                  // [0x82ac0c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterVelocityAtSplineInputKey
	// float GetWaterVelocityAtSplineInputKey(float InKey);                                                                     // [0x82abf88] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterSurfaceInfoAtLocation
	// void GetWaterSurfaceInfoAtLocation(FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth); // [0x82abbbc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterStaticMeshMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterStaticMeshMaterialInstance();                                                    // [0x3cafbb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0x82abb98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterMaterialInstance();                                                              // [0x2a3691c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterMaterial
	// class UMaterialInterface* GetWaterMaterial();                                                                            // [0x82abb54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetWaterLODMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterLODMaterialInstance();                                                           // [0x3cafbb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterInfoMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();                                                          // [0x3acaed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetWaterBodyActor
	// class AWaterBody* GetWaterBodyActor();                                                                                   // [0x82abaf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetUnderwaterPostProcessMaterialInstance
	// class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();                                              // [0x3dc3b0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetStandardRenderableComponents
	// TArray<UPrimitiveComponent*> GetStandardRenderableComponents();                                                          // [0x82abaac] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetRiverToOceanTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();                                             // [0x3533034] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetRiverToOceanTransitionMaterial
	// class UMaterialInterface* GetRiverToOceanTransitionMaterial();                                                           // [0x82aba54] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetRiverToLakeTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();                                              // [0x353305c] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyComponent.GetRiverToLakeTransitionMaterial
	// class UMaterialInterface* GetRiverToLakeTransitionMaterial();                                                            // [0x82ab9fc] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetMaxWaveHeight
	// float GetMaxWaveHeight();                                                                                                // [0x82ab9d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetIslands
	// TArray<AWaterBodyIsland*> GetIslands();                                                                                  // [0x82ab660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetExclusionVolumes
	// TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes();                                                                // [0x82ab5dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBodyComponent.GetCollisionComponents
	// TArray<UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents);                                      // [0x82ab4c8] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.CustomMeshGenerator
/// Size: 0x0008 (0x000028 - 0x000030)
class UCustomMeshGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UStaticMeshComponent*)               MeshComp                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyCustom
/// Size: 0x0000 (0x000300 - 0x000300)
class AWaterBodyCustom : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/Water.WaterBodyCustomComponent
/// Size: 0x0010 (0x0014B0 - 0x0014C0)
class UWaterBodyCustomComponent : public UWaterBodyComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
	CMember(class UStaticMeshComponent*)               MeshComp                                                    OFFSET(get<T>, {0x14B0, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyExclusionVolume
/// Size: 0x0018 (0x0002D8 - 0x0002F0)
class AWaterBodyExclusionVolume : public APhysicsVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(EWaterExclusionMode)                       ExclusionMode                                               OFFSET(get<T>, {0x2D8, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr<AWaterBody*>>)       WaterBodies                                                 OFFSET(get<T>, {0x2E0, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyHLODBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBodyHLODBuilder : public UHLODBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.WaterBodyInfoMeshComponent
/// Size: 0x0010 (0x0005C0 - 0x0005D0)
class UWaterBodyInfoMeshComponent : public UWaterBodyMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	DMember(bool)                                      bIsDilatedMesh                                              OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	DMember(bool)                                      bIsConservativeRasterCompatible                             OFFSET(get<bool>, {0x5C1, 1, 0, 0})
};

/// Class /Script/Water.WaterBodyIsland
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AWaterBodyIsland : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UWaterSplineComponent*)              SplineComp                                                  OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/Water.WaterBodyIsland.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0x6888d1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.LakeGenerator
/// Size: 0x0018 (0x000028 - 0x000040)
class ULakeGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UStaticMeshComponent*)               LakeMeshComp                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UBoxComponent*)                      LakeCollisionComp                                           OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class ULakeCollisionComponent*)            LakeCollision                                               OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Water.WaterBodyLake
/// Size: 0x0000 (0x000300 - 0x000300)
class AWaterBodyLake : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/Water.WaterBodyLakeComponent
/// Size: 0x0010 (0x0014B0 - 0x0014C0)
class UWaterBodyLakeComponent : public UWaterBodyComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
	CMember(class UStaticMeshComponent*)               LakeMeshComp                                                OFFSET(get<T>, {0x14B0, 8, 0, 0})
	CMember(class ULakeCollisionComponent*)            LakeCollision                                               OFFSET(get<T>, {0x14B8, 8, 0, 0})
};

/// Class /Script/Water.OceanGenerator
/// Size: 0x0020 (0x000028 - 0x000048)
class UOceanGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UOceanBoxCollisionComponent*>) CollisionBoxes                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UOceanCollisionComponent*>)   CollisionHullSets                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyOcean
/// Size: 0x0000 (0x000300 - 0x000300)
class AWaterBodyOcean : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/Water.WaterBodyOceanComponent
/// Size: 0x0060 (0x0014B0 - 0x001510)
class UWaterBodyOceanComponent : public UWaterBodyComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(TArray<class UOceanBoxCollisionComponent*>) CollisionBoxes                                             OFFSET(get<T>, {0x14B0, 16, 0, 0})
	CMember(TArray<class UOceanCollisionComponent*>)   CollisionHullSets                                           OFFSET(get<T>, {0x14C0, 16, 0, 0})
	SMember(FVector)                                   CollisionExtents                                            OFFSET(getStruct<T>, {0x14D0, 24, 0, 0})
	SMember(FVector2D)                                 OceanExtents                                                OFFSET(getStruct<T>, {0x14E8, 16, 0, 0})
	SMember(FVector2D)                                 SavedZoneLocation                                           OFFSET(getStruct<T>, {0x14F8, 16, 0, 0})
	DMember(bool)                                      bCenterOnWaterZone                                          OFFSET(get<bool>, {0x1508, 1, 0, 0})
	DMember(float)                                     HeightOffset                                                OFFSET(get<float>, {0x150C, 4, 0, 0})
};

/// Class /Script/Water.RiverGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class URiverGenerator : public UWaterBodyGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class USplineMeshComponent*>)       SplineMeshComponents                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Water.WaterBodyRiver
/// Size: 0x0000 (0x000300 - 0x000300)
class AWaterBodyRiver : public AWaterBody
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/Water.WaterBodyRiverComponent
/// Size: 0x0030 (0x0014B0 - 0x0014E0)
class UWaterBodyRiverComponent : public UWaterBodyComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(TArray<class USplineMeshComponent*>)       SplineMeshComponents                                        OFFSET(get<T>, {0x14B0, 16, 0, 0})
	CMember(class UMaterialInterface*)                 LakeTransitionMaterial                                      OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           LakeTransitionMID                                           OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 OceanTransitionMaterial                                     OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           OceanTransitionMID                                          OFFSET(get<T>, {0x14D8, 8, 0, 0})


	/// Functions
	// Function /Script/Water.WaterBodyRiverComponent.SetOceanTransitionMaterial
	// void SetOceanTransitionMaterial(class UMaterialInterface* InMat);                                                        // [0x82c8e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyRiverComponent.SetLakeTransitionMaterial
	// void SetLakeTransitionMaterial(class UMaterialInterface* InMat);                                                         // [0x82c8d24] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBodyRiverComponent.SetLakeAndOceanTransitionMaterials
	// void SetLakeAndOceanTransitionMaterials(class UMaterialInterface* InLakeTransition, class UMaterialInterface* InOceanTransition); // [0x82c8c60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Water.WaterBrushActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UWaterBrushActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Water.WaterMeshComponent
/// Size: 0x01D8 (0x000538 - 0x000710)
class UWaterMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(int32_t)                                   ForceCollapseDensityLevel                                   OFFSET(get<int32_t>, {0x538, 4, 0, 0})
	CMember(class UMaterialInterface*)                 FarDistanceMaterial                                         OFFSET(get<T>, {0x540, 8, 0, 0})
	DMember(float)                                     FarDistanceMeshExtent                                       OFFSET(get<float>, {0x548, 4, 0, 0})
	DMember(float)                                     TileSize                                                    OFFSET(get<float>, {0x54C, 4, 0, 0})
	SMember(FIntPoint)                                 QuadTreeResolution                                          OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	CMember(TSet<UMaterialInterface*>)                 UsedMaterials                                               OFFSET(get<T>, {0x658, 80, 0, 0})
	CMember(TMap<UMaterialInterface*, UMaterialInstanceDynamic*>) MaterialToMID                                    OFFSET(get<T>, {0x6A8, 80, 0, 0})
	DMember(bool)                                      bUseFarMeshWithoutOcean                                     OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(int32_t)                                   TessellationFactor                                          OFFSET(get<int32_t>, {0x708, 4, 0, 0})
	DMember(float)                                     LODScale                                                    OFFSET(get<float>, {0x70C, 4, 0, 0})


	/// Functions
	// Function /Script/Water.WaterMeshComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x82c84c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterRuntimeSettings
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UWaterRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannelForWaterTraces                              OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TWeakObjectPtr<UMaterialParameterCollection*>) MaterialParameterCollection                             OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(float)                                     WaterBodyIconWorldZOffset                                   OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FName)                                     DefaultWaterCollisionProfileName                            OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       DefaultWaterInfoMaterial                                    OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(class UClass*)                             WaterBodyRiverComponentClass                                OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UClass*)                             WaterBodyLakeComponentClass                                 OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UClass*)                             WaterBodyOceanComponentClass                                OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UClass*)                             WaterBodyCustomComponentClass                               OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bWarnOnMismatchOceanExtent                                  OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Class /Script/Water.WaterSplineComponent
/// Size: 0x0020 (0x000600 - 0x000620)
class UWaterSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	SMember(FWaterSplineCurveDefaults)                 WaterSplineDefaults                                         OFFSET(getStruct<T>, {0x600, 16, 0, 0})
	SMember(FWaterSplineCurveDefaults)                 PreviousWaterSplineDefaults                                 OFFSET(getStruct<T>, {0x610, 16, 0, 0})


	/// Functions
	// Function /Script/Water.WaterSplineComponent.K2_SynchronizeAndBroadcastDataChange
	// void K2_SynchronizeAndBroadcastDataChange();                                                                             // [0x35cf850] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Water.WaterSplineMetadata
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UWaterSplineMetadata : public USplineMetadata
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FInterpCurveFloat)                         Depth                                                       OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FInterpCurveFloat)                         WaterVelocityScalar                                         OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FInterpCurveFloat)                         RiverWidth                                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FInterpCurveFloat)                         AudioIntensity                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FInterpCurveVector)                        WaterVelocity                                               OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Class /Script/Water.WaterSubsystem
/// Size: 0x0140 (0x000040 - 0x000180)
class UWaterSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(class ABuoyancyManager*)                   BuoyancyManager                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCameraUnderwaterStateChanged                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWaterScalabilityChanged                                   OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class UStaticMesh*)                        DefaultRiverMesh                                            OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UStaticMesh*)                        DefaultLakeMesh                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/Water.WaterSubsystem.SetOceanFloodHeight
	// void SetOceanFloodHeight(float InFloodHeight);                                                                           // [0x82c8dbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.PrintToWaterLog
	// void PrintToWaterLog(FString Message, bool bWarning);                                                                    // [0x82c851c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.IsWaterRenderingEnabled
	// bool IsWaterRenderingEnabled();                                                                                          // [0x82c84fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	// bool IsUnderwaterPostProcessEnabled();                                                                                   // [0x82c84e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	// bool IsShallowWaterSimulationEnabled();                                                                                  // [0x3ed665c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetWaterTimeSeconds
	// float GetWaterTimeSeconds();                                                                                             // [0x82c84a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	// float GetSmoothedWorldTimeSeconds();                                                                                     // [0x82c8480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	// int32_t GetShallowWaterSimulationRenderTargetSize();                                                                     // [0x82c8468] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	// int32_t GetShallowWaterMaxImpulseForces();                                                                               // [0x3789eb8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	// int32_t GetShallowWaterMaxDynamicForces();                                                                               // [0x82c8450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetOceanTotalHeight
	// float GetOceanTotalHeight();                                                                                             // [0x82c842c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanFloodHeight
	// float GetOceanFloodHeight();                                                                                             // [0x82c8414] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanBaseHeight
	// float GetOceanBaseHeight();                                                                                              // [0x82c83f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetCameraUnderwaterDepth
	// float GetCameraUnderwaterDepth();                                                                                        // [0x60aaadc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterWavesAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UWaterWavesAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UWaterWaves*)                        WaterWaves                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Water.WaterWavesAssetReference
/// Size: 0x0008 (0x000028 - 0x000030)
class UWaterWavesAssetReference : public UWaterWavesBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UWaterWavesAsset*)                   WaterWavesAsset                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Water.WaterZone
/// Size: 0x00A8 (0x000290 - 0x000338)
class AWaterZone : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class UTextureRenderTarget2D*)             WaterInfoTexture                                            OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UWaterBodyComponent*>>) OwnedWaterBodies                                         OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FIntPoint)                                 RenderTargetResolution                                      OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class UWaterMeshComponent*)                WaterMesh                                                   OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FVector2D)                                 ZoneExtent                                                  OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	DMember(float)                                     CaptureZOffset                                              OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(bool)                                      bHalfPrecisionTexture                                       OFFSET(get<bool>, {0x2CC, 1, 0, 0})
	DMember(int32_t)                                   VelocityBlurRadius                                          OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(int32_t)                                   OverlapPriority                                             OFFSET(get<int32_t>, {0x2D4, 4, 0, 0})
	DMember(bool)                                      bEnableLocalOnlyTessellation                                OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	SMember(FVector)                                   LocalTessellationExtent                                     OFFSET(getStruct<T>, {0x2E0, 24, 0, 0})
	DMember(int32_t)                                   WaterZoneIndex                                              OFFSET(get<int32_t>, {0x320, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWaterInfoTextureCreated                                   OFFSET(getStruct<T>, {0x328, 16, 0, 0})


	/// Functions
	// Function /Script/Water.WaterZone.SetFarMeshMaterial
	// void SetFarMeshMaterial(class UMaterialInterface* InFarMaterial);                                                        // [0x82ca58c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterZone.GetWaterZoneIndex
	// int32_t GetWaterZoneIndex();                                                                                             // [0x82ca574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Water.SphericalPontoon
/// Size: 0x02D0 (0x000000 - 0x0002D0)
class FSphericalPontoon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FName)                                     CenterSocket                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   RelativeLocation                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bFXEnabled                                                  OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FVector)                                   LocalForce                                                  OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   CenterLocation                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FQuat)                                     SocketRotation                                              OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(float)                                     WaterHeight                                                 OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     WaterDepth                                                  OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     ImmersionDepth                                              OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FVector)                                   WaterPlaneLocation                                          OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   WaterPlaneNormal                                            OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   WaterSurfacePosition                                        OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   WaterVelocity                                               OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	DMember(int32_t)                                   WaterBodyIndex                                              OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(bool)                                      bIsInWater                                                  OFFSET(get<bool>, {0x10C, 1, 0, 0})
	CMember(class UWaterBodyComponent*)                CurrentWaterBodyComponent                                   OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Struct /Script/Water.BuoyancyData
/// Size: 0x0090 (0x000000 - 0x000090)
class FBuoyancyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FSphericalPontoon>)                 Pontoons                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bCenterPontoonsOnCOM                                        OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     BuoyancyCoefficient                                         OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BuoyancyDamp                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     BuoyancyDamp2                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMinVelocity                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMaxVelocity                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     BuoyancyRampMax                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxBuoyantForce                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bApplyDragForcesInWater                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     DragCoefficient                                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DragCoefficient2                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     AngularDragCoefficient                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxDragSpeed                                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bApplyRiverForces                                           OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(int32_t)                                   RiverPontoonIndex                                           OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     WaterShorePushFactor                                        OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RiverTraversalPathWidth                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxShorePushForce                                           OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     WaterVelocityStrength                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MaxWaterForce                                               OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bAlwaysAllowLateralPush                                     OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bAllowCurrentWhenMovingFastUpstream                         OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bApplyDownstreamAngularRotation                             OFFSET(get<bool>, {0x62, 1, 0, 0})
	SMember(FVector)                                   DownstreamAxisOfRotation                                    OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(float)                                     DownstreamRotationStrength                                  OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     DownstreamRotationStiffness                                 OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     DownstreamRotationAngularDamping                            OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     DownstreamMaxAcceleration                                   OFFSET(get<float>, {0x8C, 4, 0, 0})
};

/// Struct /Script/Water.WaterBodyStaticMeshSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FWaterBodyStaticMeshSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bEnableWaterBodyStaticMesh                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSectionWaterBodyStaticMesh                                 OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(double)                                    SectionSize                                                 OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/Water.WaterBodyWeightmapSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterBodyWeightmapSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     FalloffWidth                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EdgeOffset                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(class UTexture2D*)                         ModulationTexture                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TextureTiling                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     TextureInfluence                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Midpoint                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FinalOpacity                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/Water.WaterCurveSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterCurveSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bUseCurveChannel                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UCurveFloat*)                        ElevationCurveAsset                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ChannelEdgeOffset                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ChannelDepth                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CurveRampWidth                                              OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Water.GerstnerWave
/// Size: 0x0048 (0x000000 - 0x000048)
class FGerstnerWave : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     WaveLength                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Steepness                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector2D)                                 WaveVector                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(float)                                     WaveSpeed                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WKA                                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Q                                                           OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PhaseOffset                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/Water.GerstnerWaveOctave
/// Size: 0x0014 (0x000000 - 0x000014)
class FGerstnerWaveOctave : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumWaves                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     AmplitudeScale                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MainDirection                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpreadAngle                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bUniformSpread                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Water.UnderwaterPostProcessSettings
/// Size: 0x0710 (0x000000 - 0x000710)
class FUnderwaterPostProcessSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BlendRadius                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FPostProcessSettings)                      PostProcessSettings                                         OFFSET(getStruct<T>, {0x10, 1776, 0, 0})
	CMember(class UMaterialInterface*)                 UnderwaterPostProcessMaterial                               OFFSET(get<T>, {0x700, 8, 0, 0})
};

/// Struct /Script/Water.WaterBodyHeightmapSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FWaterBodyHeightmapSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EWaterBrushBlendType)                      BlendMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bInvertShape                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FWaterFalloffSettings)                     FalloffSettings                                             OFFSET(getStruct<T>, {0x4, 20, 0, 0})
	SMember(FWaterBrushEffects)                        Effects                                                     OFFSET(getStruct<T>, {0x18, 96, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffects
/// Size: 0x0060 (0x000000 - 0x000060)
class FWaterBrushEffects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FWaterBrushEffectBlurring)                 Blurring                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FWaterBrushEffectCurlNoise)                CurlNoise                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FWaterBrushEffectDisplacement)             displacement                                                OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	SMember(FWaterBrushEffectSmoothBlending)           SmoothBlending                                              OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FWaterBrushEffectTerracing)                Terracing                                                   OFFSET(getStruct<T>, {0x48, 20, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectTerracing
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterBrushEffectTerracing : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     TerraceAlpha                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TerraceSpacing                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TerraceSmoothness                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaskLength                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaskStartOffset                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectSmoothBlending
/// Size: 0x0008 (0x000000 - 0x000008)
class FWaterBrushEffectSmoothBlending : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     InnerSmoothDistance                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OuterSmoothDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectDisplacement
/// Size: 0x0028 (0x000000 - 0x000028)
class FWaterBrushEffectDisplacement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     DisplacementHeight                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DisplacementTiling                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(class UTexture2D*)                         Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Midpoint                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FLinearColor)                              Channel                                                     OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	DMember(float)                                     WeightmapInfluence                                          OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectCurlNoise
/// Size: 0x0010 (0x000000 - 0x000010)
class FWaterBrushEffectCurlNoise : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Curl1Amount                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Curl2Amount                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Curl1Tiling                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Curl2Tiling                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectBlurring
/// Size: 0x0008 (0x000000 - 0x000008)
class FWaterBrushEffectBlurring : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bBlurShape                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Radius                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Water.WaterFalloffSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterFalloffSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EWaterBrushFalloffMode)                    FalloffMode                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     FalloffAngle                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FalloffWidth                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EdgeOffset                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ZOffset                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Water.WaterBrushEffectCurves
/// Size: 0x0020 (0x000000 - 0x000020)
class FWaterBrushEffectCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bUseCurveChannel                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UCurveFloat*)                        ElevationCurveAsset                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ChannelEdgeOffset                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ChannelDepth                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CurveRampWidth                                              OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Water.WaterSplineCurveDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
class FWaterSplineCurveDefaults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     DefaultDepth                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DefaultWidth                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DefaultVelocity                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DefaultAudioIntensity                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Enum /Script/Water.EBuoyancyEvent
/// Size: 0x02
enum class EBuoyancyEvent : uint8_t
{
	EBuoyancyEvent__EnteredWaterBody                                                 = 0,
	EBuoyancyEvent__ExitedWaterBody                                                  = 1
};

/// Enum /Script/Water.EWaveSpectrumType
/// Size: 0x03
enum class EWaveSpectrumType : uint8_t
{
	EWaveSpectrumType__Phillips                                                      = 0,
	EWaveSpectrumType__PiersonMoskowitz                                              = 1,
	EWaveSpectrumType__JONSWAP                                                       = 2
};

/// Enum /Script/Water.EWaterExclusionMode
/// Size: 0x02
enum class EWaterExclusionMode : uint32_t
{
	EWaterExclusionMode__AddWaterBodiesListToExclusion                               = 0,
	EWaterExclusionMode__RemoveWaterBodiesListFromExclusion                          = 1
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
/// Size: 0x05
enum class EWaterBodyType : uint8_t
{
	EWaterBodyType__River                                                            = 0,
	EWaterBodyType__Lake                                                             = 1,
	EWaterBodyType__Ocean                                                            = 2,
	EWaterBodyType__Transition                                                       = 3,
	EWaterBodyType__Num                                                              = 4
};

/// Enum /Script/Water.EWaterBrushFalloffMode
/// Size: 0x02
enum class EWaterBrushFalloffMode : uint8_t
{
	EWaterBrushFalloffMode__Angle                                                    = 0,
	EWaterBrushFalloffMode__Width                                                    = 1
};

