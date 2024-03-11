
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Environments
/// dependency: FortniteUI

/// Class /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C
/// Size: 0x0077 (0x000349 - 0x0003C0)
class APilgrimEventScreenEventVaultWorld_C : public AVaultWorld_C
{ 
public:
	unsigned char                                      UnknownData00_3[0x7];                                       // 0x0349   (0x0007)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	class UStaticMeshComponent*                        floor;                                                      // 0x0358   (0x0008)  
	float                                              ItemDetails_X_Offset_68C3898D424BEACDFEB5559E091141D8;      // 0x0360   (0x0004)  
	SDK_UNDEFINED(1,14858) /* TEnumAsByte<ETimelineDirection> */ __um(ItemDetails__Direction_68C3898D424BEACDFEB5559E091141D8); // 0x0364   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0365   (0x0003)  MISSED
	class UTimelineComponent*                          ItemDetails;                                                // 0x0368   (0x0008)  
	float                                              Floor_Visibility_FloorMask_B8DF0E7548B0B3258911ACA2E59C4ED5; // 0x0370   (0x0004)  
	SDK_UNDEFINED(1,14859) /* TEnumAsByte<ETimelineDirection> */ __um(Floor_Visibility__Direction_B8DF0E7548B0B3258911ACA2E59C4ED5); // 0x0374   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0375   (0x0003)  MISSED
	class UTimelineComponent*                          Floor_Visibility;                                           // 0x0378   (0x0008)  
	float                                              Background_Effects_SetStreaks_B72E13E64AF840AB5A739E8485EAFB0C; // 0x0380   (0x0004)  
	SDK_UNDEFINED(1,14860) /* TEnumAsByte<ETimelineDirection> */ __um(Background_Effects__Direction_B72E13E64AF840AB5A739E8485EAFB0C); // 0x0384   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0385   (0x0003)  MISSED
	class UTimelineComponent*                          Background_Effects;                                         // 0x0388   (0x0008)  
	float                                              TransitionForward_FX_Transition_Fade_630B799D41239619956D94A08501493D; // 0x0390   (0x0004)  
	float                                              TransitionForward_Pre_TransitionOffset_630B799D41239619956D94A08501493D; // 0x0394   (0x0004)  
	float                                              TransitionForward_Forward_630B799D41239619956D94A08501493D; // 0x0398   (0x0004)  
	SDK_UNDEFINED(1,14861) /* TEnumAsByte<ETimelineDirection> */ __um(TransitionForward__Direction_630B799D41239619956D94A08501493D); // 0x039C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x039D   (0x0003)  MISSED
	class UTimelineComponent*                          TransitionForward;                                          // 0x03A0   (0x0008)  
	float                                              TransitionBackward_fx_Transition_fade_0417507846315C71198827A55A7AB86E; // 0x03A8   (0x0004)  
	float                                              TransitionBackward_Pre_Transition_Offset_0417507846315C71198827A55A7AB86E; // 0x03AC   (0x0004)  
	float                                              TransitionBackward_Backward_0417507846315C71198827A55A7AB86E; // 0x03B0   (0x0004)  
	SDK_UNDEFINED(1,14862) /* TEnumAsByte<ETimelineDirection> */ __um(TransitionBackward__Direction_0417507846315C71198827A55A7AB86E); // 0x03B4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x03B5   (0x0003)  MISSED
	class UTimelineComponent*                          TransitionBackward;                                         // 0x03B8   (0x0008)  


	/// Functions
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid); // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                               // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                 // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                              // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                  // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                     // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                       // [0x18a39e4] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnSetupBackground
	// void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);         // [0x18a39e4] HasOutParms|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                             // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                 // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                  // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnUpdateMaterialIndex
	// void OnUpdateMaterialIndex(int32_t MaterialIndex);                                                                    // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ExecuteUbergraph_PilgrimEventScreenEventVaultWorld
	// void ExecuteUbergraph_PilgrimEventScreenEventVaultWorld(int32_t EntryPoint);                                          // [0x18a39e4] Final|HasDefaults    
};

