
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: InputCore
/// dependency: SlateCore

/// Class /Script/CommonInput.CommonInputActionDomain
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonInputActionDomain : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ECommonInputEventFlowBehavior)             Behavior                                                    OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(ECommonInputEventFlowBehavior)             InnerBehavior                                               OFFSET(get<T>, {0x34, 4, 0, 0})
	DMember(bool)                                      bUseActionDomainDesiredInputConfig                          OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(ECommonInputMode)                          InputMode                                                   OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(EMouseCaptureMode)                         MouseCaptureMode                                            OFFSET(get<T>, {0x3A, 1, 0, 0})
};

/// Class /Script/CommonInput.CommonInputActionDomainTable
/// Size: 0x0018 (0x000030 - 0x000048)
class UCommonInputActionDomainTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UCommonInputActionDomain*>)   ActionDomains                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(ECommonInputMode)                          InputMode                                                   OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EMouseCaptureMode)                         MouseCaptureMode                                            OFFSET(get<T>, {0x41, 1, 0, 0})
};

/// Class /Script/CommonInput.CommonUIInputData
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonUIInputData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FDataTableRowHandle)                       DefaultClickAction                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DefaultBackAction                                           OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultHoldData                                             OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(class UInputAction*)                       EnhancedInputClickAction                                    OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UInputAction*)                       EnhancedInputBackAction                                     OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/CommonInput.CommonUIHoldData
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonUIHoldData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FInputHoldData)                            KeyboardAndMouse                                            OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FInputHoldData)                            Gamepad                                                     OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FInputHoldData)                            Touch                                                       OFFSET(getStruct<T>, {0x38, 8, 0, 0})
};

/// Class /Script/CommonInput.CommonInputBaseControllerData
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UCommonInputBaseControllerData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ECommonInputType)                          InputType                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FName)                                     GamepadName                                                 OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FText)                                     GamepadDisplayName                                          OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     GamepadCategory                                             OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FText)                                     GamepadPlatformName                                         OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<FInputDeviceIdentifierPair>)        GamepadHardwareIdMapping                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               ControllerTexture                                           OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               ControllerButtonMaskTexture                                 OFFSET(get<T>, {0x90, 32, 0, 0})
	CMember(TArray<FCommonInputKeyBrushConfiguration>) InputBrushDataMap                                           OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FCommonInputKeySetBrushConfiguration>) InputBrushKeySets                                        OFFSET(get<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
	// TArray<FName> GetRegisteredGamepads();                                                                                   // [0x779d61c] Final|Native|Static|Public 
};

/// Class /Script/CommonInput.CommonInputPlatformSettings
/// Size: 0x0030 (0x000040 - 0x000070)
class UCommonInputPlatformSettings : public UPlatformSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(ECommonInputType)                          DefaultInputType                                            OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bSupportsMouseAndKeyboard                                   OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bSupportsTouch                                              OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bSupportsGamepad                                            OFFSET(get<bool>, {0x43, 1, 0, 0})
	SMember(FName)                                     DefaultGamepadName                                          OFFSET(getStruct<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bCanChangeGamepadType                                       OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           ControllerData                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ControllerDataClasses                                       OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/CommonInput.CommonInputSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UCommonInputSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TWeakObjectPtr<UClass*>)                   InputData                                                   OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FPerPlatformSettings)                      PlatformInput                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TMap<FName, FCommonInputPlatformBaseData>) CommonInputPlatformData                                     OFFSET(get<T>, {0x60, 80, 0, 0})
	DMember(bool)                                      bEnableInputMethodThrashingProtection                       OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(int32_t)                                   InputMethodThrashingLimit                                   OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(double)                                    InputMethodThrashingWindowInSeconds                         OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    InputMethodThrashingCooldownInSeconds                       OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bAllowOutOfFocusDeviceInput                                 OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bEnableDefaultInputConfig                                   OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(bool)                                      bEnableEnhancedInputSupport                                 OFFSET(get<bool>, {0xCA, 1, 0, 0})
	DMember(bool)                                      bEnableAutomaticGamepadTypeDetection                        OFFSET(get<bool>, {0xCB, 1, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomainTable*>) ActionDomainTable                                      OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(class UClass*)                             InputDataClass                                              OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(class UCommonInputActionDomainTable*)      ActionDomainTablePtr                                        OFFSET(get<T>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled
	// bool IsEnhancedInputSupportEnabled();                                                                                    // [0x779d648] Final|Native|Static|Public 
};

/// Class /Script/CommonInput.CommonInputSubsystem
/// Size: 0x00D8 (0x000030 - 0x000108)
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnInputMethodChanged                                        OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   NumberOfInputMethodChangesRecently                          OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(double)                                    LastInputMethodChangeTime                                   OFFSET(get<double>, {0x80, 8, 0, 0})
	DMember(double)                                    LastTimeInputMethodThrashingBegan                           OFFSET(get<double>, {0x88, 8, 0, 0})
	CMember(ECommonInputType)                          LastInputType                                               OFFSET(get<T>, {0x90, 1, 0, 0})
	CMember(ECommonInputType)                          CurrentInputType                                            OFFSET(get<T>, {0x91, 1, 0, 0})
	SMember(FName)                                     GamepadInputType                                            OFFSET(getStruct<T>, {0x94, 4, 0, 0})
	CMember(TMap<FName, ECommonInputType>)             CurrentInputLocks                                           OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(class UCommonInputActionDomainTable*)      ActionDomainTable                                           OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bIsGamepadSimulatedClick                                    OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	// bool ShouldShowInputKeys();                                                                                              // [0x779d8f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.SetGamepadInputType
	// void SetGamepadInputType(FName InGamepadInputType);                                                                      // [0x779d7ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.SetCurrentInputType
	// void SetCurrentInputType(ECommonInputType NewInputType);                                                                 // [0x779d72c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.IsUsingPointerInput
	// bool IsUsingPointerInput();                                                                                              // [0x779d6fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.IsInputMethodActive
	// bool IsInputMethodActive(ECommonInputType InputMethod);                                                                  // [0x779d66c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetDefaultInputType
	// ECommonInputType GetDefaultInputType();                                                                                  // [0x779d5f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentInputType
	// ECommonInputType GetCurrentInputType();                                                                                  // [0x3181b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentGamepadName
	// FName GetCurrentGamepadName();                                                                                           // [0x42c4484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.BroadcastInputMethodChanged
	// void BroadcastInputMethodChanged();                                                                                      // [0x779d5e0] Final|Native|Protected 
};

