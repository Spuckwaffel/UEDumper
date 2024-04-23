
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
/// Size: 0x0010 (0x000330 - 0x000340)
class USidewaysWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(class AFortPlayspaceReplicatedState*)      ReplicatedState                                             OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(ESidewaysState)                            CurrentSidewaysState                                        OFFSET(get<T>, {0x338, 1, 0, 0})


	/// Functions
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged
	// void OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, ESidewaysState OldState, ESidewaysState NewState); // [0xbbdfe54] Final|Native|Protected 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated
	// void OnParamUpdated(FGameplayTag& UpdatedParam);                                                                         // [0x1340978] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways
	// void OnExitSideways();                                                                                                   // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways
	// void OnEnterSideways(class ASidewaysPlayspace* Playspace);                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace
	// bool IsValidPlayspace(class ASidewaysPlayspace* Playspace);                                                              // [0x1340978] Event|Protected|BlueprintEvent|Const 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables
	// void InitializeVariables();                                                                                              // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged
	// void HandleFortPawnChanged(class AFortPawn* PossessedPawn);                                                              // [0xbbdfdd4] Final|Native|Protected 
	// Function /Script/SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace
	// void ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace);                                                      // [0x1340978] Event|Protected|BlueprintEvent 
};

