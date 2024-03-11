
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

/// Enum /Script/CoreOnline.ECoreOnlineDummy
/// Size: 0x02
enum class ECoreOnlineDummy : uint8_t
{
	ECoreOnlineDummy__Dummy                                                          = 0,
	ECoreOnlineDummy__ECoreOnlineDummy_MAX                                           = 1
};

/// Struct /Script/CoreOnline.JoinabilitySettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FJoinabilitySettings
{ 
	FName                                              SessionName;                                                // 0x0000   (0x0004)  
	bool                                               bPublicSearchable;                                          // 0x0004   (0x0001)  
	bool                                               bAllowInvites;                                              // 0x0005   (0x0001)  
	bool                                               bJoinViaPresence;                                           // 0x0006   (0x0001)  
	bool                                               bJoinViaPresenceFriendsOnly;                                // 0x0007   (0x0001)  
	int32_t                                            MaxPlayers;                                                 // 0x0008   (0x0004)  
	int32_t                                            MaxPartySize;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/CoreOnline.UniqueNetIdWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
struct FUniqueNetIdWrapper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

