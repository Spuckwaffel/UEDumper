
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
/// Size: 0x0138 (0x000408 - 0x000540)
class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FMulticastInlineDelegate)                  OnWidgetActivated                                           OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetDeactivated                                         OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	DMember(bool)                                      bConsumeAllActions                                          OFFSET(get<bool>, {0x430, 1, 0, 0})
	DMember(bool)                                      bExposeActionsExternally                                    OFFSET(get<bool>, {0x431, 1, 0, 0})
	DMember(bool)                                      bShouldBypassStack                                          OFFSET(get<bool>, {0x432, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu
	// void SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x80abda4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress
	// void SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // [0x80abc64] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu
	// void SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x80abb08] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler
	// void SetInputActionHandler(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent);                         // [0x3e25cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent
	// void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, FName RowName, EInputActionState State, FDelegateProperty DisabledCommitEvent); // [0x80ab498] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent
	// void SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FDelegateProperty DisabledCommitEvent); // [0x80ab36c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle
	// void SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State);                       // [0x80ab294] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState
	// void SetActionHandlerState(class UDataTable* DataTable, FName RowName, EInputActionState State);                         // [0x80aafe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler
	// void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);                                                       // [0x80aaf24] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers
	// void RemoveAllInputActionHandlers();                                                                                     // [0x80aaf10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.PopPanel
	// void PopPanel();                                                                                                         // [0x80aad48] Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher
	// void OnTransitionedBySwitcher();                                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack
	// void OnRemovedFromActivationStack();                                                                                     // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged
	// void OnInputModeChanged(bool bUsingGamepad);                                                                             // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro
	// void OnBeginOutro();                                                                                                     // [0x3d48bd8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro
	// void OnBeginIntro();                                                                                                     // [0x3d48c20] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack
	// void OnAddedToActivationStack();                                                                                         // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed
	// bool IsIntroed();                                                                                                        // [0x80aa948] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack
	// bool IsInActivationStack();                                                                                              // [0x80aa904] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler
	// bool HasInputActionHandler(FDataTableRowHandle InputActionRow);                                                          // [0x80aa864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions
	// bool GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows);                                        // [0x80a9028] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndOutro
	// void EndOutro();                                                                                                         // [0x80a887c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndIntro
	// void EndIntro();                                                                                                         // [0x80a8868] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro
	// void BeginOutro();                                                                                                       // [0x80a8770] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro
	// void BeginIntro();                                                                                                       // [0x80a875c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler
	// void AddInputActionNoHandler(class UDataTable* DataTable, FName RowName);                                                // [0x80a85ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup
	// void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x80a80e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress
	// void AddInputActionHandlerWithProgress(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // [0x80a7d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup
	// void AddInputActionHandlerWithPopup(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu); // [0x80a79c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler
	// void AddInputActionHandler(class UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent);                 // [0x80a7728] Final|Native|Public|BlueprintCallable 
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
/// Size: 0x0050 (0x001480 - 0x0014D0)
class UCommonButtonLegacy : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedChanged                                           OFFSET(getStruct<T>, {0x1480, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonClicked                                             OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonDoubleClicked                                       OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonHovered                                             OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonUnhovered                                           OFFSET(getStruct<T>, {0x14C0, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy
	// void SetTriggeredInputActionLegacy(FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel);  // [0x80abfac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged
	// void HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected);                                          // [0x2507ba0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered
	// void HandleOnButtonUnhovered(class UCommonButtonBase* Button);                                                           // [0x80a9f7c] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered
	// void HandleOnButtonHovered(class UCommonButtonBase* Button);                                                             // [0x80a9efc] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked
	// void HandleOnButtonDoubleClicked(class UCommonButtonBase* Button);                                                       // [0x80a9e7c] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked
	// void HandleOnButtonClicked(class UCommonButtonBase* Button);                                                             // [0x80a9d38] Final|Native|Private 
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
	// void SuspendStartingOperationProcessing();                                                                               // [0x80ac434] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction
	// bool StopListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // [0x80ac2c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction
	// bool StartListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // [0x80ac14c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter
	// void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority);                                                      // [0x80aba8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing
	// void ResumeStartingOperationProcessing();                                                                                // [0x80aafc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel
	// void PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow); // [0x80aad84] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel
	// void PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel);                                         // [0x80aacc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack
	// bool IsPanelOnStack(class UCommonActivatablePanelLegacy* InPanel);                                                       // [0x80aa960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended
	// bool IsInputSuspended();                                                                                                 // [0x80aa91c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetTopPanel
	// class UCommonActivatablePanelLegacy* GetTopPanel();                                                                      // [0x80a98b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter
	// int32_t GetGlobalInputHandlerPriorityFilter();                                                                           // [0x80a9008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions
	// bool GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions);                             // [0x80a8890] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonInputReflectorLegacy
/// Size: 0x0030 (0x0002F0 - 0x000320)
class UCommonInputReflectorLegacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UClass*)                             ButtonType                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(TArray<class UCommonButtonLegacy*>)        ActiveButtons                                               OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<class UCommonButtonLegacy*>)        InactiveButtons                                             OFFSET(get<T>, {0x308, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded
	// void OnButtonAdded(class UCommonButtonLegacy* AddedButton, FCommonInputActionHandlerData& Data);                         // [0x1340978] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/CommonUILegacy.CommonPopupButtonLegacy
/// Size: 0x0010 (0x0014D0 - 0x0014E0)
class UCommonPopupButtonLegacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(class UMenuAnchor*)                        PopupMenuAnchor                                             OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(class UCommonPopupMenuLegacy*)             PopupMenu                                                   OFFSET(get<T>, {0x14D8, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget
	// class UUserWidget* GetMenuAnchorWidget();                                                                                // [0x80a9714] Final|Native|Private 
};

/// Class /Script/CommonUILegacy.CommonPopupMenuLegacy
/// Size: 0x0018 (0x000540 - 0x000558)
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
	DMember(bool)                                      bUseInputStack                                              OFFSET(get<bool>, {0x540, 1, 0, 0})
	CMember(TWeakObjectPtr<UMenuAnchor*>)              OwningMenuAnchor                                            OFFSET(get<T>, {0x544, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ContextProvidingObject                                      OFFSET(get<T>, {0x54C, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor
	// void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);                                                                 // [0x80abf2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider
	// void SetContextProvider(class UObject* ContextProvidingObject);                                                          // [0x80aba0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.RequestClose
	// void RequestClose();                                                                                                     // [0x80aafb4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged
	// void OnIsOpenChanged(bool IsOpen);                                                                                       // [0x80aab7c] Final|Native|Protected 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet
	// void HandlePreDifferentContextProviderSet();                                                                             // [0x80aa3d4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet
	// void HandlePostDifferentContextProviderSet();                                                                            // [0x80aa3bc] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUILegacy.CommonTabListWidgetLegacy
/// Size: 0x0020 (0x000468 - 0x000488)
class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FMulticastInlineDelegate)                  OnTabButtonCreated                                          OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonRemoved                                          OFFSET(getStruct<T>, {0x478, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature
	// void OnTabButtonRemoved__DelegateSignature(FName TabID, class UCommonButtonLegacy* TabButton);                           // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature
	// void OnTabButtonCreated__DelegateSignature(FName TabID, class UCommonButtonLegacy* TabButton);                           // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved
	// void HandleTabRemoved(FName TabNameID, class UCommonButtonLegacy* TabButton);                                            // [0x80aa628] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated
	// void HandleTabCreated(FName TabNameID, class UCommonButtonLegacy* TabButton);                                            // [0x80aa3ec] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved
	// void HandleOnTabButtonRemoved(FName TabID, class UCommonButtonBase* TabButton);                                          // [0x80aa184] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated
	// void HandleOnTabButtonCreated(FName TabID, class UCommonButtonBase* TabButton);                                          // [0x2507cc4] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID
	// class UCommonButtonLegacy* GetTabButtonByID(FName TabNameID);                                                            // [0x80a9750] Final|Native|Protected|BlueprintCallable 
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
	// void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);                                                    // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonUISubsystemLegacy.GetInputManager
	// class UCommonInputManagerLegacy* GetInputManager();                                                                      // [0x77412c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
/// Size: 0x0010 (0x0001C0 - 0x0001D0)
class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetChangedLegacyEvent                            OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PushWidget
	// void PushWidget(class UWidget* InWidget);                                                                                // [0x80aae90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PopWidget
	// class UWidget* PopWidget();                                                                                              // [0x80aad60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature
	// void OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* InActiveWidget, int32_t InActiveWidgetIndex);         // [0x1340978] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x80a8854] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x80a76fc] Final|Native|Protected|BlueprintCallable 
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
	// void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange);                                         // [0x80ab850] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced
	// void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);                                      // [0x80ab914] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated
	// void HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);                               // [0x80a98d8] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x34b7b0c] Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x80a7710] Native|Public|BlueprintCallable 
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
	// void OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected);                                   // [0x80aabfc] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked
	// void OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton);                                                 // [0x80aaaf8] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked
	// void OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton);                                                       // [0x80aaa74] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered
	// void OnButtonUnhovered(class UCommonButtonLegacy* BaseButton);                                                           // [0x67424d0] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered
	// void OnButtonHovered(class UCommonButtonLegacy* BaseButton);                                                             // [0x80aa9f0] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged
	// void HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                  // [0x80aa0c0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged
	// void HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                   // [0x80a9ffc] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked
	// void HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                    // [0x80a9db8] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked
	// void HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                          // [0x80a9c74] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged
	// void HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);            // [0x80a9bb0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged
	// void HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);             // [0x80a9aec] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked
	// void HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);              // [0x80a9a28] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked
	// void HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                    // [0x80a9964] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton
	// class UCommonButtonLegacy* GetSelectedButton();                                                                          // [0x80a972c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex
	// class UCommonButtonLegacy* GetButtonAtIndex(int32_t Index);                                                              // [0x80a8f7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup
	// class UCommonButtonGroupLegacy* CreateButtonGroup(class UObject* ContextObject, bool bInSelectionRequired);              // [0x80a8784] Final|Native|Static|Public|BlueprintCallable 
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
/// Size: 0x05F0 (0x000350 - 0x000940)
class FCommonInputActionData : public FCommonInputActionDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	CMember(TMap<ECommonGamepadType, FCommonInputTypeInfo>) GamepadInputTypeInfoOverrides                          OFFSET(get<T>, {0x350, 80, 0, 0})
	SMember(FCommonInputTypeInfo)                      GamepadInputTypeInfos                                       OFFSET(getStruct<T>, {0x3A0, 1440, 0, 0})
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

