
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/Rejoin.RejoinCheck
/// Size: 0x0160 (0x000028 - 0x000188)
class URejoinCheck : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(ERejoinStatus)                             LastKnownStatus                                             OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bRejoinAfterCheck                                           OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bAttemptingRejoin                                           OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Enum /Script/Rejoin.ERejoinStatus
/// Size: 0x05
enum class ERejoinStatus : uint8_t
{
	ERejoinStatus__NoMatchToRejoin                                                   = 0,
	ERejoinStatus__RejoinAvailable                                                   = 1,
	ERejoinStatus__UpdatingStatus                                                    = 2,
	ERejoinStatus__NeedsRecheck                                                      = 3,
	ERejoinStatus__NoMatchToRejoin_MatchEnded                                        = 4
};

