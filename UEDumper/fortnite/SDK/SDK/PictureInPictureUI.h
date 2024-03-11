
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
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
public:


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.UpdatePiPStatusBP
	// void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled);                                    // [0x18a39e4] Event|Public|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.OnPartnerListUpdated
	// void OnPartnerListUpdated();                                                                                          // [0x269ee84] Final|Native|Private 
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLogoutSuccess
	// void HandlePiPLogoutSuccess();                                                                                        // [0x3eb505c] Final|Native|Public  
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPLoginSuccess
	// void HandlePiPLoginSuccess();                                                                                         // [0x3eb505c] Final|Native|Public  
	// Function /Script/PictureInPictureUI.PictureInPictureBladeMenuButton.HandlePiPEnabled
	// void HandlePiPEnabled(bool Enabled);                                                                                  // [0xaa50704] Final|Native|Public  
};

/// Class /Script/PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
/// Size: 0x0038 (0x000028 - 0x000060)
class UPictureInPictureLoadingScreenOverlayAction : public UFortUIGameFeatureAction
{ 
public:
	class USubtitleDisplayNative*                      SubtitleDisplay;                                            // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/PictureInPictureUI.PictureInPictureMetadataOverlay
/// Size: 0x0000 (0x000400 - 0x000400)
class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget
{ 
public:


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.OnMediaStarted
	// void OnMediaStarted();                                                                                                // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoStarted
	// void HandleOnPIPVideoStarted();                                                                                       // [0xaa5030c] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPictureMetadataOverlay.HandleOnPIPVideoResumed
	// void HandleOnPIPVideoResumed();                                                                                       // [0xaa5030c] Final|Native|Protected 
};

/// Class /Script/PictureInPictureUI.PictureInPicturePanelWidget
/// Size: 0x0328 (0x000400 - 0x000728)
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	class USizeBox*                                    Video_Size_Box;                                             // 0x0408   (0x0008)  
	FVector2D                                          StandardVideoSize;                                          // 0x0410   (0x0010)  
	FVector2D                                          StandardVideoTranslation;                                   // 0x0420   (0x0010)  
	FMargin                                            FrontEndSubtitleMargin;                                     // 0x0430   (0x0010)  
	FMargin                                            GameSubtitleMargin;                                         // 0x0440   (0x0010)  
	class UImage*                                      Image_Movie;                                                // 0x0450   (0x0008)  
	class UCommonLazyImage*                            Image_Thumbnail_Prev;                                       // 0x0458   (0x0008)  
	class UCommonLazyImage*                            Image_Thumbnail_Next;                                       // 0x0460   (0x0008)  
	class UNamedSlot*                                  MetadataOverlaySlot;                                        // 0x0468   (0x0008)  
	class UOverlay*                                    Overlay_Main;                                               // 0x0470   (0x0008)  
	class UOverlay*                                    Overlay_Keybind;                                            // 0x0478   (0x0008)  
	FDataTableRowHandle                                PressedObjectInputAction;                                   // 0x0480   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0490   (0x0008)  MISSED
	class UPictureInPicturePartnerControls*            CurrentPartner;                                             // 0x0498   (0x0008)  
	bool                                               bEnableUCPCheck;                                            // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x04A1   (0x0007)  MISSED
	class UClass*                                      SourcePickerClass;                                          // 0x04A8   (0x0008)  
	class USoundSourceBus*                             SourceBus;                                                  // 0x04B0   (0x0008)  
	class UCommonActionWidget*                         ToggleActionWidget;                                         // 0x04B8   (0x0008)  
	class UCommonActivatableWidget*                    SourcePickerWidget;                                         // 0x04C0   (0x0008)  
	class UPictureInPicturePlayer*                     VideoWidget;                                                // 0x04C8   (0x0008)  
	unsigned char                                      UnknownData03_5[0x50];                                      // 0x04D0   (0x0050)  MISSED
	class UAudioComponent*                             PIPSoundComponent;                                          // 0x0520   (0x0008)  
	FPiPPartnerSource                                  CurrentSource;                                              // 0x0528   (0x01F0)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0718   (0x0008)  MISSED
	class USubtitleDisplay*                            Subtitles;                                                  // 0x0720   (0x0008)  


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                           // [0xaa508d4] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo
	// void ShowDebugInfo(bool bShow);                                                                                       // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent
	// void SetupPIPSoundComponent(FFortMediaEventsStreamAssets& InStreamAssets);                                            // [0xaa50800] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate
	// void IntentionalDeactivate();                                                                                         // [0x2862028] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bFullscreenMapVisible);                                                           // [0xaa50780] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(FPiPPartnerSource& InSelectedSource);                                               // [0xaa505a4] Final|Native|Protected|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated
	// void HandleOnPartnerListUpdated();                                                                                    // [0x22f6678] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartnerControls);                              // [0xaa50320] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged
	// void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);                                                      // [0xaa5028c] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix
	// void FlipPIPAudioSubmix(bool bInDefault, FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);                  // [0xaa5008c] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent
	// void DestroyPIPSoundComponent();                                                                                      // [0xaa50078] Final|Native|Private|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController
	// void AutoEnableController();                                                                                          // [0x42e9258] Final|Native|Private 
};

/// Class /Script/PictureInPictureUI.PictureInPictureSourcePicker
/// Size: 0x01F0 (0x000400 - 0x0005F0)
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0400   (0x0008)  MISSED
	FVector2D                                          FullScreenTranslation;                                      // 0x0408   (0x0010)  
	FVector2D                                          StandardTranslation;                                        // 0x0418   (0x0010)  
	class UVerticalBox*                                VerticalBox_Main;                                           // 0x0428   (0x0008)  
	FSlateBrush                                        FullScreenActionBrush;                                      // 0x0430   (0x00C0)  
	FSlateBrush                                        StandardScreenActionBrush;                                  // 0x04F0   (0x00C0)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x05B0   (0x0001)  MISSED
	FPrimaryContentSetup                               PrimaryContentSetup;                                        // 0x05B1   (0x0003)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x05B4   (0x0004)  MISSED
	class UCommonTextBlock*                            Text_ItemName;                                              // 0x05B8   (0x0008)  
	class UFortPickerOverlay*                          PickerOverlay_MediaSource;                                  // 0x05C0   (0x0008)  
	class UOverlay*                                    Overlay_Main;                                               // 0x05C8   (0x0008)  
	class UTexture2D*                                  DefaultItemTexture;                                         // 0x05D0   (0x0008)  
	class UPictureInPictureMediaController*            CurrentPartner;                                             // 0x05D8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x05E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(TArray<FPiPPartnerSource>& CurrentSources);                                         // [0xaa50668] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(class UPictureInPicturePartnerControls* NewPartner);                                      // [0xaa50520] Final|Native|Private 
};

