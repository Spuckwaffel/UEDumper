
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: GameplayAbilities
/// dependency: McpProfileSys
/// dependency: NetCore
/// dependency: ProxyTable
/// dependency: VerseGameplayTags

/// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionLoadState
/// Size: 0x13
enum class EInventoryCollectionLoadState : uint8_t
{
	EInventoryCollectionLoadState__Invalid                                           = 0,
	EInventoryCollectionLoadState__Initializing                                      = 1,
	EInventoryCollectionLoadState__WaitingToLoad                                     = 10,
	EInventoryCollectionLoadState__Loading                                           = 11,
	EInventoryCollectionLoadState__Loaded                                            = 12,
	EInventoryCollectionLoadState__WaitingToUnload                                   = 20,
	EInventoryCollectionLoadState__Unloading                                         = 21,
	EInventoryCollectionLoadState__Unloaded                                          = 22,
	EInventoryCollectionLoadState__WaitingToClear                                    = 30,
	EInventoryCollectionLoadState__Clearing                                          = 31,
	EInventoryCollectionLoadState__Cleared                                           = 32,
	EInventoryCollectionLoadState__Ready                                             = 255,
	EInventoryCollectionLoadState__EInventoryCollectionLoadState_MAX                 = 256
};

/// Enum /Script/ItemizationCoreRuntime.EEquipItemLimitHitBehaviour
/// Size: 0x03
enum class EEquipItemLimitHitBehaviour : uint8_t
{
	EEquipItemLimitHitBehaviour__UnequipLeastRecentlyUsed                            = 0,
	EEquipItemLimitHitBehaviour__Block                                               = 1,
	EEquipItemLimitHitBehaviour__EEquipItemLimitHitBehaviour_MAX                     = 2
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveResult
/// Size: 0x05
enum class EVkInventoryMoveResult : uint8_t
{
	EVkInventoryMoveResult__Success                                                  = 0,
	EVkInventoryMoveResult__Failed                                                   = 1,
	EVkInventoryMoveResult__InvalidRequest                                           = 2,
	EVkInventoryMoveResult__NoChange                                                 = 3,
	EVkInventoryMoveResult__EVkInventoryMoveResult_MAX                               = 4
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveBehaviour
/// Size: 0x03
enum class EVkInventoryMoveBehaviour : uint8_t
{
	EVkInventoryMoveBehaviour__SwapSlotNumber                                        = 0,
	EVkInventoryMoveBehaviour__EmplaceSlotNumber                                     = 1,
	EVkInventoryMoveBehaviour__EVkInventoryMoveBehaviour_MAX                         = 2
};

/// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionType
/// Size: 0x03
enum class EInventoryCollectionType : uint8_t
{
	EInventoryCollectionType__Player                                                 = 0,
	EInventoryCollectionType__World                                                  = 1,
	EInventoryCollectionType__EInventoryCollectionType_MAX                           = 2
};

/// Enum /Script/ItemizationCoreRuntime.EInventoryCollectionAccess
/// Size: 0x05
enum class EInventoryCollectionAccess : uint8_t
{
	EInventoryCollectionAccess__None                                                 = 0,
	EInventoryCollectionAccess__Read                                                 = 1,
	EInventoryCollectionAccess__Write                                                = 2,
	EInventoryCollectionAccess__All                                                  = 3,
	EInventoryCollectionAccess__EInventoryCollectionAccess_MAX                       = 4
};

/// Enum /Script/ItemizationCoreRuntime.EItemState
/// Size: 0x05
enum class EItemState : uint8_t
{
	EItemState__NotInInventory                                                       = 0,
	EItemState__InInventory                                                          = 1,
	EItemState__EquippedAndActive                                                    = 2,
	EItemState__NumStates                                                            = 3,
	EItemState__EItemState_MAX                                                       = 4
};

/// Enum /Script/ItemizationCoreRuntime.EItemStateFilter
/// Size: 0x04
enum class EItemStateFilter : uint8_t
{
	EItemStateFilter__Owned                                                          = 0,
	EItemStateFilter__Equipped                                                       = 1,
	EItemStateFilter__EquippedAndActive                                              = 2,
	EItemStateFilter__EItemStateFilter_MAX                                           = 3
};

/// Enum /Script/ItemizationCoreRuntime.EItemAttributeType
/// Size: 0x06
enum class EItemAttributeType : uint8_t
{
	EItemAttributeType__Int                                                          = 0,
	EItemAttributeType__Decimal                                                      = 1,
	EItemAttributeType__Bool                                                         = 2,
	EItemAttributeType__String                                                       = 3,
	EItemAttributeType__Invalid                                                      = 255,
	EItemAttributeType__EItemAttributeType_MAX                                       = 256
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeCombineLogic_Math
/// Size: 0x06
enum class EAttributeCombineLogic_Math : uint8_t
{
	EAttributeCombineLogic_Math__MustMatch                                           = 0,
	EAttributeCombineLogic_Math__UseTarget                                           = 1,
	EAttributeCombineLogic_Math__Average                                             = 2,
	EAttributeCombineLogic_Math__Highest                                             = 3,
	EAttributeCombineLogic_Math__Lowest                                              = 4,
	EAttributeCombineLogic_Math__EAttributeCombineLogic_MAX                          = 5
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicCalculateLogic
/// Size: 0x04
enum class EAttributeBasicCalculateLogic : uint8_t
{
	EAttributeBasicCalculateLogic__ReturnFirstFound                                  = 0,
	EAttributeBasicCalculateLogic__AddAllFound                                       = 1,
	EAttributeBasicCalculateLogic__MultiplyAllFound                                  = 2,
	EAttributeBasicCalculateLogic__EAttributeBasicCalculateLogic_MAX                 = 3
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicFirstFoundLogic
/// Size: 0x03
enum class EAttributeBasicFirstFoundLogic : uint8_t
{
	EAttributeBasicFirstFoundLogic__PrioritizeItemEntry                              = 0,
	EAttributeBasicFirstFoundLogic__PrioritizeComponent                              = 1,
	EAttributeBasicFirstFoundLogic__EAttributeBasicFirstFoundLogic_MAX               = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicNotFoundResult
/// Size: 0x03
enum class EAttributeBasicNotFoundResult : uint8_t
{
	EAttributeBasicNotFoundResult__ReturnInitial                                     = 0,
	EAttributeBasicNotFoundResult__ReturnZero                                        = 1,
	EAttributeBasicNotFoundResult__EAttributeBasicNotFoundResult_MAX                 = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeApplicationRule
/// Size: 0x04
enum class EAttributeApplicationRule : uint8_t
{
	EAttributeApplicationRule__ItemEntryOnly                                         = 0,
	EAttributeApplicationRule__ComponentOnly                                         = 1,
	EAttributeApplicationRule__Anywhere                                              = 2,
	EAttributeApplicationRule__EAttributeApplicationRule_MAX                         = 3
};

/// Enum /Script/ItemizationCoreRuntime.EItemIconDisplayTextType
/// Size: 0x04
enum class EItemIconDisplayTextType : uint8_t
{
	EItemIconDisplayTextType__StackSize                                              = 0,
	EItemIconDisplayTextType__PrimaryAmmo                                            = 1,
	EItemIconDisplayTextType__None                                                   = 2,
	EItemIconDisplayTextType__EItemIconDisplayTextType_MAX                           = 3
};

/// Enum /Script/ItemizationCoreRuntime.EItemizationPersistenceRequestType
/// Size: 0x06
enum class EItemizationPersistenceRequestType : uint8_t
{
	EItemizationPersistenceRequestType__Invalid                                      = 0,
	EItemizationPersistenceRequestType__Load                                         = 1,
	EItemizationPersistenceRequestType__Unload                                       = 2,
	EItemizationPersistenceRequestType__Clear                                        = 3,
	EItemizationPersistenceRequestType__Store                                        = 4,
	EItemizationPersistenceRequestType__EItemizationPersistenceRequestType_MAX       = 5
};

/// Enum /Script/ItemizationCoreRuntime.EItemizationPersistenceResponseType
/// Size: 0x05
enum class EItemizationPersistenceResponseType : uint8_t
{
	EItemizationPersistenceResponseType__Invalid                                     = 0,
	EItemizationPersistenceResponseType__NoPersistenceManager                        = 1,
	EItemizationPersistenceResponseType__Failed                                      = 2,
	EItemizationPersistenceResponseType__Success                                     = 255,
	EItemizationPersistenceResponseType__EItemizationPersistenceResponseType_MAX     = 256
};

/// Class /Script/ItemizationCoreRuntime.ItemPickup
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AItemPickup : public AActor
{ 
public:
	class UCapsuleComponent*                           TouchCapsule;                                               // 0x0290   (0x0008)  
	class UItemDefinitionBase*                         ItemDefinition;                                             // 0x0298   (0x0008)  
	int64_t                                            Amount;                                                     // 0x02A0   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x02B0   (0x0008)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemPickup.OnRep_ItemDefinition
	// void OnRep_ItemDefinition();                                                                                          // [0x78d6874] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryCollection
/// Size: 0x05B0 (0x000290 - 0x000840)
class AInventoryCollection : public AInfo
{ 
public:
	SDK_UNDEFINED(16,2434) /* FMulticastInlineDelegate */ __um(OnInventoryCollectionLoadStateChanged);             // 0x0290   (0x0010)  
	TArray<class UInventory*>                          InventoryList;                                              // 0x02A0   (0x0010)  
	SDK_UNDEFINED(80,2435) /* TMap<FGuid, UInventory*> */ __um(InventoryMap);                                      // 0x02B0   (0x0050)  
	SDK_UNDEFINED(80,2436) /* TMap<FGuid, FGuid> */    __um(ItemInventoryMap);                                     // 0x0300   (0x0050)  
	SDK_UNDEFINED(80,2437) /* TMap<FGuid, UItemInstance*> */ __um(ItemInstanceMap);                                // 0x0350   (0x0050)  
	class UItemComponentStorageManager*                ItemComponentStorageManager;                                // 0x03A0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x468];                                     // 0x03A8   (0x0468)  MISSED
	EInventoryCollectionType                           InventoryCollectionType;                                    // 0x0810   (0x0001)  
	unsigned char                                      UnknownData01_5[0x27];                                      // 0x0811   (0x0027)  MISSED
	EInventoryCollectionLoadState                      InventoryCollectionLoadState;                               // 0x0838   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0839   (0x0007)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.UseItem
	// void UseItem(FGuid& ItemId, FGuid AdditionalItemID);                                                                  // [0x78c0eb4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetEquippableItemInactive
	// void SetEquippableItemInactive(FGuid& ItemEntryID);                                                                   // [0x78c0e24] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.SetEquippableItemActive
	// void SetEquippableItemActive(FGuid& ItemEntryID);                                                                     // [0x78c0d94] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_UseItem
	// void Server_UseItem(FGuid ItemId, FGuid AdditionalItemID);                                                            // [0x78c0b64] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetItemSlot
	// void Server_SetItemSlot(FGuid OwningInventoryID, FGuid ItemEntryID, uint16_t SlotNumber, EVkInventoryMoveBehaviour MoveBehaviour); // [0x78c07a0] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetEquippableItemInactive
	// void Server_SetEquippableItemInactive(FGuid ItemEntryID);                                                             // [0x78c0668] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_SetEquippableItemActive
	// void Server_SetEquippableItemActive(FGuid ItemEntryID);                                                               // [0x78c0530] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.Server_DropItem
	// void Server_DropItem(FGuid ItemEntryID, int64_t AmountToDrop);                                                        // [0x78c031c] Net|NetReliableNative|Event|Public|NetServer|HasDefaults 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.IsEquippableItemActive
	// bool IsEquippableItemActive(FGuid& ItemEntryID);                                                                      // [0x78c026c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemSlotNumber
	// int32_t GetItemSlotNumber(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                              // [0x78bfc40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemIntAttribute
	// int64_t GetItemIntAttribute(FGuid& TargetInventoryID, FGuid& ItemEntryID, class UClass*& Attribute);                  // [0x78bfafc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemEntryIDBySlot
	// FGuid GetItemEntryIDBySlot(FGuid& TargetInventoryID, int32_t SlotNumber);                                             // [0x78bf964] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemDefinition
	// class UItemDefinitionBase* GetItemDefinition(FGuid& TargetInventoryID, FGuid& ItemEntryID);                           // [0x78bf864] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromInventory
	// int64_t GetItemAmountFromInventory(class UItemDefinitionBase* ItemDefinition, FGuid& TargetInventoryID);              // [0x78bf75c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromEntry
	// int64_t GetItemAmountFromEntry(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                         // [0x78bf65c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmount
	// int64_t GetItemAmount(class UItemDefinitionBase* ItemDefinition);                                                     // [0x78bf5cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryName
	// FText GetInventoryName(FGuid& TargetInventoryID);                                                                     // [0x78bf51c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryListInPickupPriorityForItemDefinition
	// TArray<FGuid> GetInventoryListInPickupPriorityForItemDefinition(class UItemDefinitionBase* ItemDefinition);           // [0x78bf444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryDefinition
	// class UInventoryDefinition* GetInventoryDefinition(FGuid& TargetInventoryID);                                         // [0x78bf3a8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoriesWithInventoryDefinition
	// TArray<FGuid> GetInventoriesWithInventoryDefinition(class UInventoryDefinition* InventoryDefinition);                 // [0x78bf304] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllItemsInInventory
	// bool GetAllItemsInInventory(FGuid& TargetInventoryID, TArray<FGuid>& OutItemEntryIDList);                             // [0x78bf15c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllInventoriesInCollection
	// bool GetAllInventoriesInCollection(TArray<FGuid>& OutInventoryIDList);                                                // [0x78bf0b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.DropItem
	// void DropItem(FGuid& ItemEntryID, int64_t AmountToDrop);                                                              // [0x78bef20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.ClientOnItemAbilityCooldownUpdated
	// void ClientOnItemAbilityCooldownUpdated(class UInventory* Inventory, FGuid ItemEntryID, FItemAbilityCooldownState CooldownState); // [0x78becc0] Net|NetReliableNative|Event|Protected|HasDefaults|NetClient 
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FItemAttributeData
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FItemAttributeValue
{ 
	class UClass*                                      Attribute;                                                  // 0x0000   (0x0008)  
	FItemAttributeData                                 Data;                                                       // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemAttributeList
/// Size: 0x0128 (0x000000 - 0x000128)
struct FItemAttributeList
{ 
	TArray<FItemAttributeValue>                        AttributeList;                                              // 0x0000   (0x0010)  
	TArray<FItemAttributeValue>                        LastKnownAttributeList;                                     // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x0020   (0x0108)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntry
/// Size: 0x0154 (0x00000C - 0x000160)
struct FItemEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_3[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UItemDefinitionBase*                         ItemDefinition;                                             // 0x0010   (0x0008)  
	FGuid                                              ItemEntryID;                                                // 0x0018   (0x0010)  
	int32_t                                            SlotNumber;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FItemAttributeList                                 AttributeData;                                              // 0x0030   (0x0128)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryList
/// Size: 0x0200 (0x000108 - 0x000308)
struct FItemEntryList : FFastArraySerializer
{ 
	TArray<FItemEntry>                                 ItemList;                                                   // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x1F0];                                     // 0x0118   (0x01F0)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.Inventory
/// Size: 0x04F8 (0x0000A0 - 0x000598)
class UInventory : public UActorComponent
{ 
public:
	class AInventoryCollection*                        OwningInventoryCollection;                                  // 0x00A0   (0x0008)  
	class UInventoryDefinition*                        InventoryDefinition;                                        // 0x00A8   (0x0008)  
	FGuid                                              InventoryID;                                                // 0x00B0   (0x0010)  
	FItemEntryList                                     ItemEntryData;                                              // 0x00C0   (0x0308)  
	uint16_t                                           InventoryTotalSlotsOverride;                                // 0x03C8   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03CA   (0x0006)  MISSED
	int64_t                                            InventoryMaxStackSizeOverride;                              // 0x03D0   (0x0008)  
	TArray<char>                                       InventoryMaxStackSizeOverrideAttributeData;                 // 0x03D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1B0];                                     // 0x03E8   (0x01B0)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_ItemData
	// void OnRep_ItemData();                                                                                                // [0x78d6834] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryTotalSlotsOverride
	// void OnRep_InventoryTotalSlotsOverride();                                                                             // [0x78d6804] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryMaxStackSizeOverride
	// void OnRep_InventoryMaxStackSizeOverride();                                                                           // [0x78d67dc] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryID
	// void OnRep_InventoryID();                                                                                             // [0x78d67c8] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryDefinition
	// void OnRep_InventoryDefinition();                                                                                     // [0x6cb2178] Native|Protected     
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventory
/// Size: 0x0078 (0x000598 - 0x000610)
class UEquippableInventory : public UInventory
{ 
public:
	TArray<FGuid>                                      ActiveItems;                                                // 0x0598   (0x0010)  
	TArray<FGuid>                                      PreviouslyActiveItems;                                      // 0x05A8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x05B8   (0x0058)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.EquippableInventory.OnRep_ActiveItems
	// void OnRep_ActiveItems();                                                                                             // [0x78c0308] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryDefinition
/// Size: 0x0048 (0x000030 - 0x000078)
class UInventoryDefinition : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2438) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2439) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	uint16_t                                           Slots;                                                      // 0x0060   (0x0002)  
	char                                               PickupPriority;                                             // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0063   (0x0005)  MISSED
	class UItemRequirements*                           ItemRequirements;                                           // 0x0068   (0x0008)  
	bool                                               bEnableItemStacking;                                        // 0x0070   (0x0001)  
	bool                                               bRequireUniqueItemDefinitionPerStack;                       // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemFilter
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEquipItemFilter
{ 
	bool                                               bAppliesToAllItems;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,2440) /* TArray<TWeakObjectPtr<UItemDefinitionBase*>> */ __um(ItemDefinitions);               // 0x0008   (0x0010)  
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemRestriction
/// Size: 0x0010 (0x000018 - 0x000028)
struct FEquipItemRestriction : FEquipItemFilter
{ 
	int64_t                                            ActiveLimit;                                                // 0x0018   (0x0008)  
	EEquipItemLimitHitBehaviour                        LimitHitBehaviour;                                          // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemCondition
/// Size: 0x0000 (0x000018 - 0x000018)
struct FEquipItemCondition : FEquipItemFilter
{ 
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventoryDefinition
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UEquippableInventoryDefinition : public UInventoryDefinition
{ 
public:
	TArray<FEquipItemRestriction>                      EquipRestrictions;                                          // 0x0078   (0x0010)  
	TArray<FEquipItemCondition>                        AutoEquipConditions;                                        // 0x0088   (0x0010)  
	TArray<class UInputAction*>                        SlotBindings;                                               // 0x0098   (0x0010)  
	bool                                               bShowSlotBindings;                                          // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.EquipmentSlot
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEquipmentSlot : public UEquippableInventoryDefinition
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.EquipmentHotBar
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEquipmentHotBar : public UEquippableInventoryDefinition
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.InventoryCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryCheatManager : public UCheatManagerExtension
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryUseItem
	// void InventoryUseItem(int32_t InventoryIndex, int32_t ItemIndex);                                                     // [0x67486c4] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetItemSlot
	// void InventorySetItemSlot(int32_t InventoryIndex, int32_t ItemIndex, uint16_t NewSlotIndex);                          // [0x78c0104] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventorySetEquippedItemActive
	// void InventorySetEquippedItemActive(int32_t InventoryIndex, int32_t ItemIndex, bool bActive);                         // [0x78c0024] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryRemoveFromItem
	// void InventoryRemoveFromItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToRemove);                      // [0x78bfd40] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveItem
	// void InventoryMoveItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex);                // [0x78bff44] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryMoveAmountOfItem
	// void InventoryMoveAmountOfItem(int32_t SourceInventoryIndex, int32_t ItemIndex, int32_t TargetInventoryIndex, int64_t AmountToMove); // [0x78bfe24] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryDropItem
	// void InventoryDropItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToDrop);                              // [0x78bfd40] Final|Exec|Native|Public 
	// Function /Script/ItemizationCoreRuntime.InventoryCheatManager.InventoryAddToItem
	// void InventoryAddToItem(int32_t InventoryIndex, int32_t ItemIndex, int64_t AmountToAdd);                              // [0x78bfd40] Final|Exec|Native|Public 
};

/// Struct /Script/ItemizationCoreRuntime.InventoryStartingItem
/// Size: 0x0028 (0x000000 - 0x000028)
struct FInventoryStartingItem
{ 
	SDK_UNDEFINED(32,2441) /* TWeakObjectPtr<UItemDefinition*> */ __um(ItemDefinition);                            // 0x0000   (0x0020)  
	int64_t                                            Amount;                                                     // 0x0020   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.InventorySetupData
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UInventorySetupData : public UDataAsset
{ 
public:
	SDK_UNDEFINED(16,2442) /* TArray<TWeakObjectPtr<UEquippableInventoryDefinition*>> */ __um(EquipmentSetups);    // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,2443) /* TArray<TWeakObjectPtr<UInventoryDefinition*>> */ __um(InventoryDefinitions);         // 0x0040   (0x0010)  
	TArray<FInventoryStartingItem>                     StartingItems;                                              // 0x0050   (0x0010)  
	SDK_UNDEFINED(32,2444) /* TWeakObjectPtr<UInputMappingContext*> */ __um(InputMappingContext);                  // 0x0060   (0x0020)  
	SDK_UNDEFINED(32,2445) /* TWeakObjectPtr<UClass*> */ __um(InventoryUIWidgetClass);                             // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,2446) /* TWeakObjectPtr<UClass*> */ __um(InventoryHUDUIWidgetClass);                          // 0x00A0   (0x0020)  
	SDK_UNDEFINED(24,2447) /* FText */                 __um(DisplayName);                                          // 0x00C0   (0x0018)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityConfigurationAsset : public UPrimaryDataAsset
{ 
public:
	class UClass*                                      GameplayAbilityClass;                                       // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAbilityConfigurationAsset.Construct
	// void Construct(class UGameplayAbility* Ability);                                                                      // [0x18a39e4] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityEffectAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityEffectAsset : public UPrimaryDataAsset
{ 
public:
	class UClass*                                      GameplayEffectClass;                                        // 0x0030   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCost
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemAbilityCost : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCostItem
/// Size: 0x0028 (0x000028 - 0x000050)
class UItemAbilityCostItem : public UItemAbilityCost
{ 
public:
	SDK_UNDEFINED(32,2448) /* TWeakObjectPtr<UItemDefinitionBase*> */ __um(ItemDefinition);                        // 0x0028   (0x0020)  
	int64_t                                            NumConsumed;                                                // 0x0048   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCostAttribute
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemAbilityCostAttribute : public UItemAbilityCost
{ 
public:
	class UClass*                                      Attribute;                                                  // 0x0028   (0x0008)  
	int64_t                                            MinValue;                                                   // 0x0030   (0x0008)  
	int64_t                                            Change;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldown
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemAbilityCooldown : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	bool                                               bApplyOnStart;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldownTime
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemAbilityCooldownTime : public UItemAbilityCooldown
{ 
public:
	float                                              CoolDownTime;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAbilityCooldownVelocityBased
/// Size: 0x0010 (0x000030 - 0x000040)
class UItemAbilityCooldownVelocityBased : public UItemAbilityCooldown
{ 
public:
	float                                              CooldownTimeIfStationary;                                   // 0x0030   (0x0004)  
	float                                              CooldownTimeScaleFactorIfMoving;                            // 0x0034   (0x0004)  
	bool                                               CooldownTimeIsResetToZeroWhenMoving;                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachment
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AItemAttachment : public AActor
{ 
public:
	class UMeshComponent*                              Mesh;                                                       // 0x0290   (0x0008)  
	class UItemAttachmentDefinition*                   AttachmentData;                                             // 0x0298   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02A0   (0x0008)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute
/// Size: 0x0048 (0x000028 - 0x000070)
class UItemAttribute : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(24,2449) /* FText */                 __um(AttributeName);                                        // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,2450) /* FText */                 __um(AttributeDescription);                                 // 0x0040   (0x0018)  
	TArray<char>                                       DefaultValueAsData;                                         // 0x0058   (0x0010)  
	EItemAttributeType                                 AttributeType;                                              // 0x0068   (0x0001)  
	bool                                               bUsesCustomSerializer;                                      // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x006A   (0x0006)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeName
	// FText GetAttributeName();                                                                                             // [0x78bf2b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeDescription
	// FText GetAttributeDescription();                                                                                      // [0x78bf26c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Int
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_Int : public UItemAttribute
{ 
public:
	int64_t                                            DefaultValue;                                               // 0x0070   (0x0008)  
	EAttributeCombineLogic_Math                        CombineLogic;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Decimal
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_Decimal : public UItemAttribute
{ 
public:
	double                                             DefaultValue;                                               // 0x0070   (0x0008)  
	EAttributeCombineLogic_Math                        CombineLogic;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Bool
/// Size: 0x0008 (0x000070 - 0x000078)
class UItemAttribute_Bool : public UItemAttribute
{ 
public:
	bool                                               DefaultValue;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_String
/// Size: 0x0010 (0x000070 - 0x000080)
class UItemAttribute_String : public UItemAttribute
{ 
public:
	SDK_UNDEFINED(16,2451) /* FString */               __um(DefaultValue);                                         // 0x0070   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Int_Test
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_Int_Test : public UItemAttribute_Int
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Decimal_Test
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_Decimal_Test : public UItemAttribute_Decimal
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Bool_Test
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_Bool_Test : public UItemAttribute_Bool
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_String_Test
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_String_Test : public UItemAttribute_String
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValueBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemAttributeValueBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGuid                                              QueriedItemEntryID;                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(8,2452) /* TWeakObjectPtr<AInventoryCollection*> */ __um(QueriedInventoryCollection);            // 0x0038   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Int
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Int : public UItemAttributeValueBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Decimal
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Decimal : public UItemAttributeValueBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Bool
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Bool : public UItemAttributeValueBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_String
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_String : public UItemAttributeValueBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentBase : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorageManager
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UItemComponentStorageManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	SDK_UNDEFINED(80,2453) /* TMap<UClass*, FItemEntryStorageMap> */ __um(ClassIndividualStorageMap);              // 0x0028   (0x0050)  
	SDK_UNDEFINED(80,2454) /* TMap<UClass*, UItemComponentSharedLocalStorage*> */ __um(ClassSharedStorageMap);     // 0x0078   (0x0050)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentLocalStorage
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponentLocalStorage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentSharedLocalStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentSharedLocalStorage : public UObject
{ 
public:
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityBinding
/// Size: 0x0050 (0x000000 - 0x000050)
struct FItemAbilityBinding
{ 
	SDK_UNDEFINED(32,2455) /* TWeakObjectPtr<UItemInputAction*> */ __um(InputAction);                              // 0x0000   (0x0020)  
	EItemStateFilter                                   ActiveState;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<class UItemAbilityCost*>                    Costs;                                                      // 0x0028   (0x0010)  
	TArray<class UItemAbilityCooldown*>                Cooldowns;                                                  // 0x0038   (0x0010)  
	class UItemAbilityConfigurationAsset*              Ability;                                                    // 0x0048   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Ability
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Ability : public UItemComponentBase
{ 
public:
	TArray<FItemAbilityBinding>                        AbilityList;                                                // 0x0028   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Ability
/// Size: 0x0028 (0x000038 - 0x000060)
class UItemComponentStorage_Ability : public UItemComponentLocalStorage
{ 
public:
	TArray<bool>                                       AbilityIsAvailableList;                                     // 0x0038   (0x0010)  
	class UItemComponent_Ability*                      SourceData;                                                 // 0x0048   (0x0008)  
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_AbilityShared
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemComponentStorage_AbilityShared : public UItemComponentSharedLocalStorage
{ 
public:
	SDK_UNDEFINED(80,2456) /* TMap<uint32_t, FItemAbilityRuntimeData> */ __um(RefCountedAbilityRuntimeData);       // 0x0028   (0x0050)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachmentDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UItemAttachmentDefinition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	EItemStateFilter                                   AttachmentVisibility;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemMeshAttachmentDefinition
/// Size: 0x0050 (0x000030 - 0x000080)
class UItemMeshAttachmentDefinition : public UItemAttachmentDefinition
{ 
public:
	FName                                              AttachToSocketName;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FVector                                            OffsetLocation;                                             // 0x0038   (0x0018)  
	FRotator                                           OffsetRotation;                                             // 0x0050   (0x0018)  
	FVector                                            MeshScale;                                                  // 0x0068   (0x0018)  
};

/// Class /Script/ItemizationCoreRuntime.ItemStaticMeshAttachmentDefinition
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UItemStaticMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
public:
	SDK_UNDEFINED(32,2457) /* TWeakObjectPtr<UStaticMesh*> */ __um(Mesh);                                          // 0x0080   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemSkeletalMeshAttachmentDefinition
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UItemSkeletalMeshAttachmentDefinition : public UItemMeshAttachmentDefinition
{ 
public:
	SDK_UNDEFINED(32,2458) /* TWeakObjectPtr<USkeletalMesh*> */ __um(Mesh);                                        // 0x0080   (0x0020)  
	SDK_UNDEFINED(32,2459) /* TWeakObjectPtr<UAnimSequence*> */ __um(Animation);                                   // 0x00A0   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Attach
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Attach : public UItemComponentBase
{ 
public:
	TArray<class UItemAttachmentDefinition*>           Attachments;                                                // 0x0028   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_Attach
/// Size: 0x0020 (0x000038 - 0x000058)
class UItemComponentStorage_Attach : public UItemComponentLocalStorage
{ 
public:
	SDK_UNDEFINED(16,2460) /* TArray<TWeakObjectPtr<AItemAttachment*>> */ __um(ActorAttachments);                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponentStorage_Attach.OnOwnerTransformUpdated
	// void OnOwnerTransformUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);                           // [0x78ca170] Final|Native|Public|HasDefaults 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_WasLoadedFromSave
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_WasLoadedFromSave : public UItemAttribute_Bool
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Core
/// Size: 0x0020 (0x000028 - 0x000048)
class UItemComponent_Core : public UItemComponentBase
{ 
public:
	class UItemType*                                   ItemType;                                                   // 0x0028   (0x0008)  
	class UItemRarity*                                 ItemRarity;                                                 // 0x0030   (0x0008)  
	FVerseGameplayTagContainer                         ItemTags;                                                   // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemType
	// class UItemType* GetItemType();                                                                                       // [0x78ca134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemRarity
	// class UItemRarity* GetItemRarity();                                                                                   // [0x68142b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI
/// Size: 0x0068 (0x000028 - 0x000090)
class UItemComponent_DisplayUI : public UItemComponentBase
{ 
public:
	SDK_UNDEFINED(32,2461) /* TWeakObjectPtr<UTexture2D*> */ __um(ItemIcon);                                       // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,2462) /* TWeakObjectPtr<UTexture2D*> */ __um(SmallItemIcon);                                  // 0x0048   (0x0020)  
	SDK_UNDEFINED(32,2463) /* TWeakObjectPtr<UMaterialInterface*> */ __um(ItemMaterial);                           // 0x0068   (0x0020)  
	FName                                              MaterialTextureParameter;                                   // 0x0088   (0x0004)  
	EItemIconDisplayTextType                           IconDisplayTextType;                                        // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x008D   (0x0003)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallItemIcon();                                                                       // [0x78ca14c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetMaterialTextureParameter
	// FName GetMaterialTextureParameter();                                                                                  // [0x5f95034] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemMaterial
	// TWeakObjectPtr<UMaterialInterface*> GetItemMaterial();                                                                // [0x78ca0c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemIconDisplayTextType
	// EItemIconDisplayTextType GetItemIconDisplayTextType();                                                                // [0x78ca0b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemIcon
	// TWeakObjectPtr<UTexture2D*> GetItemIcon();                                                                            // [0x78ca08c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemOwnerPoseAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemOwnerPoseAsset : public UPrimaryDataAsset
{ 
public:
	class UProxyTable*                                 ProxyTable;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_OwnerPose
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemComponent_OwnerPose : public UItemComponentBase
{ 
public:
	EItemStateFilter                                   ApplyPoseState;                                             // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UItemOwnerPoseAsset*                         PoseAsset;                                                  // 0x0030   (0x0008)  
	float                                              PosePriority;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_OwnerPose
/// Size: 0x0008 (0x000038 - 0x000040)
class UItemComponentStorage_OwnerPose : public UItemComponentLocalStorage
{ 
public:
	bool                                               bHasAppliedProceduralLayer;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorage_OwnerPoseShared
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponentStorage_OwnerPoseShared : public UItemComponentSharedLocalStorage
{ 
public:
	TArray<class UItemComponent_OwnerPose*>            ActiveProceduralLayers;                                     // 0x0028   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Pickup
/// Size: 0x0040 (0x000028 - 0x000068)
class UItemComponent_Pickup : public UItemComponentBase
{ 
public:
	SDK_UNDEFINED(32,2464) /* TWeakObjectPtr<USkeletalMesh*> */ __um(SkeletalMesh);                                // 0x0028   (0x0020)  
	SDK_UNDEFINED(32,2465) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                    // 0x0048   (0x0020)  
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_StackSize
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_StackSize : public UItemAttribute_Int
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_MaxStackSize
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_MaxStackSize : public UItemAttribute_Int
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Stackable
/// Size: 0x0010 (0x000028 - 0x000038)
class UItemComponent_Stackable : public UItemComponentBase
{ 
public:
	int64_t                                            MaxStackSize;                                               // 0x0028   (0x0008)  
	bool                                               AllowMultipleStacks;                                        // 0x0030   (0x0001)  
	bool                                               DestroyEmptyStacks;                                         // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FItemComponentContainer
{ 
	TArray<class UItemComponentBase*>                  Components;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinitionBase
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UItemDefinitionBase : public UMcpItemDefinitionBase
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(24,2466) /* FText */                 __um(ItemName);                                             // 0x0038   (0x0018)  
	SDK_UNDEFINED(24,2467) /* FText */                 __um(ItemDescription);                                      // 0x0050   (0x0018)  
	SDK_UNDEFINED(24,2468) /* FText */                 __um(ItemShortDescription);                                 // 0x0068   (0x0018)  
	FItemComponentContainer                            ComponentContainer;                                         // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0090   (0x0050)  MISSED


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemShortDescription
	// FText GetItemShortDescription();                                                                                      // [0x78ca0ec] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemDescription
	// FText GetItemDescription();                                                                                           // [0x78ca044] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemComponentByClass
	// class UItemComponentBase* GetItemComponentByClass(class UClass* ItemComponentClass);                                  // [0x78c942c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetDisplayName
	// FText GetDisplayName();                                                                                               // [0x78c93e4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetDisallowedComponents
	// TArray<UClass*> GetDisallowedComponents();                                                                            // [0x78c93a4] Final|Native|Protected|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinition
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UItemDefinition : public UItemDefinitionBase
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInputAction
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemInputAction : public UInputAction
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInputMappingContext
/// Size: 0x0000 (0x000058 - 0x000058)
class UItemInputMappingContext : public UInputMappingContext
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemInstance
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x28];                                      // 0x0000   (0x0028)  MISSED
	FGuid                                              ItemEntryID;                                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemInstanceClassEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FItemInstanceClassEntry
{ 
	class UClass*                                      Class;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemInstanceClassOverride
/// Size: 0x0018 (0x000000 - 0x000018)
struct FItemInstanceClassOverride
{ 
	TArray<FItemInstanceClassEntry>                    SortedOverrideList;                                         // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/ItemizationCoreRuntime.ItemizationCoreSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UItemizationCoreSubsystem : public UEngineSubsystem
{ 
public:
	FItemInstanceClassOverride                         ItemInstanceClassOverride;                                  // 0x0030   (0x0018)  
};

/// Class /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataStringAttributeValue
	// FString GetItemDataStringAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                 // [0x78c9e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataSlot
	// int32_t GetItemDataSlot(FItemAggregatedData& ItemData);                                                               // [0x78c9d9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataItemEntryID
	// FGuid GetItemDataItemEntryID(FItemAggregatedData& ItemData);                                                          // [0x78c9cd8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataIntAttributeValue
	// int64_t GetItemDataIntAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                    // [0x78c9b0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDefinition
	// class UItemDefinitionBase* GetItemDataDefinition(FItemAggregatedData& ItemData);                                      // [0x78c9a38] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataDecimalAttributeValue
	// double GetItemDataDecimalAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                 // [0x78c986c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataBoolAttributeValue
	// bool GetItemDataBoolAttributeValue(FItemAggregatedData& ItemData, class UClass* AttributeClass);                      // [0x78c96a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.GetItemDataAttributeList
	// TArray<UClass*> GetItemDataAttributeList(FItemAggregatedData& ItemData);                                              // [0x78c94d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeItemEntryID
	// FString DescribeItemEntryID(FGuid& ItemEntryID);                                                                      // [0x78c92f8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary.DescribeInventoryID
	// FString DescribeInventoryID(FGuid& InventoryID);                                                                      // [0x78c92f8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationLootCountCalculator : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_Value
/// Size: 0x0028 (0x000028 - 0x000050)
class UItemizationLootCountCalculator_Value : public UItemizationLootCountCalculator
{ 
public:
	FScalableFloat                                     Value;                                                      // 0x0028   (0x0028)  
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_Range
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemizationLootCountCalculator_Range : public UItemizationLootCountCalculator
{ 
public:
	FScalableFloat                                     Min;                                                        // 0x0028   (0x0028)  
	FScalableFloat                                     Max;                                                        // 0x0050   (0x0028)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemizationLootEntry
/// Size: 0x0008 (0x000000 - 0x000008)
struct FItemizationLootEntry
{ 
	class UObject*                                     Item;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemizationLootEntry_Guaranteed
/// Size: 0x0008 (0x000008 - 0x000010)
struct FItemizationLootEntry_Guaranteed : FItemizationLootEntry
{ 
	class UItemizationLootCountCalculator*             Count;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemizationLootEntry_Chance
/// Size: 0x0038 (0x000008 - 0x000040)
struct FItemizationLootEntry_Chance : FItemizationLootEntry
{ 
	class UItemizationLootCountCalculator*             Count;                                                      // 0x0008   (0x0008)  
	class UItemizationLootWeightCalculator*            Weight;                                                     // 0x0010   (0x0008)  
	FScalableFloat                                     MaxSelectCount;                                             // 0x0018   (0x0028)  
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootPoolAsset
/// Size: 0x0068 (0x000030 - 0x000098)
class UItemizationLootPoolAsset : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2469) /* FText */                 __um(LootTableName);                                        // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2470) /* FText */                 __um(LootTableDescription);                                 // 0x0048   (0x0018)  
	TArray<class UItemizationLootPoolProcessor*>       LootPoolPostProcessorList;                                  // 0x0060   (0x0010)  
	TArray<FItemizationLootEntry_Guaranteed>           GuaranteedLoot;                                             // 0x0070   (0x0010)  
	class UItemizationLootCountCalculator*             SelectionCount;                                             // 0x0080   (0x0008)  
	TArray<FItemizationLootEntry_Chance>               ChanceLoot;                                                 // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationLootPoolAsset.GetDisallowedLootPoolItemClasses
	// TArray<UClass*> GetDisallowedLootPoolItemClasses();                                                                   // [0x78d66b0] Native|Public|Const  
	// Function /Script/ItemizationCoreRuntime.ItemizationLootPoolAsset.GetAllowedLootPoolItemClasses
	// TArray<UClass*> GetAllowedLootPoolItemClasses();                                                                      // [0x78d6638] Native|Public|Const  
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootPoolProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationLootPoolProcessor : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_SetAttribute
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemizationLootCountCalculator_SetAttribute : public UItemizationLootPoolProcessor
{ 
public:
	class UClass*                                      Attribute;                                                  // 0x0028   (0x0008)  
	EItemAttributeType                                 AttributeType;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FScalableFloat                                     NumberValue;                                                // 0x0038   (0x0028)  
	bool                                               Value;                                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	SDK_UNDEFINED(16,2471) /* FString */               __um(StringValue);                                          // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_SetAttribute.GetDisallowedItemAttributeClasses
	// TArray<UClass*> GetDisallowedItemAttributeClasses();                                                                  // [0x78d66b0] Native|Public|Const  
	// Function /Script/ItemizationCoreRuntime.ItemizationLootCountCalculator_SetAttribute.GetAllowedItemAttributeClasses
	// TArray<UClass*> GetAllowedItemAttributeClasses();                                                                     // [0x78d6638] Native|Public|Const  
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationLootWeightCalculator : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator_Value
/// Size: 0x0028 (0x000028 - 0x000050)
class UItemizationLootWeightCalculator_Value : public UItemizationLootWeightCalculator
{ 
public:
	FScalableFloat                                     Value;                                                      // 0x0028   (0x0028)  
};

/// Class /Script/ItemizationCoreRuntime.ItemizationLootWeightCalculator_Range
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemizationLootWeightCalculator_Range : public UItemizationLootWeightCalculator
{ 
public:
	FScalableFloat                                     Min;                                                        // 0x0028   (0x0028)  
	FScalableFloat                                     Max;                                                        // 0x0050   (0x0028)  
};

/// Class /Script/ItemizationCoreRuntime.ItemizationPersistenceManagerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationPersistenceManagerBase : public UObject
{ 
public:
};

/// Class /Script/ItemizationCoreRuntime.ItemizationWorldSubsystem
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UItemizationWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_3[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	class UItemizationPersistenceManagerBase*          ItemizationPersistenceManager;                              // 0x00D0   (0x0008)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationWorldSubsystem.OnInventoryComponentDestroyed
	// void OnInventoryComponentDestroyed(class UInventoryComponent* InventoryComponent);                                    // [0x78d6748] Final|Native|Protected 
};

/// Class /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationPickupFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SpawnItemPickupInWorld
	// class AItemPickup* SpawnItemPickupInWorld(class UObject* WorldContextObject, class UItemDefinitionBase* ItemDefinition, FVector& InPosition, int64_t Amount); // [0x78d6b18] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SetDefaultItemPickupMesh
	// void SetDefaultItemPickupMesh(class UStaticMesh* Mesh);                                                               // [0x78d6914] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.SetDefaultItemPickupClass
	// void SetDefaultItemPickupClass(class UClass* ItemPickupClass);                                                        // [0x78d6888] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary.DropItemFromInventoryAsPickup
	// class AItemPickup* DropItemFromInventoryAsPickup(class AInventoryCollection* Collection, FGuid& InventoryID, FGuid& ItemEntryID, int64_t AmountToDrop); // [0x78d6390] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ItemizationCoreRuntime.ItemRarity
/// Size: 0x0058 (0x000030 - 0x000088)
class UItemRarity : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2472) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2473) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0060   (0x0010)  
	float                                              Tier;                                                       // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FVerseGameplayTagContainer                         Tags;                                                       // 0x0078   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetTier
	// float GetTier();                                                                                                      // [0x78d6734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetName
	// FText GetName();                                                                                                      // [0x7250d1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetDescription
	// FText GetDescription();                                                                                               // [0x78d6694] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemRarity.GetColor
	// FLinearColor GetColor();                                                                                              // [0x78d667c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Rarity
/// Size: 0x0000 (0x000080 - 0x000080)
class UItemAttribute_Rarity : public UItemAttribute_Int
{ 
public:
};

/// Struct /Script/ItemizationCoreRuntime.VkRarityEntry
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVkRarityEntry
{ 
	SDK_UNDEFINED(24,2474) /* FText */                 __um(Name);                                                 // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,2475) /* FText */                 __um(Description);                                          // 0x0018   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemRarityTable
/// Size: 0x0040 (0x000030 - 0x000070)
class UItemRarityTable : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2476) /* FText */                 __um(RarityTableName);                                      // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2477) /* FText */                 __um(RarityTableDescription);                               // 0x0048   (0x0018)  
	TArray<FVkRarityEntry>                             RarityList;                                                 // 0x0060   (0x0010)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemTagContainer
/// Size: 0x0030 (0x000000 - 0x000030)
struct FItemTagContainer
{ 
	FVerseGameplayTagContainer                         RequiredTags;                                               // 0x0000   (0x0010)  
	FVerseGameplayTagContainer                         ForbiddenTags;                                              // 0x0010   (0x0010)  
	FVerseGameplayTagContainer                         AnyTags;                                                    // 0x0020   (0x0010)  
};

/// Class /Script/ItemizationCoreRuntime.ItemRequirements
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UItemRequirements : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2478) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2479) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	SDK_UNDEFINED(80,2480) /* TSet<UItemType*> */      __um(ItemTypes);                                            // 0x0060   (0x0050)  
	FItemTagContainer                                  TagContainer;                                               // 0x00B0   (0x0030)  
};

/// Class /Script/ItemizationCoreRuntime.ItemType
/// Size: 0x0048 (0x000030 - 0x000078)
class UItemType : public UDataAsset
{ 
public:
	SDK_UNDEFINED(24,2481) /* FText */                 __um(Name);                                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,2482) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	class UItemType*                                   ParentType;                                                 // 0x0060   (0x0008)  
	FVerseGameplayTagContainer                         Tags;                                                       // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemType.GetParentType
	// class UItemType* GetParentType();                                                                                     // [0x78d671c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemType.GetName
	// FText GetName();                                                                                                      // [0x7250d1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemType.GetDescription
	// FText GetDescription();                                                                                               // [0x78d6694] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemVariant
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UItemVariant : public UItemDefinitionBase
{ 
public:
	class UItemDefinition*                             Original;                                                   // 0x00E0   (0x0008)  
};

/// Class /Script/ItemizationCoreRuntime.InventoryComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UInventoryComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,2483) /* FMulticastInlineDelegate */ __um(OnInventoryComponentDestroyed);                     // 0x00A0   (0x0010)  
	class UClass*                                      InventoryCollectionClass;                                   // 0x00B0   (0x0008)  
	SDK_UNDEFINED(32,2484) /* TWeakObjectPtr<UInventorySetupData*> */ __um(InventorySetupData);                    // 0x00B8   (0x0020)  
	SDK_UNDEFINED(8,2485) /* TWeakObjectPtr<AInventoryCollection*> */ __um(InventoryCollection);                   // 0x00D8   (0x0008)  
	FGuid                                              PersistenceID;                                              // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.UseItem
	// void UseItem(FGuid& ItemId, FGuid AdditionalItemID);                                                                  // [0x78d6cbc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.SetEquippableItemActive
	// void SetEquippableItemActive(FGuid& ItemEntryID, bool bActive);                                                       // [0x78d6988] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.GetInventoryCollection
	// class AInventoryCollection* GetInventoryCollection();                                                                 // [0x78d66f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.DropItem
	// void DropItem(FGuid& ItemEntryID);                                                                                    // [0x78d62d4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddOrResetInventory
	// void AddOrResetInventory(class UInventoryDefinition* NewInventoryDefinition);                                         // [0x6414600] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddItem
	// void AddItem(class UItemDefinitionBase* ItemDefinition, int64_t Amount);                                              // [0x78d6230] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ItemizationCoreRuntime.ItemAggregatedData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FItemAggregatedData
{ 
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryStorageMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FItemEntryStorageMap
{ 
	SDK_UNDEFINED(80,2486) /* TMap<FGuid, UItemComponentLocalStorage*> */ __um(ItemToStorageMap);                  // 0x0000   (0x0050)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityCooldownState
/// Size: 0x0018 (0x000000 - 0x000018)
struct FItemAbilityCooldownState
{ 
	bool                                               bIsActive;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Progress;                                                   // 0x0004   (0x0004)  
	float                                              PredictedTimeLeft;                                          // 0x0008   (0x0004)  
	float                                              PredictedProgressPerSecond;                                 // 0x000C   (0x0004)  
	double                                             TimeLastUpdated;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/ItemizationCoreRuntime.ItemAbilityRuntimeData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FItemAbilityRuntimeData
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x0004   (0x0014)  MISSED
	FItemAbilityCooldownState                          CooldownState;                                              // 0x0018   (0x0018)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0030   (0x0010)  MISSED
};

