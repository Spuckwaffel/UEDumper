
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/PacketHandler.HandlerComponentFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UHandlerComponentFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PacketHandler.PacketHandlerProfileConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UPacketHandlerProfileConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           Components                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

