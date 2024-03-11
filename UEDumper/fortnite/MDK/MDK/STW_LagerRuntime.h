
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayTags
/// dependency: LagerRuntime

/// Class /Script/STW_LagerRuntime.FortQuestLivingWorldVolume
/// Size: 0x0050 (0x0005D8 - 0x000628)
class AFortQuestLivingWorldVolume : public AFortAthenaLivingWorldVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1576;

public:
	SMember(FGameplayTagContainer)                     NoPlayerNeedsQuestFilterTags                                OFFSET(getStruct<T>, {0x5D8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     PlayerNeedsQuestFilterTags                                  OFFSET(getStruct<T>, {0x5F8, 32, 0, 0})
	CMember(class UFortQuestItemDefinition*)           RequiredQuest                                               OFFSET(get<T>, {0x618, 8, 0, 0})


	/// Functions
	// Function /Script/STW_LagerRuntime.FortQuestLivingWorldVolume.HandlePIEQuestsUpdated
	// void HandlePIEQuestsUpdated();                                                                                           // [0x36203b0] Final|Native|Protected 
};

