
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteGameFramework
/// dependency: MediaAssets
/// dependency: SubtitlesWidgets

/// Class /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C
/// Size: 0x0008 (0x000A10 - 0x000A18)
class ASpecialEventsCamera_Blueprint_C : public AFortCameraBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A10   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(class AFortPlayerController* PlayerController);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.BP_OnDeactivated
	// void BP_OnDeactivated(class AFortPlayerController* PlayerController);                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/SpecialEventsCamera_Blueprint.SpecialEventsCamera_Blueprint_C.ExecuteUbergraph_SpecialEventsCamera_Blueprint
	// void ExecuteUbergraph_SpecialEventsCamera_Blueprint(int32_t EntryPoint);                                              // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AHBOnboardingFlow_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	class UFortQuestItemDefinition_Campaign*           PlayPeriodicEventMovieQuest;                                // 0x02A0   (0x0008)  
	bool                                               bPlayedPeriodicEventMovie;                                  // 0x02A8   (0x0001)  
	bool                                               bHasRecheckedNeedToPlayPeriodicEventMovie;                  // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02AA   (0x0006)  MISSED
	FDataTableRowHandle                                PlayPeriodicEventCineObjective;                             // 0x02B0   (0x0010)  
	class UClass*                                      PeriodicEventMovieAnnouncementClass;                        // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.GetCampaignQuestManager
	// void GetCampaignQuestManager(class UFortQuestManager*& QuestManager);                                                 // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.RecheckNeedToPlayEventMovie
	// void RecheckNeedToPlayEventMovie(bool& WaitingToCheckAgain);                                                          // [0x18a39e4] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.NeedsToPlayEventMovie
	// bool NeedsToPlayEventMovie();                                                                                         // [0x18a39e4] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnCanceled_856A325D44ECC73B857CE5B301E90D33
	// void OnCanceled_856A325D44ECC73B857CE5B301E90D33();                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33
	// void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();                                                            // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnFailure_50CD26324B96B121A5B49DA66113AE5D
	// void OnFailure_50CD26324B96B121A5B49DA66113AE5D();                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnIgnored_50CD26324B96B121A5B49DA66113AE5D
	// void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.OnSuccess_50CD26324B96B121A5B49DA66113AE5D
	// void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();                                                                    // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandlePlayEventCine
	// void HandlePlayEventCine();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.HandleClientEvent_PlayEventMovie
	// void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent& ClientEvent); // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.StartFlow
	// void StartFlow();                                                                                                     // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/HBOnboardingFlow.HBOnboardingFlow_C.ExecuteUbergraph_HBOnboardingFlow
	// void ExecuteUbergraph_HBOnboardingFlow(int32_t EntryPoint);                                                           // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C
/// Size: 0x0028 (0x000310 - 0x000338)
class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0318   (0x0008)  
	class UMediaSource*                                EventMediaSource;                                           // 0x0320   (0x0008)  
	bool                                               AllowSkipping;                                              // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0329   (0x0007)  MISSED
	class UFortMediaSubtitlesPlayer*                   EventSubtitlesPlayer;                                       // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
	// void OnClientAnnouncementStop();                                                                                      // [0x18a39e4] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
	// void OnPlayerSkippedCutscene();                                                                                       // [0x18a39e4] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
	// void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, FFortClientEvent& ClientEvent); // [0x18a39e4] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
	// void HandleAllowSkip();                                                                                               // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState
	// void OnEnteredCinematicState();                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
	// void ExecuteUbergraph_Announce_EventCine(int32_t EntryPoint);                                                         // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/FrontEnd/HomebaseOnboarding/Announcements/Announce_Storm2018Cine.Announce_Storm2018Cine_C
/// Size: 0x0000 (0x000338 - 0x000338)
class AAnnounce_Storm2018Cine_C : public AAnnounce_EventCine_C
{ 
public:
};

