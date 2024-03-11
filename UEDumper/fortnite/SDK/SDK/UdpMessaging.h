
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

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

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UUdpMessagingSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               EnabledByDefault;                                           // 0x0028   (0x0001)  
	bool                                               EnableTransport;                                            // 0x0029   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x002A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              MaxSendRate;                                                // 0x002C   (0x0004)  
	uint32_t                                           AutoRepairAttemptLimit;                                     // 0x0030   (0x0004)  
	uint16_t                                           WorkQueueSize;                                              // 0x0034   (0x0002)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x0036   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0037   (0x0001)  MISSED
	SDK_UNDEFINED(16,15708) /* FString */              __um(UnicastEndpoint);                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,15709) /* FString */              __um(MulticastEndpoint);                                    // 0x0048   (0x0010)  
	EUdpMessageFormat                                  MessageFormat;                                              // 0x0058   (0x0001)  
	char                                               MulticastTimeToLive;                                        // 0x0059   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x005A   (0x0006)  MISSED
	SDK_UNDEFINED(16,15710) /* TArray<FString> */      __um(StaticEndpoints);                                      // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,15711) /* TArray<FString> */      __um(ExcludedEndpoints);                                    // 0x0070   (0x0010)  
	bool                                               bShareKnownNodesWithActiveConnections;                      // 0x0080   (0x0001)  
	bool                                               EnableTunnel;                                               // 0x0081   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x0082   (0x0006)  MISSED
	SDK_UNDEFINED(16,15712) /* FString */              __um(TunnelUnicastEndpoint);                                // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,15713) /* FString */              __um(TunnelMulticastEndpoint);                              // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,15714) /* TArray<FString> */      __um(RemoteTunnelEndpoints);                                // 0x00A8   (0x0010)  
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUdpMockMessage
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

