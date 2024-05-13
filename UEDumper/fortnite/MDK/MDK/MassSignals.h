
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MassEntity

/// Class /Script/MassSignals.MassSignalProcessorBase
/// Size: 0x0360 (0x0000C0 - 0x000420)
class UMassSignalProcessorBase : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
};

/// Class /Script/MassSignals.MassSignalSubsystem
/// Size: 0x0068 (0x000048 - 0x0000B0)
class UMassSignalSubsystem : public UMassTickableSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class UWorld*)                             CachedWorld                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
};

