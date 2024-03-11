
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AudioExtensions
/// dependency: CoreUObject

/// Class /Script/WinDualShock.DualShockExternalEndpointSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{ 
public:
	int32_t                                            ControllerIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/WinDualShock.DualShockSoundfieldEndpointSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{ 
public:
	int32_t                                            ControllerIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/WinDualShock.DualShockSpatializationSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{ 
public:
	float                                              Spread;                                                     // 0x0028   (0x0004)  
	int32_t                                            Priority;                                                   // 0x002C   (0x0004)  
	bool                                               Passthrough;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

