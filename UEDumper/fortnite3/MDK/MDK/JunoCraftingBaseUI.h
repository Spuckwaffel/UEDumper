
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CraftingRuntime
/// dependency: Engine
/// dependency: FortniteGame

/// Struct /Script/JunoCraftingBaseUI.JunoCraftingIngredientShopUIData
/// Size: 0x0018 (0x000048 - 0x000060)
class FJunoCraftingIngredientShopUIData : public FCraftingIngredientUIData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(EFortRarity)                               Rarity                                                      OFFSET(get<T>, {0x58, 1, 0, 0})
};

