
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

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

/// Class /Script/JunoCraftingBaseRuntime.JunoCraftingBaseSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoCraftingBaseSettings : public UPrimaryDataAsset
{ 
public:
	class UDataTable*                                  JunoCraftingIngredientsShopUIDataTable;                     // 0x0030   (0x0008)  
	class UJunoCraftingCategoryUIData*                 CraftingCategoryUIData;                                     // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/JunoCraftingBaseRuntime.JunoCraftingBaseSettings.Get
	// class UJunoCraftingBaseSettings* Get();                                                                               // [0xb4fd534] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/JunoCraftingBaseRuntime.JunoCraftingHeaderUIDataEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FJunoCraftingHeaderUIDataEntry
{ 
	FGameplayTag                                       HeaderTag;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,14428) /* FText */                __um(HeaderText);                                           // 0x0008   (0x0018)  
};

/// Struct /Script/JunoCraftingBaseRuntime.JunoCraftingSubCategoryUIDataEntry
/// Size: 0x0078 (0x000000 - 0x000078)
struct FJunoCraftingSubCategoryUIDataEntry
{ 
	FGameplayTag                                       CategoryTag;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14429) /* TWeakObjectPtr<UTexture2D*> */ __um(CategoryIcon);                                  // 0x0008   (0x0020)  
	SDK_UNDEFINED(24,14430) /* FText */                __um(CategoryTitle);                                        // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,14431) /* FText */                __um(CategoryTitleFormattedWithCount);                      // 0x0040   (0x0018)  
	TArray<FJunoCraftingHeaderUIDataEntry>             Headers;                                                    // 0x0058   (0x0010)  
	TArray<EJunoRecipeSortType>                        SortingPreferences;                                         // 0x0068   (0x0010)  
};

/// Struct /Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIDataEntry
/// Size: 0x0070 (0x000000 - 0x000070)
struct FJunoCraftingCategoryUIDataEntry
{ 
	FGameplayTag                                       CategoryTag;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(32,14432) /* TWeakObjectPtr<UTexture2D*> */ __um(CategoryIcon);                                  // 0x0008   (0x0020)  
	SDK_UNDEFINED(24,14433) /* FText */                __um(CategoryTitle);                                        // 0x0028   (0x0018)  
	TArray<FJunoCraftingHeaderUIDataEntry>             Headers;                                                    // 0x0040   (0x0010)  
	TArray<FJunoCraftingSubCategoryUIDataEntry>        Subcategories;                                              // 0x0050   (0x0010)  
	TArray<EJunoRecipeSortType>                        SortingPreferences;                                         // 0x0060   (0x0010)  
};

/// Class /Script/JunoCraftingBaseRuntime.JunoCraftingCategoryUIData
/// Size: 0x0010 (0x000030 - 0x000040)
class UJunoCraftingCategoryUIData : public UDataAsset
{ 
public:
	TArray<FJunoCraftingCategoryUIDataEntry>           Entries;                                                    // 0x0030   (0x0010)  
};

