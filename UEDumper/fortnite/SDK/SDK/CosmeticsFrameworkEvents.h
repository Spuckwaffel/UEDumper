
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/CosmeticsFrameworkEvents.ECosmeticsEventBindingFlags
/// Size: 0x04
enum class ECosmeticsEventBindingFlags : uint8_t
{
	ECosmeticsEventBindingFlags__None                                                = 0,
	ECosmeticsEventBindingFlags__ExecuteImmediately                                  = 2,
	ECosmeticsEventBindingFlags__ExecuteOnce                                         = 4,
	ECosmeticsEventBindingFlags__ECosmeticsEventBindingFlags_MAX                     = 5
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsEventRegistrar
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsEventRegistrar : public UInterface
{ 
public:


	/// Functions
	// Function /Script/CosmeticsFrameworkEvents.CosmeticsEventRegistrar.RegisterOnCosmeticApplicationCompleted_BP
	// FCosmeticsEventHandle RegisterOnCosmeticApplicationCompleted_BP(FDelegateProperty& Delegate, int32_t Flags);          // [0x7e36204] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsFinishable
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsFinishable : public UInterface
{ 
public:
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsMeshTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsMeshTarget : public UInterface
{ 
public:
};

/// Class /Script/CosmeticsFrameworkEvents.CosmeticsStreaming
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticsStreaming : public UInterface
{ 
public:
};

/// Struct /Script/CosmeticsFrameworkEvents.CosmeticsEventHandle
/// Size: 0x0001 (0x000000 - 0x000001)
struct FCosmeticsEventHandle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

