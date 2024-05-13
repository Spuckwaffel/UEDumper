
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Audio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: Paper2D
/// dependency: Sounds
/// dependency: SparksCosmeticsRuntime

/// Class /SparksCosmetics/FrontendPreview/Bp_SparksActorPreviewLightRig_Base.Bp_SparksActorPreviewLightRig_Base_C
/// Size: 0x0000 (0x0004A0 - 0x0004A0)
class ABp_SparksActorPreviewLightRig_Base_C : public ASparksItemPreviewOffPawnActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
};

/// Class /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C
/// Size: 0x0150 (0x000720 - 0x000870)
class AB_SparksOnActorPreviewDefault_C : public ASparksItemPreviewOnPawnActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x720, 8, 0, 0})
	CMember(class UArrowComponent*)                    Temp_IASDerezAbsorbPoint                                    OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(class UArrowComponent*)                    Arrow1                                                      OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(class UDirectionalLightComponent*)         Directional_Light_For_Atmosphere_PC                         OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class USkyLightComponent*)                 SkyLightPC                                                  OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(class UArrowComponent*)                    Arrow                                                       OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(class USkyLightComponent*)                 SkyLightLowMobile                                           OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(class UDirectionalLightComponent*)         DirectionalLightMobile                                      OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLight_StandaloneForSwitch                                OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLight5                                                   OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLight6                                                   OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLigh3                                                    OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLight2                                                   OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(class USpotLightComponent*)                BounceRear1                                                 OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimLowerRight1                                              OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimLeft1                                                    OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimTopRight1                                                OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimBottomLeft1                                              OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(class USpotLightComponent*)                Bounce1                                                     OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(class USceneComponent*)                    LightTransform                                              OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Plane                                                       OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             Sample_Mesh                                                 OFFSET(get<T>, {0x7C8, 8, 0, 0})
	DMember(float)                                     RezInMaterialEffectTimeLine2_NewTrack_0_EE684F644FE38B4A30D17FB8CF917357 OFFSET(get<float>, {0x7D0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           RezInMaterialEffectTimeLine2__Direction_EE684F644FE38B4A30D17FB8CF917357 OFFSET(get<T>, {0x7D4, 1, 0, 0})
	CMember(class UTimelineComponent*)                 RezInMaterialEffectTimeLine2                                OFFSET(get<T>, {0x7D8, 8, 0, 0})
	DMember(float)                                     RezInMaterialEffectTimeLine_NewTrack_0_9C89220943F4EBA1DF12D38A05B1FC5C OFFSET(get<float>, {0x7E0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           RezInMaterialEffectTimeLine__Direction_9C89220943F4EBA1DF12D38A05B1FC5C OFFSET(get<T>, {0x7E4, 1, 0, 0})
	CMember(class UTimelineComponent*)                 RezInMaterialEffectTimeLine                                 OFFSET(get<T>, {0x7E8, 8, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    OFFSET(get<bool>, {0x7F0, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x7F1, 1, 0, 0})
	DMember(bool)                                      debugConstructionLighting                                   OFFSET(get<bool>, {0x7F2, 1, 0, 0})
	CMember(class UParticleSystemComponent*)           ObscuringLoopEmitter                                        OFFSET(get<T>, {0x7F8, 8, 0, 0})
	SMember(FRotator)                                  ToonLightRotatio                                            OFFSET(getStruct<T>, {0x800, 24, 0, 0})
	DMember(bool)                                      bIsBattlePassReward                                         OFFSET(get<bool>, {0x818, 1, 0, 0})
	SMember(FTimerHandle)                              LOD_StreamingSafetyTimer                                    OFFSET(getStruct<T>, {0x820, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultFloorMaterial                                        OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(class UMaterialInterface*)                 CustomFloorMaterial                                         OFFSET(get<T>, {0x830, 8, 0, 0})
	SMember(FStateTransitionPauseRequestHandle)        ItemsPendingTransitionOutHandle                             OFFSET(getStruct<T>, {0x838, 16, 0, 0})
	CMember(class UFXSystemComponent*)                 IASLoadingFX_LoopFX                                         OFFSET(get<T>, {0x848, 8, 0, 0})
	DMember(bool)                                      Use_Secondary_Transition_Effects                            OFFSET(get<bool>, {0x850, 1, 0, 0})
	DMember(bool)                                      Show_Floor                                                  OFFSET(get<bool>, {0x851, 1, 0, 0})
	SMember(FTimerHandle)                              IASLoadingDelayTimer                                        OFFSET(getStruct<T>, {0x858, 8, 0, 0})
	SMember(FTimerHandle)                              IASLoadingFXDestroyDelayTimer                               OFFSET(getStruct<T>, {0x860, 8, 0, 0})
	SMember(FTimerHandle)                              IASResinDelayTimer                                          OFFSET(getStruct<T>, {0x868, 8, 0, 0})


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.IsSkyDiveContrailItem
	// void IsSkyDiveContrailItem(bool& bSuccess);                                                                              // [0x20c3f9c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OutroAndDestroyLoadingEffects
	// void OutroAndDestroyLoadingEffects();                                                                                    // [0x20c3f9c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.HandleLightingSettingsChanged
	// void HandleLightingSettingsChanged();                                                                                    // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.DestroyLoadingEffects
	// void DestroyLoadingEffects();                                                                                            // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SpawnLoadingEffects
	// void SpawnLoadingEffects();                                                                                              // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SetupLighting
	// void SetupLighting();                                                                                                    // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SpawnResInEffects
	// void SpawnResInEffects();                                                                                                // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SetupFloor
	// void SetupFloor();                                                                                                       // [0x20c3f9c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.Get LOD Streaming Safety Duration
	// void Get LOD Streaming Safety Duration();                                                                                // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SwitchErebusLighting
	// void SwitchErebusLighting(bool Visibility);                                                                              // [0x20c3f9c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SetFloorEnabled
	// void SetFloorEnabled(bool Show Floor);                                                                                   // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.LightControl
	// void LightControl(bool Active);                                                                                          // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                                  // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool NewParam);                                                                                // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffectTimeLine__FinishedFunc
	// void RezInMaterialEffectTimeLine__FinishedFunc();                                                                        // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffectTimeLine__UpdateFunc
	// void RezInMaterialEffectTimeLine__UpdateFunc();                                                                          // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffectTimeLine2__FinishedFunc
	// void RezInMaterialEffectTimeLine2__FinishedFunc();                                                                       // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffectTimeLine2__UpdateFunc
	// void RezInMaterialEffectTimeLine2__UpdateFunc();                                                                         // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SpawnSoundPlayback
	// void SpawnSoundPlayback();                                                                                               // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnUpdateFloorMaterial
	// void OnUpdateFloorMaterial(bool bEnableAutotestBackground);                                                              // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnItemsPendingTransitionOut
	// void OnItemsPendingTransitionOut(FStateTransitionControllerHandle& TransitionController);                                // [0x20c3f9c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.Internal_ItemsPendingTransitionOutComplete
	// void Internal_ItemsPendingTransitionOutComplete(FStateTransitionControllerHandle TransitionController);                  // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnItemsPendingTransitionOut_SpawnResOutEffects
	// void OnItemsPendingTransitionOut_SpawnResOutEffects();                                                                   // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.FinishShowingResOutEffects
	// void FinishShowingResOutEffects();                                                                                       // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp
	// void OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp();                                                   // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnSetFloorMaterial
	// void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);                                                   // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                      // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnAllLODStreamingComplete
	// void OnAllLODStreamingComplete();                                                                                        // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnPreviewVisualsBeginLoading
	// void OnPreviewVisualsBeginLoading();                                                                                     // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnCurrentVisualsCleanedUp
	// void OnCurrentVisualsCleanedUp();                                                                                        // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.Backup_LODStreamingFailed
	// void Backup_LODStreamingFailed();                                                                                        // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffect
	// void RezInMaterialEffect();                                                                                              // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.ExecuteUbergraph_B_SparksOnActorPreviewDefault
	// void ExecuteUbergraph_B_SparksOnActorPreviewDefault(int32_t EntryPoint);                                                 // [0x20c3f9c] Final|HasDefaults    
};

/// Class /SparksCosmetics/FrontendPreview/BP_SparksCosmeticPreviewDisplay_Base.BP_SparksCosmeticPreviewDisplay_Base_C
/// Size: 0x0000 (0x000488 - 0x000488)
class ABP_SparksCosmeticPreviewDisplay_Base_C : public ASparksInstrumentPreviewActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
};

/// Class /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C
/// Size: 0x0050 (0x000488 - 0x0004D8)
class AB_SparksCosmeticPreviewDisplay_C : public ABP_SparksCosmeticPreviewDisplay_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x488, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             MicMesh                                                     OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             LHDrumstick                                                 OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             RHDrumstick                                                 OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             MicStandMesh                                                OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             DrumMesh                                                    OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             GuitarMesh                                                  OFFSET(get<T>, {0x4B8, 8, 0, 0})
	DMember(bool)                                      Is__active                                                  OFFSET(get<bool>, {0x4C0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  NewEventDispatcher                                          OFFSET(getStruct<T>, {0x4C8, 16, 0, 0})


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.FixupMeshAndMaterials
	// void FixupMeshAndMaterials(class USkeletalMeshComponent* MeshComponent, class USkeletalMesh* NewMesh, class UMaterialInstance* Material1, class UMaterialInstance* Material2, class UFXSystemAsset* FX); // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.Hide all
	// void Hide all();                                                                                                         // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.CustomizePreviewInstance
	// void CustomizePreviewInstance(class UFortItemDefinition* InItemDefinition);                                              // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.ExecuteUbergraph_B_SparksCosmeticPreviewDisplay
	// void ExecuteUbergraph_B_SparksCosmeticPreviewDisplay(int32_t EntryPoint);                                                // [0x20c3f9c] Final|HasDefaults    
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.NewEventDispatcher__DelegateSignature
	// void NewEventDispatcher__DelegateSignature();                                                                            // [0x20c3f9c] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C
/// Size: 0x00A0 (0x0004A0 - 0x000540)
class AB_SparksOffActorPreview_C : public ABp_SparksActorPreviewLightRig_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4A0, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             SampleMesh                                                  OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UArrowComponent*)                    Arrow                                                       OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UDirectionalLightComponent*)         DirectionalLight_pc                                         OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UDirectionalLightComponent*)         DirectionalLight_mobile                                     OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class USkyLightComponent*)                 SkyLight_mobile                                             OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimRight3_pc                                                OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class USkyLightComponent*)                 SkyLight_pc                                                 OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLight_rimlight_pc                                       OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimRight2_pc                                                OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimBottom_pc                                                OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimTop_pc                                                   OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class USceneComponent*)                    Lighting                                                    OFFSET(get<T>, {0x500, 8, 0, 0})
	DMember(float)                                     Timeline_0_HiddenAmount_1D4E289F4B8CA6B6B9F4579D0FE7ABCC    OFFSET(get<float>, {0x508, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_1D4E289F4B8CA6B6B9F4579D0FE7ABCC      OFFSET(get<T>, {0x50C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Timeline                                                    OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline__Direction_941C70EB408D2013A38BD198CDF9688B        OFFSET(get<T>, {0x518, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Timeline1                                                   OFFSET(get<T>, {0x520, 8, 0, 0})
	DMember(bool)                                      Is__active                                                  OFFSET(get<bool>, {0x528, 1, 0, 0})
	CMember(TArray<class USkeletalMeshComponent*>)     SkeletalMeshToResIn                                         OFFSET(get<T>, {0x530, 16, 0, 0})


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.GetInstrumentMeshComponents
	// void GetInstrumentMeshComponents();                                                                                      // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Light Control
	// void Light Control(bool Active);                                                                                         // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Set UP Lighting
	// void Set UP Lighting();                                                                                                  // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Switch Mobile Lighting
	// void Switch Mobile Lighting(bool NewParam);                                                                              // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Switch PC Lighting
	// void Switch PC Lighting(bool Visibility);                                                                                // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.HandleLightingSettingsChanged
	// void HandleLightingSettingsChanged();                                                                                    // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Switch Erebus Lighting
	// void Switch Erebus Lighting(bool Visibility);                                                                            // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__FinishedFunc
	// void Timeline__FinishedFunc();                                                                                           // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__UpdateFunc
	// void Timeline__UpdateFunc();                                                                                             // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__PlayResIn__EventFunc
	// void Timeline__PlayResIn__EventFunc();                                                                                   // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__LoadingFXOutro__EventFunc
	// void Timeline__LoadingFXOutro__EventFunc();                                                                              // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__ShowPawn__EventFunc
	// void Timeline__ShowPawn__EventFunc();                                                                                    // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                      // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.OnPreviewVisualsBeginLoading
	// void OnPreviewVisualsBeginLoading();                                                                                     // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.OnAllLODStreamingComplete
	// void OnAllLODStreamingComplete();                                                                                        // [0x20c3f9c] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.ExecuteUbergraph_B_SparksOffActorPreview
	// void ExecuteUbergraph_B_SparksOffActorPreview(int32_t EntryPoint);                                                       // [0x20c3f9c] Final                
};

/// Class /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C
/// Size: 0x00AA (0x0004A0 - 0x00054A)
class ASongItemPreview_C : public AFortItemPreviewOffPawnActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1354;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4A0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StageLight3                                                 OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StageLight2                                                 OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               AlbumCover_StageLights                                      OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SM_AlbumCover                                               OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class USkyLightComponent*)                 SkyLightLowMobile                                           OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UArrowComponent*)                    Arrow                                                       OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UDirectionalLightComponent*)         DirectionalLightMobile                                      OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLight6                                                   OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLigh3                                                    OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLight2                                                   OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimLowerRight1                                              OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimLeft1                                                    OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(class USpotLightComponent*)                KeyLight5                                                   OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimBottomLeft1                                              OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(class USpotLightComponent*)                Bounce1                                                     OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(class USpotLightComponent*)                BounceRear1                                                 OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(class USpotLightComponent*)                RimTopRight1                                                OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(class USceneComponent*)                    Scene_Lighting                                              OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(float)                                     Timeline_LErp_440FD4D745E0E071C641BAB46D630F85              OFFSET(get<float>, {0x538, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline__Direction_440FD4D745E0E071C641BAB46D630F85        OFFSET(get<T>, {0x53C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Timeline                                                    OFFSET(get<T>, {0x540, 8, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x548, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    OFFSET(get<bool>, {0x549, 1, 0, 0})


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.LightControl
	// void LightControl(bool Active);                                                                                          // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                                  // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibility);                                                                              // [0x20c3f9c] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.Timeline__FinishedFunc
	// void Timeline__FinishedFunc();                                                                                           // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.Timeline__UpdateFunc
	// void Timeline__UpdateFunc();                                                                                             // [0x20c3f9c] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                      // [0x20c3f9c] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.ExecuteUbergraph_SongItemPreview
	// void ExecuteUbergraph_SongItemPreview(int32_t EntryPoint);                                                               // [0x20c3f9c] Final                
};

/// Class /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C
/// Size: 0x0068 (0x0002B8 - 0x000320)
class AB_SparksSong_PreviewDisplay_C : public ASparksSongPreviewActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B8, 8, 0, 0})
	CMember(class UBPC_SparksSongPreviewer_C*)         SongPreviewer                                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class UPaperSpriteComponent*)              PaperSprite                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SM_AlbumCover                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class USceneComponent*)                    Scene                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           AlbumCoverMID                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class UAthenaMusicPackItemDefinition*)     MyMusicPack                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class AFort_Entry_Music_Controller_BP_C*)  MusicManagerPtr                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      CanRetriggerNextMusicPack                                   OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	SMember(FDataTableRowHandle)                       InputAbandon                                                OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(class UAudioComponent*)                    CurrentPreviewAudio                                         OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FTimerHandle)                              DebounceTimerHandle                                         OFFSET(getStruct<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.GetFrameTargetTransform
	// FTransform GetFrameTargetTransform();                                                                                    // [0x20c3f9c] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.GetFrameTargetBounds
	// FBoxSphereBounds GetFrameTargetBounds();                                                                                 // [0x20c3f9c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.PerformSpecialAction
	// void PerformSpecialAction(FName ActionName);                                                                             // [0x20c3f9c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.StartSongPreview
	// void StartSongPreview();                                                                                                 // [0x20c3f9c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.OnSongTextureLoaded
	// void OnSongTextureLoaded(class UTexture2D* CoverArt);                                                                    // [0x20c3f9c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.DebounceEvent
	// void DebounceEvent();                                                                                                    // [0x20c3f9c] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.ExecuteUbergraph_B_SparksSong_PreviewDisplay
	// void ExecuteUbergraph_B_SparksSong_PreviewDisplay(int32_t EntryPoint);                                                   // [0x20c3f9c] Final|HasDefaults    
};

