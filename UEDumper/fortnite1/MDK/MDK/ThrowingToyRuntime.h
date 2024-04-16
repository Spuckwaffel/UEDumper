
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore

/// Class /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UThrowingToyTrackerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FThrowingToyDataArray)                     ThrowingToysData                                            OFFSET(getStruct<T>, {0xA0, 280, 0, 0})


	/// Functions
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.SetRecentThrowingToyItemRemovedReason
	// void SetRecentThrowingToyItemRemovedReason(EThrowingToyItemRemovedReason RemovedReason);                                 // [0xc33b660] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetThrowingToy
	// class AActor* GetThrowingToy(FGuid& WorldItemGuid);                                                                      // [0xc33b5ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetRecentThrowingToyItemRemovedReason
	// EThrowingToyItemRemovedReason GetRecentThrowingToyItemRemovedReason();                                                   // [0x913e4d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.GetAndReleaseThrowingToy
	// class AActor* GetAndReleaseThrowingToy(FGuid& WorldItemGuid);                                                            // [0xc33b510] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ThrowingToyRuntime.ThrowingToyTrackerComponent.AddThrowingToy
	// void AddThrowingToy(class AActor* ThrowingToyActor, FGuid& WorldItemGuid);                                               // [0xc33b394] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/ThrowingToyRuntime.ThrowingToyData
/// Size: 0x001C (0x00000C - 0x000028)
class FThrowingToyData : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class AActor*)                             ThrowingToy                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGuid)                                     WorldItemGuid                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ThrowingToyRuntime.ThrowingToyDataArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FThrowingToyDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FThrowingToyData>)                  Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
};

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

