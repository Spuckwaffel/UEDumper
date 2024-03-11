
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Blueprints
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /FortWater/FluidSimulation/Blueprints/Enums/FluidDynamicForceMeshType.FluidDynamicForceMeshType
/// Size: 0x03
enum class FluidDynamicForceMeshType : uint8_t
{
	FluidDynamicForceMeshType__NewEnumerator0                                        = 0,
	FluidDynamicForceMeshType__NewEnumerator1                                        = 1,
	FluidDynamicForceMeshType__FluidDynamicForceMeshType_MAX                         = 2
};

/// Enum /FortWater/FluidSimulation/Blueprints/Enums/FluidBoundary.FluidBoundary
/// Size: 0x03
enum class FluidBoundary : uint8_t
{
	FluidBoundary__NewEnumerator0                                                    = 0,
	FluidBoundary__NewEnumerator1                                                    = 1,
	FluidBoundary__FluidBoundary_MAX                                                 = 2
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulseTimedEffects.FluidForceImpulseTimedEffects
/// Size: 0x0028 (0x000000 - 0x000028)
struct FFluidForceImpulseTimedEffects
{ 
	bool                                               EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70; // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC;           // 0x0004   (0x0004)  
	float                                              Strength_29_2CAA30794D1EFF60AE1C3491D011CECF;               // 0x0008   (0x0004)  
	float                                              WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234; // 0x000C   (0x0004)  
	float                                              StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A;        // 0x0010   (0x0004)  
	float                                              Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113;               // 0x0014   (0x0004)  
	float                                              StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C;  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UMaterialInterface*                          MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF;       // 0x0020   (0x0008)  
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulse.FluidForceImpulse
/// Size: 0x0058 (0x000000 - 0x000058)
struct FFluidForceImpulse
{ 
	FVector                                            WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC;          // 0x0000   (0x0018)  
	float                                              ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234;            // 0x0018   (0x0004)  
	float                                              ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF;          // 0x001C   (0x0004)  
	class UMaterialInterface*                          MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A;       // 0x0020   (0x0008)  
	float                                              Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113;               // 0x0028   (0x0004)  
	float                                              StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F;  // 0x002C   (0x0004)  
	FFluidForceImpulseTimedEffects                     TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E; // 0x0030   (0x0028)  
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulsePerInstanceData.FluidForceImpulsePerInstanceData
/// Size: 0x0061 (0x000000 - 0x000061)
struct FFluidForceImpulsePerInstanceData
{ 
	FFluidForceImpulse                                 ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC;        // 0x0000   (0x0058)  
	float                                              ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F;            // 0x0058   (0x0004)  
	float                                              StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F;            // 0x005C   (0x0004)  
	bool                                               IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284;         // 0x0060   (0x0001)  
};

/// Class /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C
/// Size: 0x0340 (0x000290 - 0x0005D0)
class ABP_FluidSim_01_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        DebugPlane;                                                 // 0x0298   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02A0   (0x0008)  
	class UMaterialInstanceDynamic*                    RippleSimMID;                                               // 0x02A8   (0x0008)  
	class UMaterialInstanceDynamic*                    RenderNormalsMID;                                           // 0x02B0   (0x0008)  
	class UMaterialInstanceDynamic*                    DisplayMID;                                                 // 0x02B8   (0x0008)  
	class UMaterialInstanceDynamic*                    DisplayBottomMID;                                           // 0x02C0   (0x0008)  
	class UMaterialInstanceDynamic*                    CrossSectionMID;                                            // 0x02C8   (0x0008)  
	TArray<class UTextureRenderTarget2D*>              RippleRTs;                                                  // 0x02D0   (0x0010)  
	class UMaterialInterface*                          Display_Material;                                           // 0x02E0   (0x0008)  
	double                                             Virtual_FPS;                                                // 0x02E8   (0x0008)  
	int32_t                                            Passes;                                                     // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02F4   (0x0004)  MISSED
	double                                             TimeAccumulator;                                            // 0x02F8   (0x0008)  
	double                                             FixedStep;                                                  // 0x0300   (0x0008)  
	bool                                               Enabled;                                                    // 0x0308   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0309   (0x0007)  MISSED
	double                                             Fluid_Size;                                                 // 0x0310   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0318   (0x0004)  
	SDK_UNDEFINED(1,11304) /* TEnumAsByte<FluidBoundary> */ __um(Boundary_Condition);                              // 0x031C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x031D   (0x0003)  MISSED
	double                                             Travel_Speed;                                               // 0x0320   (0x0008)  
	double                                             Damping;                                                    // 0x0328   (0x0008)  
	class UTextureRenderTarget2D*                      NormalRT;                                                   // 0x0330   (0x0008)  
	FVector                                            CutPos;                                                     // 0x0338   (0x0018)  
	FVector                                            PrevLoc;                                                    // 0x0350   (0x0018)  
	FVector                                            PrecLoc2;                                                   // 0x0368   (0x0018)  
	FVector                                            PrevOffset;                                                 // 0x0380   (0x0018)  
	FVector                                            PrevOffset2;                                                // 0x0398   (0x0018)  
	FVector                                            GridCenter;                                                 // 0x03B0   (0x0018)  
	class UTextureRenderTarget2D*                      TempRT;                                                     // 0x03C8   (0x0008)  
	class UTextureRenderTarget2D*                      ForcesRT;                                                   // 0x03D0   (0x0008)  
	double                                             ApplyForces;                                                // 0x03D8   (0x0008)  
	class ALandscapeWaterInfo_C*                       LandscapeWaterInfo;                                         // 0x03E0   (0x0008)  
	int32_t                                            Renders_Per_Frame;                                          // 0x03E8   (0x0004)  
	bool                                               Show_Cross_Section;                                         // 0x03EC   (0x0001)  
	bool                                               Perf_Test_Mode;                                             // 0x03ED   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x03EE   (0x0002)  MISSED
	class UTextureRenderTarget2D*                      PerfRT;                                                     // 0x03F0   (0x0008)  
	TArray<FFluidForceImpulsePerInstanceData>          ImpulseForces;                                              // 0x03F8   (0x0010)  
	SDK_UNDEFINED(80,11305) /* TMap<UActorComponent*, FFluidForceDynamicPerInstanceData> */ __um(DynamicForces);   // 0x0408   (0x0050)  
	SDK_UNDEFINED(80,11306) /* TMap<UMaterialInterface*, UMaterialInstanceDynamic*> */ __um(ForceParentAndMIDMap); // 0x0458   (0x0050)  
	bool                                               Show_Simulation_Mesh;                                       // 0x04A8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x04A9   (0x0007)  MISSED
	class UStaticMeshComponent*                        Fluid_Display_Mesh;                                         // 0x04B0   (0x0008)  
	class UStaticMeshComponent*                        Cross_Section_Mesh;                                         // 0x04B8   (0x0008)  
	double                                             FluidSizeSquared;                                           // 0x04C0   (0x0008)  
	bool                                               LocalPawnRef;                                               // 0x04C8   (0x0001)  
	bool                                               Debug_Text;                                                 // 0x04C9   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x04CA   (0x0002)  MISSED
	int32_t                                            Pawn_Check_Every_N_Frames;                                  // 0x04CC   (0x0004)  
	SDK_UNDEFINED(80,11307) /* TMap<UActorComponent*, FFluidForceDynamicPerInstanceData> */ __um(ProjectileForces); // 0x04D0   (0x0050)  
	bool                                               Follow_Player_;                                             // 0x0520   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0521   (0x0003)  MISSED
	int32_t                                            Frames_Since_Last_Active_Force;                             // 0x0524   (0x0004)  
	bool                                               Use_Terrain_Water_System;                                   // 0x0528   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0529   (0x0007)  MISSED
	class UMaterialInstanceDynamic*                    PhysicsForceMID;                                            // 0x0530   (0x0008)  
	bool                                               Add_Physics_Forces;                                         // 0x0538   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0539   (0x0007)  MISSED
	class UTexture*                                    WaterVelocityTexture;                                       // 0x0540   (0x0008)  
	SDK_UNDEFINED(32,11308) /* TWeakObjectPtr<AWaterZone*> */ __um(WaterZone);                                     // 0x0548   (0x0020)  
	bool                                               UpdateForcesInFixedTimeStep;                                // 0x0568   (0x0001)  
	bool                                               UpdateSimInFixedTimeStep;                                   // 0x0569   (0x0001)  
	bool                                               UpdateNormalInFixedTimeStep;                                // 0x056A   (0x0001)  
	bool                                               ShowDebugWaterPlane;                                        // 0x056B   (0x0001)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x056C   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    DebugWaterPlaneMID;                                         // 0x0570   (0x0008)  
	class UTextureRenderTarget2D*                      DebugRippleRT1;                                             // 0x0578   (0x0008)  
	class UTextureRenderTarget2D*                      DebugRippleRT2;                                             // 0x0580   (0x0008)  
	class UTextureRenderTarget2D*                      DebugRippleRTCurrent;                                       // 0x0588   (0x0008)  
	int32_t                                            WaterZoneIndex;                                             // 0x0590   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x0594   (0x0004)  MISSED
	double                                             MaxFlowVelocity;                                            // 0x0598   (0x0008)  
	FVector2D                                          WaterZoneExtent;                                            // 0x05A0   (0x0010)  
	FVector                                            WaterZoneLocation;                                          // 0x05B0   (0x0018)  
	class UMaterialInterface*                          DefaultSplashMaterial;                                      // 0x05C8   (0x0008)  


