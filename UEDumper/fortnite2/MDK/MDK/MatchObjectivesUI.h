
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: MatchQuestsRuntime
/// dependency: UMG

/// Class /Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker
/// Size: 0x0010 (0x000130 - 0x000140)
class UFortMobileButtonBehaviorComponent_MatchObjectivePicker : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(class UFortControllerComponent_SkydiveFeedback*) SkydiveFeedbackComp                                   OFFSET(get<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.FortMobileButtonBehaviorComponent_MatchObjectivePicker.HandleSkydiveModeChanged
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                              // [0xbdef050] Final|Native|Protected 
};

/// Class /Script/MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper
/// Size: 0x0018 (0x000360 - 0x000378)
class UFortMobileHUDElement_ObjectiveSelectorWrapper : public UFortMobileHUDElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(class UFortPlayerStateComponent_MatchQuests*) MatchQuestsComponent                                     OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class UOverlay*)                           Overlay_WrapperContents                                     OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.FortMobileHUDElement_ObjectiveSelectorWrapper.HandleSkydiveFromBusAndLandingCompleted
	// void HandleSkydiveFromBusAndLandingCompleted(bool bSkydivedFromBusAndLanded);                                            // [0xbdeef50] Final|Native|Public  
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget
/// Size: 0x0038 (0x0002C8 - 0x000300)
class UMatchObjectivesOptionEntryWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	DMember(bool)                                      bIsOptionSelected                                           OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	DMember(bool)                                      bIsOptionFocused                                            OFFSET(get<bool>, {0x2C9, 1, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_TapSelect                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnTeammateSelectionUpdated
	// void OnTeammateSelectionUpdated(TArray<AFortPlayerState*>& PlayersThatHaveSelectedThis);                                 // [0x228deb8] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnOptionSelectedStateChanged
	// void OnOptionSelectedStateChanged(bool bIsSelected);                                                                     // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnOptionFocusedStateChanged
	// void OnOptionFocusedStateChanged(bool bIsFocused);                                                                       // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesOptionEntryWidget.OnMatchObjectiveEntrySetup
	// void OnMatchObjectiveEntrySetup(FUrgentQuestData& UrgentQuestData, FFortItemQuantityPair& VisibleReward, int32_t ObjectiveCount); // [0x228deb8] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UMatchObjectivesSocialAvatar : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(class UFortSocialAvatarIcon*)              Icon_SocialAvatar                                           OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar.SetSocialAvatarTexture
	// void SetSocialAvatarTexture(TWeakObjectPtr<UTexture2D*>& AvatarTexture);                                                 // [0xbdef910] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSocialAvatar.SetSocialAvatar
	// void SetSocialAvatar(class AFortPlayerState* PlayerState);                                                               // [0xbdef888] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase
/// Size: 0x0018 (0x0002B0 - 0x0002C8)
class AMatchObjectivesUIDirectorBase : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.OnQuestOfferingAvailable
	// void OnQuestOfferingAvailable();                                                                                         // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.OnFinishSkydiving
	// void OnFinishSkydiving();                                                                                                // [0x228deb8] Event|Public|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.HandleSkydiveModeChanged
	// void HandleSkydiveModeChanged(ESkydiveFeedbackPhase Phase);                                                              // [0xbdeefd0] Final|Native|Public  
	// Function /Script/MatchObjectivesUI.MatchObjectivesUIDirectorBase.CheckQuestOffering
	// void CheckQuestOffering();                                                                                               // [0xbdeef08] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget
/// Size: 0x0028 (0x000330 - 0x000358)
class UMatchObjectivesSelectorWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(class UDynamicEntryBox*)                   DynamicEntryBox_OptionEntries                               OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(EMatchQuestsSelectorState)                 WidgetSelectorState                                         OFFSET(get<T>, {0x338, 1, 0, 0})
	CMember(class UInputComponent*)                    MatchObjectivesInputComponent                               OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class UCommonButtonBase*)                  Button_HeaderToggle                                         OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.UpdateKeybindings
	// void UpdateKeybindings();                                                                                                // [0xbdef9b0] Final|Native|Protected 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.SetSelectorState
	// void SetSelectorState(EMatchQuestsSelectorState State);                                                                  // [0xbdef808] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.PopulateChallengeEntries
	// void PopulateChallengeEntries(TArray<TScriptInterface<Class>>& QuestOffering);                                           // [0xbdef118] Final|Native|Private|HasOutParms 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.OnSelectorOpenStateChanged
	// void OnSelectorOpenStateChanged();                                                                                       // [0x228deb8] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.OnQuestEntrySelected
	// void OnQuestEntrySelected(class UUserWidget* SelectedEntry);                                                             // [0x228deb8] Event|Protected|BlueprintEvent 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.IsOpenByDefault
	// bool IsOpenByDefault();                                                                                                  // [0xbdef0d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MatchObjectivesUI.MatchObjectivesSelectorWidget.GetDailyChallengesFromMCP
	// void GetDailyChallengesFromMCP();                                                                                        // [0xbdeef3c] Final|Native|Protected|BlueprintCallable 
};

/// Enum /Script/MatchObjectivesUI.EMatchQuestsSelectorState
/// Size: 0x03
enum class EMatchQuestsSelectorState : uint8_t
{
	EMatchQuestsSelectorState__EMinimized                                            = 0,
	EMatchQuestsSelectorState__EOpen                                                 = 1,
	EMatchQuestsSelectorState__EMinimizing                                           = 2
};

