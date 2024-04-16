
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicCMSUIFramework
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: MediaUtils
/// dependency: PictureInPictureDescriptors

/// Class /Script/PictureInPictureCore.PictureInPictureClient
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPictureInPictureClient : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  LoginSuccessEvent                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  LogoutSuccessEvent                                          OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  QRCodeReceivedEvent                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ErrorDelegate                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   UserName                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(class UEpicCMSImage*)                      UserAvatarImage                                             OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UTexture2DDynamic*)                  CurrentQRCodeTexture                                        OFFSET(get<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureClient.Logout
	// void Logout();                                                                                                           // [0x2447c9c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.IsLoggedIn
	// bool IsLoggedIn();                                                                                                       // [0x342a54c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture
	// class UTexture2DDynamic* GetQRCodeTexture();                                                                             // [0x2aed368] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetLoginState
	// TEnumAsByte<PictureInPictureAuthState> GetLoginState();                                                                  // [0x876ffe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetAvatarImage
	// class UEpicCMSImage* GetAvatarImage();                                                                                   // [0x89d50d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.EndLogin
	// void EndLogin(class UObject* InWorldContext);                                                                            // [0x739f924] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.CheckLogin
	// void CheckLogin(class UObject* InWorldContext);                                                                          // [0xa5d9e88] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.BeginLogin
	// void BeginLogin(class UObject* InWorldContext);                                                                          // [0x7e2ac18] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.SuspendPiP
	// void SuspendPiP();                                                                                                       // [0x3508bf8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.ResumePiP
	// void ResumePiP();                                                                                                        // [0x3508bf8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.PrintPiPRegionInfo
	// void PrintPiPRegionInfo();                                                                                               // [0x3508bf8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.EnablePiP
	// void EnablePiP();                                                                                                        // [0x3508bf8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.DisablePiP
	// void DisablePiP();                                                                                                       // [0x3508bf8] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.CanEnablePartnerPIP
	// void CanEnablePartnerPIP();                                                                                              // [0x3508bf8] Final|Exec|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureCoreEnableDisableAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureCoreEnableDisableAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PictureInPictureCore.PictureInPictureMediaController
/// Size: 0x0710 (0x000028 - 0x000738)
class UPictureInPictureMediaController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
	SMember(FString)                                   PartnerName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UPictureInPictureActionData*>) ActionDataArray                                            OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                DefaultPlayerAssetConfig                                    OFFSET(getStruct<T>, {0x58, 136, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                PlayerAssetConfig                                           OFFSET(getStruct<T>, {0xE0, 136, 0, 0})
	CMember(class UPictureInPicturePlayer*)            VideoWidget                                                 OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FPIPVideoPlayerConfig)                     VideoWidgetConfig                                           OFFSET(getStruct<T>, {0x170, 72, 0, 0})
	CMember(TWeakObjectPtr<UCommonLazyImage*>)         ThumbnailImageNext                                          OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonLazyImage*>)         ThumbnailImagePrevious                                      OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      bSupportsMultipleSources                                    OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               OFFSET(getStruct<T>, {0x1D0, 496, 0, 0})
	CMember(TArray<FPiPPartnerSource>)                 Sources                                                     OFFSET(get<T>, {0x3C0, 16, 0, 0})
	CMember(TArray<FPiPPartnerSource>)                 ValidSources                                                OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FMediaPlayerOptions)                       LocalOptions                                                OFFSET(getStruct<T>, {0x3E0, 128, 0, 0})
	SMember(FMulticastInlineDelegate)                  BaseErrorEvent                                              OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BaseEnabledEvent                                            OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourcesChangedEvent                                         OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourceSelectedEvent                                         OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	CMember(TArray<FPictureInPictureActionConfig>)     InstanceActionData                                          OFFSET(get<T>, {0x4A8, 16, 0, 0})
	CMember(class UPictureInPictureAnalyticsManager*)  AnalyticsManager                                            OFFSET(get<T>, {0x4B8, 8, 0, 0})
	SMember(FDateTime)                                 ActiveStartTime                                             OFFSET(getStruct<T>, {0x4C0, 8, 0, 0})
	SMember(FDateTime)                                 PausedStartTime                                             OFFSET(getStruct<T>, {0x4C8, 8, 0, 0})
	SMember(FPiPSuspendInfo)                           SuspendedInfo                                               OFFSET(getStruct<T>, {0x4D8, 504, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen
	// void ToggleFullScreen();                                                                                                 // [0xba9f620] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Stop
	// void Stop();                                                                                                             // [0x1f82a80] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetEnabled
	// void SetEnabled(bool bIsEnabled, bool bIsFromUser);                                                                      // [0xba9d988] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource
	// void SetCurrentSource(FPiPPartnerSource& SelectedSource);                                                                // [0xba9d8c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Play
	// void Play(bool bForcePlay);                                                                                              // [0xba9d7e4] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Pause
	// void Pause();                                                                                                            // [0x1509824] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived
	// void OnPrevThumbnailReceived(class UTexture2DDynamic* InTexture);                                                        // [0xba9d724] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived
	// void OnNextThumbnailReceived(class UTexture2DDynamic* InTexture);                                                        // [0xba9d664] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics
	// void OnMediaStartedAnalytics();                                                                                          // [0xba9d650] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics
	// void OnMediaResumedAnalytics();                                                                                          // [0xba9d628] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics
	// void OnMediaPausedAnalytics();                                                                                           // [0xba9d63c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics
	// void OnMediaClosedAnalytics();                                                                                           // [0xba9d628] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPlaying
	// bool IsPlaying();                                                                                                        // [0xba9d3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPaused
	// bool IsPaused();                                                                                                         // [0xba9d39c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported
	// bool IsMultiSourceSupported();                                                                                           // [0x660a6a8] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xba9d384] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent
	// void HandleSourceSelectedEvent(FString SelectedSource);                                                                  // [0xba9cc44] Native|Protected     
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetValidSources
	// TArray<FPiPPartnerSource> GetValidSources();                                                                             // [0xba9cb3c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetSources
	// TArray<FPiPPartnerSource> GetSources();                                                                                  // [0xba9cb0c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetPlayerAssetConfig();                                                                       // [0xba9caf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget
	// class UPictureInPicturePlayer* GetMediaPlayerWidget();                                                                   // [0x980ab48] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig();                                                                // [0xba9a45c] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource
	// FPiPPartnerSource GetCurrentSource();                                                                                    // [0xba9a42c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetActions
	// TArray<UPictureInPictureActionData*> GetActions();                                                                       // [0xba9a2e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Exit
	// void Exit(bool bStop);                                                                                                   // [0x6a37da4] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureMediaPlayerCtrl
/// Size: 0x0010 (0x000158 - 0x000168)
class UPictureInPictureMediaPlayerCtrl : public UFortMediaPlayerCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/PictureInPictureCore.PictureInPicturePlayer
/// Size: 0x0208 (0x000028 - 0x000230)
class UPictureInPicturePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FPIPVideoPlayerAssetConfig)                AssetConfig                                                 OFFSET(getStruct<T>, {0x108, 136, 0, 0})
	CMember(class UPictureInPictureMediaPlayerCtrl*)   MediaController                                             OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   DefaultSubmix                                               OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   LicensedSubmix                                              OFFSET(get<T>, {0x1F0, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize
	// void UpdateStreamingPlayerSize(FVector2D& InVector);                                                                     // [0xba9f788] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess
	// void StreamedVideoOnUrlSuccess(FString URL);                                                                             // [0xba9ef94] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure
	// void StreamedVideoOnUrlFailure(FString URL);                                                                             // [0xba9e91c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig
	// bool SetPlayerAssetConfig(FPIPVideoPlayerAssetConfig& InAssetConfig);                                                    // [0xba9dadc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet
	// bool IsAssetConfigSet();                                                                                                 // [0xba9d36c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged
	// void HandleUCPAudioChanged(class UFortClientSettingsRecord* Settings);                                                   // [0xba9d2ac] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig
	// void FlushPlayerAssetConfig();                                                                                           // [0xba9a2d4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPicturePartnerControls
/// Size: 0x0018 (0x000028 - 0x000040)
class UPictureInPicturePartnerControls : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bRequiresAgeOfConsent                                       OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(class UPictureInPictureClient*)            ClientObject                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UPictureInPictureMediaController*)   MediaController                                             OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/PictureInPictureCore.PictureInPictureSubsystem
/// Size: 0x00F0 (0x000030 - 0x000120)
class UPictureInPictureSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<class UPictureInPicturePartnerDataAsset*>) AvailableClientsList                                 OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPartnerUpdateComplete                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPartnerChanged                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bPartnerListUpdated                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bIsSuspended                                                OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bCMSInitialized                                             OFFSET(get<bool>, {0x62, 1, 0, 0})
	SMember(FString)                                   CurrentPlatform                                             OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TMap<FString, UPictureInPicturePartnerControls*>) SupportedPartnerControls                             OFFSET(get<T>, {0x88, 80, 0, 0})
	SMember(FString)                                   CurrentPartnerName                                          OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   CurrentContinent                                            OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   CurrentCountry                                              OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FString>)                           CurrentSubdivisions                                         OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(class UFortMediaCMSEventsComponent*)       CMSEventsComponent                                          OFFSET(get<T>, {0x118, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList
	// void UpdatePartnerItemList(class UObject* InWorldContext, bool bForce);                                                  // [0xba9f648] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                              // [0xba9f634] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController
	// void SuspendCurrentMediaController();                                                                                    // [0xba9f60c] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource
	// void StoreLastUsedSource(FString InPartnerSourceName);                                                                   // [0xba9e2b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner
	// void StoreLastUsedPartner(FString InPartnerName);                                                                        // [0xba9dc4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting
	// void StoreAutoEnableSetting(bool InUserEnabled);                                                                         // [0xba9db98] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners
	// void ShutdownAllPartners();                                                                                              // [0xba9db84] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController
	// void ResumeCurrentMediaController();                                                                                     // [0xba9d8ac] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected
	// void OnCurrentPartnerSourceSelected(FPiPPartnerSource& SelectedSource);                                                  // [0xba9d564] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid
	// void OnCMSEventValid(class UMediaCMSEvent* ValidEvent);                                                                  // [0xba9d4a4] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid
	// void OnCMSEventInvalid(class UMediaCMSEvent* InvalidEvent);                                                              // [0xba9d3e4] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated
	// bool IsPartnerListUpdated();                                                                                             // [0x66d8dd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest
	// void HandleMediaSourceRequest();                                                                                         // [0xba9cc30] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled
	// void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled);                                                     // [0xba9cb6c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList
	// TArray<UPictureInPicturePartnerDataAsset*> GetPartnerItemList();                                                         // [0xba9ca78] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem
	// class UPictureInPicturePartnerDataAsset* GetPartnerItem(FString PartnerName);                                            // [0xba9c410] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls
	// class UPictureInPicturePartnerControls* GetPartnerControls(FString PartnerName);                                         // [0xba9bda8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController
	// class UPictureInPictureMediaController* GetPartnerController(FString PartnerName);                                       // [0xba9b740] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient
	// class UPictureInPictureClient* GetPartnerClient(FString PartnerName);                                                    // [0xba9b0d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource
	// void GetLastUsedSource(FString& OutPartnerSourceName);                                                                   // [0xba9aaa8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner
	// void GetLastUsedPartner(FString& OutPartnerName);                                                                        // [0xba9a478] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem
	// class UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem();                                                        // [0xba9a408] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls
	// class UPictureInPicturePartnerControls* GetCurrentPartnerControls();                                                     // [0xba9a3dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController
	// class UPictureInPictureMediaController* GetCurrentPartnerController();                                                   // [0xba9a3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient
	// class UPictureInPictureClient* GetCurrentPartnerClient();                                                                // [0xba9a384] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting
	// bool GetAutoEnableSetting();                                                                                             // [0xba9a360] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption
	// void EnableFullScreenPiPOption(bool bEnable);                                                                            // [0xba9a210] Final|Native|Public  
};

/// Struct /Script/PictureInPictureCore.PiPSuspendInfo
/// Size: 0x01F8 (0x000000 - 0x0001F8)
class FPiPSuspendInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FPiPPartnerSource)                         SourceSnapshot                                              OFFSET(getStruct<T>, {0x0, 496, 0, 0})
	DMember(bool)                                      bEnabledState                                               OFFSET(get<bool>, {0x1F0, 1, 0, 0})
};

/// Enum /Script/PictureInPictureCore.PictureInPictureAuthState
/// Size: 0x04
enum class PictureInPictureAuthState : uint8_t
{
	UNKNOWN                                                                          = 0,
	NOT_AUTHORIZED                                                                   = 1,
	AUTHORIZED                                                                       = 2,
	PictureInPictureAuthState_MAX                                                    = 3
};

/// Enum /Script/PictureInPictureCore.PictureInPictureAuthType
/// Size: 0x04
enum class PictureInPictureAuthType : uint8_t
{
	AUTH_NONE                                                                        = 0,
	AUTH_USER_PASS                                                                   = 1,
	AUTH_QR_CODE                                                                     = 2,
	AUTH_MAX                                                                         = 3
};

