
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Blueprints
/// dependency: CoreUObject
/// dependency: Engine

/// Class /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C
/// Size: 0x0340 (0x000290 - 0x0005D0)
class ABP_FluidSim_01_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               DebugPlane                                                  OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           RippleSimMID                                                OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           RenderNormalsMID                                            OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DisplayMID                                                  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DisplayBottomMID                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CrossSectionMID                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<class UTextureRenderTarget2D*>)     RippleRTs                                                   OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(class UMaterialInterface*)                 Display_Material                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(double)                                    Virtual_FPS                                                 OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(int32_t)                                   Passes                                                      OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	DMember(double)                                    TimeAccumulator                                             OFFSET(get<double>, {0x2F8, 8, 0, 0})
	DMember(double)                                    FixedStep                                                   OFFSET(get<double>, {0x300, 8, 0, 0})
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x308, 1, 0, 0})
	DMember(double)                                    Fluid_Size                                                  OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	CMember(TEnumAsByte<FluidBoundary>)                Boundary_Condition                                          OFFSET(get<T>, {0x31C, 1, 0, 0})
	DMember(double)                                    Travel_Speed                                                OFFSET(get<double>, {0x320, 8, 0, 0})
	DMember(double)                                    Damping                                                     OFFSET(get<double>, {0x328, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             NormalRT                                                    OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FVector)                                   CutPos                                                      OFFSET(getStruct<T>, {0x338, 24, 0, 0})
	SMember(FVector)                                   PrevLoc                                                     OFFSET(getStruct<T>, {0x350, 24, 0, 0})
	SMember(FVector)                                   PrecLoc2                                                    OFFSET(getStruct<T>, {0x368, 24, 0, 0})
	SMember(FVector)                                   PrevOffset                                                  OFFSET(getStruct<T>, {0x380, 24, 0, 0})
	SMember(FVector)                                   PrevOffset2                                                 OFFSET(getStruct<T>, {0x398, 24, 0, 0})
	SMember(FVector)                                   GridCenter                                                  OFFSET(getStruct<T>, {0x3B0, 24, 0, 0})
	CMember(class UTextureRenderTarget2D*)             TempRT                                                      OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             ForcesRT                                                    OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(double)                                    ApplyForces                                                 OFFSET(get<double>, {0x3D8, 8, 0, 0})
	CMember(class ALandscapeWaterInfo_C*)              LandscapeWaterInfo                                          OFFSET(get<T>, {0x3E0, 8, 0, 0})
	DMember(int32_t)                                   Renders_Per_Frame                                           OFFSET(get<int32_t>, {0x3E8, 4, 0, 0})
	DMember(bool)                                      Show_Cross_Section                                          OFFSET(get<bool>, {0x3EC, 1, 0, 0})
	DMember(bool)                                      Perf_Test_Mode                                              OFFSET(get<bool>, {0x3ED, 1, 0, 0})
	CMember(class UTextureRenderTarget2D*)             PerfRT                                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(TArray<FFluidForceImpulsePerInstanceData>) ImpulseForces                                               OFFSET(get<T>, {0x3F8, 16, 0, 0})
	CMember(TMap<UActorComponent*, FFluidForceDynamicPerInstanceData>) DynamicForces                               OFFSET(get<T>, {0x408, 80, 0, 0})
	CMember(TMap<UMaterialInterface*, UMaterialInstanceDynamic*>) ForceParentAndMIDMap                             OFFSET(get<T>, {0x458, 80, 0, 0})
	DMember(bool)                                      Show_Simulation_Mesh                                        OFFSET(get<bool>, {0x4A8, 1, 0, 0})
	CMember(class UStaticMeshComponent*)               Fluid_Display_Mesh                                          OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Cross_Section_Mesh                                          OFFSET(get<T>, {0x4B8, 8, 0, 0})
	DMember(double)                                    FluidSizeSquared                                            OFFSET(get<double>, {0x4C0, 8, 0, 0})
	DMember(bool)                                      LocalPawnRef                                                OFFSET(get<bool>, {0x4C8, 1, 0, 0})
	DMember(bool)                                      Debug_Text                                                  OFFSET(get<bool>, {0x4C9, 1, 0, 0})
	DMember(int32_t)                                   Pawn_Check_Every_N_Frames                                   OFFSET(get<int32_t>, {0x4CC, 4, 0, 0})
	CMember(TMap<UActorComponent*, FFluidForceDynamicPerInstanceData>) ProjectileForces                            OFFSET(get<T>, {0x4D0, 80, 0, 0})
	DMember(bool)                                      Follow_Player_                                              OFFSET(get<bool>, {0x520, 1, 0, 0})
	DMember(int32_t)                                   Frames_Since_Last_Active_Force                              OFFSET(get<int32_t>, {0x524, 4, 0, 0})
	DMember(bool)                                      Use_Terrain_Water_System                                    OFFSET(get<bool>, {0x528, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           PhysicsForceMID                                             OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(bool)                                      Add_Physics_Forces                                          OFFSET(get<bool>, {0x538, 1, 0, 0})
	CMember(class UTexture*)                           WaterVelocityTexture                                        OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(TWeakObjectPtr<AWaterZone*>)               WaterZone                                                   OFFSET(get<T>, {0x548, 32, 0, 0})
	DMember(bool)                                      UpdateForcesInFixedTimeStep                                 OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(bool)                                      UpdateSimInFixedTimeStep                                    OFFSET(get<bool>, {0x569, 1, 0, 0})
	DMember(bool)                                      UpdateNormalInFixedTimeStep                                 OFFSET(get<bool>, {0x56A, 1, 0, 0})
	DMember(bool)                                      ShowDebugWaterPlane                                         OFFSET(get<bool>, {0x56B, 1, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DebugWaterPlaneMID                                          OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             DebugRippleRT1                                              OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             DebugRippleRT2                                              OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             DebugRippleRTCurrent                                        OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(int32_t)                                   WaterZoneIndex                                              OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(double)                                    MaxFlowVelocity                                             OFFSET(get<double>, {0x598, 8, 0, 0})
	SMember(FVector2D)                                 WaterZoneExtent                                             OFFSET(getStruct<T>, {0x5A0, 16, 0, 0})
	SMember(FVector)                                   WaterZoneLocation                                           OFFSET(getStruct<T>, {0x5B0, 24, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultSplashMaterial                                       OFFSET(get<T>, {0x5C8, 8, 0, 0})


	/// Functions
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetSingleWaterBodyMIDTexture
	// void SetSingleWaterBodyMIDTexture(class AWaterBody* WaterBody);                                                          // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.CycleDebugRenderTargets
	// void CycleDebugRenderTargets();                                                                                          // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Get Frames Since Last Active Forces
	// void Get Frames Since Last Active Forces();                                                                              // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Clear Sim from Waterbody MIDs
	// void Clear Sim from Waterbody MIDs();                                                                                    // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Remove Projectile Force
	// void Remove Projectile Force(class UActorComponent* Component);                                                          // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Register Projectile Force
	// void Register Projectile Force(FFluidForceDynamic Dynamic Fluid Force, class USceneComponent* Tracked Component);        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.GetPlayerPawnForces
	// void GetPlayerPawnForces();                                                                                              // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Validate RTs
	// void Validate RTs(bool& RTs All Valid);                                                                                  // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Set Waterbody MID Params
	// void Set Waterbody MID Params();                                                                                         // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.GetLocalPawn
	// void GetLocalPawn(class APawn*& Pawn);                                                                                   // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Draw Dynamic Force
	// void Draw Dynamic Force(class UCanvas*& Canvas, FVector2D& Canvas Size, FFluidForceDynamicPerInstanceData& Dynamic Force Settings); // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Remove Dynamic Force
	// void Remove Dynamic Force(class UActorComponent* Component);                                                             // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Register Dynamic Force
	// void Register Dynamic Force(FFluidForceDynamic Dynamic Fluid Force, class USceneComponent* Tracked Component, double WaterLevel); // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Update Dynamic Forces
	// void Update Dynamic Forces();                                                                                            // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Draw Impulse Force
	// void Draw Impulse Force(class UCanvas* Canvas, FVector2D Canvas Size, FFluidForceImpulsePerInstanceData Impulse Settings); // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Update Impulse Lifetimes
	// void Update Impulse Lifetimes();                                                                                         // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Apply Fluid Force Impulse
	// void Apply Fluid Force Impulse(FFluidForceImpulse Impulse Settings);                                                     // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Get LandscapeWaterInfo
	// void Get LandscapeWaterInfo(class AWaterZone* WaterZone);                                                                // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Get Force MID
	// void Get Force MID(class UMaterialInterface*& Parent, class UMaterialInstanceDynamic*& Mid);                             // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.GridMovement
	// void GridMovement();                                                                                                     // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetupSimMIDs
	// void SetupSimMIDs();                                                                                                     // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetupDisplayMIDs
	// void SetupDisplayMIDs();                                                                                                 // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Convert Force Position
	// void Convert Force Position(FVector Force Location, double Sine Bob, FVector& UV Location);                              // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Cycle Render Targets
	// void Cycle Render Targets(class UTextureRenderTarget2D*& Current Target);                                                // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1340978] Event|Public|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Clear RTs
	// void Clear RTs();                                                                                                        // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Allocate RTs
	// void Allocate RTs();                                                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.ReCheckScalability
	// void ReCheckScalability();                                                                                               // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.Release RTs
	// void Release RTs();                                                                                                      // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.FluidGridDebug
	// void FluidGridDebug();                                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetShowDebugWaterPlane
	// void SetShowDebugWaterPlane(bool IsVisible);                                                                             // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugNormalRT
	// void SetDebugNormalRT();                                                                                                 // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugForcesRT
	// void SetDebugForcesRT();                                                                                                 // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRT1
	// void SetDebugRippleRT1();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRT2
	// void SetDebugRippleRT2();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRTCurrent
	// void SetDebugRippleRTCurrent();                                                                                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetUpdateForcesInFixedTimeStep
	// void SetUpdateForcesInFixedTimeStep(bool bool);                                                                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetNormalInFixedTimeStep
	// void SetNormalInFixedTimeStep(bool bool);                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetSimInFixedTimeStep
	// void SetSimInFixedTimeStep(bool bool);                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.SetAllSimParamsInFixedTimeStep
	// void SetAllSimParamsInFixedTimeStep(bool bool);                                                                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.WaterZoneTextureCreated
	// void WaterZoneTextureCreated(class UTextureRenderTarget2D* WaterInfoTexture);                                            // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /FortWater/FluidSimulation/Blueprints/BP_FluidSim_01.BP_FluidSim_01_C.ExecuteUbergraph_BP_FluidSim_01
	// void ExecuteUbergraph_BP_FluidSim_01(int32_t EntryPoint);                                                                // [0x1340978] Final|HasDefaults    
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceSocketInfo.FluidForceSocketInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FFluidForceSocketInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FName>)                        SocketsandEndpoints_6_B3EDD8FC43A7C681151F46BE0AA158C5      OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamic.FluidForceDynamic
/// Size: 0x0070 (0x000000 - 0x000070)
class FFluidForceDynamic : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TEnumAsByte<FluidDynamicForceMeshType>)    ForceType_28_DDC16EE543D2DFD3BA29C49D32198C9C               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ForceRadius_32_C31B527C4C367A5CA5E1DF8E49E76234             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForceStrength_33_2CAA30794D1EFF60AE1C3491D011CECF           OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(class USceneComponent*)                    ForceComponent_34_ABF6640F40D37677EF6F809E09046055          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride_25_5A792CE8489A59E5D9B24F9E4DCFE94A        OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FFluidForceSocketInfo)                     SkeletalMeshSetup_31_51A4130440BAFFBA1DA0FE83E942A30A       OFFSET(getStruct<T>, {0x20, 80, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamicPerInstanceData.FluidForceDynamicPerInstanceData
/// Size: 0x0148 (0x000000 - 0x000148)
class FFluidForceDynamicPerInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FFluidForceDynamic)                        ForceInfo_2_A6A35E3243FAF59D161A5FBAA2F6F2B1                OFFSET(getStruct<T>, {0x0, 112, 0, 0})
	SMember(FVector)                                   ComponentLocation_13_959307184C8E5CCACA55FC8378D92CFD       OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   ComponentVelocity_5_4F6589474918826DF8A6468CF0F2C361        OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(float)                                     BoundsRadius_30_ADFF818743BE39AC4A481D995CB50D03            OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8              OFFSET(get<float>, {0xA4, 4, 0, 0})
	CMember(TMap<FName, FVector>)                      SocketLocationMap_21_ABF6AA244A5F84728A5E83BE2328C7FA       OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<FName, FVector>)                      SocketVelocityMap_26_82B0E24B45935A12E1949F918A59A537       OFFSET(get<T>, {0xF8, 80, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulseTimedEffects.FluidForceImpulseTimedEffects
/// Size: 0x0028 (0x000000 - 0x000028)
class FFluidForceImpulseTimedEffects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Strength_29_2CAA30794D1EFF60AE1C3491D011CECF                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C   OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF        OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulse.FluidForceImpulse
/// Size: 0x0058 (0x000000 - 0x000058)
class FFluidForceImpulse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF           OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A        OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(float)                                     Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F   OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FFluidForceImpulseTimedEffects)            TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E  OFFSET(getStruct<T>, {0x30, 40, 0, 0})
};

/// Struct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceImpulsePerInstanceData.FluidForceImpulsePerInstanceData
/// Size: 0x0061 (0x000000 - 0x000061)
class FFluidForceImpulsePerInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 97;

public:
	SMember(FFluidForceImpulse)                        ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC         OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	DMember(float)                                     ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F             OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F             OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284          OFFSET(get<bool>, {0x60, 1, 0, 0})
};

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

