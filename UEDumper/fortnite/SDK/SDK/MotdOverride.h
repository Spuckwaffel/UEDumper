
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Enum /Script/MotdOverride.EMotdCloseReason
/// Size: 0x08
enum class EMotdCloseReason : uint8_t
{
	EMotdCloseReason__Unknown                                                        = 0,
	EMotdCloseReason__NoMotds                                                        = 1,
	EMotdCloseReason__NullPrm                                                        = 2,
	EMotdCloseReason__PrmParsingFailed                                               = 3,
	EMotdCloseReason__User                                                           = 4,
	EMotdCloseReason__Action                                                         = 5,
	EMotdCloseReason__DeepLink                                                       = 6,
	EMotdCloseReason__EMotdCloseReason_MAX                                           = 7
};

/// Class /Script/MotdOverride.MotdWidgetBase
/// Size: 0x0018 (0x000400 - 0x000418)
class UMotdWidgetBase : public UCommonActivatableWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0400   (0x0018)  MISSED
};

