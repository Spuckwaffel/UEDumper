
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: PictureInPictureCore
/// dependency: PictureInPictureDescriptors
/// dependency: SlateCore
/// dependency: SubtitlesWidgets
/// dependency: UMG

/// Class /Script/PictureInPictureUI.PictureInPictureBladeMenuButton
/// Size: 0x0000 (0x0014D0 - 0x0014D0)
class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP
	// void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled);                                       // [0x246f7d8] Event|Public|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.OnPartnerListUpdated
	// void OnPartnerListUpdated();                                                                                             // [0x30552a0] Final|Native|Private 
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLogoutSuccess
	// void HandlePiPLogoutSuccess();                                                                                           // [0x3e11af8] Final|Native|Public  
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLoginSuccess
	// void HandlePiPLoginSuccess();                                                                                            // [0x3e11af8] Final|Native|Public  
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled
	// void HandlePiPEnabled(bool Enabled);                                                                                     // [0xbaa4fc4] Final|Native|Public  
};

/// Class /Script/PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
/// Size: 0x0038 (0x000028 - 0x000060)
class UPictureInPictureLoadingScreenOverlayAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class USubtitleDisplayNative*)             SubtitleDisplay                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/PictureInPictureUI.PictureInPictureMetadataOverlay
/// Size: 0x0000 (0x000408 - 0x000408)
class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.OnMediaStarted
	// void OnMediaStarted();                                                                                                   // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoStarted
	// void HandleOnPIPVideoStarted();                                                                                          // [0xbaa4b44] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoResumed
	// void HandleOnPIPVideoResumed();                                                                                          // [0xbaa4b44] Final|Native|Protected 
};

/// Class /Script/PictureInPictureUI.PictureInPicturePanelWidget
/// Size: 0x0328 (0x000408 - 0x000730)
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	CMember(class USizeBox*)                           Video_Size_Box                                              OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FVector2D)                                 StandardVideoSize                                           OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	SMember(FVector2D)                                 StandardVideoTranslation                                    OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	SMember(FMargin)                                   FrontEndSubtitleMargin                                      OFFSET(getStruct<T>, {0x438, 16, 0, 0})
	SMember(FMargin)                                   GameSubtitleMargin                                          OFFSET(getStruct<T>, {0x448, 16, 0, 0})
	CMember(class UImage*)                             Image_Movie                                                 OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   Image_Thumbnail_Prev                                        OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   Image_Thumbnail_Next                                        OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UNamedSlot*)                         MetadataOverlaySlot                                         OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Main                                                OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Keybind                                             OFFSET(get<T>, {0x480, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PressedObjectInputAction                                    OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	CMember(class UPictureInPicturePartnerControls*)   CurrentPartner                                              OFFSET(get<T>, {0x4A0, 8, 0, 0})
	DMember(bool)                                      bEnableUCPCheck                                             OFFSET(get<bool>, {0x4A8, 1, 0, 0})
	CMember(class UClass*)                             SourcePickerClass                                           OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class USoundSourceBus*)                    SourceBus                                                   OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ToggleActionWidget                                          OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UCommonActivatableWidget*)           SourcePickerWidget                                          OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UPictureInPicturePlayer*)            VideoWidget                                                 OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UAudioComponent*)                    PIPSoundComponent                                           OFFSET(get<T>, {0x528, 8, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               OFFSET(getStruct<T>, {0x530, 496, 0, 0})
	CMember(class USubtitleDisplay*)                   Subtitles                                                   OFFSET(get<T>, {0x728, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                              // [0xbaa57cc] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo
	// void ShowDebugInfo(bool bShow);                                                                                          // [0x246f7d8] Event|Protected|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent
	// void SetupPIPSoundComponent(FFortMediaEventsStreamAssets& InStreamAssets);                                               // [0xbaa5160] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate
	// void IntentionalDeactivate();                                                                                            // [0xbaa5144] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bFullscreenMapVisible);                                                              // [0xbaa5080] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(FPiPPartnerSource& InSelectedSource);                                                  // [0xbaa4e64] Final|Native|Protected|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated
	// void HandleOnPartnerListUpdated();                                                                                       // [0x41b9a7c] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls);                                 // [0xbaa4b58] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged
	// void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);                                                         // [0xbaa4a80] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix
	// void FlipPIPAudioSubmix(bool bInDefault, FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);                     // [0xbaa42a0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent
	// void DestroyPIPSoundComponent();                                                                                         // [0xbaa428c] Final|Native|Private|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController
	// void AutoEnableController();                                                                                             // [0xbaa4278] Final|Native|Private 
};

/// Class /Script/PictureInPictureUI.PictureInPictureSourcePicker
/// Size: 0x01F8 (0x000408 - 0x000600)
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	SMember(FVector2D)                                 FullScreenTranslation                                       OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FVector2D)                                 StandardTranslation                                         OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	CMember(class UVerticalBox*)                       VerticalBox_Main                                            OFFSET(get<T>, {0x430, 8, 0, 0})
	SMember(FSlateBrush)                               FullScreenActionBrush                                       OFFSET(getStruct<T>, {0x440, 192, 0, 0})
	SMember(FSlateBrush)                               StandardScreenActionBrush                                   OFFSET(getStruct<T>, {0x500, 192, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x5C1, 3, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemName                                               OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UFortPickerOverlay*)                 PickerOverlay_MediaSource                                   OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Main                                                OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UTexture2D*)                         DefaultItemTexture                                          OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(class UPictureInPictureMediaController*)   CurrentPartner                                              OFFSET(get<T>, {0x5E8, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(TArray<FPiPPartnerSource>& CurrentSources);                                            // [0xbaa4f28] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner);                                         // [0xbaa4da0] Final|Native|Private 
};

