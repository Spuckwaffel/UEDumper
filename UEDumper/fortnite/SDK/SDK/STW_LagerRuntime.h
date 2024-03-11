
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LagerRuntime

/// Class /Script/STW_LagerRuntime.FortQuestLivingWorldVolume
/// Size: 0x0050 (0x0005D8 - 0x000628)
class AFortQuestLivingWorldVolume : public AFortAthenaLivingWorldVolume
{ 
public:
	FGameplayTagContainer                              NoPlayerNeedsQuestFilterTags;                               // 0x05D8   (0x0020)  
	FGameplayTagContainer                              PlayerNeedsQuestFilterTags;                                 // 0x05F8   (0x0020)  
	class UFortQuestItemDefinition*                    RequiredQuest;                                              // 0x0618   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0620   (0x0008)  MISSED


	/// Functions
	// Function /Script/STW_LagerRuntime.FortQuestLivingWorldVolume.HandlePIEQuestsUpdated
	// void HandlePIEQuestsUpdated();                                                                                        // [0x36203b0] Final|Native|Protected 
};

