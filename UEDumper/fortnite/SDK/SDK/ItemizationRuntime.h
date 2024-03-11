
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortImGuiCore
/// dependency: ItemizationCoreRuntime

/// Struct /Script/ItemizationRuntime.ItemDebugSnapshot
/// Size: 0x0038 (0x000000 - 0x000038)
struct FItemDebugSnapshot
{ 
	SDK_UNDEFINED(16,14336) /* FString */              __um(Attributes);                                           // 0x0000   (0x0010)  
	FGuid                                              ItemId;                                                     // 0x0010   (0x0010)  
	int64_t                                            SlotNumber;                                                 // 0x0020   (0x0008)  
	int64_t                                            StackSize;                                                  // 0x0028   (0x0008)  
	class UItemDefinitionBase*                         ItemDefinition;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/ItemizationRuntime.InventoryDebugSnapshot
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInventoryDebugSnapshot
{ 
	SDK_UNDEFINED(16,14337) /* FString */              __um(InventoryName);                                        // 0x0000   (0x0010)  
	FGuid                                              InventoryID;                                                // 0x0010   (0x0010)  
	TArray<FItemDebugSnapshot>                         Items;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ItemizationRuntime.InventoryCollectionDebugSnapshot
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInventoryCollectionDebugSnapshot
{ 
	SDK_UNDEFINED(16,14338) /* FString */              __um(InventoryCollectionName);                              // 0x0000   (0x0010)  
	EInventoryCollectionType                           InventoryCollectionType;                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FInventoryDebugSnapshot>                    Inventories;                                                // 0x0018   (0x0010)  
	bool                                               bIsValid;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ItemizationRuntime.FortInventoryDebugSnapshot
/// Size: 0x0048 (0x000000 - 0x000048)
struct FFortInventoryDebugSnapshot
{ 
	SDK_UNDEFINED(16,14339) /* FString */              __um(FortInventoryName);                                    // 0x0000   (0x0010)  
	FInventoryDebugSnapshot                            Inventory;                                                  // 0x0010   (0x0030)  
	bool                                               bIsValid;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/ItemizationRuntime.InventoryDebugMenu
/// Size: 0x0080 (0x0004C0 - 0x000540)
class AInventoryDebugMenu : public AImGuiDebugMenuBase
{ 
public:
	class AActor*                                      MonitoredActor;                                             // 0x04B8   (0x0008)  
	FInventoryCollectionDebugSnapshot                  ServerDebugSnapshot;                                        // 0x04C0   (0x0030)  
	FFortInventoryDebugSnapshot                        ServerDebugSnapshot_FortInventory;                          // 0x04F0   (0x0048)  
	int32_t                                            SelectedInventoryIndex;                                     // 0x0538   (0x0004)  
	bool                                               bDisplayClient;                                             // 0x053C   (0x0001)  
	bool                                               bDisplayServer;                                             // 0x053D   (0x0001)  
	bool                                               bDisplayFortInventories;                                    // 0x053E   (0x0001)  
	bool                                               bDisplayInventoryCollections;                               // 0x053F   (0x0001)  


	/// Functions
	// Function /Script/ItemizationRuntime.InventoryDebugMenu.ServerSetMonitoredActor
	// void ServerSetMonitoredActor(class AActor* ActorToMonitor);                                                           // [0x6ad0820] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/ItemizationRuntime.InventoryDebugMenu.ServerClose
	// void ServerClose();                                                                                                   // [0x21dc214] Final|Net|NetReliableNative|Event|Private|NetServer 
};

/// Class /Script/ItemizationRuntime.ItemGamePickup
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AItemGamePickup : public AItemPickup
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B8   (0x0008)  MISSED
};

