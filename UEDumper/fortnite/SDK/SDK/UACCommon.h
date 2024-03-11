
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/UACCommon.UACNetworkComponent
/// Size: 0x0180 (0x0000A0 - 0x000220)
class UUACNetworkComponent : public UActorComponent
{ 
public:
	int32_t                                            PlayerId;                                                   // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x17C];                                     // 0x00A4   (0x017C)  MISSED


	/// Functions
	// Function /Script/UACCommon.UACNetworkComponent.SendPacketToServer
	// void SendPacketToServer(char EnhPacketType, TArray<char> Data);                                                       // [0x7dfb220] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/UACCommon.UACNetworkComponent.SendPacketToClient
	// void SendPacketToClient(char EnhPacketType, TArray<char> Data);                                                       // [0x7dfb148] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/UACCommon.UACNetworkComponent.SendClientHello
	// void SendClientHello(uint32_t SessionKey);                                                                            // [0x7dfb014] Net|NetReliableNative|Event|Public|NetClient 
};

