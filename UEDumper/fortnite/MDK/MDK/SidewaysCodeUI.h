
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: SidewaysCodeRuntime
/// dependency: UMG

/// Class /Script/SidewaysCodeUI.SidewaysWidgetBase
/// Size: 0x0010 (0x000328 - 0x000338)
class USidewaysWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(class AFortPlayspaceReplicatedState*)      ReplicatedState                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(ESidewaysState)                            CurrentSidewaysState                                        OFFSET(get<T>, {0x330, 1, 0, 0})


	/// Functions
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged
	// void OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, ESidewaysState OldState, ESidewaysState NewState); // [0xb6d3a78] Final|Native|Protected 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated
	// void OnParamUpdated(FGameplayTag& UpdatedParam);                                                                         // [0x186becc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways
	// void OnExitSideways();                                                                                                   // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways
	// void OnEnterSideways(class ASidewaysPlayspace* Playspace);                                                               // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace
	// bool IsValidPlayspace(class ASidewaysPlayspace* Playspace);                                                              // [0x186becc] Event|Protected|BlueprintEvent|Const 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables
	// void InitializeVariables();                                                                                              // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged
	// void HandleFortPawnChanged(class AFortPawn* PossessedPawn);                                                              // [0xb6d39b8] Final|Native|Protected 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace
	// void ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace);                                                      // [0x186becc] Event|Protected|BlueprintEvent 
};

