
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Athena
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FrontEnd

/// Class /Game/Maps/Frontend.Frontend_C
/// Size: 0x0018 (0x0002A8 - 0x0002C0)
class AFrontend_C : public AFortLevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A8   (0x0008)  
	bool                                               NewLobby;                                                   // 0x02B0   (0x0001)  
	bool                                               NewVar;                                                     // 0x02B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02B2   (0x0006)  MISSED
	class AHBOnboardingFlow_C*                         HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty;     // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/Maps/Frontend.Frontend_C.PlaySpeech
	// void PlaySpeech(FString Filename, int32_t SampleRate, class USoundWave* AssetFile);                                   // [0x18a39e4] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.Frontend_C.OnMatchStarted
	// void OnMatchStarted();                                                                                                // [0x18a39e4] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Maps/Frontend.Frontend_C.EnableTutorial
	// void EnableTutorial();                                                                                                // [0x18a39e4] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.Frontend_C.ExecuteUbergraph_Frontend
	// void ExecuteUbergraph_Frontend(int32_t EntryPoint);                                                                   // [0x18a39e4] Final                
};

/// Class /Game/Maps/UI/Frontend_BattlePass.Frontend_BattlePass_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class AFrontend_BattlePass_C : public AFortLevelScriptActor
{ 
public:
};

/// Class /Game/Maps/WorldLightingMenu.WorldLightingMenu_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class AWorldLightingMenu_C : public AFortLevelScriptActor
{ 
public:
};

/// Class /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C
/// Size: 0x0018 (0x0002A8 - 0x0002C0)
class AFrontend_BG_Main_C : public AFortLevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02A8   (0x0008)  
	class ABP_Frontend_ShopBG_C*                       BP_Frontend_ShopBG_9_ExecuteUbergraph_Frontend_BG_Main_RefProperty; // 0x02B0   (0x0008)  
	class AFortStaticMeshActor*                        S_UI_FrontendInspect_HexDonut_ExecuteUbergraph_Frontend_BG_Main_RefProperty; // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature();                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature();                        // [0x18a39e4] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(FString PresetEnvironmentName); // [0x18a39e4] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature();                      // [0x18a39e4] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature();                         // [0x18a39e4] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.ExecuteUbergraph_Frontend_BG_Main
	// void ExecuteUbergraph_Frontend_BG_Main(int32_t EntryPoint);                                                           // [0x18a39e4] Final                
};

/// Class /Game/Maps/FrontEnd/Maps/FrontEndStore.FrontEndStore_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class AFrontEndStore_C : public AFortLevelScriptActor
{ 
public:
};

/// Class /Game/Maps/UI/Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class AFrontend_Lobby_Layout2_C : public AFortLevelScriptActor
{ 
public:
};

