
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Audio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: Paper2D
/// dependency: Sounds
/// dependency: SparksCosmeticsRuntime

/// Class /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C
/// Size: 0x0092 (0x000488 - 0x00051A)
class ASongItemPreview_C : public AFortItemPreviewOffPawnActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	class UStaticMeshComponent*                        SM_AlbumCover;                                              // 0x0490   (0x0008)  
	class USkyLightComponent*                          SkyLightLowMobile;                                          // 0x0498   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x04A0   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLightMobile;                                     // 0x04A8   (0x0008)  
	class USpotLightComponent*                         KeyLight6;                                                  // 0x04B0   (0x0008)  
	class USpotLightComponent*                         KeyLigh3;                                                   // 0x04B8   (0x0008)  
	class USpotLightComponent*                         KeyLight2;                                                  // 0x04C0   (0x0008)  
	class USpotLightComponent*                         RimLowerRight1;                                             // 0x04C8   (0x0008)  
	class USpotLightComponent*                         RimLeft1;                                                   // 0x04D0   (0x0008)  
	class USpotLightComponent*                         KeyLight5;                                                  // 0x04D8   (0x0008)  
	class USpotLightComponent*                         RimBottomLeft1;                                             // 0x04E0   (0x0008)  
	class USpotLightComponent*                         Bounce1;                                                    // 0x04E8   (0x0008)  
	class USpotLightComponent*                         BounceRear1;                                                // 0x04F0   (0x0008)  
	class USpotLightComponent*                         RimTopRight1;                                               // 0x04F8   (0x0008)  
	class USceneComponent*                             Scene_Lighting;                                             // 0x0500   (0x0008)  
	float                                              Timeline_LErp_440FD4D745E0E071C641BAB46D630F85;             // 0x0508   (0x0004)  
	SDK_UNDEFINED(1,14035) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline__Direction_440FD4D745E0E071C641BAB46D630F85); // 0x050C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x050D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0510   (0x0008)  
	bool                                               IsActive;                                                   // 0x0518   (0x0001)  
	bool                                               AlwaysOn;                                                   // 0x0519   (0x0001)  


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.LightControl
	// void LightControl(bool Active);                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibility);                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.Timeline__FinishedFunc
	// void Timeline__FinishedFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.Timeline__UpdateFunc
	// void Timeline__UpdateFunc();                                                                                          // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.UpdateSettings
	// void UpdateSettings();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/SongItemPreview.SongItemPreview_C.ExecuteUbergraph_SongItemPreview
	// void ExecuteUbergraph_SongItemPreview(int32_t EntryPoint);                                                            // [0x18a39e4] Final                
};

/// Class /SparksCosmetics/FrontendPreview/Bp_SparksActorPreviewLightRig_Base.Bp_SparksActorPreviewLightRig_Base_C
/// Size: 0x0000 (0x000488 - 0x000488)
class ABp_SparksActorPreviewLightRig_Base_C : public ASparksItemPreviewOffPawnActor
{ 
public:
};

/// Class /SparksCosmetics/FrontendPreview/BP_SparksCosmeticPreviewDisplay_Base.BP_SparksCosmeticPreviewDisplay_Base_C
/// Size: 0x0000 (0x000470 - 0x000470)
class ABP_SparksCosmeticPreviewDisplay_Base_C : public ASparksInstrumentPreviewActor
{ 
public:
};

/// Class /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C
/// Size: 0x0050 (0x000470 - 0x0004C0)
class AB_SparksCosmeticPreviewDisplay_C : public ABP_SparksCosmeticPreviewDisplay_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0470   (0x0008)  
	class USkeletalMeshComponent*                      MicMesh;                                                    // 0x0478   (0x0008)  
	class USkeletalMeshComponent*                      LHDrumstick;                                                // 0x0480   (0x0008)  
	class USkeletalMeshComponent*                      RHDrumstick;                                                // 0x0488   (0x0008)  
	class USkeletalMeshComponent*                      MicStandMesh;                                               // 0x0490   (0x0008)  
	class USkeletalMeshComponent*                      DrumMesh;                                                   // 0x0498   (0x0008)  
	class USkeletalMeshComponent*                      GuitarMesh;                                                 // 0x04A0   (0x0008)  
	bool                                               Is__active;                                                 // 0x04A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x04A9   (0x0007)  MISSED
	SDK_UNDEFINED(16,14036) /* FMulticastInlineDelegate */ __um(NewEventDispatcher);                               // 0x04B0   (0x0010)  


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.FixupMeshAndMaterials
	// void FixupMeshAndMaterials(class USkeletalMeshComponent* MeshComponent, class USkeletalMesh* NewMesh, class UMaterialInstance* Material1, class UMaterialInstance* Material2, class UFXSystemAsset* FX); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.Hide all
	// void Hide all();                                                                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.CustomizePreviewInstance
	// void CustomizePreviewInstance(class UFortItemDefinition* InItemDefinition);                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.ExecuteUbergraph_B_SparksCosmeticPreviewDisplay
	// void ExecuteUbergraph_B_SparksCosmeticPreviewDisplay(int32_t EntryPoint);                                             // [0x18a39e4] Final|HasDefaults    
	// Function /SparksCosmetics/FrontendPreview/B_SparksCosmeticPreviewDisplay.B_SparksCosmeticPreviewDisplay_C.NewEventDispatcher__DelegateSignature
	// void NewEventDispatcher__DelegateSignature();                                                                         // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C
