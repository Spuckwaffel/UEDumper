
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Enum /Script/VoiceRep.UFortVoiceReportIntroModalType
/// Size: 0x05
enum class UFortVoiceReportIntroModalType : uint8_t
{
	UFortVoiceReportIntroModalType__IsFreshAccount                                   = 0,
	UFortVoiceReportIntroModalType__IsUnder18                                        = 1,
	UFortVoiceReportIntroModalType__Over18VoiceChatEnabled                           = 2,
	UFortVoiceReportIntroModalType__Over18VoiceChatDisabled                          = 3,
	UFortVoiceReportIntroModalType__UFortVoiceReportIntroModalType_MAX               = 4
};

/// Class /Script/VoiceRep.FortVoiceReportIntroModal
/// Size: 0x0010 (0x000400 - 0x000410)
class UFortVoiceReportIntroModal : public UCommonActivatableWidget
{ 
public:
	class UCommonTextBlock*                            Text_VoiceReportingTitle;                                   // 0x0400   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0408   (0x0008)  MISSED


	/// Functions
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.UpdateVisuals
	// void UpdateVisuals(UFortVoiceReportIntroModalType DescriptionType);                                                   // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.HandleTurnOnClicked
	// void HandleTurnOnClicked();                                                                                           // [0xb8eee24] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.HandleTurnOffClicked
	// void HandleTurnOffClicked();                                                                                          // [0xb8eee10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.HandleLearnMore
	// void HandleLearnMore();                                                                                               // [0xb8eedfc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/VoiceRep.VoiceRepTooltipBase
/// Size: 0x0008 (0x000460 - 0x000468)
class UVoiceRepTooltipBase : public UFortSidebarOnboardTooltipWidget
{ 
public:
	int32_t                                            AutoDismissTimerInterval;                                   // 0x0460   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0464   (0x0004)  MISSED
};

/// Class /Script/VoiceRep.VoiceRepDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class UVoiceRepDataAsset : public UDataAsset
{ 
public:
	class UClass*                                      VoiceChatTooltipWidgetClass;                                // 0x0030   (0x0008)  
	class UClass*                                      FirstOnboardingWidgetClass;                                 // 0x0038   (0x0008)  
	class UClass*                                      SecondOnboardingWidgetClass;                                // 0x0040   (0x0008)  
	class UClass*                                      ReportVoiceWidgetClass;                                     // 0x0048   (0x0008)  
};