/// Class /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C
/// Size: 0x00B0 (0x000A10 - 0x000AC0)
class AStoreCamera_Blueprint_C : public AFortCameraBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A10   (0x0008)  
	class UStaticMeshComponent*                        Mesh_DarkenBG;                                              // 0x0A18   (0x0008)  
	class UCameraComponent*                            CameraPlaceholderGround;                                    // 0x0A20   (0x0008)  
	float                                              ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0;     // 0x0A28   (0x0004)  
	SDK_UNDEFINED(1,14033) /* TEnumAsByte<ETimelineDirection> */ __um(ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0); // 0x0A2C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0A2D   (0x0003)  MISSED
	class UTimelineComponent*                          ChoicePack;                                                 // 0x0A30   (0x0008)  
	float                                              Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9;     // 0x0A38   (0x0004)  
	SDK_UNDEFINED(1,14034) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9); // 0x0A3C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0A3D   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0A40   (0x0008)  
	FVector                                            CameraGroundLoc;                                            // 0x0A48   (0x0018)  
	FRotator                                           CameraGroundRot;                                            // 0x0A60   (0x0018)  
	FVector                                            CameraOriginalLoc;                                          // 0x0A78   (0x0018)  
	FRotator                                           CameraOriginalRot;                                          // 0x0A90   (0x0018)  
	bool                                               CameraInStartPos;                                           // 0x0AA8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0AA9   (0x0007)  MISSED
	class AStorePinataMaster_Parent_C*                 PinataInLevel;                                              // 0x0AB0   (0x0008)  
	class AStoreCardReveal_Parent_C*                   CardRevealInLevel;                                          // 0x0AB8   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x18a39e4] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc
	// void ChoicePack__FinishedFunc();                                                                                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc
	// void ChoicePack__UpdateFunc();                                                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(class AFortPlayerController* PlayerController);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.BP_OnDeactivated
	// void BP_OnDeactivated(class AFortPlayerController* PlayerController);                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition
	// void OpeningCameraTransition();                                                                                       // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera
	// void ResetCamera();                                                                                                   // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility
	// void DarkenBGVisibility(bool Enable);                                                                                 // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out
	// void ChoicePackFOV-Out();                                                                                             // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In
	// void ChoicePackFOV-In();                                                                                              // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint
	// void ExecuteUbergraph_StoreCamera_Blueprint(int32_t EntryPoint);                                                      // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AStoreCardReveal_Parent_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             PinataSceneRoot;                                            // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
	// void InitiatePinata();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Cards/Blueprints/StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
	// void ExecuteUbergraph_StoreCardReveal_Parent(int32_t EntryPoint);                                                     // [0x18a39e4] Final                
};

/// Class /Game/FrontEnd/FrontEndSettingsBP.FrontEndSettingsBP_C
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class AFrontEndSettingsBP_C : public AFrontEndSettings
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B0   (0x0008)  
};

/// Class /Game/FrontEnd/FrontEnd_GameMode.FrontEnd_GameMode_C
/// Size: 0x0008 (0x0007F8 - 0x000800)
class AFrontEnd_GameMode_C : public AFortGameModeFrontEnd
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x07F8   (0x0008)  
};

/// Class /Game/FrontEnd/FrontEnd_PlayerController.FrontEnd_PlayerController_C
/// Size: 0x0000 (0x002EF0 - 0x002EF0)
class AFrontEnd_PlayerController_C : public AFortPlayerControllerFrontEnd
{ 
public:
};

/// Class /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
/// Size: 0x0018 (0x000A10 - 0x000A28)
class AHeroesCamera_Blueprint_C : public AFortCameraBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A10   (0x0008)  
	bool                                               MouseDown;                                                  // 0x0A18   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0A19   (0x0007)  MISSED
	class AFortPlayerPawn*                             Cached_Pawn;                                                // 0x0A20   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress
	// void HandleMousePress();                                                                                              // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMouseRelease
	// void HandleMouseRelease();                                                                                            // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                       // [0x18a39e4] BlueprintEvent       
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(class AFortPlayerController* PlayerController);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnDeactivated
	// void BP_OnDeactivated(class AFortPlayerController* PlayerController);                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint
	// void ExecuteUbergraph_HeroesCamera_Blueprint(int32_t EntryPoint);                                                     // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AStorePinataMaster_Parent_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             PinataSceneRoot;                                            // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.InitiatePinata
	// void InitiatePinata();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraResetComplete
	// void CameraResetComplete();                                                                                           // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraTransitionComplete
	// void CameraTransitionComplete();                                                                                      // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/FrontEnd/Store/Pinata/Blueprints/StorePinataMaster_Parent.StorePinataMaster_Parent_C.ExecuteUbergraph_StorePinataMaster_Parent
	// void ExecuteUbergraph_StorePinataMaster_Parent(int32_t EntryPoint);                                                   // [0x18a39e4] Final                
};

/// Class /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C
/// Size: 0x0018 (0x000A10 - 0x000A28)
class ALoginCamera_Blueprint_C : public AFortCameraBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A10   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0A18   (0x0008)  
	class UCameraComponent*                            LoginCamera;                                                // 0x0A20   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(class AFortPlayerController* PlayerController);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint
	// void ExecuteUbergraph_LoginCamera_Blueprint(int32_t EntryPoint);                                                      // [0x18a39e4] Final|HasDefaults    
};

/// Class /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C
/// Size: 0x0008 (0x000A10 - 0x000A18)
class AVaultCamera_Blueprint_C : public AFortCameraBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0A10   (0x0008)  


	/// Functions
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.BP_OnActivated
	// void BP_OnActivated(class AFortPlayerController* PlayerController);                                                   // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.BP_OnDeactivated
	// void BP_OnDeactivated(class AFortPlayerController* PlayerController);                                                 // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Game/FrontEnd/Cameras/VaultCamera_Blueprint.VaultCamera_Blueprint_C.ExecuteUbergraph_VaultCamera_Blueprint
	// void ExecuteUbergraph_VaultCamera_Blueprint(int32_t EntryPoint);                                                      // [0x18a39e4] Final|HasDefaults    
};

