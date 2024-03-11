
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C
/// Size: 0x0009 (0x000340 - 0x000349)
class AVaultWorld_C : public AFortItemPreviewWorld
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0340   (0x0008)  
	bool                                               bIsPrimaryBackgroundActive;                                 // 0x0348   (0x0001)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.Assign Background Dynamic Materials
	// void Assign Background Dynamic Materials(class AStaticMeshActor* TargetBackground);                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.GetVaultRotator
	// void GetVaultRotator(class AVaultRotator_C*& VaultRotator);                                                           // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.OnNewSceneBackgroundChildActor
	// void OnNewSceneBackgroundChildActor(class AFortStaticMeshActor* NewActor);                                            // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld
	// void ExecuteUbergraph_VaultWorld(int32_t EntryPoint);                                                                 // [0x18a39e4] Final                
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C
/// Size: 0x0087 (0x000349 - 0x0003D0)
class ASpecialEventVaultWorld_C : public AVaultWorld_C
{ 
public:
	unsigned char                                      UnknownData00_3[0x7];                                       // 0x0349   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	class UStaticMeshComponent*                        floor;                                                      // 0x0358   (0x0008)  
	float                                              ItemDetails_X_Offset_1EDCEF5F41216A9DADD25897C8B68493;      // 0x0360   (0x0004)  
	SDK_UNDEFINED(1,11272) /* TEnumAsByte<ETimelineDirection> */ __um(ItemDetails__Direction_1EDCEF5F41216A9DADD25897C8B68493); // 0x0364   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0365   (0x0003)  MISSED
	class UTimelineComponent*                          ItemDetails;                                                // 0x0368   (0x0008)  
	float                                              Floor_Visibility_FloorMask_37382717410D795E9E7E0990FC3EFCC2; // 0x0370   (0x0004)  
	SDK_UNDEFINED(1,11273) /* TEnumAsByte<ETimelineDirection> */ __um(Floor_Visibility__Direction_37382717410D795E9E7E0990FC3EFCC2); // 0x0374   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0375   (0x0003)  MISSED
	class UTimelineComponent*                          Floor_Visibility;                                           // 0x0378   (0x0008)  
	float                                              Background_Effects_SetStreaks_7B5688E44724D9F68D3C20A520093829; // 0x0380   (0x0004)  
	SDK_UNDEFINED(1,11274) /* TEnumAsByte<ETimelineDirection> */ __um(Background_Effects__Direction_7B5688E44724D9F68D3C20A520093829); // 0x0384   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0385   (0x0003)  MISSED
	class UTimelineComponent*                          Background_Effects;                                         // 0x0388   (0x0008)  
	float                                              TransitionForward_FX_Transition_Fade_FDB9DC244ED5578954F07A87EDA84CA5; // 0x0390   (0x0004)  
	float                                              TransitionForward_Pre_TransitionOffset_FDB9DC244ED5578954F07A87EDA84CA5; // 0x0394   (0x0004)  
	float                                              TransitionForward_Forward_FDB9DC244ED5578954F07A87EDA84CA5; // 0x0398   (0x0004)  
	SDK_UNDEFINED(1,11275) /* TEnumAsByte<ETimelineDirection> */ __um(TransitionForward__Direction_FDB9DC244ED5578954F07A87EDA84CA5); // 0x039C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x039D   (0x0003)  MISSED
	class UTimelineComponent*                          TransitionForward;                                          // 0x03A0   (0x0008)  
	float                                              TransitionBackward_fx_Transition_fade_9CCDE9524354AF859735079DD2ED12AA; // 0x03A8   (0x0004)  
	float                                              TransitionBackward_Pre_Transition_Offset_9CCDE9524354AF859735079DD2ED12AA; // 0x03AC   (0x0004)  
	float                                              TransitionBackward_Backward_9CCDE9524354AF859735079DD2ED12AA; // 0x03B0   (0x0004)  
	SDK_UNDEFINED(1,11276) /* TEnumAsByte<ETimelineDirection> */ __um(TransitionBackward__Direction_9CCDE9524354AF859735079DD2ED12AA); // 0x03B4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x03B5   (0x0003)  MISSED
	class UTimelineComponent*                          TransitionBackward;                                         // 0x03B8   (0x0008)  
	class UMaterialInstance*                           FloorMI;                                                    // 0x03C0   (0x0008)  
	class UMaterialInstanceDynamic*                    FloorMID;                                                   // 0x03C8   (0x0008)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                               // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                 // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                  // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnSetupBackground
	// void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);         // [0x18a39e4] HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnUpdateMaterialIndex
	// void OnUpdateMaterialIndex(int32_t MaterialIndex);                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ExecuteUbergraph_SpecialEventVaultWorld
	// void ExecuteUbergraph_SpecialEventVaultWorld(int32_t EntryPoint);                                                     // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C
/// Size: 0x0180 (0x0003E8 - 0x000568)
class AItemPreviewSideSwap_C : public AItemPreviewSwapper
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E8   (0x0008)  
	class UPostProcessComponent*                       PostProcess_Mobile;                                         // 0x03F0   (0x0008)  
	class USkyLightComponent*                          SkyLightLowMobile;                                          // 0x03F8   (0x0008)  
	class USkyLightComponent*                          SkyLight;                                                   // 0x0400   (0x0008)  
	class USkyLightComponent*                          SkyLight_LOWPC;                                             // 0x0408   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0410   (0x0008)  
	class UPostProcessComponent*                       PostProcess_LOWPC;                                          // 0x0418   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLight_LOWPC;                                     // 0x0420   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLightMobile;                                     // 0x0428   (0x0008)  
	class USceneComponent*                             DirectionalLights;                                          // 0x0430   (0x0008)  
	class USceneComponent*                             GenericLighting;                                            // 0x0438   (0x0008)  
	float                                              Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870; // 0x0440   (0x0004)  
	SDK_UNDEFINED(1,11277) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870); // 0x0444   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0445   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0448   (0x0008)  
	float                                              Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45;      // 0x0450   (0x0004)  
	SDK_UNDEFINED(1,11278) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45); // 0x0454   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0455   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline0;                                                  // 0x0458   (0x0008)  
	FVector                                            MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1;     // 0x0460   (0x0018)  
	SDK_UNDEFINED(1,11279) /* TEnumAsByte<ETimelineDirection> */ __um(MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1); // 0x0478   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0479   (0x0007)  MISSED
	class UTimelineComponent*                          MoveOutRight;                                               // 0x0480   (0x0008)  
	FVector                                            MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE;      // 0x0488   (0x0018)  
	SDK_UNDEFINED(1,11280) /* TEnumAsByte<ETimelineDirection> */ __um(MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE); // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x04A1   (0x0007)  MISSED
	class UTimelineComponent*                          MoveInRight;                                                // 0x04A8   (0x0008)  
	FVector                                            MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47;       // 0x04B0   (0x0018)  
	SDK_UNDEFINED(1,11281) /* TEnumAsByte<ETimelineDirection> */ __um(MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47); // 0x04C8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x04C9   (0x0007)  MISSED
	class UTimelineComponent*                          MoveInLeft;                                                 // 0x04D0   (0x0008)  
	FVector                                            MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1;      // 0x04D8   (0x0018)  
	SDK_UNDEFINED(1,11282) /* TEnumAsByte<ETimelineDirection> */ __um(MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1); // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x04F1   (0x0007)  MISSED
	class UTimelineComponent*                          MoveOutLeft;                                                // 0x04F8   (0x0008)  
	bool                                               DebugMobile_Lighting;                                       // 0x0500   (0x0001)  
	bool                                               DebugLightingPC;                                            // 0x0501   (0x0001)  
	bool                                               IsActive;                                                   // 0x0502   (0x0001)  
	bool                                               AlwaysOn;                                                   // 0x0503   (0x0001)  
	bool                                               DebugLighting_LOWDetailPC;                                  // 0x0504   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0505   (0x0003)  MISSED
	SDK_UNDEFINED(16,11283) /* FMulticastInlineDelegate */ __um(On_New_Item_Spawned);                              // 0x0508   (0x0010)  
	double                                             CurrentZoomLevel;                                           // 0x0518   (0x0008)  
	double                                             TargetZoomLevel;                                            // 0x0520   (0x0008)  
	FRotator                                           TargetRotationOffset;                                       // 0x0528   (0x0018)  
	FRotator                                           OrigRotationOffset;                                         // 0x0540   (0x0018)  
	class UFortAccountItemDefinition*                  Primary_Requested_Item;                                     // 0x0558   (0x0008)  
	class UFortAccountItemDefinition*                  Previous_Requested_Item;                                    // 0x0560   (0x0008)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.LightControl
	// void LightControl(bool Active);                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting_LOWDetail
	// void SwitchPCLighting_LOWDetail(bool Visibility);                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibility);                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__FinishedFunc
	// void MoveOutLeft__FinishedFunc();                                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__UpdateFunc
	// void MoveOutLeft__UpdateFunc();                                                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__FinishedFunc
	// void MoveInLeft__FinishedFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__UpdateFunc
	// void MoveInLeft__UpdateFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__FinishedFunc
	// void MoveInRight__FinishedFunc();                                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__UpdateFunc
	// void MoveInRight__UpdateFunc();                                                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__FinishedFunc
	// void MoveOutRight__FinishedFunc();                                                                                    // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__UpdateFunc
	// void MoveOutRight__UpdateFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__FinishedFunc
	// void Timeline_1__FinishedFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__UpdateFunc
	// void Timeline_1__UpdateFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnReadyToSwap
	// void OnReadyToSwap(class UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& Options);         // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnNewSceneRequested
	// void OnNewSceneRequested(class UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& TransitionOptions); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.UpdateSettings
	// void UpdateSettings();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetZoomLevelSet
	// void OnTargetZoomLevelSet(float TargetZoomLevel);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetRotationOffsetSet
	// void OnTargetRotationOffsetSet(FRotator& TargetRotationOffset);                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.ExecuteUbergraph_ItemPreviewSideSwap
	// void ExecuteUbergraph_ItemPreviewSideSwap(int32_t EntryPoint);                                                        // [0x18a39e4] Final|HasDefaults    
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.On New Item Spawned__DelegateSignature
	// void On New Item Spawned__DelegateSignature(bool Should Show Floor);                                                  // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C
