
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: WaterAndWind

/// Struct /Game/VisualThreatManager/StormVisuals/Blueprints/StaticMeshMaterialArrayCombo.StaticMeshMaterialArrayCombo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStaticMeshMaterialArrayCombo
{ 
	class AStaticMeshActor*                            StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D;              // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C;           // 0x0008   (0x0010)  
};

/// Struct /Game/VisualThreatManager/StormVisuals/Blueprints/FlowMapMaterials.FlowMapMaterials
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFlowMapMaterials
{ 
	class UMaterialInterface*                          OriginalMaterial_4_C9560D9C4A128A0A813E97865710CC97;        // 0x0000   (0x0008)  
	class UMaterialInterface*                          RenderToTextureMaterial_5_5CB972A744E80375B62CF68122B83C88; // 0x0008   (0x0008)  
};

/// Class /Game/VisualThreatManager/WindManager.WindManager_C
/// Size: 0x012C (0x000518 - 0x000644)
class AWindManager_C : public AFortWindManager
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0518   (0x0008)  
	class UStaticMeshComponent*                        EmptyStaticMesh;                                            // 0x0520   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0528   (0x0008)  
	double                                             SmallerRenderTargetOrthoWidth;                              // 0x0530   (0x0008)  
	TArray<class AActor*>                              External_Test_Actor;                                        // 0x0538   (0x0010)  
	TArray<class AFortStaticMeshActor*>                World_Terrain_Meshes;                                       // 0x0548   (0x0010)  
	FVector                                            Camera_Height_Offset;                                       // 0x0558   (0x0018)  
	double                                             Particle_Z_Offset;                                          // 0x0570   (0x0008)  
	bool                                               Is_Water_Interaction_Enabled;                               // 0x0578   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0579   (0x0007)  MISSED
	TArray<FStaticMeshMaterialArrayCombo>              WorldStaticMeshArray;                                       // 0x0580   (0x0010)  
	FArrayOfWaterMeshWaterBlueprintPairs               Array_Of_Water_Assets;                                      // 0x0590   (0x0010)  
	TArray<class UStaticMesh*>                         PrototypicalStaticMeshes;                                   // 0x05A0   (0x0010)  
	int32_t                                            Current_Water_Mesh_Index;                                   // 0x05B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x05B4   (0x0004)  MISSED
	TArray<FFlowMapMaterials>                          WaterVectorMatToDefaultMaterialPairing;                     // 0x05B8   (0x0010)  
	bool                                               MaterialPairingFound;                                       // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x05C9   (0x0003)  MISSED
	FLinearColor                                       WorldBoundsMinMax;                                          // 0x05CC   (0x0010)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x05DC   (0x0004)  MISSED
	class UMaterialInterface*                          Black_Scene_Capture_Material;                               // 0x05E0   (0x0008)  
	FBox                                               Max_level_bounds___used_to_isolate_the_level_from_the_vista; // 0x05E8   (0x0038)  
	TArray<class UStaticMeshComponent*>                StormCylinderMeshes;                                        // 0x0620   (0x0010)  
	bool                                               Storm_Cyl_Mesh_Match;                                       // 0x0630   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0631   (0x0003)  MISSED
	int32_t                                            Wind_Cyl_Mesh_Array_Match_Index;                            // 0x0634   (0x0004)  
	double                                             Delta_Wind_Falloff_in_World_Units;                          // 0x0638   (0x0008)  
	FFortWindImpulseHandle                             NewVar;                                                     // 0x0640   (0x0004)  


	/// Functions
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
	// void Find Matching Wind Mesh Index And Write Bool(FVector Wind location, bool& Storm Cyl Mesh Match, int32_t& Wind Cyl Mesh Array Match Index); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SetWindMatVariables
	// void SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set AnimatedCylinderCenter, FVector AnimatedCylinderCenter, bool Set Animating Wind Magnitude, double Animating Wind Magnitude, bool Set Static Wind Magnitude, double Static Wind Magnitude, bool Set CylinderCenter, FVector CylinderCenter, bool Set WindVector, FVector WindVector, bool Set WindCrossVector, FVector WindCrossVector, bool Set OverallOuterRadius, double OverallOuterRadius, bool Set OverallInnerRadius, double OverallInnerRadius, bool Set Wind Still 0 or Animating 1, double Wind Still 0 or Animating 1, bool Set Circular Shader?, double Circular Shader?, bool& NewParam); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UpdateWindDeltaCyl
	// void UpdateWindDeltaCyl(double Static Cylinder Outer Radius, double duration, class UMaterialInstanceDynamic* Mid, bool Is Wind Circular?); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.RemoveWindCylinder
	// void RemoveWindCylinder(FFortWindImpulseCylinder& WindImpulseCylinder);                                               // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UpdateStormWindCylinder
	// void UpdateStormWindCylinder(FFortWindImpulseCylinder Wind Impulse, FFortWindImpulseCylinderDelta Wind Delta);        // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Calculate Camera Position
	// FVector Calculate Camera Position(double Scale, class USceneCaptureComponent2D* Scene Capture);                       // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderDeath
	// void OnWindImpulseCylinderDeath(FFortWindImpulseCylinder& WindImpulseCylinder);                                       // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
	// void OnWindImpulseCylinderDeltaComplete(FFortWindImpulseCylinder& WindImpulseCylinder);                               // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderCreation
	// void OnWindImpulseCylinderCreation(FFortWindImpulseCylinder& WindImpulseCylinder, FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SpawnTestWind
	// void SpawnTestWind(double Radius, double ImpulseMagnitude);                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Play Water Splash Particle System At Location
	// void Play Water Splash Particle System At Location(FTransform Particle Transform);                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.AddWindParticleSystemComponent
	// void AddWindParticleSystemComponent(class UParticleSystemComponent* ParticleSystemComponent);                         // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Register player for render to texture purposes
	// void Register player for render to texture purposes(class UPrimitiveComponent* Effect Water Interaction FX, class UPrimitiveComponent* Gameplay Wind INteraction Effects); // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Add Wind Component
	// void Add Wind Component(class UPrimitiveComponent* InComponent);                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Update Test
	// void Update Test(double NewMagnitude);                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Add Render To Texture Particle
	// void Add Render To Texture Particle(class UParticleSystem* EmitterTemplate, FTransform& InTransform);                 // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ExecuteUbergraph_WindManager
	// void ExecuteUbergraph_WindManager(int32_t EntryPoint);                                                                // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
