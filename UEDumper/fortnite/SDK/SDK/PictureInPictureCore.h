
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicCMSUIFramework
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: MediaUtils
/// dependency: PictureInPictureDescriptors

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

/// Class /Script/PictureInPictureCore.PictureInPictureClient
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPictureInPictureClient : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,15158) /* FMulticastInlineDelegate */ __um(LoginSuccessEvent);                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,15159) /* FMulticastInlineDelegate */ __um(LogoutSuccessEvent);                               // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,15160) /* FMulticastInlineDelegate */ __um(QRCodeReceivedEvent);                              // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,15161) /* FMulticastInlineDelegate */ __um(ErrorDelegate);                                    // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0068   (0x0008)  MISSED
	SDK_UNDEFINED(16,15162) /* FString */              __um(UserName);                                             // 0x0070   (0x0010)  
	class UEpicCMSImage*                               UserAvatarImage;                                            // 0x0080   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0088   (0x0008)  MISSED
	class UTexture2DDynamic*                           CurrentQRCodeTexture;                                       // 0x0090   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureClient.Logout
	// void Logout();                                                                                                        // [0x1c791ec] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.IsLoggedIn
	// bool IsLoggedIn();                                                                                                    // [0x3912dc4] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture
	// class UTexture2DDynamic* GetQRCodeTexture();                                                                          // [0x2bbd154] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetLoginState
	// TEnumAsByte<PictureInPictureAuthState> GetLoginState();                                                               // [0x81ea0ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetAvatarImage
	// class UEpicCMSImage* GetAvatarImage();                                                                                // [0x83e5090] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.EndLogin
	// void EndLogin(class UObject* InWorldContext);                                                                         // [0x722e308] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.CheckLogin
	// void CheckLogin(class UObject* InWorldContext);                                                                       // [0x99c840c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.BeginLogin
	// void BeginLogin(class UObject* InWorldContext);                                                                       // [0x78aa6cc] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureCheatManager : public UChildCheatManager
{ 
public:


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.SuspendPiP
	// void SuspendPiP();                                                                                                    // [0x36203b0] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.ResumePiP
	// void ResumePiP();                                                                                                     // [0x36203b0] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.PrintPiPRegionInfo
	// void PrintPiPRegionInfo();                                                                                            // [0x36203b0] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.EnablePiP
	// void EnablePiP();                                                                                                     // [0x36203b0] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.DisablePiP
	// void DisablePiP();                                                                                                    // [0x36203b0] Final|Exec|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureCheatManager.CanEnablePartnerPIP
	// void CanEnablePartnerPIP();                                                                                           // [0x36203b0] Final|Exec|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureCoreEnableDisableAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureCoreEnableDisableAction : public UFortUIGameFeatureAction
{ 
public:
};

/// Struct /Script/PictureInPictureCore.PiPSuspendInfo
/// Size: 0x01F8 (0x000000 - 0x0001F8)
struct FPiPSuspendInfo
{ 
	FPiPPartnerSource                                  SourceSnapshot;                                             // 0x0000   (0x01F0)  
	bool                                               bEnabledState;                                              // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F1   (0x0007)  MISSED
};

/// Class /Script/PictureInPictureCore.PictureInPictureMediaController
/// Size: 0x06C0 (0x000028 - 0x0006E8)
class UPictureInPictureMediaController : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(16,15163) /* FString */              __um(PartnerName);                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0038   (0x0010)  MISSED
	TArray<class UPictureInPictureActionData*>         ActionDataArray;                                            // 0x0048   (0x0010)  
	FPIPVideoPlayerAssetConfig                         DefaultPlayerAssetConfig;                                   // 0x0058   (0x0088)  
	FPIPVideoPlayerAssetConfig                         PlayerAssetConfig;                                          // 0x00E0   (0x0088)  
	class UPictureInPicturePlayer*                     VideoWidget;                                                // 0x0168   (0x0008)  
	FPIPVideoPlayerConfig                              VideoWidgetConfig;                                          // 0x0170   (0x0048)  
	SDK_UNDEFINED(8,15164) /* TWeakObjectPtr<UCommonLazyImage*> */ __um(ThumbnailImageNext);                       // 0x01B8   (0x0008)  
	SDK_UNDEFINED(8,15165) /* TWeakObjectPtr<UCommonLazyImage*> */ __um(ThumbnailImagePrevious);                   // 0x01C0   (0x0008)  
	bool                                               bSupportsMultipleSources;                                   // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FPiPPartnerSource                                  CurrentSource;                                              // 0x01D0   (0x01F0)  
	TArray<FPiPPartnerSource>                          Sources;                                                    // 0x03C0   (0x0010)  
	TArray<FPiPPartnerSource>                          ValidSources;                                               // 0x03D0   (0x0010)  
	FMediaPlayerOptions                                LocalOptions;                                               // 0x03E0   (0x0030)  
	SDK_UNDEFINED(16,15166) /* FMulticastInlineDelegate */ __um(BaseErrorEvent);                                   // 0x0410   (0x0010)  
	SDK_UNDEFINED(16,15167) /* FMulticastInlineDelegate */ __um(BaseEnabledEvent);                                 // 0x0420   (0x0010)  
	SDK_UNDEFINED(16,15168) /* FMulticastInlineDelegate */ __um(SourcesChangedEvent);                              // 0x0430   (0x0010)  
	SDK_UNDEFINED(16,15169) /* FMulticastInlineDelegate */ __um(SourceSelectedEvent);                              // 0x0440   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0450   (0x0008)  MISSED
	TArray<FPictureInPictureActionConfig>              InstanceActionData;                                         // 0x0458   (0x0010)  
	class UPictureInPictureAnalyticsManager*           AnalyticsManager;                                           // 0x0468   (0x0008)  
	FDateTime                                          ActiveStartTime;                                            // 0x0470   (0x0008)  
	FDateTime                                          PausedStartTime;                                            // 0x0478   (0x0008)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0480   (0x0008)  MISSED
	FPiPSuspendInfo                                    SuspendedInfo;                                              // 0x0488   (0x01F8)  
	unsigned char                                      UnknownData05_6[0x68];                                      // 0x0680   (0x0068)  MISSED


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen
	// void ToggleFullScreen();                                                                                              // [0xaa4c51c] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Stop
	// void Stop();                                                                                                          // [0x35bd900] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetEnabled
	// void SetEnabled(bool bIsEnabled, bool bIsFromUser);                                                                   // [0xaa4bd8c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource
	// void SetCurrentSource(FPiPPartnerSource& SelectedSource);                                                             // [0xaa4bcc4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Play
	// void Play(bool bForcePlay);                                                                                           // [0xaa4bc2c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Pause
	// void Pause();                                                                                                         // [0x1b102a0] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived
	// void OnPrevThumbnailReceived(class UTexture2DDynamic* InTexture);                                                     // [0xaa4bbac] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived
	// void OnNextThumbnailReceived(class UTexture2DDynamic* InTexture);                                                     // [0xaa4bb2c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics
	// void OnMediaStartedAnalytics();                                                                                       // [0xaa4bb18] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics
	// void OnMediaResumedAnalytics();                                                                                       // [0xaa4baf0] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics
	// void OnMediaPausedAnalytics();                                                                                        // [0xaa4bb04] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics
	// void OnMediaClosedAnalytics();                                                                                        // [0xaa4baf0] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPlaying
	// bool IsPlaying();                                                                                                     // [0xaa4b988] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPaused
	// bool IsPaused();                                                                                                      // [0xaa4b964] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported
	// bool IsMultiSourceSupported();                                                                                        // [0x66be23c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsEnabled
	// bool IsEnabled();                                                                                                     // [0xaa4b94c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent
	// void HandleSourceSelectedEvent(FString SelectedSource);                                                               // [0xaa4b750] Native|Protected     
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetValidSources
	// TArray<FPiPPartnerSource> GetValidSources();                                                                          // [0xaa4b68c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetSources
	// TArray<FPiPPartnerSource> GetSources();                                                                               // [0xaa4b65c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetPlayerAssetConfig();                                                                    // [0xaa4b640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget
	// class UPictureInPicturePlayer* GetMediaPlayerWidget();                                                                // [0xa76f8c8] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig();                                                             // [0xaa4aea0] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource
	// FPiPPartnerSource GetCurrentSource();                                                                                 // [0xaa4ae70] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetActions
	// TArray<UPictureInPictureActionData*> GetActions();                                                                    // [0xaa4ad2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Exit
	// void Exit(bool bStop);                                                                                                // [0x6a57af8] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureMediaPlayerCtrl
/// Size: 0x0010 (0x000108 - 0x000118)
class UPictureInPictureMediaPlayerCtrl : public UFortMediaPlayerCtrl
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Class /Script/PictureInPictureCore.PictureInPicturePlayer
/// Size: 0x0208 (0x000028 - 0x000230)
class UPictureInPicturePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x108];                                     // 0x0000   (0x0108)  MISSED
	FPIPVideoPlayerAssetConfig                         AssetConfig;                                                // 0x0108   (0x0088)  
	class UPictureInPictureMediaPlayerCtrl*            MediaController;                                            // 0x0190   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0198   (0x0050)  MISSED
	class USoundSubmixBase*                            DefaultSubmix;                                              // 0x01E8   (0x0008)  
	class USoundSubmixBase*                            LicensedSubmix;                                             // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x01F8   (0x0038)  MISSED


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize
	// void UpdateStreamingPlayerSize(FVector2D& InVector);                                                                  // [0xaa4c60c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess
	// void StreamedVideoOnUrlSuccess(FString URL);                                                                          // [0xaa4c39c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure
	// void StreamedVideoOnUrlFailure(FString URL);                                                                          // [0xaa4c230] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig
	// bool SetPlayerAssetConfig(FPIPVideoPlayerAssetConfig& InAssetConfig);                                                 // [0xaa4be54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet
	// bool IsAssetConfigSet();                                                                                              // [0xaa4b934] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged
	// void HandleUCPAudioChanged(class UFortClientSettingsRecord* Settings);                                                // [0xaa4b8b4] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig
	// void FlushPlayerAssetConfig();                                                                                        // [0xaa4ad18] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPicturePartnerControls
