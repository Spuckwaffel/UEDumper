
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ForwardingChannels.ForwardingChannelFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UForwardingChannelFactory : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ForwardingChannels.ForwardingChannelsSubsystem
/// Size: 0x0068 (0x000030 - 0x000098)
class UForwardingChannelsSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<TScriptInterface<Class>>)           ForwardingChannelFactories                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

