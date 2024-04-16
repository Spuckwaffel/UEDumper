
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Environments
/// dependency: FortniteUI

/// Class /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C
/// Size: 0x0077 (0x000349 - 0x0003C0)
class APilgrimEventScreenEventVaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               floor                                                       OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(float)                                     ItemDetails_X_Offset_68C3898D424BEACDFEB5559E091141D8       OFFSET(get<float>, {0x360, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetails__Direction_68C3898D424BEACDFEB5559E091141D8     OFFSET(get<T>, {0x364, 1, 0, 0})
	CMember(class UTimelineComponent*)                 ItemDetails                                                 OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     Floor_Visibility_FloorMask_B8DF0E7548B0B3258911ACA2E59C4ED5 OFFSET(get<float>, {0x370, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Floor_Visibility__Direction_B8DF0E7548B0B3258911ACA2E59C4ED5 OFFSET(get<T>, {0x374, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Floor_Visibility                                            OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     Background_Effects_SetStreaks_B72E13E64AF840AB5A739E8485EAFB0C OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Background_Effects__Direction_B72E13E64AF840AB5A739E8485EAFB0C OFFSET(get<T>, {0x384, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Background_Effects                                          OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_630B799D41239619956D94A08501493D OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     TransitionForward_Pre_TransitionOffset_630B799D41239619956D94A08501493D OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_630B799D41239619956D94A08501493D  OFFSET(get<float>, {0x398, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_630B799D41239619956D94A08501493D OFFSET(get<T>, {0x39C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TransitionForward                                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(float)                                     TransitionBackward_fx_Transition_fade_0417507846315C71198827A55A7AB86E OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Pre_Transition_Offset_0417507846315C71198827A55A7AB86E OFFSET(get<float>, {0x3AC, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Backward_0417507846315C71198827A55A7AB86E OFFSET(get<float>, {0x3B0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionBackward__Direction_0417507846315C71198827A55A7AB86E OFFSET(get<T>, {0x3B4, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TransitionBackward                                          OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid); // [0x246f7d8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x246f7d8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                                  // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                    // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                                 // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                   // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                                 // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                   // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                   // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                     // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                        // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                          // [0x246f7d8] BlueprintEvent       
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnSetupBackground
	// void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);            // [0x246f7d8] HasOutParms|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.OnUpdateMaterialIndex
	// void OnUpdateMaterialIndex(int32_t MaterialIndex);                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /PilgrimEventScreen/LevelOverlays/PilgrimEventScreenEventVaultWorld.PilgrimEventScreenEventVaultWorld_C.ExecuteUbergraph_PilgrimEventScreenEventVaultWorld
	// void ExecuteUbergraph_PilgrimEventScreenEventVaultWorld(int32_t EntryPoint);                                             // [0x246f7d8] Final|HasDefaults    
};

/// Class /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C
/// Size: 0x0077 (0x000349 - 0x0003C0)
class AColdDayEventVaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               floor                                                       OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(float)                                     ItemDetails_X_Offset_D90468214A9330B1B77034940335E59D       OFFSET(get<float>, {0x360, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetails__Direction_D90468214A9330B1B77034940335E59D     OFFSET(get<T>, {0x364, 1, 0, 0})
	CMember(class UTimelineComponent*)                 ItemDetails                                                 OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     Floor_Visibility_FloorMask_65C385A744028D5C59A4E3B6EB9C75EE OFFSET(get<float>, {0x370, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Floor_Visibility__Direction_65C385A744028D5C59A4E3B6EB9C75EE OFFSET(get<T>, {0x374, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Floor_Visibility                                            OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     Background_Effects_SetStreaks_E6A719594460D01513B5318CDC1E632D OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Background_Effects__Direction_E6A719594460D01513B5318CDC1E632D OFFSET(get<T>, {0x384, 1, 0, 0})
	CMember(class UTimelineComponent*)                 Background_Effects                                          OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_610408C14B5CF9558EEA06BA05F48FBB OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     TransitionForward_Pre_TransitionOffset_610408C14B5CF9558EEA06BA05F48FBB OFFSET(get<float>, {0x394, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_610408C14B5CF9558EEA06BA05F48FBB  OFFSET(get<float>, {0x398, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_610408C14B5CF9558EEA06BA05F48FBB OFFSET(get<T>, {0x39C, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TransitionForward                                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(float)                                     TransitionBackward_fx_Transition_fade_5BFC9B3E47D8A9F43CAFB99219C0F4C2 OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Pre_Transition_Offset_5BFC9B3E47D8A9F43CAFB99219C0F4C2 OFFSET(get<float>, {0x3AC, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Backward_5BFC9B3E47D8A9F43CAFB99219C0F4C2 OFFSET(get<float>, {0x3B0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionBackward__Direction_5BFC9B3E47D8A9F43CAFB99219C0F4C2 OFFSET(get<T>, {0x3B4, 1, 0, 0})
	CMember(class UTimelineComponent*)                 TransitionBackward                                          OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, class UMaterialInstanceDynamic* Mid); // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(class UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, class UMaterialInstanceDynamic* Mid); // [0x246f7d8] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x246f7d8] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                                  // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                    // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                                 // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                   // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                                 // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                   // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                   // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                     // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                        // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                          // [0x246f7d8] BlueprintEvent       
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                           // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.OnSetupBackground
	// void OnSetupBackground(class UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);            // [0x246f7d8] HasOutParms|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                                // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                    // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                     // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.OnUpdateMaterialIndex
	// void OnUpdateMaterialIndex(int32_t MaterialIndex);                                                                       // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /ColdDayEventScreen/LevelOverlays/ColdDayEventVaultWorld.ColdDayEventVaultWorld_C.ExecuteUbergraph_ColdDayEventVaultWorld
	// void ExecuteUbergraph_ColdDayEventVaultWorld(int32_t EntryPoint);                                                        // [0x246f7d8] Final|HasDefaults    
};