/// Size: 0x00E7 (0x000349 - 0x000430)
class ABattlePassVaultWorld_C : public AVaultWorld_C
{ 
public:
	unsigned char                                      UnknownData00_3[0x7];                                       // 0x0349   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	class UStaticMeshComponent*                        floor;                                                      // 0x0358   (0x0008)  
	float                                              TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A; // 0x0360   (0x0004)  
	float                                              TransitionForward_Fade_46DACBD74D0A8B2278950785C007984A;    // 0x0364   (0x0004)  
	float                                              TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A; // 0x0368   (0x0004)  
	SDK_UNDEFINED(1,11284) /* TEnumAsByte<ETimelineDirection> */ __um(TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A); // 0x036C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x036D   (0x0003)  MISSED
	class UTimelineComponent*                          TransitionForward;                                          // 0x0370   (0x0008)  
	float                                              BackgroundIntenstiy_Intensity_8C51F99C4026F0204F2184AD9661CD23; // 0x0378   (0x0004)  
	SDK_UNDEFINED(1,11285) /* TEnumAsByte<ETimelineDirection> */ __um(BackgroundIntenstiy__Direction_8C51F99C4026F0204F2184AD9661CD23); // 0x037C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x037D   (0x0003)  MISSED
	class UTimelineComponent*                          BackgroundIntenstiy;                                        // 0x0380   (0x0008)  
	float                                              ItemDetailsIntensity_TextureIntensity_1EC6205345E5A708DA53B5A9449F1700; // 0x0388   (0x0004)  
	SDK_UNDEFINED(1,11286) /* TEnumAsByte<ETimelineDirection> */ __um(ItemDetailsIntensity__Direction_1EC6205345E5A708DA53B5A9449F1700); // 0x038C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	class UTimelineComponent*                          ItemDetailsIntensity;                                       // 0x0390   (0x0008)  
	float                                              Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27; // 0x0398   (0x0004)  
	SDK_UNDEFINED(1,11287) /* TEnumAsByte<ETimelineDirection> */ __um(Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27); // 0x039C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x039D   (0x0003)  MISSED
	class UTimelineComponent*                          Background_Effects;                                         // 0x03A0   (0x0008)  
	float                                              IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC;   // 0x03A8   (0x0004)  
	SDK_UNDEFINED(1,11288) /* TEnumAsByte<ETimelineDirection> */ __um(IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC); // 0x03AC   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x03AD   (0x0003)  MISSED
	class UTimelineComponent*                          IconDissolve;                                               // 0x03B0   (0x0008)  
	float                                              ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x03B8   (0x0004)  
	float                                              ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781;      // 0x03BC   (0x0004)  
	SDK_UNDEFINED(1,11289) /* TEnumAsByte<ETimelineDirection> */ __um(ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781); // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x03C1   (0x0007)  MISSED
	class UTimelineComponent*                          ItemDetails;                                                // 0x03C8   (0x0008)  
	float                                              Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50; // 0x03D0   (0x0004)  
	SDK_UNDEFINED(1,11290) /* TEnumAsByte<ETimelineDirection> */ __um(Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50); // 0x03D4   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x03D5   (0x0003)  MISSED
	class UTimelineComponent*                          Floor_Visibility;                                           // 0x03D8   (0x0008)  
	float                                              TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8; // 0x03E0   (0x0004)  
	float                                              TransitionBackward_Fade_7073CD0840227233D3A64795A5A1B1B8;   // 0x03E4   (0x0004)  
	float                                              TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8; // 0x03E8   (0x0004)  
	SDK_UNDEFINED(1,11291) /* TEnumAsByte<ETimelineDirection> */ __um(TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8); // 0x03EC   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x03ED   (0x0003)  MISSED
	class UTimelineComponent*                          TransitionBackward;                                         // 0x03F0   (0x0008)  
	class UMaterialInstance*                           FloorMI;                                                    // 0x03F8   (0x0008)  
	class UMaterialInstanceDynamic*                    FloorMID;                                                   // 0x0400   (0x0008)  
	double                                             BG_Intensity_Max;                                           // 0x0408   (0x0008)  
	double                                             BG_Intensity_Mid;                                           // 0x0410   (0x0008)  
	double                                             BG_Intensity_Min;                                           // 0x0418   (0x0008)  
	bool                                               bIsTransitioning;                                           // 0x0420   (0x0001)  
	EBackgroundIntensityLevel                          Intensity_Transition;                                       // 0x0421   (0x0001)  
	bool                                               bIsPageA_Max;                                               // 0x0422   (0x0001)  
	bool                                               bIsPageB_Max;                                               // 0x0423   (0x0001)  
	float                                              PageA_X_Offset;                                             // 0x0424   (0x0004)  
	float                                              PageB_X_Offset;                                             // 0x0428   (0x0004)  
	float                                              X_Offset_Anim_Distance;                                     // 0x042C   (0x0004)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Set Backgrounds Scalar Value
	// void Set Backgrounds Scalar Value(FName Param, double FloatValue);                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.PageTransitionIntensityUpdate
	// void PageTransitionIntensityUpdate(class UMaterialInstanceDynamic* MID_Background, class UMaterialInstanceDynamic* MID_Floor); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double Fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double Fade, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                               // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                 // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                  // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__FinishedFunc
	// void IconDissolve__FinishedFunc();                                                                                    // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__UpdateFunc
	// void IconDissolve__UpdateFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__FinishedFunc
	// void ItemDetailsIntensity__FinishedFunc();                                                                            // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__UpdateFunc
	// void ItemDetailsIntensity__UpdateFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__FinishedFunc
	// void BackgroundIntenstiy__FinishedFunc();                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__UpdateFunc
	// void BackgroundIntenstiy__UpdateFunc();                                                                               // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnIntensityChange
	// void OnIntensityChange(bool bToLowIntensity);                                                                         // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnSetupTextureBackground
	// void OnSetupTextureBackground(class UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);  // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnSetupMaterialBackground
	// void OnSetupMaterialBackground(class UMaterialInterface* LoadedBackgroundMaterial, FVaultWorldBackgroundData& BackgroundInfo); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ExecuteUbergraph_BattlePassVaultWorld
	// void ExecuteUbergraph_BattlePassVaultWorld(int32_t EntryPoint);                                                       // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C
/// Size: 0x01C0 (0x0003E0 - 0x0005A0)
class AVaultRotator_C : public AItemPreviewRotator
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLightMobile;                                     // 0x03E8   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLight_LOWPC;                                     // 0x03F0   (0x0008)  
	class USceneComponent*                             DirectionalLights;                                          // 0x03F8   (0x0008)  
	class USkyLightComponent*                          SkyLightLowMobile;                                          // 0x0400   (0x0008)  
	class USkyLightComponent*                          SkyLight;                                                   // 0x0408   (0x0008)  
	class USkyLightComponent*                          SkyLight_LOWPC;                                             // 0x0410   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0418   (0x0008)  
	class UPostProcessComponent*                       PostProcess_Mobile;                                         // 0x0420   (0x0008)  
	class UPostProcessComponent*                       PostProcess_LOWPC;                                          // 0x0428   (0x0008)  
	class USceneComponent*                             GenericLighting;                                            // 0x0430   (0x0008)  
	float                                              Timeline_YawRotation_YawInterpAlpha_F13714DD4AFE0C9C8857E2950BEC127B; // 0x0438   (0x0004)  
	SDK_UNDEFINED(1,11292) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_YawRotation__Direction_F13714DD4AFE0C9C8857E2950BEC127B); // 0x043C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x043D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline_YawRotation;                                       // 0x0440   (0x0008)  
	float                                              Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39;   // 0x0448   (0x0004)  
	SDK_UNDEFINED(1,11293) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39); // 0x044C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x044D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline_Zoom;                                              // 0x0450   (0x0008)  
	FVector                                            CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x0458   (0x0018)  
	FVector                                            CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x0470   (0x0018)  
	float                                              CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714; // 0x0488   (0x0004)  
	float                                              CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714; // 0x048C   (0x0004)  
	SDK_UNDEFINED(1,11294) /* TEnumAsByte<ETimelineDirection> */ __um(CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714); // 0x0490   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0491   (0x0007)  MISSED
	class UTimelineComponent*                          CameraTurn_180_to;                                          // 0x0498   (0x0008)  
	FVector                                            CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x04A0   (0x0018)  
	FVector                                            CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x04B8   (0x0018)  
	float                                              CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x04D0   (0x0004)  
	float                                              CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0;   // 0x04D4   (0x0004)  
	SDK_UNDEFINED(1,11295) /* TEnumAsByte<ETimelineDirection> */ __um(CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0); // 0x04D8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x04D9   (0x0007)  MISSED
	class UTimelineComponent*                          CameraTurn_0_to;                                            // 0x04E0   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x04E8   (0x0008)  MISSED
	FTransform                                         InitialCameraTransform;                                     // 0x04F0   (0x0060)  
	class USoundBase*                                  ClockwiseSound;                                             // 0x0550   (0x0008)  
	class USoundBase*                                  CounterClockwiseSound;                                      // 0x0558   (0x0008)  
	bool                                               DebugMobile_Lighting;                                       // 0x0560   (0x0001)  
	bool                                               DebugLightingPC;                                            // 0x0561   (0x0001)  
	bool                                               IsActive;                                                   // 0x0562   (0x0001)  
	bool                                               AlwaysOn;                                                   // 0x0563   (0x0001)  
	bool                                               DebugLighting_LOWDetailPC;                                  // 0x0564   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0565   (0x0003)  MISSED
	double                                             TargetZoomLevel;                                            // 0x0568   (0x0008)  
	FRotator                                           StartingRotationOffset;                                     // 0x0570   (0x0018)  
	FRotator                                           TargetRotationOffset;                                       // 0x0588   (0x0018)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.PlaySoundWhenEnabled
	// void PlaySoundWhenEnabled(class USoundBase* sound);                                                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor RGBA0, FLinearColor RGBA1);                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ToggleBackgroundText
	// void ToggleBackgroundText(bool bDisplayText);                                                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.LightControl
	// void LightControl(bool Active);                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail
	// void SwitchPCLighting_LOWDetail(bool Visibility);                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibility);                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SetBackgroundString
	// void SetBackgroundString(FText CustomText);                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc
	// void CameraTurn_0_to_180__FinishedFunc();                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc
	// void CameraTurn_0_to_180__UpdateFunc();                                                                               // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc
	// void CameraTurn_180_to_360__FinishedFunc();                                                                           // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc
	// void CameraTurn_180_to_360__UpdateFunc();                                                                             // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc
	// void Timeline_Zoom__FinishedFunc();                                                                                   // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc
	// void Timeline_Zoom__UpdateFunc();                                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_YawRotation__FinishedFunc
	// void Timeline_YawRotation__FinishedFunc();                                                                            // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_YawRotation__UpdateFunc
	// void Timeline_YawRotation__UpdateFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.UpdateSettings
	// void UpdateSettings();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnCameraTransitionReady
	// void OnCameraTransitionReady(bool bPrimaryToSecondary, class UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& Options); // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetZoomLevelSet
	// void OnTargetZoomLevelSet(float TargetZoomLevel);                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnSetBackgroundMessageText
	// void OnSetBackgroundMessageText(FText& BackgroundMessageText);                                                        // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnUpdateBackgroundColor
	// void OnUpdateBackgroundColor(bool bEnableAutotestBackground);                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetRotationOffsetSet
	// void OnTargetRotationOffsetSet(FRotator& TargetRotationOffset);                                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetRotationOffsetCanceled
	// void OnTargetRotationOffsetCanceled();                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetZoomLevelCanceled
	// void OnTargetZoomLevelCanceled();                                                                                     // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator
	// void ExecuteUbergraph_VaultRotator(int32_t EntryPoint);                                                               // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultSceneSinglePedestal.VaultSceneSinglePedestal_C
