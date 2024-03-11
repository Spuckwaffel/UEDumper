
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: InputCore
/// dependency: SlateCore

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

/// Class /Script/CommonInput.CommonInputActionDomain
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonInputActionDomain : public UDataAsset
{ 
public:
	ECommonInputEventFlowBehavior                      Behavior;                                                   // 0x0030   (0x0004)  
	ECommonInputEventFlowBehavior                      InnerBehavior;                                              // 0x0034   (0x0004)  
	bool                                               bUseActionDomainDesiredInputConfig;                         // 0x0038   (0x0001)  
	ECommonInputMode                                   InputMode;                                                  // 0x0039   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x003B   (0x0005)  MISSED
};

/// Class /Script/CommonInput.CommonInputActionDomainTable
/// Size: 0x0018 (0x000030 - 0x000048)
class UCommonInputActionDomainTable : public UDataAsset
{ 
public:
	TArray<class UCommonInputActionDomain*>            ActionDomains;                                              // 0x0030   (0x0010)  
	ECommonInputMode                                   InputMode;                                                  // 0x0040   (0x0001)  
	EMouseCaptureMode                                  MouseCaptureMode;                                           // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Class /Script/CommonInput.CommonUIInputData
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonUIInputData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FDataTableRowHandle                                DefaultClickAction;                                         // 0x0028   (0x0010)  
	FDataTableRowHandle                                DefaultBackAction;                                          // 0x0038   (0x0010)  
	SDK_UNDEFINED(32,1813) /* TWeakObjectPtr<UClass*> */ __um(DefaultHoldData);                                    // 0x0048   (0x0020)  
	class UInputAction*                                EnhancedInputClickAction;                                   // 0x0068   (0x0008)  
	class UInputAction*                                EnhancedInputBackAction;                                    // 0x0070   (0x0008)  
};

/// Struct /Script/CommonInput.InputHoldData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FInputHoldData
{ 
	float                                              HoldTime;                                                   // 0x0000   (0x0004)  
	float                                              HoldRollbackTime;                                           // 0x0004   (0x0004)  
};

/// Class /Script/CommonInput.CommonUIHoldData
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonUIHoldData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FInputHoldData                                     KeyboardAndMouse;                                           // 0x0028   (0x0008)  
	FInputHoldData                                     Gamepad;                                                    // 0x0030   (0x0008)  
	FInputHoldData                                     Touch;                                                      // 0x0038   (0x0008)  
};

/// Struct /Script/CommonInput.InputDeviceIdentifierPair
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInputDeviceIdentifierPair
{ 
	FName                                              InputDeviceName;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1814) /* FString */               __um(HardwareDeviceIdentifier);                             // 0x0008   (0x0010)  
};

/// Struct /Script/CommonInput.CommonInputKeyBrushConfiguration
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FCommonInputKeyBrushConfiguration
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FSlateBrush                                        KeyBrush;                                                   // 0x0020   (0x00C0)  
};

/// Struct /Script/CommonInput.CommonInputKeySetBrushConfiguration
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FCommonInputKeySetBrushConfiguration
{ 
	TArray<FKey>                                       Keys;                                                       // 0x0000   (0x0010)  
	FSlateBrush                                        KeyBrush;                                                   // 0x0010   (0x00C0)  
};

/// Class /Script/CommonInput.CommonInputBaseControllerData
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UCommonInputBaseControllerData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	ECommonInputType                                   InputType;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FName                                              GamepadName;                                                // 0x002C   (0x0004)  
	SDK_UNDEFINED(24,1815) /* FText */                 __um(GamepadDisplayName);                                   // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,1816) /* FText */                 __um(GamepadCategory);                                      // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,1817) /* FText */                 __um(GamepadPlatformName);                                  // 0x0060   (0x0018)  
	TArray<FInputDeviceIdentifierPair>                 GamepadHardwareIdMapping;                                   // 0x0078   (0x0010)  
	SDK_UNDEFINED(32,1818) /* TWeakObjectPtr<UTexture2D*> */ __um(ControllerTexture);                              // 0x0088   (0x0020)  
	SDK_UNDEFINED(32,1819) /* TWeakObjectPtr<UTexture2D*> */ __um(ControllerButtonMaskTexture);                    // 0x00A8   (0x0020)  
	TArray<FCommonInputKeyBrushConfiguration>          InputBrushDataMap;                                          // 0x00C8   (0x0010)  
	TArray<FCommonInputKeySetBrushConfiguration>       InputBrushKeySets;                                          // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
	// TArray<FName> GetRegisteredGamepads();                                                                                // [0x725826c] Final|Native|Static|Public 
};

/// Class /Script/CommonInput.CommonInputPlatformSettings
/// Size: 0x0030 (0x000040 - 0x000070)
class UCommonInputPlatformSettings : public UPlatformSettings
{ 
public:
	ECommonInputType                                   DefaultInputType;                                           // 0x0040   (0x0001)  
	bool                                               bSupportsMouseAndKeyboard;                                  // 0x0041   (0x0001)  
	bool                                               bSupportsTouch;                                             // 0x0042   (0x0001)  
	bool                                               bSupportsGamepad;                                           // 0x0043   (0x0001)  
	FName                                              DefaultGamepadName;                                         // 0x0044   (0x0004)  
	bool                                               bCanChangeGamepadType;                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(16,1820) /* TArray<TWeakObjectPtr<UClass*>> */ __um(ControllerData);                             // 0x0050   (0x0010)  
	TArray<class UClass*>                              ControllerDataClasses;                                      // 0x0060   (0x0010)  
};

