
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PictureInPictureCore
/// dependency: PictureInPictureDescriptors
/// dependency: UMG

/// Class /Script/PictureInPictureFNEvents.LiveEventHUDAd
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class ULiveEventHUDAd : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/PictureInPictureFNEvents.LiveEventHUDAd.ShowAdvertisement
	// void ShowAdvertisement(bool& Result);                                                                                    // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureFNEventsCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StopPiPBouncingLlama
	// void StopPiPBouncingLlama();                                                                                             // [0x36569a8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.StartPiPBouncingLlama
	// void StartPiPBouncingLlama();                                                                                            // [0x36569a8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.SelectPiPEvent
	// void SelectPiPEvent(FString EventName);                                                                                  // [0x964b2f8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.RemovePiPEvent
	// void RemovePiPEvent(FString EventName);                                                                                  // [0x964b2f8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListPiPEvents
	// void ListPiPEvents();                                                                                                    // [0x36569a8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.ListAllPiPEvents
	// void ListAllPiPEvents();                                                                                                 // [0x36569a8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsCheatManager.AddPiPEvent
	// void AddPiPEvent(FString EventName, FString VUID);                                                                       // [0x8e73e8c] Final|Exec|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsClient
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UPictureInPictureFNEventsClient : public UPictureInPictureClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController
/// Size: 0x0030 (0x000738 - 0x000768)
class UPictureInPictureFNEventsController : public UPictureInPictureMediaController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1896;

public:
	CMember(class UPictureInPictureFNEventsClient*)    FNEventsClient                                              OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(class ULiveEventHUDAd*)                    HUDAdvertWidget                                             OFFSET(get<T>, {0x740, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.UpdateClientLoginState
	// void UpdateClientLoginState(TArray<FPiPPartnerSource>& UpdatedSources);                                                  // [0xbef3d08] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLogoutSuccess
	// void OnClientLogoutSuccess();                                                                                            // [0xbef3cbc] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.OnClientLoginSuccess
	// void OnClientLoginSuccess();                                                                                             // [0xbef3ca8] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaRemoveEventsStream
	// void HandleFNMediaRemoveEventsStream(FString InEventName);                                                               // [0xbef35c4] Final|Native|Protected 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.HandleFNMediaEventsStreams
	// void HandleFNMediaEventsStreams(FFortMediaEventsStreamAssets& VideoStreamAssets);                                        // [0xbef2eb0] Final|Native|Protected|HasOutParms 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.ExitEvent
	// void ExitEvent();                                                                                                        // [0xbef2e9c] Final|Native|Private 
	// Function /Script/PictureInPictureFNEvents.PictureInPictureFNEventsController.AddPartnerActionAnalytics
	// void AddPartnerActionAnalytics(FString InPartnerName, PictureInPictureAction InActionType);                              // [0xbef2790] Final|Native|Private 
};