	/// Functions
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetSingleWaterBodyMIDTexture
	// void SetSingleWaterBodyMIDTexture(class AWaterBody* WaterBody);                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.CycleDebugRenderTargets
	// void CycleDebugRenderTargets();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Get Frames Since Last Active Forces
	// void Get Frames Since Last Active Forces();                                                                           // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Clear Sim from Waterbody MIDs
	// void Clear Sim from Waterbody MIDs();                                                                                 // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Remove Projectile Force
	// void Remove Projectile Force(class UActorComponent* Component);                                                       // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Register Projectile Force
	// void Register Projectile Force(FFluidForceDynamic Dynamic Fluid Force, class USceneComponent* Tracked Component);     // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.GetPlayerPawnForces
	// void GetPlayerPawnForces();                                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Validate RTs
	// void Validate RTs(bool& RTs All Valid);                                                                               // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Set Waterbody MID Params
	// void Set Waterbody MID Params();                                                                                      // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.GetLocalPawn
	// void GetLocalPawn(class APawn*& Pawn);                                                                                // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Draw Dynamic Force
	// void Draw Dynamic Force(class UCanvas*& Canvas, FVector2D& Canvas Size, FFluidForceDynamicPerInstanceData& Dynamic Force Settings); // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Remove Dynamic Force
	// void Remove Dynamic Force(class UActorComponent* Component);                                                          // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Register Dynamic Force
	// void Register Dynamic Force(FFluidForceDynamic Dynamic Fluid Force, class USceneComponent* Tracked Component, double WaterLevel); // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Update Dynamic Forces
	// void Update Dynamic Forces();                                                                                         // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Draw Impulse Force
	// void Draw Impulse Force(class UCanvas* Canvas, FVector2D Canvas Size, FFluidForceImpulsePerInstanceData Impulse Settings); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Update Impulse Lifetimes
	// void Update Impulse Lifetimes();                                                                                      // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Apply Fluid Force Impulse
	// void Apply Fluid Force Impulse(FFluidForceImpulse Impulse Settings);                                                  // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Get LandscapeWaterInfo
	// void Get LandscapeWaterInfo(class AWaterZone* WaterZone);                                                             // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Get Force MID
	// void Get Force MID(class UMaterialInterface*& Parent, class UMaterialInstanceDynamic*& Mid);                          // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.GridMovement
	// void GridMovement();                                                                                                  // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetupSimMIDs
	// void SetupSimMIDs();                                                                                                  // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetupDisplayMIDs
	// void SetupDisplayMIDs();                                                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Convert Force Position
	// void Convert Force Position(FVector Force Location, double Sine Bob, FVector& UV Location);                           // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Cycle Render Targets
	// void Cycle Render Targets(class UTextureRenderTarget2D*& Current Target);                                             // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Clear RTs
	// void Clear RTs();                                                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Allocate RTs
	// void Allocate RTs();                                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.ReCheckScalability
	// void ReCheckScalability();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Release RTs
	// void Release RTs();                                                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.FluidGridDebug
	// void FluidGridDebug();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetShowDebugWaterPlane
	// void SetShowDebugWaterPlane(bool IsVisible);                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugNormalRT
	// void SetDebugNormalRT();                                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugForcesRT
	// void SetDebugForcesRT();                                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRT1
	// void SetDebugRippleRT1();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRT2
	// void SetDebugRippleRT2();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRTCurrent
	// void SetDebugRippleRTCurrent();                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetUpdateForcesInFixedTimeStep
	// void SetUpdateForcesInFixedTimeStep(bool bool);                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetNormalInFixedTimeStep
	// void SetNormalInFixedTimeStep(bool bool);                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetSimInFixedTimeStep
	// void SetSimInFixedTimeStep(bool bool);                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetAllSimParamsInFixedTimeStep
	// void SetAllSimParamsInFixedTimeStep(bool bool);                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.WaterZoneTextureCreated
	// void WaterZoneTextureCreated(class UTextureRenderTarget2D* WaterInfoTexture);                                         // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.ExecuteUbergraph_BP_FluidSim_01
	// void ExecuteUbergraph_BP_FluidSim_01(int32_t EntryPoint);                                                             // [0x18a39e4] Final|HasDefaults    
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceSocketInfo.FluidForceSocketInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFluidForceSocketInfo
{ 
	SDK_UNDEFINED(80,11309) /* TMap<FName, FName> */   __um(SocketsandEndpoints_6_B3EDD8FC43A7C681151F46BE0AA158C5); // 0x0000   (0x0050)  
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamic.FluidForceDynamic
/// Size: 0x0070 (0x000000 - 0x000070)
struct FFluidForceDynamic
{ 
	SDK_UNDEFINED(1,11310) /* TEnumAsByte<FluidDynamicForceMeshType> */ __um(ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C); // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234;            // 0x0004   (0x0004)  
	float                                              ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF;          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class USceneComponent*                             ForceComponent_34_ABF6640F40D37677EF6F809E09046055;         // 0x0010   (0x0008)  
	class UMaterialInterface*                          MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A;       // 0x0018   (0x0008)  
	FFluidForceSocketInfo                              SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A;      // 0x0020   (0x0050)  
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamicPerInstanceData.FluidForceDynamicPerInstanceData
/// Size: 0x0148 (0x000000 - 0x000148)
struct FFluidForceDynamicPerInstanceData
{ 
	FFluidForceDynamic                                 ForceInfo_2_A6A35E3243FAF59D161A5FBAA2F6F2B1;               // 0x0000   (0x0070)  
	FVector                                            ComponentLocation_13_959307184C8E5CCACA55FC8378D92CFD;      // 0x0070   (0x0018)  
	FVector                                            ComponentVelocity_5_4F6589474918826DF8A6468CF0F2C361;       // 0x0088   (0x0018)  
	float                                              BoundsRadius_30_ADFF818743BE39AC4A481D995CB50D03;           // 0x00A0   (0x0004)  
	float                                              WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8;             // 0x00A4   (0x0004)  
	SDK_UNDEFINED(80,11311) /* TMap<FName, FVector> */ __um(SocketLocationMap_21_ABF6AA244A5F84728A5E83BE2328C7FA); // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,11312) /* TMap<FName, FVector> */ __um(SocketVelocityMap_26_82B0E24B45935A12E1949F918A59A537); // 0x00F8   (0x0050)  
};