/// Class /Script/CommonInput.CommonInputSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UCommonInputSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(32,1821) /* TWeakObjectPtr<UClass*> */ __um(InputData);                                          // 0x0030   (0x0020)  
	FPerPlatformSettings                               PlatformInput;                                              // 0x0050   (0x0010)  
	SDK_UNDEFINED(80,1822) /* TMap<FName, FCommonInputPlatformBaseData> */ __um(CommonInputPlatformData);          // 0x0060   (0x0050)  
	bool                                               bEnableInputMethodThrashingProtection;                      // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	int32_t                                            InputMethodThrashingLimit;                                  // 0x00B4   (0x0004)  
	double                                             InputMethodThrashingWindowInSeconds;                        // 0x00B8   (0x0008)  
	double                                             InputMethodThrashingCooldownInSeconds;                      // 0x00C0   (0x0008)  
	bool                                               bAllowOutOfFocusDeviceInput;                                // 0x00C8   (0x0001)  
	bool                                               bEnableDefaultInputConfig;                                  // 0x00C9   (0x0001)  
	bool                                               bEnableEnhancedInputSupport;                                // 0x00CA   (0x0001)  
	bool                                               bEnableAutomaticGamepadTypeDetection;                       // 0x00CB   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	SDK_UNDEFINED(32,1823) /* TWeakObjectPtr<UCommonInputActionDomainTable*> */ __um(ActionDomainTable);           // 0x00D0   (0x0020)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00F0   (0x0008)  MISSED
	class UClass*                                      InputDataClass;                                             // 0x00F8   (0x0008)  
	class UCommonInputActionDomainTable*               ActionDomainTablePtr;                                       // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled
	// bool IsEnhancedInputSupportEnabled();                                                                                 // [0x7258298] Final|Native|Static|Public 
};

/// Class /Script/CommonInput.CommonInputSubsystem
/// Size: 0x00D8 (0x000030 - 0x000108)
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0x38];                                      // 0x0030   (0x0038)  MISSED
	SDK_UNDEFINED(16,1824) /* FMulticastInlineDelegate */ __um(OnInputMethodChanged);                              // 0x0068   (0x0010)  
	int32_t                                            NumberOfInputMethodChangesRecently;                         // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	double                                             LastInputMethodChangeTime;                                  // 0x0080   (0x0008)  
	double                                             LastTimeInputMethodThrashingBegan;                          // 0x0088   (0x0008)  
	ECommonInputType                                   LastInputType;                                              // 0x0090   (0x0001)  
	ECommonInputType                                   CurrentInputType;                                           // 0x0091   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0092   (0x0002)  MISSED
	FName                                              GamepadInputType;                                           // 0x0094   (0x0004)  
	SDK_UNDEFINED(80,1825) /* TMap<FName, ECommonInputType> */ __um(CurrentInputLocks);                            // 0x0098   (0x0050)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x00E8   (0x0008)  MISSED
	class UCommonInputActionDomainTable*               ActionDomainTable;                                          // 0x00F0   (0x0008)  
	bool                                               bIsGamepadSimulatedClick;                                   // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_6[0xF];                                       // 0x00F9   (0x000F)  MISSED


	/// Functions
	// Function /Script/CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	// bool ShouldShowInputKeys();                                                                                           // [0x725847c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.SetGamepadInputType
	// void SetGamepadInputType(FName InGamepadInputType);                                                                   // [0x72583fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.SetCurrentInputType
	// void SetCurrentInputType(ECommonInputType NewInputType);                                                              // [0x725837c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputSubsystem.IsUsingPointerInput
	// bool IsUsingPointerInput();                                                                                           // [0x725834c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.IsInputMethodActive
	// bool IsInputMethodActive(ECommonInputType InputMethod);                                                               // [0x72582bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetDefaultInputType
	// ECommonInputType GetDefaultInputType();                                                                               // [0x7258244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentInputType
	// ECommonInputType GetCurrentInputType();                                                                               // [0x30acc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.GetCurrentGamepadName
	// FName GetCurrentGamepadName();                                                                                        // [0x3ed1390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputSubsystem.BroadcastInputMethodChanged
	// void BroadcastInputMethodChanged();                                                                                   // [0x7258230] Final|Native|Protected 
};

/// Struct /Script/CommonInput.CommonInputPlatformBaseData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCommonInputPlatformBaseData
{ 
	ECommonInputType                                   DefaultInputType;                                           // 0x0008   (0x0001)  
	bool                                               bSupportsMouseAndKeyboard;                                  // 0x0009   (0x0001)  
	bool                                               bSupportsGamepad;                                           // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x000B   (0x0001)  MISSED
	FName                                              DefaultGamepadName;                                         // 0x000C   (0x0004)  
	bool                                               bCanChangeGamepadType;                                      // 0x0010   (0x0001)  
	bool                                               bSupportsTouch;                                             // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	SDK_UNDEFINED(16,1826) /* TArray<TWeakObjectPtr<UClass*>> */ __um(ControllerData);                             // 0x0018   (0x0010)  
	TArray<class UClass*>                              ControllerDataClasses;                                      // 0x0028   (0x0010)  
};

