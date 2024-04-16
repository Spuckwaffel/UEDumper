
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsEventRegistrar
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsEventRegistrar : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CosmeticsFrameworkEvents.CosmeticsEventRegistrar.RegisterOnCosmeticApplicationCompleted_BP
	// FCosmeticsEventHandle RegisterOnCosmeticApplicationCompleted_BP(FDelegateProperty& Delegate, int32_t Flags);             // [0x83e3538] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsFinishable
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsFinishable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsMeshTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsMeshTarget : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsStreaming
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsStreaming : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/CosmeticsFrameworkEvents.CosmeticsEventHandle
/// Size: 0x0001 (0x000000 - 0x000001)
class FCosmeticsEventHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/CosmeticsFrameworkEvents.ECosmeticsEventBindingFlags
/// Size: 0x04
enum class ECosmeticsEventBindingFlags : uint8_t
{
	ECosmeticsEventBindingFlags__None                                                = 0,
	ECosmeticsEventBindingFlags__ExecuteImmediately                                  = 2,
	ECosmeticsEventBindingFlags__ExecuteOnce                                         = 4,
	ECosmeticsEventBindingFlags__ECosmeticsEventBindingFlags_MAX                     = 5
};

