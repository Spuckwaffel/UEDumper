
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/VerseInterface.SolarisDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
class FSolarisDebugMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ESolarisDebugMessageClientId)              ClientId                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ESolarisDebugMessageCommand)               Command                                                     OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<char>)                              MessageBodyUTF8                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/VerseInterface.ESolarisDebugMessageClientId
/// Size: 0x02
enum class ESolarisDebugMessageClientId : uint32_t
{
	ESolarisDebugMessageClientId__None                                               = 0,
	ESolarisDebugMessageClientId__Max                                                = 2147483646
};

/// Enum /Script/VerseInterface.ESolarisDebugMessageCommand
/// Size: 0x04
enum class ESolarisDebugMessageCommand : uint32_t
{
	ESolarisDebugMessageCommand__Connect                                             = 0,
	ESolarisDebugMessageCommand__Disconnect                                          = 1,
	ESolarisDebugMessageCommand__Message                                             = 2,
	ESolarisDebugMessageCommand__PackageMapping                                      = 3
};