/// Size: 0x0000 (0x000360 - 0x000360)
class AVaultSceneSinglePedestal_C : public AItemPreviewScene
{ 
public:
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C
/// Size: 0x0009 (0x000520 - 0x000529)
class AItemPreviewPedestal_C : public AFortCameraTargetPedestal
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0520   (0x0008)  
	bool                                               Floor_Enabled;                                              // 0x0528   (0x0001)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
	// void Remove Floor(class AFortItemPreviewActor* Preview);                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
	// void OnItemDisplayed(EFortItemType ItemType);                                                                         // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
	// void ExecuteUbergraph_ItemPreviewPedestal(int32_t EntryPoint);                                                        // [0x18a39e4] Final                
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C
/// Size: 0x00C8 (0x0005C0 - 0x000688)
class AWrapPreview_C : public AAthenaWrapPreviewActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05C0   (0x0008)  
	class USkyLightComponent*                          SkyLightPC;                                                 // 0x05C8   (0x0008)  
	class USkeletalMeshComponent*                      AssaultRiflePreview;                                        // 0x05D0   (0x0008)  
	class USkeletalMeshComponent*                      MechPreview;                                                // 0x05D8   (0x0008)  
	class USkyLightComponent*                          SkyLightLowMobile;                                          // 0x05E0   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x05E8   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLightMobile;                                     // 0x05F0   (0x0008)  
	class USpotLightComponent*                         KeyLight_StandaloneForSwitch;                               // 0x05F8   (0x0008)  
	class USpotLightComponent*                         KeyLigh4;                                                   // 0x0600   (0x0008)  
	class USpotLightComponent*                         KeyLight7;                                                  // 0x0608   (0x0008)  
	class USpotLightComponent*                         KeyLight8;                                                  // 0x0610   (0x0008)  
	class USpotLightComponent*                         KeyLight3;                                                  // 0x0618   (0x0008)  
	class USpotLightComponent*                         RimLowerRight2;                                             // 0x0620   (0x0008)  
	class USpotLightComponent*                         RimLeft2;                                                   // 0x0628   (0x0008)  
	class USpotLightComponent*                         Bounce2;                                                    // 0x0630   (0x0008)  
	class USpotLightComponent*                         BounceRear2;                                                // 0x0638   (0x0008)  
	class USpotLightComponent*                         RimTopRight2;                                               // 0x0640   (0x0008)  
	class USpotLightComponent*                         RimBottomLeft2;                                             // 0x0648   (0x0008)  
	class USceneComponent*                             LightingPivot;                                              // 0x0650   (0x0008)  
	class UStaticMeshComponent*                        Plane;                                                      // 0x0658   (0x0008)  
	bool                                               bLightsScaledForVehicle;                                    // 0x0660   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0661   (0x0007)  MISSED
	double                                             DeltaScale;                                                 // 0x0668   (0x0008)  
	bool                                               IsActive;                                                   // 0x0670   (0x0001)  
	bool                                               AlwaysOn;                                                   // 0x0671   (0x0001)  
	bool                                               FloorEverAllowed;                                           // 0x0672   (0x0001)  
	bool                                               debugConstructionLighting;                                  // 0x0673   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0674   (0x0004)  MISSED
	FStateTransitionPauseRequestHandle                 ItemsPendingTransitionOutHandle;                            // 0x0678   (0x0010)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateFloorVisibility
	// void UpdateFloorVisibility();                                                                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchErebusLighting
	// void SwitchErebusLighting(bool Visibility);                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateLightingScale
	// void UpdateLightingScale();                                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SetFloorEnabled
	// void SetFloorEnabled(bool Floor Enabled);                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.LightControl
	// void LightControl(bool Active);                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool NewParam);                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.HandleLightingScale
	// void HandleLightingScale();                                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnSetFloorMaterial
	// void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnUpdateFloorMaterial
	// void OnUpdateFloorMaterial(bool bEnableAutotestBackground);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnItemsPendingTransitionOut
	// void OnItemsPendingTransitionOut(FStateTransitionControllerHandle& TransitionController);                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.Internal_ItemsPendingTransitionOutComplete
	// void Internal_ItemsPendingTransitionOutComplete(FStateTransitionControllerHandle TransitionController);               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnItemsPendingTransitionOut_SpawnResOutEffects
	// void OnItemsPendingTransitionOut_SpawnResOutEffects();                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.FinishShowingResOutEffects
	// void FinishShowingResOutEffects();                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp
	// void OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp();                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateSettings
	// void UpdateSettings();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview
	// void ExecuteUbergraph_WrapPreview(int32_t EntryPoint);                                                                // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C
/// Size: 0x0150 (0x000700 - 0x000850)
class AItemOnPawnPreview_C : public AFortItemPreviewOnPawnActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0700   (0x0008)  
	class UArrowComponent*                             Temp_IASDerezAbsorbPoint;                                   // 0x0708   (0x0008)  
	class UArrowComponent*                             Arrow1;                                                     // 0x0710   (0x0008)  
	class UDirectionalLightComponent*                  Directional_Light_For_Atmosphere_PC;                        // 0x0718   (0x0008)  
	class USkyLightComponent*                          SkyLightPC;                                                 // 0x0720   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0728   (0x0008)  
	class USkyLightComponent*                          SkyLightLowMobile;                                          // 0x0730   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLightMobile;                                     // 0x0738   (0x0008)  
	class USpotLightComponent*                         KeyLight_StandaloneForSwitch;                               // 0x0740   (0x0008)  
	class USpotLightComponent*                         KeyLight5;                                                  // 0x0748   (0x0008)  
	class USpotLightComponent*                         KeyLight6;                                                  // 0x0750   (0x0008)  
	class USpotLightComponent*                         KeyLigh3;                                                   // 0x0758   (0x0008)  
	class USpotLightComponent*                         KeyLight2;                                                  // 0x0760   (0x0008)  
	class USpotLightComponent*                         BounceRear1;                                                // 0x0768   (0x0008)  
	class USpotLightComponent*                         RimLowerRight1;                                             // 0x0770   (0x0008)  
	class USpotLightComponent*                         RimLeft1;                                                   // 0x0778   (0x0008)  
	class USpotLightComponent*                         RimTopRight1;                                               // 0x0780   (0x0008)  
	class USpotLightComponent*                         RimBottomLeft1;                                             // 0x0788   (0x0008)  
	class USpotLightComponent*                         Bounce1;                                                    // 0x0790   (0x0008)  
	class USceneComponent*                             LightTransform;                                             // 0x0798   (0x0008)  
	class UStaticMeshComponent*                        Plane;                                                      // 0x07A0   (0x0008)  
	class USkeletalMeshComponent*                      Sample_Mesh;                                                // 0x07A8   (0x0008)  
	float                                              RezInMaterialEffectTimeLine2_NewTrack_0_FBE08AE14EC4BA399756F0BBFA6ABC31; // 0x07B0   (0x0004)  
	SDK_UNDEFINED(1,11296) /* TEnumAsByte<ETimelineDirection> */ __um(RezInMaterialEffectTimeLine2__Direction_FBE08AE14EC4BA399756F0BBFA6ABC31); // 0x07B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x07B5   (0x0003)  MISSED
	class UTimelineComponent*                          RezInMaterialEffectTimeLine2;                               // 0x07B8   (0x0008)  
	float                                              RezInMaterialEffectTimeLine_NewTrack_0_963A663B4B1DFB2954D581893C8ACFD8; // 0x07C0   (0x0004)  
	SDK_UNDEFINED(1,11297) /* TEnumAsByte<ETimelineDirection> */ __um(RezInMaterialEffectTimeLine__Direction_963A663B4B1DFB2954D581893C8ACFD8); // 0x07C4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x07C5   (0x0003)  MISSED
	class UTimelineComponent*                          RezInMaterialEffectTimeLine;                                // 0x07C8   (0x0008)  
	bool                                               AlwaysOn;                                                   // 0x07D0   (0x0001)  
	bool                                               IsActive;                                                   // 0x07D1   (0x0001)  
	bool                                               debugConstructionLighting;                                  // 0x07D2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x07D3   (0x0005)  MISSED
	class UParticleSystemComponent*                    ObscuringLoopEmitter;                                       // 0x07D8   (0x0008)  
	FRotator                                           ToonLightRotatio;                                           // 0x07E0   (0x0018)  
	bool                                               bIsBattlePassReward;                                        // 0x07F8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x07F9   (0x0007)  MISSED
	FTimerHandle                                       LOD_StreamingSafetyTimer;                                   // 0x0800   (0x0008)  
	class UMaterialInterface*                          DefaultFloorMaterial;                                       // 0x0808   (0x0008)  
	class UMaterialInterface*                          CustomFloorMaterial;                                        // 0x0810   (0x0008)  
	FStateTransitionPauseRequestHandle                 ItemsPendingTransitionOutHandle;                            // 0x0818   (0x0010)  
	class UFXSystemComponent*                          IASLoadingFX_LoopFX;                                        // 0x0828   (0x0008)  
	bool                                               Use_Secondary_Transition_Effects;                           // 0x0830   (0x0001)  
	bool                                               Show_Floor;                                                 // 0x0831   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0832   (0x0006)  MISSED
	FTimerHandle                                       IASLoadingDelayTimer;                                       // 0x0838   (0x0008)  
	FTimerHandle                                       IASLoadingFXDestroyDelayTimer;                              // 0x0840   (0x0008)  
	FTimerHandle                                       IASResinDelayTimer;                                         // 0x0848   (0x0008)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.IsSkyDiveContrailItem
	// void IsSkyDiveContrailItem(bool& bSuccess);                                                                           // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OutroAndDestroyLoadingEffects
	// void OutroAndDestroyLoadingEffects();                                                                                 // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.HandleLightingSettingsChanged
	// void HandleLightingSettingsChanged();                                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.DestroyLoadingEffects
	// void DestroyLoadingEffects();                                                                                         // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SpawnLoadingEffects
	// void SpawnLoadingEffects();                                                                                           // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SetupLighting
	// void SetupLighting();                                                                                                 // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SpawnResInEffects
	// void SpawnResInEffects();                                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SetupFloor
	// void SetupFloor();                                                                                                    // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.Get LOD Streaming Safety Duration
	// void Get LOD Streaming Safety Duration();                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting
	// void SwitchErebusLighting(bool Visibility);                                                                           // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled
	// void SetFloorEnabled(bool Show Floor);                                                                                // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl
	// void LightControl(bool Active);                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool NewParam);                                                                             // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.RezInMaterialEffectTimeLine__FinishedFunc
	// void RezInMaterialEffectTimeLine__FinishedFunc();                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.RezInMaterialEffectTimeLine__UpdateFunc
	// void RezInMaterialEffectTimeLine__UpdateFunc();                                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.RezInMaterialEffectTimeLine2__FinishedFunc
	// void RezInMaterialEffectTimeLine2__FinishedFunc();                                                                    // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.RezInMaterialEffectTimeLine2__UpdateFunc
	// void RezInMaterialEffectTimeLine2__UpdateFunc();                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SpawnSoundPlayback
	// void SpawnSoundPlayback();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnUpdateFloorMaterial
	// void OnUpdateFloorMaterial(bool bEnableAutotestBackground);                                                           // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnItemsPendingTransitionOut
	// void OnItemsPendingTransitionOut(FStateTransitionControllerHandle& TransitionController);                             // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.Internal_ItemsPendingTransitionOutComplete
	// void Internal_ItemsPendingTransitionOutComplete(FStateTransitionControllerHandle TransitionController);               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnItemsPendingTransitionOut_SpawnResOutEffects
	// void OnItemsPendingTransitionOut_SpawnResOutEffects();                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.FinishShowingResOutEffects
	// void FinishShowingResOutEffects();                                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp
	// void OnItemsPendingTransitionOut_EnsureAllResOutEffectsAreCleanedUp();                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial
	// void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);                                                // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete
	// void OnAllLODStreamingComplete();                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsBeginLoading
	// void OnPreviewVisualsBeginLoading();                                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp
	// void OnCurrentVisualsCleanedUp();                                                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.Backup_LODStreamingFailed
	// void Backup_LODStreamingFailed();                                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.RezInMaterialEffect
	// void RezInMaterialEffect();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview
	// void ExecuteUbergraph_ItemOnPawnPreview(int32_t EntryPoint);                                                          // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C
/// Size: 0x01DC (0x000558 - 0x000734)
class APartyDisplayManagerBP_C : public APartyDisplayManager
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0558   (0x0008)  
	class UChildActorComponent*                        PrefabActorComp;                                            // 0x0560   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x0568   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0570   (0x0008)  
	class UStaticMeshComponent*                        ScalePivot;                                                 // 0x0578   (0x0008)  
	class UStaticMeshComponent*                        PivotHolder;                                                // 0x0580   (0x0008)  
	class UParticleSystemComponent*                    CelebratoryFX;                                              // 0x0588   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0590   (0x0008)  
	float                                              HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8;   // 0x0598   (0x0004)  
	SDK_UNDEFINED(1,11298) /* TEnumAsByte<ETimelineDirection> */ __um(HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8); // 0x059C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x059D   (0x0003)  MISSED
	class UTimelineComponent*                          HoloMatColorPulse;                                          // 0x05A0   (0x0008)  
	float                                              ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC;   // 0x05A8   (0x0004)  
	SDK_UNDEFINED(1,11299) /* TEnumAsByte<ETimelineDirection> */ __um(ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC); // 0x05AC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x05AD   (0x0003)  MISSED
	class UTimelineComponent*                          ScaleAnimEvolve;                                            // 0x05B0   (0x0008)  
	float                                              ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43;    // 0x05B8   (0x0004)  
	SDK_UNDEFINED(1,11300) /* TEnumAsByte<ETimelineDirection> */ __um(ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43); // 0x05BC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x05BD   (0x0003)  MISSED
	class UTimelineComponent*                          ScaleAnimLevel;                                             // 0x05C0   (0x0008)  
	FTimerHandle                                       TimerHandle;                                                // 0x05C8   (0x0008)  
	double                                             Rotation;                                                   // 0x05D0   (0x0008)  
	class UFortItem*                                   ItemToRepresent;                                            // 0x05D8   (0x0008)  
	bool                                               PreviewRotation;                                            // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x05E1   (0x0007)  MISSED
	class UCurveFloat*                                 RotationAnimation;                                          // 0x05E8   (0x0008)  
	class UParticleSystem*                             LevelUpFX;                                                  // 0x05F0   (0x0008)  
	class UParticleSystem*                             EvolveUpFX;                                                 // 0x05F8   (0x0008)  
	FVector                                            FXTargetLocation;                                           // 0x0600   (0x0018)  
	bool                                               IsCharacter;                                                // 0x0618   (0x0001)  
	bool                                               IsEvolve;                                                   // 0x0619   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x061A   (0x0006)  MISSED
	class UParticleSystem*                             CharLevelUpFX;                                              // 0x0620   (0x0008)  
	class UParticleSystem*                             CharEvolveUpFX;                                             // 0x0628   (0x0008)  
	class UMaterialInstanceDynamic*                    UIoverrideMID;                                              // 0x0630   (0x0008)  
	bool                                               HasResetVisuals;                                            // 0x0638   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0639   (0x0007)  MISSED
	class UParticleSystemComponent*                    ParticleSystem1;                                            // 0x0640   (0x0008)  
	class UParticleSystemComponent*                    ParticleSystem2;                                            // 0x0648   (0x0008)  
	class UParticleSystem*                             CharSwapTransitionFX;                                       // 0x0650   (0x0008)  
	bool                                               IsCharacterVisible;                                         // 0x0658   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0659   (0x0007)  MISSED
	class AFortPlayerPawn*                             HeroPawn;                                                   // 0x0660   (0x0008)  
	bool                                               SanityChecker;                                              // 0x0668   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0669   (0x0007)  MISSED
	class UMaterialInstanceDynamic*                    MID_HoloMaterial;                                           // 0x0670   (0x0008)  
	FName                                              HideElement;                                                // 0x0678   (0x0004)  
	FName                                              VertexRange;                                                // 0x067C   (0x0004)  
	FName                                              HideElement0;                                               // 0x0680   (0x0004)  
	FName                                              HideElement1;                                               // 0x0684   (0x0004)  
	FName                                              HideElement2;                                               // 0x0688   (0x0004)  
	FName                                              HideElement3;                                               // 0x068C   (0x0004)  
	FName                                              HideElement4;                                               // 0x0690   (0x0004)  
	FName                                              HideElement5;                                               // 0x0694   (0x0004)  
	FName                                              HideElement6;                                               // 0x0698   (0x0004)  
	FName                                              HideElement7;                                               // 0x069C   (0x0004)  
	FName                                              HideElement8;                                               // 0x06A0   (0x0004)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x06A4   (0x0004)  MISSED
	FVector                                            ScalePivotPreScaleLocation;                                 // 0x06A8   (0x0018)  
	FVector                                            StaticMeshPreScaleLocation;                                 // 0x06C0   (0x0018)  
	FVector                                            SkelMeshPreScaleLocation;                                   // 0x06D8   (0x0018)  
	FVector                                            PrefabPreScaleLocation;                                     // 0x06F0   (0x0018)  
	class UParticleSystemComponent*                    GhostPistolVFX;                                             // 0x0708   (0x0008)  
	class UParticleSystemComponent*                    Ghost_Sword_VFX;                                            // 0x0710   (0x0008)  
	class UStaticMeshComponent*                        Ghost_Sword_Mesh;                                           // 0x0718   (0x0008)  
	class UParticleSystemComponent*                    TransitionFXComponent;                                      // 0x0720   (0x0008)  
	class UParticleSystem*                             CharSwapTransitionFXLoop;                                   // 0x0728   (0x0008)  
	FName                                              HideElementsOnlyConsidersRedChannel;                        // 0x0730   (0x0004)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetPreScaleLocations
	// void ResetPreScaleLocations();                                                                                        // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.RestoreTeleportMIDsInProgress
	// void RestoreTeleportMIDsInProgress(class AFortPlayerPawn* Pawn);                                                      // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandlePartyMemberInProgressDisplayChanges
	// void HandlePartyMemberInProgressDisplayChanges(class AFortPlayerPawn* Pawn);                                          // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PartyMemberInProgressCheck
	// void PartyMemberInProgressCheck(class AFortPlayerPawn* Pawn);                                                         // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPrefabActorForCurrentDisplayedItem
	// class AActor* GetPrefabActorForCurrentDisplayedItem();                                                                // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals
	// void PostSetupPrefabVisuals();                                                                                        // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem
	// void GetMeshForCurrentDisplayedItem(class UMeshComponent*& OutDisplayedMesh);                                         // [0x18a39e4] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
	// void GetItemDefinitionToShow(class UFortItemDefinition*& ItemDefinition);                                             // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
	// void SetUIOverrideVisuals(class UTexture2D* Large Texture, class UFortItemDefinition* Item, EFortRarity Rarity);      // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
	// FTransform GetWeaponPlacementTransform();                                                                             // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
	// void UpdatePreviewMeshTransforms();                                                                                   // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
	// FTransform GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition);                                           // [0x18a39e4] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
	// FTransform GetPreviewMeshWorldTransform();                                                                            // [0x18a39e4] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
	// void SetupStaticMeshVisuals(class UStaticMesh* NewMesh);                                                              // [0x18a39e4] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
	// void SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh);                                                          // [0x18a39e4] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
	// void ResetVisuals();                                                                                                  // [0x18a39e4] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
	// void ScaleAnimLevel__FinishedFunc();                                                                                  // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
	// void ScaleAnimLevel__UpdateFunc();                                                                                    // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
	// void ScaleAnimEvolve__FinishedFunc();                                                                                 // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
	// void ScaleAnimEvolve__UpdateFunc();                                                                                   // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__FinishedFunc
	// void HoloMatColorPulse__FinishedFunc();                                                                               // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__UpdateFunc
	// void HoloMatColorPulse__UpdateFunc();                                                                                 // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.Completed_01D864884864692DBB7035B0996A5437
	// void Completed_01D864884864692DBB7035B0996A5437(class UFortItem* Item, FGuid RequestID);                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
	// void ShowItem(class UFortItem* ItemToView, FGuid& RequestID);                                                         // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
	// void PlayLevelUpEffect();                                                                                             // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
	// void PlayEvolutionEffect();                                                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
	// void CelebrateWithFX();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
	// void PerformScaleMeshFX();                                                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
	// void HandleLoadingAssetsForItemCompleted(class UFortItem* ItemWhoseAssetsWereLoaded, TArray<UObject*>& LoadedAssets, FGuid& RequestID); // [0x18a39e4] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility
	// void Set Character Parts Visibility(bool NewVisible);                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.CharacterCustomizationFinished
	// void CharacterCustomizationFinished(class AFortPlayerPawn* Pawn);                                                     // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnPlayerPawnAddedToLobby
	// void OnPlayerPawnAddedToLobby(class AFortPlayerPawn* Pawn);                                                           // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResOutPawnFromLobby
	// void ResOutPawnFromLobby(class AFortPlayerPawn* Pawn, int32_t PartyIndex);                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals
	// void SetupPrefabVisuals();                                                                                            // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnEmoteSetupFinished
	// void OnEmoteSetupFinished();                                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnMeshLODStreamingFinished
	// void OnMeshLODStreamingFinished();                                                                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
	// void ExecuteUbergraph_PartyDisplayManagerBP(int32_t EntryPoint);                                                      // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C
/// Size: 0x0021 (0x000290 - 0x0002B1)
class ACameraAnimationTransition_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	class AFortnitePartyBackdrop_Camera_C*             CameraBR;                                                   // 0x02A0   (0x0008)  
	class AFortnitePartyBackdrop_Camera_C*             CameraBR16Player;                                           // 0x02A8   (0x0008)  
	EFrontEndCamera                                    CameraState;                                                // 0x02B0   (0x0001)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.CanChangeCamera
	// void CanChangeCamera(EFrontEndCamera FromCamera, EFrontEndCamera ToCamera, bool& CanChangeCamera);                    // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp
	// void MoveCameraUp();                                                                                                  // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown
	// void MoveCameraDown();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.ExecuteUbergraph_CameraAnimationTransition
	// void ExecuteUbergraph_CameraAnimationTransition(int32_t EntryPoint);                                                  // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
/// Size: 0x008C (0x000290 - 0x00031C)
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	class ADirectionalLight*                           DirectionLight;                                             // 0x02A0   (0x0008)  
	class ASkyLight*                                   SkyLight;                                                   // 0x02A8   (0x0008)  
	TArray<class APointLight*>                         Pointlights;                                                // 0x02B0   (0x0010)  
	class AExponentialHeightFog*                       ExponentialHeightFog;                                       // 0x02C0   (0x0008)  
	class ADirectionalLight*                           DirectionalLight_LowDetailMode;                             // 0x02C8   (0x0008)  
	TArray<class AEmitter*>                            ParticleSystems;                                            // 0x02D0   (0x0010)  
	bool                                               IsActive;                                                   // 0x02E0   (0x0001)  
	bool                                               DebugLOWQualityLighting;                                    // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02E2   (0x0006)  MISSED
	class ASkyLight*                                   SkyLight_LowDetailMode;                                     // 0x02E8   (0x0008)  
	class AExponentialHeightFog*                       ExponentialHeightfog_LowDetailMode;                         // 0x02F0   (0x0008)  
	bool                                               LOW_FX_Setting_Use_MobileLighting;                          // 0x02F8   (0x0001)  
	bool                                               IsLightalreadyActive;                                       // 0x02F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x02FA   (0x0002)  MISSED
	FLinearColor                                       MPC_ManualSunlightVector;                                   // 0x02FC   (0x0010)  
	FLinearColor                                       MPC_ManualSunlightColor;                                    // 0x030C   (0x0010)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofDetailSpecificMeshes
	// void SetVisiblityofDetailSpecificMeshes();                                                                            // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting
	// void SetVisiblityofSceneLighting(bool Activate);                                                                      // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting
	// void EnableLobbySetLighting();                                                                                        // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting
	// void DisableLobbySetLighting();                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings
	// void UpdateSettings();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher
	// void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32_t EntryPoint);                                              // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
/// Size: 0x0071 (0x000A10 - 0x000A81)
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A10   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0A18   (0x0008)  
	FTransform                                         SavedTransform;                                             // 0x0A20   (0x0060)  
	bool                                               Active;                                                     // 0x0A80   (0x0001)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnActivated
	// void BP_OnActivated(class AFortPlayerController* PlayerController);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnDeactivated
	// void BP_OnDeactivated(class AFortPlayerController* PlayerController);                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location
	// void Reset Location();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate
	// void ManualActivate();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
	// void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32_t EntryPoint);                                               // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_DetailLevelMesh.BP_DetailLevelMesh_C
/// Size: 0x001A (0x000290 - 0x0002AA)
class ABP_DetailLevelMesh_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0298   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02A0   (0x0008)  
	bool                                               AlwaysVisible;                                              // 0x02A8   (0x0001)  
	bool                                               NotVisibleOnSwitch;                                         // 0x02A9   (0x0001)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BP_DetailLevelMesh.BP_DetailLevelMesh_C.ExecuteUbergraph_BP_DetailLevelMesh
	// void ExecuteUbergraph_BP_DetailLevelMesh(int32_t EntryPoint);                                                         // [0x18a39e4] Final                
};

