
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/CosmeticsFrameworkLoadouts.BasicCosmeticLoadoutContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UBasicCosmeticLoadoutContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticCustomizableItemDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticCustomizableItemDefinition : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutContext
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticLoadoutContext : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutItemDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticLoadoutItemDefinition : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema
/// Size: 0x0030 (0x000030 - 0x000060)
class UCosmeticLoadoutSchema : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UTexture2D*)                         Icon                                                        OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FGameplayTag)                              ArchetypeTag                                                OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	CMember(TArray<class UCosmeticLoadoutSlotTemplate*>) Slots                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UCosmeticLoadoutSlotTemplate : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTag)                              SlotTag                                                     OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FGameplayTagContainer)                     MetaTags                                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FCosmeticLoadoutSlotRequirements)          Requirements                                                OFFSET(getStruct<T>, {0x58, 80, 0, 0})
	SMember(FString)                                   ShortName                                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FPrimaryAssetId)                           DefaultCosmeticItemId                                       OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bAlwaysUseDefaultCosmeticItemId                             OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bIsEquippable                                               OFFSET(get<bool>, {0xC1, 1, 0, 0})
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutArchetype
/// Size: 0x0030 (0x000030 - 0x000060)
class UCosmeticLoadoutArchetype : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(class UTexture2D*)                         Icon                                                        OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FGameplayTag)                              ArchetypeGroupTag                                           OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	CMember(TArray<class UCosmeticLoadoutSchema*>)     Schemas                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticLoadout
/// Size: 0x0010 (0x000000 - 0x000010)
class FCosmeticLoadout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCosmeticLoadoutSlot>)              Slots                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlot
/// Size: 0x0020 (0x000000 - 0x000020)
class FCosmeticLoadoutSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UCosmeticLoadoutSlotTemplate*)       SlotTemplate                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UObject*)                            EquippedItemDefinitionObject                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FCosmeticCustomizationInfo>)        CustomizationInfo                                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticCustomizationInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FCosmeticCustomizationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              ChannelTag                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              VariantTag                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   AdditionalData                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadout
/// Size: 0x0040 (0x000000 - 0x000040)
class FCosmeticBackendLoadout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FCosmeticBackendLoadoutSlot>)       Slots                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     UserTags                                                    OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutSlot
/// Size: 0x0020 (0x000000 - 0x000020)
class FCosmeticBackendLoadoutSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FPrimaryAssetId)                           SlotTemplate                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FPrimaryAssetId)                           EquippedItem                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FCosmeticCustomizationInfo>)        CustomizationInfo                                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
class FCosmeticLoadoutSlotRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagContainer)                     RequiredTags                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DeniedTags                                                  OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TArray<FPrimaryAssetType>)                 AllowedItemTypes                                            OFFSET(get<T>, {0x40, 16, 0, 0})
};

