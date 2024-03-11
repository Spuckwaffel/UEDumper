
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
/// Size: 0x0000 (0x0014E0 - 0x0014E0)
class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP
	// void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled);                                       // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.OnPartnerListUpdated
	// void OnPartnerListUpdated();                                                                                             // [0x269ee84] Final|Native|Private 
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLogoutSuccess
	// void HandlePiPLogoutSuccess();                                                                                           // [0x3eb505c] Final|Native|Public  
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLoginSuccess
	// void HandlePiPLoginSuccess();                                                                                            // [0x3eb505c] Final|Native|Public  
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled
	// void HandlePiPEnabled(bool Enabled);                                                                                     // [0xaa50704] Final|Native|Public  
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
/// Size: 0x0000 (0x000400 - 0x000400)
class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.OnMediaStarted
	// void OnMediaStarted();                                                                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoStarted
	// void HandleOnPIPVideoStarted();                                                                                          // [0xaa5030c] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoResumed
	// void HandleOnPIPVideoResumed();                                                                                          // [0xaa5030c] Final|Native|Protected 
};

/// Class /Script/PictureInPictureUI.PictureInPicturePanelWidget
/// Size: 0x0328 (0x000400 - 0x000728)
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1832;

public:
	CMember(class USizeBox*)                           Video_Size_Box                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FVector2D)                                 StandardVideoSize                                           OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FVector2D)                                 StandardVideoTranslation                                    OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FMargin)                                   FrontEndSubtitleMargin                                      OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FMargin)                                   GameSubtitleMargin                                          OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	CMember(class UImage*)                             Image_Movie                                                 OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   Image_Thumbnail_Prev                                        OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(class UCommonLazyImage*)                   Image_Thumbnail_Next                                        OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(class UNamedSlot*)                         MetadataOverlaySlot                                         OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Main                                                OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Keybind                                             OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PressedObjectInputAction                                    OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	CMember(class UPictureInPicturePartnerControls*)   CurrentPartner                                              OFFSET(get<T>, {0x498, 8, 0, 0})
	DMember(bool)                                      bEnableUCPCheck                                             OFFSET(get<bool>, {0x4A0, 1, 0, 0})
	CMember(class UClass*)                             SourcePickerClass                                           OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(class USoundSourceBus*)                    SourceBus                                                   OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(class UCommonActionWidget*)                ToggleActionWidget                                          OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UCommonActivatableWidget*)           SourcePickerWidget                                          OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(class UPictureInPicturePlayer*)            VideoWidget                                                 OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UAudioComponent*)                    PIPSoundComponent                                           OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               OFFSET(getStruct<T>, {0x528, 496, 0, 0})
	CMember(class USubtitleDisplay*)                   Subtitles                                                   OFFSET(get<T>, {0x720, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                              // [0xaa508d4] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo
	// void ShowDebugInfo(bool bShow);                                                                                          // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent
	// void SetupPIPSoundComponent(FFortMediaEventsStreamAssets& InStreamAssets);                                               // [0xaa50800] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate
	// void IntentionalDeactivate();                                                                                            // [0x2862028] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bFullscreenMapVisible);                                                              // [0xaa50780] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(FPiPPartnerSource& InSelectedSource);                                                  // [0xaa505a4] Final|Native|Protected|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated
	// void HandleOnPartnerListUpdated();                                                                                       // [0x22f6678] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls);                                 // [0xaa50320] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged
	// void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);                                                         // [0xaa5028c] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix
	// void FlipPIPAudioSubmix(bool bInDefault, FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);                     // [0xaa5008c] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent
	// void DestroyPIPSoundComponent();                                                                                         // [0xaa50078] Final|Native|Private|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController
	// void AutoEnableController();                                                                                             // [0x42e9258] Final|Native|Private 
};

/// Class /Script/PictureInPictureUI.PictureInPictureSourcePicker
/// Size: 0x01F0 (0x000400 - 0x0005F0)
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	SMember(FVector2D)                                 FullScreenTranslation                                       OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FVector2D)                                 StandardTranslation                                         OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	CMember(class UVerticalBox*)                       VerticalBox_Main                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FSlateBrush)                               FullScreenActionBrush                                       OFFSET(getStruct<T>, {0x430, 192, 0, 0})
	SMember(FSlateBrush)                               StandardScreenActionBrush                                   OFFSET(getStruct<T>, {0x4F0, 192, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x5B1, 3, 0, 0})
	CMember(class UCommonTextBlock*)                   Text_ItemName                                               OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(class UFortPickerOverlay*)                 PickerOverlay_MediaSource                                   OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_Main                                                OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(class UTexture2D*)                         DefaultItemTexture                                          OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(class UPictureInPictureMediaController*)   CurrentPartner                                              OFFSET(get<T>, {0x5D8, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(TArray<FPiPPartnerSource>& CurrentSources);                                            // [0xaa50668] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner);                                         // [0xaa50520] Final|Native|Private 
};

