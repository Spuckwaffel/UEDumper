
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore

/// Enum /Script/ThrowingToyRuntime.EThrowingToyItemRemovedReason
/// Size: 0x05
enum class EThrowingToyItemRemovedReason : uint8_t
{
	EThrowingToyItemRemovedReason__None                                              = 0,
	EThrowingToyItemRemovedReason__ManuallyDropped                                   = 1,
	EThrowingToyItemRemovedReason__DeviceForcedDropped                               = 2,
	EThrowingToyItemRemovedReason__DeviceForcedDeleted                               = 3,
	EThrowingToyItemRemovedReason__EThrowingToyItemRemovedReason_MAX                 = 4
};

/// Struct /Script/ThrowingToyRuntime.ThrowingToyData
/// Size: 0x001C (0x00000C - 0x000028)
struct FThrowingToyData : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class AActor*                                      ThrowingToy;                                                // 0x0010   (0x0008)  
	FGuid                                              WorldItemGuid;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/ThrowingToyRuntime.ThrowingToyDataArray
/// Size: 0x0010 (0x000108 - 0x000118)
struct FThrowingToyDataArray : FFastArraySerializer
{ 
	TArray<FThrowingToyData>                           Entries;                                                    // 0x0108   (0x0010)  
};

/// Class /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UThrowingToyTrackerComponent : public UActorComponent
{ 
public:
	FThrowingToyDataArray                              ThrowingToysData;                                           // 0x00A0   (0x0118)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.SetRecentThrowingToyItemRemovedReason
	// void SetRecentThrowingToyItemRemovedReason(EThrowingToyItemRemovedReason RemovedReason);                              // [0xac7567c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetThrowingToy
	// class AActor* GetThrowingToy(FGuid& WorldItemGuid);                                                                   // [0xac755c8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetRecentThrowingToyItemRemovedReason
	// EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason();                                                // [0x8107dc4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetAndReleaseThrowingToy
	// class AActor* GetAndReleaseThrowingToy(FGuid& WorldItemGuid);                                                         // [0xac7552c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.AddThrowingToy
	// void AddThrowingToy(class AActor* ThrowingToyActor, FGuid& WorldItemGuid);                                            // [0xac753f0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

