
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow
/// Size: 0x0118 (0x000028 - 0x000140)
class UBattleRoyaleFrontendExperienceFlow : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TArray<FString>)                           DefaultFlowStepArray                                        OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FString>)                           FirstTimeSeasonFlowStepArray                                OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TMap<FString, FString>)                    BRVideoRating                                               OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   VideoPlayerClass                                            OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(class UClass*)                             HabaneroIntroModalClass                                     OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   FireModeSelectionReminderModalClass                         OFFSET(get<T>, {0x100, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   FireModeSelectionScreenClass                                OFFSET(get<T>, {0x120, 32, 0, 0})


	/// Functions
	// Function /Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow.HandleVideoTerminalError
	// void HandleVideoTerminalError(EBaseMediaTerminalErrorReason Reason);                                                     // [0xbb6d164] Final|Native|Private 
	// Function /Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow.HandleSeasonTrailerEnded
	// void HandleSeasonTrailerEnded();                                                                                         // [0xbb6d150] Final|Native|Private 
	// Function /Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow.FinishTrailerStep
	// void FinishTrailerStep();                                                                                                // [0xbb6d13c] Final|Native|Private 
};

/// Enum /Script/BattleRoyaleFrontend.EOptionalBattleRoyaleFrontendExperienceFlowSteps
/// Size: 0x06
enum class EOptionalBattleRoyaleFrontendExperienceFlowSteps : uint8_t
{
	EOptionalBattleRoyaleFrontendExperienceFlowSteps__TryPlaySeasonTrailer           = 0,
	EOptionalBattleRoyaleFrontendExperienceFlowSteps__TryPlayBattlePassTrailer       = 1,
	EOptionalBattleRoyaleFrontendExperienceFlowSteps__TryShowHabaneroIntroModal      = 2,
	EOptionalBattleRoyaleFrontendExperienceFlowSteps__TryShowFireModeSelectionReminderModal = 3,
	EOptionalBattleRoyaleFrontendExperienceFlowSteps__TryShowFireModeModal           = 4,
	EOptionalBattleRoyaleFrontendExperienceFlowSteps__EOptionalBattleRoyaleFrontendExperienceFlowSteps_MAX = 5
};

