
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CraftingRuntime
/// dependency: Engine
/// dependency: FortniteGame

/// Struct /Script/JunoCraftingBaseUI.JunoCraftingIngredientShopUIData
/// Size: 0x0020 (0x000048 - 0x000068)
class FJunoCraftingIngredientShopUIData : public FCraftingIngredientUIData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(EFortRarity)                               Rarity                                                      OFFSET(get<T>, {0x60, 1, 0, 0})
};

