
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/CommonUILegacy.CommonActivatablePanelLegacy
/// Size: 0x0138 (0x000400 - 0x000538)
class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	SMember(FMulticastInlineDelegate)                  OnWidgetActivated                                           OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetDeactivated                                         OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	DMember(bool)                                      bConsumeAllActions                                          OFFSET(get<bool>, {0x428, 1, 0, 0})
	DMember(bool)                                      bExposeActionsExternally                                    OFFSET(get<bool>, {0x429, 1, 0, 0})
	DMember(bool)                                      bShouldBypassStack                                          OFFSET(get<bool>, {0x42A, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu
	// void SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x7d07f4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress
	// void SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // [0x7d07d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu
	// void SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x7d07b34] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler
	// void SetInputActionHandler(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent);                         // [0x7d079c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent
	// void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, FName RowName, EInputActionState State, FDelegateProperty DisabledCommitEvent); // [0x7d0730c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent
	// void SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FDelegateProperty DisabledCommitEvent); // [0x7d07120] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle
	// void SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State);                       // [0x7d06fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState
	// void SetActionHandlerState(class UDataTable* DataTable, FName RowName, EInputActionState State);                         // [0x7d06dcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler
	// void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);                                                       // [0x7d06ccc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers
	// void RemoveAllInputActionHandlers();                                                                                     // [0x7d06cb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.PopPanel
	// void PopPanel();                                                                                                         // [0x7d069f0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher
	// void OnTransitionedBySwitcher();                                                                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack
	// void OnRemovedFromActivationStack();                                                                                     // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged
	// void OnInputModeChanged(bool bUsingGamepad);                                                                             // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro
	// void OnBeginOutro();                                                                                                     // [0x3c41968] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro
	// void OnBeginIntro();                                                                                                     // [0x3c419b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack
	// void OnAddedToActivationStack();                                                                                         // [0x186becc] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed
	// bool IsIntroed();                                                                                                        // [0x7d063f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack
	// bool IsInActivationStack();                                                                                              // [0x7d063ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler
	// bool HasInputActionHandler(FDataTableRowHandle InputActionRow);                                                          // [0x7d062cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions
	// bool GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows);                                        // [0x7d049b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndOutro
	// void EndOutro();                                                                                                         // [0x7d0427c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndIntro
	// void EndIntro();                                                                                                         // [0x7d04268] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro
	// void BeginOutro();                                                                                                       // [0x7d040f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro
	// void BeginIntro();                                                                                                       // [0x7d040dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler
	// void AddInputActionNoHandler(class UDataTable* DataTable, FName RowName);                                                // [0x7d03f74] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup
	// void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x7d03c58] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress
	// void AddInputActionHandlerWithProgress(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // [0x7d039fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup
	// void AddInputActionHandlerWithPopup(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x7d03758] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler
	// void AddInputActionHandler(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent);                 // [0x7d0358c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonButtonInternalLegacy
/// Size: 0x0000 (0x000640 - 0x000640)
class UCommonButtonInternalLegacy : public UCommonButtonInternalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
};

/// Class /Script/CommonUILegacy.CommonButtonLegacy
/// Size: 0x0050 (0x001490 - 0x0014E0)
class UCommonButtonLegacy : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedChanged                                           OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonClicked                                             OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonDoubleClicked                                       OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonHovered                                             OFFSET(getStruct<T>, {0x14C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonUnhovered                                           OFFSET(getStruct<T>, {0x14D0, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy
	// void SetTriggeredInputActionLegacy(FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel);  // [0x7d0828c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged
	// void HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected);                                          // [0x21329fc] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered
	// void HandleOnButtonUnhovered(class UCommonButtonBase* Button);                                                           // [0x7d05ba0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered
	// void HandleOnButtonHovered(class UCommonButtonBase* Button);                                                             // [0x7d05ae0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked
	// void HandleOnButtonDoubleClicked(class UCommonButtonBase* Button);                                                       // [0x7d05a20] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked
	// void HandleOnButtonClicked(class UCommonButtonBase* Button);                                                             // [0x7d05824] Final|Native|Private 
};

/// Class /Script/CommonUILegacy.CommonGlobalInputHandlerLegacy
/// Size: 0x0048 (0x000028 - 0x000070)
class UCommonGlobalInputHandlerLegacy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CommonUILegacy.CommonInputManagerLegacy
/// Size: 0x00E0 (0x000028 - 0x000108)
class UCommonInputManagerLegacy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TScriptInterface<Class>)                   CurrentlyHeldActionInputHandler                             OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<class UCommonActivatablePanelLegacy*>) ActivatablePanelStack                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(class UCommonGlobalInputHandlerLegacy*)    GlobalInputHandler                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TArray<FOperation>)                        Operations                                                  OFFSET(get<T>, {0xE8, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing
	// void SuspendStartingOperationProcessing();                                                                               // [0x7d086f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction
	// bool StopListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // [0x7d08584] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction
	// bool StartListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // [0x7d08410] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter
	// void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority);                                                      // [0x7d07900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing
	// void ResumeStartingOperationProcessing();                                                                                // [0x7d06db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel
	// void PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow); // [0x7d06a2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel
	// void PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel);                                         // [0x7d06930] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack
	// bool IsPanelOnStack(class UCommonActivatablePanelLegacy* InPanel);                                                       // [0x7d06408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended
	// bool IsInputSuspended();                                                                                                 // [0x7d063c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetTopPanel
	// class UCommonActivatablePanelLegacy* GetTopPanel();                                                                      // [0x7d05108] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter
	// int32_t GetGlobalInputHandlerPriorityFilter();                                                                           // [0x7d04998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions
	// bool GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions);                             // [0x7d04290] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonInputReflectorLegacy
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UCommonInputReflectorLegacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(class UClass*)                             ButtonType                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TArray<class UCommonButtonLegacy*>)        ActiveButtons                                               OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<class UCommonButtonLegacy*>)        InactiveButtons                                             OFFSET(get<T>, {0x300, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded
	// void OnButtonAdded(class UCommonButtonLegacy* AddedButton, FCommonInputActionHandlerData& Data);                         // [0x186becc] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/CommonUILegacy.CommonPopupButtonLegacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UCommonPopupButtonLegacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(class UMenuAnchor*)                        PopupMenuAnchor                                             OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(class UCommonPopupMenuLegacy*)             PopupMenu                                                   OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget
	// class UUserWidget* GetMenuAnchorWidget();                                                                                // [0x7d04ff0] Final|Native|Private 
};

/// Class /Script/CommonUILegacy.CommonPopupMenuLegacy
/// Size: 0x0018 (0x000538 - 0x000550)
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	DMember(bool)                                      bUseInputStack                                              OFFSET(get<bool>, {0x538, 1, 0, 0})
	CMember(TWeakObjectPtr<UMenuAnchor*>)              OwningMenuAnchor                                            OFFSET(get<T>, {0x53C, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ContextProvidingObject                                      OFFSET(get<T>, {0x544, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor
	// void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);                                                                 // [0x7d081cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider
	// void SetContextProvider(class UObject* ContextProvidingObject);                                                          // [0x7d07840] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.RequestClose
	// void RequestClose();                                                                                                     // [0x7d06d9c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged
	// void OnIsOpenChanged(bool IsOpen);                                                                                       // [0x7d06724] Final|Native|Protected 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet
	// void HandlePreDifferentContextProviderSet();                                                                             // [0x7d0602c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet
	// void HandlePostDifferentContextProviderSet();                                                                            // [0x7d06014] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUILegacy.CommonTabListWidgetLegacy
/// Size: 0x0020 (0x000460 - 0x000480)
class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FMulticastInlineDelegate)                  OnTabButtonCreated                                          OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonRemoved                                          OFFSET(getStruct<T>, {0x470, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature
	// void OnTabButtonRemoved__DelegateSignature(FName TabID, class UCommonButtonLegacy* TabButton);                           // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature
	// void OnTabButtonCreated__DelegateSignature(FName TabID, class UCommonButtonLegacy* TabButton);                           // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved
	// void HandleTabRemoved(FName TabNameID, class UCommonButtonLegacy* TabButton);                                            // [0x7d06188] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated
	// void HandleTabCreated(FName TabNameID, class UCommonButtonLegacy* TabButton);                                            // [0x7d06044] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved
	// void HandleOnTabButtonRemoved(FName TabID, class UCommonButtonBase* TabButton);                                          // [0x7d05ed8] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated
	// void HandleOnTabButtonCreated(FName TabID, class UCommonButtonBase* TabButton);                                          // [0x2132ba8] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID
	// class UCommonButtonLegacy* GetTabButtonByID(FName TabNameID);                                                            // [0x7d0502c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonUISubsystemLegacy
/// Size: 0x0030 (0x000040 - 0x000070)
class UCommonUISubsystemLegacy : public UCommonUISubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FMulticastInlineDelegate)                  OnInputSuspensionChanged                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(class UCommonInputManagerLegacy*)          CommonInputManager                                          OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature
	// void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);                                                    // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonUISubsystemLegacy.GetInputManager
	// class UCommonInputManagerLegacy* GetInputManager();                                                                      // [0x74e4a54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUILegacy.CommonVisibilityWidgetLegacy
/// Size: 0x0010 (0x000320 - 0x000330)
class UCommonVisibilityWidgetLegacy : public UCommonBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	DMember(bool)                                      bShowForGamepad                                             OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      bShowForMouseAndKeyboard                                    OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(bool)                                      bShowForTouch                                               OFFSET(get<bool>, {0x322, 1, 0, 0})
	DMember(bool)                                      bShowForPC                                                  OFFSET(get<bool>, {0x323, 1, 0, 0})
	DMember(bool)                                      bShowForMac                                                 OFFSET(get<bool>, {0x324, 1, 0, 0})
	DMember(bool)                                      bShowForPS4                                                 OFFSET(get<bool>, {0x325, 1, 0, 0})
	DMember(bool)                                      bShowForPS5                                                 OFFSET(get<bool>, {0x326, 1, 0, 0})
	DMember(bool)                                      bShowForXBox                                                OFFSET(get<bool>, {0x327, 1, 0, 0})
	DMember(bool)                                      bShowForXSX                                                 OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(bool)                                      bShowForIOS                                                 OFFSET(get<bool>, {0x329, 1, 0, 0})
	DMember(bool)                                      bShowForAndroid                                             OFFSET(get<bool>, {0x32A, 1, 0, 0})
	DMember(bool)                                      bShowForErebus                                              OFFSET(get<bool>, {0x32B, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibleType                                                 OFFSET(get<T>, {0x32C, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenType                                                  OFFSET(get<T>, {0x32D, 1, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonWidgetStackLegacy
/// Size: 0x0010 (0x0001C8 - 0x0001D8)
class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetChangedLegacyEvent                            OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PushWidget
	// void PushWidget(class UWidget* InWidget);                                                                                // [0x7d06bf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PopWidget
	// class UWidget* PopWidget();                                                                                              // [0x7d06a08] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature
	// void OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* InActiveWidget, int32_t InActiveWidgetIndex);         // [0x186becc] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x7d04254] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x7d03560] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonWidgetSwitcherLegacy
/// Size: 0x0028 (0x000228 - 0x000250)
class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetDeactivated                                   OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetChanged                                       OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	DMember(bool)                                      bWidgetActivationEnabled                                    OFFSET(get<bool>, {0x248, 1, 0, 0})
	DMember(bool)                                      bOutroPanelBelow                                            OFFSET(get<bool>, {0x249, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced
	// void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange);                                         // [0x7d07590] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced
	// void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);                                      // [0x7d076d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated
	// void HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                               // [0x7d0512c] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x2201cc8] Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x7d03574] Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonButtonGroupLegacy
/// Size: 0x00A0 (0x000110 - 0x0001B0)
class UCommonButtonGroupLegacy : public UCommonButtonGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedButtonChanged                                     OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoveredButtonChanged                                      OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonClicked                                             OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonDoubleClicked                                       OFFSET(getStruct<T>, {0x188, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged
	// void OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected);                                   // [0x7d067e8] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked
	// void OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton);                                                 // [0x7d06660] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked
	// void OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton);                                                       // [0x7d0659c] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered
	// void OnButtonUnhovered(class UCommonButtonLegacy* BaseButton);                                                           // [0x6628ffc] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered
	// void OnButtonHovered(class UCommonButtonLegacy* BaseButton);                                                             // [0x7d064d8] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged
	// void HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                  // [0x7d05d9c] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged
	// void HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                   // [0x7d05c60] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked
	// void HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                    // [0x7d058e4] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked
	// void HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                          // [0x7d056e8] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged
	// void HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);            // [0x7d055ac] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged
	// void HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);             // [0x7d05470] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked
	// void HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);              // [0x7d05334] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked
	// void HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                    // [0x7d051f8] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton
	// class UCommonButtonLegacy* GetSelectedButton();                                                                          // [0x7d05008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex
	// class UCommonButtonLegacy* GetButtonAtIndex(int32_t Index);                                                              // [0x7d048c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup
	// class UCommonButtonGroupLegacy* CreateButtonGroup(class UObject* ContextObject, bool bInSelectionRequired);              // [0x7d04104] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonUIActionRouterLegacy
/// Size: 0x0008 (0x000170 - 0x000178)
class UCommonUIActionRouterLegacy : public UCommonUIActionRouterBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Struct /Script/CommonUILegacy.Operation
/// Size: 0x0028 (0x000000 - 0x000028)
class FOperation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EOperation)                                Operation                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UCommonActivatablePanelLegacy*)      Panel                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIntroPanel                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bActivatePanel                                              OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bOutroPanelBelow                                            OFFSET(get<bool>, {0x12, 1, 0, 0})
};

/// Struct /Script/CommonUILegacy.CommonInputActionData
/// Size: 0x05F0 (0x000360 - 0x000950)
class FCommonInputActionData : public FCommonInputActionDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2384;

public:
	CMember(TMap<ECommonGamepadType, FCommonInputTypeInfo>) GamepadInputTypeInfoOverrides                          OFFSET(get<T>, {0x360, 80, 0, 0})
	SMember(FCommonInputTypeInfo)                      GamepadInputTypeInfos                                       OFFSET(getStruct<T>, {0x3B0, 1440, 0, 0})
};

/// Enum /Script/CommonUILegacy.EOperation
/// Size: 0x06
enum class EOperation : uint8_t
{
	EOperation__Intro                                                                = 0,
	EOperation__Outro                                                                = 1,
	EOperation__Push                                                                 = 2,
	EOperation__Pop                                                                  = 3,
	EOperation__Invalid                                                              = 4,
	EOperation__EOperation_MAX                                                       = 5
};

/// Enum /Script/CommonUILegacy.ECommonPlatformType
/// Size: 0x11
enum class ECommonPlatformType : uint8_t
{
	ECommonPlatformType__PC                                                          = 0,
	ECommonPlatformType__Mac                                                         = 1,
	ECommonPlatformType__PS4                                                         = 2,
	ECommonPlatformType__XBox                                                        = 3,
	ECommonPlatformType__IOS                                                         = 4,
	ECommonPlatformType__Android                                                     = 5,
	ECommonPlatformType__Switch                                                      = 6,
	ECommonPlatformType__XSX                                                         = 7,
	ECommonPlatformType__PS5                                                         = 8,
	ECommonPlatformType__Count                                                       = 9,
	ECommonPlatformType__ECommonPlatformType_MAX                                     = 10
};

/// Enum /Script/CommonUILegacy.ECommonGamepadType
/// Size: 0x08
enum class ECommonGamepadType : uint8_t
{
	ECommonGamepadType__XboxOneController                                            = 0,
	ECommonGamepadType__PS4Controller                                                = 1,
	ECommonGamepadType__SwitchController                                             = 2,
	ECommonGamepadType__GenericController                                            = 3,
	ECommonGamepadType__XboxSeriesXController                                        = 4,
	ECommonGamepadType__PS5Controller                                                = 5,
	ECommonGamepadType__Count                                                        = 6,
	ECommonGamepadType__ECommonGamepadType_MAX                                       = 7
};