/// Size: 0x0018 (0x000028 - 0x000040)
class UPictureInPicturePartnerControls : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bRequiresAgeOfConsent;                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UPictureInPictureClient*                     ClientObject;                                               // 0x0030   (0x0008)  
	class UPictureInPictureMediaController*            MediaController;                                            // 0x0038   (0x0008)  
};

/// Class /Script/PictureInPictureCore.PictureInPictureSubsystem
/// Size: 0x00F0 (0x000030 - 0x000120)
class UPictureInPictureSubsystem : public UEngineSubsystem
{ 
public:
	TArray<class UPictureInPicturePartnerDataAsset*>   AvailableClientsList;                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,15170) /* FMulticastInlineDelegate */ __um(OnPartnerUpdateComplete);                          // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,15171) /* FMulticastInlineDelegate */ __um(OnPartnerChanged);                                 // 0x0050   (0x0010)  
	bool                                               bPartnerListUpdated;                                        // 0x0060   (0x0001)  
	bool                                               bIsSuspended;                                               // 0x0061   (0x0001)  
	bool                                               bCMSInitialized;                                            // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0063   (0x0005)  MISSED
	SDK_UNDEFINED(16,15172) /* FString */              __um(CurrentPlatform);                                      // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0078   (0x0010)  MISSED
	SDK_UNDEFINED(80,15173) /* TMap<FString, UPictureInPicturePartnerControls*> */ __um(SupportedPartnerControls); // 0x0088   (0x0050)  
	SDK_UNDEFINED(16,15174) /* FString */              __um(CurrentPartnerName);                                   // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,15175) /* FString */              __um(CurrentContinent);                                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,15176) /* FString */              __um(CurrentCountry);                                       // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,15177) /* TArray<FString> */      __um(CurrentSubdivisions);                                  // 0x0108   (0x0010)  
	class UFortMediaCMSEventsComponent*                CMSEventsComponent;                                         // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList
	// void UpdatePartnerItemList(class UObject* InWorldContext, bool bForce);                                               // [0xaa4c544] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                           // [0xaa4c530] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController
	// void SuspendCurrentMediaController();                                                                                 // [0xaa4c508] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource
	// void StoreLastUsedSource(FString InPartnerSourceName);                                                                // [0xaa4c0d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner
	// void StoreLastUsedPartner(FString InPartnerName);                                                                     // [0xaa4bf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting
	// void StoreAutoEnableSetting(bool InUserEnabled);                                                                      // [0xaa4bf10] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners
	// void ShutdownAllPartners();                                                                                           // [0xaa4befc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController
	// void ResumeCurrentMediaController();                                                                                  // [0xaa4bcb0] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected
	// void OnCurrentPartnerSourceSelected(FPiPPartnerSource& SelectedSource);                                               // [0xaa4ba2c] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid
	// void OnCMSEventValid(class UMediaCMSEvent* ValidEvent);                                                               // [0x269d728] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid
	// void OnCMSEventInvalid(class UMediaCMSEvent* InvalidEvent);                                                           // [0xaa4b9ac] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated
	// bool IsPartnerListUpdated();                                                                                          // [0x675d21c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest
	// void HandleMediaSourceRequest();                                                                                      // [0xaa4b73c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled
	// void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled);                                                  // [0xaa4b6bc] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList
	// TArray<UPictureInPicturePartnerDataAsset*> GetPartnerItemList();                                                      // [0xaa4b5c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem
	// class UPictureInPicturePartnerDataAsset* GetPartnerItem(FString PartnerName);                                         // [0xaa4b45c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls
	// class UPictureInPicturePartnerControls* GetPartnerControls(FString PartnerName);                                      // [0x269ced4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController
	// class UPictureInPictureMediaController* GetPartnerController(FString PartnerName);                                    // [0xaa4b2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient
	// class UPictureInPictureClient* GetPartnerClient(FString PartnerName);                                                 // [0xaa4b184] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource
	// void GetLastUsedSource(FString& OutPartnerSourceName);                                                                // [0xaa4b020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner
	// void GetLastUsedPartner(FString& OutPartnerName);                                                                     // [0xaa4aebc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem
	// class UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem();                                                     // [0xaa4ae4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls
	// class UPictureInPicturePartnerControls* GetCurrentPartnerControls();                                                  // [0xaa4ae20] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController
	// class UPictureInPictureMediaController* GetCurrentPartnerController();                                                // [0xaa4adf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient
	// class UPictureInPictureClient* GetCurrentPartnerClient();                                                             // [0xaa4adc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting
	// bool GetAutoEnableSetting();                                                                                          // [0xaa4ada4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption
	// void EnableFullScreenPiPOption(bool bEnable);                                                                         // [0xaa4ac98] Final|Native|Public  
};

