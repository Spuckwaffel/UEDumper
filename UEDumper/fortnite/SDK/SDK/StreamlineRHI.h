
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/StreamlineRHI.EStreamlineSettingOverride
/// Size: 0x04
enum class EStreamlineSettingOverride : uint8_t
{
	EStreamlineSettingOverride__Enabled                                              = 0,
	EStreamlineSettingOverride__Disabled                                             = 1,
	EStreamlineSettingOverride__UseProjectSettings                                   = 2,
	EStreamlineSettingOverride__EStreamlineSettingOverride_MAX                       = 3
};

/// Class /Script/StreamlineRHI.StreamlineOverrideSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UStreamlineOverrideSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EStreamlineSettingOverride                         EnableDLSSFGInPlayInEditorViewportsOverride;                // 0x0028   (0x0001)  
	EStreamlineSettingOverride                         LoadDebugOverlayOverride;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Class /Script/StreamlineRHI.StreamlineSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UStreamlineSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bEnableStreamlineD3D12;                                     // 0x0028   (0x0001)  
	bool                                               bEnableStreamlineD3D11;                                     // 0x0029   (0x0001)  
	bool                                               bEnableDLSSFGInPlayInEditorViewports;                       // 0x002A   (0x0001)  
	bool                                               bLoadDebugOverlay;                                          // 0x002B   (0x0001)  
	bool                                               bAllowOTAUpdate;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            NVIDIANGXApplicationId;                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