/// Size: 0x00A0 (0x000488 - 0x000528)
class AB_SparksOffActorPreview_C : public ABp_SparksActorPreviewLightRig_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	class USkeletalMeshComponent*                      SampleMesh;                                                 // 0x0490   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0498   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLight_pc;                                        // 0x04A0   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLight_mobile;                                    // 0x04A8   (0x0008)  
	class USkyLightComponent*                          SkyLight_mobile;                                            // 0x04B0   (0x0008)  
	class USpotLightComponent*                         RimRight3_pc;                                               // 0x04B8   (0x0008)  
	class USkyLightComponent*                          SkyLight_pc;                                                // 0x04C0   (0x0008)  
	class USpotLightComponent*                         SpotLight_rimlight_pc;                                      // 0x04C8   (0x0008)  
	class USpotLightComponent*                         RimRight2_pc;                                               // 0x04D0   (0x0008)  
	class USpotLightComponent*                         RimBottom_pc;                                               // 0x04D8   (0x0008)  
	class USpotLightComponent*                         RimTop_pc;                                                  // 0x04E0   (0x0008)  
	class USceneComponent*                             Lighting;                                                   // 0x04E8   (0x0008)  
	float                                              Timeline_0_HiddenAmount_1D4E289F4B8CA6B6B9F4579D0FE7ABCC;   // 0x04F0   (0x0004)  
	SDK_UNDEFINED(1,14037) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_1D4E289F4B8CA6B6B9F4579D0FE7ABCC); // 0x04F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04F5   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x04F8   (0x0008)  
	SDK_UNDEFINED(1,14038) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline__Direction_941C70EB408D2013A38BD198CDF9688B); // 0x0500   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0501   (0x0007)  MISSED
	class UTimelineComponent*                          Timeline0;                                                  // 0x0508   (0x0008)  
	bool                                               Is__active;                                                 // 0x0510   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0511   (0x0007)  MISSED
	TArray<class USkeletalMeshComponent*>              SkeletalMeshToResIn;                                        // 0x0518   (0x0010)  


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.GetInstrumentMeshComponents
	// void GetInstrumentMeshComponents();                                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Light Control
	// void Light Control(bool Active);                                                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Set UP Lighting
	// void Set UP Lighting();                                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Switch Mobile Lighting
	// void Switch Mobile Lighting(bool NewParam);                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Switch PC Lighting
	// void Switch PC Lighting(bool Visibility);                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.HandleLightingSettingsChanged
	// void HandleLightingSettingsChanged();                                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Switch Erebus Lighting
	// void Switch Erebus Lighting(bool Visibility);                                                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__FinishedFunc
	// void Timeline__FinishedFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__UpdateFunc
	// void Timeline__UpdateFunc();                                                                                          // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__PlayResIn__EventFunc
	// void Timeline__PlayResIn__EventFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__LoadingFXOutro__EventFunc
	// void Timeline__LoadingFXOutro__EventFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline__ShowPawn__EventFunc
	// void Timeline__ShowPawn__EventFunc();                                                                                 // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.UpdateSettings
	// void UpdateSettings();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.OnPreviewVisualsBeginLoading
	// void OnPreviewVisualsBeginLoading();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.OnAllLODStreamingComplete
	// void OnAllLODStreamingComplete();                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOffActorPreview.B_SparksOffActorPreview_C.ExecuteUbergraph_B_SparksOffActorPreview
	// void ExecuteUbergraph_B_SparksOffActorPreview(int32_t EntryPoint);                                                    // [0x18a39e4] Final                
};

