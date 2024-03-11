
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ItemizationCoreRuntime
/// dependency: VerseFortnite

/// Class /Script/ItemizationVerse.VerseInventoryCollectionWrapper
/// Size: 0x00F0 (0x000048 - 0x000138)
class UVerseInventoryCollectionWrapper : public UVerseFortniteActorWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TMap<FGuid, UVerseItem*>)                  ItemMap                                                     OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<FGuid, UVerseInventory*>)             InventoryMap                                                OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(TMap<FGuid, UVerseInventory*>)             EquippableInventoryMap                                      OFFSET(get<T>, {0xE8, 80, 0, 0})
};

/// Class /Script/ItemizationVerse.VerseInventory
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UVerseInventory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGuid)                                     InventoryID                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<AInventoryCollection*>)     OwningInventoryCollection                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<UVerseInventoryCollectionWrapper*>) OwningCollectionWrapper                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TSet<FGuid>)                               ItemSetIDSet                                                OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Class /Script/ItemizationVerse.VerseItem
/// Size: 0x0000 (0x000040 - 0x000040)
class UVerseItem : public UItemInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationVerse.VerseItemizationSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UVerseItemizationSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

