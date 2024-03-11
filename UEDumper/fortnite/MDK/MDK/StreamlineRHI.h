
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/StreamlineRHI.StreamlineOverrideSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UStreamlineOverrideSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EStreamlineSettingOverride)                EnableDLSSFGInPlayInEditorViewportsOverride                 OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EStreamlineSettingOverride)                LoadDebugOverlayOverride                                    OFFSET(get<T>, {0x29, 1, 0, 0})
};

/// Class /Script/StreamlineRHI.StreamlineSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UStreamlineSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bEnableStreamlineD3D12                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableStreamlineD3D11                                      OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bEnableDLSSFGInPlayInEditorViewports                        OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bLoadDebugOverlay                                           OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bAllowOTAUpdate                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(int32_t)                                   NVIDIANGXApplicationId                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Enum /Script/StreamlineRHI.EStreamlineSettingOverride
/// Size: 0x04
enum class EStreamlineSettingOverride : uint8_t
{
	EStreamlineSettingOverride__Enabled                                              = 0,
	EStreamlineSettingOverride__Disabled                                             = 1,
	EStreamlineSettingOverride__UseProjectSettings                                   = 2,
	EStreamlineSettingOverride__EStreamlineSettingOverride_MAX                       = 3
};

