
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/CollectionMapShared.AthenaCollectionScreenMapBase
/// Size: 0x0088 (0x000648 - 0x0006D0)
class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	CMember(class UAthenaFullScreenMapBase*)           MapWidget                                                   OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(class UClass*)                             CollectionIconType                                          OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(TMap<FGameplayTag, UAthenaMapCollectionIcon*>) MapCollectionIcons                                      OFFSET(get<T>, {0x660, 80, 0, 0})
};

/// Class /Script/CollectionMapShared.AthenaMapCollectionIcon
/// Size: 0x0000 (0x000390 - 0x000390)
class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:


	/// Functions
	// Function /Script/CollectionMapShared.AthenaMapCollectionIcon.SetSecondaryIcon
	// void SetSecondaryIcon(TWeakObjectPtr<UObject*>& SecondaryIcon);                                                          // [0x246f7d8] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CollectionMapShared.AthenaMapCollectionIcon.SetIsKnown
	// void SetIsKnown(bool bIsKnown);                                                                                          // [0x246f7d8] RequiredAPI|Event|Public|BlueprintEvent 
};