/// Class /Game/Environments/FrontEnd/BackPlates/LobbyActorDirector.LobbyActorDirector_C
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class ALobbyActorDirector_C : public ALobbyActorDirector
{ 
public:
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
/// Size: 0x0050 (0x000290 - 0x0002E0)
class AVaultWeaponPlacementHelper_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        CUBE;                                                       // 0x0298   (0x0008)  
	class UParticleSystemComponent*                    PS_NoPlayer_Sparkle;                                        // 0x02A0   (0x0008)  
	class UParticleSystemComponent*                    PS_NoPlayer_Swirl02;                                        // 0x02A8   (0x0008)  
	class UParticleSystemComponent*                    PS_NoPlayer_Swirl01;                                        // 0x02B0   (0x0008)  
	class UStaticMeshComponent*                        CharacterPlacement;                                         // 0x02B8   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x02C0   (0x0008)  
	class UStaticMesh*                                 Mesh;                                                       // 0x02C8   (0x0008)  
	SDK_UNDEFINED(16,11301) /* FMulticastInlineDelegate */ __um(NewEventDispatcher);                               // 0x02D0   (0x0010)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
	// void GetFrontendAnimInstance();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
	// void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
	// void Initialize();                                                                                                    // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
	// void InitializeContextEvents();                                                                                       // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
	// void ItemRez();                                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
	// void ExecuteUbergraph_VaultWeaponPlacementHelper(int32_t EntryPoint);                                                 // [0x18a39e4] Final                
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
	// void NewEventDispatcher_0__DelegateSignature();                                                                       // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
/// Size: 0x00C8 (0x000290 - 0x000358)
class AVaultCharacterPlacementHelper_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        floor;                                                      // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        CharacterPlacement;                                         // 0x02A0   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x02A8   (0x0008)  
	FTransform                                         OriginalTransform;                                          // 0x02B0   (0x0060)  
	FVector                                            OffsetTranslate;                                            // 0x0310   (0x0018)  
	FRotator                                           OffsetRotate;                                               // 0x0328   (0x0018)  
	bool                                               Athena;                                                     // 0x0340   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0341   (0x0007)  MISSED
	SDK_UNDEFINED(16,11302) /* FMulticastInlineDelegate */ __um(OnZoomLevelUpdated);                               // 0x0348   (0x0010)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera
	// void UpdatePosition For Camera(EFrontEndCamera FrontendCamera);                                                       // [0x18a39e4] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event
	// void SubGameChanged_Event(ESubGame SubGame);                                                                          // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged
	// void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
	// void ExecuteUbergraph_VaultCharacterPlacementHelper(int32_t EntryPoint);                                              // [0x18a39e4] Final|HasDefaults    
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnZoomLevelUpdated__DelegateSignature
	// void OnZoomLevelUpdated__DelegateSignature(double CurrentZoomLevel);                                                  // [0x18a39e4] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UUI_Background_Strings_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	class UCommonRichTextBlock*                        CustomString;                                               // 0x02C8   (0x0008)  
	SDK_UNDEFINED(24,11303) /* FText */                __um(CustomText);                                           // 0x02D0   (0x0018)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x18a39e4] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C.Construct
	// void Construct();                                                                                                     // [0x18a39e4] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C.ExecuteUbergraph_UI_Background_Strings
	// void ExecuteUbergraph_UI_Background_Strings(int32_t EntryPoint);                                                      // [0x18a39e4] Final                
};

