
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ItemizationCoreRuntime
/// dependency: VerseFortnite

/// Class /Script/ItemizationVerse.VerseInventoryCollectionWrapper
/// Size: 0x00F0 (0x000048 - 0x000138)
class UVerseInventoryCollectionWrapper : public UVerseFortniteActorWrapper
{ 
public:
	SDK_UNDEFINED(80,9327) /* TMap<FGuid, UVerseItem*> */ __um(ItemMap);                                           // 0x0048   (0x0050)  
	SDK_UNDEFINED(80,9328) /* TMap<FGuid, UVerseInventory*> */ __um(InventoryMap);                                 // 0x0098   (0x0050)  
	SDK_UNDEFINED(80,9329) /* TMap<FGuid, UVerseInventory*> */ __um(EquippableInventoryMap);                       // 0x00E8   (0x0050)  
};

/// Class /Script/ItemizationVerse.VerseInventory
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UVerseInventory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGuid                                              InventoryID;                                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(8,9330) /* TWeakObjectPtr<AInventoryCollection*> */ __um(OwningInventoryCollection);             // 0x0038   (0x0008)  
	SDK_UNDEFINED(8,9331) /* TWeakObjectPtr<UVerseInventoryCollectionWrapper*> */ __um(OwningCollectionWrapper);   // 0x0040   (0x0008)  
	SDK_UNDEFINED(80,9332) /* TSet<FGuid> */           __um(ItemSetIDSet);                                         // 0x0048   (0x0050)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0098   (0x0010)  MISSED
};

/// Class /Script/ItemizationVerse.VerseItem
/// Size: 0x0000 (0x000040 - 0x000040)
class UVerseItem : public UItemInstance
{ 
public:
};

/// Class /Script/ItemizationVerse.VerseItemizationSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UVerseItemizationSubsystem : public UWorldSubsystem
{ 
public:
};

