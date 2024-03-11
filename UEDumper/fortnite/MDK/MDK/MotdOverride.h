
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/MotdOverride.MotdWidgetBase
/// Size: 0x0018 (0x000400 - 0x000418)
class UMotdWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
};

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

