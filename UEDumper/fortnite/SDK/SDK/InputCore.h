
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/InputCore.ETouchIndex
/// Size: 0x13
enum class ETouchIndex : uint8_t
{
	ETouchIndex__Touch1                                                              = 0,
	ETouchIndex__Touch2                                                              = 1,
	ETouchIndex__Touch3                                                              = 2,
	ETouchIndex__Touch4                                                              = 3,
	ETouchIndex__Touch5                                                              = 4,
	ETouchIndex__Touch6                                                              = 5,
	ETouchIndex__Touch7                                                              = 6,
	ETouchIndex__Touch8                                                              = 7,
	ETouchIndex__Touch9                                                              = 8,
	ETouchIndex__Touch10                                                             = 9,
	ETouchIndex__CursorPointerIndex                                                  = 10,
	ETouchIndex__MAX_TOUCHES                                                         = 11,
	ETouchIndex__ETouchIndex_MAX                                                     = 12
};

/// Enum /Script/InputCore.EControllerHand
/// Size: 0x20
enum class EControllerHand : uint8_t
{
	EControllerHand__Left                                                            = 0,
	EControllerHand__Right                                                           = 1,
	EControllerHand__AnyHand                                                         = 2,
	EControllerHand__Pad                                                             = 3,
	EControllerHand__ExternalCamera                                                  = 4,
	EControllerHand__Gun                                                             = 5,
	EControllerHand__HMD                                                             = 6,
	EControllerHand__Chest                                                           = 7,
	EControllerHand__LeftShoulder                                                    = 8,
	EControllerHand__RightShoulder                                                   = 9,
	EControllerHand__LeftElbow                                                       = 10,
	EControllerHand__RightElbow                                                      = 11,
	EControllerHand__Waist                                                           = 12,
	EControllerHand__LeftKnee                                                        = 13,
	EControllerHand__RightKnee                                                       = 14,
	EControllerHand__LeftFoot                                                        = 15,
	EControllerHand__RightFoot                                                       = 16,
	EControllerHand__Special                                                         = 17,
	EControllerHand__ControllerHand_Count                                            = 18,
	EControllerHand__EControllerHand_MAX                                             = 19
};

/// Enum /Script/InputCore.EConsoleForGamepadLabels
/// Size: 0x04
enum class EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None                                                   = 0,
	EConsoleForGamepadLabels__XBoxOne                                                = 1,
	EConsoleForGamepadLabels__PS4                                                    = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX                           = 3
};

/// Enum /Script/InputCore.ETouchType
/// Size: 0x08
enum class ETouchType : uint8_t
{
	ETouchType__Began                                                                = 0,
	ETouchType__Moved                                                                = 1,
	ETouchType__Stationary                                                           = 2,
	ETouchType__ForceChanged                                                         = 3,
	ETouchType__FirstMove                                                            = 4,
	ETouchType__Ended                                                                = 5,
	ETouchType__NumTypes                                                             = 6,
	ETouchType__ETouchType_MAX                                                       = 7
};

/// Class /Script/InputCore.InputCoreTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputCoreTypes : public UObject
{ 
public:
};

/// Struct /Script/InputCore.Key
/// Size: 0x0018 (0x000000 - 0x000018)
struct FKey
{ 
	FName                                              KeyName;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0004   (0x0014)  MISSED
};

