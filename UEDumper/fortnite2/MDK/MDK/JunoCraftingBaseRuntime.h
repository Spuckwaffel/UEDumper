
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
	// class UJunoCraftingBaseSettings* Get();                                                                                  // [0xcd5e350] Final|Native|Static|Public|BlueprintCallable 
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
/// Size: 0x0018 (0x000000 - 0x000018)
class FJunoCraftingHeaderUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              HeaderTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     HeaderText                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/JunoCraftingBaseRuntime.JunoCraftingSubCategoryUIDataEntry
/// Size: 0x0068 (0x000000 - 0x000068)
class FJunoCraftingSubCategoryUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTag)                              CategoryTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CategoryIcon                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FText)                                     CategoryTitle                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FText)                                     CategoryTitleFormattedWithCount                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TArray<FJunoCraftingHeaderUIDataEntry>)    Headers                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<EJunoRecipeSortType>)               SortingPreferences                                          OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIDataEntry
/// Size: 0x0068 (0x000000 - 0x000068)
class FJunoCraftingCategoryUIDataEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTag)                              CategoryTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CategoryIcon                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FText)                                     CategoryTitle                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FJunoCraftingHeaderUIDataEntry>)    Headers                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FJunoCraftingSubCategoryUIDataEntry>) Subcategories                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<EJunoRecipeSortType>)               SortingPreferences                                          OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Enum /Script/JunoCraftingBaseRuntime.EJunoRecipeSortType
/// Size: 0x04
enum class EJunoRecipeSortType : uint8_t
{
	EJunoRecipeSortType__BySet                                                       = 0,
	EJunoRecipeSortType__ByName                                                      = 1,
	EJunoRecipeSortType__BySortPriority                                              = 2,
	EJunoRecipeSortType__MAX_None                                                    = 3
};