/// Class /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C
/// Size: 0x0150 (0x000710 - 0x000860)
class AB_SparksOnActorPreviewDefault_C : public ASparksItemPreviewOnPawnActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0710   (0x0008)  
	class UArrowComponent*                             Temp_IASDerezAbsorbPoint;                                   // 0x0718   (0x0008)  
	class UArrowComponent*                             Arrow1;                                                     // 0x0720   (0x0008)  
	class UDirectionalLightComponent*                  Directional_Light_For_Atmosphere_PC;                        // 0x0728   (0x0008)  
	class USkyLightComponent*                          SkyLightPC;                                                 // 0x0730   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0738   (0x0008)  
	class USkyLightComponent*                          SkyLightLowMobile;                                          // 0x0740   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLightMobile;                                     // 0x0748   (0x0008)  
	class USpotLightComponent*                         KeyLight_StandaloneForSwitch;                               // 0x0750   (0x0008)  
	class USpotLightComponent*                         KeyLight5;                                                  // 0x0758   (0x0008)  
	class USpotLightComponent*                         KeyLight6;                                                  // 0x0760   (0x0008)  
	class USpotLightComponent*                         KeyLigh3;                                                   // 0x0768   (0x0008)  
	class USpotLightComponent*                         KeyLight2;                                                  // 0x0770   (0x0008)  
	class USpotLightComponent*                         BounceRear1;                                                // 0x0778   (0x0008)  
	class USpotLightComponent*                         RimLowerRight1;                                             // 0x0780   (0x0008)  
	class USpotLightComponent*                         RimLeft1;                                                   // 0x0788   (0x0008)  
	class USpotLightComponent*                         RimTopRight1;                                               // 0x0790   (0x0008)  
	class USpotLightComponent*                         RimBottomLeft1;                                             // 0x0798   (0x0008)  
	class USpotLightComponent*                         Bounce1;                                                    // 0x07A0   (0x0008)  
	class USceneComponent*                             LightTransform;                                             // 0x07A8   (0x0008)  
	class UStaticMeshComponent*                        Plane;                                                      // 0x07B0   (0x0008)  
	class USkeletalMeshComponent*                      Sample_Mesh;                                                // 0x07B8   (0x0008)  
	float                                              RezInMaterialEffectTimeLine2_NewTrack_0_EE684F644FE38B4A30D17FB8CF917357; // 0x07C0   (0x0004)  
	SDK_UNDEFINED(1,14039) /* TEnumAsByte<ETimelineDirection> */ __um(RezInMaterialEffectTimeLine2__Direction_EE684F644FE38B4A30D17FB8CF917357); // 0x07C4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x07C5   (0x0003)  MISSED
	class UTimelineComponent*                          RezInMaterialEffectTimeLine2;                               // 0x07C8   (0x0008)  
	float                                              RezInMaterialEffectTimeLine_NewTrack_0_9C89220943F4EBA1DF12D38A05B1FC5C; // 0x07D0   (0x0004)  
	SDK_UNDEFINED(1,14040) /* TEnumAsByte<ETimelineDirection> */ __um(RezInMaterialEffectTimeLine__Direction_9C89220943F4EBA1DF12D38A05B1FC5C); // 0x07D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x07D5   (0x0003)  MISSED
	class UTimelineComponent*                          RezInMaterialEffectTimeLine;                                // 0x07D8   (0x0008)  
	bool                                               AlwaysOn;                                                   // 0x07E0   (0x0001)  
	bool                                               IsActive;                                                   // 0x07E1   (0x0001)  
	bool                                               debugConstructionLighting;                                  // 0x07E2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x07E3   (0x0005)  MISSED
	class UParticleSystemComponent*                    ObscuringLoopEmitter;                                       // 0x07E8   (0x0008)  
	FRotator                                           ToonLightRotatio;                                           // 0x07F0   (0x0018)  
	bool                                               bIsBattlePassReward;                                        // 0x0808   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0809   (0x0007)  MISSED
	FTimerHandle                                       LOD_StreamingSafetyTimer;                                   // 0x0810   (0x0008)  
	class UMaterialInterface*                          DefaultFloorMaterial;                                       // 0x0818   (0x0008)  
	class UMaterialInterface*                          CustomFloorMaterial;                                        // 0x0820   (0x0008)  
	FStateTransitionPauseRequestHandle                 ItemsPendingTransitionOutHandle;                            // 0x0828   (0x0010)  
	class UFXSystemComponent*                          IASLoadingFX_LoopFX;                                        // 0x0838   (0x0008)  
	bool                                               Use_Secondary_Transition_Effects;                           // 0x0840   (0x0001)  
	bool                                               Show_Floor;                                                 // 0x0841   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0842   (0x0006)  MISSED
	FTimerHandle                                       IASLoadingDelayTimer;                                       // 0x0848   (0x0008)  
	FTimerHandle                                       IASLoadingFXDestroyDelayTimer;                              // 0x0850   (0x0008)  
	FTimerHandle                                       IASResinDelayTimer;                                         // 0x0858   (0x0008)  


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.IsSkyDiveContrailItem
	// void IsSkyDiveContrailItem(bool& bSuccess);                                                                           // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OutroAndDestroyLoadingEffects
	// void OutroAndDestroyLoadingEffects();                                                                                 // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.HandleLightingSettingsChanged
	// void HandleLightingSettingsChanged();                                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.DestroyLoadingEffects
	// void DestroyLoadingEffects();                                                                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SpawnLoadingEffects
	// void SpawnLoadingEffects();                                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SetupLighting
	// void SetupLighting();                                                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SpawnResInEffects
	// void SpawnResInEffects();                                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SetupFloor
	// void SetupFloor();                                                                                                    // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.Get LOD Streaming Safety Duration
	// void Get LOD Streaming Safety Duration();                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SwitchErebusLighting
	// void SwitchErebusLighting(bool Visibility);                                                                           // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SetFloorEnabled
	// void SetFloorEnabled(bool Show Floor);                                                                                // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.LightControl
	// void LightControl(bool Active);                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool NewParam);                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffectTimeLine__FinishedFunc
	// void RezInMaterialEffectTimeLine__FinishedFunc();                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffectTimeLine__UpdateFunc
	// void RezInMaterialEffectTimeLine__UpdateFunc();                                                                       // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffectTimeLine2__FinishedFunc
	// void RezInMaterialEffectTimeLine2__FinishedFunc();                                                                    // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffectTimeLine2__UpdateFunc
	// void RezInMaterialEffectTimeLine2__UpdateFunc();                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.SpawnSoundPlayback
	// void SpawnSoundPlayback();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnUpdateFloorMaterial
	// void OnUpdateFloorMaterial(bool bEnableAutotestBackground);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnItemsPendingTransitionOut
	// void OnItemsPendingTransitionOut(FStateTransitionControllerHandle& TransitionController);                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.Internal_ItemsPendingTransitionOutComplete
	// void Internal_ItemsPendingTransitionOutComplete(FStateTransitionControllerHandle TransitionController);               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnItemsPendingTransitionOut_SpawnResOutEffects
	// void OnItemsPendingTransitionOut_SpawnResOutEffects();                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.FinishShowingResOutEffects
	// void FinishShowingResOutEffects();                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp
	// void OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp();                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnSetFloorMaterial
	// void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnAllLODStreamingComplete
	// void OnAllLODStreamingComplete();                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnPreviewVisualsBeginLoading
	// void OnPreviewVisualsBeginLoading();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.OnCurrentVisualsCleanedUp
	// void OnCurrentVisualsCleanedUp();                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.Backup_LODStreamingFailed
	// void Backup_LODStreamingFailed();                                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.RezInMaterialEffect
	// void RezInMaterialEffect();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksOnActorPreviewDefault.B_SparksOnActorPreviewDefault_C.ExecuteUbergraph_B_SparksOnActorPreviewDefault
	// void ExecuteUbergraph_B_SparksOnActorPreviewDefault(int32_t EntryPoint);                                              // [0x18a39e4] Final|HasDefaults    
};

