
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/UACCommon.UACNetworkComponent
/// Size: 0x0180 (0x0000A0 - 0x000220)
class UUACNetworkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	DMember(int32_t)                                   PlayerId                                                    OFFSET(get<int32_t>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/UACCommon.UACNetworkComponent.SendPacketToServer
	// void SendPacketToServer(char EnhPacketType, TArray<char> Data);                                                          // [0x7dfb220] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/UACCommon.UACNetworkComponent.SendPacketToClient
	// void SendPacketToClient(char EnhPacketType, TArray<char> Data);                                                          // [0x7dfb148] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/UACCommon.UACNetworkComponent.SendClientHello
	// void SendClientHello(uint32_t SessionKey);                                                                               // [0x7dfb014] Net|NetReliableNative|Event|Public|NetClient 
};

