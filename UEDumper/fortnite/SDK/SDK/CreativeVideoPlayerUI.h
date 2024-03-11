
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
/// dependency: UMG

/// Class /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget
/// Size: 0x0078 (0x000400 - 0x000478)
class UCreativeVideoPlayerFullScreenWidget : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_3[0x18];                                      // 0x0400   (0x0018)  MISSED
	class USoundSourceBus*                             SourceBus;                                                  // 0x0418   (0x0008)  
	class USoundClass*                                 SoundClass;                                                 // 0x0420   (0x0008)  
	FDataTableRowHandle                                HoldToSkipAction;                                           // 0x0428   (0x0010)  
	class UCommonButtonLegacy*                         Button_Skip;                                                // 0x0438   (0x0008)  
	class UImage*                                      Image_VideoTexture;                                         // 0x0440   (0x0008)  
	float                                              SkipButtonTimeout;                                          // 0x0448   (0x0004)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x044C   (0x0014)  MISSED
	class UAudioComponent*                             SoundComponent;                                             // 0x0460   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0468   (0x0010)  MISSED


	/// Functions
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.SetExternalComponents
	// void SetExternalComponents(class UMediaTexture* VideoTextureExt, class USoundSourceBus* ExtSourceBus);                // [0xab8292c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionProgress
	// void OnSkipButtonActionProgress(float HeldPercent);                                                                   // [0xab828b0] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerUI.CreativeVideoPlayerFullScreenWidget.OnSkipButtonActionComplete
	// void OnSkipButtonActionComplete();                                                                                    // [0xab8289c] Final|Native|Private 
};