/// Struct /Script/CommonInput.CommonInputKeyBrushConfiguration
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FCommonInputKeyBrushConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateBrush)                               KeyBrush                                                    OFFSET(getStruct<T>, {0x20, 192, 0, 0})
};

/// Struct /Script/CommonInput.CommonInputKeySetBrushConfiguration
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FCommonInputKeySetBrushConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FKey>)                              Keys                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSlateBrush)                               KeyBrush                                                    OFFSET(getStruct<T>, {0x10, 192, 0, 0})
};

/// Struct /Script/CommonInput.InputDeviceIdentifierPair
/// Size: 0x0018 (0x000000 - 0x000018)
class FInputDeviceIdentifierPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputDeviceName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   HardwareDeviceIdentifier                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CommonInput.InputHoldData
/// Size: 0x0008 (0x000000 - 0x000008)
class FInputHoldData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     HoldTime                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HoldRollbackTime                                            OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CommonInput.CommonInputPlatformBaseData
/// Size: 0x0038 (0x000000 - 0x000038)
class FCommonInputPlatformBaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ECommonInputType)                          DefaultInputType                                            OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bSupportsMouseAndKeyboard                                   OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bSupportsGamepad                                            OFFSET(get<bool>, {0xA, 1, 0, 0})
	SMember(FName)                                     DefaultGamepadName                                          OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      bCanChangeGamepadType                                       OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bSupportsTouch                                              OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr<UClass*>>)           ControllerData                                              OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<class UClass*>)                     ControllerDataClasses                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Enum /Script/CommonInput.ECommonInputType
/// Size: 0x05
enum class ECommonInputType : uint8_t
{
	ECommonInputType__MouseAndKeyboard                                               = 0,
	ECommonInputType__Gamepad                                                        = 1,
	ECommonInputType__Touch                                                          = 2,
	ECommonInputType__Count                                                          = 3,
	ECommonInputType__ECommonInputType_MAX                                           = 4
};

/// Enum /Script/CommonInput.ECommonInputMode
/// Size: 0x04
enum class ECommonInputMode : uint8_t
{
	ECommonInputMode__Menu                                                           = 0,
	ECommonInputMode__Game                                                           = 1,
	ECommonInputMode__All                                                            = 2,
	ECommonInputMode__MAX                                                            = 3
};

/// Enum /Script/CommonInput.ECommonInputEventFlowBehavior
/// Size: 0x04
enum class ECommonInputEventFlowBehavior : uint32_t
{
	ECommonInputEventFlowBehavior__BlockIfActive                                     = 0,
	ECommonInputEventFlowBehavior__BlockIfHandled                                    = 1,
	ECommonInputEventFlowBehavior__NeverBlock                                        = 2,
	ECommonInputEventFlowBehavior__ECommonInputEventFlowBehavior_MAX                 = 3
};