/// Size: 0x0170 (0x0002A0 - 0x000410)
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A0   (0x0008)  
	class UAudioComponent*                             EnterTheStormSound;                                         // 0x02A8   (0x0008)  
	class UBillboardComponent*                         Sprite1;                                                    // 0x02B0   (0x0008)  
	float                                              Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x02B8   (0x0004)  
	SDK_UNDEFINED(1,15739) /* TEnumAsByte<ETimelineDirection> */ __um(Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4); // 0x02BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02BD   (0x0003)  MISSED
	class UTimelineComponent*                          Ramp_Up_down_values_on_death;                               // 0x02C0   (0x0008)  
	SDK_UNDEFINED(16,15740) /* FMulticastInlineDelegate */ __um(NewEventDispatcher);                               // 0x02C8   (0x0010)  
	SDK_UNDEFINED(16,15741) /* FMulticastInlineDelegate */ __um(NewEventDispatcher0);                              // 0x02D8   (0x0010)  
	TArray<FVector>                                    Array_of_Cloud_Positions;                                   // 0x02E8   (0x0010)  
	int32_t                                            RecalculateTimer;                                           // 0x02F8   (0x0004)  
	bool                                               Is_Alive;                                                   // 0x02FC   (0x0001)  
	bool                                               IsAliveJustChanged;                                         // 0x02FD   (0x0001)  
	bool                                               IsAlivePrevious;                                            // 0x02FE   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x02FF   (0x0001)  MISSED
	int32_t                                            Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive; // 0x0300   (0x0004)  
	int32_t                                            Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead; // 0x0304   (0x0004)  
	class APostProcessVolume*                          Materialpost;                                               // 0x0308   (0x0008)  
	double                                             post_process_volume_falloff__around_the_threat_volume;      // 0x0310   (0x0008)  
	bool                                               ShowRainEffect;                                             // 0x0318   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0319   (0x0007)  MISSED
	double                                             DeltaTime;                                                  // 0x0320   (0x0008)  
	double                                             PostProcessTargetWeight;                                    // 0x0328   (0x0008)  
	double                                             Current_Post_Process_Weight;                                // 0x0330   (0x0008)  
	double                                             Post_Process_Fade_in_speed;                                 // 0x0338   (0x0008)  
	bool                                               SoundIsActive;                                              // 0x0340   (0x0001)  
	bool                                               SoundWasPreviouslyActive;                                   // 0x0341   (0x0001)  
	bool                                               is_On;                                                      // 0x0342   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x0343   (0x0001)  MISSED
	FLinearColor                                       ThreatFogPostProcessColor_Morning;                          // 0x0344   (0x0010)  
	FLinearColor                                       ThreatFogPostProcessColor_Day;                              // 0x0354   (0x0010)  
	FLinearColor                                       ThreatFogPostProcessColor_Evening;                          // 0x0364   (0x0010)  
	FLinearColor                                       ThreatFogPostProcessColor_Night;                            // 0x0374   (0x0010)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0384   (0x0004)  MISSED
	TArray<FBox>                                       Array_of_Cloud_Volumes;                                     // 0x0388   (0x0010)  
	double                                             PostProcessWeightModulation;                                // 0x0398   (0x0008)  
	double                                             Ramp_Up_And_Down_Anim_Values;                               // 0x03A0   (0x0008)  
	bool                                               ShowRainOnCameraLens;                                       // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x03A9   (0x0007)  MISSED
	class AEmitterCameraLensEffectBase*                Rain_Camera_Lens_Effect;                                    // 0x03B0   (0x0008)  
	class UParticleSystemComponent*                    LocalizedParticleSystem;                                    // 0x03B8   (0x0008)  
	bool                                               IsWorldReady;                                               // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x03C1   (0x0007)  MISSED
	double                                             Rain_Trace_Timer;                                           // 0x03C8   (0x0008)  
	FVector                                            RainTraceOffset;                                            // 0x03D0   (0x0018)  
	double                                             RainMultiplierCurrent;                                      // 0x03E8   (0x0008)  
	double                                             Rain_Spawn_Rate_Exponent;                                   // 0x03F0   (0x0008)  
	bool                                               TracePrevious;                                              // 0x03F8   (0x0001)  
	bool                                               IsAthenaWorld;                                              // 0x03F9   (0x0001)  
	bool                                               bThreatOverride;                                            // 0x03FA   (0x0001)  
	bool                                               bForceOff;                                                  // 0x03FB   (0x0001)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x03FC   (0x0004)  MISSED
	SDK_UNDEFINED(16,15742) /* TScriptInterface<Class> */ __um(CameraLensEffectInterface);                         // 0x0400   (0x0010)  


	/// Functions
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.SetForceOff
	// void SetForceOff(bool bForceOff);                                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox
	// void CalculatePlayerPositionNearBox(FVector BoxMin, FVector BoxMax, double& VolumePlayerCoveragePercentage);          // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc
	// void Ramp Up down values on death__FinishedFunc();                                                                    // [0x18a39e4] BlueprintEvent       
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc
	// void Ramp Up down values on death__UpdateFunc();                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged
	// void OnThreatCloudsChanged(TArray<FThreatLocationInfo>& ThreatLocationInfo);                                          // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady
	// void OnWorldReady();                                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic
	// void VFX_RainTracePeriodic();                                                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer
	// void StartTraceTimer();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect
	// void ForceUpdateLensEffect();                                                                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatOverrideChanged
	// void OnThreatOverrideChanged(bool bForceThreatOn);                                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
	// void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32_t EntryPoint);                               // [0x18a39e4] Final|HasDefaults    
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature
	// void NewEventDispatcher0__DelegateSignature();                                                                        // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature
	// void NewEventDispatcher__DelegateSignature();                                                                         // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AThreat_RainAttachedToPlayer_C : public AActor
{ 
public:
	class UParticleSystemComponent*                    ParticleSystem;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
};

/// Class /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AB_CameraRainDrops_01_C : public AEmitterCameraLensEffectBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  
	float                                              Alpha_Alpha_06897833405CC2B231B02C93C4E725A3;               // 0x0388   (0x0004)  
	SDK_UNDEFINED(1,15743) /* TEnumAsByte<ETimelineDirection> */ __um(Alpha__Direction_06897833405CC2B231B02C93C4E725A3); // 0x038C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	class UTimelineComponent*                          Alpha;                                                      // 0x0390   (0x0008)  


	/// Functions
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc
	// void Alpha__FinishedFunc();                                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc
	// void Alpha__UpdateFunc();                                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
	// void ExecuteUbergraph_B_CameraRainDrops_01(int32_t EntryPoint);                                                       // [0x18a39e4] Final                
};

/// Class /Game/VisualThreatManager/StormVisuals/Debug/Delete.Delete_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelete_C : public UInterface
{ 
public:
};

