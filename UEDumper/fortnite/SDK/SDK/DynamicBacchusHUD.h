
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameplayTags

/// Class /Script/DynamicBacchusHUD.DynamicBacchusHUDDirector
/// Size: 0x01C8 (0x0002B0 - 0x000478)
class ADynamicBacchusHUDDirector : public ADynamicUIDirectorBase
{ 
public:
	FDynamicUIWidgetTarget                             TouchControlRegionWidget;                                   // 0x02B0   (0x0060)  
	class UFortMobileHUDWidgetRegistry*                BaseHUDWidgetRegistry;                                      // 0x0310   (0x0008)  
	class UDynamicUIScene*                             WatermarkScene;                                             // 0x0318   (0x0008)  
	SDK_UNDEFINED(80,13340) /* TMap<FGameplayTag, UDynamicUIMobileScene*> */ __um(ScenesPool);                     // 0x0320   (0x0050)  
	class UFortMobileHUDWidgetRegistry*                HUDWidgetRegistry;                                          // 0x0370   (0x0008)  
	unsigned char                                      UnknownData00_5[0xA0];                                      // 0x0378   (0x00A0)  MISSED
	FGameplayTagContainer                              CurrentContextTags;                                         // 0x0418   (0x0020)  
	FFortMobileHUDLayoutProfile                        LayoutProfile;                                              // 0x0438   (0x0040)  
};

/// Class /Script/DynamicBacchusHUD.DynamicUIMobileScene
/// Size: 0x00C0 (0x000078 - 0x000138)
class UDynamicUIMobileScene : public UDynamicUIScene
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0078   (0x00C0)  MISSED
};

