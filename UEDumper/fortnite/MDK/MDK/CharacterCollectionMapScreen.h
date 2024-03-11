
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CollectionMapShared
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/CharacterCollectionMapScreen.AthenaCollectionScreenMapCharacter
/// Size: 0x0008 (0x0006F8 - 0x000700)
class UAthenaCollectionScreenMapCharacter : public UAthenaCollectionScreenMapBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	CMember(class UCollectionScreenServiceVisualData*) SharedServiceVisualData                                     OFFSET(get<T>, {0x6F8, 8, 0, 0})
};

/// Class /Script/CharacterCollectionMapScreen.CollectionNPCServiceInfoOverlay
/// Size: 0x0018 (0x0004C8 - 0x0004E0)
class UCollectionNPCServiceInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	CMember(class UCollectionNPCServiceContainer*)     Services                                                    OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(class UImage*)                             Image_ServiceIcon                                           OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(class UCollectionScreenServiceVisualData*) SharedServiceVisualData                                     OFFSET(get<T>, {0x4D8, 8, 0, 0})
};

