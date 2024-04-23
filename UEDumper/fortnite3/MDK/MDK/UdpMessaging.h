
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UUdpMessagingSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      EnabledByDefault                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      EnableTransport                                             OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bAutoRepair                                                 OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     MaxSendRate                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  AutoRepairAttemptLimit                                      OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(uint16_t)                                  WorkQueueSize                                               OFFSET(get<uint16_t>, {0x34, 2, 0, 0})
	DMember(bool)                                      bStopServiceWhenAppDeactivates                              OFFSET(get<bool>, {0x36, 1, 0, 0})
	SMember(FString)                                   UnicastEndpoint                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   MulticastEndpoint                                           OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(EUdpMessageFormat)                         MessageFormat                                               OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(char)                                      MulticastTimeToLive                                         OFFSET(get<char>, {0x59, 1, 0, 0})
	CMember(TArray<FString>)                           StaticEndpoints                                             OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           ExcludedEndpoints                                           OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bShareKnownNodesWithActiveConnections                       OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      EnableTunnel                                                OFFSET(get<bool>, {0x81, 1, 0, 0})
	SMember(FString)                                   TunnelUnicastEndpoint                                       OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   TunnelMulticastEndpoint                                     OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(TArray<FString>)                           RemoteTunnelEndpoints                                       OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FUdpMockMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x06
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX                                         = 5
};

