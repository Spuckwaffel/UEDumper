
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: Athena
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FrontEnd

/// Class /Game/Maps/Frontend.Frontend_C
/// Size: 0x0018 (0x0002A8 - 0x0002C0)
class AFrontend_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      NewLobby                                                    OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      NewVar                                                      OFFSET(get<bool>, {0x2B1, 1, 0, 0})
	CMember(class AHBOnboardingFlow_C*)                HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty      OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/Frontend.Frontend_C.PlaySpeech
	// void PlaySpeech(FString Filename, int32_t SampleRate, class USoundWave* AssetFile);                                      // [0x246f7d8] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.Frontend_C.OnMatchStarted
	// void OnMatchStarted();                                                                                                   // [0x246f7d8] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Maps/Frontend.Frontend_C.EnableTutorial
	// void EnableTutorial();                                                                                                   // [0x246f7d8] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Frontend.Frontend_C.ExecuteUbergraph_Frontend
	// void ExecuteUbergraph_Frontend(int32_t EntryPoint);                                                                      // [0x246f7d8] Final                
};

/// Class /Game/Maps/UI/Frontend_BattlePass.Frontend_BattlePass_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class AFrontend_BattlePass_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/Maps/WorldLightingMenu.WorldLightingMenu_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class AWorldLightingMenu_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C
/// Size: 0x0018 (0x0002A8 - 0x0002C0)
class AFrontend_BG_Main_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(class ABP_Frontend_ShopBG_C*)              BP_Frontend_ShopBG_9_ExecuteUbergraph_Frontend_BG_Main_RefProperty OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class AFortStaticMeshActor*)               S_UI_FrontendInspect_HexDonut_ExecuteUbergraph_Frontend_BG_Main_RefProperty OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_2_RequestDelegate__DelegateSignature();                           // [0x246f7d8] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_3_RequestDelegate__DelegateSignature();                           // [0x246f7d8] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage); // [0x246f7d8] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(FString PresetEnvironmentName); // [0x246f7d8] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_4_OnEnteredItemShop__DelegateSignature();                         // [0x246f7d8] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature
	// void BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_5_OnEnteredStore__DelegateSignature();                            // [0x246f7d8] BlueprintEvent       
	// Function /Game/Maps/UI/Frontend_BG_Main.Frontend_BG_Main_C.ExecuteUbergraph_Frontend_BG_Main
	// void ExecuteUbergraph_Frontend_BG_Main(int32_t EntryPoint);                                                              // [0x246f7d8] Final                
};

/// Class /Game/Maps/FrontEnd/Maps/FrontEndStore.FrontEndStore_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class AFrontEndStore_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/Maps/UI/Frontend_Lobby_Layout2.Frontend_Lobby_Layout2_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class AFrontend_Lobby_Layout2_C : public AFortLevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

