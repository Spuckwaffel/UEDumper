
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/CoreOnline.JoinabilitySettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FJoinabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     SessionName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bPublicSearchable                                           OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bAllowInvites                                               OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bJoinViaPresence                                            OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(bool)                                      bJoinViaPresenceFriendsOnly                                 OFFSET(get<bool>, {0x7, 1, 0, 0})
	DMember(int32_t)                                   MaxPlayers                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxPartySize                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/CoreOnline.UniqueNetIdWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
class FUniqueNetIdWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/CoreOnline.ECoreOnlineDummy
/// Size: 0x02
enum class ECoreOnlineDummy : uint8_t
{
	ECoreOnlineDummy__Dummy                                                          = 0,
	ECoreOnlineDummy__ECoreOnlineDummy_MAX                                           = 1
};