/// Class /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C
/// Size: 0x0040 (0x000290 - 0x0002D0)
class ABP_Background_Raytracing_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        SM_InvertedSphere_BackPlate_Half;                           // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	bool                                               FullSphere;                                                 // 0x02A0   (0x0001)  
	bool                                               UseCubemap;                                                 // 0x02A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02A2   (0x0006)  MISSED
	double                                             Brightness;                                                 // 0x02A8   (0x0008)  
	class UTexture*                                    _2dTexture;                                                 // 0x02B0   (0x0008)  
	class UTexture*                                    Cubemap;                                                    // 0x02B8   (0x0008)  
	FLinearColor                                       FadeColor;                                                  // 0x02C0   (0x0010)  


	/// Functions
	// Function /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/BackPlates/CMSLobbyDirector.CMSLobbyDirector_C
/// Size: 0x0008 (0x000478 - 0x000480)
class ACMSLobbyDirector_C : public ADynamicBackgroundDirector
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0478   (0x0008)  
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ABP_CharacterRimlightDisabler_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ExecuteUbergraph_BP_CharacterRimlightDisabler
	// void ExecuteUbergraph_BP_CharacterRimlightDisabler(int32_t EntryPoint);                                               // [0x18a39e4] Final                
};

/// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
/// Size: 0x0020 (0x000A10 - 0x000A30)
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A10   (0x0008)  
	class UCameraComponent*                            CameraActor;                                                // 0x0A18   (0x0008)  
	bool                                               MouseDown;                                                  // 0x0A20   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0A21   (0x0007)  MISSED
	class AFortPlayerPawn*                             CachedPawn;                                                 // 0x0A28   (0x0008)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress
	// void HandleMousePress();                                                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease
	// void HandleMouseRelease();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnActivated
	// void BP_OnActivated(class AFortPlayerController* PlayerController);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnDeactivated
	// void BP_OnDeactivated(class AFortPlayerController* PlayerController);                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera
	// void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32_t EntryPoint);                                             // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C
