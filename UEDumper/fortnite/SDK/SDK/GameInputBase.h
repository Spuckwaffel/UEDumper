
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Enum /Script/GameInputBase.ERawDeviceReportTranslationBehavior
/// Size: 0x06
enum class ERawDeviceReportTranslationBehavior : uint8_t
{
	ERawDeviceReportTranslationBehavior__TreatAsTrigger                              = 0,
	ERawDeviceReportTranslationBehavior__TreatAsAnalog                               = 1,
	ERawDeviceReportTranslationBehavior__TreatAsButton                               = 2,
	ERawDeviceReportTranslationBehavior__TreatAsButtonBitmask                        = 3,
	ERawDeviceReportTranslationBehavior__TreatAsPackedAxisPair                       = 4,
	ERawDeviceReportTranslationBehavior__ERawDeviceReportTranslationBehavior_MAX     = 5
};

/// Class /Script/GameInputBase.GameInputPlatformSettings
/// Size: 0x0010 (0x000040 - 0x000050)
class UGameInputPlatformSettings : public UPlatformSettings
{ 
public:
	bool                                               bProcessController;                                         // 0x0040   (0x0001)  
	bool                                               bProcessRawInput;                                           // 0x0041   (0x0001)  
	bool                                               bSpecialDevicesRequireExplicitDeviceConfiguration;          // 0x0042   (0x0001)  
	bool                                               bProcessGamepad;                                            // 0x0043   (0x0001)  
	bool                                               bProcessKeyboard;                                           // 0x0044   (0x0001)  
	bool                                               bProcessMouse;                                              // 0x0045   (0x0001)  
	bool                                               bProcessRacingWheel;                                        // 0x0046   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0047   (0x0001)  MISSED
	float                                              RacingWheelDeadzone;                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GameInputBase.GameInputDeviceIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
struct FGameInputDeviceIdentifier
{ 
	uint16_t                                           VendorId;                                                   // 0x0000   (0x0002)  
	uint16_t                                           ProductId;                                                  // 0x0002   (0x0002)  
};

/// Struct /Script/GameInputBase.GameInputDeviceConfiguration
/// Size: 0x0118 (0x000000 - 0x000118)
struct FGameInputDeviceConfiguration
{ 
	FGameInputDeviceIdentifier                         DeviceIdentifier;                                           // 0x0000   (0x0004)  
	bool                                               bOverrideHardwareDeviceIdString;                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	SDK_UNDEFINED(16,14041) /* FString */              __um(OverriddenHardwareDeviceId);                           // 0x0008   (0x0010)  
	bool                                               bProcessControllerButtons;                                  // 0x0018   (0x0001)  
	bool                                               bProcessControllerSwitchState;                              // 0x0019   (0x0001)  
	bool                                               bProcessControllerAxis;                                     // 0x001A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x001B   (0x0005)  MISSED
	SDK_UNDEFINED(80,14042) /* TMap<uint32_t, FName> */ __um(ControllerButtonMappingData);                         // 0x0020   (0x0050)  
	SDK_UNDEFINED(80,14043) /* TMap<uint32_t, FGameInputControllerAxisData> */ __um(ControllerAxisMappingData);    // 0x0070   (0x0050)  
	bool                                               bProcessRawReportData;                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	uint32_t                                           RawReportReadingId;                                         // 0x00C4   (0x0004)  
	SDK_UNDEFINED(80,14044) /* TMap<int32_t, FGameInputRawDeviceReportData> */ __um(RawReportMappingData);         // 0x00C8   (0x0050)  
};

/// Class /Script/GameInputBase.GameInputDeveloperSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameInputDeveloperSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FGameInputDeviceConfiguration>              DeviceConfigurations;                                       // 0x0028   (0x0010)  
	FPerPlatformSettings                               PlatformSpecificSettings;                                   // 0x0038   (0x0010)  
	bool                                               bDoNotProcessDuplicateCapabilitiesForSingleUser;            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameInputBase.GameInputControllerAxisData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameInputControllerAxisData
{ 
	FName                                              KeyName;                                                    // 0x0000   (0x0004)  
	float                                              DeadZone;                                                   // 0x0004   (0x0004)  
	float                                              Scalar;                                                     // 0x0008   (0x0004)  
	bool                                               bIsPackedPositveAndNegative;                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/GameInputBase.GameInputRawDeviceReportData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FGameInputRawDeviceReportData
{ 
	FName                                              KeyName;                                                    // 0x0000   (0x0004)  
	ERawDeviceReportTranslationBehavior                TranslationBehavior;                                        // 0x0004   (0x0001)  
	char                                               AnalogDeadzone;                                             // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	float                                              Scalar;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(80,14045) /* TMap<int32_t, FName> */ __um(ButtonBitMaskMappings);                                // 0x0010   (0x0050)  
	char                                               LowerBitAxisIndex;                                          // 0x0060   (0x0001)  
	char                                               HigherBitAxisIndex;                                         // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

