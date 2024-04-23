
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/UniversalObjectLocator.DirectPathObjectLocator
/// Size: 0x0018 (0x000000 - 0x000018)
class FDirectPathObjectLocator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSoftObjectPath)                           Path                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/UniversalObjectLocator.SubObjectLocator
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubObjectLocator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   PathWithinContext                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocator
/// Size: 0x0010 (0x000000 - 0x000010)
class FUniversalObjectLocator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FUniversalObjectLocatorFragment>)   Fragments                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocatorFragment
/// Size: 0x0020 (0x000000 - 0x000020)
class FUniversalObjectLocatorFragment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/UniversalObjectLocator.UniversalObjectLocatorEmptyPayload
/// Size: 0x0001 (0x000000 - 0x000001)
class FUniversalObjectLocatorEmptyPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/UniversalObjectLocator.ELocatorResolveFlags
/// Size: 0x07
enum class ELocatorResolveFlags : uint8_t
{
	ELocatorResolveFlags__None                                                       = 0,
	ELocatorResolveFlags__Load                                                       = 1,
	ELocatorResolveFlags__Unload                                                     = 2,
	ELocatorResolveFlags__Async                                                      = 4,
	ELocatorResolveFlags__WillWait                                                   = 8,
	ELocatorResolveFlags__AsyncWait                                                  = 12,
	ELocatorResolveFlags__ELocatorResolveFlags_MAX                                   = 13
};

