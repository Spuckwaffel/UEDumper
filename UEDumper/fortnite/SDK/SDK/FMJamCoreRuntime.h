
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Enum /Script/FMJamCoreRuntime.EFMJamLoopType
/// Size: 0x06
enum class EFMJamLoopType : uint8_t
{
	EFMJamLoopType__Lead                                                             = 0,
	EFMJamLoopType__Misc                                                             = 1,
	EFMJamLoopType__Bass                                                             = 2,
	EFMJamLoopType__Beat                                                             = 3,
	EFMJamLoopType__Num                                                              = 4,
	EFMJamLoopType__EFMJamLoopType_MAX                                               = 5
};

/// Class /Script/FMJamCoreRuntime.JamControllerComponent_QuestPersistence
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJamControllerComponent_QuestPersistence : public UFortControllerComponent_QuestPersistence
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

