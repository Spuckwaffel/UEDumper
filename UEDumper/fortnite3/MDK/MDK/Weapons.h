
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AI
/// dependency: Animation
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayTags
/// dependency: Niagara

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Melee_CameraShake.Melee_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UMelee_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
/// Size: 0x14B0 (0x000560 - 0x001A10)
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x560, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x568, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x570, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x578, 32, 0, 0})
	SMember(FAnimNode_MeshSpaceRefPose)                AnimGraphNode_MeshRefPose                                   OFFSET(getStruct<T>, {0x598, 16, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x5A8, 32, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics                                  OFFSET(getStruct<T>, {0x5D0, 1296, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics1                                 OFFSET(getStruct<T>, {0xAE0, 1296, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics2                                 OFFSET(getStruct<T>, {0xFF0, 1296, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics3                                 OFFSET(getStruct<T>, {0x1500, 1296, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B(); // [0x1340978] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149(); // [0x1340978] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73(); // [0x1340978] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B(); // [0x1340978] BlueprintEvent       
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM
	// void ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint);                                                           // [0x1340978] Final                
};

/// Class /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C
/// Size: 0x0000 (0x000370 - 0x000370)
class ATracerGeneric_C : public AFortTracerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:


	/// Functions
	// Function /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultBuildingTool.DefaultBuildingTool_C
/// Size: 0x0000 (0x0016B8 - 0x0016B8)
class ADefaultBuildingTool_C : public AFortWeap_BuildingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5816;

public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultEditingTool.DefaultEditingTool_C
/// Size: 0x0000 (0x0015B0 - 0x0015B0)
class ADefaultEditingTool_C : public AFortWeap_EditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5552;

public:
};

/// Class /Game/Weapons/FORT_Crossbows/Crossbow/Effects/BP_Hook_Camera_LensEffect.BP_Hook_Camera_LensEffect_C
/// Size: 0x0000 (0x000380 - 0x000380)
class ABP_Hook_Camera_LensEffect_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C
/// Size: 0x03C0 (0x001D00 - 0x0020C0)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8384;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1D00, 8, 0, 0})
	DMember(float)                                     AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642 OFFSET(get<float>, {0x1D08, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642 OFFSET(get<T>, {0x1D0C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 AnimateScopePostProcess                                     OFFSET(get<T>, {0x1D10, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     OpticGlint                                                  OFFSET(get<T>, {0x1D18, 8, 0, 0})
	DMember(bool)                                      UseDestroyEffect                                            OFFSET(get<bool>, {0x1D20, 1, 0, 0})
	CMember(class UParticleSystem*)                    WeaponDurabilityDestroyEffect                               OFFSET(get<T>, {0x1D28, 8, 0, 0})
	CMember(class UParticleSystem*)                    WeaponDurabilityDestroyEffectIcon                           OFFSET(get<T>, {0x1D30, 8, 0, 0})
	DMember(bool)                                      Use_Reload_Particles                                        OFFSET(get<bool>, {0x1D38, 1, 0, 0})
	DMember(bool)                                      UseShellsOnFire_                                            OFFSET(get<bool>, {0x1D39, 1, 0, 0})
	DMember(bool)                                      UseShellsOnReload_                                          OFFSET(get<bool>, {0x1D3A, 1, 0, 0})
	DMember(bool)                                      UseShellsOnPump_                                            OFFSET(get<bool>, {0x1D3B, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     Shell_Burst_FX                                              OFFSET(get<T>, {0x1D40, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     Shell_Looping_FX                                            OFFSET(get<T>, {0x1D48, 8, 0, 0})
	CMember(class UNiagaraSystem*)                     Reload_System                                               OFFSET(get<T>, {0x1D50, 8, 0, 0})
	CMember(class UMaterialInterface*)                 Reload_Smoke_Material                                       OFFSET(get<T>, {0x1D58, 8, 0, 0})
	SMember(FName)                                     ReloadSocketName                                            OFFSET(getStruct<T>, {0x1D60, 4, 0, 0})
	SMember(FGameplayTag)                              TagToApplyOpticGlint                                        OFFSET(getStruct<T>, {0x1D64, 4, 0, 0})
	CMember(TArray<class AFortAIPawn*>)                Array_Of_Active_Enemy_AI                                    OFFSET(get<T>, {0x1D68, 16, 0, 0})
	DMember(bool)                                      Scope___Render_Enemies_To_Custom_Depth_Buffer               OFFSET(get<bool>, {0x1D78, 1, 0, 0})
	SMember(FName)                                     Shells_Socket_Name                                          OFFSET(getStruct<T>, {0x1D7C, 4, 0, 0})
	CMember(TEnumAsByte<En_ShellTypes_01>)             ShellTypeSelect                                             OFFSET(get<T>, {0x1D80, 1, 0, 0})
	DMember(double)                                    Shells_Spawn_Rate_Scale                                     OFFSET(get<double>, {0x1D88, 8, 0, 0})
	SMember(FVector)                                   ShellsRotationRate                                          OFFSET(getStruct<T>, {0x1D90, 24, 0, 0})
	SMember(FVector)                                   Shells_Velocity                                             OFFSET(getStruct<T>, {0x1DA8, 24, 0, 0})
	SMember(FVector)                                   Shells_Gravity                                              OFFSET(getStruct<T>, {0x1DC0, 24, 0, 0})
	SMember(FVector)                                   Shells_Size                                                 OFFSET(getStruct<T>, {0x1DD8, 24, 0, 0})
	DMember(double)                                    Target_Scope_Vignette_Blur_Screen_Percentage                OFFSET(get<double>, {0x1DF0, 8, 0, 0})
	DMember(double)                                    ScopeCameraOffsetX                                          OFFSET(get<double>, {0x1DF8, 8, 0, 0})
	DMember(double)                                    ScopeCameraOffsetY                                          OFFSET(get<double>, {0x1E00, 8, 0, 0})
	DMember(double)                                    Scope_Camera_Offset_Amount                                  OFFSET(get<double>, {0x1E08, 8, 0, 0})
	DMember(double)                                    Inherit_Parent_Velocity                                     OFFSET(get<double>, {0x1E10, 8, 0, 0})
	DMember(double)                                    Cylindrical_Radius                                          OFFSET(get<double>, {0x1E18, 8, 0, 0})
	DMember(double)                                    Cylindrical_Height                                          OFFSET(get<double>, {0x1E20, 8, 0, 0})
	SMember(FLinearColor)                              Shell_Color                                                 OFFSET(getStruct<T>, {0x1E28, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  Spawned_Shells                                              OFFSET(get<T>, {0x1E38, 8, 0, 0})
	DMember(bool)                                      DebugShellsSocket_                                          OFFSET(get<bool>, {0x1E40, 1, 0, 0})
	CMember(class USoundBase*)                         Sound_ScopeZoomIn                                           OFFSET(get<T>, {0x1E48, 8, 0, 0})
	CMember(class USoundBase*)                         Sound_ScopeZoomOut                                          OFFSET(get<T>, {0x1E50, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  Alteration_Ambient_PS                                       OFFSET(get<T>, {0x1E58, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ReticleHUDElementTags                                       OFFSET(getStruct<T>, {0x1E60, 32, 0, 0})
	DMember(bool)                                      Is_Wind_Enabled                                             OFFSET(get<bool>, {0x1E80, 1, 0, 0})
	CMember(class UParticleSystem*)                    MuzzleWindParticleSystem                                    OFFSET(get<T>, {0x1E88, 8, 0, 0})
	DMember(bool)                                      ShouldHideReticleAfterDelay                                 OFFSET(get<bool>, {0x1E90, 1, 0, 0})
	CMember(class UParticleSystemComponent*)           MuzzleWindParticleSpawned                                   OFFSET(get<T>, {0x1E98, 8, 0, 0})
	DMember(int32_t)                                   StencilBufferValue                                          OFFSET(get<int32_t>, {0x1EA0, 4, 0, 0})
	CMember(class UCurveFloat*)                        Curve_PitchOffset                                           OFFSET(get<T>, {0x1EA8, 8, 0, 0})
	CMember(class USoundBase*)                         Sound_ScopedInLoop                                          OFFSET(get<T>, {0x1EB0, 8, 0, 0})
	CMember(class UAudioComponent*)                    ScopeZoomInComp                                             OFFSET(get<T>, {0x1EB8, 8, 0, 0})
	CMember(class UAudioComponent*)                    ScopedInLoopComp                                            OFFSET(get<T>, {0x1EC0, 8, 0, 0})
	CMember(class UAudioComponent*)                    ScopeZoomOutComp                                            OFFSET(get<T>, {0x1EC8, 8, 0, 0})
	DMember(double)                                    Alteration_Ambient_PS_Max_Draw_Distance                     OFFSET(get<double>, {0x1ED0, 8, 0, 0})
	DMember(double)                                    Muzzle_PS_Max_Draw_Distance                                 OFFSET(get<double>, {0x1ED8, 8, 0, 0})
	DMember(double)                                    Beam_PS_Max_Draw_Distance                                   OFFSET(get<double>, {0x1EE0, 8, 0, 0})
	DMember(double)                                    Reload_PS_Max_Draw_Distance                                 OFFSET(get<double>, {0x1EE8, 8, 0, 0})
	DMember(double)                                    Shells_PS_Max_Draw_Distance                                 OFFSET(get<double>, {0x1EF0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  onAimDownSightsChanged                                      OFFSET(getStruct<T>, {0x1EF8, 16, 0, 0})
	CMember(class UNiagaraComponent*)                  MuzzleNiagaraComponentInstance                              OFFSET(get<T>, {0x1F08, 8, 0, 0})
	SMember(FTimerHandle)                              ScopeEffectDelay1Handle                                     OFFSET(getStruct<T>, {0x1F10, 8, 0, 0})
	SMember(FTimerHandle)                              ScopeEffectDelay2Handle                                     OFFSET(getStruct<T>, {0x1F18, 8, 0, 0})
	SMember(FScalableFloat)                            UseUpdatedFeedback                                          OFFSET(getStruct<T>, {0x1F20, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartFiring                                               OFFSET(getStruct<T>, {0x1F48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPersistentFireStopped                                     OFFSET(getStruct<T>, {0x1F58, 16, 0, 0})
	CMember(class UStaticMesh*)                        ScopeMesh                                                   OFFSET(get<T>, {0x1F68, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               ScopeMesh1P_Spawned                                         OFFSET(get<T>, {0x1F70, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         ScopeMaterialOverrides                                      OFFSET(get<T>, {0x1F78, 16, 0, 0})
	DMember(float)                                     Reload_Smoke_Lifetime                                       OFFSET(get<float>, {0x1F88, 4, 0, 0})
	DMember(float)                                     Reload_Smoke_Width_Scale                                    OFFSET(get<float>, {0x1F8C, 4, 0, 0})
	SMember(FLinearColor)                              BaseColorAlpha                                              OFFSET(getStruct<T>, {0x1F90, 16, 0, 0})
	DMember(bool)                                      Use_Emissive_in_Reload                                      OFFSET(get<bool>, {0x1FA0, 1, 0, 0})
	SMember(FLinearColor)                              Reload_Emissive_Color                                       OFFSET(getStruct<T>, {0x1FA4, 16, 0, 0})
	DMember(bool)                                      Is_Rocket_Launcher                                          OFFSET(get<bool>, {0x1FB4, 1, 0, 0})
	SMember(FLinearColor)                              Rocket_Launcher_Spark_Color                                 OFFSET(getStruct<T>, {0x1FB8, 16, 0, 0})
	DMember(bool)                                      Reload_Ejects_Shells                                        OFFSET(get<bool>, {0x1FC8, 1, 0, 0})
	CMember(class UNiagaraComponent*)                  OpticGlintComp                                              OFFSET(get<T>, {0x1FD0, 8, 0, 0})
	CMember(class UFXSystemAsset*)                     Muzzle_System                                               OFFSET(get<T>, {0x1FD8, 8, 0, 0})
	DMember(float)                                     Muzzle_Hue_Control                                          OFFSET(get<float>, {0x1FE0, 4, 0, 0})
	DMember(float)                                     Muzzle_Core_Cap_Scale                                       OFFSET(get<float>, {0x1FE4, 4, 0, 0})
	SMember(FVector)                                   Muzzle_Core_Scale                                           OFFSET(getStruct<T>, {0x1FE8, 24, 0, 0})
	DMember(float)                                     Spark_Amount_Scale                                          OFFSET(get<float>, {0x2000, 4, 0, 0})
	DMember(float)                                     Smoke_Size_Scale                                            OFFSET(get<float>, {0x2004, 4, 0, 0})
	SMember(FLinearColor)                              MuzzleSmokeInitialColor                                     OFFSET(getStruct<T>, {0x2008, 16, 0, 0})
	DMember(float)                                     Smoke_Initial_Color_Scale_Variance                          OFFSET(get<float>, {0x2018, 4, 0, 0})
	DMember(float)                                     Smoke_Emissive_Scale                                        OFFSET(get<float>, {0x201C, 4, 0, 0})
	DMember(bool)                                      Use_Heated_Elements                                         OFFSET(get<bool>, {0x2020, 1, 0, 0})
	DMember(float)                                     Decal_Size                                                  OFFSET(get<float>, {0x2024, 4, 0, 0})
	SMember(FVector)                                   Decal_Offset                                                OFFSET(getStruct<T>, {0x2028, 24, 0, 0})
	DMember(float)                                     Decal_Alpha                                                 OFFSET(get<float>, {0x2040, 4, 0, 0})
	CMember(class UFXSystemComponent*)                 Spawned_Muzzle_System                                       OFFSET(get<T>, {0x2048, 8, 0, 0})
	DMember(int32_t)                                   Burst_Loops                                                 OFFSET(get<int32_t>, {0x2050, 4, 0, 0})
	DMember(bool)                                      Muzzle_BakedSupressor__Always_Suppressed_                   OFFSET(get<bool>, {0x2054, 1, 0, 0})
	DMember(bool)                                      Baked_Optics__Always_has_Optics_element_                    OFFSET(get<bool>, {0x2055, 1, 0, 0})
	DMember(double)                                    MinPlayFXTime                                               OFFSET(get<double>, {0x2058, 8, 0, 0})
	DMember(double)                                    LastPlayFXTime                                              OFFSET(get<double>, {0x2060, 8, 0, 0})
	SMember(FScalableFloat)                            UseNativeFX                                                 OFFSET(getStruct<T>, {0x2068, 40, 0, 0})
	DMember(bool)                                      bIsLocal                                                    OFFSET(get<bool>, {0x2090, 1, 0, 0})
	CMember(class UNiagaraSystem*)                     Magazine_Eject_System                                       OFFSET(get<T>, {0x2098, 8, 0, 0})
	SMember(FName)                                     Magazine_Eject_Socket_Name                                  OFFSET(getStruct<T>, {0x20A0, 4, 0, 0})
	DMember(bool)                                      Use_Magazine_Eject                                          OFFSET(get<bool>, {0x20A4, 1, 0, 0})
	CMember(class UMaterialInterface*)                 Magazine_Eject_Material                                     OFFSET(get<T>, {0x20A8, 8, 0, 0})
	CMember(class UStaticMesh*)                        Magazine_Eject_Model                                        OFFSET(get<T>, {0x20B0, 8, 0, 0})
	DMember(float)                                     ScopeEffectDelay1Time                                       OFFSET(get<float>, {0x20B8, 4, 0, 0})
	DMember(float)                                     ScopeEffectDelay2Time                                       OFFSET(get<float>, {0x20BC, 4, 0, 0})


	/// Functions
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Try Show Reticle
	// void Try Show Reticle();                                                                                                 // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Activate Magazine Eject FX
	// void Activate Magazine Eject FX();                                                                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.MuzzleModCheck
	// void MuzzleModCheck(bool& isMuzzleBrake, bool& isMuzzleSupressor, bool& isMuzzleBreacher);                               // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.MuzzleADSCheck
	// void MuzzleADSCheck(bool& Return ADS Bool);                                                                              // [0x1340978] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowOpticGlint
	// void ShowOpticGlint(bool AimDownsights);                                                                                 // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StopLocalForceFeedback
	// void StopLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, FName tag);                                 // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayLocalForceFeedback
	// void PlayLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, FName tag, bool bLooping);                  // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.getScopeComp
	// void getScopeComp(class UStaticMeshComponent*& ScopeComponent);                                                          // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.initScope
	// void initScope();                                                                                                        // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.IsNewFeedbackEnabled
	// void IsNewFeedbackEnabled(bool& Enabled);                                                                                // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.LocalReloadStarted
	// void LocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);                                             // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopeOutAudio
	// void PlayScopeOutAudio();                                                                                                // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters
	// void GetScopeParameters(class UStaticMeshComponent*& ScopeComponent, FVector2D& DepthOfFieldVignetteRange, FVector& WeaponSightsOffset); // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio
	// void StopScopedAudio();                                                                                                  // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio
	// void StartScopedAudio();                                                                                                 // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
	// void SetPostProcessParams(double InputPin);                                                                              // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
	// void SetActiveAlterationIdleParticles(bool Active);                                                                      // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
	// void ShowReticle();                                                                                                      // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
	// void HideReticle();                                                                                                      // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
	// void ActivateOrDeactivateWindParticle(bool bNewActive);                                                                  // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
	// void DeactivateMuzzleFX();                                                                                               // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
	// void ActivateReloadSmokeFX();                                                                                            // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
	// void ActivateShellsFX(bool bool);                                                                                        // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
	// void DeactivateShellsFX();                                                                                               // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
	// void SetupShellFX();                                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
	// void UpdateShellEmittersFX();                                                                                            // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
	// void Muzzle Play Reload FX(TEnumAsByte<EFortReloadFXState> Selection);                                                   // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
	// void Muzzle Flash FX(bool Persistent Fire);                                                                              // [0x1340978] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
	// void AnimateScopePostProcess__FinishedFunc();                                                                            // [0x1340978] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
	// void AnimateScopePostProcess__UpdateFunc();                                                                              // [0x1340978] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__Toggle Scope__EventFunc
	// void AnimateScopePostProcess__Toggle Scope__EventFunc();                                                                 // [0x1340978] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_F0DCFB40496C39D956D872BA984FA1F2
	// void OnLoaded_F0DCFB40496C39D956D872BA984FA1F2(class UObject* Loaded);                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
	// void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
	// void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
	// void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
	// void OnStopWeaponFireFX();                                                                                               // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
	// void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage);                                                        // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
	// void OnSetTargeting(bool bNewIsTargeting);                                                                               // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
	// void InitializeScopeVariables();                                                                                         // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
	// void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue);                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
	// void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
	// void ShellsON_(onPump)();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                          // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
	// void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit);                                                           // [0x1340978] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
	// void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit);                                                 // [0x1340978] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh
	// void HideWeaponMesh();                                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh
	// void ShowWeaponMesh();                                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon
	// void HideWeapon();                                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon
	// void ShowWeapon();                                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP
	// void ReverseScopePP();                                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound
	// void ResetDoonceScopeSound();                                                                                            // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff
	// void UnhideThirdPersonStuff();                                                                                           // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP
	// void PlayScopePP();                                                                                                      // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff
	// void HideFirstPersonStuff();                                                                                             // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX
	// void AbortScopeFX();                                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff
	// void HideThirdPersonStuff();                                                                                             // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
	// void UnhideFirstPersonStuffPart2(int32_t Which Call);                                                                    // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1
	// void UnhideFirstPersonStuffPart1();                                                                                      // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX
	// void ForceScopeFX();                                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange
	// void BindFireRateChange();                                                                                               // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange
	// void PitchUpOnRateOfFireChange(float NewRateOfFire);                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn
	// void ShellEjectionFixOn();                                                                                               // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality
	// void Bind on Effects Quality();                                                                                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff
	// void ShellEjectionOff();                                                                                                 // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly
	// void ForceScopeBackImmediatly();                                                                                         // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC); // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated
	// void OnStartOverheated();                                                                                                // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData
	// void OnApplyFireModeData(class UFortWeaponFireModeData* FireModeData);                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay2
	// void ScopeEffectDelay2();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay1
	// void ScopeEffectDelay1();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ModAddedtoWeapon
	// void ModAddedtoWeapon(class UFortWeaponModItemDefinition* Mod, class AFortWeapon* Weapon);                               // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.CancelScopeTargeting
	// void CancelScopeTargeting();                                                                                             // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UpdateModMagazine
	// void UpdateModMagazine();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // [0x1340978] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
	// void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint);                                                              // [0x1340978] Final|HasDefaults    
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPersistentFireStopped__DelegateSignature
	// void OnPersistentFireStopped__DelegateSignature();                                                                       // [0x1340978] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStartFiring__DelegateSignature
	// void OnStartFiring__DelegateSignature();                                                                                 // [0x1340978] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature
	// void onAimDownSightsChanged__DelegateSignature(bool AimDownsights);                                                      // [0x1340978] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
/// Size: 0x0090 (0x001780 - 0x001810)
class AB_Athena_Pickaxe_Generic_C : public AFortWeaponPickaxeAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1780, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           MeleeHeavy_PSC                                              OFFSET(get<T>, {0x1788, 8, 0, 0})
	CMember(class UParticleSystem*)                    MeleeHeavy_ParticleSystem                                   OFFSET(get<T>, {0x1790, 8, 0, 0})
	CMember(class UParticleSystem*)                    WeaponDurabilityDestroyEffect                               OFFSET(get<T>, {0x1798, 8, 0, 0})
	CMember(class UParticleSystem*)                    WeaponDurabilityDestroyEffectIcon                           OFFSET(get<T>, {0x17A0, 8, 0, 0})
	DMember(bool)                                      UseDestroyEffect                                            OFFSET(get<bool>, {0x17A8, 1, 0, 0})
	CMember(class UNiagaraComponent*)                  Alteration_Ambient_PS                                       OFFSET(get<T>, {0x17B0, 8, 0, 0})
	SMember(FVector)                                   Effects_Color_Level                                         OFFSET(getStruct<T>, {0x17B8, 24, 0, 0})
	DMember(bool)                                      Equipped                                                    OFFSET(get<bool>, {0x17D0, 1, 0, 0})
	DMember(bool)                                      bEquipPendingInstigator                                     OFFSET(get<bool>, {0x17D1, 1, 0, 0})
	DMember(bool)                                      UseTimeofDayControl                                         OFFSET(get<bool>, {0x17D2, 1, 0, 0})
	DMember(bool)                                      Swing_Right_                                                OFFSET(get<bool>, {0x17D3, 1, 0, 0})
	CMember(class UFXSystemComponent*)                 Impact_FX                                                   OFFSET(get<T>, {0x17D8, 8, 0, 0})
	SMember(FRotator)                                  Left_Swing_Rotation                                         OFFSET(getStruct<T>, {0x17E0, 24, 0, 0})
	SMember(FRotator)                                  Right_Swing_Rotation                                        OFFSET(getStruct<T>, {0x17F8, 24, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color
	// void Melee_Effect_Color(FVector& Melee_Color_Set);                                                                       // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Setup Swing Montage Section Index
	// int32_t Setup Swing Montage Section Index();                                                                             // [0x1340978] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Binding Time of Day Control
	// void Binding Time of Day Control(bool Bind / Unbind (T/F));                                                              // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents
	// void UnbindSwingAnimTrailEvents();                                                                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents
	// void BindSwingAnimTrailEvents();                                                                                         // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio
	// void PlayCQCPickaxeEnemyAudio(FHitResult Hit Result);                                                                    // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles
	// void SetActiveAlterationIdleParticles(bool Active, bool Reset);                                                          // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21
	// void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(FName StatName, int32_t StatValue);                                  // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2
	// void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(class UObject* Loaded);                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight
	// void MeleeSwingRight(bool First Right);                                                                                  // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft
	// void MeleeSwingLeft(bool First Left);                                                                                    // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft
	// void FootStepLeft();                                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight
	// void FootStepRight();                                                                                                    // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End
	// void MeleeSwingRight_End();                                                                                              // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End
	// void MeleeSwingLeft_End();                                                                                               // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts
	// void PlayRClickImpacts();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                          // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics
	// void OnInitWeaponCosmetics();                                                                                            // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch
	// void HandleKillWatch();                                                                                                  // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills
	// void UpdateBasedOnKills(int32_t Watched Kills);                                                                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify
	// void Anim Trails Notify(bool bActive);                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable
	// void Anim Trails Disable();                                                                                              // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight
	// void SwingRight();                                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft
	// void SwingLeft();                                                                                                        // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd
	// void SwingRightEnd();                                                                                                    // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd
	// void SwingLeftEnd();                                                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet
	// void OnInstigatorSet();                                                                                                  // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.TODCheck
	// void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC); // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleWeaponHolstered
	// void HandleWeaponHolstered();                                                                                            // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Vehicle Passenger
	// void Vehicle Passenger(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Legacy Anim Trail Setup
	// void Legacy Anim Trail Setup(bool Activate);                                                                             // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic
	// void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32_t EntryPoint);                                                      // [0x1340978] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C
/// Size: 0x08B8 (0x000720 - 0x000FD8)
class UM_MED_Patches_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x738, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x7E8, 32, 0, 0})
	SMember(FGravityOverrideParamsStruct)              Gravity_Override_Params                                     OFFSET(getStruct<T>, {0x808, 1976, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0xFC0, 24, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.ExecuteUbergraph_M_MED_Patches_Axe_AnimBP
	// void ExecuteUbergraph_M_MED_Patches_Axe_AnimBP(int32_t EntryPoint);                                                      // [0x1340978] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C
/// Size: 0x1E70 (0x000720 - 0x002590)
class USpaceFeline_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 9616;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x728, 2, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x738, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x740, 32, 0, 0})
	SMember(FAnimNode_CopyPoseFromMesh)                AnimGraphNode_CopyPoseFromMesh                              OFFSET(getStruct<T>, {0x760, 336, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x8B0, 32, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0x8D0, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x918, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x938, 32, 0, 0})
	SMember(FAnimNode_CopyPoseFromMesh)                AnimGraphNode_CopyPoseFromMesh1                             OFFSET(getStruct<T>, {0x958, 336, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0xAA8, 32, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0xAD0, 2416, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody1                                    OFFSET(getStruct<T>, {0x1440, 2416, 0, 0})
	CMember(class UCustomCharacterPartAnimInstance*)   Character_Part_Anim_Instance                                OFFSET(get<T>, {0x1DB0, 8, 0, 0})
	DMember(double)                                    FrontEnd_variable                                           OFFSET(get<double>, {0x1DB8, 8, 0, 0})
	SMember(FGravityOverrideParamsStruct)              Gravity_Override_Params                                     OFFSET(getStruct<T>, {0x1DC0, 1976, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0x2578, 24, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.ExecuteUbergraph_SpaceFeline_Axe_AnimBP
	// void ExecuteUbergraph_SpaceFeline_Axe_AnimBP(int32_t EntryPoint);                                                        // [0x1340978] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Style.VariantScript_Pickaxe_BistroAstronaut_Style_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVariantScript_Pickaxe_BistroAstronaut_Style_C : public UFortLoadoutTagDrivenVariantScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Style.VariantScript_Pickaxe_BistroAstronaut_Style_C.DetermineVariantSelection
	// FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout);                                                     // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UVariantScript_Pickaxe_BistroAstronaut_Color_C : public UFortLoadoutTagDrivenVariantScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Bistro_Astronaut_Female/Scripts/VariantScript_Pickaxe_BistroAstronaut_Color.VariantScript_Pickaxe_BistroAstronaut_Color_C.DetermineVariantSelection
	// FGameplayTag DetermineVariantSelection(FFortAthenaLoadout& Loadout);                                                     // [0x1340978] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Harvest_CameraShake.Harvest_CameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UHarvest_CameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C
/// Size: 0x0BE8 (0x000720 - 0x001308)
class UEmberRae_Axe_L_AnimBP_Post_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x738, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x758, 176, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x808, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x828, 32, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0x850, 2416, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0x11C0, 296, 0, 0})
	CMember(class USkeletalMeshComponent*)             SkeletalMesh                                                OFFSET(get<T>, {0x12E8, 8, 0, 0})
	SMember(FVector)                                   TranslateMSTR                                               OFFSET(getStruct<T>, {0x12F0, 24, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post
	// void ExecuteUbergraph_EmberRae_Axe_L_AnimBP_Post(int32_t EntryPoint);                                                    // [0x1340978] Final                
};

/// Class /Game/Weapons/FORT_BuildingTools/DecoTool.DecoTool_C
/// Size: 0x0000 (0x0015C0 - 0x0015C0)
class ADecoTool_C : public AFortDecoTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5568;

public:
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C
/// Size: 0x0E40 (0x000720 - 0x001560)
class UEmberRae_Axe_R_AnimBP_Post_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x738, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x758, 176, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x808, 32, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x828, 32, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0x850, 2416, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0x11C0, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0x12E8, 296, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone2                                   OFFSET(getStruct<T>, {0x1410, 296, 0, 0})
	CMember(class USkeletalMeshComponent*)             SkeletalMesh                                                OFFSET(get<T>, {0x1538, 8, 0, 0})
	SMember(FVector)                                   TranslateMSTR                                               OFFSET(getStruct<T>, {0x1540, 24, 0, 0})
	DMember(double)                                    StrapScaleAlpha                                             OFFSET(get<double>, {0x1558, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post
	// void ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post(int32_t EntryPoint);                                                    // [0x1340978] Final                
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
/// Size: 0x00A1 (0x001AA0 - 0x001B41)
class AB_Athena_Pickaxe_DualWield_Generic_C : public AFortWeaponPickaxeDualWieldAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6977;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1AA0, 8, 0, 0})
	DMember(bool)                                      Equipped                                                    OFFSET(get<bool>, {0x1AA8, 1, 0, 0})
	CMember(class UNiagaraComponent*)                  Alteration_Ambient_PS                                       OFFSET(get<T>, {0x1AB0, 8, 0, 0})
	CMember(class UParticleSystem*)                    MeleeHeavy_ParticleSystem                                   OFFSET(get<T>, {0x1AB8, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           MeleeHeavy_PSC                                              OFFSET(get<T>, {0x1AC0, 8, 0, 0})
	DMember(bool)                                      UseDestroyEffect                                            OFFSET(get<bool>, {0x1AC8, 1, 0, 0})
	CMember(class UParticleSystem*)                    WeaponDurabilityDestroyEffect                               OFFSET(get<T>, {0x1AD0, 8, 0, 0})
	CMember(class UParticleSystem*)                    WeaponDurabilityDestroyEffectIcon                           OFFSET(get<T>, {0x1AD8, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  Offhand_Alteration_Ambient_PS                               OFFSET(get<T>, {0x1AE0, 8, 0, 0})
	DMember(bool)                                      bEquipPendingInstigator                                     OFFSET(get<bool>, {0x1AE8, 1, 0, 0})
	SMember(FName)                                     Offhand_Socket_Name                                         OFFSET(getStruct<T>, {0x1AEC, 4, 0, 0})
	CMember(class UAnimMontage*)                       MontageReference                                            OFFSET(get<T>, {0x1AF0, 8, 0, 0})
	DMember(bool)                                      UseTimeofDayControl                                         OFFSET(get<bool>, {0x1AF8, 1, 0, 0})
	CMember(class UFXSystemComponent*)                 Impact_FX                                                   OFFSET(get<T>, {0x1B00, 8, 0, 0})
	DMember(bool)                                      Swing_Right_                                                OFFSET(get<bool>, {0x1B08, 1, 0, 0})
	SMember(FRotator)                                  Left_Swing_Rotation                                         OFFSET(getStruct<T>, {0x1B10, 24, 0, 0})
	SMember(FRotator)                                  Right_Swing_Rotation                                        OFFSET(getStruct<T>, {0x1B28, 24, 0, 0})
	DMember(bool)                                      Swing_Right_1                                               OFFSET(get<bool>, {0x1B40, 1, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Binding Time of Day Control
	// void Binding Time of Day Control(bool Bind / Unbind (T/F));                                                              // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Unbind Dual Melee Swing Events
	// void Unbind Dual Melee Swing Events();                                                                                   // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Bind Dual Melee Swing Events
	// void Bind Dual Melee Swing Events();                                                                                     // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Set Active Alteration Idle Particles
	// void Set Active Alteration Idle Particles(bool Active, bool Reset);                                                      // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1340978] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnStatChanged_9F72D14C4573F491E38302B51F08A0B8
	// void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(FName StatName, int32_t StatValue);                                  // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D
	// void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject* Loaded);                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.PlayRClickImpacts
	// void PlayRClickImpacts();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                          // [0x1340978] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod);                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);                                          // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitWeaponCosmetics
	// void OnInitWeaponCosmetics();                                                                                            // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left End
	// void Swing Left End();                                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right End
	// void Swing Right End();                                                                                                  // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInstigatorSet
	// void OnInstigatorSet();                                                                                                  // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingRight_Common
	// void SwingRight_Common();                                                                                                // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingLeft_Common
	// void SwingLeft_Common();                                                                                                 // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left
	// void Swing Left();                                                                                                       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right
	// void Swing Right();                                                                                                      // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left 2
	// void Swing Left 2();                                                                                                     // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right 2
	// void Swing Right 2();                                                                                                    // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Notify
	// void Anim Trails Notify(bool bActive);                                                                                   // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Disable
	// void Anim Trails Disable();                                                                                              // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC); // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.TODCheck
	// void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.HandleKillWatch
	// void HandleKillWatch();                                                                                                  // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UpdateBasedOnKills
	// void UpdateBasedOnKills(int32_t Watched Kills);                                                                          // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Vehicle Passenger
	// void Vehicle Passenger(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);       // [0x1340978] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic
	// void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32_t EntryPoint);                                            // [0x1340978] Final|HasDefaults    
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C
/// Size: 0x00E8 (0x000720 - 0x000808)
class ULoudPhoenix_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x738, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x758, 176, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.ExecuteUbergraph_LoudPhoenix_Axe_AnimBP
	// void ExecuteUbergraph_LoudPhoenix_Axe_AnimBP(int32_t EntryPoint);                                                        // [0x1340978] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C
/// Size: 0x0130 (0x000720 - 0x000850)
class UNitroFlow_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2128;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x738, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x758, 176, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x808, 72, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.ExecuteUbergraph_NitroFlow_Axe_AnimBP
	// void ExecuteUbergraph_NitroFlow_Axe_AnimBP(int32_t EntryPoint);                                                          // [0x1340978] Final                
};

/// Class /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/PossessProp/Creative_Player_PropInterface.Creative_Player_PropInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreative_Player_PropInterface_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Weapons/Prototype/ObjectMover/Blueprints/ObjectInteractionBehaviors/PossessProp/Creative_Player_PropInterface.Creative_Player_PropInterface_C.PreDestroy
	// void PreDestroy();                                                                                                       // [0x1340978] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
/// Size: 0x10F8 (0x000720 - 0x001818)
class UMechanical_Engineer_Female_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6168;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               OFFSET(getStruct<T>, {0x738, 176, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x7E8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x808, 32, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x828, 32, 0, 0})
	SMember(FAnimNode_AnimDynamics)                    AnimGraphNode_AnimDynamics                                  OFFSET(getStruct<T>, {0x850, 1296, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0xD60, 2416, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0x16D0, 296, 0, 0})
	SMember(FRotator)                                  gear_rot                                                    OFFSET(getStruct<T>, {0x17F8, 24, 0, 0})
	CMember(class USkeletalMeshComponent*)             skel_mesh                                                   OFFSET(get<T>, {0x1810, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x1340978] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP
	// void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32_t EntryPoint);                                             // [0x1340978] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C
/// Size: 0x1390 (0x000730 - 0x001AC0)
class UHighTower_Tapas_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance_HightowerTapasAxe
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     OFFSET(getStruct<T>, {0x738, 2, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x740, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x748, 8, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace                         OFFSET(getStruct<T>, {0x750, 32, 0, 0})
	SMember(FAnimNode_CopyPoseFromMesh)                AnimGraphNode_CopyPoseFromMesh                              OFFSET(getStruct<T>, {0x770, 336, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x8C0, 32, 0, 0})
	SMember(FAnimNode_Trail)                           AnimGraphNode_Trail                                         OFFSET(getStruct<T>, {0x8E0, 672, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone                                    OFFSET(getStruct<T>, {0xB80, 296, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               OFFSET(getStruct<T>, {0xCA8, 72, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody                                     OFFSET(getStruct<T>, {0xCF0, 2416, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace                         OFFSET(getStruct<T>, {0x1660, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace1                        OFFSET(getStruct<T>, {0x1680, 32, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                OFFSET(getStruct<T>, {0x16A0, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 OFFSET(getStruct<T>, {0x1718, 40, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace1                        OFFSET(getStruct<T>, {0x1740, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose1                                OFFSET(getStruct<T>, {0x1760, 40, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose2                                OFFSET(getStruct<T>, {0x1788, 40, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone1                                   OFFSET(getStruct<T>, {0x17B0, 296, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace2                        OFFSET(getStruct<T>, {0x18D8, 32, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace2                        OFFSET(getStruct<T>, {0x18F8, 32, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x1918, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose1                               OFFSET(getStruct<T>, {0x1960, 120, 0, 0})
	SMember(FAnimNode_TwoWayBlend)                     AnimGraphNode_TwoWayBlend                                   OFFSET(getStruct<T>, {0x19D8, 192, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose3                                OFFSET(getStruct<T>, {0x1A98, 40, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP
	// void ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32_t EntryPoint);                                                    // [0x1340978] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C
/// Size: 0x00E8 (0x000720 - 0x000808)
class UMetalScout_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x738, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x758, 176, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.ExecuteUbergraph_MetalScout_Axe_AnimBP
	// void ExecuteUbergraph_MetalScout_Axe_AnimBP(int32_t EntryPoint);                                                         // [0x1340978] Final                
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C
/// Size: 0x00E8 (0x000720 - 0x000808)
class UGoldenGuard_Axe_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x728, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0x730, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x738, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_SubInput                                      OFFSET(getStruct<T>, {0x758, 176, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.AnimGraph
	// void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);                                                                  // [0x1340978] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.ExecuteUbergraph_GoldenGuard_Axe_AnimBP
	// void ExecuteUbergraph_GoldenGuard_Axe_AnimBP(int32_t EntryPoint);                                                        // [0x1340978] Final                
};

/// Struct /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimBlueprintGeneratedConstantData
/// Size: 0x020F (0x000001 - 0x000210)
class FAnimBlueprintGeneratedConstantDatadup_173 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_MeshRefPose                                 OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_AnimDynamics                                OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_AnimDynamics1                               OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_AnimDynamics2                               OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_AnimDynamics3                               OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_M_MED_Patches/Meshes/M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
class FAnimBlueprintGeneratedConstantDatadup_174 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SubInput                                    OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0001 (0x000001 - 0x000002)
class FAnimBlueprintGeneratedMutableDatadup_175 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_SpaceFeline/Meshes/SpaceFeline_Axe_AnimBP.SpaceFeline_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x02C7 (0x000001 - 0x0002C8)
class FAnimBlueprintGeneratedConstantDatadup_176 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              OFFSET(get<T>, {0x21, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty1                                             OFFSET(get<T>, {0x22, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x50, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_CopyPoseFromMesh                            OFFSET(getStruct<T>, {0x118, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0x148, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool                             OFFSET(getStruct<T>, {0x178, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x1A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace1                      OFFSET(getStruct<T>, {0x1D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_CopyPoseFromMesh1                           OFFSET(getStruct<T>, {0x208, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace1                      OFFSET(getStruct<T>, {0x238, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RigidBody                                   OFFSET(getStruct<T>, {0x268, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RigidBody1                                  OFFSET(getStruct<T>, {0x298, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_L_AnimBP_Post.EmberRae_Axe_L_AnimBP_Post_C.AnimBlueprintGeneratedConstantData
/// Size: 0x01DF (0x000001 - 0x0001E0)
class FAnimBlueprintGeneratedConstantDatadup_177 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SubInput                                    OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RigidBody                                   OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone                                  OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_EmberRae/Meshes/EmberRae_Axe_R_AnimBP_Post.EmberRae_Axe_R_AnimBP_Post_C.AnimBlueprintGeneratedConstantData
/// Size: 0x023F (0x000001 - 0x000240)
class FAnimBlueprintGeneratedConstantDatadup_178 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SubInput                                    OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RigidBody                                   OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone                                  OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone1                                 OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone2                                 OFFSET(getStruct<T>, {0x210, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_LoudPhoenix/Meshes/LoudPhoenix_Axe_AnimBP.LoudPhoenix_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
class FAnimBlueprintGeneratedConstantDatadup_179 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SubInput                                    OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_NitroFlow/Meshes/NitroFlow_Axe_AnimBP.NitroFlow_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x014F (0x000001 - 0x000150)
class FAnimBlueprintGeneratedConstantDatadup_180 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SubInput                                    OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Slot                                        OFFSET(getStruct<T>, {0x120, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_Mechanical_Engineer_Female/Meshes/Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x020F (0x000001 - 0x000210)
class FAnimBlueprintGeneratedConstantDatadup_181 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LinkedInputPose                             OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_AnimDynamics                                OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RigidBody                                   OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone                                  OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x04D7 (0x000001 - 0x0004D8)
class FAnimBlueprintGeneratedConstantDatadup_182 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UBlendProfile*)                      __BlendProfile                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class UCurveFloat*)                        __CurveFloat                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              OFFSET(get<T>, {0x21, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty1                                             OFFSET(get<T>, {0x22, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x50, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace                       OFFSET(getStruct<T>, {0xE8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_CopyPoseFromMesh                            OFFSET(getStruct<T>, {0x118, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0x148, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Trail                                       OFFSET(getStruct<T>, {0x178, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone                                  OFFSET(getStruct<T>, {0x1A8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_BlendListByBool                             OFFSET(getStruct<T>, {0x1D8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_RigidBody                                   OFFSET(getStruct<T>, {0x208, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace                       OFFSET(getStruct<T>, {0x238, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace1                      OFFSET(getStruct<T>, {0x268, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose                              OFFSET(getStruct<T>, {0x298, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose                               OFFSET(getStruct<T>, {0x2C8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace1                      OFFSET(getStruct<T>, {0x2F8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose1                              OFFSET(getStruct<T>, {0x328, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose2                              OFFSET(getStruct<T>, {0x358, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ModifyBone1                                 OFFSET(getStruct<T>, {0x388, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_LocalToComponentSpace2                      OFFSET(getStruct<T>, {0x3B8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_ComponentToLocalSpace2                      OFFSET(getStruct<T>, {0x3E8, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Slot                                        OFFSET(getStruct<T>, {0x418, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SaveCachedPose1                             OFFSET(getStruct<T>, {0x448, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_TwoWayBlend                                 OFFSET(getStruct<T>, {0x478, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_UseCachedPose3                              OFFSET(getStruct<T>, {0x4A8, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_HightowerTapas/Meshes/HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x0001 (0x000001 - 0x000002)
class FAnimBlueprintGeneratedMutableDatadup_183 : public FAnimBlueprintMutableData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      __BoolProperty                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_MetalScout/Meshes/MetalScout_Axe_AnimBP.MetalScout_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
class FAnimBlueprintGeneratedConstantDatadup_184 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SubInput                                    OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
};

/// Struct /Game/Weapons/FORT_Melee/Pickaxe_GoldenGuard/Meshes/GoldenGuard_Axe_AnimBP.GoldenGuard_Axe_AnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x011F (0x000001 - 0x000120)
class FAnimBlueprintGeneratedConstantDatadup_185 : public FAnimBlueprintConstantData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     __NameProperty                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty1                                             OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       OFFSET(getStruct<T>, {0x28, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_Root                                        OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FAnimNodeExposedValueHandler_PropertyAccess) AnimGraphNode_SubInput                                    OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
};

/// Enum /Game/Weapons/Blueprints/En_ShellTypes_01.En_ShellTypes_01
/// Size: 0x06
enum class En_ShellTypes_01 : uint8_t
{
	En_ShellTypes_01__NewEnumerator0                                                 = 0,
	En_ShellTypes_01__NewEnumerator1                                                 = 1,
	En_ShellTypes_01__NewEnumerator2                                                 = 2,
	En_ShellTypes_01__NewEnumerator3                                                 = 3,
	En_ShellTypes_01__NewEnumerator4                                                 = 4,
	En_ShellTypes_01__En_ShellTypes_MAX                                              = 5
};

