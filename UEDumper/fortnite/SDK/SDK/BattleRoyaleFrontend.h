
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: FortniteGame

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

/// Class /Script/BattleRoyaleFrontend.BattleRoyaleFrontendExperienceFlow
/// Size: 0x0108 (0x000028 - 0x000130)
class UBattleRoyaleFrontendExperienceFlow : public UObject
{ 
public:
	unsigned char                                      UnknownData00_3[0x48];                                      // 0x0000   (0x0048)  MISSED
	SDK_UNDEFINED(16,11884) /* TArray<FString> */      __um(DefaultFlowStepArray);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,11885) /* TArray<FString> */      __um(FirstTimeSeasonFlowStepArray);                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(80,11886) /* TMap<FString, FString> */ __um(BRVideoRating);                                      // 0x0068   (0x0050)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(32,11887) /* TWeakObjectPtr<UClass*> */ __um(VideoPlayerClass);                                  // 0x00C0   (0x0020)  
	class UFortStreamMediaSource*                      VideoStream_Source;                                         // 0x00E0   (0x0008)  
	class UClass*                                      HabaneroIntroModalClass;                                    // 0x00E8   (0x0008)  
	SDK_UNDEFINED(32,11888) /* TWeakObjectPtr<UClass*> */ __um(FireModeSelectionReminderModalClass);               // 0x00F0   (0x0020)  
	SDK_UNDEFINED(32,11889) /* TWeakObjectPtr<UClass*> */ __um(FireModeSelectionScreenClass);                      // 0x0110   (0x0020)  
};

