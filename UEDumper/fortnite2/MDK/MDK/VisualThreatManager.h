
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: WaterAndWind

/// Class /Game/VisualThreatManager/WindManager.WindManager_C
/// Size: 0x012C (0x000518 - 0x000644)
class AWindManager_C : public AFortWindManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1604;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x518, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               EmptyStaticMesh                                             OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x528, 8, 0, 0})
	DMember(double)                                    SmallerRenderTargetOrthoWidth                               OFFSET(get<double>, {0x530, 8, 0, 0})
	CMember(TArray<class AActor*>)                     External_Test_Actor                                         OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(TArray<class AFortStaticMeshActor*>)       World_Terrain_Meshes                                        OFFSET(get<T>, {0x548, 16, 0, 0})
	SMember(FVector)                                   Camera_Height_Offset                                        OFFSET(getStruct<T>, {0x558, 24, 0, 0})
	DMember(double)                                    Particle_Z_Offset                                           OFFSET(get<double>, {0x570, 8, 0, 0})
	DMember(bool)                                      Is_Water_Interaction_Enabled                                OFFSET(get<bool>, {0x578, 1, 0, 0})
	CMember(TArray<FStaticMeshMaterialArrayCombo>)     WorldStaticMeshArray                                        OFFSET(get<T>, {0x580, 16, 0, 0})
	SMember(FArrayOfWaterMeshWaterBlueprintPairs)      Array_Of_Water_Assets                                       OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	CMember(TArray<class UStaticMesh*>)                PrototypicalStaticMeshes                                    OFFSET(get<T>, {0x5A0, 16, 0, 0})
	DMember(int32_t)                                   Current_Water_Mesh_Index                                    OFFSET(get<int32_t>, {0x5B0, 4, 0, 0})
	CMember(TArray<FFlowMapMaterials>)                 WaterVectorMatToDefaultMaterialPairing                      OFFSET(get<T>, {0x5B8, 16, 0, 0})
	DMember(bool)                                      MaterialPairingFound                                        OFFSET(get<bool>, {0x5C8, 1, 0, 0})
	SMember(FLinearColor)                              WorldBoundsMinMax                                           OFFSET(getStruct<T>, {0x5CC, 16, 0, 0})
	CMember(class UMaterialInterface*)                 Black_Scene_Capture_Material                                OFFSET(get<T>, {0x5E0, 8, 0, 0})
	SMember(FBox)                                      Max_level_bounds___used_to_isolate_the_level_from_the_vista OFFSET(getStruct<T>, {0x5E8, 56, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       StormCylinderMeshes                                         OFFSET(get<T>, {0x620, 16, 0, 0})
	DMember(bool)                                      Storm_Cyl_Mesh_Match                                        OFFSET(get<bool>, {0x630, 1, 0, 0})
	DMember(int32_t)                                   Wind_Cyl_Mesh_Array_Match_Index                             OFFSET(get<int32_t>, {0x634, 4, 0, 0})
	DMember(double)                                    Delta_Wind_Falloff_in_World_Units                           OFFSET(get<double>, {0x638, 8, 0, 0})
	SMember(FFortWindImpulseHandle)                    NewVar                                                      OFFSET(getStruct<T>, {0x640, 4, 0, 0})


	/// Functions
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
	// void Find Matching Wind Mesh Index And Write Bool(FVector Wind location, bool& Storm Cyl Mesh Match, int32_t& Wind Cyl Mesh Array Match Index); // [0x228deb8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SetWindMatVariables
	// void SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set AnimatedCylinderCenter, FVector AnimatedCylinderCenter, bool Set Animating Wind Magnitude, double Animating Wind Magnitude, bool Set Static Wind Magnitude, double Static Wind Magnitude, bool Set CylinderCenter, FVector CylinderCenter, bool Set WindVector, FVector WindVector, bool Set WindCrossVector, FVector WindCrossVector, bool Set OverallOuterRadius, double OverallOuterRadius, bool Set OverallInnerRadius, double OverallInnerRadius, bool Set Wind Still 0 or Animating 1, double Wind Still 0 or Animating 1, bool Set Circular Shader?, double Circular Shader?, bool& NewParam); // [0x228deb8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UpdateWindDeltaCyl
	// void UpdateWindDeltaCyl(double Static Cylinder Outer Radius, double duration, class UMaterialInstanceDynamic* Mid, bool Is Wind Circular?); // [0x228deb8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.RemoveWindCylinder
	// void RemoveWindCylinder(FFortWindImpulseCylinder& WindImpulseCylinder);                                                  // [0x228deb8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UpdateStormWindCylinder
	// void UpdateStormWindCylinder(FFortWindImpulseCylinder Wind Impulse, FFortWindImpulseCylinderDelta Wind Delta);           // [0x228deb8] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Calculate Camera Position
	// FVector Calculate Camera Position(double Scale, class USceneCaptureComponent2D* Scene Capture);                          // [0x228deb8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x228deb8] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderDeath
	// void OnWindImpulseCylinderDeath(FFortWindImpulseCylinder& WindImpulseCylinder);                                          // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
	// void OnWindImpulseCylinderDeltaComplete(FFortWindImpulseCylinder& WindImpulseCylinder);                                  // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderCreation
	// void OnWindImpulseCylinderCreation(FFortWindImpulseCylinder& WindImpulseCylinder, FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta); // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SpawnTestWind
	// void SpawnTestWind(double Radius, double ImpulseMagnitude);                                                              // [0x228deb8] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Play Water Splash Particle System At Location
	// void Play Water Splash Particle System At Location(FTransform Particle Transform);                                       // [0x228deb8] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.AddWindParticleSystemComponent
	// void AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent);                            // [0x228deb8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Register player for render to texture purposes
	// void Register player for render to texture purposes(class UPrimitiveComponent* Effect Water Interaction FX, class UPrimitiveComponent* Gameplay Wind INteraction Effects); // [0x228deb8] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Add Wind Component
	// void Add Wind Component(class UPrimitiveComponent* InComponent);                                                         // [0x228deb8] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Update Test
	// void Update Test(double NewMagnitude);                                                                                   // [0x228deb8] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Add Render To Texture Particle
	// void Add Render To Texture Particle(class UParticleSystem* EmitterTemplate, FTransform& InTransform);                    // [0x228deb8] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ExecuteUbergraph_WindManager
	// void ExecuteUbergraph_WindManager(int32_t EntryPoint);                                                                   // [0x228deb8] Final|HasDefaults    
};

/// Class /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
/// Size: 0x0170 (0x0002A0 - 0x000410)
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A0, 8, 0, 0})
	CMember(class UAudioComponent*)                    EnterTheStormSound                                          OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UBillboardComponent*)                Sprite1                                                     OFFSET(get<T>, {0x2B0, 8, 0, 0})
	DMember(float)                                     Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4 OFFSET(get<float>, {0x2B8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4 OFFSET(get<T>, {0x2BC, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Ramp_Up_down_values_on_death                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  NewEventDispatcher                                          OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NewEventDispatcher0                                         OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FVector>)                           Array_of_Cloud_Positions                                    OFFSET(get<T>, {0x2E8, 16, 0, 0})
	DMember(int32_t)                                   RecalculateTimer                                            OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	DMember(bool)                                      Is_Alive                                                    OFFSET(get<bool>, {0x2FC, 1, 0, 0})
	DMember(bool)                                      IsAliveJustChanged                                          OFFSET(get<bool>, {0x2FD, 1, 0, 0})
	DMember(bool)                                      IsAlivePrevious                                             OFFSET(get<bool>, {0x2FE, 1, 0, 0})
	DMember(int32_t)                                   Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead OFFSET(get<int32_t>, {0x304, 4, 0, 0})
	CMember(class APostProcessVolume*)                 Materialpost                                                OFFSET(get<T>, {0x308, 8, 0, 0})
	DMember(double)                                    post_process_volume_falloff__around_the_threat_volume       OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(bool)                                      ShowRainEffect                                              OFFSET(get<bool>, {0x318, 1, 0, 0})
	DMember(double)                                    DeltaTime                                                   OFFSET(get<double>, {0x320, 8, 0, 0})
	DMember(double)                                    PostProcessTargetWeight                                     OFFSET(get<double>, {0x328, 8, 0, 0})
	DMember(double)                                    Current_Post_Process_Weight                                 OFFSET(get<double>, {0x330, 8, 0, 0})
	DMember(double)                                    Post_Process_Fade_in_speed                                  OFFSET(get<double>, {0x338, 8, 0, 0})
	DMember(bool)                                      SoundIsActive                                               OFFSET(get<bool>, {0x340, 1, 0, 0})
	DMember(bool)                                      SoundWasPreviouslyActive                                    OFFSET(get<bool>, {0x341, 1, 0, 0})
	DMember(bool)                                      is_On                                                       OFFSET(get<bool>, {0x342, 1, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Morning                           OFFSET(getStruct<T>, {0x344, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Day                               OFFSET(getStruct<T>, {0x354, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Evening                           OFFSET(getStruct<T>, {0x364, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Night                             OFFSET(getStruct<T>, {0x374, 16, 0, 0})
	CMember(TArray<FBox>)                              Array_of_Cloud_Volumes                                      OFFSET(get<T>, {0x388, 16, 0, 0})
	DMember(double)                                    PostProcessWeightModulation                                 OFFSET(get<double>, {0x398, 8, 0, 0})
	DMember(double)                                    Ramp_Up_And_Down_Anim_Values                                OFFSET(get<double>, {0x3A0, 8, 0, 0})
	DMember(bool)                                      ShowRainOnCameraLens                                        OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	CMember(class AEmitterCameraLensEffectBase*)       Rain_Camera_Lens_Effect                                     OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           LocalizedParticleSystem                                     OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(bool)                                      IsWorldReady                                                OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	DMember(double)                                    Rain_Trace_Timer                                            OFFSET(get<double>, {0x3C8, 8, 0, 0})
	SMember(FVector)                                   RainTraceOffset                                             OFFSET(getStruct<T>, {0x3D0, 24, 0, 0})
	DMember(double)                                    RainMultiplierCurrent                                       OFFSET(get<double>, {0x3E8, 8, 0, 0})
	DMember(double)                                    Rain_Spawn_Rate_Exponent                                    OFFSET(get<double>, {0x3F0, 8, 0, 0})
	DMember(bool)                                      TracePrevious                                               OFFSET(get<bool>, {0x3F8, 1, 0, 0})
	DMember(bool)                                      IsAthenaWorld                                               OFFSET(get<bool>, {0x3F9, 1, 0, 0})
	DMember(bool)                                      bThreatOverride                                             OFFSET(get<bool>, {0x3FA, 1, 0, 0})
	DMember(bool)                                      bForceOff                                                   OFFSET(get<bool>, {0x3FB, 1, 0, 0})
	CMember(TScriptInterface<Class>)                   CameraLensEffectInterface                                   OFFSET(get<T>, {0x400, 16, 0, 0})


	/// Functions
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.SetForceOff
	// void SetForceOff(bool bForceOff);                                                                                        // [0x228deb8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox
	// void CalculatePlayerPositionNearBox(FVector BoxMin, FVector BoxMax, double& VolumePlayerCoveragePercentage);             // [0x228deb8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc
	// void Ramp Up down values on death__FinishedFunc();                                                                       // [0x228deb8] BlueprintEvent       
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc
	// void Ramp Up down values on death__UpdateFunc();                                                                         // [0x228deb8] BlueprintEvent       
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged
	// void OnThreatCloudsChanged(TArray<FThreatLocationInfo>& ThreatLocationInfo);                                             // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic
	// void VFX_RainTracePeriodic();                                                                                            // [0x228deb8] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer
	// void StartTraceTimer();                                                                                                  // [0x228deb8] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect
	// void ForceUpdateLensEffect();                                                                                            // [0x228deb8] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatOverrideChanged
	// void OnThreatOverrideChanged(bool bForceThreatOn);                                                                       // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
	// void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32_t EntryPoint);                                  // [0x228deb8] Final|HasDefaults    
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature
	// void NewEventDispatcher0__DelegateSignature();                                                                           // [0x228deb8] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature
	// void NewEventDispatcher__DelegateSignature();                                                                            // [0x228deb8] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AThreat_RainAttachedToPlayer_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class UParticleSystemComponent*)           ParticleSystem                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AB_CameraRainDrops_01_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x380, 8, 0, 0})
	DMember(float)                                     Alpha_Alpha_06897833405CC2B231B02C93C4E725A3                OFFSET(get<float>, {0x388, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Alpha__Direction_06897833405CC2B231B02C93C4E725A3           OFFSET(get<T>, {0x38C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Alpha                                                       OFFSET(get<T>, {0x390, 8, 0, 0})


	/// Functions
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc
	// void Alpha__FinishedFunc();                                                                                              // [0x228deb8] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc
	// void Alpha__UpdateFunc();                                                                                                // [0x228deb8] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
	// void ExecuteUbergraph_B_CameraRainDrops_01(int32_t EntryPoint);                                                          // [0x228deb8] Final                
};

/// Class /Game/VisualThreatManager/StormVisuals/Debug/Delete.Delete_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelete_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Game/VisualThreatManager/StormVisuals/Blueprints/StaticMeshMaterialArrayCombo.StaticMeshMaterialArrayCombo
/// Size: 0x0018 (0x000000 - 0x000018)
class FStaticMeshMaterialArrayCombo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class AStaticMeshActor*)                   StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C            OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Game/VisualThreatManager/StormVisuals/Blueprints/FlowMapMaterials.FlowMapMaterials
/// Size: 0x0010 (0x000000 - 0x000010)
class FFlowMapMaterials : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UMaterialInterface*)                 OriginalMaterial_4_C9560D9C4A128A0A813E97865710CC97         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 RenderToTextureMaterial_5_5CB972A744E80375B62CF68122B83C88  OFFSET(get<T>, {0x8, 8, 0, 0})
};

