
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/VoiceRep.FortVoiceReportIntroModal
/// Size: 0x0010 (0x000408 - 0x000418)
class UFortVoiceReportIntroModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(class UCommonTextBlock*)                   Text_VoiceReportingTitle                                    OFFSET(get<T>, {0x408, 8, 0, 0})


	/// Functions
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.UpdateVisuals
	// void UpdateVisuals(UFortVoiceReportIntroModalType DescriptionType);                                                      // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.HandleTurnOnClicked
	// void HandleTurnOnClicked();                                                                                              // [0xd22f2c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.HandleTurnOffClicked
	// void HandleTurnOffClicked();                                                                                             // [0xd22f2b4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.HandleLearnMore
	// void HandleLearnMore();                                                                                                  // [0xd22f2a0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/VoiceRep.VoiceRepTooltipBase
/// Size: 0x0008 (0x000468 - 0x000470)
class UVoiceRepTooltipBase : public UFortSidebarOnboardTooltipWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	DMember(int32_t)                                   AutoDismissTimerInterval                                    OFFSET(get<int32_t>, {0x468, 4, 0, 0})
};

/// Class /Script/VoiceRep.VoiceRepDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class UVoiceRepDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UClass*)                             VoiceChatTooltipWidgetClass                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UClass*)                             FirstOnboardingWidgetClass                                  OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UClass*)                             SecondOnboardingWidgetClass                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UClass*)                             ReportVoiceWidgetClass                                      OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Enum /Script/VoiceRep.UFortVoiceReportIntroModalType
/// Size: 0x04
enum class UFortVoiceReportIntroModalType : uint8_t
{
	UFortVoiceReportIntroModalType__IsFreshAccount                                   = 0,
	UFortVoiceReportIntroModalType__IsUnder18                                        = 1,
	UFortVoiceReportIntroModalType__Over18VoiceChatEnabled                           = 2,
	UFortVoiceReportIntroModalType__Over18VoiceChatDisabled                          = 3
};