/// Class /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C
/// Size: 0x0068 (0x0002A8 - 0x000310)
class AB_SparksSong_PreviewDisplay_C : public ASparksSongPreviewActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A8   (0x0008)  
	class UBPC_SparksSongPreviewer_C*                  SongPreviewer;                                              // 0x02B0   (0x0008)  
	class UPaperSpriteComponent*                       PaperSprite;                                                // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        SM_AlbumCover;                                              // 0x02C0   (0x0008)  
	class USceneComponent*                             Scene;                                                      // 0x02C8   (0x0008)  
	class UMaterialInstanceDynamic*                    AlbumCoverMID;                                              // 0x02D0   (0x0008)  
	class UAthenaMusicPackItemDefinition*              MyMusicPack;                                                // 0x02D8   (0x0008)  
	class AFort_Entry_Music_Controller_BP_C*           MusicManagerPtr;                                            // 0x02E0   (0x0008)  
	bool                                               CanRetriggerNextMusicPack;                                  // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02E9   (0x0007)  MISSED
	FDataTableRowHandle                                InputAbandon;                                               // 0x02F0   (0x0010)  
	class UAudioComponent*                             CurrentPreviewAudio;                                        // 0x0300   (0x0008)  
	FTimerHandle                                       DebounceTimerHandle;                                        // 0x0308   (0x0008)  


	/// Functions
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.PerformSpecialAction
	// void PerformSpecialAction(FName ActionName);                                                                          // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.StartSongPreview
	// void StartSongPreview();                                                                                              // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.OnSongTextureLoaded
	// void OnSongTextureLoaded(class UTexture2D* CoverArt);                                                                 // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.DebounceEvent
	// void DebounceEvent();                                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /SparksCosmetics/FrontendPreview/B_SparksSong_PreviewDisplay.B_SparksSong_PreviewDisplay_C.ExecuteUbergraph_B_SparksSong_PreviewDisplay
	// void ExecuteUbergraph_B_SparksSong_PreviewDisplay(int32_t EntryPoint);                                                // [0x18a39e4] Final|HasDefaults    
};