/// Size: 0x00D0 (0x000290 - 0x000360)
class AVaultCharacterLightingBP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UArrowComponent*                             Arrow1;                                                     // 0x0298   (0x0008)  
	class USpotLightComponent*                         KeyLight4;                                                  // 0x02A0   (0x0008)  
	class USpotLightComponent*                         KeyLight3;                                                  // 0x02A8   (0x0008)  
	class USpotLightComponent*                         KeyLight2;                                                  // 0x02B0   (0x0008)  
	class UPostProcessComponent*                       PostProcess_Mobile;                                         // 0x02B8   (0x0008)  
	class UPostProcessComponent*                       PostProcess_LOWPC;                                          // 0x02C0   (0x0008)  
	class USkyLightComponent*                          SkyLight_LOWPC;                                             // 0x02C8   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLight_LOWPC;                                     // 0x02D0   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x02D8   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLightMobile;                                     // 0x02E0   (0x0008)  
	class USkyLightComponent*                          SkyLightLowMobil;                                           // 0x02E8   (0x0008)  
	class USkyLightComponent*                          SkyLight;                                                   // 0x02F0   (0x0008)  
	class USpotLightComponent*                         RimLowerRight;                                              // 0x02F8   (0x0008)  
	class USpotLightComponent*                         RimLeft;                                                    // 0x0300   (0x0008)  
	class USpotLightComponent*                         RimTopRight;                                                // 0x0308   (0x0008)  
	class USpotLightComponent*                         RimBottomLeft;                                              // 0x0310   (0x0008)  
	class USpotLightComponent*                         KeyLight;                                                   // 0x0318   (0x0008)  
	class USpotLightComponent*                         Bounce;                                                     // 0x0320   (0x0008)  
	class USpotLightComponent*                         BounceRear;                                                 // 0x0328   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x0330   (0x0008)  
	bool                                               DebugMobile_Lighting;                                       // 0x0338   (0x0001)  
	bool                                               DebugLightingPC;                                            // 0x0339   (0x0001)  
	bool                                               IsActive;                                                   // 0x033A   (0x0001)  
	bool                                               AlwaysOn;                                                   // 0x033B   (0x0001)  
	bool                                               DebugLighting_LOWDetailPC;                                  // 0x033C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x033D   (0x0003)  MISSED
	FLinearColor                                       MPC_ManualSunlightVector;                                   // 0x0340   (0x0010)  
	FLinearColor                                       MPC_ManualSunlightColor;                                    // 0x0350   (0x0010)  


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting_LOWDetail
	// void SwitchPCLighting_LOWDetail(bool Visibility);                                                                     // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                               // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibilty);                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.UpdateSettings
	// void UpdateSettings();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ToggleLighting
	// void ToggleLighting();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.OVERRIDELIGHTING
	// void OVERRIDELIGHTING();                                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
	// void LightControl(bool NewParam);                                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
	// void ExecuteUbergraph_VaultCharacterLightingBP(int32_t EntryPoint);                                                   // [0x18a39e4] Final                
};

