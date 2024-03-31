
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
/// Size: 0x0088 (0x000670 - 0x0006F8)
class UAthenaCollectionScreenMapBase : public UAthenaCollectionScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1784;

public:
	CMember(class UAthenaFullScreenMapBase*)           MapWidget                                                   OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(class UClass*)                             CollectionIconType                                          OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(TMap<FGameplayTag, UAthenaMapCollectionIcon*>) MapCollectionIcons                                      OFFSET(get<T>, {0x688, 80, 0, 0})
};

/// Class /Script/CollectionMapShared.AthenaMapCollectionIcon
/// Size: 0x0000 (0x000388 - 0x000388)
class UAthenaMapCollectionIcon : public UAthenaMapNavigableIconCustom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:


	/// Functions
	// Function /Script/CollectionMapShared.AthenaMapCollectionIcon.SetSecondaryIcon
	// void SetSecondaryIcon(TWeakObjectPtr<UObject*>& SecondaryIcon);                                                          // [0x186becc] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CollectionMapShared.AthenaMapCollectionIcon.SetIsKnown
	// void SetIsKnown(bool bIsKnown);                                                                                          // [0x186becc] RequiredAPI|Event|Public|BlueprintEvent 
};

