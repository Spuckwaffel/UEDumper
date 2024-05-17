
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/WmfMediaFactory.WmfMediaSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UWmfMediaSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      AllowNonStandardCodecs                                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      LowLatency                                                  OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      NativeAudioOut                                              OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      HardwareAcceleratedVideoDecoding                            OFFSET(get<bool>, {0x2B, 1, 0, 0})
};

