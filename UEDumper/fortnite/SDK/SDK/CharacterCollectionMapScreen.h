
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CollectionMapShared
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/CharacterCollectionMapScreen.AthenaCollectionScreenMapCharacter
/// Size: 0x0008 (0x0006F8 - 0x000700)
class UAthenaCollectionScreenMapCharacter : public UAthenaCollectionScreenMapBase
{ 
public:
	class UCollectionScreenServiceVisualData*          SharedServiceVisualData;                                    // 0x06F8   (0x0008)  
};

/// Class /Script/CharacterCollectionMapScreen.CollectionNPCServiceInfoOverlay
/// Size: 0x0018 (0x0004C8 - 0x0004E0)
class UCollectionNPCServiceInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{ 
public:
	class UCollectionNPCServiceContainer*              Services;                                                   // 0x04C8   (0x0008)  
	class UImage*                                      Image_ServiceIcon;                                          // 0x04D0   (0x0008)  
	class UCollectionScreenServiceVisualData*          SharedServiceVisualData;                                    // 0x04D8   (0x0008)  
};

