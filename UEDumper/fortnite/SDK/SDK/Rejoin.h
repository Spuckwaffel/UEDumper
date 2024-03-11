
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/Rejoin.ERejoinStatus
/// Size: 0x06
enum class ERejoinStatus : uint8_t
{
	ERejoinStatus__NoMatchToRejoin                                                   = 0,
	ERejoinStatus__RejoinAvailable                                                   = 1,
	ERejoinStatus__UpdatingStatus                                                    = 2,
	ERejoinStatus__NeedsRecheck                                                      = 3,
	ERejoinStatus__NoMatchToRejoin_MatchEnded                                        = 4,
	ERejoinStatus__ERejoinStatus_MAX                                                 = 5
};

/// Class /Script/Rejoin.RejoinCheck
/// Size: 0x0160 (0x000028 - 0x000188)
class URejoinCheck : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	ERejoinStatus                                      LastKnownStatus;                                            // 0x0028   (0x0001)  
	bool                                               bRejoinAfterCheck;                                          // 0x0029   (0x0001)  
	bool                                               bAttemptingRejoin;                                          // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x15D];                                     // 0x002B   (0x015D)  MISSED
};

