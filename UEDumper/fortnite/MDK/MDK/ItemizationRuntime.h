
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortImGuiCore
/// dependency: ItemizationCoreRuntime

/// Class /Script/ItemizationRuntime.InventoryDebugMenu
/// Size: 0x0080 (0x0004C0 - 0x000540)
class AInventoryDebugMenu : public AImGuiDebugMenuBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(class AActor*)                             MonitoredActor                                              OFFSET(get<T>, {0x4B8, 8, 0, 0})
	SMember(FInventoryCollectionDebugSnapshot)         ServerDebugSnapshot                                         OFFSET(getStruct<T>, {0x4C0, 48, 0, 0})
	SMember(FFortInventoryDebugSnapshot)               ServerDebugSnapshot_FortInventory                           OFFSET(getStruct<T>, {0x4F0, 72, 0, 0})
	DMember(int32_t)                                   SelectedInventoryIndex                                      OFFSET(get<int32_t>, {0x538, 4, 0, 0})
	DMember(bool)                                      bDisplayClient                                              OFFSET(get<bool>, {0x53C, 1, 0, 0})
	DMember(bool)                                      bDisplayServer                                              OFFSET(get<bool>, {0x53D, 1, 0, 0})
	DMember(bool)                                      bDisplayFortInventories                                     OFFSET(get<bool>, {0x53E, 1, 0, 0})
	DMember(bool)                                      bDisplayInventoryCollections                                OFFSET(get<bool>, {0x53F, 1, 0, 0})


	/// Functions
	// Function /Script/ItemizationRuntime.InventoryDebugMenu.ServerSetMonitoredActor
	// void ServerSetMonitoredActor(class AActor* ActorToMonitor);                                                              // [0x6ad0820] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ItemizationRuntime.InventoryDebugMenu.ServerClose
	// void ServerClose();                                                                                                      // [0x21dc214] Final|Net|NetReliableNative|Event|Private|NetServer 
};

/// Class /Script/ItemizationRuntime.ItemGamePickup
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AItemGamePickup : public AItemPickup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Struct /Script/ItemizationRuntime.ItemDebugSnapshot
/// Size: 0x0038 (0x000000 - 0x000038)
class FItemDebugSnapshot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Attributes                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     ItemId                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int64_t)                                   SlotNumber                                                  OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   StackSize                                                   OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	CMember(class UItemDefinitionBase*)                ItemDefinition                                              OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/ItemizationRuntime.InventoryDebugSnapshot
/// Size: 0x0030 (0x000000 - 0x000030)
class FInventoryDebugSnapshot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   InventoryName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InventoryID                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FItemDebugSnapshot>)                Items                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ItemizationRuntime.InventoryCollectionDebugSnapshot
/// Size: 0x0030 (0x000000 - 0x000030)
class FInventoryCollectionDebugSnapshot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   InventoryCollectionName                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EInventoryCollectionType)                  InventoryCollectionType                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FInventoryDebugSnapshot>)           Inventories                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/ItemizationRuntime.FortInventoryDebugSnapshot
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortInventoryDebugSnapshot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   FortInventoryName                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FInventoryDebugSnapshot)                   Inventory                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x40, 1, 0, 0})
};

