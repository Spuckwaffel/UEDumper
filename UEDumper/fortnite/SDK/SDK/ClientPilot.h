
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Class /Script/ClientPilot.ClientPilotBlackboard
/// Size: 0x0050 (0x000028 - 0x000078)
class UClientPilotBlackboard : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Class /Script/ClientPilot.ClientPilotBlackboardManager
/// Size: 0x0008 (0x000028 - 0x000030)
class UClientPilotBlackboardManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	class UClientPilotBlackboard*                      PilotBlackboard;                                            // 0x0028   (0x0008)  
};

/// Class /Script/ClientPilot.ClientPilotComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UClientPilotComponent : public UObject
{ 
public:
};

