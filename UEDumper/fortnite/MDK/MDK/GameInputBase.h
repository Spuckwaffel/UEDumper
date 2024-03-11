
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/GameInputBase.GameInputPlatformSettings
/// Size: 0x0010 (0x000040 - 0x000050)
class UGameInputPlatformSettings : public UPlatformSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bProcessController                                          OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bProcessRawInput                                            OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bSpecialDevicesRequireExplicitDeviceConfiguration           OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bProcessGamepad                                             OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bProcessKeyboard                                            OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bProcessMouse                                               OFFSET(get<bool>, {0x45, 1, 0, 0})
	DMember(bool)                                      bProcessRacingWheel                                         OFFSET(get<bool>, {0x46, 1, 0, 0})
	DMember(float)                                     RacingWheelDeadzone                                         OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Class /Script/GameInputBase.GameInputDeveloperSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameInputDeveloperSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FGameInputDeviceConfiguration>)     DeviceConfigurations                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FPerPlatformSettings)                      PlatformSpecificSettings                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bDoNotProcessDuplicateCapabilitiesForSingleUser             OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/GameInputBase.GameInputDeviceIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameInputDeviceIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  VendorId                                                    OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  ProductId                                                   OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/GameInputBase.GameInputControllerAxisData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameInputControllerAxisData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     KeyName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     DeadZone                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Scalar                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsPackedPositveAndNegative                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/GameInputBase.GameInputRawDeviceReportData
/// Size: 0x0068 (0x000000 - 0x000068)
class FGameInputRawDeviceReportData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     KeyName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(ERawDeviceReportTranslationBehavior)       TranslationBehavior                                         OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(char)                                      AnalogDeadzone                                              OFFSET(get<char>, {0x5, 1, 0, 0})
	DMember(float)                                     Scalar                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TMap<int32_t, FName>)                      ButtonBitMaskMappings                                       OFFSET(get<T>, {0x10, 80, 0, 0})
	DMember(char)                                      LowerBitAxisIndex                                           OFFSET(get<char>, {0x60, 1, 0, 0})
	DMember(char)                                      HigherBitAxisIndex                                          OFFSET(get<char>, {0x61, 1, 0, 0})
};

/// Struct /Script/GameInputBase.GameInputDeviceConfiguration
/// Size: 0x0118 (0x000000 - 0x000118)
class FGameInputDeviceConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FGameInputDeviceIdentifier)                DeviceIdentifier                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bOverrideHardwareDeviceIdString                             OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FString)                                   OverriddenHardwareDeviceId                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bProcessControllerButtons                                   OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bProcessControllerSwitchState                               OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bProcessControllerAxis                                      OFFSET(get<bool>, {0x1A, 1, 0, 0})
	CMember(TMap<uint32_t, FName>)                     ControllerButtonMappingData                                 OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TMap<uint32_t, FGameInputControllerAxisData>) ControllerAxisMappingData                                OFFSET(get<T>, {0x70, 80, 0, 0})
	DMember(bool)                                      bProcessRawReportData                                       OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(uint32_t)                                  RawReportReadingId                                          OFFSET(get<uint32_t>, {0xC4, 4, 0, 0})
	CMember(TMap<int32_t, FGameInputRawDeviceReportData>) RawReportMappingData                                     OFFSET(get<T>, {0xC8, 80, 0, 0})
};

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

