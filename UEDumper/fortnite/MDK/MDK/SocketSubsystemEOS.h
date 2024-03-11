
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/SocketSubsystemEOS.NetConnectionEOS
/// Size: 0x0008 (0x001E90 - 0x001E98)
class UNetConnectionEOS : public UIpConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7832;

public:
};

/// Class /Script/SocketSubsystemEOS.NetDriverEOSBase
/// Size: 0x0008 (0x0008E8 - 0x0008F0)
class UNetDriverEOSBase : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	DMember(bool)                                      bIsPassthrough                                              OFFSET(get<bool>, {0x8E8, 1, 0, 0})
	DMember(bool)                                      bIsUsingP2PSockets                                          OFFSET(get<bool>, {0x8E9, 1, 0, 0})
};

