
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioExtensions
/// dependency: CoreUObject

/// Class /Script/WinDualShock.DualShockExternalEndpointSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   ControllerIndex                                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/WinDualShock.DualShockSoundfieldEndpointSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   ControllerIndex                                             OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/WinDualShock.DualShockSpatializationSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      Passthrough                                                 OFFSET(get<bool>, {0x30, 1, 0, 0})
};

