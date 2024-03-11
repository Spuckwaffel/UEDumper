
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: VerseNative

/// Class /Script/VerseSimulation.VerseAgent
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerseAgent : public UVersePersistentVarWeakMapKey
{ 
public:
	SDK_UNDEFINED(8,9368) /* TWeakObjectPtr<AController*> */ __um(Controller);                                     // 0x0028   (0x0008)  
};

/// Class /Script/VerseSimulation.VerseTeam
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseTeam : public UObject
{ 
public:
};

/// Class /Script/VerseSimulation.VerseSimulationSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UVerseSimulationSubsystem : public UWorldSubsystem
{ 
public:
	SDK_UNDEFINED(80,9369) /* TMap<TWeakObjectPtr<AController*>, UVerseAgent*> */ __um(TrackedAgents);             // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Struct /Script/VerseSimulation.LocalizableMessageParameterAgent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLocalizableMessageParameterAgent
{ 
	FUniqueNetIdRepl                                   Value;                                                      // 0x0000   (0x0030)  
	uint64_t                                           PawnNetGuid;                                                // 0x0030   (0x0008)  
};

