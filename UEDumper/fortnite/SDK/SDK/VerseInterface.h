
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

/// Enum /Script/VerseInterface.ESolarisDebugMessageClientId
/// Size: 0x02
enum class ESolarisDebugMessageClientId : uint32_t
{
	ESolarisDebugMessageClientId__None                                               = 0,
	ESolarisDebugMessageClientId__Max                                                = 2147483646
};

/// Enum /Script/VerseInterface.ESolarisDebugMessageCommand
/// Size: 0x05
enum class ESolarisDebugMessageCommand : uint32_t
{
	ESolarisDebugMessageCommand__Connect                                             = 0,
	ESolarisDebugMessageCommand__Disconnect                                          = 1,
	ESolarisDebugMessageCommand__Message                                             = 2,
	ESolarisDebugMessageCommand__PackageMapping                                      = 3,
	ESolarisDebugMessageCommand__ESolarisDebugMessageCommand_MAX                     = 4
};

/// Struct /Script/VerseInterface.SolarisDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSolarisDebugMessage
{ 
	ESolarisDebugMessageClientId                       ClientId;                                                   // 0x0000   (0x0004)  
	ESolarisDebugMessageCommand                        Command;                                                    // 0x0004   (0x0004)  
	TArray<char>                                       MessageBodyUTF8;                                            // 0x0008   (0x0010)  
};

