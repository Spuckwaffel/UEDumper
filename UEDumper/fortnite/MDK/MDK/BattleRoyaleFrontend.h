
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: FortniteGame

/// Class /Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow
/// Size: 0x0108 (0x000028 - 0x000130)
class UBattleRoyaleFrontendExperienceFlow : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FString>)                           DefaultFlowStepArray                                        OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FString>)                           FirstTimeSeasonFlowStepArray                                OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TMap<FString, FString>)                    BRVideoRating                                               OFFSET(get<T>, {0x68, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   VideoPlayerClass                                            OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(class UFortStreamMediaSource*)             VideoStream_Source                                          OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UClass*)                             HabaneroIntroModalClass                                     OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   FireModeSelectionReminderModalClass                         OFFSET(get<T>, {0xF0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   FireModeSelectionScreenClass                                OFFSET(get<T>, {0x110, 32, 0, 0})
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

