
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/JunoCraftingBaseRuntime.JunoCraftingBaseSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoCraftingBaseSettings : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UDataTable*)                         JunoCraftingIngredientsShopUIDataTable                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UJunoCraftingCategoryUIData*)        CraftingCategoryUIData                                      OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/JunoCraftingBaseRuntime.JunoCraftingBaseSettings.Get
	// class UJunoCraftingBaseSettings* Get();                                                                                  // [0xc629800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIData
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoCraftingCategoryUIData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FJunoCraftingCategoryUIDataEntry>)  Entries                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/JunoCraftingBaseRuntime.JunoCraftingHeaderUIDataEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FJunoCraftingHeaderUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              HeaderTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     HeaderText                                                  OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/JunoCraftingBaseRuntime.JunoCraftingSubCategoryUIDataEntry
/// Size: 0x0078 (0x000000 - 0x000078)
class FJunoCraftingSubCategoryUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              CategoryTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CategoryIcon                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FText)                                     CategoryTitle                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     CategoryTitleFormattedWithCount                             OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(TArray<FJunoCraftingHeaderUIDataEntry>)    Headers                                                     OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<EJunoRecipeSortType>)               SortingPreferences                                          OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIDataEntry
/// Size: 0x0070 (0x000000 - 0x000070)
class FJunoCraftingCategoryUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTag)                              CategoryTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CategoryIcon                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FText)                                     CategoryTitle                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(TArray<FJunoCraftingHeaderUIDataEntry>)    Headers                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FJunoCraftingSubCategoryUIDataEntry>) Subcategories                                             OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<EJunoRecipeSortType>)               SortingPreferences                                          OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Enum /Script/JunoCraftingBaseRuntime.EJunoRecipeSortType
/// Size: 0x05
enum class EJunoRecipeSortType : uint8_t
{
	EJunoRecipeSortType__BySet                                                       = 0,
	EJunoRecipeSortType__ByName                                                      = 1,
	EJunoRecipeSortType__BySortPriority                                              = 2,
	EJunoRecipeSortType__MAX_None                                                    = 3,
	EJunoRecipeSortType__EJunoRecipeSortType_MAX                                     = 4
};

